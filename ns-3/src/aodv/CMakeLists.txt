
set(ns3-aodv_SOURCES
    model/aodv-id-cache.cc
    model/aodv-dpd.cc
    model/aodv-rtable.cc
    model/aodv-rqueue.cc
    model/aodv-packet.cc
    model/aodv-neighbor.cc
    model/aodv-routing-protocol.cc
    helper/aodv-helper.cc)

set(ns3-aodv_INCLUDES
    .
    #
    .)

include_directories(${ns3-aodv_INCLUDES})

add_library(ns3-aodv SHARED ${ns3-aodv_SOURCES})

target_link_libraries(ns3-aodv ns3-internet)
target_link_libraries(ns3-aodv ns3-wifi)

