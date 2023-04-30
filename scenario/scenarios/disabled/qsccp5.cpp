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
        topologyReader.SetFileName("topologies/qsccp5.txt");
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


        ndn::AppHelper consumerHelper("ns3::ndn::ConsumerQSCCP");
        consumerHelper.SetAttribute("Dsz", UintegerValue(8696));
        consumerHelper.SetAttribute("ReqNum", IntegerValue(5000));
        // consumerHelper.SetAttribute("NumberOfContents", UintegerValue(100000));

        consumerHelper.SetAttribute("Tos", UintegerValue(5));

        // /C1
        consumerHelper.SetPrefix("/C1");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // /C2
        consumerHelper.SetPrefix("/C2");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // /C3
        consumerHelper.SetPrefix("/C3");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // /C4
        consumerHelper.SetPrefix("/C4");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // /C5
        consumerHelper.SetPrefix("/C5");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // /C6
        consumerHelper.SetPrefix("/C6");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // /C7
        consumerHelper.SetPrefix("/C7");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // /C8
        consumerHelper.SetPrefix("/C8");
        consumerHelper.Install("n18");
        consumerHelper.Install("n4");
        consumerHelper.Install("n3");
        consumerHelper.Install("n25");
        consumerHelper.Install("n40");
        consumerHelper.Install("n45");
        consumerHelper.Install("n41");
        consumerHelper.Install("n37");

        // // /C1
        // consumerHelper.SetPrefix("/C1/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C1/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C1/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C1/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C1/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C1/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C1/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C1/8");
        // consumerHelper.Install("n37");

        // // /C2
        // consumerHelper.SetPrefix("/C2/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C2/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C2/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C2/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C2/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C2/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C2/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C2/8");
        // consumerHelper.Install("n37");

        // // /C3
        // consumerHelper.SetPrefix("/C3/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C3/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C3/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C3/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C3/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C3/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C3/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C3/8");
        // consumerHelper.Install("n37");

        // // /C4
        // consumerHelper.SetPrefix("/C4/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C4/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C4/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C4/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C4/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C4/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C4/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C4/8");
        // consumerHelper.Install("n37");

        // // /C5
        // consumerHelper.SetPrefix("/C5/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C5/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C5/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C5/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C5/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C5/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C5/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C5/8");
        // consumerHelper.Install("n37");

        // // /C6
        // consumerHelper.SetPrefix("/C6/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C6/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C6/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C6/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C6/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C6/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C6/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C6/8");
        // consumerHelper.Install("n37");

        // // /C7
        // consumerHelper.SetPrefix("/C7/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C7/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C7/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C7/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C7/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C7/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C7/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C7/8");
        // consumerHelper.Install("n37");

        // // /C8
        // consumerHelper.SetPrefix("/C8/1");
        // consumerHelper.Install("n18");
        // consumerHelper.SetPrefix("/C8/2");
        // consumerHelper.Install("n4");
        // consumerHelper.SetPrefix("/C8/3");
        // consumerHelper.Install("n3");
        // consumerHelper.SetPrefix("/C8/4");
        // consumerHelper.Install("n25");
        // consumerHelper.SetPrefix("/C8/5");
        // consumerHelper.Install("n40");
        // consumerHelper.SetPrefix("/C8/6");
        // consumerHelper.Install("n45");
        // consumerHelper.SetPrefix("/C8/7");
        // consumerHelper.Install("n41");
        // consumerHelper.SetPrefix("/C8/8");
        // consumerHelper.Install("n37");

        ndn::AppHelper producerHelper("ns3::ndn::Producer");
        producerHelper.SetAttribute("PayloadSize", StringValue("1024"));

        // Register /dst1 prefix with global routing controller and
        // install producer that will satisfy Interests in /dst1 namespace

        producerHelper.SetPrefix("/C1");
        producerHelper.Install("n44");

        producerHelper.SetPrefix("/C2");
        producerHelper.Install("n27");

        producerHelper.SetPrefix("/C3");
        producerHelper.Install("n8");

        producerHelper.SetPrefix("/C4");
        producerHelper.Install("n7");

        producerHelper.SetPrefix("/C5");
        producerHelper.Install("n1");
        
        producerHelper.SetPrefix("/C6");
        producerHelper.Install("n0");

        producerHelper.SetPrefix("/C7");
        producerHelper.Install("n19");

        producerHelper.SetPrefix("/C8");
        producerHelper.Install("n38");

        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 8
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C8", "n15", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C8", "n14", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C8", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C8", "n16", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C8", "n15", 0);
        ndn::FibHelper::AddRoute("n16", "/C8", "n20", 0);

        // n20
        ndn::FibHelper::AddRoute("n20", "/C8", "n28", 0);

        // n15
        ndn::FibHelper::AddRoute("n15", "/C8", "n21", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C8", "n21", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C8", "n24", 0);

        // n21
        ndn::FibHelper::AddRoute("n21", "/C8", "n28", 0);
        ndn::FibHelper::AddRoute("n21", "/C8", "n30", 0);

        // n22
        ndn::FibHelper::AddRoute("n22", "/C8", "n14", 0);

        // n23
        ndn::FibHelper::AddRoute("n23", "/C8", "n22", 0);

        // n24
        ndn::FibHelper::AddRoute("n24", "/C8", "n23", 0);

        // n28
        ndn::FibHelper::AddRoute("n28", "/C8", "n38", 0);
        ndn::FibHelper::AddRoute("n28", "/C8", "n32", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C8", "n33", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C8", "n22", 0);

        // n32
        ndn::FibHelper::AddRoute("n32", "/C8", "n33", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C8", "n38", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C8", "n37", 0);

        // n34
        ndn::FibHelper::AddRoute("n34", "/C8", "n33", 0);

        // n35
        ndn::FibHelper::AddRoute("n35", "/C8", "n36", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C8", "n31", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C8", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C8", "n34", 0);
        ndn::FibHelper::AddRoute("n39", "/C8", "n35", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C8", "n36", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C8", "n39", 0);

        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 7
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C7", "n15", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C7", "n14", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C7", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C7", "n19", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C7", "n17", 0);
        ndn::FibHelper::AddRoute("n16", "/C7", "n20", 0);

        // n20
        ndn::FibHelper::AddRoute("n20", "/C7", "n19", 0);
        
        // n15
        ndn::FibHelper::AddRoute("n15", "/C7", "n16", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C7", "n15", 0);

        // n13
        ndn::FibHelper::AddRoute("n13", "/C7", "n14", 0);

        // n12
        ndn::FibHelper::AddRoute("n12", "/C7", "n13", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C7", "n24", 0);

        // n21
        ndn::FibHelper::AddRoute("n21", "/C7", "n15", 0);

        // n24
        ndn::FibHelper::AddRoute("n24", "/C7", "n12", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C7", "n21", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C7", "n30", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C7", "n33", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C7", "n30", 0);

        // n34
        ndn::FibHelper::AddRoute("n34", "/C7", "n33", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C7", "n31", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C7", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C7", "n34", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C7", "n36", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C7", "n39", 0);


        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 6
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C6", "n3", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C6", "n14", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C6", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C6", "n16", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C6", "n15", 0);
        ndn::FibHelper::AddRoute("n16", "/C6", "n20", 0);

        // n20
        ndn::FibHelper::AddRoute("n20", "/C6", "n28", 0);

        // n15
        ndn::FibHelper::AddRoute("n15", "/C6", "n0", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C6", "n0", 0);
        ndn::FibHelper::AddRoute("n14", "/C6", "n15", 0);

        // n13
        ndn::FibHelper::AddRoute("n13", "/C6", "n14", 0);

        // n12
        ndn::FibHelper::AddRoute("n12", "/C6", "n13", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C6", "n24", 0);

        // n21
        ndn::FibHelper::AddRoute("n21", "/C6", "n14", 0);

        // n24
        ndn::FibHelper::AddRoute("n24", "/C6", "n12", 0);

        // n28
        ndn::FibHelper::AddRoute("n28", "/C6", "n21", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C6", "n21", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C6", "n30", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C6", "n33", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C6", "n30", 0);

        // n34
        ndn::FibHelper::AddRoute("n34", "/C6", "n33", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C6", "n31", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C6", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C6", "n34", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C6", "n36", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C6", "n39", 0);


        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 5
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C5", "n15", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C5", "n4", 0);

        // n5
        ndn::FibHelper::AddRoute("n5", "/C5", "n3", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C5", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C5", "n16", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C5", "n15", 0);

        // n9
        ndn::FibHelper::AddRoute("n9", "/C5", "n5", 0);

        // n15
        ndn::FibHelper::AddRoute("n15", "/C5", "n1", 0);
        ndn::FibHelper::AddRoute("n15", "/C5", "n14", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C5", "n1", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C5", "n9", 0);

        // n21
        ndn::FibHelper::AddRoute("n21", "/C5", "n15", 0);

        // n28
        ndn::FibHelper::AddRoute("n28", "/C5", "n21", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C5", "n21", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C5", "n30", 0);

        // n32
        ndn::FibHelper::AddRoute("n32", "/C5", "n28", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C5", "n33", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C5", "n32", 0);

        // n34
        ndn::FibHelper::AddRoute("n34", "/C5", "n33", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C5", "n31", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C5", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C5", "n34", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C5", "n36", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C5", "n39", 0);

        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 4
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C4", "n15", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C4", "n5", 0);

        // n5
        ndn::FibHelper::AddRoute("n5", "/C4", "n7", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C4", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C4", "n16", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C4", "n15", 0);

        // n11
        ndn::FibHelper::AddRoute("n11", "/C4", "n9", 0);

        // n9
        ndn::FibHelper::AddRoute("n9", "/C4", "n7", 0);

        // n15
        ndn::FibHelper::AddRoute("n15", "/C4", "n14", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C4", "n13", 0);
        ndn::FibHelper::AddRoute("n14", "/C4", "n3", 0);

        // n13
        ndn::FibHelper::AddRoute("n13", "/C4", "n12", 0);

        // n12
        ndn::FibHelper::AddRoute("n12", "/C4", "n11", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C4", "n24", 0);

        // n22
        ndn::FibHelper::AddRoute("n22", "/C4", "n14", 0);

        // n23
        ndn::FibHelper::AddRoute("n23", "/C4", "n22", 0);

        // n24
        ndn::FibHelper::AddRoute("n24", "/C4", "n23", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C4", "n31", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C4", "n22", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C4", "n33", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C4", "n30", 0);

        // n35
        ndn::FibHelper::AddRoute("n35", "/C4", "n36", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C4", "n31", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C4", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C4", "n35", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C4", "n36", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C4", "n39", 0);

        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 3
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C3", "n15", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C3", "n5", 0);

        // n5
        ndn::FibHelper::AddRoute("n5", "/C3", "n8", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C3", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C3", "n16", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C3", "n15", 0);

        // n11
        ndn::FibHelper::AddRoute("n11", "/C3", "n9", 0);

        // n9
        ndn::FibHelper::AddRoute("n9", "/C3", "n8", 0);

        // n15
        ndn::FibHelper::AddRoute("n15", "/C3", "n14", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C3", "n13", 0);
        ndn::FibHelper::AddRoute("n14", "/C3", "n3", 0);

        // n13
        ndn::FibHelper::AddRoute("n13", "/C3", "n12", 0);

        // n12
        ndn::FibHelper::AddRoute("n12", "/C3", "n11", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C3", "n24", 0);

        // n22
        ndn::FibHelper::AddRoute("n22", "/C3", "n14", 0);

        // n23
        ndn::FibHelper::AddRoute("n23", "/C3", "n22", 0);

        // n24
        ndn::FibHelper::AddRoute("n24", "/C3", "n23", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C3", "n31", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C3", "n22", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C3", "n33", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C3", "n30", 0);

        // n35
        ndn::FibHelper::AddRoute("n35", "/C3", "n36", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C3", "n31", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C3", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C3", "n35", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C3", "n36", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C3", "n39", 0);
    
        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 2
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C2", "n15", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C2", "n14", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C2", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C2", "n16", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C2", "n15", 0);

        // n11
        ndn::FibHelper::AddRoute("n11", "/C2", "n9", 0);

        // n9
        ndn::FibHelper::AddRoute("n9", "/C2", "n25", 0);

        // n15
        ndn::FibHelper::AddRoute("n15", "/C2", "n14", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C2", "n13", 0);
        ndn::FibHelper::AddRoute("n14", "/C2", "n22", 0);

        // n13
        ndn::FibHelper::AddRoute("n13", "/C2", "n12", 0);

        // n12
        ndn::FibHelper::AddRoute("n12", "/C2", "n11", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C2", "n26", 0);

        // n21
        ndn::FibHelper::AddRoute("n21", "/C2", "n14", 0);

        // n22
        ndn::FibHelper::AddRoute("n22", "/C2", "n31", 0);

        // n26
        ndn::FibHelper::AddRoute("n26", "/C2", "n27", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C2", "n21", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C2", "n36", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C2", "n33", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C2", "n30", 0);

        // n34
        ndn::FibHelper::AddRoute("n34", "/C2", "n33", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C2", "n27", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C2", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C2", "n34", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C2", "n36", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C2", "n39", 0);

        ////////////////////////////////////////////////////////////////////////////////////////////////
        /// Producer 1
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // n4
        ndn::FibHelper::AddRoute("n4", "/C1", "n15", 0);

        // n3
        ndn::FibHelper::AddRoute("n3", "/C1", "n14", 0);

        // n18
        ndn::FibHelper::AddRoute("n18", "/C1", "n17", 0);

        // n17
        ndn::FibHelper::AddRoute("n17", "/C1", "n16", 0);

        // n16
        ndn::FibHelper::AddRoute("n16", "/C1", "n20", 0);

        // n11
        ndn::FibHelper::AddRoute("n11", "/C1", "n12", 0);

        // n9
        ndn::FibHelper::AddRoute("n9", "/C1", "n11", 0);

        // n20
        ndn::FibHelper::AddRoute("n20", "/C1", "n28", 0);

        // n15
        ndn::FibHelper::AddRoute("n15", "/C1", "n21", 0);

        // n14
        ndn::FibHelper::AddRoute("n14", "/C1", "n21", 0);

        // n13
        ndn::FibHelper::AddRoute("n13", "/C1", "n14", 0);

        // n12
        ndn::FibHelper::AddRoute("n12", "/C1", "n13", 0);

        // n25
        ndn::FibHelper::AddRoute("n25", "/C1", "n9", 0);

        // n21
        ndn::FibHelper::AddRoute("n21", "/C1", "n30", 0);

        // n28
        ndn::FibHelper::AddRoute("n28", "/C1", "n21", 0);

        // n30
        ndn::FibHelper::AddRoute("n30", "/C1", "n31", 0);
        ndn::FibHelper::AddRoute("n30", "/C1", "n33", 0);

        // n31
        ndn::FibHelper::AddRoute("n31", "/C1", "n36", 0);

        // n37
        ndn::FibHelper::AddRoute("n37", "/C1", "n33", 0);

        // n33
        ndn::FibHelper::AddRoute("n33", "/C1", "n34", 0);

        // n34
        ndn::FibHelper::AddRoute("n34", "/C1", "n35", 0);
        ndn::FibHelper::AddRoute("n34", "/C1", "n39", 0);

        // n35
        ndn::FibHelper::AddRoute("n35", "/C1", "n36", 0);

        // n36
        ndn::FibHelper::AddRoute("n36", "/C1", "n40", 0);

        // n41
        ndn::FibHelper::AddRoute("n41", "/C1", "n39", 0);

        // n39
        ndn::FibHelper::AddRoute("n39", "/C1", "n35", 0);
        ndn::FibHelper::AddRoute("n39", "/C1", "n44", 0);
        ndn::FibHelper::AddRoute("n39", "/C1", "n45", 0);

        // n40
        ndn::FibHelper::AddRoute("n40", "/C1", "n42", 0);

        // n42
        ndn::FibHelper::AddRoute("n42", "/C1", "n43", 0);

        // n43
        ndn::FibHelper::AddRoute("n43", "/C1", "n44", 0);

        // n45
        ndn::FibHelper::AddRoute("n45", "/C1", "n46", 0);

        // n46
        ndn::FibHelper::AddRoute("n46", "/C1", "n44", 0);
        

        // ndnGlobalRoutingHelper.AddOrigin("/C1", "n44");
        // ndnGlobalRoutingHelper.AddOrigin("/C2", "n27");
        // ndnGlobalRoutingHelper.AddOrigin("/C3", "n8");
        // ndnGlobalRoutingHelper.AddOrigin("/C4", "n7");
        // ndnGlobalRoutingHelper.AddOrigin("/C5", "n1");
        // ndnGlobalRoutingHelper.AddOrigin("/C6", "n0");
        // ndnGlobalRoutingHelper.AddOrigin("/C7", "n19");
        // ndnGlobalRoutingHelper.AddOrigin("/C8", "n38");


        // // Calculate all possible routes and install FIBs
        // ndn::GlobalRoutingHelper::CalculateRoutes();
        // ndn::GlobalRoutingHelper::CalculateAllPossibleRoutes();

        Simulator::Stop(Seconds(120.0));

        ndn::L3RateTracer::InstallAll("qsccp5_throughput-0.1.txt", Seconds(0.1));
        ndn::AppDelayTracer::InstallAll("qsccp5_delay-0.1.txt");
        L2RateTracer::InstallAll("qsccp5_drop-0.1.txt", Seconds(0.1));
        Simulator::Run();
        Simulator::Destroy();

        return 0;
    }

} // namespace ns3

int main(int argc, char *argv[])
{
    return ns3::main(argc, argv);
}
