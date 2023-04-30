
set(ns3-wave_SOURCES
    model/wave-mac-low.cc
    model/ocb-wifi-mac.cc
    model/vendor-specific-action.cc
    model/channel-coordinator.cc
    model/channel-scheduler.cc
    model/default-channel-scheduler.cc
    model/channel-manager.cc
    model/vsa-manager.cc
    model/bsm-application.cc
    model/higher-tx-tag.cc
    model/wave-net-device.cc
    helper/wave-bsm-stats.cc
    helper/wave-mac-helper.cc
    helper/wave-helper.cc
    helper/wifi-80211p-helper.cc
    helper/wave-bsm-helper.cc)

set(ns3-wave_INCLUDES)

include_directories(${ns3-wave_INCLUDES})

add_library(ns3-wave SHARED ${ns3-wave_SOURCES})

target_link_libraries(ns3-wave ns3-core)
target_link_libraries(ns3-wave ns3-wifi)
target_link_libraries(ns3-wave ns3-propagation)
target_link_libraries(ns3-wave ns3-internet)

