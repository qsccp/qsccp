
set(virtual-net-device_SOURCES
    virtual-net-device.cc)

set(virtual-net-device_INCLUDES)

include_directories(${virtual-net-device_INCLUDES})

add_executable(virtual-net-device ${virtual-net-device_SOURCES})

target_link_libraries(virtual-net-device ns3-virtual-net-device)
target_link_libraries(virtual-net-device ns3-point-to-point)
target_link_libraries(virtual-net-device ns3-internet)
target_link_libraries(virtual-net-device ns3-applications)

