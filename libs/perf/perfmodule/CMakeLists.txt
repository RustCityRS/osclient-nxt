add_library(libs.perf.perfmodule STATIC
    ${ROOT}/_unplaced/libs/perf/perfmodule/unity_0.cpp
    PerfModuleReporter.cpp
    PerfModuleRunner.cpp
    modules/MemoryBandwidth.cpp
)
set_target_properties(libs.perf.perfmodule PROPERTIES UNITY_BUILD ON)
