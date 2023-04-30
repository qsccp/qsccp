
set(lfid_SOURCES
    lfid.cpp)

set(lfid_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${lfid_INCLUDES})

add_executable(lfid ${lfid_SOURCES})

target_link_libraries(lfid ns3-antenna)
target_link_libraries(lfid ns3-aodv)
target_link_libraries(lfid ns3-applications)
target_link_libraries(lfid ns3-bridge)
target_link_libraries(lfid ns3-buildings)
target_link_libraries(lfid ns3-config-store)
target_link_libraries(lfid ns3-core)
target_link_libraries(lfid ns3-csma)
target_link_libraries(lfid ns3-csma-layout)
target_link_libraries(lfid ns3-dsdv)
target_link_libraries(lfid ns3-dsr)
target_link_libraries(lfid ns3-energy)
target_link_libraries(lfid ns3-fd-net-device)
target_link_libraries(lfid ns3-flow-monitor)
target_link_libraries(lfid ns3-internet)
target_link_libraries(lfid ns3-internet-apps)
target_link_libraries(lfid ns3-lr-wpan)
target_link_libraries(lfid ns3-lte)
target_link_libraries(lfid ns3-mesh)
target_link_libraries(lfid ns3-mobility)
target_link_libraries(lfid ns3-mpi)
target_link_libraries(lfid ns3-ndnSIM)
target_link_libraries(lfid ns3-netanim)
target_link_libraries(lfid ns3-network)
target_link_libraries(lfid ns3-nix-vector-routing)
target_link_libraries(lfid ns3-olsr)
target_link_libraries(lfid ns3-point-to-point)
target_link_libraries(lfid ns3-point-to-point-layout)
target_link_libraries(lfid ns3-propagation)
target_link_libraries(lfid ns3-sixlowpan)
target_link_libraries(lfid ns3-spectrum)
target_link_libraries(lfid ns3-stats)
target_link_libraries(lfid ns3-tap-bridge)
target_link_libraries(lfid ns3-test)
target_link_libraries(lfid ns3-topology-read)
target_link_libraries(lfid ns3-traffic-control)
target_link_libraries(lfid ns3-uan)
target_link_libraries(lfid ns3-virtual-net-device)
target_link_libraries(lfid ns3-wave)
target_link_libraries(lfid ns3-wifi)
target_link_libraries(lfid ns3-wimax)

set(ndn-congestion-alt-topo-plugin_SOURCES
    ndn-congestion-alt-topo-plugin.cpp)

set(ndn-congestion-alt-topo-plugin_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-congestion-alt-topo-plugin_INCLUDES})

add_executable(ndn-congestion-alt-topo-plugin ${ndn-congestion-alt-topo-plugin_SOURCES})

target_link_libraries(ndn-congestion-alt-topo-plugin ns3-antenna)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-aodv)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-applications)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-bridge)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-buildings)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-config-store)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-core)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-csma)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-csma-layout)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-dsdv)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-dsr)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-energy)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-fd-net-device)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-flow-monitor)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-internet)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-internet-apps)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-lr-wpan)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-lte)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-mesh)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-mobility)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-mpi)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-ndnSIM)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-netanim)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-network)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-nix-vector-routing)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-olsr)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-point-to-point)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-point-to-point-layout)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-propagation)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-sixlowpan)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-spectrum)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-stats)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-tap-bridge)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-test)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-topology-read)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-traffic-control)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-uan)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-virtual-net-device)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-wave)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-wifi)
target_link_libraries(ndn-congestion-alt-topo-plugin ns3-wimax)

set(ndn-congestion-topo-plugin_SOURCES
    ndn-congestion-topo-plugin.cpp)

set(ndn-congestion-topo-plugin_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-congestion-topo-plugin_INCLUDES})

add_executable(ndn-congestion-topo-plugin ${ndn-congestion-topo-plugin_SOURCES})

target_link_libraries(ndn-congestion-topo-plugin ns3-antenna)
target_link_libraries(ndn-congestion-topo-plugin ns3-aodv)
target_link_libraries(ndn-congestion-topo-plugin ns3-applications)
target_link_libraries(ndn-congestion-topo-plugin ns3-bridge)
target_link_libraries(ndn-congestion-topo-plugin ns3-buildings)
target_link_libraries(ndn-congestion-topo-plugin ns3-config-store)
target_link_libraries(ndn-congestion-topo-plugin ns3-core)
target_link_libraries(ndn-congestion-topo-plugin ns3-csma)
target_link_libraries(ndn-congestion-topo-plugin ns3-csma-layout)
target_link_libraries(ndn-congestion-topo-plugin ns3-dsdv)
target_link_libraries(ndn-congestion-topo-plugin ns3-dsr)
target_link_libraries(ndn-congestion-topo-plugin ns3-energy)
target_link_libraries(ndn-congestion-topo-plugin ns3-fd-net-device)
target_link_libraries(ndn-congestion-topo-plugin ns3-flow-monitor)
target_link_libraries(ndn-congestion-topo-plugin ns3-internet)
target_link_libraries(ndn-congestion-topo-plugin ns3-internet-apps)
target_link_libraries(ndn-congestion-topo-plugin ns3-lr-wpan)
target_link_libraries(ndn-congestion-topo-plugin ns3-lte)
target_link_libraries(ndn-congestion-topo-plugin ns3-mesh)
target_link_libraries(ndn-congestion-topo-plugin ns3-mobility)
target_link_libraries(ndn-congestion-topo-plugin ns3-mpi)
target_link_libraries(ndn-congestion-topo-plugin ns3-ndnSIM)
target_link_libraries(ndn-congestion-topo-plugin ns3-netanim)
target_link_libraries(ndn-congestion-topo-plugin ns3-network)
target_link_libraries(ndn-congestion-topo-plugin ns3-nix-vector-routing)
target_link_libraries(ndn-congestion-topo-plugin ns3-olsr)
target_link_libraries(ndn-congestion-topo-plugin ns3-point-to-point)
target_link_libraries(ndn-congestion-topo-plugin ns3-point-to-point-layout)
target_link_libraries(ndn-congestion-topo-plugin ns3-propagation)
target_link_libraries(ndn-congestion-topo-plugin ns3-sixlowpan)
target_link_libraries(ndn-congestion-topo-plugin ns3-spectrum)
target_link_libraries(ndn-congestion-topo-plugin ns3-stats)
target_link_libraries(ndn-congestion-topo-plugin ns3-tap-bridge)
target_link_libraries(ndn-congestion-topo-plugin ns3-test)
target_link_libraries(ndn-congestion-topo-plugin ns3-topology-read)
target_link_libraries(ndn-congestion-topo-plugin ns3-traffic-control)
target_link_libraries(ndn-congestion-topo-plugin ns3-uan)
target_link_libraries(ndn-congestion-topo-plugin ns3-virtual-net-device)
target_link_libraries(ndn-congestion-topo-plugin ns3-wave)
target_link_libraries(ndn-congestion-topo-plugin ns3-wifi)
target_link_libraries(ndn-congestion-topo-plugin ns3-wimax)

set(ndn-csma_SOURCES
    ndn-csma.cpp)

set(ndn-csma_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-csma_INCLUDES})

add_executable(ndn-csma ${ndn-csma_SOURCES})

target_link_libraries(ndn-csma ns3-antenna)
target_link_libraries(ndn-csma ns3-aodv)
target_link_libraries(ndn-csma ns3-applications)
target_link_libraries(ndn-csma ns3-bridge)
target_link_libraries(ndn-csma ns3-buildings)
target_link_libraries(ndn-csma ns3-config-store)
target_link_libraries(ndn-csma ns3-core)
target_link_libraries(ndn-csma ns3-csma)
target_link_libraries(ndn-csma ns3-csma-layout)
target_link_libraries(ndn-csma ns3-dsdv)
target_link_libraries(ndn-csma ns3-dsr)
target_link_libraries(ndn-csma ns3-energy)
target_link_libraries(ndn-csma ns3-fd-net-device)
target_link_libraries(ndn-csma ns3-flow-monitor)
target_link_libraries(ndn-csma ns3-internet)
target_link_libraries(ndn-csma ns3-internet-apps)
target_link_libraries(ndn-csma ns3-lr-wpan)
target_link_libraries(ndn-csma ns3-lte)
target_link_libraries(ndn-csma ns3-mesh)
target_link_libraries(ndn-csma ns3-mobility)
target_link_libraries(ndn-csma ns3-mpi)
target_link_libraries(ndn-csma ns3-ndnSIM)
target_link_libraries(ndn-csma ns3-netanim)
target_link_libraries(ndn-csma ns3-network)
target_link_libraries(ndn-csma ns3-nix-vector-routing)
target_link_libraries(ndn-csma ns3-olsr)
target_link_libraries(ndn-csma ns3-point-to-point)
target_link_libraries(ndn-csma ns3-point-to-point-layout)
target_link_libraries(ndn-csma ns3-propagation)
target_link_libraries(ndn-csma ns3-sixlowpan)
target_link_libraries(ndn-csma ns3-spectrum)
target_link_libraries(ndn-csma ns3-stats)
target_link_libraries(ndn-csma ns3-tap-bridge)
target_link_libraries(ndn-csma ns3-test)
target_link_libraries(ndn-csma ns3-topology-read)
target_link_libraries(ndn-csma ns3-traffic-control)
target_link_libraries(ndn-csma ns3-uan)
target_link_libraries(ndn-csma ns3-virtual-net-device)
target_link_libraries(ndn-csma ns3-wave)
target_link_libraries(ndn-csma ns3-wifi)
target_link_libraries(ndn-csma ns3-wimax)

set(ndn-custom-apps_SOURCES
    ndn-custom-apps.cpp
    ndn-custom-apps/custom-app.cpp
    ndn-custom-apps/hijacker.cpp)

set(ndn-custom-apps_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-custom-apps_INCLUDES})

add_executable(ndn-custom-apps ${ndn-custom-apps_SOURCES})

target_link_libraries(ndn-custom-apps ns3-antenna)
target_link_libraries(ndn-custom-apps ns3-aodv)
target_link_libraries(ndn-custom-apps ns3-applications)
target_link_libraries(ndn-custom-apps ns3-bridge)
target_link_libraries(ndn-custom-apps ns3-buildings)
target_link_libraries(ndn-custom-apps ns3-config-store)
target_link_libraries(ndn-custom-apps ns3-core)
target_link_libraries(ndn-custom-apps ns3-csma)
target_link_libraries(ndn-custom-apps ns3-csma-layout)
target_link_libraries(ndn-custom-apps ns3-dsdv)
target_link_libraries(ndn-custom-apps ns3-dsr)
target_link_libraries(ndn-custom-apps ns3-energy)
target_link_libraries(ndn-custom-apps ns3-fd-net-device)
target_link_libraries(ndn-custom-apps ns3-flow-monitor)
target_link_libraries(ndn-custom-apps ns3-internet)
target_link_libraries(ndn-custom-apps ns3-internet-apps)
target_link_libraries(ndn-custom-apps ns3-lr-wpan)
target_link_libraries(ndn-custom-apps ns3-lte)
target_link_libraries(ndn-custom-apps ns3-mesh)
target_link_libraries(ndn-custom-apps ns3-mobility)
target_link_libraries(ndn-custom-apps ns3-mpi)
target_link_libraries(ndn-custom-apps ns3-ndnSIM)
target_link_libraries(ndn-custom-apps ns3-netanim)
target_link_libraries(ndn-custom-apps ns3-network)
target_link_libraries(ndn-custom-apps ns3-nix-vector-routing)
target_link_libraries(ndn-custom-apps ns3-olsr)
target_link_libraries(ndn-custom-apps ns3-point-to-point)
target_link_libraries(ndn-custom-apps ns3-point-to-point-layout)
target_link_libraries(ndn-custom-apps ns3-propagation)
target_link_libraries(ndn-custom-apps ns3-sixlowpan)
target_link_libraries(ndn-custom-apps ns3-spectrum)
target_link_libraries(ndn-custom-apps ns3-stats)
target_link_libraries(ndn-custom-apps ns3-tap-bridge)
target_link_libraries(ndn-custom-apps ns3-test)
target_link_libraries(ndn-custom-apps ns3-topology-read)
target_link_libraries(ndn-custom-apps ns3-traffic-control)
target_link_libraries(ndn-custom-apps ns3-uan)
target_link_libraries(ndn-custom-apps ns3-virtual-net-device)
target_link_libraries(ndn-custom-apps ns3-wave)
target_link_libraries(ndn-custom-apps ns3-wifi)
target_link_libraries(ndn-custom-apps ns3-wimax)

set(ndn-cxx-simple_SOURCES
    ndn-cxx-simple.cpp)

set(ndn-cxx-simple_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-cxx-simple_INCLUDES})

add_executable(ndn-cxx-simple ${ndn-cxx-simple_SOURCES})

target_link_libraries(ndn-cxx-simple ns3-antenna)
target_link_libraries(ndn-cxx-simple ns3-aodv)
target_link_libraries(ndn-cxx-simple ns3-applications)
target_link_libraries(ndn-cxx-simple ns3-bridge)
target_link_libraries(ndn-cxx-simple ns3-buildings)
target_link_libraries(ndn-cxx-simple ns3-config-store)
target_link_libraries(ndn-cxx-simple ns3-core)
target_link_libraries(ndn-cxx-simple ns3-csma)
target_link_libraries(ndn-cxx-simple ns3-csma-layout)
target_link_libraries(ndn-cxx-simple ns3-dsdv)
target_link_libraries(ndn-cxx-simple ns3-dsr)
target_link_libraries(ndn-cxx-simple ns3-energy)
target_link_libraries(ndn-cxx-simple ns3-fd-net-device)
target_link_libraries(ndn-cxx-simple ns3-flow-monitor)
target_link_libraries(ndn-cxx-simple ns3-internet)
target_link_libraries(ndn-cxx-simple ns3-internet-apps)
target_link_libraries(ndn-cxx-simple ns3-lr-wpan)
target_link_libraries(ndn-cxx-simple ns3-lte)
target_link_libraries(ndn-cxx-simple ns3-mesh)
target_link_libraries(ndn-cxx-simple ns3-mobility)
target_link_libraries(ndn-cxx-simple ns3-mpi)
target_link_libraries(ndn-cxx-simple ns3-ndnSIM)
target_link_libraries(ndn-cxx-simple ns3-netanim)
target_link_libraries(ndn-cxx-simple ns3-network)
target_link_libraries(ndn-cxx-simple ns3-nix-vector-routing)
target_link_libraries(ndn-cxx-simple ns3-olsr)
target_link_libraries(ndn-cxx-simple ns3-point-to-point)
target_link_libraries(ndn-cxx-simple ns3-point-to-point-layout)
target_link_libraries(ndn-cxx-simple ns3-propagation)
target_link_libraries(ndn-cxx-simple ns3-sixlowpan)
target_link_libraries(ndn-cxx-simple ns3-spectrum)
target_link_libraries(ndn-cxx-simple ns3-stats)
target_link_libraries(ndn-cxx-simple ns3-tap-bridge)
target_link_libraries(ndn-cxx-simple ns3-test)
target_link_libraries(ndn-cxx-simple ns3-topology-read)
target_link_libraries(ndn-cxx-simple ns3-traffic-control)
target_link_libraries(ndn-cxx-simple ns3-uan)
target_link_libraries(ndn-cxx-simple ns3-virtual-net-device)
target_link_libraries(ndn-cxx-simple ns3-wave)
target_link_libraries(ndn-cxx-simple ns3-wifi)
target_link_libraries(ndn-cxx-simple ns3-wimax)

set(ndn-different-strategy-per-prefix_SOURCES
    ndn-different-strategy-per-prefix.cpp)

set(ndn-different-strategy-per-prefix_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-different-strategy-per-prefix_INCLUDES})

add_executable(ndn-different-strategy-per-prefix ${ndn-different-strategy-per-prefix_SOURCES})

target_link_libraries(ndn-different-strategy-per-prefix ns3-antenna)
target_link_libraries(ndn-different-strategy-per-prefix ns3-aodv)
target_link_libraries(ndn-different-strategy-per-prefix ns3-applications)
target_link_libraries(ndn-different-strategy-per-prefix ns3-bridge)
target_link_libraries(ndn-different-strategy-per-prefix ns3-buildings)
target_link_libraries(ndn-different-strategy-per-prefix ns3-config-store)
target_link_libraries(ndn-different-strategy-per-prefix ns3-core)
target_link_libraries(ndn-different-strategy-per-prefix ns3-csma)
target_link_libraries(ndn-different-strategy-per-prefix ns3-csma-layout)
target_link_libraries(ndn-different-strategy-per-prefix ns3-dsdv)
target_link_libraries(ndn-different-strategy-per-prefix ns3-dsr)
target_link_libraries(ndn-different-strategy-per-prefix ns3-energy)
target_link_libraries(ndn-different-strategy-per-prefix ns3-fd-net-device)
target_link_libraries(ndn-different-strategy-per-prefix ns3-flow-monitor)
target_link_libraries(ndn-different-strategy-per-prefix ns3-internet)
target_link_libraries(ndn-different-strategy-per-prefix ns3-internet-apps)
target_link_libraries(ndn-different-strategy-per-prefix ns3-lr-wpan)
target_link_libraries(ndn-different-strategy-per-prefix ns3-lte)
target_link_libraries(ndn-different-strategy-per-prefix ns3-mesh)
target_link_libraries(ndn-different-strategy-per-prefix ns3-mobility)
target_link_libraries(ndn-different-strategy-per-prefix ns3-mpi)
target_link_libraries(ndn-different-strategy-per-prefix ns3-ndnSIM)
target_link_libraries(ndn-different-strategy-per-prefix ns3-netanim)
target_link_libraries(ndn-different-strategy-per-prefix ns3-network)
target_link_libraries(ndn-different-strategy-per-prefix ns3-nix-vector-routing)
target_link_libraries(ndn-different-strategy-per-prefix ns3-olsr)
target_link_libraries(ndn-different-strategy-per-prefix ns3-point-to-point)
target_link_libraries(ndn-different-strategy-per-prefix ns3-point-to-point-layout)
target_link_libraries(ndn-different-strategy-per-prefix ns3-propagation)
target_link_libraries(ndn-different-strategy-per-prefix ns3-sixlowpan)
target_link_libraries(ndn-different-strategy-per-prefix ns3-spectrum)
target_link_libraries(ndn-different-strategy-per-prefix ns3-stats)
target_link_libraries(ndn-different-strategy-per-prefix ns3-tap-bridge)
target_link_libraries(ndn-different-strategy-per-prefix ns3-test)
target_link_libraries(ndn-different-strategy-per-prefix ns3-topology-read)
target_link_libraries(ndn-different-strategy-per-prefix ns3-traffic-control)
target_link_libraries(ndn-different-strategy-per-prefix ns3-uan)
target_link_libraries(ndn-different-strategy-per-prefix ns3-virtual-net-device)
target_link_libraries(ndn-different-strategy-per-prefix ns3-wave)
target_link_libraries(ndn-different-strategy-per-prefix ns3-wifi)
target_link_libraries(ndn-different-strategy-per-prefix ns3-wimax)

set(ndn-grid-multiple-strategies_SOURCES
    ndn-grid-multiple-strategies.cpp)

set(ndn-grid-multiple-strategies_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-grid-multiple-strategies_INCLUDES})

add_executable(ndn-grid-multiple-strategies ${ndn-grid-multiple-strategies_SOURCES})

target_link_libraries(ndn-grid-multiple-strategies ns3-antenna)
target_link_libraries(ndn-grid-multiple-strategies ns3-aodv)
target_link_libraries(ndn-grid-multiple-strategies ns3-applications)
target_link_libraries(ndn-grid-multiple-strategies ns3-bridge)
target_link_libraries(ndn-grid-multiple-strategies ns3-buildings)
target_link_libraries(ndn-grid-multiple-strategies ns3-config-store)
target_link_libraries(ndn-grid-multiple-strategies ns3-core)
target_link_libraries(ndn-grid-multiple-strategies ns3-csma)
target_link_libraries(ndn-grid-multiple-strategies ns3-csma-layout)
target_link_libraries(ndn-grid-multiple-strategies ns3-dsdv)
target_link_libraries(ndn-grid-multiple-strategies ns3-dsr)
target_link_libraries(ndn-grid-multiple-strategies ns3-energy)
target_link_libraries(ndn-grid-multiple-strategies ns3-fd-net-device)
target_link_libraries(ndn-grid-multiple-strategies ns3-flow-monitor)
target_link_libraries(ndn-grid-multiple-strategies ns3-internet)
target_link_libraries(ndn-grid-multiple-strategies ns3-internet-apps)
target_link_libraries(ndn-grid-multiple-strategies ns3-lr-wpan)
target_link_libraries(ndn-grid-multiple-strategies ns3-lte)
target_link_libraries(ndn-grid-multiple-strategies ns3-mesh)
target_link_libraries(ndn-grid-multiple-strategies ns3-mobility)
target_link_libraries(ndn-grid-multiple-strategies ns3-mpi)
target_link_libraries(ndn-grid-multiple-strategies ns3-ndnSIM)
target_link_libraries(ndn-grid-multiple-strategies ns3-netanim)
target_link_libraries(ndn-grid-multiple-strategies ns3-network)
target_link_libraries(ndn-grid-multiple-strategies ns3-nix-vector-routing)
target_link_libraries(ndn-grid-multiple-strategies ns3-olsr)
target_link_libraries(ndn-grid-multiple-strategies ns3-point-to-point)
target_link_libraries(ndn-grid-multiple-strategies ns3-point-to-point-layout)
target_link_libraries(ndn-grid-multiple-strategies ns3-propagation)
target_link_libraries(ndn-grid-multiple-strategies ns3-sixlowpan)
target_link_libraries(ndn-grid-multiple-strategies ns3-spectrum)
target_link_libraries(ndn-grid-multiple-strategies ns3-stats)
target_link_libraries(ndn-grid-multiple-strategies ns3-tap-bridge)
target_link_libraries(ndn-grid-multiple-strategies ns3-test)
target_link_libraries(ndn-grid-multiple-strategies ns3-topology-read)
target_link_libraries(ndn-grid-multiple-strategies ns3-traffic-control)
target_link_libraries(ndn-grid-multiple-strategies ns3-uan)
target_link_libraries(ndn-grid-multiple-strategies ns3-virtual-net-device)
target_link_libraries(ndn-grid-multiple-strategies ns3-wave)
target_link_libraries(ndn-grid-multiple-strategies ns3-wifi)
target_link_libraries(ndn-grid-multiple-strategies ns3-wimax)

set(ndn-grid-topo-plugin-loss_SOURCES
    ndn-grid-topo-plugin-loss.cpp)

set(ndn-grid-topo-plugin-loss_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-grid-topo-plugin-loss_INCLUDES})

add_executable(ndn-grid-topo-plugin-loss ${ndn-grid-topo-plugin-loss_SOURCES})

target_link_libraries(ndn-grid-topo-plugin-loss ns3-antenna)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-aodv)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-applications)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-bridge)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-buildings)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-config-store)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-core)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-csma)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-csma-layout)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-dsdv)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-dsr)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-energy)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-fd-net-device)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-flow-monitor)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-internet)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-internet-apps)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-lr-wpan)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-lte)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-mesh)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-mobility)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-mpi)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-ndnSIM)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-netanim)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-network)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-nix-vector-routing)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-olsr)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-point-to-point)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-point-to-point-layout)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-propagation)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-sixlowpan)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-spectrum)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-stats)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-tap-bridge)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-test)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-topology-read)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-traffic-control)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-uan)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-virtual-net-device)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-wave)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-wifi)
target_link_libraries(ndn-grid-topo-plugin-loss ns3-wimax)

set(ndn-grid-topo-plugin-red-queues_SOURCES
    ndn-grid-topo-plugin-red-queues.cpp)

set(ndn-grid-topo-plugin-red-queues_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-grid-topo-plugin-red-queues_INCLUDES})

add_executable(ndn-grid-topo-plugin-red-queues ${ndn-grid-topo-plugin-red-queues_SOURCES})

target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-antenna)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-aodv)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-applications)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-bridge)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-buildings)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-config-store)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-core)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-csma)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-csma-layout)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-dsdv)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-dsr)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-energy)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-fd-net-device)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-flow-monitor)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-internet)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-internet-apps)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-lr-wpan)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-lte)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-mesh)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-mobility)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-mpi)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-ndnSIM)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-netanim)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-network)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-nix-vector-routing)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-olsr)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-point-to-point)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-point-to-point-layout)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-propagation)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-sixlowpan)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-spectrum)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-stats)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-tap-bridge)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-test)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-topology-read)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-traffic-control)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-uan)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-virtual-net-device)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-wave)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-wifi)
target_link_libraries(ndn-grid-topo-plugin-red-queues ns3-wimax)

set(ndn-grid-topo-plugin_SOURCES
    ndn-grid-topo-plugin.cpp)

set(ndn-grid-topo-plugin_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-grid-topo-plugin_INCLUDES})

add_executable(ndn-grid-topo-plugin ${ndn-grid-topo-plugin_SOURCES})

target_link_libraries(ndn-grid-topo-plugin ns3-antenna)
target_link_libraries(ndn-grid-topo-plugin ns3-aodv)
target_link_libraries(ndn-grid-topo-plugin ns3-applications)
target_link_libraries(ndn-grid-topo-plugin ns3-bridge)
target_link_libraries(ndn-grid-topo-plugin ns3-buildings)
target_link_libraries(ndn-grid-topo-plugin ns3-config-store)
target_link_libraries(ndn-grid-topo-plugin ns3-core)
target_link_libraries(ndn-grid-topo-plugin ns3-csma)
target_link_libraries(ndn-grid-topo-plugin ns3-csma-layout)
target_link_libraries(ndn-grid-topo-plugin ns3-dsdv)
target_link_libraries(ndn-grid-topo-plugin ns3-dsr)
target_link_libraries(ndn-grid-topo-plugin ns3-energy)
target_link_libraries(ndn-grid-topo-plugin ns3-fd-net-device)
target_link_libraries(ndn-grid-topo-plugin ns3-flow-monitor)
target_link_libraries(ndn-grid-topo-plugin ns3-internet)
target_link_libraries(ndn-grid-topo-plugin ns3-internet-apps)
target_link_libraries(ndn-grid-topo-plugin ns3-lr-wpan)
target_link_libraries(ndn-grid-topo-plugin ns3-lte)
target_link_libraries(ndn-grid-topo-plugin ns3-mesh)
target_link_libraries(ndn-grid-topo-plugin ns3-mobility)
target_link_libraries(ndn-grid-topo-plugin ns3-mpi)
target_link_libraries(ndn-grid-topo-plugin ns3-ndnSIM)
target_link_libraries(ndn-grid-topo-plugin ns3-netanim)
target_link_libraries(ndn-grid-topo-plugin ns3-network)
target_link_libraries(ndn-grid-topo-plugin ns3-nix-vector-routing)
target_link_libraries(ndn-grid-topo-plugin ns3-olsr)
target_link_libraries(ndn-grid-topo-plugin ns3-point-to-point)
target_link_libraries(ndn-grid-topo-plugin ns3-point-to-point-layout)
target_link_libraries(ndn-grid-topo-plugin ns3-propagation)
target_link_libraries(ndn-grid-topo-plugin ns3-sixlowpan)
target_link_libraries(ndn-grid-topo-plugin ns3-spectrum)
target_link_libraries(ndn-grid-topo-plugin ns3-stats)
target_link_libraries(ndn-grid-topo-plugin ns3-tap-bridge)
target_link_libraries(ndn-grid-topo-plugin ns3-test)
target_link_libraries(ndn-grid-topo-plugin ns3-topology-read)
target_link_libraries(ndn-grid-topo-plugin ns3-traffic-control)
target_link_libraries(ndn-grid-topo-plugin ns3-uan)
target_link_libraries(ndn-grid-topo-plugin ns3-virtual-net-device)
target_link_libraries(ndn-grid-topo-plugin ns3-wave)
target_link_libraries(ndn-grid-topo-plugin ns3-wifi)
target_link_libraries(ndn-grid-topo-plugin ns3-wimax)

set(ndn-grid_SOURCES
    ndn-grid.cpp)

set(ndn-grid_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-grid_INCLUDES})

add_executable(ndn-grid ${ndn-grid_SOURCES})

target_link_libraries(ndn-grid ns3-antenna)
target_link_libraries(ndn-grid ns3-aodv)
target_link_libraries(ndn-grid ns3-applications)
target_link_libraries(ndn-grid ns3-bridge)
target_link_libraries(ndn-grid ns3-buildings)
target_link_libraries(ndn-grid ns3-config-store)
target_link_libraries(ndn-grid ns3-core)
target_link_libraries(ndn-grid ns3-csma)
target_link_libraries(ndn-grid ns3-csma-layout)
target_link_libraries(ndn-grid ns3-dsdv)
target_link_libraries(ndn-grid ns3-dsr)
target_link_libraries(ndn-grid ns3-energy)
target_link_libraries(ndn-grid ns3-fd-net-device)
target_link_libraries(ndn-grid ns3-flow-monitor)
target_link_libraries(ndn-grid ns3-internet)
target_link_libraries(ndn-grid ns3-internet-apps)
target_link_libraries(ndn-grid ns3-lr-wpan)
target_link_libraries(ndn-grid ns3-lte)
target_link_libraries(ndn-grid ns3-mesh)
target_link_libraries(ndn-grid ns3-mobility)
target_link_libraries(ndn-grid ns3-mpi)
target_link_libraries(ndn-grid ns3-ndnSIM)
target_link_libraries(ndn-grid ns3-netanim)
target_link_libraries(ndn-grid ns3-network)
target_link_libraries(ndn-grid ns3-nix-vector-routing)
target_link_libraries(ndn-grid ns3-olsr)
target_link_libraries(ndn-grid ns3-point-to-point)
target_link_libraries(ndn-grid ns3-point-to-point-layout)
target_link_libraries(ndn-grid ns3-propagation)
target_link_libraries(ndn-grid ns3-sixlowpan)
target_link_libraries(ndn-grid ns3-spectrum)
target_link_libraries(ndn-grid ns3-stats)
target_link_libraries(ndn-grid ns3-tap-bridge)
target_link_libraries(ndn-grid ns3-test)
target_link_libraries(ndn-grid ns3-topology-read)
target_link_libraries(ndn-grid ns3-traffic-control)
target_link_libraries(ndn-grid ns3-uan)
target_link_libraries(ndn-grid ns3-virtual-net-device)
target_link_libraries(ndn-grid ns3-wave)
target_link_libraries(ndn-grid ns3-wifi)
target_link_libraries(ndn-grid ns3-wimax)

set(ndn-load-balancer_SOURCES
    ndn-load-balancer.cpp
    ndn-load-balancer/random-load-balancer-strategy.cpp)

set(ndn-load-balancer_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-load-balancer_INCLUDES})

add_executable(ndn-load-balancer ${ndn-load-balancer_SOURCES})

target_link_libraries(ndn-load-balancer ns3-antenna)
target_link_libraries(ndn-load-balancer ns3-aodv)
target_link_libraries(ndn-load-balancer ns3-applications)
target_link_libraries(ndn-load-balancer ns3-bridge)
target_link_libraries(ndn-load-balancer ns3-buildings)
target_link_libraries(ndn-load-balancer ns3-config-store)
target_link_libraries(ndn-load-balancer ns3-core)
target_link_libraries(ndn-load-balancer ns3-csma)
target_link_libraries(ndn-load-balancer ns3-csma-layout)
target_link_libraries(ndn-load-balancer ns3-dsdv)
target_link_libraries(ndn-load-balancer ns3-dsr)
target_link_libraries(ndn-load-balancer ns3-energy)
target_link_libraries(ndn-load-balancer ns3-fd-net-device)
target_link_libraries(ndn-load-balancer ns3-flow-monitor)
target_link_libraries(ndn-load-balancer ns3-internet)
target_link_libraries(ndn-load-balancer ns3-internet-apps)
target_link_libraries(ndn-load-balancer ns3-lr-wpan)
target_link_libraries(ndn-load-balancer ns3-lte)
target_link_libraries(ndn-load-balancer ns3-mesh)
target_link_libraries(ndn-load-balancer ns3-mobility)
target_link_libraries(ndn-load-balancer ns3-mpi)
target_link_libraries(ndn-load-balancer ns3-ndnSIM)
target_link_libraries(ndn-load-balancer ns3-netanim)
target_link_libraries(ndn-load-balancer ns3-network)
target_link_libraries(ndn-load-balancer ns3-nix-vector-routing)
target_link_libraries(ndn-load-balancer ns3-olsr)
target_link_libraries(ndn-load-balancer ns3-point-to-point)
target_link_libraries(ndn-load-balancer ns3-point-to-point-layout)
target_link_libraries(ndn-load-balancer ns3-propagation)
target_link_libraries(ndn-load-balancer ns3-sixlowpan)
target_link_libraries(ndn-load-balancer ns3-spectrum)
target_link_libraries(ndn-load-balancer ns3-stats)
target_link_libraries(ndn-load-balancer ns3-tap-bridge)
target_link_libraries(ndn-load-balancer ns3-test)
target_link_libraries(ndn-load-balancer ns3-topology-read)
target_link_libraries(ndn-load-balancer ns3-traffic-control)
target_link_libraries(ndn-load-balancer ns3-uan)
target_link_libraries(ndn-load-balancer ns3-virtual-net-device)
target_link_libraries(ndn-load-balancer ns3-wave)
target_link_libraries(ndn-load-balancer ns3-wifi)
target_link_libraries(ndn-load-balancer ns3-wimax)

set(ndn-simple-for-nrt-helper_SOURCES
    ndn-simple-for-nrt-helper.cpp
    ndn-simple-for-nrt-helper/requester-app.cpp)

set(ndn-simple-for-nrt-helper_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-simple-for-nrt-helper_INCLUDES})

add_executable(ndn-simple-for-nrt-helper ${ndn-simple-for-nrt-helper_SOURCES})

target_link_libraries(ndn-simple-for-nrt-helper ns3-antenna)
target_link_libraries(ndn-simple-for-nrt-helper ns3-aodv)
target_link_libraries(ndn-simple-for-nrt-helper ns3-applications)
target_link_libraries(ndn-simple-for-nrt-helper ns3-bridge)
target_link_libraries(ndn-simple-for-nrt-helper ns3-buildings)
target_link_libraries(ndn-simple-for-nrt-helper ns3-config-store)
target_link_libraries(ndn-simple-for-nrt-helper ns3-core)
target_link_libraries(ndn-simple-for-nrt-helper ns3-csma)
target_link_libraries(ndn-simple-for-nrt-helper ns3-csma-layout)
target_link_libraries(ndn-simple-for-nrt-helper ns3-dsdv)
target_link_libraries(ndn-simple-for-nrt-helper ns3-dsr)
target_link_libraries(ndn-simple-for-nrt-helper ns3-energy)
target_link_libraries(ndn-simple-for-nrt-helper ns3-fd-net-device)
target_link_libraries(ndn-simple-for-nrt-helper ns3-flow-monitor)
target_link_libraries(ndn-simple-for-nrt-helper ns3-internet)
target_link_libraries(ndn-simple-for-nrt-helper ns3-internet-apps)
target_link_libraries(ndn-simple-for-nrt-helper ns3-lr-wpan)
target_link_libraries(ndn-simple-for-nrt-helper ns3-lte)
target_link_libraries(ndn-simple-for-nrt-helper ns3-mesh)
target_link_libraries(ndn-simple-for-nrt-helper ns3-mobility)
target_link_libraries(ndn-simple-for-nrt-helper ns3-mpi)
target_link_libraries(ndn-simple-for-nrt-helper ns3-ndnSIM)
target_link_libraries(ndn-simple-for-nrt-helper ns3-netanim)
target_link_libraries(ndn-simple-for-nrt-helper ns3-network)
target_link_libraries(ndn-simple-for-nrt-helper ns3-nix-vector-routing)
target_link_libraries(ndn-simple-for-nrt-helper ns3-olsr)
target_link_libraries(ndn-simple-for-nrt-helper ns3-point-to-point)
target_link_libraries(ndn-simple-for-nrt-helper ns3-point-to-point-layout)
target_link_libraries(ndn-simple-for-nrt-helper ns3-propagation)
target_link_libraries(ndn-simple-for-nrt-helper ns3-sixlowpan)
target_link_libraries(ndn-simple-for-nrt-helper ns3-spectrum)
target_link_libraries(ndn-simple-for-nrt-helper ns3-stats)
target_link_libraries(ndn-simple-for-nrt-helper ns3-tap-bridge)
target_link_libraries(ndn-simple-for-nrt-helper ns3-test)
target_link_libraries(ndn-simple-for-nrt-helper ns3-topology-read)
target_link_libraries(ndn-simple-for-nrt-helper ns3-traffic-control)
target_link_libraries(ndn-simple-for-nrt-helper ns3-uan)
target_link_libraries(ndn-simple-for-nrt-helper ns3-virtual-net-device)
target_link_libraries(ndn-simple-for-nrt-helper ns3-wave)
target_link_libraries(ndn-simple-for-nrt-helper ns3-wifi)
target_link_libraries(ndn-simple-for-nrt-helper ns3-wimax)

set(ndn-simple-wifi_SOURCES
    ndn-simple-wifi.cpp)

set(ndn-simple-wifi_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-simple-wifi_INCLUDES})

add_executable(ndn-simple-wifi ${ndn-simple-wifi_SOURCES})

target_link_libraries(ndn-simple-wifi ns3-antenna)
target_link_libraries(ndn-simple-wifi ns3-aodv)
target_link_libraries(ndn-simple-wifi ns3-applications)
target_link_libraries(ndn-simple-wifi ns3-bridge)
target_link_libraries(ndn-simple-wifi ns3-buildings)
target_link_libraries(ndn-simple-wifi ns3-config-store)
target_link_libraries(ndn-simple-wifi ns3-core)
target_link_libraries(ndn-simple-wifi ns3-csma)
target_link_libraries(ndn-simple-wifi ns3-csma-layout)
target_link_libraries(ndn-simple-wifi ns3-dsdv)
target_link_libraries(ndn-simple-wifi ns3-dsr)
target_link_libraries(ndn-simple-wifi ns3-energy)
target_link_libraries(ndn-simple-wifi ns3-fd-net-device)
target_link_libraries(ndn-simple-wifi ns3-flow-monitor)
target_link_libraries(ndn-simple-wifi ns3-internet)
target_link_libraries(ndn-simple-wifi ns3-internet-apps)
target_link_libraries(ndn-simple-wifi ns3-lr-wpan)
target_link_libraries(ndn-simple-wifi ns3-lte)
target_link_libraries(ndn-simple-wifi ns3-mesh)
target_link_libraries(ndn-simple-wifi ns3-mobility)
target_link_libraries(ndn-simple-wifi ns3-mpi)
target_link_libraries(ndn-simple-wifi ns3-ndnSIM)
target_link_libraries(ndn-simple-wifi ns3-netanim)
target_link_libraries(ndn-simple-wifi ns3-network)
target_link_libraries(ndn-simple-wifi ns3-nix-vector-routing)
target_link_libraries(ndn-simple-wifi ns3-olsr)
target_link_libraries(ndn-simple-wifi ns3-point-to-point)
target_link_libraries(ndn-simple-wifi ns3-point-to-point-layout)
target_link_libraries(ndn-simple-wifi ns3-propagation)
target_link_libraries(ndn-simple-wifi ns3-sixlowpan)
target_link_libraries(ndn-simple-wifi ns3-spectrum)
target_link_libraries(ndn-simple-wifi ns3-stats)
target_link_libraries(ndn-simple-wifi ns3-tap-bridge)
target_link_libraries(ndn-simple-wifi ns3-test)
target_link_libraries(ndn-simple-wifi ns3-topology-read)
target_link_libraries(ndn-simple-wifi ns3-traffic-control)
target_link_libraries(ndn-simple-wifi ns3-uan)
target_link_libraries(ndn-simple-wifi ns3-virtual-net-device)
target_link_libraries(ndn-simple-wifi ns3-wave)
target_link_libraries(ndn-simple-wifi ns3-wifi)
target_link_libraries(ndn-simple-wifi ns3-wimax)

set(ndn-simple-with-content-freshness_SOURCES
    ndn-simple-with-content-freshness.cpp
    ndn-simple-with-content-freshness/one-interest-requester.cpp)

set(ndn-simple-with-content-freshness_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-simple-with-content-freshness_INCLUDES})

add_executable(ndn-simple-with-content-freshness ${ndn-simple-with-content-freshness_SOURCES})

target_link_libraries(ndn-simple-with-content-freshness ns3-antenna)
target_link_libraries(ndn-simple-with-content-freshness ns3-aodv)
target_link_libraries(ndn-simple-with-content-freshness ns3-applications)
target_link_libraries(ndn-simple-with-content-freshness ns3-bridge)
target_link_libraries(ndn-simple-with-content-freshness ns3-buildings)
target_link_libraries(ndn-simple-with-content-freshness ns3-config-store)
target_link_libraries(ndn-simple-with-content-freshness ns3-core)
target_link_libraries(ndn-simple-with-content-freshness ns3-csma)
target_link_libraries(ndn-simple-with-content-freshness ns3-csma-layout)
target_link_libraries(ndn-simple-with-content-freshness ns3-dsdv)
target_link_libraries(ndn-simple-with-content-freshness ns3-dsr)
target_link_libraries(ndn-simple-with-content-freshness ns3-energy)
target_link_libraries(ndn-simple-with-content-freshness ns3-fd-net-device)
target_link_libraries(ndn-simple-with-content-freshness ns3-flow-monitor)
target_link_libraries(ndn-simple-with-content-freshness ns3-internet)
target_link_libraries(ndn-simple-with-content-freshness ns3-internet-apps)
target_link_libraries(ndn-simple-with-content-freshness ns3-lr-wpan)
target_link_libraries(ndn-simple-with-content-freshness ns3-lte)
target_link_libraries(ndn-simple-with-content-freshness ns3-mesh)
target_link_libraries(ndn-simple-with-content-freshness ns3-mobility)
target_link_libraries(ndn-simple-with-content-freshness ns3-mpi)
target_link_libraries(ndn-simple-with-content-freshness ns3-ndnSIM)
target_link_libraries(ndn-simple-with-content-freshness ns3-netanim)
target_link_libraries(ndn-simple-with-content-freshness ns3-network)
target_link_libraries(ndn-simple-with-content-freshness ns3-nix-vector-routing)
target_link_libraries(ndn-simple-with-content-freshness ns3-olsr)
target_link_libraries(ndn-simple-with-content-freshness ns3-point-to-point)
target_link_libraries(ndn-simple-with-content-freshness ns3-point-to-point-layout)
target_link_libraries(ndn-simple-with-content-freshness ns3-propagation)
target_link_libraries(ndn-simple-with-content-freshness ns3-sixlowpan)
target_link_libraries(ndn-simple-with-content-freshness ns3-spectrum)
target_link_libraries(ndn-simple-with-content-freshness ns3-stats)
target_link_libraries(ndn-simple-with-content-freshness ns3-tap-bridge)
target_link_libraries(ndn-simple-with-content-freshness ns3-test)
target_link_libraries(ndn-simple-with-content-freshness ns3-topology-read)
target_link_libraries(ndn-simple-with-content-freshness ns3-traffic-control)
target_link_libraries(ndn-simple-with-content-freshness ns3-uan)
target_link_libraries(ndn-simple-with-content-freshness ns3-virtual-net-device)
target_link_libraries(ndn-simple-with-content-freshness ns3-wave)
target_link_libraries(ndn-simple-with-content-freshness ns3-wifi)
target_link_libraries(ndn-simple-with-content-freshness ns3-wimax)

set(ndn-simple-with-link-failure_SOURCES
    ndn-simple-with-link-failure.cpp)

set(ndn-simple-with-link-failure_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-simple-with-link-failure_INCLUDES})

add_executable(ndn-simple-with-link-failure ${ndn-simple-with-link-failure_SOURCES})

target_link_libraries(ndn-simple-with-link-failure ns3-antenna)
target_link_libraries(ndn-simple-with-link-failure ns3-aodv)
target_link_libraries(ndn-simple-with-link-failure ns3-applications)
target_link_libraries(ndn-simple-with-link-failure ns3-bridge)
target_link_libraries(ndn-simple-with-link-failure ns3-buildings)
target_link_libraries(ndn-simple-with-link-failure ns3-config-store)
target_link_libraries(ndn-simple-with-link-failure ns3-core)
target_link_libraries(ndn-simple-with-link-failure ns3-csma)
target_link_libraries(ndn-simple-with-link-failure ns3-csma-layout)
target_link_libraries(ndn-simple-with-link-failure ns3-dsdv)
target_link_libraries(ndn-simple-with-link-failure ns3-dsr)
target_link_libraries(ndn-simple-with-link-failure ns3-energy)
target_link_libraries(ndn-simple-with-link-failure ns3-fd-net-device)
target_link_libraries(ndn-simple-with-link-failure ns3-flow-monitor)
target_link_libraries(ndn-simple-with-link-failure ns3-internet)
target_link_libraries(ndn-simple-with-link-failure ns3-internet-apps)
target_link_libraries(ndn-simple-with-link-failure ns3-lr-wpan)
target_link_libraries(ndn-simple-with-link-failure ns3-lte)
target_link_libraries(ndn-simple-with-link-failure ns3-mesh)
target_link_libraries(ndn-simple-with-link-failure ns3-mobility)
target_link_libraries(ndn-simple-with-link-failure ns3-mpi)
target_link_libraries(ndn-simple-with-link-failure ns3-ndnSIM)
target_link_libraries(ndn-simple-with-link-failure ns3-netanim)
target_link_libraries(ndn-simple-with-link-failure ns3-network)
target_link_libraries(ndn-simple-with-link-failure ns3-nix-vector-routing)
target_link_libraries(ndn-simple-with-link-failure ns3-olsr)
target_link_libraries(ndn-simple-with-link-failure ns3-point-to-point)
target_link_libraries(ndn-simple-with-link-failure ns3-point-to-point-layout)
target_link_libraries(ndn-simple-with-link-failure ns3-propagation)
target_link_libraries(ndn-simple-with-link-failure ns3-sixlowpan)
target_link_libraries(ndn-simple-with-link-failure ns3-spectrum)
target_link_libraries(ndn-simple-with-link-failure ns3-stats)
target_link_libraries(ndn-simple-with-link-failure ns3-tap-bridge)
target_link_libraries(ndn-simple-with-link-failure ns3-test)
target_link_libraries(ndn-simple-with-link-failure ns3-topology-read)
target_link_libraries(ndn-simple-with-link-failure ns3-traffic-control)
target_link_libraries(ndn-simple-with-link-failure ns3-uan)
target_link_libraries(ndn-simple-with-link-failure ns3-virtual-net-device)
target_link_libraries(ndn-simple-with-link-failure ns3-wave)
target_link_libraries(ndn-simple-with-link-failure ns3-wifi)
target_link_libraries(ndn-simple-with-link-failure ns3-wimax)

set(ndn-simple-with-pcap_SOURCES
    ndn-simple-with-pcap.cpp)

set(ndn-simple-with-pcap_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-simple-with-pcap_INCLUDES})

add_executable(ndn-simple-with-pcap ${ndn-simple-with-pcap_SOURCES})

target_link_libraries(ndn-simple-with-pcap ns3-antenna)
target_link_libraries(ndn-simple-with-pcap ns3-aodv)
target_link_libraries(ndn-simple-with-pcap ns3-applications)
target_link_libraries(ndn-simple-with-pcap ns3-bridge)
target_link_libraries(ndn-simple-with-pcap ns3-buildings)
target_link_libraries(ndn-simple-with-pcap ns3-config-store)
target_link_libraries(ndn-simple-with-pcap ns3-core)
target_link_libraries(ndn-simple-with-pcap ns3-csma)
target_link_libraries(ndn-simple-with-pcap ns3-csma-layout)
target_link_libraries(ndn-simple-with-pcap ns3-dsdv)
target_link_libraries(ndn-simple-with-pcap ns3-dsr)
target_link_libraries(ndn-simple-with-pcap ns3-energy)
target_link_libraries(ndn-simple-with-pcap ns3-fd-net-device)
target_link_libraries(ndn-simple-with-pcap ns3-flow-monitor)
target_link_libraries(ndn-simple-with-pcap ns3-internet)
target_link_libraries(ndn-simple-with-pcap ns3-internet-apps)
target_link_libraries(ndn-simple-with-pcap ns3-lr-wpan)
target_link_libraries(ndn-simple-with-pcap ns3-lte)
target_link_libraries(ndn-simple-with-pcap ns3-mesh)
target_link_libraries(ndn-simple-with-pcap ns3-mobility)
target_link_libraries(ndn-simple-with-pcap ns3-mpi)
target_link_libraries(ndn-simple-with-pcap ns3-ndnSIM)
target_link_libraries(ndn-simple-with-pcap ns3-netanim)
target_link_libraries(ndn-simple-with-pcap ns3-network)
target_link_libraries(ndn-simple-with-pcap ns3-nix-vector-routing)
target_link_libraries(ndn-simple-with-pcap ns3-olsr)
target_link_libraries(ndn-simple-with-pcap ns3-point-to-point)
target_link_libraries(ndn-simple-with-pcap ns3-point-to-point-layout)
target_link_libraries(ndn-simple-with-pcap ns3-propagation)
target_link_libraries(ndn-simple-with-pcap ns3-sixlowpan)
target_link_libraries(ndn-simple-with-pcap ns3-spectrum)
target_link_libraries(ndn-simple-with-pcap ns3-stats)
target_link_libraries(ndn-simple-with-pcap ns3-tap-bridge)
target_link_libraries(ndn-simple-with-pcap ns3-test)
target_link_libraries(ndn-simple-with-pcap ns3-topology-read)
target_link_libraries(ndn-simple-with-pcap ns3-traffic-control)
target_link_libraries(ndn-simple-with-pcap ns3-uan)
target_link_libraries(ndn-simple-with-pcap ns3-virtual-net-device)
target_link_libraries(ndn-simple-with-pcap ns3-wave)
target_link_libraries(ndn-simple-with-pcap ns3-wifi)
target_link_libraries(ndn-simple-with-pcap ns3-wimax)

set(ndn-simple_SOURCES
    ndn-simple.cpp)

set(ndn-simple_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-simple_INCLUDES})

add_executable(ndn-simple ${ndn-simple_SOURCES})

target_link_libraries(ndn-simple ns3-antenna)
target_link_libraries(ndn-simple ns3-aodv)
target_link_libraries(ndn-simple ns3-applications)
target_link_libraries(ndn-simple ns3-bridge)
target_link_libraries(ndn-simple ns3-buildings)
target_link_libraries(ndn-simple ns3-config-store)
target_link_libraries(ndn-simple ns3-core)
target_link_libraries(ndn-simple ns3-csma)
target_link_libraries(ndn-simple ns3-csma-layout)
target_link_libraries(ndn-simple ns3-dsdv)
target_link_libraries(ndn-simple ns3-dsr)
target_link_libraries(ndn-simple ns3-energy)
target_link_libraries(ndn-simple ns3-fd-net-device)
target_link_libraries(ndn-simple ns3-flow-monitor)
target_link_libraries(ndn-simple ns3-internet)
target_link_libraries(ndn-simple ns3-internet-apps)
target_link_libraries(ndn-simple ns3-lr-wpan)
target_link_libraries(ndn-simple ns3-lte)
target_link_libraries(ndn-simple ns3-mesh)
target_link_libraries(ndn-simple ns3-mobility)
target_link_libraries(ndn-simple ns3-mpi)
target_link_libraries(ndn-simple ns3-ndnSIM)
target_link_libraries(ndn-simple ns3-netanim)
target_link_libraries(ndn-simple ns3-network)
target_link_libraries(ndn-simple ns3-nix-vector-routing)
target_link_libraries(ndn-simple ns3-olsr)
target_link_libraries(ndn-simple ns3-point-to-point)
target_link_libraries(ndn-simple ns3-point-to-point-layout)
target_link_libraries(ndn-simple ns3-propagation)
target_link_libraries(ndn-simple ns3-sixlowpan)
target_link_libraries(ndn-simple ns3-spectrum)
target_link_libraries(ndn-simple ns3-stats)
target_link_libraries(ndn-simple ns3-tap-bridge)
target_link_libraries(ndn-simple ns3-test)
target_link_libraries(ndn-simple ns3-topology-read)
target_link_libraries(ndn-simple ns3-traffic-control)
target_link_libraries(ndn-simple ns3-uan)
target_link_libraries(ndn-simple ns3-virtual-net-device)
target_link_libraries(ndn-simple ns3-wave)
target_link_libraries(ndn-simple ns3-wifi)
target_link_libraries(ndn-simple ns3-wimax)

set(ndn-tree-app-delay-tracer_SOURCES
    ndn-tree-app-delay-tracer.cpp)

set(ndn-tree-app-delay-tracer_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-tree-app-delay-tracer_INCLUDES})

add_executable(ndn-tree-app-delay-tracer ${ndn-tree-app-delay-tracer_SOURCES})

target_link_libraries(ndn-tree-app-delay-tracer ns3-antenna)
target_link_libraries(ndn-tree-app-delay-tracer ns3-aodv)
target_link_libraries(ndn-tree-app-delay-tracer ns3-applications)
target_link_libraries(ndn-tree-app-delay-tracer ns3-bridge)
target_link_libraries(ndn-tree-app-delay-tracer ns3-buildings)
target_link_libraries(ndn-tree-app-delay-tracer ns3-config-store)
target_link_libraries(ndn-tree-app-delay-tracer ns3-core)
target_link_libraries(ndn-tree-app-delay-tracer ns3-csma)
target_link_libraries(ndn-tree-app-delay-tracer ns3-csma-layout)
target_link_libraries(ndn-tree-app-delay-tracer ns3-dsdv)
target_link_libraries(ndn-tree-app-delay-tracer ns3-dsr)
target_link_libraries(ndn-tree-app-delay-tracer ns3-energy)
target_link_libraries(ndn-tree-app-delay-tracer ns3-fd-net-device)
target_link_libraries(ndn-tree-app-delay-tracer ns3-flow-monitor)
target_link_libraries(ndn-tree-app-delay-tracer ns3-internet)
target_link_libraries(ndn-tree-app-delay-tracer ns3-internet-apps)
target_link_libraries(ndn-tree-app-delay-tracer ns3-lr-wpan)
target_link_libraries(ndn-tree-app-delay-tracer ns3-lte)
target_link_libraries(ndn-tree-app-delay-tracer ns3-mesh)
target_link_libraries(ndn-tree-app-delay-tracer ns3-mobility)
target_link_libraries(ndn-tree-app-delay-tracer ns3-mpi)
target_link_libraries(ndn-tree-app-delay-tracer ns3-ndnSIM)
target_link_libraries(ndn-tree-app-delay-tracer ns3-netanim)
target_link_libraries(ndn-tree-app-delay-tracer ns3-network)
target_link_libraries(ndn-tree-app-delay-tracer ns3-nix-vector-routing)
target_link_libraries(ndn-tree-app-delay-tracer ns3-olsr)
target_link_libraries(ndn-tree-app-delay-tracer ns3-point-to-point)
target_link_libraries(ndn-tree-app-delay-tracer ns3-point-to-point-layout)
target_link_libraries(ndn-tree-app-delay-tracer ns3-propagation)
target_link_libraries(ndn-tree-app-delay-tracer ns3-sixlowpan)
target_link_libraries(ndn-tree-app-delay-tracer ns3-spectrum)
target_link_libraries(ndn-tree-app-delay-tracer ns3-stats)
target_link_libraries(ndn-tree-app-delay-tracer ns3-tap-bridge)
target_link_libraries(ndn-tree-app-delay-tracer ns3-test)
target_link_libraries(ndn-tree-app-delay-tracer ns3-topology-read)
target_link_libraries(ndn-tree-app-delay-tracer ns3-traffic-control)
target_link_libraries(ndn-tree-app-delay-tracer ns3-uan)
target_link_libraries(ndn-tree-app-delay-tracer ns3-virtual-net-device)
target_link_libraries(ndn-tree-app-delay-tracer ns3-wave)
target_link_libraries(ndn-tree-app-delay-tracer ns3-wifi)
target_link_libraries(ndn-tree-app-delay-tracer ns3-wimax)

set(ndn-tree-cs-tracers_SOURCES
    ndn-tree-cs-tracers.cpp)

set(ndn-tree-cs-tracers_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-tree-cs-tracers_INCLUDES})

add_executable(ndn-tree-cs-tracers ${ndn-tree-cs-tracers_SOURCES})

target_link_libraries(ndn-tree-cs-tracers ns3-antenna)
target_link_libraries(ndn-tree-cs-tracers ns3-aodv)
target_link_libraries(ndn-tree-cs-tracers ns3-applications)
target_link_libraries(ndn-tree-cs-tracers ns3-bridge)
target_link_libraries(ndn-tree-cs-tracers ns3-buildings)
target_link_libraries(ndn-tree-cs-tracers ns3-config-store)
target_link_libraries(ndn-tree-cs-tracers ns3-core)
target_link_libraries(ndn-tree-cs-tracers ns3-csma)
target_link_libraries(ndn-tree-cs-tracers ns3-csma-layout)
target_link_libraries(ndn-tree-cs-tracers ns3-dsdv)
target_link_libraries(ndn-tree-cs-tracers ns3-dsr)
target_link_libraries(ndn-tree-cs-tracers ns3-energy)
target_link_libraries(ndn-tree-cs-tracers ns3-fd-net-device)
target_link_libraries(ndn-tree-cs-tracers ns3-flow-monitor)
target_link_libraries(ndn-tree-cs-tracers ns3-internet)
target_link_libraries(ndn-tree-cs-tracers ns3-internet-apps)
target_link_libraries(ndn-tree-cs-tracers ns3-lr-wpan)
target_link_libraries(ndn-tree-cs-tracers ns3-lte)
target_link_libraries(ndn-tree-cs-tracers ns3-mesh)
target_link_libraries(ndn-tree-cs-tracers ns3-mobility)
target_link_libraries(ndn-tree-cs-tracers ns3-mpi)
target_link_libraries(ndn-tree-cs-tracers ns3-ndnSIM)
target_link_libraries(ndn-tree-cs-tracers ns3-netanim)
target_link_libraries(ndn-tree-cs-tracers ns3-network)
target_link_libraries(ndn-tree-cs-tracers ns3-nix-vector-routing)
target_link_libraries(ndn-tree-cs-tracers ns3-olsr)
target_link_libraries(ndn-tree-cs-tracers ns3-point-to-point)
target_link_libraries(ndn-tree-cs-tracers ns3-point-to-point-layout)
target_link_libraries(ndn-tree-cs-tracers ns3-propagation)
target_link_libraries(ndn-tree-cs-tracers ns3-sixlowpan)
target_link_libraries(ndn-tree-cs-tracers ns3-spectrum)
target_link_libraries(ndn-tree-cs-tracers ns3-stats)
target_link_libraries(ndn-tree-cs-tracers ns3-tap-bridge)
target_link_libraries(ndn-tree-cs-tracers ns3-test)
target_link_libraries(ndn-tree-cs-tracers ns3-topology-read)
target_link_libraries(ndn-tree-cs-tracers ns3-traffic-control)
target_link_libraries(ndn-tree-cs-tracers ns3-uan)
target_link_libraries(ndn-tree-cs-tracers ns3-virtual-net-device)
target_link_libraries(ndn-tree-cs-tracers ns3-wave)
target_link_libraries(ndn-tree-cs-tracers ns3-wifi)
target_link_libraries(ndn-tree-cs-tracers ns3-wimax)

set(ndn-tree-tracers_SOURCES
    ndn-tree-tracers.cpp)

set(ndn-tree-tracers_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-tree-tracers_INCLUDES})

add_executable(ndn-tree-tracers ${ndn-tree-tracers_SOURCES})

target_link_libraries(ndn-tree-tracers ns3-antenna)
target_link_libraries(ndn-tree-tracers ns3-aodv)
target_link_libraries(ndn-tree-tracers ns3-applications)
target_link_libraries(ndn-tree-tracers ns3-bridge)
target_link_libraries(ndn-tree-tracers ns3-buildings)
target_link_libraries(ndn-tree-tracers ns3-config-store)
target_link_libraries(ndn-tree-tracers ns3-core)
target_link_libraries(ndn-tree-tracers ns3-csma)
target_link_libraries(ndn-tree-tracers ns3-csma-layout)
target_link_libraries(ndn-tree-tracers ns3-dsdv)
target_link_libraries(ndn-tree-tracers ns3-dsr)
target_link_libraries(ndn-tree-tracers ns3-energy)
target_link_libraries(ndn-tree-tracers ns3-fd-net-device)
target_link_libraries(ndn-tree-tracers ns3-flow-monitor)
target_link_libraries(ndn-tree-tracers ns3-internet)
target_link_libraries(ndn-tree-tracers ns3-internet-apps)
target_link_libraries(ndn-tree-tracers ns3-lr-wpan)
target_link_libraries(ndn-tree-tracers ns3-lte)
target_link_libraries(ndn-tree-tracers ns3-mesh)
target_link_libraries(ndn-tree-tracers ns3-mobility)
target_link_libraries(ndn-tree-tracers ns3-mpi)
target_link_libraries(ndn-tree-tracers ns3-ndnSIM)
target_link_libraries(ndn-tree-tracers ns3-netanim)
target_link_libraries(ndn-tree-tracers ns3-network)
target_link_libraries(ndn-tree-tracers ns3-nix-vector-routing)
target_link_libraries(ndn-tree-tracers ns3-olsr)
target_link_libraries(ndn-tree-tracers ns3-point-to-point)
target_link_libraries(ndn-tree-tracers ns3-point-to-point-layout)
target_link_libraries(ndn-tree-tracers ns3-propagation)
target_link_libraries(ndn-tree-tracers ns3-sixlowpan)
target_link_libraries(ndn-tree-tracers ns3-spectrum)
target_link_libraries(ndn-tree-tracers ns3-stats)
target_link_libraries(ndn-tree-tracers ns3-tap-bridge)
target_link_libraries(ndn-tree-tracers ns3-test)
target_link_libraries(ndn-tree-tracers ns3-topology-read)
target_link_libraries(ndn-tree-tracers ns3-traffic-control)
target_link_libraries(ndn-tree-tracers ns3-uan)
target_link_libraries(ndn-tree-tracers ns3-virtual-net-device)
target_link_libraries(ndn-tree-tracers ns3-wave)
target_link_libraries(ndn-tree-tracers ns3-wifi)
target_link_libraries(ndn-tree-tracers ns3-wimax)

set(ndn-tree-with-l2tracer_SOURCES
    ndn-tree-with-l2tracer.cpp)

set(ndn-tree-with-l2tracer_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-tree-with-l2tracer_INCLUDES})

add_executable(ndn-tree-with-l2tracer ${ndn-tree-with-l2tracer_SOURCES})

target_link_libraries(ndn-tree-with-l2tracer ns3-antenna)
target_link_libraries(ndn-tree-with-l2tracer ns3-aodv)
target_link_libraries(ndn-tree-with-l2tracer ns3-applications)
target_link_libraries(ndn-tree-with-l2tracer ns3-bridge)
target_link_libraries(ndn-tree-with-l2tracer ns3-buildings)
target_link_libraries(ndn-tree-with-l2tracer ns3-config-store)
target_link_libraries(ndn-tree-with-l2tracer ns3-core)
target_link_libraries(ndn-tree-with-l2tracer ns3-csma)
target_link_libraries(ndn-tree-with-l2tracer ns3-csma-layout)
target_link_libraries(ndn-tree-with-l2tracer ns3-dsdv)
target_link_libraries(ndn-tree-with-l2tracer ns3-dsr)
target_link_libraries(ndn-tree-with-l2tracer ns3-energy)
target_link_libraries(ndn-tree-with-l2tracer ns3-fd-net-device)
target_link_libraries(ndn-tree-with-l2tracer ns3-flow-monitor)
target_link_libraries(ndn-tree-with-l2tracer ns3-internet)
target_link_libraries(ndn-tree-with-l2tracer ns3-internet-apps)
target_link_libraries(ndn-tree-with-l2tracer ns3-lr-wpan)
target_link_libraries(ndn-tree-with-l2tracer ns3-lte)
target_link_libraries(ndn-tree-with-l2tracer ns3-mesh)
target_link_libraries(ndn-tree-with-l2tracer ns3-mobility)
target_link_libraries(ndn-tree-with-l2tracer ns3-mpi)
target_link_libraries(ndn-tree-with-l2tracer ns3-ndnSIM)
target_link_libraries(ndn-tree-with-l2tracer ns3-netanim)
target_link_libraries(ndn-tree-with-l2tracer ns3-network)
target_link_libraries(ndn-tree-with-l2tracer ns3-nix-vector-routing)
target_link_libraries(ndn-tree-with-l2tracer ns3-olsr)
target_link_libraries(ndn-tree-with-l2tracer ns3-point-to-point)
target_link_libraries(ndn-tree-with-l2tracer ns3-point-to-point-layout)
target_link_libraries(ndn-tree-with-l2tracer ns3-propagation)
target_link_libraries(ndn-tree-with-l2tracer ns3-sixlowpan)
target_link_libraries(ndn-tree-with-l2tracer ns3-spectrum)
target_link_libraries(ndn-tree-with-l2tracer ns3-stats)
target_link_libraries(ndn-tree-with-l2tracer ns3-tap-bridge)
target_link_libraries(ndn-tree-with-l2tracer ns3-test)
target_link_libraries(ndn-tree-with-l2tracer ns3-topology-read)
target_link_libraries(ndn-tree-with-l2tracer ns3-traffic-control)
target_link_libraries(ndn-tree-with-l2tracer ns3-uan)
target_link_libraries(ndn-tree-with-l2tracer ns3-virtual-net-device)
target_link_libraries(ndn-tree-with-l2tracer ns3-wave)
target_link_libraries(ndn-tree-with-l2tracer ns3-wifi)
target_link_libraries(ndn-tree-with-l2tracer ns3-wimax)

set(ndn-triangle-calculate-routes_SOURCES
    ndn-triangle-calculate-routes.cpp)

set(ndn-triangle-calculate-routes_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-triangle-calculate-routes_INCLUDES})

add_executable(ndn-triangle-calculate-routes ${ndn-triangle-calculate-routes_SOURCES})

target_link_libraries(ndn-triangle-calculate-routes ns3-antenna)
target_link_libraries(ndn-triangle-calculate-routes ns3-aodv)
target_link_libraries(ndn-triangle-calculate-routes ns3-applications)
target_link_libraries(ndn-triangle-calculate-routes ns3-bridge)
target_link_libraries(ndn-triangle-calculate-routes ns3-buildings)
target_link_libraries(ndn-triangle-calculate-routes ns3-config-store)
target_link_libraries(ndn-triangle-calculate-routes ns3-core)
target_link_libraries(ndn-triangle-calculate-routes ns3-csma)
target_link_libraries(ndn-triangle-calculate-routes ns3-csma-layout)
target_link_libraries(ndn-triangle-calculate-routes ns3-dsdv)
target_link_libraries(ndn-triangle-calculate-routes ns3-dsr)
target_link_libraries(ndn-triangle-calculate-routes ns3-energy)
target_link_libraries(ndn-triangle-calculate-routes ns3-fd-net-device)
target_link_libraries(ndn-triangle-calculate-routes ns3-flow-monitor)
target_link_libraries(ndn-triangle-calculate-routes ns3-internet)
target_link_libraries(ndn-triangle-calculate-routes ns3-internet-apps)
target_link_libraries(ndn-triangle-calculate-routes ns3-lr-wpan)
target_link_libraries(ndn-triangle-calculate-routes ns3-lte)
target_link_libraries(ndn-triangle-calculate-routes ns3-mesh)
target_link_libraries(ndn-triangle-calculate-routes ns3-mobility)
target_link_libraries(ndn-triangle-calculate-routes ns3-mpi)
target_link_libraries(ndn-triangle-calculate-routes ns3-ndnSIM)
target_link_libraries(ndn-triangle-calculate-routes ns3-netanim)
target_link_libraries(ndn-triangle-calculate-routes ns3-network)
target_link_libraries(ndn-triangle-calculate-routes ns3-nix-vector-routing)
target_link_libraries(ndn-triangle-calculate-routes ns3-olsr)
target_link_libraries(ndn-triangle-calculate-routes ns3-point-to-point)
target_link_libraries(ndn-triangle-calculate-routes ns3-point-to-point-layout)
target_link_libraries(ndn-triangle-calculate-routes ns3-propagation)
target_link_libraries(ndn-triangle-calculate-routes ns3-sixlowpan)
target_link_libraries(ndn-triangle-calculate-routes ns3-spectrum)
target_link_libraries(ndn-triangle-calculate-routes ns3-stats)
target_link_libraries(ndn-triangle-calculate-routes ns3-tap-bridge)
target_link_libraries(ndn-triangle-calculate-routes ns3-test)
target_link_libraries(ndn-triangle-calculate-routes ns3-topology-read)
target_link_libraries(ndn-triangle-calculate-routes ns3-traffic-control)
target_link_libraries(ndn-triangle-calculate-routes ns3-uan)
target_link_libraries(ndn-triangle-calculate-routes ns3-virtual-net-device)
target_link_libraries(ndn-triangle-calculate-routes ns3-wave)
target_link_libraries(ndn-triangle-calculate-routes ns3-wifi)
target_link_libraries(ndn-triangle-calculate-routes ns3-wimax)

set(ndn-zipf-mandelbrot_SOURCES
    ndn-zipf-mandelbrot.cpp)

set(ndn-zipf-mandelbrot_INCLUDES
    #
    ../../../build/ns3/ndnSIM/NFD
    ../../../ns3/ndnSIM/NFD
    ../../../build/src/ndnSIM/NFD/core
    ../NFD/core
    ../../../build/src/ndnSIM/NFD/daemon
    ../NFD/daemon
    ../../../build/src/ndnSIM/NFD/rib
    ../NFD/rib
    ../../../build/ns3/ndnSIM
    ../../../ns3/ndnSIM
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

include_directories(${ndn-zipf-mandelbrot_INCLUDES})

add_executable(ndn-zipf-mandelbrot ${ndn-zipf-mandelbrot_SOURCES})

target_link_libraries(ndn-zipf-mandelbrot ns3-antenna)
target_link_libraries(ndn-zipf-mandelbrot ns3-aodv)
target_link_libraries(ndn-zipf-mandelbrot ns3-applications)
target_link_libraries(ndn-zipf-mandelbrot ns3-bridge)
target_link_libraries(ndn-zipf-mandelbrot ns3-buildings)
target_link_libraries(ndn-zipf-mandelbrot ns3-config-store)
target_link_libraries(ndn-zipf-mandelbrot ns3-core)
target_link_libraries(ndn-zipf-mandelbrot ns3-csma)
target_link_libraries(ndn-zipf-mandelbrot ns3-csma-layout)
target_link_libraries(ndn-zipf-mandelbrot ns3-dsdv)
target_link_libraries(ndn-zipf-mandelbrot ns3-dsr)
target_link_libraries(ndn-zipf-mandelbrot ns3-energy)
target_link_libraries(ndn-zipf-mandelbrot ns3-fd-net-device)
target_link_libraries(ndn-zipf-mandelbrot ns3-flow-monitor)
target_link_libraries(ndn-zipf-mandelbrot ns3-internet)
target_link_libraries(ndn-zipf-mandelbrot ns3-internet-apps)
target_link_libraries(ndn-zipf-mandelbrot ns3-lr-wpan)
target_link_libraries(ndn-zipf-mandelbrot ns3-lte)
target_link_libraries(ndn-zipf-mandelbrot ns3-mesh)
target_link_libraries(ndn-zipf-mandelbrot ns3-mobility)
target_link_libraries(ndn-zipf-mandelbrot ns3-mpi)
target_link_libraries(ndn-zipf-mandelbrot ns3-ndnSIM)
target_link_libraries(ndn-zipf-mandelbrot ns3-netanim)
target_link_libraries(ndn-zipf-mandelbrot ns3-network)
target_link_libraries(ndn-zipf-mandelbrot ns3-nix-vector-routing)
target_link_libraries(ndn-zipf-mandelbrot ns3-olsr)
target_link_libraries(ndn-zipf-mandelbrot ns3-point-to-point)
target_link_libraries(ndn-zipf-mandelbrot ns3-point-to-point-layout)
target_link_libraries(ndn-zipf-mandelbrot ns3-propagation)
target_link_libraries(ndn-zipf-mandelbrot ns3-sixlowpan)
target_link_libraries(ndn-zipf-mandelbrot ns3-spectrum)
target_link_libraries(ndn-zipf-mandelbrot ns3-stats)
target_link_libraries(ndn-zipf-mandelbrot ns3-tap-bridge)
target_link_libraries(ndn-zipf-mandelbrot ns3-test)
target_link_libraries(ndn-zipf-mandelbrot ns3-topology-read)
target_link_libraries(ndn-zipf-mandelbrot ns3-traffic-control)
target_link_libraries(ndn-zipf-mandelbrot ns3-uan)
target_link_libraries(ndn-zipf-mandelbrot ns3-virtual-net-device)
target_link_libraries(ndn-zipf-mandelbrot ns3-wave)
target_link_libraries(ndn-zipf-mandelbrot ns3-wifi)
target_link_libraries(ndn-zipf-mandelbrot ns3-wimax)

