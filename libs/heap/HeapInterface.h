// libs/heap/HeapInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class HeapInterface {
    public:
        class StaticInitTest;
        ~HeapInterface();
        HeapInterface* Instance();
        void SetInstance(HeapInterface* heapInterface);
        void ClearInstance();
        bool IsInitialised();
        HeapInterface(HeapAllocatorProxy* heapAllocatorProxy, unsigned int arg2);
        void GetAllocatorProxy();
        void SetGlobalAllocatorProxy(HeapAllocatorProxy* heapAllocatorProxy);
        void PushAllocatorProxy(HeapAllocatorProxy* heapAllocatorProxy);
        void PopAllocatorProxy();
        void PushHeapState(HeapState heapState);
        void PopHeapState();
        void PushToggleHeapState();
        void PushAlignment(unsigned long arg1);
        void PopAlignment();
        void Alloc(unsigned long arg1);
        void AlignedAlloc(unsigned long arg1, unsigned long arg2);
        void Free(void* arg1);
        void AlignedFree(void* arg1);
        void GetFree();
        void GetUsed();
        void GetWarnings();
        void PushWarnings(unsigned int arg1);
        void PopWarnings();
        void GetZoneContext();
        void PushZoneContext(void* arg1, void* arg2);
        void PopZoneContext();
        void GetZone();
        void PushZone(const char* str);
        void PopZone();
        void SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const& callback) const;
        void SaveMemoryUsageToConsole() const;
        void SaveMemoryUsageBottomUpToConsole() const;
        void PushLeakTrackingContext();
        void PopLeakTrackingContext();
        void AreItemsAllocated();
        void PrintUsageList();
        void AssertOnMemoryLeaks();
        void CheckAllocWarnings();
        void CheckFreeWarnings();
        static int64_t g_pHeapInterface;
        static StaticInitTest g_staticInitTest; // = StaticInitTest()

    private:
        uint8_t _unknown_0[88];
        uint32_t field_88;
        uint8_t _unknown_92[332];
    };

    class HeapInterface::StaticInitTest {
    public:
        StaticInitTest();

        uint8_t _unknown_0[1];
    };

    // 0x100c927e0
    HeapInterface::~HeapInterface() {
        field_416.~ThreadLocalStateStack();
        field_256.~ThreadLocalStateStack();
        field_96.~ThreadLocalStateStack();
    }

} // namespace jag
