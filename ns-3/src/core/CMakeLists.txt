
set(ns3-core_SOURCES
    model/time.cc
    model/event-id.cc
    model/scheduler.cc
    model/list-scheduler.cc
    model/map-scheduler.cc
    model/heap-scheduler.cc
    model/calendar-scheduler.cc
    model/event-impl.cc
    model/simulator.cc
    model/simulator-impl.cc
    model/default-simulator-impl.cc
    model/timer.cc
    model/watchdog.cc
    model/synchronizer.cc
    model/make-event.cc
    model/log.cc
    model/breakpoint.cc
    model/type-id.cc
    model/attribute-construction-list.cc
    model/object-base.cc
    model/ref-count-base.cc
    model/object.cc
    model/test.cc
    model/random-variable-stream.cc
    model/rng-seed-manager.cc
    model/rng-stream.cc
    model/command-line.cc
    model/type-name.cc
    model/attribute.cc
    model/boolean.cc
    model/integer.cc
    model/uinteger.cc
    model/enum.cc
    model/double.cc
    model/int64x64.cc
    model/string.cc
    model/pointer.cc
    model/object-ptr-container.cc
    model/object-factory.cc
    model/global-value.cc
    model/trace-source-accessor.cc
    model/config.cc
    model/callback.cc
    model/names.cc
    model/vector.cc
    model/fatal-impl.cc
    model/system-path.cc
    helper/random-variable-stream-helper.cc
    helper/event-garbage-collector.cc
    model/hash-function.cc
    model/hash-murmur3.cc
    model/hash-fnv.cc
    model/hash.cc
    model/des-metrics.cc
    model/node-printer.cc
    model/time-printer.cc
    model/show-progress.cc
    model/unix-system-wall-clock-ms.cc
    model/int64x64-128.cc
    model/realtime-simulator-impl.cc
    model/wall-clock-synchronizer.cc
    model/system-thread.cc
    model/unix-fd-reader.cc
    model/unix-system-mutex.cc
    model/unix-system-condition.cc)

set(ns3-core_INCLUDES)

include_directories(${ns3-core_INCLUDES})

add_library(ns3-core SHARED ${ns3-core_SOURCES})

target_link_libraries(ns3-core RT)
target_link_libraries(ns3-core PTHREAD)

