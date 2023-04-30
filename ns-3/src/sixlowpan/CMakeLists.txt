
set(ns3-sixlowpan_SOURCES
    model/sixlowpan-net-device.cc
    model/sixlowpan-header.cc
    helper/sixlowpan-helper.cc)

set(ns3-sixlowpan_INCLUDES
    .
    #
    .)

include_directories(${ns3-sixlowpan_INCLUDES})

add_library(ns3-sixlowpan SHARED ${ns3-sixlowpan_SOURCES})

target_link_libraries(ns3-sixlowpan ns3-internet)
target_link_libraries(ns3-sixlowpan ns3-network)
target_link_libraries(ns3-sixlowpan ns3-core)

