
set(traffic-control_SOURCES
    traffic-control.cc)

set(traffic-control_INCLUDES)

include_directories(${traffic-control_INCLUDES})

add_executable(traffic-control ${traffic-control_SOURCES})

target_link_libraries(traffic-control ns3-internet)
target_link_libraries(traffic-control ns3-point-to-point)
target_link_libraries(traffic-control ns3-applications)
target_link_libraries(traffic-control ns3-traffic-control)
target_link_libraries(traffic-control ns3-flow-monitor)

set(queue-discs-benchmark_SOURCES
    queue-discs-benchmark.cc)

set(queue-discs-benchmark_INCLUDES)

include_directories(${queue-discs-benchmark_INCLUDES})

add_executable(queue-discs-benchmark ${queue-discs-benchmark_SOURCES})

target_link_libraries(queue-discs-benchmark ns3-internet)
target_link_libraries(queue-discs-benchmark ns3-point-to-point)
target_link_libraries(queue-discs-benchmark ns3-applications)
target_link_libraries(queue-discs-benchmark ns3-internet-apps)
target_link_libraries(queue-discs-benchmark ns3-traffic-control)
target_link_libraries(queue-discs-benchmark ns3-flow-monitor)

set(red-vs-fengadaptive_SOURCES
    red-vs-fengadaptive.cc)

set(red-vs-fengadaptive_INCLUDES)

include_directories(${red-vs-fengadaptive_INCLUDES})

add_executable(red-vs-fengadaptive ${red-vs-fengadaptive_SOURCES})

target_link_libraries(red-vs-fengadaptive ns3-point-to-point)
target_link_libraries(red-vs-fengadaptive ns3-point-to-point-layout)
target_link_libraries(red-vs-fengadaptive ns3-internet)
target_link_libraries(red-vs-fengadaptive ns3-applications)
target_link_libraries(red-vs-fengadaptive ns3-traffic-control)

set(red-vs-nlred_SOURCES
    red-vs-nlred.cc)

set(red-vs-nlred_INCLUDES)

include_directories(${red-vs-nlred_INCLUDES})

add_executable(red-vs-nlred ${red-vs-nlred_SOURCES})

target_link_libraries(red-vs-nlred ns3-point-to-point)
target_link_libraries(red-vs-nlred ns3-point-to-point-layout)
target_link_libraries(red-vs-nlred ns3-internet)
target_link_libraries(red-vs-nlred ns3-applications)
target_link_libraries(red-vs-nlred ns3-traffic-control)

set(tbf-example_SOURCES
    tbf-example.cc)

set(tbf-example_INCLUDES)

include_directories(${tbf-example_INCLUDES})

add_executable(tbf-example ${tbf-example_SOURCES})

target_link_libraries(tbf-example ns3-internet)
target_link_libraries(tbf-example ns3-point-to-point)
target_link_libraries(tbf-example ns3-applications)
target_link_libraries(tbf-example ns3-traffic-control)

set(cobalt-vs-codel_SOURCES
    cobalt-vs-codel.cc)

set(cobalt-vs-codel_INCLUDES)

include_directories(${cobalt-vs-codel_INCLUDES})

add_executable(cobalt-vs-codel ${cobalt-vs-codel_SOURCES})

target_link_libraries(cobalt-vs-codel ns3-internet)
target_link_libraries(cobalt-vs-codel ns3-point-to-point)
target_link_libraries(cobalt-vs-codel ns3-applications)
target_link_libraries(cobalt-vs-codel ns3-traffic-control)

