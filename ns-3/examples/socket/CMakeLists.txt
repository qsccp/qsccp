
set(socket-bound-static-routing_SOURCES
    socket-bound-static-routing.cc)

set(socket-bound-static-routing_INCLUDES)

include_directories(${socket-bound-static-routing_INCLUDES})

add_executable(socket-bound-static-routing ${socket-bound-static-routing_SOURCES})

target_link_libraries(socket-bound-static-routing ns3-network)
target_link_libraries(socket-bound-static-routing ns3-csma)
target_link_libraries(socket-bound-static-routing ns3-point-to-point)
target_link_libraries(socket-bound-static-routing ns3-internet)

set(socket-bound-tcp-static-routing_SOURCES
    socket-bound-tcp-static-routing.cc)

set(socket-bound-tcp-static-routing_INCLUDES)

include_directories(${socket-bound-tcp-static-routing_INCLUDES})

add_executable(socket-bound-tcp-static-routing ${socket-bound-tcp-static-routing_SOURCES})

target_link_libraries(socket-bound-tcp-static-routing ns3-network)
target_link_libraries(socket-bound-tcp-static-routing ns3-csma)
target_link_libraries(socket-bound-tcp-static-routing ns3-point-to-point)
target_link_libraries(socket-bound-tcp-static-routing ns3-internet)
target_link_libraries(socket-bound-tcp-static-routing ns3-applications)

set(socket-options-ipv4_SOURCES
    socket-options-ipv4.cc)

set(socket-options-ipv4_INCLUDES)

include_directories(${socket-options-ipv4_INCLUDES})

add_executable(socket-options-ipv4 ${socket-options-ipv4_SOURCES})

target_link_libraries(socket-options-ipv4 ns3-network)
target_link_libraries(socket-options-ipv4 ns3-csma)
target_link_libraries(socket-options-ipv4 ns3-point-to-point)
target_link_libraries(socket-options-ipv4 ns3-internet)

set(socket-options-ipv6_SOURCES
    socket-options-ipv6.cc)

set(socket-options-ipv6_INCLUDES)

include_directories(${socket-options-ipv6_INCLUDES})

add_executable(socket-options-ipv6 ${socket-options-ipv6_SOURCES})

target_link_libraries(socket-options-ipv6 ns3-network)
target_link_libraries(socket-options-ipv6 ns3-csma)
target_link_libraries(socket-options-ipv6 ns3-point-to-point)
target_link_libraries(socket-options-ipv6 ns3-internet)

