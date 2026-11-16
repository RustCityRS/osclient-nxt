// libs/perf/perfmodule/PerfModuleRunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.perf.perfmodule

namespace jag::perf {
    class PerfModuleRunner {
    public:
        PerfModuleRunner(unsigned long);
        void AddModule(PerfModule*);
        void RemoveModule(PerfModule const*);
        RunModules(PerfModuleReporter&, float);

        // data members, from how the methods use this: 16 bytes
        PerfModule** field_0; // offset 0
        PerfModule** field_8; // offset 8
    };

    // 0x100bc4980, 64 bytes, base-object constructor, placed by class name and debug map
    // PerfModuleRunner::PerfModuleRunner(unsigned long)
    void PerfModuleRunner::PerfModuleRunner(ulong param_1) {
        new (this) eastl::vector<PerfModule*, eastl::allocator>();
        reserve(param_1);
    }

    // 0x100bc4a20, 16 bytes, complete-object constructor, placed by class name and debug map
    // PerfModuleRunner::PerfModuleRunner(unsigned long): jumps straight to the base-object constructor

    // 0x100bc4a30, 160 bytes, placed by class name and debug map
    // PerfModuleRunner::AddModule(PerfModule*)
    void PerfModuleRunner::AddModule(PerfModule* param_1) {
        ulong uVar1;
        ulong uVar2;
        function** ppfVar3;
        function** ppfVar4;
        PerfModule* local_20;

        local_20 = param_1;
        if (param_1 == (PerfModule*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pPerfModule != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                      "PerfModuleRunner.cpp",
                      17, (char*)0);
        }
        if (param_1 != (PerfModule*)0) {
            uVar1 = size();
            uVar2 = capacity();
            if (uVar1 < uVar2) {
                ppfVar3 = (function**)HeapBeginPtr();
                ppfVar4 = (function**)end();
                ppfVar3 =
                    eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                        ppfVar3, ppfVar4, (function**)&local_20);
                ppfVar4 = (function**)end();
                if (ppfVar3 == ppfVar4) {
                    push_back(&local_20);
                }
            }
        }
    }

    // 0x100bc4b20, 96 bytes, placed by class name and debug map
    // PerfModuleRunner::RemoveModule(PerfModule const*)
    void PerfModuleRunner::RemoveModule(PerfModule* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        PerfModule** ppPVar3;
        PerfModule** ppPVar4;
        PerfModule* local_20;

        local_20 = param_1;
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppPVar3 = (PerfModule**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                ppfVar1, ppfVar2, (function**)&local_20);
        ppPVar4 = (PerfModule**)end();
        if (ppPVar3 != ppPVar4) {
            erase(ppPVar3);
        }
    }

    // 0x100bc4bd0, 368 bytes, placed by class name and debug map
    // PerfModuleRunner::RunModules(PerfModuleReporter&, float)
    undefined8 PerfModuleRunner::RunModules(PerfModuleReporter* param_1, float param_2) {
        int iVar1;
        long* plVar2;
        long* plVar3;
        ulonglong uVar4;
        Layout* this_00;
        vector* pvVar5;
        long lVar6;
        long lVar7;
        SystemTimer* this_01;
        undefined8 in_R8;
        undefined8 in_R9;
        undefined8 uVar9;
        undefined1 auVar10[16];
        double dVar11;
        undefined1 auVar12[16];
        undefined4 local_34;

        plVar2 = (long*)HeapBeginPtr();
        plVar3 = (long*)end();
        if (plVar2 != plVar3) {
            do {
                local_34 = 0;
                uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
                auVar10._8_4_ = (int)(uVar4 >> 32);
                auVar10._0_8_ = uVar4;
                auVar10._12_4_ = 1160773632;
                dVar11 = (auVar10._8_8_ - 1.9342813113834067e+25) +
                         ((double)CONCAT44(1127219200, (int)uVar4) - 4503599627370496.0);
                this_01 = (SystemTimer*)*plVar2;
                (**(code**)(*(long*)this_01 + 16))();
                uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_01);
                auVar12._8_4_ = (int)(uVar4 >> 32);
                auVar12._0_8_ = uVar4;
                auVar12._12_4_ = 1160773632;
                uVar9 = ::abs((((auVar12._8_8_ - 1.9342813113834067e+25) +
                                ((double)CONCAT44(1127219200, (int)uVar4) - 4503599627370496.0)) -
                               dVar11) *
                              0.001);
                this_00 = (Layout*)(*plVar2)->second();
                pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)&local_34);
                lVar6 = param_1->GetResult(*(int*)pvVar5);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pModuleResult != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/perf/perfmodule/"
                              "PerfModuleRunner.cpp",
                              51, (char*)0, in_R8, in_R9, uVar9);
                }
                this = (PerfModuleRunner*)*plVar2;
                iVar1 = (*(code*)field_0[3])(this, lVar6, local_34);
                if (iVar1 == 2) {
                    lVar7 = 4;
                LAB_100bc4c15:
                    this = (PerfModuleRunner*)*plVar2;
                    (*(code*)field_0[lVar7])(this, lVar6);
                } else if (iVar1 == 1) {
                    lVar7 = 5;
                    goto LAB_100bc4c15;
                }
                plVar2 = plVar2 + 1;
            } while (plVar2 != plVar3);
        }
        return 1;
    }

} // namespace jag::perf

// 0x100bc4d40, 16 bytes, placed by debug map only (low confidence)
// abs(double)
double abs(double param_1) {
    return ABS(param_1);
}
