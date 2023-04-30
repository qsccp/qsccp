
set(ns3-buildings_SOURCES
    model/building.cc
    model/building-list.cc
    model/mobility-building-info.cc
    model/itu-r-1238-propagation-loss-model.cc
    model/buildings-propagation-loss-model.cc
    model/hybrid-buildings-propagation-loss-model.cc
    model/oh-buildings-propagation-loss-model.cc
    helper/building-container.cc
    helper/building-position-allocator.cc
    helper/building-allocator.cc
    helper/buildings-helper.cc)

set(ns3-buildings_INCLUDES)

include_directories(${ns3-buildings_INCLUDES})

add_library(ns3-buildings SHARED ${ns3-buildings_SOURCES})

target_link_libraries(ns3-buildings ns3-mobility)
target_link_libraries(ns3-buildings ns3-propagation)
target_link_libraries(ns3-buildings ns3-config-store)

