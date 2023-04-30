
set(ns3-dsdv_SOURCES
    model/dsdv-rtable.cc
    model/dsdv-packet-queue.cc
    model/dsdv-packet.cc
    model/dsdv-routing-protocol.cc
    helper/dsdv-helper.cc)

set(ns3-dsdv_INCLUDES
    .
    #
    .)

include_directories(${ns3-dsdv_INCLUDES})

add_library(ns3-dsdv SHARED ${ns3-dsdv_SOURCES})

target_link_libraries(ns3-dsdv ns3-internet)

