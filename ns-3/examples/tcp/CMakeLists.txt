
set(tcp-large-transfer_SOURCES
    tcp-large-transfer.cc)

set(tcp-large-transfer_INCLUDES)

include_directories(${tcp-large-transfer_INCLUDES})

add_executable(tcp-large-transfer ${tcp-large-transfer_SOURCES})

target_link_libraries(tcp-large-transfer ns3-point-to-point)
target_link_libraries(tcp-large-transfer ns3-applications)
target_link_libraries(tcp-large-transfer ns3-internet)

set(tcp-nsc-lfn_SOURCES
    tcp-nsc-lfn.cc)

set(tcp-nsc-lfn_INCLUDES)

include_directories(${tcp-nsc-lfn_INCLUDES})

add_executable(tcp-nsc-lfn ${tcp-nsc-lfn_SOURCES})

target_link_libraries(tcp-nsc-lfn ns3-point-to-point)
target_link_libraries(tcp-nsc-lfn ns3-applications)
target_link_libraries(tcp-nsc-lfn ns3-internet)

set(tcp-nsc-zoo_SOURCES
    tcp-nsc-zoo.cc)

set(tcp-nsc-zoo_INCLUDES)

include_directories(${tcp-nsc-zoo_INCLUDES})

add_executable(tcp-nsc-zoo ${tcp-nsc-zoo_SOURCES})

target_link_libraries(tcp-nsc-zoo ns3-csma)
target_link_libraries(tcp-nsc-zoo ns3-internet)
target_link_libraries(tcp-nsc-zoo ns3-applications)

set(tcp-star-server_SOURCES
    tcp-star-server.cc)

set(tcp-star-server_INCLUDES)

include_directories(${tcp-star-server_INCLUDES})

add_executable(tcp-star-server ${tcp-star-server_SOURCES})

target_link_libraries(tcp-star-server ns3-point-to-point)
target_link_libraries(tcp-star-server ns3-applications)
target_link_libraries(tcp-star-server ns3-internet)

set(star_SOURCES
    star.cc)

set(star_INCLUDES)

include_directories(${star_INCLUDES})

add_executable(star ${star_SOURCES})

target_link_libraries(star ns3-netanim)
target_link_libraries(star ns3-point-to-point)
target_link_libraries(star ns3-point-to-point-layout)
target_link_libraries(star ns3-applications)
target_link_libraries(star ns3-internet)

set(tcp-bulk-send_SOURCES
    tcp-bulk-send.cc)

set(tcp-bulk-send_INCLUDES)

include_directories(${tcp-bulk-send_INCLUDES})

add_executable(tcp-bulk-send ${tcp-bulk-send_SOURCES})

target_link_libraries(tcp-bulk-send ns3-point-to-point)
target_link_libraries(tcp-bulk-send ns3-applications)
target_link_libraries(tcp-bulk-send ns3-internet)

set(tcp-pcap-nanosec-example_SOURCES
    tcp-pcap-nanosec-example.cc)

set(tcp-pcap-nanosec-example_INCLUDES)

include_directories(${tcp-pcap-nanosec-example_INCLUDES})

add_executable(tcp-pcap-nanosec-example ${tcp-pcap-nanosec-example_SOURCES})

target_link_libraries(tcp-pcap-nanosec-example ns3-point-to-point)
target_link_libraries(tcp-pcap-nanosec-example ns3-applications)
target_link_libraries(tcp-pcap-nanosec-example ns3-internet)

set(tcp-nsc-comparison_SOURCES
    tcp-nsc-comparison.cc)

set(tcp-nsc-comparison_INCLUDES)

include_directories(${tcp-nsc-comparison_INCLUDES})

add_executable(tcp-nsc-comparison ${tcp-nsc-comparison_SOURCES})

target_link_libraries(tcp-nsc-comparison ns3-point-to-point)
target_link_libraries(tcp-nsc-comparison ns3-internet)
target_link_libraries(tcp-nsc-comparison ns3-applications)
target_link_libraries(tcp-nsc-comparison ns3-flow-monitor)

set(tcp-variants-comparison_SOURCES
    tcp-variants-comparison.cc)

set(tcp-variants-comparison_INCLUDES)

include_directories(${tcp-variants-comparison_INCLUDES})

add_executable(tcp-variants-comparison ${tcp-variants-comparison_SOURCES})

target_link_libraries(tcp-variants-comparison ns3-point-to-point)
target_link_libraries(tcp-variants-comparison ns3-internet)
target_link_libraries(tcp-variants-comparison ns3-applications)
target_link_libraries(tcp-variants-comparison ns3-flow-monitor)

set(tcp-pacing_SOURCES
    tcp-pacing.cc)

set(tcp-pacing_INCLUDES)

include_directories(${tcp-pacing_INCLUDES})

add_executable(tcp-pacing ${tcp-pacing_SOURCES})

target_link_libraries(tcp-pacing ns3-point-to-point)
target_link_libraries(tcp-pacing ns3-internet)
target_link_libraries(tcp-pacing ns3-applications)
target_link_libraries(tcp-pacing ns3-flow-monitor)

