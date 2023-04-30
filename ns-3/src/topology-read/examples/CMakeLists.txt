
set(topology-example-sim_SOURCES
    topology-example-sim.cc)

set(topology-example-sim_INCLUDES)

include_directories(${topology-example-sim_INCLUDES})

add_executable(topology-example-sim ${topology-example-sim_SOURCES})

target_link_libraries(topology-example-sim ns3-topology-read)
target_link_libraries(topology-example-sim ns3-internet)
target_link_libraries(topology-example-sim ns3-nix-vector-routing)
target_link_libraries(topology-example-sim ns3-point-to-point)
target_link_libraries(topology-example-sim ns3-applications)

