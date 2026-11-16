// libs/perf/perfmodule/PerfModuleReporter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.perf.perfmodule

#include "PerfModuleReporter.h"

namespace jag::perf {
    // 0x100bc4370, 80 bytes, placed by class name and debug map
    // PerfModuleReporter::FindResult(int) const
    long PerfModuleReporter::FindResult(int param_1) {
        long lVar1;
        long lVar2;
        long lVar3;
        int local_1c;

        local_1c = param_1;
        lVar1 = (&field_8, &local_1c)->find();
        lVar2 = (&field_8)->end();
        lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1 + 8;
        }
        return lVar3;
    }

    // 0x100bc43c0, 112 bytes, placed by class name and debug map
    // PerfModuleReporter::AllFinished()
    undefined8 PerfModuleReporter::AllFinished() {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;

        lVar1 = (&field_8)->HeapBeginPtr();
        lVar2 = (&field_8)->end();
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

    // 0x100bc4430, 112 bytes, placed by class name and debug map
    // PerfModuleReporter::AllSucceeded()
    undefined8 PerfModuleReporter::AllSucceeded() {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;

        lVar1 = (&field_8)->HeapBeginPtr();
        lVar2 = (&field_8)->end();
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

    // 0x100bc44a0, 144 bytes, placed by class name and debug map
    // PerfModuleReporter::GetSummedResults(int const*, unsigned long) const
    int PerfModuleReporter::GetSummedResults(int* param_1, ulong param_2) {
        long lVar1;
        ulong uVar2;
        int iVar3;

        if (param_1 == (int*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pModuleIDs != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      53, (char*)0);
        }
        iVar3 = 0;
        if (param_2 != 0) {
            uVar2 = 0;
            do {
                lVar1 = FindResult(this, param_1[uVar2]);
                if (lVar1 != 0) {
                    iVar3 = iVar3 + *(int*)(lVar1 + 20);
                }
                uVar2 = uVar2 + 1;
            } while (param_2 != uVar2);
        }
        return iVar3;
    }

    // 0x100bc4530, 192 bytes, placed by class name and debug map
    // PerfModuleReporter::GetWeightedSummedResults(int const*, float const*, unsigned long) const
    void PerfModuleReporter::GetWeightedSummedResults(int* param_1, float* param_2, ulong param_3) {
        long lVar1;
        ulong uVar2;
        float fVar3;

        if ((param_1 == (int*)0) || (param_2 == (float*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pModuleIDs != nullptr && pModuleWeights != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      70, (char*)0);
        }
        if (param_3 == 0) {
            fVar3 = 0.0;
        } else {
            fVar3 = 0.0;
            uVar2 = 0;
            do {
                lVar1 = FindResult(this, param_1[uVar2]);
                if (lVar1 != 0) {
                    fVar3 = fVar3 + (float)*(uint*)(lVar1 + 20) * param_2[uVar2];
                }
                uVar2 = uVar2 + 1;
            } while (param_3 != uVar2);
        }
        math::RoundFloatToInt(fVar3);
    }

    // 0x100bc45f0, 192 bytes, placed by class name and debug map
    // PerfModuleReporter::GetAverageResult(int const*, unsigned long) const
    ulong PerfModuleReporter::GetAverageResult(int* param_1, ulong param_2) {
        long lVar1;
        int iVar2;
        int iVar3;
        ulong uVar4;

        if (param_1 == (int*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pModuleIDs != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      87, (char*)0);
        }
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("numModuleIDs != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      88, (char*)0);
        }
        uVar4 = 0;
        iVar2 = 0;
        iVar3 = 0;
        do {
            lVar1 = FindResult(this, param_1[uVar4]);
            if (lVar1 != 0) {
                iVar3 = iVar3 + *(int*)(lVar1 + 20);
                iVar2 = iVar2 + 1;
            }
            uVar4 = uVar4 + 1;
        } while (param_2 != uVar4);
        if (iVar2 == 0) {
            uVar4 = 0;
        } else {
            uVar4 = (long)iVar3 / (long)iVar2 & 4294967295;
        }
        return uVar4;
    }

    // 0x100bc46b0, 240 bytes, placed by class name and debug map
    // PerfModuleReporter::GetWeightedAverageResult(int const*, float const*, unsigned long) const
    undefined8 PerfModuleReporter::GetWeightedAverageResult(int* param_1, float* param_2, ulong param_3) {
        long lVar1;
        undefined8 uVar2;
        ulong uVar3;
        float fVar4;
        float local_34;

        if ((param_1 == (int*)0) || (param_2 == (float*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pModuleIDs != nullptr && pModuleWeights != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleReporter.cpp",
                      113, (char*)0);
        }
        local_34 = 0.0;
        fVar4 = 0.0;
        if (param_3 != 0) {
            fVar4 = 0.0;
            uVar3 = 0;
            local_34 = 0.0;
            do {
                lVar1 = FindResult(this, param_1[uVar3]);
                if (lVar1 != 0) {
                    local_34 = local_34 + (float)*(uint*)(lVar1 + 20) * param_2[uVar3];
                    fVar4 = fVar4 + param_2[uVar3];
                }
                uVar3 = uVar3 + 1;
            } while (param_3 != uVar3);
        }
        uVar2 = 0;
        if (fVar4 != 0.0) {
            uVar2 = math::RoundFloatToInt(local_34 / fVar4);
        }
        return uVar2;
    }

    // 0x100bc47a0, 448 bytes, placed by class name and debug map
    // PerfModuleReporter::PrintResults() const
    void PerfModuleReporter::PrintResults() {
        undefined4 uVar1;
        undefined8 uVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;

        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                            "PerfModuleReporter.cpp",
                            141, "PERF MODULE RESULTS");
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                            "PerfModuleReporter.cpp",
                            142, "-------------------------------");
        lVar3 = (&field_8)->HeapBeginPtr();
        lVar4 = (&field_8)->end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 40) {
            uVar2 = logger::default_logger();
            uVar5 = (*(EditLine**)(lVar3 + 8))->GetText();
            logger::Logger::Log(uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                                "PerfModuleReporter.cpp",
                                148, "\n\tModule Name: %s", uVar5);
            uVar2 = logger::default_logger();
            uVar1 = *(undefined4*)(lVar3 + 28);
            uVar5 = (*(Desc**)(lVar3 + 8))->GetUnits();
            logger::Logger::Log(uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                                "PerfModuleReporter.cpp",
                                149, "\t\tResult: %u %s", uVar1, uVar5);
            uVar2 = logger::default_logger();
            logger::Logger::Log((double)*(float*)(lVar3 + 20), uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                                "PerfModuleReporter.cpp",
                                150, "\t\tElapsed Time: %f seconds");
            uVar2 = logger::default_logger();
            logger::Logger::Log((double)*(float*)(lVar3 + 24), uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                                "PerfModuleReporter.cpp",
                                151, "\t\tRun Time: %f seconds");
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                            "PerfModuleReporter.cpp",
                            153, "-------------------------------");
    }

} // namespace jag::perf
