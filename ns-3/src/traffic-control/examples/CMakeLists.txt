
set(red-tests_SOURCES
    red-tests.cc)

set(red-tests_INCLUDES)

include_directories(${red-tests_INCLUDES})

add_executable(red-tests ${red-tests_SOURCES})

target_link_libraries(red-tests ns3-point-to-point)
target_link_libraries(red-tests ns3-internet)
target_link_libraries(red-tests ns3-applications)
target_link_libraries(red-tests ns3-flow-monitor)
target_link_libraries(red-tests ns3-traffic-control)

set(red-vs-ared_SOURCES
    red-vs-ared.cc)

set(red-vs-ared_INCLUDES)

include_directories(${red-vs-ared_INCLUDES})

add_executable(red-vs-ared ${red-vs-ared_SOURCES})

target_link_libraries(red-vs-ared ns3-point-to-point)
target_link_libraries(red-vs-ared ns3-point-to-point-layout)
target_link_libraries(red-vs-ared ns3-internet)
target_link_libraries(red-vs-ared ns3-applications)
target_link_libraries(red-vs-ared ns3-traffic-control)

set(adaptive-red-tests_SOURCES
    adaptive-red-tests.cc)

set(adaptive-red-tests_INCLUDES)

include_directories(${adaptive-red-tests_INCLUDES})

add_executable(adaptive-red-tests ${adaptive-red-tests_SOURCES})

target_link_libraries(adaptive-red-tests ns3-point-to-point)
target_link_libraries(adaptive-red-tests ns3-internet)
target_link_libraries(adaptive-red-tests ns3-applications)
target_link_libraries(adaptive-red-tests ns3-flow-monitor)
target_link_libraries(adaptive-red-tests ns3-traffic-control)

set(pfifo-vs-red_SOURCES
    pfifo-vs-red.cc)

set(pfifo-vs-red_INCLUDES)

include_directories(${pfifo-vs-red_INCLUDES})

add_executable(pfifo-vs-red ${pfifo-vs-red_SOURCES})

target_link_libraries(pfifo-vs-red ns3-point-to-point)
target_link_libraries(pfifo-vs-red ns3-point-to-point-layout)
target_link_libraries(pfifo-vs-red ns3-internet)
target_link_libraries(pfifo-vs-red ns3-applications)
target_link_libraries(pfifo-vs-red ns3-traffic-control)

set(codel-vs-pfifo-basic-test_SOURCES
    codel-vs-pfifo-basic-test.cc)

set(codel-vs-pfifo-basic-test_INCLUDES)

include_directories(${codel-vs-pfifo-basic-test_INCLUDES})

add_executable(codel-vs-pfifo-basic-test ${codel-vs-pfifo-basic-test_SOURCES})

target_link_libraries(codel-vs-pfifo-basic-test ns3-point-to-point)
target_link_libraries(codel-vs-pfifo-basic-test ns3-network)
target_link_libraries(codel-vs-pfifo-basic-test ns3-internet)
target_link_libraries(codel-vs-pfifo-basic-test ns3-applications)
target_link_libraries(codel-vs-pfifo-basic-test ns3-traffic-control)

set(codel-vs-pfifo-asymmetric_SOURCES
    codel-vs-pfifo-asymmetric.cc)

set(codel-vs-pfifo-asymmetric_INCLUDES)

include_directories(${codel-vs-pfifo-asymmetric_INCLUDES})

add_executable(codel-vs-pfifo-asymmetric ${codel-vs-pfifo-asymmetric_SOURCES})

target_link_libraries(codel-vs-pfifo-asymmetric ns3-point-to-point)
target_link_libraries(codel-vs-pfifo-asymmetric ns3-network)
target_link_libraries(codel-vs-pfifo-asymmetric ns3-internet)
target_link_libraries(codel-vs-pfifo-asymmetric ns3-applications)
target_link_libraries(codel-vs-pfifo-asymmetric ns3-traffic-control)

set(pie-example_SOURCES
    pie-example.cc)

set(pie-example_INCLUDES)

include_directories(${pie-example_INCLUDES})

add_executable(pie-example ${pie-example_SOURCES})

target_link_libraries(pie-example ns3-point-to-point)
target_link_libraries(pie-example ns3-internet)
target_link_libraries(pie-example ns3-applications)
target_link_libraries(pie-example ns3-flow-monitor)
target_link_libraries(pie-example ns3-traffic-control)

