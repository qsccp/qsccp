cmake_minimum_required(VERSION 3.16)
project(scenario)

set(CMAKE_CXX_STANDARD 14)

include_directories(extensions)

include_directories(
        /usr/local/include
        /usr/local/include/ns3-dev
        /usr/local/include/ns3-dev/ns3
        /usr/local/include/ns3-dev/ns3/ndnSIM/NFD
        /usr/local/include/ns3-dev/ns3/ndnSIM/NFD/daemon
        /usr/local/include/ns3-dev/ns3/ndnSIM
)

add_executable(scenario
        extensions/QSCCPStrategy.cpp extensions/QSCCPStrategy.h
        scenarios/qsccp1.cpp
        scenarios/qsccp2.cpp
        scenarios/qsccp3-1.cpp
        scenarios/qsccp3-2.cpp
        scenarios/qsccp4-1-single.cpp
        scenarios/qsccp4-2-multi.cpp
        scenarios/qsccp5.cpp
        )

target_link_libraries(scenario ns3-core)
target_link_libraries(scenario ns3-network)
target_link_libraries(scenario ns3-point-to-point)
target_link_libraries(scenario ns3-topology-read)
target_link_libraries(scenario ns3-mobility)
target_link_libraries(scenario ns3-internet)
target_link_libraries(scenario ns3-visualizer)
target_link_libraries(scenario version-ndn-cxx)
target_link_libraries(scenario version-NFD-objects)
target_link_libraries(scenario BOOST)
target_link_libraries(scenario SQLITE3)
target_link_libraries(scenario RT)
target_link_libraries(scenario PTHREAD)
target_link_libraries(scenario OPENSSL)