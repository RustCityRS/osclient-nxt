// libs/heap/HeapAllocatorProxy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class HeapAllocatorProxy {
    public:
        // virtual methods in vtable order
        virtual ~HeapAllocatorProxy();
        bool GetCallStackGrabbingEnabled() const;
        void GrabCallStack(unsigned long* arg1, unsigned int arg2);
        void PopZoneContext();
        void PrintUsageList();
        void PushZoneContext(void* arg1, void* arg2);
        void PopLeakTrackingContext();
        void PushLeakTrackingContext();
        void PopZone();
        void PushZone(const char* arg1);
        void SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const& arg1) const;
        void SaveMemoryUsageToConsole() const;
        void SaveMemoryUsageBottomUpToConsole() const;
        uint64_t GetZoneContext();
        bool AreItemsAllocated();
        uint64_t GetZone();
        uint64_t GetFree() const;
        uint64_t GetUsed() const;
        bool GetCallStackGrabDepth() const;
        HeapAllocatorProxy(unsigned int arg1);
        unsigned int SetCallStackGrabDepth(unsigned int arg1);

    private:
        bool m_callStackGrabbingEnabled;
        uint8_t _unknown_9[3];
        unsigned int m_callStackGrabDepth;
        uint8_t _unknown_16[4];
    };

    // 0x1000096a0: HeapAllocatorProxy::GetCallStackGrabbingEnabled() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x100009e70: HeapAllocatorProxy::GrabCallStack(unsigned long*, unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::PopZoneContext() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::PrintUsageList() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::PushZoneContext(void*, void*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::PopLeakTrackingContext() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::PushLeakTrackingContext() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::PopZone() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::PushZone(char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::~HeapAllocatorProxy() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::SaveMemoryUsageToXML(std::function<void (char const*, unsigned long)> const&) const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::SaveMemoryUsageToConsole() const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: HeapAllocatorProxy::SaveMemoryUsageBottomUpToConsole() const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: HeapAllocatorProxy::GetZoneContext() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: HeapAllocatorProxy::AreItemsAllocated() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: HeapAllocatorProxy::GetZone() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: HeapAllocatorProxy::GetFree() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: HeapAllocatorProxy::GetUsed() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    bool HeapAllocatorProxy::GetCallStackGrabDepth() const {
        return m_callStackGrabbingEnabled;
    }

    // 0x100c927a0
    HeapAllocatorProxy::HeapAllocatorProxy(unsigned int arg1)
        : m_callStackGrabbingEnabled(false), m_callStackGrabDepth(arg1) {
        SetCallStackGrabDepth(arg1);
    }

    // 0x100c927c0
    unsigned int HeapAllocatorProxy::SetCallStackGrabDepth(unsigned int arg1) {
        unsigned int uVar1 = m_callStackGrabDepth;
        m_callStackGrabDepth = arg1;
        m_callStackGrabbingEnabled = arg1 != 0;
        return uVar1;
    }

} // namespace jag
