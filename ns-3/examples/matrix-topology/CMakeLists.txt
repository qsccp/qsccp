
set(matrix-topology_SOURCES
    matrix-topology.cc)

set(matrix-topology_INCLUDES)

include_directories(${matrix-topology_INCLUDES})

add_executable(matrix-topology ${matrix-topology_SOURCES})

target_link_libraries(matrix-topology ns3-network)
target_link_libraries(matrix-topology ns3-internet)
target_link_libraries(matrix-topology ns3-netanim)
target_link_libraries(matrix-topology ns3-point-to-point)
target_link_libraries(matrix-topology ns3-mobility)
target_link_libraries(matrix-topology ns3-applications)

