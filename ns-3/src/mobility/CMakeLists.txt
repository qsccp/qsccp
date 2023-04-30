
set(ns3-mobility_SOURCES
    model/box.cc
    model/constant-acceleration-mobility-model.cc
    model/constant-position-mobility-model.cc
    model/constant-velocity-helper.cc
    model/constant-velocity-mobility-model.cc
    model/gauss-markov-mobility-model.cc
    model/geographic-positions.cc
    model/hierarchical-mobility-model.cc
    model/mobility-model.cc
    model/position-allocator.cc
    model/random-direction-2d-mobility-model.cc
    model/random-walk-2d-mobility-model.cc
    model/random-waypoint-mobility-model.cc
    model/rectangle.cc
    model/steady-state-random-waypoint-mobility-model.cc
    model/waypoint.cc
    model/waypoint-mobility-model.cc
    helper/mobility-helper.cc
    helper/ns2-mobility-helper.cc)

set(ns3-mobility_INCLUDES)

include_directories(${ns3-mobility_INCLUDES})

add_library(ns3-mobility SHARED ${ns3-mobility_SOURCES})

target_link_libraries(ns3-mobility ns3-network)

