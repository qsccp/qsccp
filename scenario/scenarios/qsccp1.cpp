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
        topologyReader.SetFileName("topologies/qsccp1.txt");
        topologyReader.Read();

        // Install NDN stack on all nodes
        ndn::StackHelper ndnHelper;
        ndnHelper.setPolicy("nfd::cs::lru");
        // ndnHelper.setCsSize(10000);
        ndnHelper.setCsSize(0);
        ndnHelper.InstallAll();

        // Choosing forwarding strategy
        ndn::StrategyChoiceHelper::InstallAll<nfd::fw::QSCCPStrategy>("/");

        // Installing global routing interface on all nodes
        ndn::GlobalRoutingHelper ndnGlobalRoutingHelper;
        ndnGlobalRoutingHelper.InstallAll();

        // Getting containers for the consumer/producer
        Ptr<Node> C1 = Names::Find<Node>("C1");
        Ptr<Node> C2 = Names::Find<Node>("C2");
        Ptr<Node> C3 = Names::Find<Node>("C3");
        Ptr<Node> C4 = Names::Find<Node>("C4");

        Ptr<Node> P1 = Names::Find<Node>("P1");
        Ptr<Node> P2 = Names::Find<Node>("P2");
        Ptr<Node> P3 = Names::Find<Node>("P3");
        Ptr<Node> P4 = Names::Find<Node>("P4");

        // ndn::AppHelper consumerHelper("ns3::ndn::ConsumerQSCCP");
        // consumerHelper.SetAttribute("Dsz", UintegerValue(8696));

        ndn::AppHelper consumerHelper("ns3::ndn::ConsumerQSCCP");
        consumerHelper.SetAttribute("Dsz", UintegerValue(8624));
        // consumerHelper.SetAttribute("NumberOfContents", UintegerValue(10000));
        // consumerHelper.SetAttribute("Randomize", StringValue("exponential"));

        // C1 => EF
        consumerHelper.SetAttribute("Tos", UintegerValue(2));
        consumerHelper.SetAttribute("FixedRate", IntegerValue(100000));
        for (int i = 0; i < 10; i++)
        {
            consumerHelper.SetPrefix("/A" + std::to_string(i));
            consumerHelper.Install(C1);
        }

        consumerHelper.SetAttribute("FixedRate", IntegerValue(-1));

        // C2 => AF2
        consumerHelper.SetAttribute("Tos", UintegerValue(5));
        for (int i = 0; i < 10; i++)
        {
            consumerHelper.SetPrefix("/B" + std::to_string(i));
            consumerHelper.Install(C2);
        }

        // C3 => AF1
        consumerHelper.SetAttribute("Tos", UintegerValue(6));
        for (int i = 0; i < 10; i++)
        {
            consumerHelper.SetPrefix("/C" + std::to_string(i));
            consumerHelper.Install(C3);
        }

        // C4 => BE
        consumerHelper.SetAttribute("Tos", UintegerValue(7));
        for (int i = 0; i < 10; i++)
        {
            consumerHelper.SetPrefix("/D" + std::to_string(i));
            consumerHelper.Install(C4);
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

        // P2 => AF2 => /B*
        for (int i = 0; i < 10; i++) {
            producerHelper.SetPrefix("/B" + std::to_string(i));
            ndnGlobalRoutingHelper.AddOrigins("/B" + std::to_string(i), P2);
            producerHelper.Install(P2);
        }

        // P3 => AF1 => /C*
        for (int i = 0; i < 10; i++) {
            producerHelper.SetPrefix("/C" + std::to_string(i));
            ndnGlobalRoutingHelper.AddOrigins("/C" + std::to_string(i), P3);
            producerHelper.Install(P3);
        }

        // P4 => AF1 => /D*
        for (int i = 0; i < 10; i++) {
            producerHelper.SetPrefix("/D" + std::to_string(i));
            ndnGlobalRoutingHelper.AddOrigins("/D" + std::to_string(i), P4);
            producerHelper.Install(P4);
        }

        
        // Calculate all possible routes and install FIBs
        ndn::GlobalRoutingHelper::CalculateRoutes();

        Simulator::Stop(Seconds(120.0));

        ndn::L3RateTracer::InstallAll("qsccp-throughput-s1.txt", Seconds(0.5));
        ndn::AppDelayTracer::InstallAll("qsccp-delay-s1.txt");
        L2RateTracer::InstallAll("qsccp-drop-s1.txt", Seconds(0.5));
        Simulator::Run();
        Simulator::Destroy();

        return 0;
    }

} // namespace ns3

int main(int argc, char *argv[])
{
    return ns3::main(argc, argv);
}
