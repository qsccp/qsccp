
set(wifi-example-sim_SOURCES
    wifi-example-sim.cc
    wifi-example-apps.cc)

set(wifi-example-sim_INCLUDES)

include_directories(${wifi-example-sim_INCLUDES})

add_executable(wifi-example-sim ${wifi-example-sim_SOURCES})

target_link_libraries(wifi-example-sim ns3-stats)
target_link_libraries(wifi-example-sim ns3-internet)
target_link_libraries(wifi-example-sim ns3-mobility)
target_link_libraries(wifi-example-sim ns3-wifi)

