// libs/heapmonitor/HeapAllocatorMonitorProxy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class HeapAllocatorMonitorProxy {
    public:
        void PopZoneContext();
        void PushZoneContext(void* arg1, void* arg2);
        void PopZone();
        void PushZone(const char* arg1);
        HeapAllocatorMonitorProxy();
        ~HeapAllocatorMonitorProxy();
        void SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const& arg1) const;
        void SaveMemoryUsageToConsole() const;
        void SaveMemoryUsageBottomUpToConsole() const;
        uint64_t GetZoneContext();
        uint64_t GetZone();
        uint64_t GetTotalMemory() const;
        void MonitorAlloc(void* arg1, unsigned long arg2);
        void MonitorAlignedAlloc(void* arg1, unsigned long arg2, unsigned long arg3);
        void MonitorFree(void* arg1);
        void MonitorAlignedFree(void* arg1);
        static int64_t m_allocations;
        static int64_t m_frees;

        uint8_t _unknown_0[1];
    };

    // 0x103bdd1b0
    int64_t HeapAllocatorMonitorProxy::m_allocations;

    // 0x103bdd1b8
    int64_t HeapAllocatorMonitorProxy::m_frees;

    // 0x100009e70: HeapAllocatorMonitorProxy::PopZoneContext() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::PushZoneContext(void*, void*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::PopZone() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::PushZone(char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::HeapAllocatorMonitorProxy() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::~HeapAllocatorMonitorProxy() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::SaveMemoryUsageToXML(std::function<void (char const*, unsigned long)> const&) const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::SaveMemoryUsageToConsole() const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorMonitorProxy::SaveMemoryUsageBottomUpToConsole() const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: HeapAllocatorMonitorProxy::GetZoneContext() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: HeapAllocatorMonitorProxy::GetZone() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: HeapAllocatorMonitorProxy::GetTotalMemory() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100c92b30
    void HeapAllocatorMonitorProxy::MonitorAlloc(void* arg1, unsigned long arg2) {
        m_allocations = m_allocations + 1;
    }

    // 0x100c92b30: HeapAllocatorMonitorProxy::MonitorAlignedAlloc(void*, unsigned long, unsigned long) has the same machine code as HeapAllocatorMonitorProxy::MonitorAlloc(void*, unsigned long)

    // 0x100c92b90
    void HeapAllocatorMonitorProxy::MonitorFree(void* arg1) {
        m_frees = m_frees + 1;
    }

    // 0x100c92b90: HeapAllocatorMonitorProxy::MonitorAlignedFree(void*) has the same machine code as HeapAllocatorMonitorProxy::MonitorFree(void*)

} // namespace jag
