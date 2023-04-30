
set(mixed-wired-wireless_SOURCES
    mixed-wired-wireless.cc)

set(mixed-wired-wireless_INCLUDES)

include_directories(${mixed-wired-wireless_INCLUDES})

add_executable(mixed-wired-wireless ${mixed-wired-wireless_SOURCES})

target_link_libraries(mixed-wired-wireless ns3-wifi)
target_link_libraries(mixed-wired-wireless ns3-applications)
target_link_libraries(mixed-wired-wireless ns3-olsr)
target_link_libraries(mixed-wired-wireless ns3-netanim)

set(wifi-adhoc_SOURCES
    wifi-adhoc.cc)

set(wifi-adhoc_INCLUDES)

include_directories(${wifi-adhoc_INCLUDES})

add_executable(wifi-adhoc ${wifi-adhoc_SOURCES})

target_link_libraries(wifi-adhoc ns3-wifi)
target_link_libraries(wifi-adhoc ns3-applications)

set(wifi-clear-channel-cmu_SOURCES
    wifi-clear-channel-cmu.cc)

set(wifi-clear-channel-cmu_INCLUDES)

include_directories(${wifi-clear-channel-cmu_INCLUDES})

add_executable(wifi-clear-channel-cmu ${wifi-clear-channel-cmu_SOURCES})

target_link_libraries(wifi-clear-channel-cmu ns3-internet)
target_link_libraries(wifi-clear-channel-cmu ns3-wifi)

set(wifi-ap_SOURCES
    wifi-ap.cc)

set(wifi-ap_INCLUDES)

include_directories(${wifi-ap_INCLUDES})

add_executable(wifi-ap ${wifi-ap_SOURCES})

target_link_libraries(wifi-ap ns3-wifi)
target_link_libraries(wifi-ap ns3-applications)

set(wifi-wired-bridging_SOURCES
    wifi-wired-bridging.cc)

set(wifi-wired-bridging_INCLUDES)

include_directories(${wifi-wired-bridging_INCLUDES})

add_executable(wifi-wired-bridging ${wifi-wired-bridging_SOURCES})

target_link_libraries(wifi-wired-bridging ns3-wifi)
target_link_libraries(wifi-wired-bridging ns3-csma)
target_link_libraries(wifi-wired-bridging ns3-bridge)
target_link_libraries(wifi-wired-bridging ns3-applications)

set(multirate_SOURCES
    multirate.cc)

set(multirate_INCLUDES)

include_directories(${multirate_INCLUDES})

add_executable(multirate ${multirate_SOURCES})

target_link_libraries(multirate ns3-wifi)
target_link_libraries(multirate ns3-flow-monitor)
target_link_libraries(multirate ns3-olsr)
target_link_libraries(multirate ns3-applications)

set(wifi-simple-adhoc_SOURCES
    wifi-simple-adhoc.cc)

set(wifi-simple-adhoc_INCLUDES)

include_directories(${wifi-simple-adhoc_INCLUDES})

add_executable(wifi-simple-adhoc ${wifi-simple-adhoc_SOURCES})

target_link_libraries(wifi-simple-adhoc ns3-internet)
target_link_libraries(wifi-simple-adhoc ns3-wifi)

set(wifi-simple-adhoc-grid_SOURCES
    wifi-simple-adhoc-grid.cc)

set(wifi-simple-adhoc-grid_INCLUDES)

include_directories(${wifi-simple-adhoc-grid_INCLUDES})

add_executable(wifi-simple-adhoc-grid ${wifi-simple-adhoc-grid_SOURCES})

target_link_libraries(wifi-simple-adhoc-grid ns3-internet)
target_link_libraries(wifi-simple-adhoc-grid ns3-wifi)
target_link_libraries(wifi-simple-adhoc-grid ns3-olsr)

set(wifi-simple-infra_SOURCES
    wifi-simple-infra.cc)

set(wifi-simple-infra_INCLUDES)

include_directories(${wifi-simple-infra_INCLUDES})

add_executable(wifi-simple-infra ${wifi-simple-infra_SOURCES})

target_link_libraries(wifi-simple-infra ns3-internet)
target_link_libraries(wifi-simple-infra ns3-wifi)

set(wifi-simple-interference_SOURCES
    wifi-simple-interference.cc)

set(wifi-simple-interference_INCLUDES)

include_directories(${wifi-simple-interference_INCLUDES})

add_executable(wifi-simple-interference ${wifi-simple-interference_SOURCES})

target_link_libraries(wifi-simple-interference ns3-internet)
target_link_libraries(wifi-simple-interference ns3-wifi)

set(wifi-blockack_SOURCES
    wifi-blockack.cc)

set(wifi-blockack_INCLUDES)

include_directories(${wifi-blockack_INCLUDES})

add_executable(wifi-blockack ${wifi-blockack_SOURCES})

target_link_libraries(wifi-blockack ns3-wifi)
target_link_libraries(wifi-blockack ns3-applications)

set(dsss-validation_SOURCES
    dsss-validation.cc)

set(dsss-validation_INCLUDES)

include_directories(${dsss-validation_INCLUDES})

add_executable(dsss-validation ${dsss-validation_SOURCES})

target_link_libraries(dsss-validation ns3-wifi)

set(ofdm-validation_SOURCES
    ofdm-validation.cc)

set(ofdm-validation_INCLUDES)

include_directories(${ofdm-validation_INCLUDES})

add_executable(ofdm-validation ${ofdm-validation_SOURCES})

target_link_libraries(ofdm-validation ns3-wifi)

set(ofdm-ht-validation_SOURCES
    ofdm-ht-validation.cc)

set(ofdm-ht-validation_INCLUDES)

include_directories(${ofdm-ht-validation_INCLUDES})

add_executable(ofdm-ht-validation ${ofdm-ht-validation_SOURCES})

target_link_libraries(ofdm-ht-validation ns3-wifi)

set(ofdm-vht-validation_SOURCES
    ofdm-vht-validation.cc)

set(ofdm-vht-validation_INCLUDES)

include_directories(${ofdm-vht-validation_INCLUDES})

add_executable(ofdm-vht-validation ${ofdm-vht-validation_SOURCES})

target_link_libraries(ofdm-vht-validation ns3-wifi)

set(wifi-hidden-terminal_SOURCES
    wifi-hidden-terminal.cc)

set(wifi-hidden-terminal_INCLUDES)

include_directories(${wifi-hidden-terminal_INCLUDES})

add_executable(wifi-hidden-terminal ${wifi-hidden-terminal_SOURCES})

target_link_libraries(wifi-hidden-terminal ns3-wifi)
target_link_libraries(wifi-hidden-terminal ns3-applications)
target_link_libraries(wifi-hidden-terminal ns3-flow-monitor)

set(ht-wifi-network_SOURCES
    ht-wifi-network.cc)

set(ht-wifi-network_INCLUDES)

include_directories(${ht-wifi-network_INCLUDES})

add_executable(ht-wifi-network ${ht-wifi-network_SOURCES})

target_link_libraries(ht-wifi-network ns3-wifi)
target_link_libraries(ht-wifi-network ns3-applications)

set(vht-wifi-network_SOURCES
    vht-wifi-network.cc)

set(vht-wifi-network_INCLUDES)

include_directories(${vht-wifi-network_INCLUDES})

add_executable(vht-wifi-network ${vht-wifi-network_SOURCES})

target_link_libraries(vht-wifi-network ns3-wifi)
target_link_libraries(vht-wifi-network ns3-applications)

set(wifi-timing-attributes_SOURCES
    wifi-timing-attributes.cc)

set(wifi-timing-attributes_INCLUDES)

include_directories(${wifi-timing-attributes_INCLUDES})

add_executable(wifi-timing-attributes ${wifi-timing-attributes_SOURCES})

target_link_libraries(wifi-timing-attributes ns3-wifi)
target_link_libraries(wifi-timing-attributes ns3-applications)

set(wifi-sleep_SOURCES
    wifi-sleep.cc)

set(wifi-sleep_INCLUDES)

include_directories(${wifi-sleep_INCLUDES})

add_executable(wifi-sleep ${wifi-sleep_SOURCES})

target_link_libraries(wifi-sleep ns3-wifi)
target_link_libraries(wifi-sleep ns3-applications)

set(power-adaptation-distance_SOURCES
    power-adaptation-distance.cc)

set(power-adaptation-distance_INCLUDES)

include_directories(${power-adaptation-distance_INCLUDES})

add_executable(power-adaptation-distance ${power-adaptation-distance_SOURCES})

target_link_libraries(power-adaptation-distance ns3-wifi)
target_link_libraries(power-adaptation-distance ns3-applications)

set(power-adaptation-interference_SOURCES
    power-adaptation-interference.cc)

set(power-adaptation-interference_INCLUDES)

include_directories(${power-adaptation-interference_INCLUDES})

add_executable(power-adaptation-interference ${power-adaptation-interference_SOURCES})

target_link_libraries(power-adaptation-interference ns3-wifi)
target_link_libraries(power-adaptation-interference ns3-applications)
target_link_libraries(power-adaptation-interference ns3-flow-monitor)

set(rate-adaptation-distance_SOURCES
    rate-adaptation-distance.cc)

set(rate-adaptation-distance_INCLUDES)

include_directories(${rate-adaptation-distance_INCLUDES})

add_executable(rate-adaptation-distance ${rate-adaptation-distance_SOURCES})

target_link_libraries(rate-adaptation-distance ns3-wifi)
target_link_libraries(rate-adaptation-distance ns3-applications)

set(wifi-aggregation_SOURCES
    wifi-aggregation.cc)

set(wifi-aggregation_INCLUDES)

include_directories(${wifi-aggregation_INCLUDES})

add_executable(wifi-aggregation ${wifi-aggregation_SOURCES})

target_link_libraries(wifi-aggregation ns3-wifi)
target_link_libraries(wifi-aggregation ns3-applications)

set(wifi-txop-aggregation_SOURCES
    wifi-txop-aggregation.cc)

set(wifi-txop-aggregation_INCLUDES)

include_directories(${wifi-txop-aggregation_INCLUDES})

add_executable(wifi-txop-aggregation ${wifi-txop-aggregation_SOURCES})

target_link_libraries(wifi-txop-aggregation ns3-wifi)
target_link_libraries(wifi-txop-aggregation ns3-applications)

set(simple-ht-hidden-stations_SOURCES
    simple-ht-hidden-stations.cc)

set(simple-ht-hidden-stations_INCLUDES)

include_directories(${simple-ht-hidden-stations_INCLUDES})

add_executable(simple-ht-hidden-stations ${simple-ht-hidden-stations_SOURCES})

target_link_libraries(simple-ht-hidden-stations ns3-wifi)
target_link_libraries(simple-ht-hidden-stations ns3-applications)

set(80211n-mimo_SOURCES
    80211n-mimo.cc)

set(80211n-mimo_INCLUDES)

include_directories(${80211n-mimo_INCLUDES})

add_executable(80211n-mimo ${80211n-mimo_SOURCES})

target_link_libraries(80211n-mimo ns3-wifi)
target_link_libraries(80211n-mimo ns3-applications)

set(mixed-network_SOURCES
    mixed-network.cc)

set(mixed-network_INCLUDES)

include_directories(${mixed-network_INCLUDES})

add_executable(mixed-network ${mixed-network_SOURCES})

target_link_libraries(mixed-network ns3-wifi)
target_link_libraries(mixed-network ns3-applications)

set(wifi-tcp_SOURCES
    wifi-tcp.cc)

set(wifi-tcp_INCLUDES)

include_directories(${wifi-tcp_INCLUDES})

add_executable(wifi-tcp ${wifi-tcp_SOURCES})

target_link_libraries(wifi-tcp ns3-wifi)
target_link_libraries(wifi-tcp ns3-applications)

set(80211e-txop_SOURCES
    80211e-txop.cc)

set(80211e-txop_INCLUDES)

include_directories(${80211e-txop_INCLUDES})

add_executable(80211e-txop ${80211e-txop_SOURCES})

target_link_libraries(80211e-txop ns3-wifi)
target_link_libraries(80211e-txop ns3-applications)

set(wifi-spectrum-per-example_SOURCES
    wifi-spectrum-per-example.cc)

set(wifi-spectrum-per-example_INCLUDES)

include_directories(${wifi-spectrum-per-example_INCLUDES})

add_executable(wifi-spectrum-per-example ${wifi-spectrum-per-example_SOURCES})

target_link_libraries(wifi-spectrum-per-example ns3-wifi)
target_link_libraries(wifi-spectrum-per-example ns3-applications)

set(wifi-spectrum-per-interference_SOURCES
    wifi-spectrum-per-interference.cc)

set(wifi-spectrum-per-interference_INCLUDES)

include_directories(${wifi-spectrum-per-interference_INCLUDES})

add_executable(wifi-spectrum-per-interference ${wifi-spectrum-per-interference_SOURCES})

target_link_libraries(wifi-spectrum-per-interference ns3-wifi)
target_link_libraries(wifi-spectrum-per-interference ns3-applications)

set(wifi-spectrum-saturation-example_SOURCES
    wifi-spectrum-saturation-example.cc)

set(wifi-spectrum-saturation-example_INCLUDES)

include_directories(${wifi-spectrum-saturation-example_INCLUDES})

add_executable(wifi-spectrum-saturation-example ${wifi-spectrum-saturation-example_SOURCES})

target_link_libraries(wifi-spectrum-saturation-example ns3-wifi)
target_link_libraries(wifi-spectrum-saturation-example ns3-applications)

set(ofdm-he-validation_SOURCES
    ofdm-he-validation.cc)

set(ofdm-he-validation_INCLUDES)

include_directories(${ofdm-he-validation_INCLUDES})

add_executable(ofdm-he-validation ${ofdm-he-validation_SOURCES})

target_link_libraries(ofdm-he-validation ns3-wifi)

set(he-wifi-network_SOURCES
    he-wifi-network.cc)

set(he-wifi-network_INCLUDES)

include_directories(${he-wifi-network_INCLUDES})

add_executable(he-wifi-network ${he-wifi-network_SOURCES})

target_link_libraries(he-wifi-network ns3-wifi)
target_link_libraries(he-wifi-network ns3-applications)

set(wifi-multi-tos_SOURCES
    wifi-multi-tos.cc)

set(wifi-multi-tos_INCLUDES)

include_directories(${wifi-multi-tos_INCLUDES})

add_executable(wifi-multi-tos ${wifi-multi-tos_SOURCES})

target_link_libraries(wifi-multi-tos ns3-wifi)
target_link_libraries(wifi-multi-tos ns3-applications)

set(wifi-backward-compatibility_SOURCES
    wifi-backward-compatibility.cc)

set(wifi-backward-compatibility_INCLUDES)

include_directories(${wifi-backward-compatibility_INCLUDES})

add_executable(wifi-backward-compatibility ${wifi-backward-compatibility_SOURCES})

target_link_libraries(wifi-backward-compatibility ns3-wifi)
target_link_libraries(wifi-backward-compatibility ns3-applications)

set(wifi-pcf_SOURCES
    wifi-pcf.cc)

set(wifi-pcf_INCLUDES)

include_directories(${wifi-pcf_INCLUDES})

add_executable(wifi-pcf ${wifi-pcf_SOURCES})

target_link_libraries(wifi-pcf ns3-wifi)
target_link_libraries(wifi-pcf ns3-applications)

set(wifi-spatial-reuse_SOURCES
    wifi-spatial-reuse.cc)

set(wifi-spatial-reuse_INCLUDES)

include_directories(${wifi-spatial-reuse_INCLUDES})

add_executable(wifi-spatial-reuse ${wifi-spatial-reuse_SOURCES})

target_link_libraries(wifi-spatial-reuse ns3-wifi)
target_link_libraries(wifi-spatial-reuse ns3-applications)

