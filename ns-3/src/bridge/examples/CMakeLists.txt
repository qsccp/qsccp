
set(csma-bridge_SOURCES
    csma-bridge.cc)

set(csma-bridge_INCLUDES)

include_directories(${csma-bridge_INCLUDES})

add_executable(csma-bridge ${csma-bridge_SOURCES})

target_link_libraries(csma-bridge ns3-bridge)
target_link_libraries(csma-bridge ns3-csma)
target_link_libraries(csma-bridge ns3-internet)
target_link_libraries(csma-bridge ns3-applications)

set(csma-bridge-one-hop_SOURCES
    csma-bridge-one-hop.cc)

set(csma-bridge-one-hop_INCLUDES)

include_directories(${csma-bridge-one-hop_INCLUDES})

add_executable(csma-bridge-one-hop ${csma-bridge-one-hop_SOURCES})

target_link_libraries(csma-bridge-one-hop ns3-bridge)
target_link_libraries(csma-bridge-one-hop ns3-csma)
target_link_libraries(csma-bridge-one-hop ns3-internet)
target_link_libraries(csma-bridge-one-hop ns3-applications)

