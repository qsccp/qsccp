
set(ns3-virtual-net-device_SOURCES
    model/virtual-net-device.cc)

set(ns3-virtual-net-device_INCLUDES)

include_directories(${ns3-virtual-net-device_INCLUDES})

add_library(ns3-virtual-net-device SHARED ${ns3-virtual-net-device_SOURCES})

target_link_libraries(ns3-virtual-net-device ns3-network)

