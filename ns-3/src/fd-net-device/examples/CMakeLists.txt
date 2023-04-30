
set(dummy-network_SOURCES
    dummy-network.cc)

set(dummy-network_INCLUDES)

include_directories(${dummy-network_INCLUDES})

add_executable(dummy-network ${dummy-network_SOURCES})

target_link_libraries(dummy-network ns3-fd-net-device)
target_link_libraries(dummy-network ns3-internet)
target_link_libraries(dummy-network ns3-internet-apps)

set(fd2fd-onoff_SOURCES
    fd2fd-onoff.cc)

set(fd2fd-onoff_INCLUDES)

include_directories(${fd2fd-onoff_INCLUDES})

add_executable(fd2fd-onoff ${fd2fd-onoff_SOURCES})

target_link_libraries(fd2fd-onoff ns3-fd-net-device)
target_link_libraries(fd2fd-onoff ns3-internet)
target_link_libraries(fd2fd-onoff ns3-applications)

set(realtime-dummy-network_SOURCES
    realtime-dummy-network.cc)

set(realtime-dummy-network_INCLUDES)

include_directories(${realtime-dummy-network_INCLUDES})

add_executable(realtime-dummy-network ${realtime-dummy-network_SOURCES})

target_link_libraries(realtime-dummy-network ns3-fd-net-device)
target_link_libraries(realtime-dummy-network ns3-internet)
target_link_libraries(realtime-dummy-network ns3-internet-apps)

set(realtime-fd2fd-onoff_SOURCES
    realtime-fd2fd-onoff.cc)

set(realtime-fd2fd-onoff_INCLUDES)

include_directories(${realtime-fd2fd-onoff_INCLUDES})

add_executable(realtime-fd2fd-onoff ${realtime-fd2fd-onoff_SOURCES})

target_link_libraries(realtime-fd2fd-onoff ns3-fd-net-device)
target_link_libraries(realtime-fd2fd-onoff ns3-internet)
target_link_libraries(realtime-fd2fd-onoff ns3-applications)

set(fd-emu-ping_SOURCES
    fd-emu-ping.cc)

set(fd-emu-ping_INCLUDES)

include_directories(${fd-emu-ping_INCLUDES})

add_executable(fd-emu-ping ${fd-emu-ping_SOURCES})

target_link_libraries(fd-emu-ping ns3-fd-net-device)
target_link_libraries(fd-emu-ping ns3-internet)
target_link_libraries(fd-emu-ping ns3-internet-apps)

set(fd-emu-udp-echo_SOURCES
    fd-emu-udp-echo.cc)

set(fd-emu-udp-echo_INCLUDES)

include_directories(${fd-emu-udp-echo_INCLUDES})

add_executable(fd-emu-udp-echo ${fd-emu-udp-echo_SOURCES})

target_link_libraries(fd-emu-udp-echo ns3-fd-net-device)
target_link_libraries(fd-emu-udp-echo ns3-internet)
target_link_libraries(fd-emu-udp-echo ns3-applications)

set(fd-emu-onoff_SOURCES
    fd-emu-onoff.cc)

set(fd-emu-onoff_INCLUDES)

include_directories(${fd-emu-onoff_INCLUDES})

add_executable(fd-emu-onoff ${fd-emu-onoff_SOURCES})

target_link_libraries(fd-emu-onoff ns3-fd-net-device)
target_link_libraries(fd-emu-onoff ns3-internet)
target_link_libraries(fd-emu-onoff ns3-applications)

set(fd-tap-ping_SOURCES
    fd-tap-ping.cc)

set(fd-tap-ping_INCLUDES)

include_directories(${fd-tap-ping_INCLUDES})

add_executable(fd-tap-ping ${fd-tap-ping_SOURCES})

target_link_libraries(fd-tap-ping ns3-fd-net-device)
target_link_libraries(fd-tap-ping ns3-internet)
target_link_libraries(fd-tap-ping ns3-internet-apps)

set(fd-tap-ping6_SOURCES
    fd-tap-ping6.cc)

set(fd-tap-ping6_INCLUDES)

include_directories(${fd-tap-ping6_INCLUDES})

add_executable(fd-tap-ping6 ${fd-tap-ping6_SOURCES})

target_link_libraries(fd-tap-ping6 ns3-fd-net-device)
target_link_libraries(fd-tap-ping6 ns3-internet)
target_link_libraries(fd-tap-ping6 ns3-internet-apps)
target_link_libraries(fd-tap-ping6 ns3-csma)

