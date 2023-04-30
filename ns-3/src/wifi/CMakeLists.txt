
set(ns3-wifi_SOURCES
    model/wifi-utils.cc
    model/wifi-information-element.cc
    model/wifi-information-element-vector.cc
    model/wifi-mode.cc
    model/ssid.cc
    model/wifi-phy.cc
    model/wifi-phy-state-helper.cc
    model/error-rate-model.cc
    model/yans-error-rate-model.cc
    model/nist-error-rate-model.cc
    model/dsss-error-rate-model.cc
    model/interference-helper.cc
    model/yans-wifi-phy.cc
    model/yans-wifi-channel.cc
    model/spectrum-wifi-phy.cc
    model/wifi-phy-tag.cc
    model/tx-vector-tag.cc
    model/wifi-spectrum-phy-interface.cc
    model/wifi-spectrum-signal-parameters.cc
    model/wifi-phy-header.cc
    model/wifi-mac-header.cc
    model/wifi-mac-trailer.cc
    model/mac-low.cc
    model/mac-low-transmission-parameters.cc
    model/wifi-mac-queue.cc
    model/mac-tx-middle.cc
    model/mac-rx-middle.cc
    model/txop.cc
    model/supported-rates.cc
    model/capability-information.cc
    model/status-code.cc
    model/mgt-headers.cc
    model/channel-access-manager.cc
    model/wifi-mac.cc
    model/regular-wifi-mac.cc
    model/infrastructure-wifi-mac.cc
    model/wifi-remote-station-info.cc
    model/wifi-remote-station-manager.cc
    model/ap-wifi-mac.cc
    model/sta-wifi-mac.cc
    model/adhoc-wifi-mac.cc
    model/wifi-net-device.cc
    model/arf-wifi-manager.cc
    model/aarf-wifi-manager.cc
    model/ideal-wifi-manager.cc
    model/constant-rate-wifi-manager.cc
    model/amrr-wifi-manager.cc
    model/onoe-wifi-manager.cc
    model/rraa-wifi-manager.cc
    model/aarfcd-wifi-manager.cc
    model/cara-wifi-manager.cc
    model/minstrel-wifi-manager.cc
    model/minstrel-ht-wifi-manager.cc
    model/qos-utils.cc
    model/qos-txop.cc
    model/msdu-aggregator.cc
    model/amsdu-subframe-header.cc
    model/originator-block-ack-agreement.cc
    model/ctrl-headers.cc
    model/qos-blocked-destinations.cc
    model/block-ack-agreement.cc
    model/block-ack-manager.cc
    model/block-ack-cache.cc
    model/block-ack-window.cc
    model/snr-tag.cc
    model/ht-capabilities.cc
    model/wifi-tx-vector.cc
    model/parf-wifi-manager.cc
    model/aparf-wifi-manager.cc
    model/rrpaa-wifi-manager.cc
    model/ampdu-subframe-header.cc
    model/mpdu-aggregator.cc
    model/ampdu-tag.cc
    model/wifi-radio-energy-model.cc
    model/wifi-tx-current-model.cc
    model/vht-capabilities.cc
    model/erp-information.cc
    model/ht-operation.cc
    model/vht-operation.cc
    model/dsss-parameter-set.cc
    model/edca-parameter-set.cc
    model/he-capabilities.cc
    model/frame-capture-model.cc
    model/simple-frame-capture-model.cc
    model/preamble-detection-model.cc
    model/threshold-preamble-detection-model.cc
    model/he-operation.cc
    model/he-configuration.cc
    model/extended-capabilities.cc
    model/cf-parameter-set.cc
    model/wifi-mac-queue-item.cc
    model/wifi-psdu.cc
    model/ht-configuration.cc
    model/vht-configuration.cc
    model/obss-pd-algorithm.cc
    model/constant-obss-pd-algorithm.cc
    helper/wifi-radio-energy-model-helper.cc
    helper/athstats-helper.cc
    helper/wifi-helper.cc
    helper/yans-wifi-helper.cc
    helper/spectrum-wifi-helper.cc
    helper/wifi-mac-helper.cc)

set(ns3-wifi_INCLUDES)

include_directories(${ns3-wifi_INCLUDES})

add_library(ns3-wifi SHARED ${ns3-wifi_SOURCES})

target_link_libraries(ns3-wifi ns3-network)
target_link_libraries(ns3-wifi ns3-propagation)
target_link_libraries(ns3-wifi ns3-energy)
target_link_libraries(ns3-wifi ns3-spectrum)
target_link_libraries(ns3-wifi ns3-antenna)
target_link_libraries(ns3-wifi ns3-mobility)

