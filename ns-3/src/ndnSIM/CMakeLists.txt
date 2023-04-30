
set(version-NFD-objects_SOURCES
        ../../build/src/ndnSIM/NFD/core/version.cpp)

set(version-NFD-objects_INCLUDES
        ../../ns3/ndnSIM/NFD
        ../../ns3/ndnSIM/NFD)

include_directories(${version-NFD-objects_INCLUDES})

add_library(version-NFD-objects ${version-NFD-objects_SOURCES})

target_link_libraries(version-NFD-objects version-NFD)
target_link_libraries(version-NFD-objects versioncpp-NFD)

include_directories(
        /usr/local/include
        /usr/local/include/ns3-dev
        /usr/local/include/ns3-dev/ns3
        /usr/local/include/ns3-dev/ns3/ndnSIM/NFD
        /usr/local/include/ns3-dev/ns3/ndnSIM/NFD/daemon
        /usr/local/include/ns3-dev/ns3/ndnSIM
)

set(ns3-ndnSIM_SOURCES
        apps/ndn-app.cpp
        apps/ndn-consumer-batches.cpp
        apps/ndn-consumer-cbr.cpp
        apps/ndn-consumer-qsccp.cpp
        apps/ndn-consumer-pcon.cpp
        apps/ndn-consumer-window.cpp
        apps/ndn-consumer-zipf-mandelbrot.cpp
        apps/ndn-consumer-pcon-zipf.cpp
        apps/ndn-consumer.cpp
        apps/ndn-producer.cpp
        bindings/module-helpers.cpp
        helper/lfid/abstract-fib.cpp
        helper/lfid/fib-nexthop.cpp
        helper/lfid/ndn-global-routing-helper-lfid.cpp
        helper/lfid/remove-loops.cpp
        helper/ndn-app-helper.cpp
        helper/ndn-fib-helper.cpp
        helper/ndn-global-routing-helper.cpp
        helper/ndn-link-control-helper.cpp
        helper/ndn-network-region-table-helper.cpp
        helper/ndn-scenario-helper.cpp
        helper/ndn-stack-helper.cpp
        helper/ndn-strategy-choice-helper.cpp
        model/ndn-app-link-service.cpp
        model/ndn-block-header.cpp
        model/ndn-common.cpp
        model/ndn-global-router.cpp
        model/ndn-l3-protocol.cpp
        model/ndn-net-device-transport.cpp
        utils/batches.cpp
        utils/dummy-keychain.cpp
        utils/ndn-rtt-estimator.cpp
        utils/ndn-rtt-mean-deviation.cpp
        utils/ndn-time.cpp
        utils/topology/annotated-topology-reader.cpp
        utils/topology/rocketfuel-map-reader.cpp
        utils/topology/rocketfuel-weights-reader.cpp
        utils/tracers/l2-rate-tracer.cpp
        utils/tracers/l2-tracer.cpp
        utils/tracers/ndn-app-delay-tracer.cpp
        utils/tracers/ndn-cs-tracer.cpp
        utils/tracers/ndn-l3-rate-tracer.cpp
        utils/tracers/ndn-l3-tracer.cpp
        ndn-cxx/ndn-cxx/data.cpp
        ndn-cxx/ndn-cxx/delegation-list.cpp
        ndn-cxx/ndn-cxx/detail/cancel-handle.cpp
        ndn-cxx/ndn-cxx/detail/packet-base.cpp
        ndn-cxx/ndn-cxx/encoding/block-helpers.cpp
        ndn-cxx/ndn-cxx/encoding/block.cpp
        ndn-cxx/ndn-cxx/encoding/buffer-stream.cpp
        ndn-cxx/ndn-cxx/encoding/encoder.cpp
        ndn-cxx/ndn-cxx/encoding/estimator.cpp
        ndn-cxx/ndn-cxx/encoding/nfd-constants.cpp
        ndn-cxx/ndn-cxx/encoding/tlv.cpp
        ndn-cxx/ndn-cxx/face.cpp
        ndn-cxx/ndn-cxx/ims/in-memory-storage-entry.cpp
        ndn-cxx/ndn-cxx/ims/in-memory-storage-fifo.cpp
        ndn-cxx/ndn-cxx/ims/in-memory-storage-lfu.cpp
        ndn-cxx/ndn-cxx/ims/in-memory-storage-lru.cpp
        ndn-cxx/ndn-cxx/ims/in-memory-storage-persistent.cpp
        ndn-cxx/ndn-cxx/ims/in-memory-storage.cpp
        ndn-cxx/ndn-cxx/interest-filter.cpp
        ndn-cxx/ndn-cxx/interest.cpp
        ndn-cxx/ndn-cxx/key-locator.cpp
        ndn-cxx/ndn-cxx/link.cpp
        ndn-cxx/ndn-cxx/lp/cache-policy.cpp
        ndn-cxx/ndn-cxx/lp/geo-tag.cpp
        ndn-cxx/ndn-cxx/lp/nack-header.cpp
        ndn-cxx/ndn-cxx/lp/nack.cpp
        ndn-cxx/ndn-cxx/lp/packet.cpp
        ndn-cxx/ndn-cxx/lp/pit-token.cpp
        ndn-cxx/ndn-cxx/lp/prefix-announcement-header.cpp
        ndn-cxx/ndn-cxx/meta-info.cpp
        ndn-cxx/ndn-cxx/metadata-object.cpp
        ndn-cxx/ndn-cxx/mgmt/control-response.cpp
        ndn-cxx/ndn-cxx/mgmt/dispatcher.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/channel-status.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/command-options.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/control-command.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/control-parameters.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/controller.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/cs-info.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/face-event-notification.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/face-monitor.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/face-query-filter.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/face-status.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/fib-entry.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/forwarder-status.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/rib-entry.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/status-dataset.cpp
        ndn-cxx/ndn-cxx/mgmt/nfd/strategy-choice.cpp
        ndn-cxx/ndn-cxx/mgmt/status-dataset-context.cpp
        ndn-cxx/ndn-cxx/name-component.cpp
        ndn-cxx/ndn-cxx/name.cpp
        ndn-cxx/ndn-cxx/net/ethernet.cpp
        ndn-cxx/ndn-cxx/net/face-uri.cpp
        ndn-cxx/ndn-cxx/net/network-address.cpp
        ndn-cxx/ndn-cxx/prefix-announcement.cpp
        ndn-cxx/ndn-cxx/security/command-interest-signer.cpp
        ndn-cxx/ndn-cxx/security/digest-sha256.cpp
        ndn-cxx/ndn-cxx/security/impl/openssl-helper.cpp
        ndn-cxx/ndn-cxx/security/key-params.cpp
        ndn-cxx/ndn-cxx/security/pib/certificate-container.cpp
        ndn-cxx/ndn-cxx/security/pib/identity-container.cpp
        ndn-cxx/ndn-cxx/security/pib/identity.cpp
        ndn-cxx/ndn-cxx/security/pib/impl/identity-impl.cpp
        ndn-cxx/ndn-cxx/security/pib/impl/key-impl.cpp
        ndn-cxx/ndn-cxx/security/pib/impl/pib-memory.cpp
        ndn-cxx/ndn-cxx/security/pib/impl/pib-sqlite3.cpp
        ndn-cxx/ndn-cxx/security/pib/key-container.cpp
        ndn-cxx/ndn-cxx/security/pib/key.cpp
        ndn-cxx/ndn-cxx/security/pib/pib.cpp
        ndn-cxx/ndn-cxx/security/safe-bag.cpp
        ndn-cxx/ndn-cxx/security/security-common.cpp
        ndn-cxx/ndn-cxx/security/signature-sha256-with-ecdsa.cpp
        ndn-cxx/ndn-cxx/security/signature-sha256-with-rsa.cpp
        ndn-cxx/ndn-cxx/security/signing-helpers.cpp
        ndn-cxx/ndn-cxx/security/signing-info.cpp
        ndn-cxx/ndn-cxx/security/tpm/back-end.cpp
        ndn-cxx/ndn-cxx/security/tpm/impl/back-end-file.cpp
        ndn-cxx/ndn-cxx/security/tpm/impl/back-end-mem.cpp
        ndn-cxx/ndn-cxx/security/tpm/impl/key-handle-mem.cpp
        ndn-cxx/ndn-cxx/security/tpm/key-handle.cpp
        ndn-cxx/ndn-cxx/security/tpm/tpm.cpp
        ndn-cxx/ndn-cxx/security/transform/base64-decode.cpp
        ndn-cxx/ndn-cxx/security/transform/base64-encode.cpp
        ndn-cxx/ndn-cxx/security/transform/block-cipher.cpp
        ndn-cxx/ndn-cxx/security/transform/bool-sink.cpp
        ndn-cxx/ndn-cxx/security/transform/buffer-source.cpp
        ndn-cxx/ndn-cxx/security/transform/digest-filter.cpp
        ndn-cxx/ndn-cxx/security/transform/hex-decode.cpp
        ndn-cxx/ndn-cxx/security/transform/hex-encode.cpp
        ndn-cxx/ndn-cxx/security/transform/private-key.cpp
        ndn-cxx/ndn-cxx/security/transform/public-key.cpp
        ndn-cxx/ndn-cxx/security/transform/signer-filter.cpp
        ndn-cxx/ndn-cxx/security/transform/step-source.cpp
        ndn-cxx/ndn-cxx/security/transform/stream-sink.cpp
        ndn-cxx/ndn-cxx/security/transform/stream-source.cpp
        ndn-cxx/ndn-cxx/security/transform/strip-space.cpp
        ndn-cxx/ndn-cxx/security/transform/transform-base.cpp
        ndn-cxx/ndn-cxx/security/transform/verifier-filter.cpp
        ndn-cxx/ndn-cxx/security/v2/additional-description.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate-bundle-fetcher.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate-cache.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate-fetcher-direct-fetch.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate-fetcher-from-network.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate-fetcher-offline.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate-fetcher.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate-storage.cpp
        ndn-cxx/ndn-cxx/security/v2/certificate.cpp
        ndn-cxx/ndn-cxx/security/v2/key-chain.cpp
        ndn-cxx/ndn-cxx/security/v2/trust-anchor-container.cpp
        ndn-cxx/ndn-cxx/security/v2/trust-anchor-group.cpp
        ndn-cxx/ndn-cxx/security/v2/validation-error.cpp
        ndn-cxx/ndn-cxx/security/v2/validation-policy-command-interest.cpp
        ndn-cxx/ndn-cxx/security/v2/validation-policy-config.cpp
        ndn-cxx/ndn-cxx/security/v2/validation-policy-simple-hierarchy.cpp
        ndn-cxx/ndn-cxx/security/v2/validation-policy.cpp
        ndn-cxx/ndn-cxx/security/v2/validation-state.cpp
        ndn-cxx/ndn-cxx/security/v2/validator-config/checker.cpp
        ndn-cxx/ndn-cxx/security/v2/validator-config/filter.cpp
        ndn-cxx/ndn-cxx/security/v2/validator-config/name-relation.cpp
        ndn-cxx/ndn-cxx/security/v2/validator-config/rule.cpp
        ndn-cxx/ndn-cxx/security/v2/validator.cpp
        ndn-cxx/ndn-cxx/security/validator-config.cpp
        ndn-cxx/ndn-cxx/security/validator-null.cpp
        ndn-cxx/ndn-cxx/security/validity-period.cpp
        ndn-cxx/ndn-cxx/security/verification-helpers.cpp
        ndn-cxx/ndn-cxx/signature-info.cpp
        ndn-cxx/ndn-cxx/signature.cpp
        ndn-cxx/ndn-cxx/transport/transport.cpp
        ndn-cxx/ndn-cxx/util/config-file.cpp
        ndn-cxx/ndn-cxx/util/exception.cpp
        ndn-cxx/ndn-cxx/util/indented-stream.cpp
        ndn-cxx/ndn-cxx/util/io.cpp
        ndn-cxx/ndn-cxx/util/logger.cpp
        ndn-cxx/ndn-cxx/util/notification-subscriber.cpp
        ndn-cxx/ndn-cxx/util/random.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-backref-manager.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-backref-matcher.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-component-matcher.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-component-set-matcher.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-matcher.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-pattern-list-matcher.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-pseudo-matcher.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-repeat-matcher.cpp
        ndn-cxx/ndn-cxx/util/regex/regex-top-matcher.cpp
        ndn-cxx/ndn-cxx/util/rtt-estimator.cpp
        ndn-cxx/ndn-cxx/util/scheduler.cpp
        ndn-cxx/ndn-cxx/util/segment-fetcher.cpp
        ndn-cxx/ndn-cxx/util/sha256.cpp
        ndn-cxx/ndn-cxx/util/signal/connection.cpp
        ndn-cxx/ndn-cxx/util/signal/scoped-connection.cpp
        ndn-cxx/ndn-cxx/util/sqlite3-statement.cpp
        ndn-cxx/ndn-cxx/util/string-helper.cpp
        ndn-cxx/ndn-cxx/util/time-unit-test-clock.cpp
        ndn-cxx/ndn-cxx/util/time.cpp
        NFD/core/network.cpp
        NFD/daemon/common/city-hash.cpp
        NFD/daemon/common/config-file.cpp
        NFD/daemon/common/global.cpp
        NFD/daemon/common/privilege-helper.cpp
        NFD/daemon/face/channel.cpp
        NFD/daemon/face/face-counters.cpp
        NFD/daemon/face/face-system.cpp
        NFD/daemon/face/face.cpp
        NFD/daemon/face/generic-link-service.cpp
        NFD/daemon/face/internal-face.cpp
        NFD/daemon/face/internal-transport.cpp
        NFD/daemon/face/link-service.cpp
        NFD/daemon/face/lp-fragmenter.cpp
        NFD/daemon/face/lp-reassembler.cpp
        NFD/daemon/face/lp-reliability.cpp
        NFD/daemon/face/netdev-bound.cpp
        NFD/daemon/face/network-predicate.cpp
        NFD/daemon/face/null-face.cpp
        NFD/daemon/face/null-transport.cpp
#        NFD/daemon/face/nwfq.cpp
        NFD/daemon/face/protocol-factory.cpp
        NFD/daemon/face/socket-utils.cpp
        NFD/daemon/face/transport.cpp
        NFD/daemon/fw/access-strategy.cpp
        NFD/daemon/fw/algorithm.cpp
        NFD/daemon/fw/asf-measurements.cpp
        NFD/daemon/fw/asf-probing-module.cpp
        NFD/daemon/fw/asf-strategy.cpp
        NFD/daemon/fw/best-route-strategy.cpp
        NFD/daemon/fw/best-route-strategy2.cpp
        NFD/daemon/fw/face-table.cpp
        NFD/daemon/fw/forwarder.cpp
        NFD/daemon/fw/multicast-strategy.cpp
        NFD/daemon/fw/ncc-strategy.cpp
        NFD/daemon/fw/process-nack-traits.cpp
        NFD/daemon/fw/random-strategy.cpp
        NFD/daemon/fw/retx-suppression-exponential.cpp
        NFD/daemon/fw/retx-suppression-fixed.cpp
        NFD/daemon/fw/scope-prefix.cpp
        NFD/daemon/fw/self-learning-strategy.cpp
        NFD/daemon/fw/strategy.cpp
        NFD/daemon/fw/unsolicited-data-policy.cpp
        NFD/daemon/mgmt/command-authenticator.cpp
        NFD/daemon/mgmt/cs-manager.cpp
        NFD/daemon/mgmt/face-manager.cpp
        NFD/daemon/mgmt/fib-manager.cpp
        NFD/daemon/mgmt/forwarder-status-manager.cpp
        NFD/daemon/mgmt/general-config-section.cpp
        NFD/daemon/mgmt/log-config-section.cpp
        NFD/daemon/mgmt/manager-base.cpp
        NFD/daemon/mgmt/rib-manager.cpp
        NFD/daemon/mgmt/strategy-choice-manager.cpp
        NFD/daemon/mgmt/tables-config-section.cpp
        NFD/daemon/rib/fib-update.cpp
        NFD/daemon/rib/fib-updater.cpp
        NFD/daemon/rib/readvertise/client-to-nlsr-readvertise-policy.cpp
        NFD/daemon/rib/readvertise/host-to-gateway-readvertise-policy.cpp
        NFD/daemon/rib/readvertise/nfd-rib-readvertise-destination.cpp
        NFD/daemon/rib/readvertise/readvertise-destination.cpp
        NFD/daemon/rib/readvertise/readvertise.cpp
        NFD/daemon/rib/rib-entry.cpp
        NFD/daemon/rib/rib-update-batch.cpp
        NFD/daemon/rib/rib-update.cpp
        NFD/daemon/rib/rib.cpp
        NFD/daemon/rib/route.cpp
        NFD/daemon/rib/service.cpp
        NFD/daemon/table/cleanup.cpp
        NFD/daemon/table/cs-entry.cpp
        NFD/daemon/table/cs-policy-lru.cpp
        NFD/daemon/table/cs-policy-priority-fifo.cpp
        NFD/daemon/table/cs-policy.cpp
        NFD/daemon/table/cs.cpp
        NFD/daemon/table/dead-nonce-list.cpp
        NFD/daemon/table/fib-entry.cpp
        NFD/daemon/table/fib.cpp
        NFD/daemon/table/measurements-accessor.cpp
        NFD/daemon/table/measurements.cpp
        NFD/daemon/table/name-tree-entry.cpp
        NFD/daemon/table/name-tree-hashtable.cpp
        NFD/daemon/table/name-tree-iterator.cpp
        NFD/daemon/table/name-tree.cpp
        NFD/daemon/table/network-region-table.cpp
        NFD/daemon/table/pit-entry.cpp
        NFD/daemon/table/pit-face-record.cpp
        NFD/daemon/table/pit-in-record.cpp
        NFD/daemon/table/pit-iterator.cpp
        NFD/daemon/table/pit-out-record.cpp
        NFD/daemon/table/pit.cpp
        NFD/daemon/table/strategy-choice-entry.cpp
        NFD/daemon/table/strategy-choice.cpp 
        NFD/daemon/face/queues.cpp
        NFD/daemon/face/TokenBucket.cpp
        )

set(ns3-ndnSIM_INCLUDES
        ../..
        ../../ns3/ndnSIM/NFD
        ./NFD/core
        ./NFD/daemon
        ./NFD/rib
        ../../ns3/ndnSIM
        ../../ns3/ndnSIM/ndn-cxx
        #
        ../..
        ../../ns3/ndnSIM/NFD
        ./NFD/core
        ./NFD/daemon
        ./NFD/rib
        ../../ns3/ndnSIM
        ../../ns3/ndnSIM/ndn-cxx
        /usr/include
        /usr/include)

include_directories(${ns3-ndnSIM_INCLUDES})

add_definitions(-DHAVE_NS3_VISUALIZER=1)

add_library(ns3-ndnSIM SHARED ${ns3-ndnSIM_SOURCES})

    #target_link_libraries(ns3-ndnSIM ns3-core)
    #target_link_libraries(ns3-ndnSIM ns3-network)
    #target_link_libraries(ns3-ndnSIM ns3-point-to-point)
    #target_link_libraries(ns3-ndnSIM ns3-topology-read)
    #target_link_libraries(ns3-ndnSIM ns3-mobility)
    #target_link_libraries(ns3-ndnSIM ns3-internet)
    #target_link_libraries(ns3-ndnSIM ns3-visualizer)
    #target_link_libraries(ns3-ndnSIM version-ndn-cxx)
    #target_link_libraries(ns3-ndnSIM version-NFD-objects)
    #target_link_libraries(ns3-ndnSIM BOOST)
    #target_link_libraries(ns3-ndnSIM SQLITE3)
    #target_link_libraries(ns3-ndnSIM RT)
    #target_link_libraries(ns3-ndnSIM PTHREAD)
    #target_link_libraries(ns3-ndnSIM OPENSSL)

set(ns3module_ndnSIM_SOURCES
        ../../build/src/ndnSIM/bindings/ns3module.cc)

set(ns3module_ndnSIM_INCLUDES
        #
        bindings
        ../../build/ns3/ndnSIM/NFD
        ../../ns3/ndnSIM/NFD
        ../../build/src/ndnSIM/NFD/core
        NFD/core
        ../../build/src/ndnSIM/NFD/daemon
        NFD/daemon
        ../../build/src/ndnSIM/NFD/rib
        NFD/rib
        ../../build/ns3/ndnSIM
        ../../ns3/ndnSIM
        #
        bindings
        /home/gdcni21/Documents/qsccp/ns-3/build/ns3/ndnSIM/NFD
        /home/gdcni21/Documents/qsccp/ns-3/ns3/ndnSIM/NFD
        /home/gdcni21/Documents/qsccp/ns-3/build/src/ndnSIM/NFD/core
        /home/gdcni21/Documents/qsccp/ns-3/src/ndnSIM/NFD/core
        /home/gdcni21/Documents/qsccp/ns-3/build/src/ndnSIM/NFD/daemon
        /home/gdcni21/Documents/qsccp/ns-3/src/ndnSIM/NFD/daemon
        /home/gdcni21/Documents/qsccp/ns-3/build/src/ndnSIM/NFD/rib
        /home/gdcni21/Documents/qsccp/ns-3/src/ndnSIM/NFD/rib
        /home/gdcni21/Documents/qsccp/ns-3/build/ns3/ndnSIM
        /home/gdcni21/Documents/qsccp/ns-3/ns3/ndnSIM
        /usr/include/python3.7
        /usr/include/libxml2
        /usr/include
        /usr/include)

include_directories(${ns3module_ndnSIM_INCLUDES})

add_library(ns3module_ndnSIM SHARED ${ns3module_ndnSIM_SOURCES})

target_link_libraries(ns3module_ndnSIM ns3-antenna)
target_link_libraries(ns3module_ndnSIM ns3-aodv)
target_link_libraries(ns3module_ndnSIM ns3-applications)
target_link_libraries(ns3module_ndnSIM ns3-bridge)
target_link_libraries(ns3module_ndnSIM ns3-buildings)
target_link_libraries(ns3module_ndnSIM ns3-config-store)
target_link_libraries(ns3module_ndnSIM ns3-core)
target_link_libraries(ns3module_ndnSIM ns3-csma)
target_link_libraries(ns3module_ndnSIM ns3-csma-layout)
target_link_libraries(ns3module_ndnSIM ns3-dsdv)
target_link_libraries(ns3module_ndnSIM ns3-dsr)
target_link_libraries(ns3module_ndnSIM ns3-energy)
target_link_libraries(ns3module_ndnSIM ns3-fd-net-device)
target_link_libraries(ns3module_ndnSIM ns3-flow-monitor)
target_link_libraries(ns3module_ndnSIM ns3-internet)
target_link_libraries(ns3module_ndnSIM ns3-internet-apps)
target_link_libraries(ns3module_ndnSIM ns3-lr-wpan)
target_link_libraries(ns3module_ndnSIM ns3-lte)
target_link_libraries(ns3module_ndnSIM ns3-mesh)
target_link_libraries(ns3module_ndnSIM ns3-mobility)
target_link_libraries(ns3module_ndnSIM ns3-mpi)
target_link_libraries(ns3module_ndnSIM ns3-ndnSIM)
target_link_libraries(ns3module_ndnSIM ns3-netanim)
target_link_libraries(ns3module_ndnSIM ns3-network)
target_link_libraries(ns3module_ndnSIM ns3-nix-vector-routing)
target_link_libraries(ns3module_ndnSIM ns3-olsr)
target_link_libraries(ns3module_ndnSIM ns3-point-to-point)
target_link_libraries(ns3module_ndnSIM ns3-point-to-point-layout)
target_link_libraries(ns3module_ndnSIM ns3-propagation)
target_link_libraries(ns3module_ndnSIM ns3-sixlowpan)
target_link_libraries(ns3module_ndnSIM ns3-spectrum)
target_link_libraries(ns3module_ndnSIM ns3-stats)
target_link_libraries(ns3module_ndnSIM ns3-tap-bridge)
target_link_libraries(ns3module_ndnSIM ns3-test)
target_link_libraries(ns3module_ndnSIM ns3-topology-read)
target_link_libraries(ns3module_ndnSIM ns3-traffic-control)
target_link_libraries(ns3module_ndnSIM ns3-uan)
target_link_libraries(ns3module_ndnSIM ns3-virtual-net-device)
target_link_libraries(ns3module_ndnSIM ns3-visualizer)
target_link_libraries(ns3module_ndnSIM ns3-wave)
target_link_libraries(ns3module_ndnSIM ns3-wifi)
target_link_libraries(ns3module_ndnSIM ns3-wimax)

