
set(dumbbell-animation_SOURCES
    dumbbell-animation.cc)

set(dumbbell-animation_INCLUDES)

include_directories(${dumbbell-animation_INCLUDES})

add_executable(dumbbell-animation ${dumbbell-animation_SOURCES})

target_link_libraries(dumbbell-animation ns3-netanim)
target_link_libraries(dumbbell-animation ns3-applications)
target_link_libraries(dumbbell-animation ns3-point-to-point-layout)

set(grid-animation_SOURCES
    grid-animation.cc)

set(grid-animation_INCLUDES)

include_directories(${grid-animation_INCLUDES})

add_executable(grid-animation ${grid-animation_SOURCES})

target_link_libraries(grid-animation ns3-netanim)
target_link_libraries(grid-animation ns3-applications)
target_link_libraries(grid-animation ns3-point-to-point-layout)

set(star-animation_SOURCES
    star-animation.cc)

set(star-animation_INCLUDES)

include_directories(${star-animation_INCLUDES})

add_executable(star-animation ${star-animation_SOURCES})

target_link_libraries(star-animation ns3-netanim)
target_link_libraries(star-animation ns3-applications)
target_link_libraries(star-animation ns3-point-to-point-layout)

set(wireless-animation_SOURCES
    wireless-animation.cc)

set(wireless-animation_INCLUDES)

include_directories(${wireless-animation_INCLUDES})

add_executable(wireless-animation ${wireless-animation_SOURCES})

target_link_libraries(wireless-animation ns3-netanim)
target_link_libraries(wireless-animation ns3-applications)
target_link_libraries(wireless-animation ns3-point-to-point)
target_link_libraries(wireless-animation ns3-csma)
target_link_libraries(wireless-animation ns3-wifi)
target_link_libraries(wireless-animation ns3-mobility)
target_link_libraries(wireless-animation ns3-network)

set(uan-animation_SOURCES
    uan-animation.cc)

set(uan-animation_INCLUDES)

include_directories(${uan-animation_INCLUDES})

add_executable(uan-animation ${uan-animation_SOURCES})

target_link_libraries(uan-animation ns3-netanim)
target_link_libraries(uan-animation ns3-internet)
target_link_libraries(uan-animation ns3-mobility)
target_link_libraries(uan-animation ns3-applications)
target_link_libraries(uan-animation ns3-uan)

set(colors-link-description_SOURCES
    colors-link-description.cc)

set(colors-link-description_INCLUDES)

include_directories(${colors-link-description_INCLUDES})

add_executable(colors-link-description ${colors-link-description_SOURCES})

target_link_libraries(colors-link-description ns3-netanim)
target_link_libraries(colors-link-description ns3-applications)
target_link_libraries(colors-link-description ns3-point-to-point-layout)

set(resources-counters_SOURCES
    resources-counters.cc)

set(resources-counters_INCLUDES)

include_directories(${resources-counters_INCLUDES})

add_executable(resources-counters ${resources-counters_SOURCES})

target_link_libraries(resources-counters ns3-netanim)
target_link_libraries(resources-counters ns3-applications)
target_link_libraries(resources-counters ns3-point-to-point-layout)

