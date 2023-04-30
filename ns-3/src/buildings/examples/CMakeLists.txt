
set(buildings-pathloss-profiler_SOURCES
    buildings-pathloss-profiler.cc)

set(buildings-pathloss-profiler_INCLUDES)

include_directories(${buildings-pathloss-profiler_INCLUDES})

add_executable(buildings-pathloss-profiler ${buildings-pathloss-profiler_SOURCES})

target_link_libraries(buildings-pathloss-profiler ns3-buildings)

