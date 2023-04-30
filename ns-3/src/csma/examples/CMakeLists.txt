
set(csma-one-subnet_SOURCES
    csma-one-subnet.cc)

set(csma-one-subnet_INCLUDES)

include_directories(${csma-one-subnet_INCLUDES})

add_executable(csma-one-subnet ${csma-one-subnet_SOURCES})

target_link_libraries(csma-one-subnet ns3-csma)
target_link_libraries(csma-one-subnet ns3-internet)
target_link_libraries(csma-one-subnet ns3-applications)

set(csma-broadcast_SOURCES
    csma-broadcast.cc)

set(csma-broadcast_INCLUDES)

include_directories(${csma-broadcast_INCLUDES})

add_executable(csma-broadcast ${csma-broadcast_SOURCES})

target_link_libraries(csma-broadcast ns3-csma)
target_link_libraries(csma-broadcast ns3-internet)
target_link_libraries(csma-broadcast ns3-applications)

set(csma-packet-socket_SOURCES
    csma-packet-socket.cc)

set(csma-packet-socket_INCLUDES)

include_directories(${csma-packet-socket_INCLUDES})

add_executable(csma-packet-socket ${csma-packet-socket_SOURCES})

target_link_libraries(csma-packet-socket ns3-csma)
target_link_libraries(csma-packet-socket ns3-internet)
target_link_libraries(csma-packet-socket ns3-applications)

set(csma-multicast_SOURCES
    csma-multicast.cc)

set(csma-multicast_INCLUDES)

include_directories(${csma-multicast_INCLUDES})

add_executable(csma-multicast ${csma-multicast_SOURCES})

target_link_libraries(csma-multicast ns3-csma)
target_link_libraries(csma-multicast ns3-internet)
target_link_libraries(csma-multicast ns3-applications)

set(csma-raw-ip-socket_SOURCES
    csma-raw-ip-socket.cc)

set(csma-raw-ip-socket_INCLUDES)

include_directories(${csma-raw-ip-socket_INCLUDES})

add_executable(csma-raw-ip-socket ${csma-raw-ip-socket_SOURCES})

target_link_libraries(csma-raw-ip-socket ns3-csma)
target_link_libraries(csma-raw-ip-socket ns3-internet)
target_link_libraries(csma-raw-ip-socket ns3-applications)
target_link_libraries(csma-raw-ip-socket ns3-internet-apps)

set(csma-ping_SOURCES
    csma-ping.cc)

set(csma-ping_INCLUDES)

include_directories(${csma-ping_INCLUDES})

add_executable(csma-ping ${csma-ping_SOURCES})

target_link_libraries(csma-ping ns3-csma)
target_link_libraries(csma-ping ns3-internet)
target_link_libraries(csma-ping ns3-applications)
target_link_libraries(csma-ping ns3-internet-apps)

