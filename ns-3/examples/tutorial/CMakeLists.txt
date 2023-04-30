
set(hello-simulator_SOURCES
    hello-simulator.cc)

set(hello-simulator_INCLUDES)

include_directories(${hello-simulator_INCLUDES})

add_executable(hello-simulator ${hello-simulator_SOURCES})

target_link_libraries(hello-simulator ns3-core)

set(first_SOURCES
    first.cc)

set(first_INCLUDES)

include_directories(${first_INCLUDES})

add_executable(first ${first_SOURCES})

target_link_libraries(first ns3-core)
target_link_libraries(first ns3-point-to-point)
target_link_libraries(first ns3-internet)
target_link_libraries(first ns3-applications)

set(second_SOURCES
    second.cc)

set(second_INCLUDES)

include_directories(${second_INCLUDES})

add_executable(second ${second_SOURCES})

target_link_libraries(second ns3-core)
target_link_libraries(second ns3-point-to-point)
target_link_libraries(second ns3-csma)
target_link_libraries(second ns3-internet)
target_link_libraries(second ns3-applications)

set(third_SOURCES
    third.cc)

set(third_INCLUDES)

include_directories(${third_INCLUDES})

add_executable(third ${third_SOURCES})

target_link_libraries(third ns3-core)
target_link_libraries(third ns3-point-to-point)
target_link_libraries(third ns3-csma)
target_link_libraries(third ns3-wifi)
target_link_libraries(third ns3-internet)
target_link_libraries(third ns3-applications)

set(fourth_SOURCES
    fourth.cc)

set(fourth_INCLUDES)

include_directories(${fourth_INCLUDES})

add_executable(fourth ${fourth_SOURCES})

target_link_libraries(fourth ns3-core)

set(fifth_SOURCES
    fifth.cc)

set(fifth_INCLUDES)

include_directories(${fifth_INCLUDES})

add_executable(fifth ${fifth_SOURCES})

target_link_libraries(fifth ns3-core)
target_link_libraries(fifth ns3-point-to-point)
target_link_libraries(fifth ns3-internet)
target_link_libraries(fifth ns3-applications)

set(sixth_SOURCES
    sixth.cc)

set(sixth_INCLUDES)

include_directories(${sixth_INCLUDES})

add_executable(sixth ${sixth_SOURCES})

target_link_libraries(sixth ns3-core)
target_link_libraries(sixth ns3-point-to-point)
target_link_libraries(sixth ns3-internet)
target_link_libraries(sixth ns3-applications)

set(seventh_SOURCES
    seventh.cc)

set(seventh_INCLUDES)

include_directories(${seventh_INCLUDES})

add_executable(seventh ${seventh_SOURCES})

target_link_libraries(seventh ns3-core)
target_link_libraries(seventh ns3-stats)
target_link_libraries(seventh ns3-point-to-point)
target_link_libraries(seventh ns3-internet)
target_link_libraries(seventh ns3-applications)

