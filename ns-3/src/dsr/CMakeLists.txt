
set(ns3-dsr_SOURCES
    model/dsr-routing.cc
    model/dsr-options.cc
    model/dsr-fs-header.cc
    model/dsr-option-header.cc
    model/dsr-maintain-buff.cc
    model/dsr-passive-buff.cc
    model/dsr-rsendbuff.cc
    model/dsr-rcache.cc
    model/dsr-rreq-table.cc
    model/dsr-gratuitous-reply-table.cc
    model/dsr-errorbuff.cc
    model/dsr-network-queue.cc
    helper/dsr-helper.cc
    helper/dsr-main-helper.cc)

set(ns3-dsr_INCLUDES
    .
    #
    .)

include_directories(${ns3-dsr_INCLUDES})

add_library(ns3-dsr SHARED ${ns3-dsr_SOURCES})

target_link_libraries(ns3-dsr ns3-internet)
target_link_libraries(ns3-dsr ns3-wifi)

