
set(ns3-point-to-point_SOURCES
    model/point-to-point-net-device.cc
    model/point-to-point-channel.cc
    model/point-to-point-remote-channel.cc
    model/ppp-header.cc
    helper/point-to-point-helper.cc)

set(ns3-point-to-point_INCLUDES)

include_directories(${ns3-point-to-point_INCLUDES})

add_library(ns3-point-to-point SHARED ${ns3-point-to-point_SOURCES})

target_link_libraries(ns3-point-to-point ns3-network)
target_link_libraries(ns3-point-to-point ns3-mpi)

