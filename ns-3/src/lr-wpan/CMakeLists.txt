
set(ns3-lr-wpan_SOURCES
    model/lr-wpan-error-model.cc
    model/lr-wpan-interference-helper.cc
    model/lr-wpan-phy.cc
    model/lr-wpan-mac.cc
    model/lr-wpan-mac-header.cc
    model/lr-wpan-mac-trailer.cc
    model/lr-wpan-csmaca.cc
    model/lr-wpan-net-device.cc
    model/lr-wpan-spectrum-value-helper.cc
    model/lr-wpan-spectrum-signal-parameters.cc
    model/lr-wpan-lqi-tag.cc
    helper/lr-wpan-helper.cc)

set(ns3-lr-wpan_INCLUDES)

include_directories(${ns3-lr-wpan_INCLUDES})

add_library(ns3-lr-wpan SHARED ${ns3-lr-wpan_SOURCES})

target_link_libraries(ns3-lr-wpan ns3-core)
target_link_libraries(ns3-lr-wpan ns3-network)
target_link_libraries(ns3-lr-wpan ns3-mobility)
target_link_libraries(ns3-lr-wpan ns3-spectrum)
target_link_libraries(ns3-lr-wpan ns3-propagation)

