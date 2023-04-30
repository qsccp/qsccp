
set(dsr_SOURCES
    dsr.cc)

set(dsr_INCLUDES)

include_directories(${dsr_INCLUDES})

add_executable(dsr ${dsr_SOURCES})

target_link_libraries(dsr ns3-core)
target_link_libraries(dsr ns3-network)
target_link_libraries(dsr ns3-internet)
target_link_libraries(dsr ns3-applications)
target_link_libraries(dsr ns3-mobility)
target_link_libraries(dsr ns3-config-store)
target_link_libraries(dsr ns3-wifi)
target_link_libraries(dsr ns3-dsr)

