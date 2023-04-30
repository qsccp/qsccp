
set(ns3-lte_SOURCES
    model/lte-common.cc
    model/lte-spectrum-phy.cc
    model/lte-spectrum-signal-parameters.cc
    model/lte-phy.cc
    model/lte-enb-phy.cc
    model/lte-ue-phy.cc
    model/lte-spectrum-value-helper.cc
    model/lte-amc.cc
    model/lte-enb-rrc.cc
    model/lte-ue-rrc.cc
    model/lte-rrc-sap.cc
    model/lte-rrc-protocol-ideal.cc
    model/lte-rrc-protocol-real.cc
    model/lte-rlc-sap.cc
    model/lte-rlc.cc
    model/lte-rlc-sequence-number.cc
    model/lte-rlc-header.cc
    model/lte-rlc-am-header.cc
    model/lte-rlc-tm.cc
    model/lte-rlc-um.cc
    model/lte-rlc-am.cc
    model/lte-rlc-tag.cc
    model/lte-rlc-sdu-status-tag.cc
    model/lte-pdcp-sap.cc
    model/lte-pdcp.cc
    model/lte-pdcp-header.cc
    model/lte-pdcp-tag.cc
    model/eps-bearer.cc
    model/lte-radio-bearer-info.cc
    model/lte-net-device.cc
    model/lte-enb-net-device.cc
    model/lte-ue-net-device.cc
    model/lte-control-messages.cc
    helper/lte-helper.cc
    helper/lte-stats-calculator.cc
    helper/epc-helper.cc
    helper/no-backhaul-epc-helper.cc
    helper/point-to-point-epc-helper.cc
    helper/radio-bearer-stats-calculator.cc
    helper/radio-bearer-stats-connector.cc
    helper/phy-stats-calculator.cc
    helper/mac-stats-calculator.cc
    helper/phy-tx-stats-calculator.cc
    helper/phy-rx-stats-calculator.cc
    helper/radio-environment-map-helper.cc
    helper/lte-hex-grid-enb-topology-helper.cc
    helper/lte-global-pathloss-database.cc
    model/rem-spectrum-phy.cc
    model/ff-mac-common.cc
    model/ff-mac-csched-sap.cc
    model/ff-mac-sched-sap.cc
    model/lte-mac-sap.cc
    model/ff-mac-scheduler.cc
    model/lte-enb-cmac-sap.cc
    model/lte-ue-cmac-sap.cc
    model/rr-ff-mac-scheduler.cc
    model/lte-enb-mac.cc
    model/lte-ue-mac.cc
    model/lte-radio-bearer-tag.cc
    model/eps-bearer-tag.cc
    model/lte-phy-tag.cc
    model/lte-enb-phy-sap.cc
    model/lte-enb-cphy-sap.cc
    model/lte-ue-phy-sap.cc
    model/lte-ue-cphy-sap.cc
    model/lte-interference.cc
    model/lte-chunk-processor.cc
    model/pf-ff-mac-scheduler.cc
    model/fdmt-ff-mac-scheduler.cc
    model/tdmt-ff-mac-scheduler.cc
    model/tta-ff-mac-scheduler.cc
    model/fdbet-ff-mac-scheduler.cc
    model/tdbet-ff-mac-scheduler.cc
    model/fdtbfq-ff-mac-scheduler.cc
    model/tdtbfq-ff-mac-scheduler.cc
    model/pss-ff-mac-scheduler.cc
    model/cqa-ff-mac-scheduler.cc
    model/epc-gtpu-header.cc
    model/epc-gtpc-header.cc
    model/epc-enb-application.cc
    model/epc-sgw-application.cc
    model/epc-pgw-application.cc
    model/epc-mme-application.cc
    model/epc-x2-sap.cc
    model/epc-x2-header.cc
    model/epc-x2.cc
    model/epc-tft.cc
    model/epc-tft-classifier.cc
    model/lte-mi-error-model.cc
    model/lte-vendor-specific-parameters.cc
    model/epc-enb-s1-sap.cc
    model/epc-s1ap-sap.cc
    model/epc-s11-sap.cc
    model/lte-as-sap.cc
    model/epc-ue-nas.cc
    model/lte-harq-phy.cc
    model/lte-asn1-header.cc
    model/lte-rrc-header.cc
    model/lte-handover-management-sap.cc
    model/lte-handover-algorithm.cc
    model/a2-a4-rsrq-handover-algorithm.cc
    model/a3-rsrp-handover-algorithm.cc
    model/no-op-handover-algorithm.cc
    model/lte-anr-sap.cc
    model/lte-anr.cc
    model/lte-ffr-algorithm.cc
    model/lte-ffr-sap.cc
    model/lte-ffr-rrc-sap.cc
    model/lte-fr-no-op-algorithm.cc
    model/lte-fr-hard-algorithm.cc
    model/lte-fr-strict-algorithm.cc
    model/lte-fr-soft-algorithm.cc
    model/lte-ffr-soft-algorithm.cc
    model/lte-ffr-enhanced-algorithm.cc
    model/lte-ffr-distributed-algorithm.cc
    model/lte-ue-power-control.cc
    model/lte-ccm-rrc-sap.cc
    model/lte-ue-ccm-rrc-sap.cc
    model/lte-ccm-mac-sap.cc
    model/lte-enb-component-carrier-manager.cc
    model/lte-ue-component-carrier-manager.cc
    model/no-op-component-carrier-manager.cc
    model/simple-ue-component-carrier-manager.cc
    model/component-carrier.cc
    helper/cc-helper.cc
    model/component-carrier-ue.cc
    model/component-carrier-enb.cc
    helper/emu-epc-helper.cc)

set(ns3-lte_INCLUDES)

include_directories(${ns3-lte_INCLUDES})

add_library(ns3-lte SHARED ${ns3-lte_SOURCES})

target_link_libraries(ns3-lte ns3-core)
target_link_libraries(ns3-lte ns3-network)
target_link_libraries(ns3-lte ns3-spectrum)
target_link_libraries(ns3-lte ns3-stats)
target_link_libraries(ns3-lte ns3-buildings)
target_link_libraries(ns3-lte ns3-virtual-net-device)
target_link_libraries(ns3-lte ns3-point-to-point)
target_link_libraries(ns3-lte ns3-applications)
target_link_libraries(ns3-lte ns3-internet)
target_link_libraries(ns3-lte ns3-csma)
target_link_libraries(ns3-lte ns3-fd-net-device)

