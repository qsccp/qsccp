
set(ns3-olsr_SOURCES
    model/olsr-header.cc
    model/olsr-state.cc
    model/olsr-routing-protocol.cc
    helper/olsr-helper.cc)

set(ns3-olsr_INCLUDES
    .
    #
    .)

include_directories(${ns3-olsr_INCLUDES})

add_library(ns3-olsr SHARED ${ns3-olsr_SOURCES})

target_link_libraries(ns3-olsr ns3-internet)

