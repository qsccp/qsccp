
set(object-names_SOURCES
    object-names.cc)

set(object-names_INCLUDES)

include_directories(${object-names_INCLUDES})

add_executable(object-names ${object-names_SOURCES})

target_link_libraries(object-names ns3-core)
target_link_libraries(object-names ns3-csma)
target_link_libraries(object-names ns3-internet)
target_link_libraries(object-names ns3-applications)

