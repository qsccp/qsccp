
set(nix-simple_SOURCES
    nix-simple.cc)

set(nix-simple_INCLUDES)

include_directories(${nix-simple_INCLUDES})

add_executable(nix-simple ${nix-simple_SOURCES})

target_link_libraries(nix-simple ns3-point-to-point)
target_link_libraries(nix-simple ns3-applications)
target_link_libraries(nix-simple ns3-internet)
target_link_libraries(nix-simple ns3-nix-vector-routing)

set(nms-p2p-nix_SOURCES
    nms-p2p-nix.cc)

set(nms-p2p-nix_INCLUDES)

include_directories(${nms-p2p-nix_INCLUDES})

add_executable(nms-p2p-nix ${nms-p2p-nix_SOURCES})

target_link_libraries(nms-p2p-nix ns3-point-to-point)
target_link_libraries(nms-p2p-nix ns3-applications)
target_link_libraries(nms-p2p-nix ns3-internet)
target_link_libraries(nms-p2p-nix ns3-nix-vector-routing)

