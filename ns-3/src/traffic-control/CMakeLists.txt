
set(ns3-traffic-control_SOURCES
    model/traffic-control-layer.cc
    model/packet-filter.cc
    model/queue-disc.cc
    model/pfifo-fast-queue-disc.cc
    model/fifo-queue-disc.cc
    model/red-queue-disc.cc
    model/codel-queue-disc.cc
    model/fq-codel-queue-disc.cc
    model/pie-queue-disc.cc
    model/prio-queue-disc.cc
    model/mq-queue-disc.cc
    model/tbf-queue-disc.cc
    model/cobalt-queue-disc.cc
    helper/traffic-control-helper.cc
    helper/queue-disc-container.cc)

set(ns3-traffic-control_INCLUDES)

include_directories(${ns3-traffic-control_INCLUDES})

add_library(ns3-traffic-control SHARED ${ns3-traffic-control_SOURCES})

target_link_libraries(ns3-traffic-control ns3-core)
target_link_libraries(ns3-traffic-control ns3-network)

