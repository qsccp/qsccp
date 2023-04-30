
set(ns3-antenna_SOURCES
    model/angles.cc
    model/antenna-model.cc
    model/isotropic-antenna-model.cc
    model/cosine-antenna-model.cc
    model/parabolic-antenna-model.cc)

set(ns3-antenna_INCLUDES)

include_directories(${ns3-antenna_INCLUDES})

add_library(ns3-antenna SHARED ${ns3-antenna_SOURCES})

target_link_libraries(ns3-antenna ns3-core)

