
set(mesh_SOURCES
    mesh.cc)

set(mesh_INCLUDES)

include_directories(${mesh_INCLUDES})

add_executable(mesh ${mesh_SOURCES})

target_link_libraries(mesh ns3-internet)
target_link_libraries(mesh ns3-mobility)
target_link_libraries(mesh ns3-wifi)
target_link_libraries(mesh ns3-mesh)
target_link_libraries(mesh ns3-applications)

