
set(aodv_SOURCES
    aodv.cc)

set(aodv_INCLUDES)

include_directories(${aodv_INCLUDES})

add_executable(aodv ${aodv_SOURCES})

target_link_libraries(aodv ns3-wifi)
target_link_libraries(aodv ns3-internet)
target_link_libraries(aodv ns3-aodv)
target_link_libraries(aodv ns3-internet-apps)

