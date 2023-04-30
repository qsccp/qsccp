
set(main-propagation-loss_SOURCES
    main-propagation-loss.cc)

set(main-propagation-loss_INCLUDES)

include_directories(${main-propagation-loss_INCLUDES})

add_executable(main-propagation-loss ${main-propagation-loss_SOURCES})

target_link_libraries(main-propagation-loss ns3-core)
target_link_libraries(main-propagation-loss ns3-mobility)
target_link_libraries(main-propagation-loss ns3-config-store)
target_link_libraries(main-propagation-loss ns3-stats)
target_link_libraries(main-propagation-loss ns3-propagation)

set(jakes-propagation-model-example_SOURCES
    jakes-propagation-model-example.cc)

set(jakes-propagation-model-example_INCLUDES)

include_directories(${jakes-propagation-model-example_INCLUDES})

add_executable(jakes-propagation-model-example ${jakes-propagation-model-example_SOURCES})

target_link_libraries(jakes-propagation-model-example ns3-core)
target_link_libraries(jakes-propagation-model-example ns3-propagation)

