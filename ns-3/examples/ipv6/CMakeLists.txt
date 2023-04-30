
set(icmpv6-redirect_SOURCES
    icmpv6-redirect.cc)

set(icmpv6-redirect_INCLUDES)

include_directories(${icmpv6-redirect_INCLUDES})

add_executable(icmpv6-redirect ${icmpv6-redirect_SOURCES})

target_link_libraries(icmpv6-redirect ns3-csma)
target_link_libraries(icmpv6-redirect ns3-internet)
target_link_libraries(icmpv6-redirect ns3-internet-apps)

set(ping6_SOURCES
    ping6.cc)

set(ping6_INCLUDES)

include_directories(${ping6_INCLUDES})

add_executable(ping6 ${ping6_SOURCES})

target_link_libraries(ping6 ns3-csma)
target_link_libraries(ping6 ns3-internet)
target_link_libraries(ping6 ns3-internet-apps)

set(radvd_SOURCES
    radvd.cc)

set(radvd_INCLUDES)

include_directories(${radvd_INCLUDES})

add_executable(radvd ${radvd_SOURCES})

target_link_libraries(radvd ns3-csma)
target_link_libraries(radvd ns3-internet)
target_link_libraries(radvd ns3-internet-apps)

set(radvd-two-prefix_SOURCES
    radvd-two-prefix.cc)

set(radvd-two-prefix_INCLUDES)

include_directories(${radvd-two-prefix_INCLUDES})

add_executable(radvd-two-prefix ${radvd-two-prefix_SOURCES})

target_link_libraries(radvd-two-prefix ns3-csma)
target_link_libraries(radvd-two-prefix ns3-internet)
target_link_libraries(radvd-two-prefix ns3-internet-apps)

set(test-ipv6_SOURCES
    test-ipv6.cc)

set(test-ipv6_INCLUDES)

include_directories(${test-ipv6_INCLUDES})

add_executable(test-ipv6 ${test-ipv6_SOURCES})

target_link_libraries(test-ipv6 ns3-point-to-point)
target_link_libraries(test-ipv6 ns3-internet)

set(fragmentation-ipv6_SOURCES
    fragmentation-ipv6.cc)

set(fragmentation-ipv6_INCLUDES)

include_directories(${fragmentation-ipv6_INCLUDES})

add_executable(fragmentation-ipv6 ${fragmentation-ipv6_SOURCES})

target_link_libraries(fragmentation-ipv6 ns3-csma)
target_link_libraries(fragmentation-ipv6 ns3-internet)
target_link_libraries(fragmentation-ipv6 ns3-internet-apps)

set(fragmentation-ipv6-two-MTU_SOURCES
    fragmentation-ipv6-two-MTU.cc)

set(fragmentation-ipv6-two-MTU_INCLUDES)

include_directories(${fragmentation-ipv6-two-MTU_INCLUDES})

add_executable(fragmentation-ipv6-two-MTU ${fragmentation-ipv6-two-MTU_SOURCES})

target_link_libraries(fragmentation-ipv6-two-MTU ns3-csma)
target_link_libraries(fragmentation-ipv6-two-MTU ns3-internet)
target_link_libraries(fragmentation-ipv6-two-MTU ns3-internet-apps)

set(loose-routing-ipv6_SOURCES
    loose-routing-ipv6.cc)

set(loose-routing-ipv6_INCLUDES)

include_directories(${loose-routing-ipv6_INCLUDES})

add_executable(loose-routing-ipv6 ${loose-routing-ipv6_SOURCES})

target_link_libraries(loose-routing-ipv6 ns3-csma)
target_link_libraries(loose-routing-ipv6 ns3-internet)
target_link_libraries(loose-routing-ipv6 ns3-internet-apps)

set(wsn-ping6_SOURCES
    wsn-ping6.cc)

set(wsn-ping6_INCLUDES)

include_directories(${wsn-ping6_INCLUDES})

add_executable(wsn-ping6 ${wsn-ping6_SOURCES})

target_link_libraries(wsn-ping6 ns3-lr-wpan)
target_link_libraries(wsn-ping6 ns3-internet)
target_link_libraries(wsn-ping6 ns3-sixlowpan)
target_link_libraries(wsn-ping6 ns3-mobility)
target_link_libraries(wsn-ping6 ns3-internet-apps)

