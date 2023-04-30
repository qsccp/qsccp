
set(main-attribute-value_SOURCES
    main-attribute-value.cc)

set(main-attribute-value_INCLUDES)

include_directories(${main-attribute-value_INCLUDES})

add_executable(main-attribute-value ${main-attribute-value_SOURCES})

target_link_libraries(main-attribute-value ns3-network)
target_link_libraries(main-attribute-value ns3-point-to-point)

