
set(ns3-flow-monitor_SOURCES
    model/flow-monitor.cc
    model/flow-classifier.cc
    model/flow-probe.cc
    model/ipv4-flow-classifier.cc
    model/ipv4-flow-probe.cc
    model/ipv6-flow-classifier.cc
    model/ipv6-flow-probe.cc
    model/histogram.cc
    helper/flow-monitor-helper.cc)

set(ns3-flow-monitor_INCLUDES)

include_directories(${ns3-flow-monitor_INCLUDES})

add_library(ns3-flow-monitor SHARED ${ns3-flow-monitor_SOURCES})

target_link_libraries(ns3-flow-monitor ns3-internet)
target_link_libraries(ns3-flow-monitor ns3-config-store)

