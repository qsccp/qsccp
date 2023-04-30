
set(ns3-bridge_SOURCES
    model/bridge-net-device.cc
    model/bridge-channel.cc
    helper/bridge-helper.cc)

set(ns3-bridge_INCLUDES)

include_directories(${ns3-bridge_INCLUDES})

add_library(ns3-bridge SHARED ${ns3-bridge_SOURCES})

target_link_libraries(ns3-bridge ns3-network)

