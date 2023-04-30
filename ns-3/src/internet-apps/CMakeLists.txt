
set(ns3-internet-apps_SOURCES
    model/ping6.cc
    model/radvd-interface.cc
    model/radvd-prefix.cc
    model/radvd.cc
    model/v4ping.cc
    model/dhcp-header.cc
    model/dhcp-server.cc
    model/dhcp-client.cc
    helper/ping6-helper.cc
    helper/radvd-helper.cc
    helper/v4ping-helper.cc
    helper/dhcp-helper.cc)

set(ns3-internet-apps_INCLUDES)

include_directories(${ns3-internet-apps_INCLUDES})

add_library(ns3-internet-apps SHARED ${ns3-internet-apps_SOURCES})

target_link_libraries(ns3-internet-apps ns3-internet)

