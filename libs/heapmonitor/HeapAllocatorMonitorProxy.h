// libs/heapmonitor/HeapAllocatorMonitorProxy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class HeapAllocatorMonitorProxy {
    public:
        PopZoneContext();
        PushZoneContext(void*, void*);
        PopZone();
        PushZone(char const*);
        HeapAllocatorMonitorProxy();
        ~HeapAllocatorMonitorProxy();
        SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const&) const;
        SaveMemoryUsageToConsole() const;
        SaveMemoryUsageBottomUpToConsole() const;
        GetZoneContext();
        GetZone();
        GetTotalMemory() const;
        MonitorAlloc(void*, unsigned long);
        void MonitorAlignedAlloc(void*, unsigned long, unsigned long);
        MonitorFree(void*);
        void MonitorAlignedFree(void*);
        static /* 8 bytes */ m_allocations;
        static /* 8 bytes */ m_frees;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x103bdd1b0, 8 bytes, __common; zero-initialised
    HeapAllocatorMonitorProxy::m_allocations;

    // 0x103bdd1b8, 8 bytes, __common; zero-initialised
    HeapAllocatorMonitorProxy::m_frees;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::PopZoneContext();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::PushZoneContext(void*, void*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::PopZone();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::PushZone(char const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::HeapAllocatorMonitorProxy();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::~HeapAllocatorMonitorProxy();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const&) const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::SaveMemoryUsageToConsole() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorMonitorProxy::SaveMemoryUsageBottomUpToConsole() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorMonitorProxy::GetZoneContext();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorMonitorProxy::GetZone();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorMonitorProxy::GetTotalMemory() const;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    HeapAllocatorMonitorProxy::HeapAllocatorMonitorProxy();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    HeapAllocatorMonitorProxy::~HeapAllocatorMonitorProxy();

    // 0x100c92b30, 32 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HeapAllocatorMonitorProxy::MonitorAlloc(void*, unsigned long)
    /* HeapAllocatorMonitorProxy::MonitorAlignedAlloc(void*, unsigned long, unsigned long) */

    void HeapAllocatorMonitorProxy::MonitorAlignedAlloc(void* param_1, ulong param_2, ulong param_3) {
        m_allocations = m_allocations + 1;
    }

    // 0x100c92b30: the linker folded this into HeapAllocatorMonitorProxy::MonitorAlloc(void*, unsigned long), which has identical code
    HeapAllocatorMonitorProxy::MonitorAlignedAlloc(void*, unsigned long, unsigned long);

    // 0x100c92b90, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HeapAllocatorMonitorProxy::MonitorFree(void*)
    /* HeapAllocatorMonitorProxy::MonitorAlignedFree(void*) */

    void HeapAllocatorMonitorProxy::MonitorAlignedFree(void* param_1) {
        m_frees = m_frees + 1;
    }

    // 0x100c92b90: the linker folded this into HeapAllocatorMonitorProxy::MonitorFree(void*), which has identical code
    HeapAllocatorMonitorProxy::MonitorAlignedFree(void*);

} // namespace jag
