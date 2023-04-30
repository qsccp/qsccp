
set(simple-point-to-point-olsr_SOURCES
    simple-point-to-point-olsr.cc)

set(simple-point-to-point-olsr_INCLUDES)

include_directories(${simple-point-to-point-olsr_INCLUDES})

add_executable(simple-point-to-point-olsr ${simple-point-to-point-olsr_SOURCES})

target_link_libraries(simple-point-to-point-olsr ns3-point-to-point)
target_link_libraries(simple-point-to-point-olsr ns3-internet)
target_link_libraries(simple-point-to-point-olsr ns3-olsr)
target_link_libraries(simple-point-to-point-olsr ns3-applications)
target_link_libraries(simple-point-to-point-olsr ns3-wifi)

set(olsr-hna_SOURCES
    olsr-hna.cc)

set(olsr-hna_INCLUDES)

include_directories(${olsr-hna_INCLUDES})

add_executable(olsr-hna ${olsr-hna_SOURCES})

target_link_libraries(olsr-hna ns3-core)
target_link_libraries(olsr-hna ns3-mobility)
target_link_libraries(olsr-hna ns3-wifi)
target_link_libraries(olsr-hna ns3-csma)
target_link_libraries(olsr-hna ns3-olsr)

