
set(test-runner_SOURCES
    test-runner.cc)

set(test-runner_INCLUDES
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

include_directories(${test-runner_INCLUDES})

add_executable(test-runner ${test-runner_SOURCES})

target_link_libraries(test-runner ns3-antenna)
target_link_libraries(test-runner ns3-aodv)
target_link_libraries(test-runner ns3-applications)
target_link_libraries(test-runner ns3-bridge)
target_link_libraries(test-runner ns3-buildings)
target_link_libraries(test-runner ns3-config-store)
target_link_libraries(test-runner ns3-core)
target_link_libraries(test-runner ns3-csma)
target_link_libraries(test-runner ns3-csma-layout)
target_link_libraries(test-runner ns3-dsdv)
target_link_libraries(test-runner ns3-dsr)
target_link_libraries(test-runner ns3-energy)
target_link_libraries(test-runner ns3-fd-net-device)
target_link_libraries(test-runner ns3-flow-monitor)
target_link_libraries(test-runner ns3-internet)
target_link_libraries(test-runner ns3-internet-apps)
target_link_libraries(test-runner ns3-lr-wpan)
target_link_libraries(test-runner ns3-lte)
target_link_libraries(test-runner ns3-mesh)
target_link_libraries(test-runner ns3-mobility)
target_link_libraries(test-runner ns3-mpi)
target_link_libraries(test-runner ns3-ndnSIM)
target_link_libraries(test-runner ns3-netanim)
target_link_libraries(test-runner ns3-network)
target_link_libraries(test-runner ns3-nix-vector-routing)
target_link_libraries(test-runner ns3-olsr)
target_link_libraries(test-runner ns3-point-to-point)
target_link_libraries(test-runner ns3-point-to-point-layout)
target_link_libraries(test-runner ns3-propagation)
target_link_libraries(test-runner ns3-sixlowpan)
target_link_libraries(test-runner ns3-spectrum)
target_link_libraries(test-runner ns3-stats)
target_link_libraries(test-runner ns3-tap-bridge)
target_link_libraries(test-runner ns3-test)
target_link_libraries(test-runner ns3-topology-read)
target_link_libraries(test-runner ns3-traffic-control)
target_link_libraries(test-runner ns3-uan)
target_link_libraries(test-runner ns3-virtual-net-device)
target_link_libraries(test-runner ns3-wave)
target_link_libraries(test-runner ns3-wifi)
target_link_libraries(test-runner ns3-wimax)

set(bench-simulator_SOURCES
    bench-simulator.cc)

set(bench-simulator_INCLUDES)

include_directories(${bench-simulator_INCLUDES})

add_executable(bench-simulator ${bench-simulator_SOURCES})

target_link_libraries(bench-simulator ns3-core)

set(bench-packets_SOURCES
    bench-packets.cc)

set(bench-packets_INCLUDES)

include_directories(${bench-packets_INCLUDES})

add_executable(bench-packets ${bench-packets_SOURCES})

target_link_libraries(bench-packets ns3-network)

set(print-introspected-doxygen_SOURCES
    print-introspected-doxygen.cc)

set(print-introspected-doxygen_INCLUDES
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

include_directories(${print-introspected-doxygen_INCLUDES})

add_executable(print-introspected-doxygen ${print-introspected-doxygen_SOURCES})

target_link_libraries(print-introspected-doxygen ns3-antenna)
target_link_libraries(print-introspected-doxygen ns3-aodv)
target_link_libraries(print-introspected-doxygen ns3-applications)
target_link_libraries(print-introspected-doxygen ns3-bridge)
target_link_libraries(print-introspected-doxygen ns3-buildings)
target_link_libraries(print-introspected-doxygen ns3-config-store)
target_link_libraries(print-introspected-doxygen ns3-core)
target_link_libraries(print-introspected-doxygen ns3-csma)
target_link_libraries(print-introspected-doxygen ns3-csma-layout)
target_link_libraries(print-introspected-doxygen ns3-dsdv)
target_link_libraries(print-introspected-doxygen ns3-dsr)
target_link_libraries(print-introspected-doxygen ns3-energy)
target_link_libraries(print-introspected-doxygen ns3-fd-net-device)
target_link_libraries(print-introspected-doxygen ns3-flow-monitor)
target_link_libraries(print-introspected-doxygen ns3-internet)
target_link_libraries(print-introspected-doxygen ns3-internet-apps)
target_link_libraries(print-introspected-doxygen ns3-lr-wpan)
target_link_libraries(print-introspected-doxygen ns3-lte)
target_link_libraries(print-introspected-doxygen ns3-mesh)
target_link_libraries(print-introspected-doxygen ns3-mobility)
target_link_libraries(print-introspected-doxygen ns3-mpi)
target_link_libraries(print-introspected-doxygen ns3-ndnSIM)
target_link_libraries(print-introspected-doxygen ns3-netanim)
target_link_libraries(print-introspected-doxygen ns3-network)
target_link_libraries(print-introspected-doxygen ns3-nix-vector-routing)
target_link_libraries(print-introspected-doxygen ns3-olsr)
target_link_libraries(print-introspected-doxygen ns3-point-to-point)
target_link_libraries(print-introspected-doxygen ns3-point-to-point-layout)
target_link_libraries(print-introspected-doxygen ns3-propagation)
target_link_libraries(print-introspected-doxygen ns3-sixlowpan)
target_link_libraries(print-introspected-doxygen ns3-spectrum)
target_link_libraries(print-introspected-doxygen ns3-stats)
target_link_libraries(print-introspected-doxygen ns3-tap-bridge)
target_link_libraries(print-introspected-doxygen ns3-test)
target_link_libraries(print-introspected-doxygen ns3-topology-read)
target_link_libraries(print-introspected-doxygen ns3-traffic-control)
target_link_libraries(print-introspected-doxygen ns3-uan)
target_link_libraries(print-introspected-doxygen ns3-virtual-net-device)
target_link_libraries(print-introspected-doxygen ns3-wave)
target_link_libraries(print-introspected-doxygen ns3-wifi)
target_link_libraries(print-introspected-doxygen ns3-wimax)

