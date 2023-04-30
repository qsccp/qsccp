
set(lr-wpan-packet-print_SOURCES
    lr-wpan-packet-print.cc)

set(lr-wpan-packet-print_INCLUDES)

include_directories(${lr-wpan-packet-print_INCLUDES})

add_executable(lr-wpan-packet-print ${lr-wpan-packet-print_SOURCES})

target_link_libraries(lr-wpan-packet-print ns3-lr-wpan)

set(lr-wpan-phy-test_SOURCES
    lr-wpan-phy-test.cc)

set(lr-wpan-phy-test_INCLUDES)

include_directories(${lr-wpan-phy-test_INCLUDES})

add_executable(lr-wpan-phy-test ${lr-wpan-phy-test_SOURCES})

target_link_libraries(lr-wpan-phy-test ns3-lr-wpan)

set(lr-wpan-data_SOURCES
    lr-wpan-data.cc)

set(lr-wpan-data_INCLUDES)

include_directories(${lr-wpan-data_INCLUDES})

add_executable(lr-wpan-data ${lr-wpan-data_SOURCES})

target_link_libraries(lr-wpan-data ns3-lr-wpan)

set(lr-wpan-error-model-plot_SOURCES
    lr-wpan-error-model-plot.cc)

set(lr-wpan-error-model-plot_INCLUDES)

include_directories(${lr-wpan-error-model-plot_INCLUDES})

add_executable(lr-wpan-error-model-plot ${lr-wpan-error-model-plot_SOURCES})

target_link_libraries(lr-wpan-error-model-plot ns3-lr-wpan)
target_link_libraries(lr-wpan-error-model-plot ns3-stats)

set(lr-wpan-error-distance-plot_SOURCES
    lr-wpan-error-distance-plot.cc)

set(lr-wpan-error-distance-plot_INCLUDES)

include_directories(${lr-wpan-error-distance-plot_INCLUDES})

add_executable(lr-wpan-error-distance-plot ${lr-wpan-error-distance-plot_SOURCES})

target_link_libraries(lr-wpan-error-distance-plot ns3-lr-wpan)
target_link_libraries(lr-wpan-error-distance-plot ns3-stats)

