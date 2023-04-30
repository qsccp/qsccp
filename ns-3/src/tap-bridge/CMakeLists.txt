
set(ns3-tap-bridge_SOURCES
    model/tap-bridge.cc
    model/tap-encode-decode.cc
    helper/tap-bridge-helper.cc)

set(ns3-tap-bridge_INCLUDES)

include_directories(${ns3-tap-bridge_INCLUDES})

add_library(ns3-tap-bridge SHARED ${ns3-tap-bridge_SOURCES})

target_link_libraries(ns3-tap-bridge ns3-internet)
target_link_libraries(ns3-tap-bridge ns3-network)
target_link_libraries(ns3-tap-bridge ns3-core)

set(tap-creator_SOURCES
    model/tap-creator.cc
    model/tap-encode-decode.cc)

add_executable(tap-creator ${tap-creator_SOURCES})
