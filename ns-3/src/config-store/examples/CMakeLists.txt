
set(config-store-save_SOURCES
    config-store-save.cc)

set(config-store-save_INCLUDES)

include_directories(${config-store-save_INCLUDES})

add_executable(config-store-save ${config-store-save_SOURCES})

target_link_libraries(config-store-save ns3-core)
target_link_libraries(config-store-save ns3-config-store)

