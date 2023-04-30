
set(ns3-config-store_SOURCES
    model/attribute-iterator.cc
    model/config-store.cc
    model/attribute-default-iterator.cc
    model/file-config.cc
    model/raw-text-config.cc)

set(ns3-config-store_INCLUDES)

include_directories(${ns3-config-store_INCLUDES})

add_library(ns3-config-store SHARED ${ns3-config-store_SOURCES})

target_link_libraries(ns3-config-store ns3-core)
target_link_libraries(ns3-config-store ns3-network)

