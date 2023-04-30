
set(dhcp-example_SOURCES
    dhcp-example.cc)

set(dhcp-example_INCLUDES)

include_directories(${dhcp-example_INCLUDES})

add_executable(dhcp-example ${dhcp-example_SOURCES})

target_link_libraries(dhcp-example ns3-internet)
target_link_libraries(dhcp-example ns3-internet-apps)
target_link_libraries(dhcp-example ns3-csma)
target_link_libraries(dhcp-example ns3-point-to-point)
target_link_libraries(dhcp-example ns3-applications)

