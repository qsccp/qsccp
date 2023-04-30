
set(dsdv-manet_SOURCES
    dsdv-manet.cc)

set(dsdv-manet_INCLUDES)

include_directories(${dsdv-manet_INCLUDES})

add_executable(dsdv-manet ${dsdv-manet_SOURCES})

target_link_libraries(dsdv-manet ns3-wifi)
target_link_libraries(dsdv-manet ns3-internet)
target_link_libraries(dsdv-manet ns3-dsdv)
target_link_libraries(dsdv-manet ns3-applications)

