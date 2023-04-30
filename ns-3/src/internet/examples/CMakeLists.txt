
set(main-simple_SOURCES
    main-simple.cc)

set(main-simple_INCLUDES)

include_directories(${main-simple_INCLUDES})

add_executable(main-simple ${main-simple_SOURCES})

target_link_libraries(main-simple ns3-network)
target_link_libraries(main-simple ns3-internet)
target_link_libraries(main-simple ns3-applications)

