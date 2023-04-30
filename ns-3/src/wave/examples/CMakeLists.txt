
set(wave-simple-80211p_SOURCES
    wave-simple-80211p.cc)

set(wave-simple-80211p_INCLUDES)

include_directories(${wave-simple-80211p_INCLUDES})

add_executable(wave-simple-80211p ${wave-simple-80211p_SOURCES})

target_link_libraries(wave-simple-80211p ns3-core)
target_link_libraries(wave-simple-80211p ns3-applications)
target_link_libraries(wave-simple-80211p ns3-mobility)
target_link_libraries(wave-simple-80211p ns3-network)
target_link_libraries(wave-simple-80211p ns3-wifi)
target_link_libraries(wave-simple-80211p ns3-wave)

set(wave-simple-device_SOURCES
    wave-simple-device.cc)

set(wave-simple-device_INCLUDES)

include_directories(${wave-simple-device_INCLUDES})

add_executable(wave-simple-device ${wave-simple-device_SOURCES})

target_link_libraries(wave-simple-device ns3-core)
target_link_libraries(wave-simple-device ns3-applications)
target_link_libraries(wave-simple-device ns3-mobility)
target_link_libraries(wave-simple-device ns3-network)
target_link_libraries(wave-simple-device ns3-wifi)
target_link_libraries(wave-simple-device ns3-wave)

set(vanet-routing-compare_SOURCES
    vanet-routing-compare.cc)

set(vanet-routing-compare_INCLUDES)

include_directories(${vanet-routing-compare_INCLUDES})

add_executable(vanet-routing-compare ${vanet-routing-compare_SOURCES})

target_link_libraries(vanet-routing-compare ns3-core)
target_link_libraries(vanet-routing-compare ns3-aodv)
target_link_libraries(vanet-routing-compare ns3-applications)
target_link_libraries(vanet-routing-compare ns3-dsr)
target_link_libraries(vanet-routing-compare ns3-dsdv)
target_link_libraries(vanet-routing-compare ns3-flow-monitor)
target_link_libraries(vanet-routing-compare ns3-mobility)
target_link_libraries(vanet-routing-compare ns3-network)
target_link_libraries(vanet-routing-compare ns3-olsr)
target_link_libraries(vanet-routing-compare ns3-propagation)
target_link_libraries(vanet-routing-compare ns3-wifi)
target_link_libraries(vanet-routing-compare ns3-wave)

