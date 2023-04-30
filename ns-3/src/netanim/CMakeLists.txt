
set(ns3-netanim_SOURCES
    model/animation-interface.cc)

set(ns3-netanim_INCLUDES
    .
    #
    .)

include_directories(${ns3-netanim_INCLUDES})

add_library(ns3-netanim SHARED ${ns3-netanim_SOURCES})

target_link_libraries(ns3-netanim ns3-internet)
target_link_libraries(ns3-netanim ns3-mobility)
target_link_libraries(ns3-netanim ns3-wimax)
target_link_libraries(ns3-netanim ns3-wifi)
target_link_libraries(ns3-netanim ns3-csma)
target_link_libraries(ns3-netanim ns3-lte)
target_link_libraries(ns3-netanim ns3-uan)
target_link_libraries(ns3-netanim ns3-lr-wpan)
target_link_libraries(ns3-netanim ns3-energy)
target_link_libraries(ns3-netanim ns3-wave)
target_link_libraries(ns3-netanim ns3-point-to-point-layout)

