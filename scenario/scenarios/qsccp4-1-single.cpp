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
        topologyReader.SetFileName("topologies/qsccp4.txt");
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
        Ptr<Node> C5 = Names::Find<Node>("C5");
        Ptr<Node> C6 = Names::Find<Node>("C6");
        Ptr<Node> C7 = Names::Find<Node>("C7");
        Ptr<Node> C8 = Names::Find<Node>("C8");

        Ptr<Node> P1 = Names::Find<Node>("P1");
        Ptr<Node> P2 = Names::Find<Node>("P2");
        Ptr<Node> P3 = Names::Find<Node>("P3");

        ndn::AppHelper consumerHelper("ns3::ndn::ConsumerQSCCP");
        consumerHelper.SetAttribute("Dsz", UintegerValue(8624));
        consumerHelper.SetAttribute("ReqNum", IntegerValue(5000));
        // consumerHelper.SetAttribute("NumberOfContents", UintegerValue(100000));

        consumerHelper.SetAttribute("Tos", UintegerValue(5));

        // /Amazon
        consumerHelper.SetPrefix("/Amazon");
        consumerHelper.Install(C1);
        consumerHelper.Install(C2);
        consumerHelper.Install(C3);
        consumerHelper.Install(C4);
        consumerHelper.Install(C5);
        consumerHelper.Install(C6);
        consumerHelper.Install(C7);
        consumerHelper.Install(C8);

        // /Google
        consumerHelper.SetPrefix("/Google");
        consumerHelper.Install(C1);
        consumerHelper.Install(C2);
        consumerHelper.Install(C3);
        consumerHelper.Install(C4);
        consumerHelper.Install(C5);
        consumerHelper.Install(C6);
        consumerHelper.Install(C7);
        consumerHelper.Install(C8);

        // /Warner
        consumerHelper.SetPrefix("/Warner");
        consumerHelper.Install(C1);
        consumerHelper.Install(C2);
        consumerHelper.Install(C3);
        consumerHelper.Install(C4);
        consumerHelper.Install(C5);
        consumerHelper.Install(C6);
        consumerHelper.Install(C7);
        consumerHelper.Install(C8);


        //// /Amazon
        //consumerHelper.SetPrefix("/Amazon/1");
        //consumerHelper.Install(C1);
        //consumerHelper.SetPrefix("/Amazon/2");
        //consumerHelper.Install(C2);
        //consumerHelper.SetPrefix("/Amazon/3");
        //consumerHelper.Install(C3);
        //consumerHelper.SetPrefix("/Amazon/4");
        //consumerHelper.Install(C4);
        //consumerHelper.SetPrefix("/Amazon/5");
        //consumerHelper.Install(C5);
        //consumerHelper.SetPrefix("/Amazon/6");
        //consumerHelper.Install(C6);
        //consumerHelper.SetPrefix("/Amazon/7");
        //consumerHelper.Install(C7);
        //consumerHelper.SetPrefix("/Amazon/8");
        //consumerHelper.Install(C8);

        //// /Google
        //consumerHelper.SetPrefix("/Google/1");
        //consumerHelper.Install(C1);
        //consumerHelper.SetPrefix("/Google/2");
        //consumerHelper.Install(C2);
        //consumerHelper.SetPrefix("/Google/3");
        //consumerHelper.Install(C3);
        //consumerHelper.SetPrefix("/Google/4");
        //consumerHelper.Install(C4);
        //consumerHelper.SetPrefix("/Google/5");
        //consumerHelper.Install(C5);
        //consumerHelper.SetPrefix("/Google/6");
        //consumerHelper.Install(C6);
        //consumerHelper.SetPrefix("/Google/7");
        //consumerHelper.Install(C7);
        //consumerHelper.SetPrefix("/Google/8");
        //consumerHelper.Install(C8);

        //// /Warner
        //consumerHelper.SetPrefix("/Warner/1");
        //consumerHelper.Install(C1);
        //consumerHelper.SetPrefix("/Warner/2");
        //consumerHelper.Install(C2);
        //consumerHelper.SetPrefix("/Warner/3");
        //consumerHelper.Install(C3);
        //consumerHelper.SetPrefix("/Warner/4");
        //consumerHelper.Install(C4);
        //consumerHelper.SetPrefix("/Warner/5");
        //consumerHelper.Install(C5);
        //consumerHelper.SetPrefix("/Warner/6");
        //consumerHelper.Install(C6);
        //consumerHelper.SetPrefix("/Warner/7");
        //consumerHelper.Install(C7);
        //consumerHelper.SetPrefix("/Warner/8");
        //consumerHelper.Install(C8);

        ndn::AppHelper producerHelper("ns3::ndn::Producer");
        producerHelper.SetAttribute("PayloadSize", StringValue("1024"));

        // Register /dst1 prefix with global routing controller and
        // install producer that will satisfy Interests in /dst1 namespace

        producerHelper.SetPrefix("/Amazon");
        producerHelper.Install(P1);

        producerHelper.SetPrefix("/Google");
        producerHelper.Install(P2);
        
        producerHelper.SetPrefix("/Warner");
        producerHelper.Install(P3);

        // ndnGlobalRoutingHelper.AddOrigins("/Amazon", P1);
        // ndnGlobalRoutingHelper.AddOrigins("/Google", P2);
        // ndnGlobalRoutingHelper.AddOrigins("/Warner", P3);

        // // Calculate all possible routes and install FIBs
        // ndn::GlobalRoutingHelper::CalculateRoutes();


        ndn::FibHelper::AddRoute("R1", "/Amazon", "P1", 0);
        ndn::FibHelper::AddRoute("R1", "/Google", "R2", 0);

        ndn::FibHelper::AddRoute("R2", "/Amazon", "R1", 0);
        ndn::FibHelper::AddRoute("R2", "/Google", "R3", 0);
        ndn::FibHelper::AddRoute("R2", "/Warner", "R9", 0);

        ndn::FibHelper::AddRoute("R3", "/Amazon", "R2", 0);
        ndn::FibHelper::AddRoute("R3", "/Google", "R4", 0);
        ndn::FibHelper::AddRoute("R3", "/Warner", "R8", 0);

        ndn::FibHelper::AddRoute("R4", "/Amazon", "R3", 0);
        ndn::FibHelper::AddRoute("R4", "/Google", "R5", 0);
        ndn::FibHelper::AddRoute("R4", "/Warner", "R3", 0);

        ndn::FibHelper::AddRoute("R5", "/Google", "P2", 0);
    
        ndn::FibHelper::AddRoute("R6", "/Amazon", "R7", 0);
        ndn::FibHelper::AddRoute("R6", "/Google", "R5", 0);
        ndn::FibHelper::AddRoute("R6", "/Warner", "R7", 0);

        ndn::FibHelper::AddRoute("R7", "/Amazon", "R8", 0);
        ndn::FibHelper::AddRoute("R7", "/Google", "R5", 0);
        ndn::FibHelper::AddRoute("R7", "/Warner", "R8", 0);

        ndn::FibHelper::AddRoute("R8", "/Amazon", "R9", 0);
        ndn::FibHelper::AddRoute("R8", "/Google", "R7", 0);
        ndn::FibHelper::AddRoute("R8", "/Warner", "P3", 0);

        ndn::FibHelper::AddRoute("R9", "/Amazon", "R2", 0);
        ndn::FibHelper::AddRoute("R9", "/Google", "R8", 0);
        ndn::FibHelper::AddRoute("R9", "/Warner", "R8", 0);

        ndn::FibHelper::AddRoute("R10", "/Amazon", "R9", 0);
        ndn::FibHelper::AddRoute("R10", "/Google", "R9", 0);
        ndn::FibHelper::AddRoute("R10", "/Warner", "R9", 0);

        ndn::FibHelper::AddRoute("R0", "/Amazon", "R1", 0);
        ndn::FibHelper::AddRoute("R0", "/Google", "R1", 0);
        ndn::FibHelper::AddRoute("R0", "/Warner", "R10", 0);

        ndn::FibHelper::AddRoute("C1", "/Amazon", "R0", 0);
        ndn::FibHelper::AddRoute("C1", "/Google", "R0", 0);
        ndn::FibHelper::AddRoute("C1", "/Warner", "R0", 0);
        
        ndn::FibHelper::AddRoute("C2", "/Amazon", "R2", 0);
        ndn::FibHelper::AddRoute("C2", "/Google", "R2", 0);
        ndn::FibHelper::AddRoute("C2", "/Warner", "R2", 0);

        ndn::FibHelper::AddRoute("C3", "/Amazon", "R3", 0);
        ndn::FibHelper::AddRoute("C3", "/Google", "R3", 0);
        ndn::FibHelper::AddRoute("C3", "/Warner", "R3", 0);

        ndn::FibHelper::AddRoute("C4", "/Amazon", "R4", 0);
        ndn::FibHelper::AddRoute("C4", "/Google", "R4", 0);
        ndn::FibHelper::AddRoute("C4", "/Warner", "R4", 0);

        ndn::FibHelper::AddRoute("C5", "/Amazon", "R6", 0);
        ndn::FibHelper::AddRoute("C5", "/Google", "R6", 0);
        ndn::FibHelper::AddRoute("C5", "/Warner", "R6", 0);

        ndn::FibHelper::AddRoute("C6", "/Amazon", "R7", 0);
        ndn::FibHelper::AddRoute("C6", "/Google", "R7", 0);
        ndn::FibHelper::AddRoute("C6", "/Warner", "R7", 0);

        ndn::FibHelper::AddRoute("C7", "/Amazon", "R9", 0);
        ndn::FibHelper::AddRoute("C7", "/Google", "R9", 0);
        ndn::FibHelper::AddRoute("C7", "/Warner", "R9", 0);

        ndn::FibHelper::AddRoute("C8", "/Amazon", "R10", 0);
        ndn::FibHelper::AddRoute("C8", "/Google", "R10", 0);
        ndn::FibHelper::AddRoute("C8", "/Warner", "R10", 0);

        // ndn::FibHelper::AddRoute("R0", "/Warner", "R1", 0);

        // ndn::FibHelper::AddRoute("R1", "/Warner", "R2", 0);

        // ndn::FibHelper::AddRoute("R2", "/Warner", "R3", 0);

        // ndn::FibHelper::AddRoute("R3", "/Google", "R8", 0);

        // ndn::FibHelper::AddRoute("R5", "/Amazon", "R4", 0);
        // ndn::FibHelper::AddRoute("R5", "/Warner", "R4", 0);

        // ndn::FibHelper::AddRoute("R6", "/Amazon", "R5", 0);
        // ndn::FibHelper::AddRoute("R6", "/Google", "R7", 0);
        // ndn::FibHelper::AddRoute("R6", "/Warner", "R5", 0);

        // ndn::FibHelper::AddRoute("R7", "/Amazon", "R5", 0);

        // ndn::FibHelper::AddRoute("R8", "/Amazon", "R3", 0);

        // ndn::FibHelper::AddRoute("R9", "/Google", "R2", 0);

        // ndn::FibHelper::AddRoute("R10", "/Amazon", "R0", 0);

        Simulator::Stop(Seconds(60.0));

        ndn::L3RateTracer::InstallAll("qsccp-single-throughput.txt", Seconds(0.1));
        ndn::AppDelayTracer::InstallAll("qsccp-single-delay.txt");
        L2RateTracer::InstallAll("qsccp-single-drop.txt", Seconds(0.1));
        Simulator::Run();
        Simulator::Destroy();

        return 0;
    }

} // namespace ns3

int main(int argc, char *argv[])
{
    return ns3::main(argc, argv);
}
