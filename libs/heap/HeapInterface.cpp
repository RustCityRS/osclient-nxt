// libs/heap/HeapInterface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.heap

#include "HeapInterface.h"

namespace jag {
    // 0x103bdd1c0, 8 bytes, __common; zero-initialised
    HeapInterface::g_pHeapInterface;

    // 0x103bdd1c8, 8 bytes, __common; set at startup by ___cxx_global_var_init
    HeapInterface::StaticInitTest HeapInterface::g_staticInitTest = StaticInitTest();

    // 0x100c93190, 16 bytes, complete-object constructor, placed by class name and debug map
    // HeapInterface::StaticInitTest::StaticInitTest(): jumps straight to the base-object constructor

    // 0x100c931a0, 16 bytes, base-object constructor, placed by class name and debug map
    // HeapInterface::StaticInitTest::StaticInitTest()
    void HeapInterface::StaticInitTest::StaticInitTest() {
        *this = (StaticInitTest)0;
        *this = (StaticInitTest)1;
    }

    // 0x100c931b0, 64 bytes, placed by class name and debug map
    // HeapInterface::Instance()
    long HeapInterface::Instance() {
        if (g_pHeapInterface == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("g_pHeapInterface",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                      23, "We should initialise the g_pHeapInterface first!");
        }
        return g_pHeapInterface;
    }

    // 0x100c931f0, 80 bytes, placed by class name and debug map
    // HeapInterface::SetInstance(HeapInterface*)
    void HeapInterface::SetInstance(HeapInterface* param_1) {
        if (g_pHeapInterface != (HeapInterface*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("g_pHeapInterface == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                      29, "g_pHeapInterface should only be initialized once!");
        }
        g_pHeapInterface = param_1;
    }

    // 0x100c93240, 32 bytes, placed by class name and debug map
    // HeapInterface::ClearInstance()
    void HeapInterface::ClearInstance() {
        g_pHeapInterface = 0;
    }

    // 0x100c93260, 80 bytes, placed by class name and debug map
    // HeapInterface::IsInitialised()
    bool HeapInterface::IsInitialised() {
        if ((g_staticInitTest != '\0') && (g_pHeapInterface == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("!g_staticInitTest.m_initialised || g_pHeapInterface",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                      44, "HeapInterface (%x) not initialised before static constructors", 0);
        }
        return g_pHeapInterface != 0;
    }

    // 0x100c932b0, 144 bytes, base-object constructor, placed by class name and debug map
    // HeapInterface::HeapInterface(HeapAllocatorProxy*, unsigned int)
    void HeapInterface::HeapInterface(HeapAllocatorProxy* param_1, uint param_2) {
        new (this) ThreadLocalStateStack<HeapState, 16u, 16u, false>(1);
        new (&field_96, (ulong)param_2) ThreadLocalStateStack<unsigned long, 16u, 16u, false>();
        new (&field_256, param_1) ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>();
        new (&field_416, 0) ThreadLocalStateStack<unsigned int, 16u, 16u, false>();
    }

    // 0x100c93380, 16 bytes, complete-object constructor, placed by class name and debug map
    // HeapInterface::HeapInterface(HeapAllocatorProxy*, unsigned int): jumps straight to the base-object constructor

    // 0x100c93390, 32 bytes, placed by class name and debug map
    // HeapInterface::GetAllocatorProxy()
    void HeapInterface::GetAllocatorProxy() {
        (&field_256)->Get();
    }

    // 0x100c933e0, 32 bytes, placed by class name and debug map
    // HeapInterface::SetGlobalAllocatorProxy(HeapAllocatorProxy*)
    void HeapInterface::SetGlobalAllocatorProxy(HeapAllocatorProxy* param_1) {
        (&field_256, param_1)->SetGlobal();
    }

    // 0x100c93410, 32 bytes, placed by class name and debug map
    // HeapInterface::PushAllocatorProxy(HeapAllocatorProxy*)
    void HeapInterface::PushAllocatorProxy(HeapAllocatorProxy* param_1) {
        HeapAllocatorProxy* in_RSI;

        param_1[12].field_16.Push(in_RSI);
    }

    // 0x100c93480, 32 bytes, placed by class name and debug map
    // HeapInterface::PopAllocatorProxy()
    void HeapInterface::PopAllocatorProxy() {
        (&field_256)->Pop();
    }

    // 0x100c934e0, 16 bytes, placed by class name and debug map
    // HeapInterface::PushHeapState(HeapState)
    void HeapInterface::PushHeapState() {
        ThreadLocalStateStack<HeapState, 16u, 16u, false>::Push();
    }

    // 0x100c93540, 16 bytes, placed by class name and debug map
    // HeapInterface::PopHeapState()
    void HeapInterface::PopHeapState() {
        Pop();
    }

    // 0x100c93590, 48 bytes, placed by class name and debug map
    // HeapInterface::PushToggleHeapState()
    void HeapInterface::PushToggleHeapState() {
        int iVar1;

        iVar1 = Get();
        Push(iVar1 != 1);
    }

    // 0x100c935f0, 16 bytes, placed by class name and debug map
    // HeapInterface::PushAlignment(unsigned long)
    void HeapInterface::PushAlignment(ulong param_1) {
        ulong in_RSI;

        ((param_1 + 96))->Push(in_RSI);
    }

    // 0x100c93650, 16 bytes, placed by class name and debug map
    // HeapInterface::PopAlignment()
    void HeapInterface::PopAlignment() {
        (&field_96)->Pop();
    }

    // 0x100c936a0, 96 bytes, placed by class name and debug map
    // HeapInterface::Alloc(unsigned long)
    void HeapInterface::Alloc(ulong param_1) {
        long* plVar1;
        undefined4 uVar2;
        undefined4 uVar3;

        plVar1 = (long*)(&field_256)->Get();
        uVar2 = Get();
        uVar3 = (&field_416)->Get();
        (**(code**)(*plVar1 + 16))(plVar1, param_1, uVar2, uVar3);
    }

    // 0x100c93730, 112 bytes, placed by class name and debug map
    // HeapInterface::AlignedAlloc(unsigned long, unsigned long)
    void HeapInterface::AlignedAlloc(ulong param_1, ulong param_2) {
        long* plVar1;
        undefined4 uVar2;
        undefined4 uVar3;

        plVar1 = (long*)(&field_256)->Get();
        uVar2 = Get();
        uVar3 = (&field_416)->Get();
        (**(code**)(*plVar1 + 24))(plVar1, param_1, uVar2, param_2, uVar3);
    }

    // 0x100c937a0, 80 bytes, placed by class name and debug map
    // HeapInterface::Free(void*)
    void HeapInterface::Free(void* param_1) {
        long* plVar1;
        undefined4 uVar2;

        plVar1 = (long*)(&field_256)->Get();
        uVar2 = (&field_416)->Get();
        (**(code**)(*plVar1 + 32))(plVar1, param_1, uVar2);
    }

    // 0x100c937f0, 80 bytes, placed by class name and debug map
    // HeapInterface::AlignedFree(void*)
    void HeapInterface::AlignedFree(void* param_1) {
        long* plVar1;
        undefined4 uVar2;

        plVar1 = (long*)(&field_256)->Get();
        uVar2 = (&field_416)->Get();
        (**(code**)(*plVar1 + 40))(plVar1, param_1, uVar2);
    }

    // 0x100c93840, 32 bytes, placed by class name and debug map
    // HeapInterface::GetFree()
    void HeapInterface::GetFree() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100c93860, 32 bytes, placed by class name and debug map
    // HeapInterface::GetUsed()
    void HeapInterface::GetUsed() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x100c93880, 32 bytes, placed by class name and debug map
    // HeapInterface::GetWarnings()
    void HeapInterface::GetWarnings() {
        (&field_416)->Get();
    }

    // 0x100c938a0, 32 bytes, placed by class name and debug map
    // HeapInterface::PushWarnings(unsigned int)
    void HeapInterface::PushWarnings(uint param_1) {
        uint in_ESI;
        undefined4 in_register_0000003c;

        ((CONCAT44(in_register_0000003c, param_1) + 416))->Push(in_ESI);
    }

    // 0x100c93910, 32 bytes, placed by class name and debug map
    // HeapInterface::PopWarnings()
    void HeapInterface::PopWarnings() {
        (&field_416)->Pop();
    }

    // 0x100c93970, 32 bytes, placed by class name and debug map
    // HeapInterface::GetZoneContext()
    void HeapInterface::GetZoneContext() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 96))(plVar1);
    }

    // 0x100c93990, 48 bytes, placed by class name and debug map
    // HeapInterface::PushZoneContext(void*, void*)
    void HeapInterface::PushZoneContext(void* param_1, void* param_2) {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 104))(plVar1, param_1, param_2);
    }

    // 0x100c939c0, 32 bytes, placed by class name and debug map
    // HeapInterface::PopZoneContext()
    void HeapInterface::PopZoneContext() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 112))(plVar1);
    }

    // 0x100c939e0, 32 bytes, placed by class name and debug map
    // HeapInterface::GetZone()
    void HeapInterface::GetZone() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 120))(plVar1);
    }

    // 0x100c93a00, 48 bytes, placed by class name and debug map
    // HeapInterface::PushZone(char const*)
    void HeapInterface::PushZone(char* param_1) {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 128))(plVar1, param_1);
    }

    // 0x100c93a30, 32 bytes, placed by class name and debug map
    // HeapInterface::PopZone()
    void HeapInterface::PopZone() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 136))(plVar1);
    }

    // 0x100c93a50, 48 bytes, placed by class name and debug map
    // HeapInterface::SaveMemoryUsageToXML(std::function<void (char const*, unsigned long)> const&) const
    /* HeapInterface::SaveMemoryUsageToXML(std::function<void (char const*, unsigned long)> const&)
   const */

    void HeapInterface::SaveMemoryUsageToXML(function* param_1) {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 144))(plVar1, param_1);
    }

    // 0x100c93a80, 32 bytes, placed by class name and debug map
    // HeapInterface::SaveMemoryUsageToConsole() const
    void HeapInterface::SaveMemoryUsageToConsole() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 152))(plVar1);
    }

    // 0x100c93aa0, 32 bytes, placed by class name and debug map
    // HeapInterface::SaveMemoryUsageBottomUpToConsole() const
    void HeapInterface::SaveMemoryUsageBottomUpToConsole() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 160))(plVar1);
    }

    // 0x100c93ac0, 32 bytes, placed by class name and debug map
    // HeapInterface::PushLeakTrackingContext()
    void HeapInterface::PushLeakTrackingContext() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 64))(plVar1);
    }

    // 0x100c93ae0, 32 bytes, placed by class name and debug map
    // HeapInterface::PopLeakTrackingContext()
    void HeapInterface::PopLeakTrackingContext() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 72))(plVar1);
    }

    // 0x100c93b00, 32 bytes, placed by class name and debug map
    // HeapInterface::AreItemsAllocated()
    void HeapInterface::AreItemsAllocated() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 80))(plVar1);
    }

    // 0x100c93b20, 32 bytes, placed by class name and debug map
    // HeapInterface::PrintUsageList()
    void HeapInterface::PrintUsageList() {
        long* plVar1;

        plVar1 = (long*)(&field_256)->Get();
        (**(code**)(*plVar1 + 88))(plVar1);
    }

    // 0x100c93b40, 192 bytes, placed by class name and debug map
    // HeapInterface::AssertOnMemoryLeaks()
    void HeapInterface::AssertOnMemoryLeaks() {
        undefined8 uVar2;

        if (AreItemsAllocated(this) != '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 7,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 232,
                "**** DETECTED MEMORY LEAKS!!! ****");
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 7,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 234,
                "**** START MEMORY LEAK DUMP ****");
            PrintUsageList(this);
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 7,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 236,
                "**** END MEMORY LEAK DUMP ****");
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 237,
                "Memory leak(s) detected - see above for details");
        }
    }

    // 0x100c93c00, 240 bytes, placed by class name and debug map
    // HeapInterface::CheckAllocWarnings()
    void HeapInterface::CheckAllocWarnings() {
        byte bVar1;
        uint uVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* pcVar6;

        uVar2 = (&field_416)->Get();
        iVar3 = Get();
        bVar1 = 1;
        if (iVar3 == 1) {
            if ((uVar2 & 2) != 0) {
                uVar4 = logger::default_logger();
                pcVar6 = "Warn on alloc low\n";
                uVar5 = 260;
                goto LAB_100c93c84;
            }
        } else if ((iVar3 == 0) && ((uVar2 & 4) != 0)) {
            uVar4 = logger::default_logger();
            pcVar6 = "Warn on alloc high\n";
            uVar5 = 251;
        LAB_100c93c84:
            bVar1 = 0;
            logger::Logger::Log(
                uVar4, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", uVar5,
                pcVar6);
        }
        if ((uVar2 & 1) == 0) {
            if (!(bool)(bVar1 | (uVar2 & 32) == 0)) {
            LAB_100c93cce:
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 277,
                    "WARN_FATAL on alloc!!");
            }
        } else {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 271,
                "Warn on alloc\n");
            if ((uVar2 & 32) != 0)
                goto LAB_100c93cce;
        }
    }

    // 0x100c93cf0, 112 bytes, placed by class name and debug map
    // HeapInterface::CheckFreeWarnings()
    void HeapInterface::CheckFreeWarnings() {
        uint uVar1;
        undefined8 uVar2;

        uVar1 = (&field_416)->Get();
        if ((uVar1 & 8) != 0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 289,
                "Warn on free\n");
            if ((uVar1 & 32) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "!\"WARN_FATAL on free!!\"",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 295,
                    (char*)0);
            }
        }
    }

    // 0x100c93d60, 16 bytes, placed by debug map only (low confidence)
    // print_physical_memory(char const*)
    void print_physical_memory(char* param_1) {}

    // 0x100c94af0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&HeapInterface::g_staticInitTest) HeapInterface::StaticInitTest();
    }

} // namespace jag
