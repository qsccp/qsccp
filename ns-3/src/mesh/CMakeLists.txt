
set(ns3-mesh_SOURCES
    model/mesh-information-element-vector.cc
    model/mesh-point-device.cc
    model/mesh-l2-routing-protocol.cc
    model/mesh-wifi-beacon.cc
    model/mesh-wifi-interface-mac.cc
    model/dot11s/ie-dot11s-beacon-timing.cc
    model/dot11s/ie-dot11s-configuration.cc
    model/dot11s/ie-dot11s-id.cc
    model/dot11s/ie-dot11s-peer-management.cc
    model/dot11s/ie-dot11s-preq.cc
    model/dot11s/ie-dot11s-prep.cc
    model/dot11s/ie-dot11s-perr.cc
    model/dot11s/ie-dot11s-rann.cc
    model/dot11s/ie-dot11s-peering-protocol.cc
    model/dot11s/ie-dot11s-metric-report.cc
    model/dot11s/dot11s-mac-header.cc
    model/dot11s/peer-link-frame.cc
    model/dot11s/peer-link.cc
    model/dot11s/peer-management-protocol-mac.cc
    model/dot11s/peer-management-protocol.cc
    model/dot11s/hwmp-tag.cc
    model/dot11s/hwmp-rtable.cc
    model/dot11s/hwmp-protocol-mac.cc
    model/dot11s/hwmp-protocol.cc
    model/dot11s/airtime-metric.cc
    model/flame/flame-header.cc
    model/flame/flame-rtable.cc
    model/flame/flame-protocol-mac.cc
    model/flame/flame-protocol.cc
    helper/mesh-helper.cc
    helper/mesh-stack-installer.cc
    helper/dot11s/dot11s-installer.cc
    helper/flame/flame-installer.cc)

set(ns3-mesh_INCLUDES)

include_directories(${ns3-mesh_INCLUDES})

add_library(ns3-mesh SHARED ${ns3-mesh_SOURCES})

target_link_libraries(ns3-mesh ns3-internet)
target_link_libraries(ns3-mesh ns3-wifi)

