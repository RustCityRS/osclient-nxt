// libs/heap/HeapInterface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.heap

#include "HeapInterface.h"

namespace jag {
    // 0x103bdd1c0
    int64_t HeapInterface::g_pHeapInterface;

    // 0x103bdd1c8, set at startup by ___cxx_global_var_init
    HeapInterface::StaticInitTest HeapInterface::g_staticInitTest = StaticInitTest();

    // 0x100c931a0
    HeapInterface::StaticInitTest::StaticInitTest() {
        *this = (StaticInitTest)0;
        *this = (StaticInitTest)1;
    }

    // 0x100c931b0
    HeapInterface* HeapInterface::Instance() {
        if (g_pHeapInterface == nullptr) {
            LogAssert("g_pHeapInterface",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                      23, "We should initialise the g_pHeapInterface first!");
        }
        return g_pHeapInterface;
    }

    // 0x100c931f0
    void HeapInterface::SetInstance(HeapInterface* heapInterface) {
        if (g_pHeapInterface != nullptr) {
            LogAssert("g_pHeapInterface == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                      29, "g_pHeapInterface should only be initialized once!");
        }
        g_pHeapInterface = heapInterface;
    }

    // 0x100c93240
    void HeapInterface::ClearInstance() {
        g_pHeapInterface = 0;
    }

    // 0x100c93260
    bool HeapInterface::IsInitialised() {
        if ((g_staticInitTest != '\0') && (g_pHeapInterface == 0)) {
            LogAssert("!g_staticInitTest.m_initialised || g_pHeapInterface",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                      44, "HeapInterface (%x) not initialised before static constructors", 0);
        }
        return g_pHeapInterface != 0;
    }

    // 0x100c932b0
    HeapInterface::HeapInterface(HeapAllocatorProxy* heapAllocatorProxy, unsigned int arg2)
        : ThreadLocalStateStack<HeapState, 16u, 16u, false>(1), field_96((unsigned long)arg2),
          field_256(heapAllocatorProxy), field_416(0) {}

    // 0x100c93390
    void HeapInterface::GetAllocatorProxy() {
        field_256.Get();
    }

    // 0x100c933e0
    void HeapInterface::SetGlobalAllocatorProxy(HeapAllocatorProxy* heapAllocatorProxy) {
        field_256.SetGlobal(heapAllocatorProxy);
    }

    // 0x100c93410
    void HeapInterface::PushAllocatorProxy(HeapAllocatorProxy* heapAllocatorProxy) {
        field_256.Push(heapAllocatorProxy);
    }

    // 0x100c93480
    void HeapInterface::PopAllocatorProxy() {
        field_256.Pop();
    }

    // 0x100c934e0
    void HeapInterface::PushHeapState(HeapState heapState) {
        Push(heapState);
    }

    // 0x100c93540
    void HeapInterface::PopHeapState() {
        Pop();
    }

    // 0x100c93590
    void HeapInterface::PushToggleHeapState() {
        int iVar1 = Get();
        Push((unsigned int)(iVar1 != 1));
    }

    // 0x100c935f0
    void HeapInterface::PushAlignment(unsigned long arg1) {
        field_96.Push(arg1);
    }

    // 0x100c93650
    void HeapInterface::PopAlignment() {
        field_96.Pop();
    }

    // 0x100c936a0
    void HeapInterface::Alloc(unsigned long arg1) {
        auto plVar1 = field_256.Get();
        uint32_t uVar2 = Get();
        uint32_t uVar3 = field_416.Get();
        (**(void (**)(...))(*plVar1 + 16))(plVar1, arg1, uVar2, uVar3);
    }

    // 0x100c93730
    void HeapInterface::AlignedAlloc(unsigned long arg1, unsigned long arg2) {
        auto plVar1 = field_256.Get();
        uint32_t uVar2 = Get();
        uint32_t uVar3 = field_416.Get();
        (**(void (**)(...))(*plVar1 + 24))(plVar1, arg1, uVar2, arg2, uVar3);
    }

    // 0x100c937a0
    void HeapInterface::Free(void* arg1) {
        auto plVar1 = field_256.Get();
        uint32_t uVar2 = field_416.Get();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1, uVar2);
    }

    // 0x100c937f0
    void HeapInterface::AlignedFree(void* arg1) {
        auto plVar1 = field_256.Get();
        uint32_t uVar2 = field_416.Get();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1, uVar2);
    }

    // 0x100c93840
    void HeapInterface::GetFree() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x100c93860
    void HeapInterface::GetUsed() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x100c93880
    void HeapInterface::GetWarnings() {
        field_416.Get();
    }

    // 0x100c938a0
    void HeapInterface::PushWarnings(unsigned int arg1) {
        field_416.Push(arg1);
    }

    // 0x100c93910
    void HeapInterface::PopWarnings() {
        field_416.Pop();
    }

    // 0x100c93970
    void HeapInterface::GetZoneContext() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 96))(plVar1);
    }

    // 0x100c93990
    void HeapInterface::PushZoneContext(void* arg1, void* arg2) {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 104))(plVar1, arg1, arg2);
    }

    // 0x100c939c0
    void HeapInterface::PopZoneContext() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 112))(plVar1);
    }

    // 0x100c939e0
    void HeapInterface::GetZone() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 120))(plVar1);
    }

    // 0x100c93a00
    void HeapInterface::PushZone(const char* str) {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 128))(plVar1, str);
    }

    // 0x100c93a30
    void HeapInterface::PopZone() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 136))(plVar1);
    }

    // 0x100c93a50
    void HeapInterface::SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const& callback) const {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 144))(plVar1, callback);
    }

    // 0x100c93a80
    void HeapInterface::SaveMemoryUsageToConsole() const {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 152))(plVar1);
    }

    // 0x100c93aa0
    void HeapInterface::SaveMemoryUsageBottomUpToConsole() const {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 160))(plVar1);
    }

    // 0x100c93ac0
    void HeapInterface::PushLeakTrackingContext() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 64))(plVar1);
    }

    // 0x100c93ae0
    void HeapInterface::PopLeakTrackingContext() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 72))(plVar1);
    }

    // 0x100c93b00
    void HeapInterface::AreItemsAllocated() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 80))(plVar1);
    }

    // 0x100c93b20
    void HeapInterface::PrintUsageList() {
        auto plVar1 = field_256.Get();
        (**(void (**)(...))(*plVar1 + 88))(plVar1);
    }

    // 0x100c93b40
    void HeapInterface::AssertOnMemoryLeaks() {
        Logger* pLVar2;

        if (AreItemsAllocated() != '\0') {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                        232, "**** DETECTED MEMORY LEAKS!!! ****");
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                        234, "**** START MEMORY LEAK DUMP ****");
            PrintUsageList();
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                        236, "**** END MEMORY LEAK DUMP ****");
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 237,
                "Memory leak(s) detected - see above for details");
        }
    }

    // 0x100c93c00
    void HeapInterface::CheckAllocWarnings() {
        Logger* pLVar4;
        char* str2;

        unsigned int uVar2 = field_416.Get();
        int iVar3 = Get();
        uint8_t bVar1 = 1;
        if (iVar3 == 1) {
            if ((uVar2 & 2) != 0) {
                pLVar4 = logger::default_logger();
                str2 = "Warn on alloc low\n";
                iVar3 = 260;
                goto LAB_100c93c84;
            }
        } else if ((iVar3 == 0) && ((uVar2 & 4) != 0)) {
            pLVar4 = logger::default_logger();
            str2 = "Warn on alloc high\n";
            iVar3 = 251;
        LAB_100c93c84:
            bVar1 = 0;
            pLVar4->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                        iVar3, str2);
        }
        if ((uVar2 & 1) == 0) {
            if (!(bVar1 | (uVar2 & 32) == 0)) {
            LAB_100c93cce:
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 277,
                    "WARN_FATAL on alloc!!");
            }
        } else {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                        271, "Warn on alloc\n");
            if ((uVar2 & 32) != 0)
                goto LAB_100c93cce;
        }
    }

    // 0x100c93cf0
    void HeapInterface::CheckFreeWarnings() {
        unsigned int uVar1 = field_416.Get();
        if ((uVar1 & 8) != 0) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp",
                      289, "Warn on free\n");
            if ((uVar1 & 32) != 0) {
                LogAssert(
                    "!\"WARN_FATAL on free!!\"",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/HeapInterface.cpp", 295,
                    nullptr);
            }
        }
    }

    // 0x100c93d60
    void print_physical_memory(const char* str) {}

} // namespace jag
