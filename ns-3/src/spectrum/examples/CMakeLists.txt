
set(adhoc-aloha-ideal-phy_SOURCES
    adhoc-aloha-ideal-phy.cc)

set(adhoc-aloha-ideal-phy_INCLUDES)

include_directories(${adhoc-aloha-ideal-phy_INCLUDES})

add_executable(adhoc-aloha-ideal-phy ${adhoc-aloha-ideal-phy_SOURCES})

target_link_libraries(adhoc-aloha-ideal-phy ns3-spectrum)
target_link_libraries(adhoc-aloha-ideal-phy ns3-mobility)
target_link_libraries(adhoc-aloha-ideal-phy ns3-internet)
target_link_libraries(adhoc-aloha-ideal-phy ns3-applications)

set(adhoc-aloha-ideal-phy-matrix-propagation-loss-model_SOURCES
    adhoc-aloha-ideal-phy-matrix-propagation-loss-model.cc)

set(adhoc-aloha-ideal-phy-matrix-propagation-loss-model_INCLUDES)

include_directories(${adhoc-aloha-ideal-phy-matrix-propagation-loss-model_INCLUDES})

add_executable(adhoc-aloha-ideal-phy-matrix-propagation-loss-model ${adhoc-aloha-ideal-phy-matrix-propagation-loss-model_SOURCES})

target_link_libraries(adhoc-aloha-ideal-phy-matrix-propagation-loss-model ns3-spectrum)
target_link_libraries(adhoc-aloha-ideal-phy-matrix-propagation-loss-model ns3-mobility)
target_link_libraries(adhoc-aloha-ideal-phy-matrix-propagation-loss-model ns3-internet)
target_link_libraries(adhoc-aloha-ideal-phy-matrix-propagation-loss-model ns3-applications)

set(adhoc-aloha-ideal-phy-with-microwave-oven_SOURCES
    adhoc-aloha-ideal-phy-with-microwave-oven.cc)

set(adhoc-aloha-ideal-phy-with-microwave-oven_INCLUDES)

include_directories(${adhoc-aloha-ideal-phy-with-microwave-oven_INCLUDES})

add_executable(adhoc-aloha-ideal-phy-with-microwave-oven ${adhoc-aloha-ideal-phy-with-microwave-oven_SOURCES})

target_link_libraries(adhoc-aloha-ideal-phy-with-microwave-oven ns3-spectrum)
target_link_libraries(adhoc-aloha-ideal-phy-with-microwave-oven ns3-mobility)
target_link_libraries(adhoc-aloha-ideal-phy-with-microwave-oven ns3-internet)
target_link_libraries(adhoc-aloha-ideal-phy-with-microwave-oven ns3-applications)

set(tv-trans-example_SOURCES
    tv-trans-example.cc)

set(tv-trans-example_INCLUDES)

include_directories(${tv-trans-example_INCLUDES})

add_executable(tv-trans-example ${tv-trans-example_SOURCES})

target_link_libraries(tv-trans-example ns3-spectrum)
target_link_libraries(tv-trans-example ns3-mobility)
target_link_libraries(tv-trans-example ns3-core)

set(tv-trans-regional-example_SOURCES
    tv-trans-regional-example.cc)

set(tv-trans-regional-example_INCLUDES)

include_directories(${tv-trans-regional-example_INCLUDES})

add_executable(tv-trans-regional-example ${tv-trans-regional-example_SOURCES})

target_link_libraries(tv-trans-regional-example ns3-spectrum)
target_link_libraries(tv-trans-regional-example ns3-mobility)
target_link_libraries(tv-trans-regional-example ns3-core)

