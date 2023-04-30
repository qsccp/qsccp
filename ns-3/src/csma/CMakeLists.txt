
set(ns3-csma_SOURCES
    model/backoff.cc
    model/csma-net-device.cc
    model/csma-channel.cc
    helper/csma-helper.cc)

set(ns3-csma_INCLUDES)

include_directories(${ns3-csma_INCLUDES})

add_library(ns3-csma SHARED ${ns3-csma_SOURCES})

target_link_libraries(ns3-csma ns3-network)

