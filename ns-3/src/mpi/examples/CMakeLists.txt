
set(simple-distributed_SOURCES
    simple-distributed.cc)

set(simple-distributed_INCLUDES)

include_directories(${simple-distributed_INCLUDES})

add_executable(simple-distributed ${simple-distributed_SOURCES})

target_link_libraries(simple-distributed ns3-point-to-point)
target_link_libraries(simple-distributed ns3-internet)
target_link_libraries(simple-distributed ns3-nix-vector-routing)
target_link_libraries(simple-distributed ns3-applications)

set(third-distributed_SOURCES
    third-distributed.cc)

set(third-distributed_INCLUDES)

include_directories(${third-distributed_INCLUDES})

add_executable(third-distributed ${third-distributed_SOURCES})

target_link_libraries(third-distributed ns3-point-to-point)
target_link_libraries(third-distributed ns3-internet)
target_link_libraries(third-distributed ns3-mobility)
target_link_libraries(third-distributed ns3-wifi)
target_link_libraries(third-distributed ns3-csma)
target_link_libraries(third-distributed ns3-applications)

set(nms-p2p-nix-distributed_SOURCES
    nms-p2p-nix-distributed.cc)

set(nms-p2p-nix-distributed_INCLUDES)

include_directories(${nms-p2p-nix-distributed_INCLUDES})

add_executable(nms-p2p-nix-distributed ${nms-p2p-nix-distributed_SOURCES})

target_link_libraries(nms-p2p-nix-distributed ns3-point-to-point)
target_link_libraries(nms-p2p-nix-distributed ns3-internet)
target_link_libraries(nms-p2p-nix-distributed ns3-nix-vector-routing)
target_link_libraries(nms-p2p-nix-distributed ns3-applications)

set(simple-distributed-empty-node_SOURCES
    simple-distributed-empty-node.cc)

set(simple-distributed-empty-node_INCLUDES)

include_directories(${simple-distributed-empty-node_INCLUDES})

add_executable(simple-distributed-empty-node ${simple-distributed-empty-node_SOURCES})

target_link_libraries(simple-distributed-empty-node ns3-point-to-point)
target_link_libraries(simple-distributed-empty-node ns3-internet)
target_link_libraries(simple-distributed-empty-node ns3-nix-vector-routing)
target_link_libraries(simple-distributed-empty-node ns3-applications)

