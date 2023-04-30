
set(ns3-wimax_SOURCES
    model/cid.cc
    model/cid-factory.cc
    model/wimax-net-device.cc
    model/bs-net-device.cc
    model/ss-net-device.cc
    model/wimax-mac-header.cc
    model/wimax-phy.cc
    model/wimax-channel.cc
    model/ofdm-downlink-frame-prefix.cc
    model/wimax-connection.cc
    model/ss-record.cc
    model/mac-messages.cc
    model/dl-mac-messages.cc
    model/ul-mac-messages.cc
    model/simple-ofdm-wimax-phy.cc
    model/simple-ofdm-wimax-channel.cc
    model/send-params.cc
    model/ss-manager.cc
    model/connection-manager.cc
    model/bs-uplink-scheduler.cc
    model/bs-uplink-scheduler-simple.cc
    model/bs-uplink-scheduler-mbqos.cc
    model/bs-uplink-scheduler-rtps.cc
    model/bs-scheduler.cc
    model/bs-scheduler-simple.cc
    model/bs-scheduler-rtps.cc
    model/wimax-mac-queue.cc
    model/burst-profile-manager.cc
    model/ss-scheduler.cc
    model/service-flow.cc
    model/service-flow-manager.cc
    model/service-flow-record.cc
    model/ss-link-manager.cc
    model/bs-link-manager.cc
    model/bandwidth-manager.cc
    model/crc8.cc
    model/ul-job.cc
    model/snr-to-block-error-rate-record.cc
    model/snr-to-block-error-rate-manager.cc
    model/simple-ofdm-send-param.cc
    model/ss-service-flow-manager.cc
    model/bs-service-flow-manager.cc
    model/ipcs-classifier.cc
    model/ipcs-classifier-record.cc
    model/wimax-tlv.cc
    model/cs-parameters.cc
    model/wimax-mac-to-mac-header.cc
    helper/wimax-helper.cc)

set(ns3-wimax_INCLUDES)

include_directories(${ns3-wimax_INCLUDES})

add_library(ns3-wimax SHARED ${ns3-wimax_SOURCES})

target_link_libraries(ns3-wimax ns3-network)
target_link_libraries(ns3-wimax ns3-internet)
target_link_libraries(ns3-wimax ns3-propagation)
target_link_libraries(ns3-wimax ns3-mobility)

