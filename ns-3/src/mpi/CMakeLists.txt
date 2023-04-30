
set(ns3-mpi_SOURCES
    model/distributed-simulator-impl.cc
    model/granted-time-window-mpi-interface.cc
    model/mpi-receiver.cc
    model/null-message-simulator-impl.cc
    model/null-message-mpi-interface.cc
    model/remote-channel-bundle.cc
    model/remote-channel-bundle-manager.cc
    model/mpi-interface.cc)

set(ns3-mpi_INCLUDES)

include_directories(${ns3-mpi_INCLUDES})

add_library(ns3-mpi SHARED ${ns3-mpi_SOURCES})

target_link_libraries(ns3-mpi ns3-core)
target_link_libraries(ns3-mpi ns3-network)

