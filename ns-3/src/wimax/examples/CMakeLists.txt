
set(wimax-ipv4_SOURCES
    wimax-ipv4.cc)

set(wimax-ipv4_INCLUDES)

include_directories(${wimax-ipv4_INCLUDES})

add_executable(wimax-ipv4 ${wimax-ipv4_SOURCES})

target_link_libraries(wimax-ipv4 ns3-wimax)
target_link_libraries(wimax-ipv4 ns3-internet)
target_link_libraries(wimax-ipv4 ns3-mobility)
target_link_libraries(wimax-ipv4 ns3-csma)
target_link_libraries(wimax-ipv4 ns3-applications)

set(wimax-multicast_SOURCES
    wimax-multicast.cc)

set(wimax-multicast_INCLUDES)

include_directories(${wimax-multicast_INCLUDES})

add_executable(wimax-multicast ${wimax-multicast_SOURCES})

target_link_libraries(wimax-multicast ns3-wimax)
target_link_libraries(wimax-multicast ns3-internet)
target_link_libraries(wimax-multicast ns3-csma)
target_link_libraries(wimax-multicast ns3-applications)

set(wimax-simple_SOURCES
    wimax-simple.cc)

set(wimax-simple_INCLUDES)

include_directories(${wimax-simple_INCLUDES})

add_executable(wimax-simple ${wimax-simple_SOURCES})

target_link_libraries(wimax-simple ns3-wimax)
target_link_libraries(wimax-simple ns3-internet)
target_link_libraries(wimax-simple ns3-mobility)
target_link_libraries(wimax-simple ns3-applications)

