
set(three-gpp-http-example_SOURCES
    three-gpp-http-example.cc)

set(three-gpp-http-example_INCLUDES)

include_directories(${three-gpp-http-example_INCLUDES})

add_executable(three-gpp-http-example ${three-gpp-http-example_SOURCES})

target_link_libraries(three-gpp-http-example ns3-applications)
target_link_libraries(three-gpp-http-example ns3-point-to-point)
target_link_libraries(three-gpp-http-example ns3-internet)
target_link_libraries(three-gpp-http-example ns3-network)

