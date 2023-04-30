
set(udp-echo_SOURCES
    udp-echo.cc)

set(udp-echo_INCLUDES)

include_directories(${udp-echo_INCLUDES})

add_executable(udp-echo ${udp-echo_SOURCES})

target_link_libraries(udp-echo ns3-csma)
target_link_libraries(udp-echo ns3-internet)
target_link_libraries(udp-echo ns3-applications)

