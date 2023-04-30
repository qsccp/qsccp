
set(main-packet-header_SOURCES
    main-packet-header.cc)

set(main-packet-header_INCLUDES)

include_directories(${main-packet-header_INCLUDES})

add_executable(main-packet-header ${main-packet-header_SOURCES})

target_link_libraries(main-packet-header ns3-network)

set(main-packet-tag_SOURCES
    main-packet-tag.cc)

set(main-packet-tag_INCLUDES)

include_directories(${main-packet-tag_INCLUDES})

add_executable(main-packet-tag ${main-packet-tag_SOURCES})

target_link_libraries(main-packet-tag ns3-network)

set(packet-socket-apps_SOURCES
    packet-socket-apps.cc)

set(packet-socket-apps_INCLUDES)

include_directories(${packet-socket-apps_INCLUDES})

add_executable(packet-socket-apps ${packet-socket-apps_SOURCES})

target_link_libraries(packet-socket-apps ns3-core)
target_link_libraries(packet-socket-apps ns3-network)

