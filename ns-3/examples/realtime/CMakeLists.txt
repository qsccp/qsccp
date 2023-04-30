
set(realtime-udp-echo_SOURCES
    realtime-udp-echo.cc)

set(realtime-udp-echo_INCLUDES)

include_directories(${realtime-udp-echo_INCLUDES})

add_executable(realtime-udp-echo ${realtime-udp-echo_SOURCES})

target_link_libraries(realtime-udp-echo ns3-csma)
target_link_libraries(realtime-udp-echo ns3-internet)
target_link_libraries(realtime-udp-echo ns3-applications)

