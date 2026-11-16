// libs/perf/perfmodule/PerfModuleReporter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.perf.perfmodule

#include "PerfModuleReporter.h"

namespace jag::perf {
    // 0x100bc4370
    long PerfModuleReporter::FindResult(int arg1) const {
        long lVar1 =
            eastl::vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>::find(field_8);
        long lVar2 = field_8.end();
        long lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1 + 8;
        }
        return lVar3;
    }

    // 0x100bc43c0
    uint64_t PerfModuleReporter::AllFinished() {
        uint64_t uVar3;
        long lVar4;

        long lVar1 = field_8.HeapBeginPtr();
        long lVar2 = field_8.end();
        if (lVar1 == lVar2) {
            uVar3 = 1;
        } else {
            uVar3 = 1;
            do {
                lVar4 = lVar1 + 40;
                if (1 < *(int*)(lVar1 + 16) - 1U) {
                    uVar3 = 0;
                    break;
                }
                lVar1 = lVar4;
            } while (lVar4 != lVar2);
        }
        return uVar3;
    }

    // 0x100bc4430
    uint64_t PerfModuleReporter::AllSucceeded() {
        uint64_t uVar3;
        long lVar4;

        long lVar1 = field_8.HeapBeginPtr();
        long lVar2 = field_8.end();
        if (lVar1 == lVar2) {
            uVar3 = 1;
        } else {
            uVar3 = 1;
            do {
                lVar4 = lVar1 + 40;
                if (*(int*)(lVar1 + 16) != 2) {
                    uVar3 = 0;
                    break;
                }
                lVar1 = lVar4;
            } while (lVar4 != lVar2);
        }
        return uVar3;
    }

    // 0x100bc44a0
    int PerfModuleReporter::GetSummedResults(const int* arg1, unsigned long arg2) const {
        long lVar1;
        unsigned long uVar2;

        if (arg1 == nullptr) {
            LogAssert("pModuleIDs != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      53, nullptr);
        }
        int iVar3 = 0;
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                lVar1 = FindResult(arg1[uVar2]);
                if (lVar1 != 0) {
                    iVar3 = iVar3 + *(int*)(lVar1 + 20);
                }
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
        }
        return iVar3;
    }

    // 0x100bc4530
    void PerfModuleReporter::GetWeightedSummedResults(const int* arg1, const float* arg2, unsigned long arg3) const {
        long lVar1;
        unsigned long uVar2;
        float arg1_00;

        if ((arg1 == nullptr) || (arg2 == nullptr)) {
            LogAssert("pModuleIDs != nullptr && pModuleWeights != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      70, nullptr);
        }
        if (arg3 == 0) {
            arg1_00 = 0.0;
        } else {
            arg1_00 = 0.0;
            uVar2 = 0;
            do {
                lVar1 = FindResult(arg1[uVar2]);
                if (lVar1 != 0) {
                    arg1_00 = arg1_00 + (float)*(unsigned int*)(lVar1 + 20) * arg2[uVar2];
                }
                uVar2 = uVar2 + 1;
            } while (arg3 != uVar2);
        }
        math::RoundFloatToInt(arg1_00);
    }

    // 0x100bc45f0
    unsigned long PerfModuleReporter::GetAverageResult(const int* arg1, unsigned long arg2) const {
        long lVar1;

        if (arg1 == nullptr) {
            LogAssert("pModuleIDs != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      87, nullptr);
        }
        if (arg2 == 0) {
            LogAssert("numModuleIDs != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      88, nullptr);
        }
        unsigned long uVar4 = 0;
        int iVar2 = 0;
        int iVar3 = 0;
        do {
            lVar1 = FindResult(arg1[uVar4]);
            if (lVar1 != 0) {
                iVar3 = iVar3 + *(int*)(lVar1 + 20);
                iVar2 = iVar2 + 1;
            }
            uVar4 = uVar4 + 1;
        } while (arg2 != uVar4);
        if (iVar2 == 0) {
            uVar4 = 0;
        } else {
            uVar4 = (long)iVar3 / (long)iVar2 & 4294967295;
        }
        return uVar4;
    }

    // 0x100bc46b0
    uint64_t PerfModuleReporter::GetWeightedAverageResult(const int* arg1, const float* arg2,
                                                          unsigned long arg3) const {
        long lVar1;
        unsigned long uVar3;

        if ((arg1 == nullptr) || (arg2 == nullptr)) {
            LogAssert("pModuleIDs != nullptr && pModuleWeights != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      113, nullptr);
        }
        float local_34 = 0.0;
        float fVar4 = 0.0;
        if (arg3 != 0) {
            fVar4 = 0.0;
            uVar3 = 0;
            local_34 = 0.0;
            do {
                lVar1 = FindResult(arg1[uVar3]);
                if (lVar1 != 0) {
                    local_34 = local_34 + (float)*(unsigned int*)(lVar1 + 20) * arg2[uVar3];
                    fVar4 = fVar4 + arg2[uVar3];
                }
                uVar3 = uVar3 + 1;
            } while (arg3 != uVar3);
        }
        uint64_t uVar2 = 0;
        if (fVar4 != 0.0) {
            uVar2 = math::RoundFloatToInt(local_34 / fVar4);
        }
        return uVar2;
    }

    // 0x100bc47a0
    void PerfModuleReporter::PrintResults() const {
        unsigned int uVar1;
        uint64_t uVar5;

        auto pLVar2 = logger::default_logger();
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                    "PerfModuleReporter.cpp",
                    141, "PERF MODULE RESULTS");
        pLVar2 = logger::default_logger();
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                    "PerfModuleReporter.cpp",
                    142, "-------------------------------");
        long lVar3 = field_8.HeapBeginPtr();
        long lVar4 = field_8.end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 40) {
            pLVar2 = logger::default_logger();
            uVar5 = (*(EditLine**)(lVar3 + 8))->GetText();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                        "PerfModuleReporter.cpp",
                        148, "\n\tModule Name: %s", uVar5);
            pLVar2 = logger::default_logger();
            uVar1 = *(unsigned int*)(lVar3 + 28);
            uVar5 = (*(Desc**)(lVar3 + 8))->GetUnits();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                        "PerfModuleReporter.cpp",
                        149, "\t\tResult: %u %s", (unsigned long)uVar1, uVar5);
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                        "PerfModuleReporter.cpp",
                        150, "\t\tElapsed Time: %f seconds", (double)*(float*)(lVar3 + 20));
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                        "PerfModuleReporter.cpp",
                        151, "\t\tRun Time: %f seconds", (double)*(float*)(lVar3 + 24));
        }
        pLVar2 = logger::default_logger();
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                    "PerfModuleReporter.cpp",
                    153, "-------------------------------");
    }

} // namespace jag::perf
