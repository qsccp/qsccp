
set(ns3-topology-read_SOURCES
    model/topology-reader.cc
    model/inet-topology-reader.cc
    model/orbis-topology-reader.cc
    model/rocketfuel-topology-reader.cc
    helper/topology-reader-helper.cc)

set(ns3-topology-read_INCLUDES)

include_directories(${ns3-topology-read_INCLUDES})

add_library(ns3-topology-read SHARED ${ns3-topology-read_SOURCES})

target_link_libraries(ns3-topology-read ns3-network)

