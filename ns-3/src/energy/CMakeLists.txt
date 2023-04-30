
set(ns3-energy_SOURCES
    model/energy-source.cc
    model/basic-energy-source.cc
    model/li-ion-energy-source.cc
    model/rv-battery-model.cc
    model/device-energy-model.cc
    model/device-energy-model-container.cc
    model/simple-device-energy-model.cc
    model/energy-harvester.cc
    model/basic-energy-harvester.cc
    helper/energy-source-container.cc
    helper/energy-model-helper.cc
    helper/basic-energy-source-helper.cc
    helper/li-ion-energy-source-helper.cc
    helper/rv-battery-model-helper.cc
    helper/energy-harvester-container.cc
    helper/energy-harvester-helper.cc
    helper/basic-energy-harvester-helper.cc)

set(ns3-energy_INCLUDES)

include_directories(${ns3-energy_INCLUDES})

add_library(ns3-energy SHARED ${ns3-energy_SOURCES})

target_link_libraries(ns3-energy ns3-network)

