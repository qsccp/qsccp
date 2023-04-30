
set(main-grid-topology_SOURCES
    main-grid-topology.cc)

set(main-grid-topology_INCLUDES)

include_directories(${main-grid-topology_INCLUDES})

add_executable(main-grid-topology ${main-grid-topology_SOURCES})

target_link_libraries(main-grid-topology ns3-core)
target_link_libraries(main-grid-topology ns3-mobility)
target_link_libraries(main-grid-topology ns3-network)

set(main-random-topology_SOURCES
    main-random-topology.cc)

set(main-random-topology_INCLUDES)

include_directories(${main-random-topology_INCLUDES})

add_executable(main-random-topology ${main-random-topology_SOURCES})

target_link_libraries(main-random-topology ns3-core)
target_link_libraries(main-random-topology ns3-mobility)

set(main-random-walk_SOURCES
    main-random-walk.cc)

set(main-random-walk_INCLUDES)

include_directories(${main-random-walk_INCLUDES})

add_executable(main-random-walk ${main-random-walk_SOURCES})

target_link_libraries(main-random-walk ns3-core)
target_link_libraries(main-random-walk ns3-mobility)

set(mobility-trace-example_SOURCES
    mobility-trace-example.cc)

set(mobility-trace-example_INCLUDES)

include_directories(${mobility-trace-example_INCLUDES})

add_executable(mobility-trace-example ${mobility-trace-example_SOURCES})

target_link_libraries(mobility-trace-example ns3-core)
target_link_libraries(mobility-trace-example ns3-mobility)
target_link_libraries(mobility-trace-example ns3-network)

set(ns2-mobility-trace_SOURCES
    ns2-mobility-trace.cc)

set(ns2-mobility-trace_INCLUDES)

include_directories(${ns2-mobility-trace_INCLUDES})

add_executable(ns2-mobility-trace ${ns2-mobility-trace_SOURCES})

target_link_libraries(ns2-mobility-trace ns3-core)
target_link_libraries(ns2-mobility-trace ns3-mobility)

set(bonnmotion-ns2-example_SOURCES
    bonnmotion-ns2-example.cc)

set(bonnmotion-ns2-example_INCLUDES)

include_directories(${bonnmotion-ns2-example_INCLUDES})

add_executable(bonnmotion-ns2-example ${bonnmotion-ns2-example_SOURCES})

target_link_libraries(bonnmotion-ns2-example ns3-core)
target_link_libraries(bonnmotion-ns2-example ns3-mobility)

