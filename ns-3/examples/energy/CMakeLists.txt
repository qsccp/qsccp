
set(energy-model-example_SOURCES
    energy-model-example.cc)

set(energy-model-example_INCLUDES)

include_directories(${energy-model-example_INCLUDES})

add_executable(energy-model-example ${energy-model-example_SOURCES})

target_link_libraries(energy-model-example ns3-core)
target_link_libraries(energy-model-example ns3-mobility)
target_link_libraries(energy-model-example ns3-wifi)
target_link_libraries(energy-model-example ns3-energy)
target_link_libraries(energy-model-example ns3-internet)
target_link_libraries(energy-model-example ns3-config-store)

set(energy-model-with-harvesting-example_SOURCES
    energy-model-with-harvesting-example.cc)

set(energy-model-with-harvesting-example_INCLUDES)

include_directories(${energy-model-with-harvesting-example_INCLUDES})

add_executable(energy-model-with-harvesting-example ${energy-model-with-harvesting-example_SOURCES})

target_link_libraries(energy-model-with-harvesting-example ns3-core)
target_link_libraries(energy-model-with-harvesting-example ns3-mobility)
target_link_libraries(energy-model-with-harvesting-example ns3-wifi)
target_link_libraries(energy-model-with-harvesting-example ns3-energy)
target_link_libraries(energy-model-with-harvesting-example ns3-internet)
target_link_libraries(energy-model-with-harvesting-example ns3-config-store)

