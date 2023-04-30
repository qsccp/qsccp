
set(ns3-spectrum_SOURCES
    model/spectrum-model.cc
    model/spectrum-value.cc
    model/spectrum-converter.cc
    model/spectrum-signal-parameters.cc
    model/spectrum-propagation-loss-model.cc
    model/friis-spectrum-propagation-loss.cc
    model/constant-spectrum-propagation-loss.cc
    model/spectrum-phy.cc
    model/spectrum-channel.cc
    model/single-model-spectrum-channel.cc
    model/multi-model-spectrum-channel.cc
    model/spectrum-interference.cc
    model/spectrum-error-model.cc
    model/spectrum-model-ism2400MHz-res1MHz.cc
    model/spectrum-model-300kHz-300GHz-log.cc
    model/wifi-spectrum-value-helper.cc
    model/waveform-generator.cc
    model/spectrum-analyzer.cc
    model/aloha-noack-mac-header.cc
    model/aloha-noack-net-device.cc
    model/half-duplex-ideal-phy.cc
    model/half-duplex-ideal-phy-signal-parameters.cc
    model/non-communicating-net-device.cc
    model/microwave-oven-spectrum-value-helper.cc
    model/tv-spectrum-transmitter.cc
    model/trace-fading-loss-model.cc
    helper/spectrum-helper.cc
    helper/adhoc-aloha-noack-ideal-phy-helper.cc
    helper/waveform-generator-helper.cc
    helper/spectrum-analyzer-helper.cc
    helper/tv-spectrum-transmitter-helper.cc)

set(ns3-spectrum_INCLUDES)

include_directories(${ns3-spectrum_INCLUDES})

add_library(ns3-spectrum SHARED ${ns3-spectrum_SOURCES})

target_link_libraries(ns3-spectrum ns3-propagation)
target_link_libraries(ns3-spectrum ns3-antenna)

