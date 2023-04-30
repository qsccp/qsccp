
set(ns3-network_SOURCES
    model/address.cc
    model/application.cc
    model/buffer.cc
    model/byte-tag-list.cc
    model/channel.cc
    model/channel-list.cc
    model/chunk.cc
    model/header.cc
    model/nix-vector.cc
    model/node.cc
    model/node-list.cc
    model/net-device.cc
    model/packet.cc
    model/packet-metadata.cc
    model/packet-tag-list.cc
    model/socket.cc
    model/socket-factory.cc
    model/tag.cc
    model/tag-buffer.cc
    model/trailer.cc
    utils/address-utils.cc
    utils/ascii-file.cc
    utils/crc32.cc
    utils/data-rate.cc
    utils/drop-tail-queue.cc
    utils/dynamic-queue-limits.cc
    utils/error-channel.cc
    utils/error-model.cc
    utils/ethernet-header.cc
    utils/ethernet-trailer.cc
    utils/flow-id-tag.cc
    utils/inet-socket-address.cc
    utils/inet6-socket-address.cc
    utils/ipv4-address.cc
    utils/ipv6-address.cc
    utils/mac16-address.cc
    utils/mac48-address.cc
    utils/mac64-address.cc
    utils/llc-snap-header.cc
    utils/output-stream-wrapper.cc
    utils/packetbb.cc
    utils/packet-burst.cc
    utils/packet-socket.cc
    utils/packet-socket-address.cc
    utils/packet-socket-factory.cc
    utils/pcap-file.cc
    utils/pcap-file-wrapper.cc
    utils/queue.cc
    utils/queue-item.cc
    utils/queue-limits.cc
    utils/queue-size.cc
    utils/net-device-queue-interface.cc
    utils/radiotap-header.cc
    utils/simple-channel.cc
    utils/simple-net-device.cc
    utils/sll-header.cc
    utils/packet-socket-client.cc
    utils/packet-socket-server.cc
    utils/packet-data-calculators.cc
    utils/packet-probe.cc
    utils/mac8-address.cc
    helper/application-container.cc
    helper/net-device-container.cc
    helper/node-container.cc
    helper/packet-socket-helper.cc
    helper/trace-helper.cc
    helper/delay-jitter-estimation.cc
    helper/simple-net-device-helper.cc)

set(ns3-network_INCLUDES)

include_directories(${ns3-network_INCLUDES})

add_library(ns3-network SHARED ${ns3-network_SOURCES})

target_link_libraries(ns3-network ns3-core)
target_link_libraries(ns3-network ns3-stats)

