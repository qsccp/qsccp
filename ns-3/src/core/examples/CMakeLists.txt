
set(main-callback_SOURCES
    main-callback.cc)

set(main-callback_INCLUDES)

include_directories(${main-callback_INCLUDES})

add_executable(main-callback ${main-callback_SOURCES})

target_link_libraries(main-callback ns3-core)

set(sample-simulator_SOURCES
    sample-simulator.cc)

set(sample-simulator_INCLUDES)

include_directories(${sample-simulator_INCLUDES})

add_executable(sample-simulator ${sample-simulator_SOURCES})

target_link_libraries(sample-simulator ns3-core)

set(main-ptr_SOURCES
    main-ptr.cc)

set(main-ptr_INCLUDES)

include_directories(${main-ptr_INCLUDES})

add_executable(main-ptr ${main-ptr_SOURCES})

target_link_libraries(main-ptr ns3-core)

set(main-random-variable-stream_SOURCES
    main-random-variable-stream.cc)

set(main-random-variable-stream_INCLUDES)

include_directories(${main-random-variable-stream_INCLUDES})

add_executable(main-random-variable-stream ${main-random-variable-stream_SOURCES})

target_link_libraries(main-random-variable-stream ns3-core)
target_link_libraries(main-random-variable-stream ns3-config-store)
target_link_libraries(main-random-variable-stream ns3-stats)

set(sample-random-variable_SOURCES
    sample-random-variable.cc)

set(sample-random-variable_INCLUDES)

include_directories(${sample-random-variable_INCLUDES})

add_executable(sample-random-variable ${sample-random-variable_SOURCES})

target_link_libraries(sample-random-variable ns3-core)

set(sample-random-variable-stream_SOURCES
    sample-random-variable-stream.cc)

set(sample-random-variable-stream_INCLUDES)

include_directories(${sample-random-variable-stream_INCLUDES})

add_executable(sample-random-variable-stream ${sample-random-variable-stream_SOURCES})

target_link_libraries(sample-random-variable-stream ns3-core)

set(command-line-example_SOURCES
    command-line-example.cc)

set(command-line-example_INCLUDES)

include_directories(${command-line-example_INCLUDES})

add_executable(command-line-example ${command-line-example_SOURCES})

target_link_libraries(command-line-example ns3-core)

set(hash-example_SOURCES
    hash-example.cc)

set(hash-example_INCLUDES)

include_directories(${hash-example_INCLUDES})

add_executable(hash-example ${hash-example_SOURCES})

target_link_libraries(hash-example ns3-core)

set(sample-log-time-format_SOURCES
    sample-log-time-format.cc)

set(sample-log-time-format_INCLUDES)

include_directories(${sample-log-time-format_INCLUDES})

add_executable(sample-log-time-format ${sample-log-time-format_SOURCES})

target_link_libraries(sample-log-time-format ns3-core)

set(test-string-value-formatting_SOURCES
    test-string-value-formatting.cc)

set(test-string-value-formatting_INCLUDES)

include_directories(${test-string-value-formatting_INCLUDES})

add_executable(test-string-value-formatting ${test-string-value-formatting_SOURCES})

target_link_libraries(test-string-value-formatting ns3-core)

set(sample-show-progress_SOURCES
    sample-show-progress.cc)

set(sample-show-progress_INCLUDES)

include_directories(${sample-show-progress_INCLUDES})

add_executable(sample-show-progress ${sample-show-progress_SOURCES})

target_link_libraries(sample-show-progress ns3-core)

set(main-test-sync_SOURCES
    main-test-sync.cc)

set(main-test-sync_INCLUDES)

include_directories(${main-test-sync_INCLUDES})

add_executable(main-test-sync ${main-test-sync_SOURCES})

target_link_libraries(main-test-sync ns3-network)

