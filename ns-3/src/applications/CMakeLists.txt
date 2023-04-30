
set(ns3-applications_SOURCES
    model/bulk-send-application.cc
    model/onoff-application.cc
    model/packet-sink.cc
    model/udp-client.cc
    model/udp-server.cc
    model/seq-ts-header.cc
    model/udp-trace-client.cc
    model/packet-loss-counter.cc
    model/udp-echo-client.cc
    model/udp-echo-server.cc
    model/application-packet-probe.cc
    model/three-gpp-http-client.cc
    model/three-gpp-http-server.cc
    model/three-gpp-http-header.cc
    model/three-gpp-http-variables.cc
    helper/bulk-send-helper.cc
    helper/on-off-helper.cc
    helper/packet-sink-helper.cc
    helper/udp-client-server-helper.cc
    helper/udp-echo-helper.cc
    helper/three-gpp-http-helper.cc)

set(ns3-applications_INCLUDES)

include_directories(${ns3-applications_INCLUDES})

add_library(ns3-applications SHARED ${ns3-applications_SOURCES})

target_link_libraries(ns3-applications ns3-internet)
target_link_libraries(ns3-applications ns3-config-store)
target_link_libraries(ns3-applications ns3-stats)

