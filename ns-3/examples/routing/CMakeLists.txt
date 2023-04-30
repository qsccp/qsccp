
set(dynamic-global-routing_SOURCES
    dynamic-global-routing.cc)

set(dynamic-global-routing_INCLUDES)

include_directories(${dynamic-global-routing_INCLUDES})

add_executable(dynamic-global-routing ${dynamic-global-routing_SOURCES})

target_link_libraries(dynamic-global-routing ns3-point-to-point)
target_link_libraries(dynamic-global-routing ns3-csma)
target_link_libraries(dynamic-global-routing ns3-internet)
target_link_libraries(dynamic-global-routing ns3-applications)

set(static-routing-slash32_SOURCES
    static-routing-slash32.cc)

set(static-routing-slash32_INCLUDES)

include_directories(${static-routing-slash32_INCLUDES})

add_executable(static-routing-slash32 ${static-routing-slash32_SOURCES})

target_link_libraries(static-routing-slash32 ns3-point-to-point)
target_link_libraries(static-routing-slash32 ns3-csma)
target_link_libraries(static-routing-slash32 ns3-internet)
target_link_libraries(static-routing-slash32 ns3-applications)

set(global-routing-slash32_SOURCES
    global-routing-slash32.cc)

set(global-routing-slash32_INCLUDES)

include_directories(${global-routing-slash32_INCLUDES})

add_executable(global-routing-slash32 ${global-routing-slash32_SOURCES})

target_link_libraries(global-routing-slash32 ns3-point-to-point)
target_link_libraries(global-routing-slash32 ns3-csma)
target_link_libraries(global-routing-slash32 ns3-internet)
target_link_libraries(global-routing-slash32 ns3-applications)

set(global-injection-slash32_SOURCES
    global-injection-slash32.cc)

set(global-injection-slash32_INCLUDES)

include_directories(${global-injection-slash32_INCLUDES})

add_executable(global-injection-slash32 ${global-injection-slash32_SOURCES})

target_link_libraries(global-injection-slash32 ns3-point-to-point)
target_link_libraries(global-injection-slash32 ns3-csma)
target_link_libraries(global-injection-slash32 ns3-internet)
target_link_libraries(global-injection-slash32 ns3-applications)

set(simple-global-routing_SOURCES
    simple-global-routing.cc)

set(simple-global-routing_INCLUDES)

include_directories(${simple-global-routing_INCLUDES})

add_executable(simple-global-routing ${simple-global-routing_SOURCES})

target_link_libraries(simple-global-routing ns3-point-to-point)
target_link_libraries(simple-global-routing ns3-internet)
target_link_libraries(simple-global-routing ns3-applications)
target_link_libraries(simple-global-routing ns3-flow-monitor)

set(simple-alternate-routing_SOURCES
    simple-alternate-routing.cc)

set(simple-alternate-routing_INCLUDES)

include_directories(${simple-alternate-routing_INCLUDES})

add_executable(simple-alternate-routing ${simple-alternate-routing_SOURCES})

target_link_libraries(simple-alternate-routing ns3-point-to-point)
target_link_libraries(simple-alternate-routing ns3-internet)
target_link_libraries(simple-alternate-routing ns3-applications)

set(mixed-global-routing_SOURCES
    mixed-global-routing.cc)

set(mixed-global-routing_INCLUDES)

include_directories(${mixed-global-routing_INCLUDES})

add_executable(mixed-global-routing ${mixed-global-routing_SOURCES})

target_link_libraries(mixed-global-routing ns3-point-to-point)
target_link_libraries(mixed-global-routing ns3-internet)
target_link_libraries(mixed-global-routing ns3-csma)
target_link_libraries(mixed-global-routing ns3-applications)

set(simple-routing-ping6_SOURCES
    simple-routing-ping6.cc)

set(simple-routing-ping6_INCLUDES)

include_directories(${simple-routing-ping6_INCLUDES})

add_executable(simple-routing-ping6 ${simple-routing-ping6_SOURCES})

target_link_libraries(simple-routing-ping6 ns3-csma)
target_link_libraries(simple-routing-ping6 ns3-internet)
target_link_libraries(simple-routing-ping6 ns3-internet-apps)

set(manet-routing-compare_SOURCES
    manet-routing-compare.cc)

set(manet-routing-compare_INCLUDES)

include_directories(${manet-routing-compare_INCLUDES})

add_executable(manet-routing-compare ${manet-routing-compare_SOURCES})

target_link_libraries(manet-routing-compare ns3-wifi)
target_link_libraries(manet-routing-compare ns3-dsr)
target_link_libraries(manet-routing-compare ns3-dsdv)
target_link_libraries(manet-routing-compare ns3-aodv)
target_link_libraries(manet-routing-compare ns3-olsr)
target_link_libraries(manet-routing-compare ns3-internet)
target_link_libraries(manet-routing-compare ns3-applications)

set(ripng-simple-network_SOURCES
    ripng-simple-network.cc)

set(ripng-simple-network_INCLUDES)

include_directories(${ripng-simple-network_INCLUDES})

add_executable(ripng-simple-network ${ripng-simple-network_SOURCES})

target_link_libraries(ripng-simple-network ns3-csma)
target_link_libraries(ripng-simple-network ns3-internet)
target_link_libraries(ripng-simple-network ns3-internet-apps)

set(rip-simple-network_SOURCES
    rip-simple-network.cc)

set(rip-simple-network_INCLUDES)

include_directories(${rip-simple-network_INCLUDES})

add_executable(rip-simple-network ${rip-simple-network_SOURCES})

target_link_libraries(rip-simple-network ns3-csma)
target_link_libraries(rip-simple-network ns3-internet)
target_link_libraries(rip-simple-network ns3-internet-apps)

set(global-routing-multi-switch-plus-router_SOURCES
    global-routing-multi-switch-plus-router.cc)

set(global-routing-multi-switch-plus-router_INCLUDES)

include_directories(${global-routing-multi-switch-plus-router_INCLUDES})

add_executable(global-routing-multi-switch-plus-router ${global-routing-multi-switch-plus-router_SOURCES})

target_link_libraries(global-routing-multi-switch-plus-router ns3-core)
target_link_libraries(global-routing-multi-switch-plus-router ns3-network)
target_link_libraries(global-routing-multi-switch-plus-router ns3-applications)
target_link_libraries(global-routing-multi-switch-plus-router ns3-internet)
target_link_libraries(global-routing-multi-switch-plus-router ns3-bridge)
target_link_libraries(global-routing-multi-switch-plus-router ns3-csma)
target_link_libraries(global-routing-multi-switch-plus-router ns3-point-to-point)
target_link_libraries(global-routing-multi-switch-plus-router ns3-csma)
target_link_libraries(global-routing-multi-switch-plus-router ns3-internet)

