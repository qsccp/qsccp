
set(ns3-fd-net-device_SOURCES
    model/fd-net-device.cc
    helper/fd-net-device-helper.cc
    helper/encode-decode.cc
    helper/creator-utils.cc
    helper/tap-fd-net-device-helper.cc
    helper/emu-fd-net-device-helper.cc)

set(ns3-fd-net-device_INCLUDES)

include_directories(${ns3-fd-net-device_INCLUDES})

add_library(ns3-fd-net-device SHARED ${ns3-fd-net-device_SOURCES})

target_link_libraries(ns3-fd-net-device ns3-network)

set(tap-device-creator_SOURCES
    helper/tap-device-creator.cc
    helper/encode-decode.cc
    helper/creator-utils.cc)

add_executable(tap-device-creator ${tap-device-creator_SOURCES})
set(raw-sock-creator_SOURCES
    helper/raw-sock-creator.cc
    helper/encode-decode.cc
    helper/creator-utils.cc)

add_executable(raw-sock-creator ${raw-sock-creator_SOURCES})
