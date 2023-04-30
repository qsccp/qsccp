
set(gnuplot-example_SOURCES
    gnuplot-example.cc)

set(gnuplot-example_INCLUDES)

include_directories(${gnuplot-example_INCLUDES})

add_executable(gnuplot-example ${gnuplot-example_SOURCES})

target_link_libraries(gnuplot-example ns3-network)
target_link_libraries(gnuplot-example ns3-stats)

set(double-probe-example_SOURCES
    double-probe-example.cc)

set(double-probe-example_INCLUDES)

include_directories(${double-probe-example_INCLUDES})

add_executable(double-probe-example ${double-probe-example_SOURCES})

target_link_libraries(double-probe-example ns3-network)
target_link_libraries(double-probe-example ns3-stats)

set(time-probe-example_SOURCES
    time-probe-example.cc)

set(time-probe-example_INCLUDES)

include_directories(${time-probe-example_INCLUDES})

add_executable(time-probe-example ${time-probe-example_SOURCES})

target_link_libraries(time-probe-example ns3-stats)

set(gnuplot-aggregator-example_SOURCES
    gnuplot-aggregator-example.cc)

set(gnuplot-aggregator-example_INCLUDES)

include_directories(${gnuplot-aggregator-example_INCLUDES})

add_executable(gnuplot-aggregator-example ${gnuplot-aggregator-example_SOURCES})

target_link_libraries(gnuplot-aggregator-example ns3-network)
target_link_libraries(gnuplot-aggregator-example ns3-stats)

set(gnuplot-helper-example_SOURCES
    gnuplot-helper-example.cc)

set(gnuplot-helper-example_INCLUDES)

include_directories(${gnuplot-helper-example_INCLUDES})

add_executable(gnuplot-helper-example ${gnuplot-helper-example_SOURCES})

target_link_libraries(gnuplot-helper-example ns3-network)
target_link_libraries(gnuplot-helper-example ns3-stats)

set(file-aggregator-example_SOURCES
    file-aggregator-example.cc)

set(file-aggregator-example_INCLUDES)

include_directories(${file-aggregator-example_INCLUDES})

add_executable(file-aggregator-example ${file-aggregator-example_SOURCES})

target_link_libraries(file-aggregator-example ns3-network)
target_link_libraries(file-aggregator-example ns3-stats)

set(file-helper-example_SOURCES
    file-helper-example.cc)

set(file-helper-example_INCLUDES)

include_directories(${file-helper-example_INCLUDES})

add_executable(file-helper-example ${file-helper-example_SOURCES})

target_link_libraries(file-helper-example ns3-network)
target_link_libraries(file-helper-example ns3-stats)

