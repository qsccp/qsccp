#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/ndnSIM-module.h"
#include "../extensions/QSCCPStrategy.h"

namespace ns3
{

    int
    main(int argc, char *argv[])
    {
        CommandLine cmd;
        cmd.Parse(argc, argv);

        AnnotatedTopologyReader topologyReader("", 25);
        topologyReader.SetFileName("topologies/qtest.txt");
        topologyReader.Read();

        // Install NDN stack on all nodes
        ndn::StackHelper ndnHelper;
        ndnHelper.setPolicy("nfd::cs::lru");
        // ndnHelper.setCsSize(10000);
        ndnHelper.setCsSize(0);
        ndnHelper.InstallAll();

        // Choosing forwarding strategy
        // ndn::StrategyChoiceHelper::InstallAll<nfd::fw::QSCCPStrategy>("/");
        ndn::StrategyChoiceHelper::InstallAll("/prefix", "/localhost/nfd/strategy/multicast");

        // Installing global routing interface on all nodes
        ndn::GlobalRoutingHelper ndnGlobalRoutingHelper;
        ndnGlobalRoutingHelper.InstallAll();

        // Getting containers for the consumer/producer
        Ptr<Node> C1 = Names::Find<Node>("C1");

        Ptr<Node> P1 = Names::Find<Node>("P1");

        // ndn::AppHelper consumerHelper("ns3::ndn::ConsumerQSCCP");
        // consumerHelper.SetAttribute("Dsz", UintegerValue(8696));

        ndn::AppHelper consumerHelper("ns3::ndn::ConsumerQSCCP");
        consumerHelper.SetAttribute("Dsz", UintegerValue(8696));
        // consumerHelper.SetAttribute("NumberOfContents", UintegerValue(10000));
        // consumerHelper.SetAttribute("Randomize", StringValue("exponential"));

        // C1 => EF
        consumerHelper.SetAttribute("Tos", UintegerValue(2));
        for (int i = 0; i < 10; i++)
        {
            consumerHelper.SetPrefix("/A" + std::to_string(i));
            consumerHelper.Install(C1);
        }

       
        ndn::AppHelper producerHelper("ns3::ndn::Producer");
        producerHelper.SetAttribute("PayloadSize", StringValue("1024"));

        // Register /dst1 prefix with global routing controller and
        // install producer that will satisfy Interests in /dst1 namespace
        // P1

        // P1 => EF => /A*
        for (int i = 0; i < 10; i++) {
            producerHelper.SetPrefix("/A" + std::to_string(i));
            ndnGlobalRoutingHelper.AddOrigins("/A" + std::to_string(i), P1);
            producerHelper.Install(P1);
        }
        
        // Calculate all possible routes and install FIBs
        ndn::GlobalRoutingHelper::CalculateRoutes();
        Simulator::Stop(Seconds(20.0));

        ndn::L3RateTracer::InstallAll("qtest-throughput-s2.txt", Seconds(0.5));
        ndn::AppDelayTracer::InstallAll("qtest-delay-s2.txt");
        L2RateTracer::InstallAll("qtest-drop-s2.txt", Seconds(0.5));
        Simulator::Run();
        Simulator::Destroy();

        return 0;
    }

} // namespace ns3

int main(int argc, char *argv[])
{
    return ns3::main(argc, argv);
}
