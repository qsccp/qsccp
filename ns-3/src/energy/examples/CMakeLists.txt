
set(li-ion-energy-source_SOURCES
    li-ion-energy-source.cc)

set(li-ion-energy-source_INCLUDES)

include_directories(${li-ion-energy-source_INCLUDES})

add_executable(li-ion-energy-source ${li-ion-energy-source_SOURCES})

target_link_libraries(li-ion-energy-source ns3-core)
target_link_libraries(li-ion-energy-source ns3-energy)

set(rv-battery-model-test_SOURCES
    rv-battery-model-test.cc)

set(rv-battery-model-test_INCLUDES)

include_directories(${rv-battery-model-test_INCLUDES})

add_executable(rv-battery-model-test ${rv-battery-model-test_SOURCES})

target_link_libraries(rv-battery-model-test ns3-core)
target_link_libraries(rv-battery-model-test ns3-energy)
target_link_libraries(rv-battery-model-test ns3-wifi)

set(basic-energy-model-test_SOURCES
    basic-energy-model-test.cc)

set(basic-energy-model-test_INCLUDES)

include_directories(${basic-energy-model-test_INCLUDES})

add_executable(basic-energy-model-test ${basic-energy-model-test_SOURCES})

target_link_libraries(basic-energy-model-test ns3-core)
target_link_libraries(basic-energy-model-test ns3-energy)
target_link_libraries(basic-energy-model-test ns3-wifi)

