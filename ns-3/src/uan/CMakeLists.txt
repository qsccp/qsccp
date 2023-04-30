
set(ns3-uan_SOURCES
    model/uan-channel.cc
    model/uan-phy-gen.cc
    model/uan-mac.cc
    model/uan-transducer.cc
    model/uan-transducer-hd.cc
    model/uan-net-device.cc
    model/uan-tx-mode.cc
    model/uan-prop-model.cc
    model/uan-prop-model-ideal.cc
    model/uan-mac-aloha.cc
    model/uan-header-common.cc
    model/uan-noise-model-default.cc
    model/uan-mac-cw.cc
    model/uan-prop-model-thorp.cc
    model/uan-phy-dual.cc
    model/uan-header-rc.cc
    model/uan-mac-rc.cc
    model/uan-mac-rc-gw.cc
    model/uan-phy.cc
    model/uan-noise-model.cc
    model/acoustic-modem-energy-model.cc
    helper/uan-helper.cc
    helper/acoustic-modem-energy-model-helper.cc)

set(ns3-uan_INCLUDES)

include_directories(${ns3-uan_INCLUDES})

add_library(ns3-uan SHARED ${ns3-uan_SOURCES})

target_link_libraries(ns3-uan ns3-network)
target_link_libraries(ns3-uan ns3-energy)
target_link_libraries(ns3-uan ns3-mobility)

