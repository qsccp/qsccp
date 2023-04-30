
set(ns3-nix-vector-routing_SOURCES
    model/ipv4-nix-vector-routing.cc
    helper/ipv4-nix-vector-helper.cc)

set(ns3-nix-vector-routing_INCLUDES
    .
    #
    .)

include_directories(${ns3-nix-vector-routing_INCLUDES})

add_library(ns3-nix-vector-routing SHARED ${ns3-nix-vector-routing_SOURCES})

target_link_libraries(ns3-nix-vector-routing ns3-internet)

