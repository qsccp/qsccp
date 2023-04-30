
set(csma-star_SOURCES
    csma-star.cc)

set(csma-star_INCLUDES)

include_directories(${csma-star_INCLUDES})

add_executable(csma-star ${csma-star_SOURCES})

target_link_libraries(csma-star ns3-csma)
target_link_libraries(csma-star ns3-csma-layout)
target_link_libraries(csma-star ns3-internet)
target_link_libraries(csma-star ns3-applications)

