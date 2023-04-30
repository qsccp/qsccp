
set(ns3-csma-layout_SOURCES
    model/csma-star-helper.cc)

set(ns3-csma-layout_INCLUDES)

include_directories(${ns3-csma-layout_INCLUDES})

add_library(ns3-csma-layout SHARED ${ns3-csma-layout_SOURCES})

target_link_libraries(ns3-csma-layout ns3-csma)
target_link_libraries(ns3-csma-layout ns3-network)
target_link_libraries(ns3-csma-layout ns3-internet)

