
set(simple-error-model_SOURCES
    simple-error-model.cc)

set(simple-error-model_INCLUDES)

include_directories(${simple-error-model_INCLUDES})

add_executable(simple-error-model ${simple-error-model_SOURCES})

target_link_libraries(simple-error-model ns3-point-to-point)
target_link_libraries(simple-error-model ns3-internet)
target_link_libraries(simple-error-model ns3-applications)

