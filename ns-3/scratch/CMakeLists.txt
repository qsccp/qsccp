
set(scratch-simulator_SOURCES
    scratch-simulator.cc)

set(scratch-simulator_INCLUDES
    #
    ../build/ns3/ndnSIM/NFD
    ../ns3/ndnSIM/NFD
    ../build/src/ndnSIM/NFD/core
    ../src/ndnSIM/NFD/core
    ../build/src/ndnSIM/NFD/daemon
    ../src/ndnSIM/NFD/daemon
    ../build/src/ndnSIM/NFD/rib
    ../src/ndnSIM/NFD/rib
    ../build/ns3/ndnSIM
    ../ns3/ndnSIM
    #
    /home/gdcni21/Documents/qsccp/ns-3/build/ns3/ndnSIM/NFD
    /home/gdcni21/Documents/qsccp/ns-3/ns3/ndnSIM/NFD
    /home/gdcni21/Documents/qsccp/ns-3/build/src/ndnSIM/NFD/core
    /home/gdcni21/Documents/qsccp/ns-3/src/ndnSIM/NFD/core
    /home/gdcni21/Documents/qsccp/ns-3/build/src/ndnSIM/NFD/daemon
    /home/gdcni21/Documents/qsccp/ns-3/src/ndnSIM/NFD/daemon
    /home/gdcni21/Documents/qsccp/ns-3/build/src/ndnSIM/NFD/rib
    /home/gdcni21/Documents/qsccp/ns-3/src/ndnSIM/NFD/rib
    /home/gdcni21/Documents/qsccp/ns-3/build/ns3/ndnSIM
    /home/gdcni21/Documents/qsccp/ns-3/ns3/ndnSIM
    /usr/include
    /usr/include)

include_directories(${scratch-simulator_INCLUDES})

add_executable(scratch-simulator ${scratch-simulator_SOURCES})

target_link_libraries(scratch-simulator ns3-antenna)
target_link_libraries(scratch-simulator ns3-aodv)
target_link_libraries(scratch-simulator ns3-applications)
target_link_libraries(scratch-simulator ns3-bridge)
target_link_libraries(scratch-simulator ns3-buildings)
target_link_libraries(scratch-simulator ns3-config-store)
target_link_libraries(scratch-simulator ns3-core)
target_link_libraries(scratch-simulator ns3-csma)
target_link_libraries(scratch-simulator ns3-csma-layout)
target_link_libraries(scratch-simulator ns3-dsdv)
target_link_libraries(scratch-simulator ns3-dsr)
target_link_libraries(scratch-simulator ns3-energy)
target_link_libraries(scratch-simulator ns3-fd-net-device)
target_link_libraries(scratch-simulator ns3-flow-monitor)
target_link_libraries(scratch-simulator ns3-internet)
target_link_libraries(scratch-simulator ns3-internet-apps)
target_link_libraries(scratch-simulator ns3-lr-wpan)
target_link_libraries(scratch-simulator ns3-lte)
target_link_libraries(scratch-simulator ns3-mesh)
target_link_libraries(scratch-simulator ns3-mobility)
target_link_libraries(scratch-simulator ns3-mpi)
target_link_libraries(scratch-simulator ns3-ndnSIM)
target_link_libraries(scratch-simulator ns3-netanim)
target_link_libraries(scratch-simulator ns3-network)
target_link_libraries(scratch-simulator ns3-nix-vector-routing)
target_link_libraries(scratch-simulator ns3-olsr)
target_link_libraries(scratch-simulator ns3-point-to-point)
target_link_libraries(scratch-simulator ns3-point-to-point-layout)
target_link_libraries(scratch-simulator ns3-propagation)
target_link_libraries(scratch-simulator ns3-sixlowpan)
target_link_libraries(scratch-simulator ns3-spectrum)
target_link_libraries(scratch-simulator ns3-stats)
target_link_libraries(scratch-simulator ns3-tap-bridge)
target_link_libraries(scratch-simulator ns3-test)
target_link_libraries(scratch-simulator ns3-topology-read)
target_link_libraries(scratch-simulator ns3-traffic-control)
target_link_libraries(scratch-simulator ns3-uan)
target_link_libraries(scratch-simulator ns3-virtual-net-device)
target_link_libraries(scratch-simulator ns3-wave)
target_link_libraries(scratch-simulator ns3-wifi)
target_link_libraries(scratch-simulator ns3-wimax)

