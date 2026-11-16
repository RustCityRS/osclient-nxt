// libs/heap/HeapAllocatorProxy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class HeapAllocatorProxy {
    public:
        // virtual methods in vtable order
        virtual ~HeapAllocatorProxy();
        GetCallStackGrabbingEnabled() const;
        GrabCallStack(unsigned long*, unsigned int);
        PopZoneContext();
        PrintUsageList();
        PushZoneContext(void*, void*);
        PopLeakTrackingContext();
        PushLeakTrackingContext();
        PopZone();
        PushZone(char const*);
        SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const&) const;
        SaveMemoryUsageToConsole() const;
        SaveMemoryUsageBottomUpToConsole() const;
        GetZoneContext();
        AreItemsAllocated();
        GetZone();
        GetFree() const;
        GetUsed() const;
        GetCallStackGrabDepth() const;
        HeapAllocatorProxy(unsigned int);
        uint SetCallStackGrabDepth(unsigned int);

        // data members, from how the methods use this: 20 bytes
        undefined* field_0; // offset 0, vtable pointer
        bool field_8;       // offset 8
        char _unknown_9[3];
        uint m_callStackGrabDepth; // offset 12
        char _unknown_16[4];
    };

    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    HeapAllocatorProxy::GetCallStackGrabbingEnabled() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::GrabCallStack(unsigned long*, unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::PopZoneContext();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::PrintUsageList();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::PushZoneContext(void*, void*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::PopLeakTrackingContext();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::PushLeakTrackingContext();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::PopZone();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::PushZone(char const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::~HeapAllocatorProxy();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const&) const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::SaveMemoryUsageToConsole() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    HeapAllocatorProxy::SaveMemoryUsageBottomUpToConsole() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorProxy::GetZoneContext();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorProxy::AreItemsAllocated();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorProxy::GetZone();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorProxy::GetFree() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HeapAllocatorProxy::GetUsed() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    HeapAllocatorProxy::GetCallStackGrabDepth() const;

    // 0x100c927a0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // HeapAllocatorProxy::HeapAllocatorProxy(unsigned int)
    void HeapAllocatorProxy::HeapAllocatorProxy(uint param_1) {
        field_0 = PTR_vtable_100ee7178 + 16;
        field_8 = false;
        m_callStackGrabDepth = param_1;
        SetCallStackGrabDepth(this, param_1);
    }

    // 0x100c927c0, 32 bytes, inline, placed by class name and debug map
    // HeapAllocatorProxy::SetCallStackGrabDepth(unsigned int)
    uint HeapAllocatorProxy::SetCallStackGrabDepth(uint param_1) {
        uint uVar1;

        uVar1 = m_callStackGrabDepth;
        m_callStackGrabDepth = param_1;
        field_8 = param_1 != 0;
        return uVar1;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    HeapAllocatorProxy::~HeapAllocatorProxy();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    HeapAllocatorProxy::~HeapAllocatorProxy();

} // namespace jag
