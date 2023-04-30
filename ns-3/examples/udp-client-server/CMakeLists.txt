
set(udp-client-server_SOURCES
    udp-client-server.cc)

set(udp-client-server_INCLUDES)

include_directories(${udp-client-server_INCLUDES})

add_executable(udp-client-server ${udp-client-server_SOURCES})

target_link_libraries(udp-client-server ns3-csma)
target_link_libraries(udp-client-server ns3-internet)
target_link_libraries(udp-client-server ns3-applications)

set(udp-trace-client-server_SOURCES
    udp-trace-client-server.cc)

set(udp-trace-client-server_INCLUDES)

include_directories(${udp-trace-client-server_INCLUDES})

add_executable(udp-trace-client-server ${udp-trace-client-server_SOURCES})

target_link_libraries(udp-trace-client-server ns3-csma)
target_link_libraries(udp-trace-client-server ns3-internet)
target_link_libraries(udp-trace-client-server ns3-applications)

