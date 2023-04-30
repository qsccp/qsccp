
set(example-sixlowpan_SOURCES
    example-sixlowpan.cc)

set(example-sixlowpan_INCLUDES)

include_directories(${example-sixlowpan_INCLUDES})

add_executable(example-sixlowpan ${example-sixlowpan_SOURCES})

target_link_libraries(example-sixlowpan ns3-network)
target_link_libraries(example-sixlowpan ns3-sixlowpan)
target_link_libraries(example-sixlowpan ns3-internet)
target_link_libraries(example-sixlowpan ns3-csma)
target_link_libraries(example-sixlowpan ns3-internet-apps)

set(example-ping-lr-wpan_SOURCES
    example-ping-lr-wpan.cc)

set(example-ping-lr-wpan_INCLUDES)

include_directories(${example-ping-lr-wpan_INCLUDES})

add_executable(example-ping-lr-wpan ${example-ping-lr-wpan_SOURCES})

target_link_libraries(example-ping-lr-wpan ns3-network)
target_link_libraries(example-ping-lr-wpan ns3-sixlowpan)
target_link_libraries(example-ping-lr-wpan ns3-internet)
target_link_libraries(example-ping-lr-wpan ns3-lr-wpan)
target_link_libraries(example-ping-lr-wpan ns3-internet-apps)

