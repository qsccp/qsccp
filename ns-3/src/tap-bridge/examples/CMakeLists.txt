
set(tap-csma_SOURCES
    tap-csma.cc)

set(tap-csma_INCLUDES)

include_directories(${tap-csma_INCLUDES})

add_executable(tap-csma ${tap-csma_SOURCES})

target_link_libraries(tap-csma ns3-csma)
target_link_libraries(tap-csma ns3-tap-bridge)
target_link_libraries(tap-csma ns3-internet)
target_link_libraries(tap-csma ns3-wifi)

set(tap-csma-virtual-machine_SOURCES
    tap-csma-virtual-machine.cc)

set(tap-csma-virtual-machine_INCLUDES)

include_directories(${tap-csma-virtual-machine_INCLUDES})

add_executable(tap-csma-virtual-machine ${tap-csma-virtual-machine_SOURCES})

target_link_libraries(tap-csma-virtual-machine ns3-csma)
target_link_libraries(tap-csma-virtual-machine ns3-tap-bridge)
target_link_libraries(tap-csma-virtual-machine ns3-internet)

set(tap-wifi-virtual-machine_SOURCES
    tap-wifi-virtual-machine.cc)

set(tap-wifi-virtual-machine_INCLUDES)

include_directories(${tap-wifi-virtual-machine_INCLUDES})

add_executable(tap-wifi-virtual-machine ${tap-wifi-virtual-machine_SOURCES})

target_link_libraries(tap-wifi-virtual-machine ns3-csma)
target_link_libraries(tap-wifi-virtual-machine ns3-tap-bridge)
target_link_libraries(tap-wifi-virtual-machine ns3-internet)
target_link_libraries(tap-wifi-virtual-machine ns3-wifi)
target_link_libraries(tap-wifi-virtual-machine ns3-mobility)

set(tap-wifi-dumbbell_SOURCES
    tap-wifi-dumbbell.cc)

set(tap-wifi-dumbbell_INCLUDES)

include_directories(${tap-wifi-dumbbell_INCLUDES})

add_executable(tap-wifi-dumbbell ${tap-wifi-dumbbell_SOURCES})

target_link_libraries(tap-wifi-dumbbell ns3-wifi)
target_link_libraries(tap-wifi-dumbbell ns3-csma)
target_link_libraries(tap-wifi-dumbbell ns3-point-to-point)
target_link_libraries(tap-wifi-dumbbell ns3-tap-bridge)
target_link_libraries(tap-wifi-dumbbell ns3-internet)
target_link_libraries(tap-wifi-dumbbell ns3-applications)

