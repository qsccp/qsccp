
set(uan-cw-example_SOURCES
    uan-cw-example.cc)

set(uan-cw-example_INCLUDES)

include_directories(${uan-cw-example_INCLUDES})

add_executable(uan-cw-example ${uan-cw-example_SOURCES})

target_link_libraries(uan-cw-example ns3-internet)
target_link_libraries(uan-cw-example ns3-mobility)
target_link_libraries(uan-cw-example ns3-stats)
target_link_libraries(uan-cw-example ns3-applications)
target_link_libraries(uan-cw-example ns3-uan)

set(uan-rc-example_SOURCES
    uan-rc-example.cc)

set(uan-rc-example_INCLUDES)

include_directories(${uan-rc-example_INCLUDES})

add_executable(uan-rc-example ${uan-rc-example_SOURCES})

target_link_libraries(uan-rc-example ns3-internet)
target_link_libraries(uan-rc-example ns3-mobility)
target_link_libraries(uan-rc-example ns3-stats)
target_link_libraries(uan-rc-example ns3-applications)
target_link_libraries(uan-rc-example ns3-uan)

set(uan-raw-example_SOURCES
    uan-raw-example.cc)

set(uan-raw-example_INCLUDES)

include_directories(${uan-raw-example_INCLUDES})

add_executable(uan-raw-example ${uan-raw-example_SOURCES})

target_link_libraries(uan-raw-example ns3-internet)
target_link_libraries(uan-raw-example ns3-mobility)
target_link_libraries(uan-raw-example ns3-stats)
target_link_libraries(uan-raw-example ns3-uan)

set(uan-ipv4-example_SOURCES
    uan-ipv4-example.cc)

set(uan-ipv4-example_INCLUDES)

include_directories(${uan-ipv4-example_INCLUDES})

add_executable(uan-ipv4-example ${uan-ipv4-example_SOURCES})

target_link_libraries(uan-ipv4-example ns3-internet)
target_link_libraries(uan-ipv4-example ns3-mobility)
target_link_libraries(uan-ipv4-example ns3-stats)
target_link_libraries(uan-ipv4-example ns3-uan)

set(uan-ipv6-example_SOURCES
    uan-ipv6-example.cc)

set(uan-ipv6-example_INCLUDES)

include_directories(${uan-ipv6-example_INCLUDES})

add_executable(uan-ipv6-example ${uan-ipv6-example_SOURCES})

target_link_libraries(uan-ipv6-example ns3-internet)
target_link_libraries(uan-ipv6-example ns3-mobility)
target_link_libraries(uan-ipv6-example ns3-stats)
target_link_libraries(uan-ipv6-example ns3-uan)

set(uan-6lowpan-example_SOURCES
    uan-6lowpan-example.cc)

set(uan-6lowpan-example_INCLUDES)

include_directories(${uan-6lowpan-example_INCLUDES})

add_executable(uan-6lowpan-example ${uan-6lowpan-example_SOURCES})

target_link_libraries(uan-6lowpan-example ns3-internet)
target_link_libraries(uan-6lowpan-example ns3-mobility)
target_link_libraries(uan-6lowpan-example ns3-stats)
target_link_libraries(uan-6lowpan-example ns3-uan)
target_link_libraries(uan-6lowpan-example ns3-sixlowpan)

