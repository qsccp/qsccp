
set(ns3-point-to-point-layout_SOURCES
    model/point-to-point-dumbbell.cc
    model/point-to-point-grid.cc
    model/point-to-point-star.cc)

set(ns3-point-to-point-layout_INCLUDES
    .
    #
    .)

include_directories(${ns3-point-to-point-layout_INCLUDES})

add_library(ns3-point-to-point-layout SHARED ${ns3-point-to-point-layout_SOURCES})

target_link_libraries(ns3-point-to-point-layout ns3-internet)
target_link_libraries(ns3-point-to-point-layout ns3-point-to-point)
target_link_libraries(ns3-point-to-point-layout ns3-mobility)

