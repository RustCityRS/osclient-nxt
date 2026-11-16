// libs/heap/HeapInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class HeapInterface {
    public:
        class StaticInitTest;
        ~HeapInterface();
        long Instance();
        void SetInstance(HeapInterface*);
        void ClearInstance();
        bool IsInitialised();
        HeapInterface(HeapAllocatorProxy*, unsigned int);
        void GetAllocatorProxy();
        void SetGlobalAllocatorProxy(HeapAllocatorProxy*);
        void PushAllocatorProxy(HeapAllocatorProxy*);
        void PopAllocatorProxy();
        void PushHeapState(HeapState);
        void PopHeapState();
        void PushToggleHeapState();
        void PushAlignment(unsigned long);
        void PopAlignment();
        void Alloc(unsigned long);
        void AlignedAlloc(unsigned long, unsigned long);
        void Free(void*);
        void AlignedFree(void*);
        void GetFree();
        void GetUsed();
        void GetWarnings();
        void PushWarnings(unsigned int);
        void PopWarnings();
        void GetZoneContext();
        void PushZoneContext(void*, void*);
        void PopZoneContext();
        void GetZone();
        void PushZone(char const*);
        void PopZone();
        void SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const&) const;
        void SaveMemoryUsageToConsole() const;
        void SaveMemoryUsageBottomUpToConsole() const;
        void PushLeakTrackingContext();
        void PopLeakTrackingContext();
        void AreItemsAllocated();
        void PrintUsageList();
        void AssertOnMemoryLeaks();
        void CheckAllocWarnings();
        void CheckFreeWarnings();
        static /* 8 bytes */ g_pHeapInterface;
        static StaticInitTest /* 8 bytes */ g_staticInitTest; // = StaticInitTest()

        // data members, from how the methods use this: 424 bytes
        char _unknown_0[88];
        undefined4 field_88; // offset 88
        char _unknown_92[332];
    };

    class HeapInterface::StaticInitTest {
    public:
        StaticInitTest();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100c92610, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HeapInterface::~HeapInterface(): jumps straight to the base-object destructor

    // 0x100c927e0, 64 bytes, base-object destructor, inline, placed by class name
    // HeapInterface::~HeapInterface()
    void HeapInterface::~HeapInterface() {
        (&field_416)->~ThreadLocalStateStack();
        (&field_256)->~ThreadLocalStateStack();
        (&field_96)->~ThreadLocalStateStack();
        ~ThreadLocalStateStack();
    }

} // namespace jag
