
set(ns3-stats_SOURCES
    helper/file-helper.cc
    helper/gnuplot-helper.cc
    model/data-calculator.cc
    model/time-data-calculators.cc
    model/data-output-interface.cc
    model/omnet-data-output.cc
    model/data-collector.cc
    model/gnuplot.cc
    model/data-collection-object.cc
    model/probe.cc
    model/boolean-probe.cc
    model/double-probe.cc
    model/time-probe.cc
    model/uinteger-8-probe.cc
    model/uinteger-16-probe.cc
    model/uinteger-32-probe.cc
    model/time-series-adaptor.cc
    model/file-aggregator.cc
    model/gnuplot-aggregator.cc
    model/get-wildcard-matches.cc
    model/sqlite-data-output.cc)

set(ns3-stats_INCLUDES)

include_directories(${ns3-stats_INCLUDES})

add_library(ns3-stats SHARED ${ns3-stats_SOURCES})

target_link_libraries(ns3-stats ns3-core)
target_link_libraries(ns3-stats SQLITE3)

