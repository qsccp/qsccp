
set(ns3-propagation_SOURCES
    model/propagation-delay-model.cc
    model/propagation-loss-model.cc
    model/jakes-propagation-loss-model.cc
    model/jakes-process.cc
    model/cost231-propagation-loss-model.cc
    model/okumura-hata-propagation-loss-model.cc
    model/itu-r-1411-los-propagation-loss-model.cc
    model/itu-r-1411-nlos-over-rooftop-propagation-loss-model.cc
    model/kun-2600-mhz-propagation-loss-model.cc)

set(ns3-propagation_INCLUDES
    .
    #
    .)

include_directories(${ns3-propagation_INCLUDES})

add_library(ns3-propagation SHARED ${ns3-propagation_SOURCES})

target_link_libraries(ns3-propagation ns3-network)
target_link_libraries(ns3-propagation ns3-mobility)

