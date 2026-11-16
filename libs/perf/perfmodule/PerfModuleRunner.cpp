// libs/perf/perfmodule/PerfModuleRunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.perf.perfmodule

namespace jag::perf {
    class PerfModuleRunner {
    public:
        PerfModuleRunner(unsigned long arg1);
        void AddModule(PerfModule* perfModule);
        void RemoveModule(const PerfModule* perfModule);
        uint64_t RunModules(PerfModuleReporter& perfModuleReporter, float arg2);

    private:
        PerfModule** field_0;
        SideBarData* field_8;
    };

    // 0x100bc4980
    PerfModuleRunner::PerfModuleRunner(unsigned long arg1) {
        new (this) eastl::vector<PerfModule*>();
        reserve(arg1);
    }

    // 0x100bc4a30
    void PerfModuleRunner::AddModule(PerfModule* perfModule) {
        unsigned long uVar1;
        unsigned long uVar2;
        function<bool_(int, int, int, int)>** ppfVar3;
        function<bool_(int, int, int, int)>** ppfVar4;

        PerfModule* local_20 = perfModule;
        if (perfModule == nullptr) {
            LogAssert("pPerfModule != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleRunner.cpp",
                      17, nullptr);
        }
        if (perfModule != nullptr) {
            uVar1 = size();
            uVar2 = capacity();
            if (uVar1 < uVar2) {
                ppfVar3 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
                ppfVar4 = (function<bool_(int, int, int, int)>**)end();
                ppfVar3 =
                    eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                        ppfVar3, ppfVar4, local_20);
                ppfVar4 = (function<bool_(int, int, int, int)>**)end();
                if (ppfVar3 == ppfVar4) {
                    push_back(local_20);
                }
            }
        }
    }

    // 0x100bc4b20
    void PerfModuleRunner::RemoveModule(const PerfModule* perfModule) {
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;

        PerfModule* local_20 = perfModule;
        arg1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        arg2 = (function<bool_(int, int, int, int)>**)end();
        PerfModule** arg1_00 = (PerfModule**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(arg1, arg2,
                                                                                                             local_20);
        auto ppPVar1 = end();
        if (arg1_00 != ppPVar1) {
            erase(arg1_00);
        }
    }

    // 0x100bc4bd0
    uint64_t PerfModuleRunner::RunModules(PerfModuleReporter& perfModuleReporter, float arg2) {
        int iVar1;
        unsigned long long uVar4;
        Layout* this_00;
        int* piVar5;
        long lVar6;
        long lVar7;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t uVar8;
        uint8_t auVar9[16];
        double dVar10;
        uint8_t auVar11[16];
        uint32_t local_34;

        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        if (puVar2 != puVar3) {
            do {
                local_34 = 0;
                uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                auVar9._8_4_ = (int)(uVar4 >> 32);
                auVar9._0_8_ = uVar4;
                auVar9._12_4_ = 1160773632;
                dVar10 = (auVar9._8_8_ - 1.9342813113834067e+25) +
                         ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)uVar4)) - 4503599627370496.0);
                (**(void (**)(...))(*(long*)*puVar2 + 16))((long*)*puVar2, &local_34);
                uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                auVar11._8_4_ = (int)(uVar4 >> 32);
                auVar11._0_8_ = uVar4;
                auVar11._12_4_ = 1160773632;
                uVar8 =
                    ::abs((((auVar11._8_8_ - 1.9342813113834067e+25) +
                            ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)uVar4)) - 4503599627370496.0)) -
                           dVar10) *
                          0.001);
                this_00 = (Layout*)(*puVar2)->second();
                piVar5 = (int*)this_00->SSOBeginPtr();
                lVar6 = perfModuleReporter.GetResult(*piVar5);
                if (lVar6 == 0) {
                    LogAssert("pModuleResult != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                              "PerfModuleRunner.cpp",
                              51, nullptr, in_R8, in_R9, uVar8);
                }
                iVar1 = (**(void (**)(...))(*(long*)*puVar2 + 24))((long*)*puVar2, lVar6, local_34);
                if (iVar1 == 2) {
                    lVar7 = 4;
                LAB_100bc4c15:
                    (**(void (**)(...))(*(long*)*puVar2 + lVar7 * 8))((long*)*puVar2, lVar6);
                } else if (iVar1 == 1) {
                    lVar7 = 5;
                    goto LAB_100bc4c15;
                }
                puVar2 = puVar2 + 1;
            } while (puVar2 != puVar3);
        }
        return 1;
    }

} // namespace jag::perf

// 0x100bc4d40
double abs(double arg1) {
    return ABS(arg1);
}
