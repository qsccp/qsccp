
set(wifi-phy-test_SOURCES
    wifi-phy-test.cc)

set(wifi-phy-test_INCLUDES)

include_directories(${wifi-phy-test_INCLUDES})

add_executable(wifi-phy-test ${wifi-phy-test_SOURCES})

target_link_libraries(wifi-phy-test ns3-wifi)

set(test-interference-helper_SOURCES
    test-interference-helper.cc)

set(test-interference-helper_INCLUDES)

include_directories(${test-interference-helper_INCLUDES})

add_executable(test-interference-helper ${test-interference-helper_SOURCES})

target_link_libraries(test-interference-helper ns3-wifi)

set(wifi-manager-example_SOURCES
    wifi-manager-example.cc)

set(wifi-manager-example_INCLUDES)

include_directories(${wifi-manager-example_INCLUDES})

add_executable(wifi-manager-example ${wifi-manager-example_SOURCES})

target_link_libraries(wifi-manager-example ns3-wifi)

set(wifi-trans-example_SOURCES
    wifi-trans-example.cc)

set(wifi-trans-example_INCLUDES)

include_directories(${wifi-trans-example_INCLUDES})

add_executable(wifi-trans-example ${wifi-trans-example_SOURCES})

target_link_libraries(wifi-trans-example ns3-wifi)

set(wifi-phy-configuration_SOURCES
    wifi-phy-configuration.cc)

set(wifi-phy-configuration_INCLUDES)

include_directories(${wifi-phy-configuration_INCLUDES})

add_executable(wifi-phy-configuration ${wifi-phy-configuration_SOURCES})

target_link_libraries(wifi-phy-configuration ns3-wifi)
target_link_libraries(wifi-phy-configuration ns3-config-store)

