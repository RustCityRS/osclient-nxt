// libs/systemheap/CRTHeapAllocatorProxy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::systemheap {
    class CrtHeapAllocatorProxy {
    public:
        // virtual methods in vtable order
        virtual ~CrtHeapAllocatorProxy();
        virtual void* Alloc(unsigned long, HeapState, unsigned int);
        virtual void* AlignedAlloc(unsigned long, HeapState, unsigned long, unsigned int);
        virtual void Free(void*, unsigned int);
        virtual GetUsed() const;
        virtual PushZoneContext(void*, void*);
        virtual void GrabCallStack(unsigned long*, unsigned int);
        CrtHeapAllocatorProxy(unsigned int);
        void AlignedFree(void*, unsigned int);
        void GetZoneContext();
        void GetZone();
        void PopZoneContext();
        void PopZone();
        PushZone(char const*);
        SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const&) const;
        SaveMemoryUsageToConsole() const;
        SaveMemoryUsageBottomUpToConsole() const;

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        uint field_12;                      // offset 12
        InputFieldKeyboardHandler field_16; // offset 16
    };

    // 0x100c92570, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CrtHeapAllocatorProxy::CrtHeapAllocatorProxy(unsigned int): jumps straight to the base-object constructor

    // 0x100c92620, 16 bytes, complete-object destructor, inline, placed by class name
    // CrtHeapAllocatorProxy::~CrtHeapAllocatorProxy(): jumps straight to the base-object destructor

    // 0x100c92630, 32 bytes, deleting destructor, inline, placed by class name
    // CrtHeapAllocatorProxy::~CrtHeapAllocatorProxy()
    void CrtHeapAllocatorProxy::~CrtHeapAllocatorProxy() {
        ~CrtHeapAllocatorProxy(this);
        operator_delete(this);
    }

    // 0x100c92650, 80 bytes, inline, placed by class name
    // CrtHeapAllocatorProxy::Alloc(unsigned long, HeapState, unsigned int)
    void* CrtHeapAllocatorProxy::Alloc(size_t param_1, undefined8 param_3, ulong param_4) {
        void* pvVar1;

        pvVar1 = _malloc(param_1);
        if (pvVar1 == (void*)0) {
            callstack::OutOfMemoryHandler::OutOfMemoryTrap(param_1);
        }
        (field_16, pvVar1, param_1, param_4)->MonitorAlignedAlloc();
        return pvVar1;
    }

    // 0x100c926a0, 80 bytes, inline, placed by class name
    // CrtHeapAllocatorProxy::AlignedAlloc(unsigned long, HeapState, unsigned long, unsigned int)
    void* CrtHeapAllocatorProxy::AlignedAlloc(ulong param_1, undefined8 param_3, ulong param_4) {
        void* pvVar1;

        pvVar1 = (void*)aligned_malloc(param_1, param_4);
        if (pvVar1 == (void*)0) {
            callstack::OutOfMemoryHandler::OutOfMemoryTrap(param_1);
        }
        (field_16, pvVar1, param_1, param_4)->MonitorAlignedAlloc();
        return pvVar1;
    }

    // 0x100c926f0, 48 bytes, inline, placed by class name
    // CrtHeapAllocatorProxy::Free(void*, unsigned int)
    /* CrtHeapAllocatorProxy::AlignedFree(void*, unsigned int) */

    void CrtHeapAllocatorProxy::AlignedFree(void* param_1, uint param_2) {
        HeapAllocatorMonitorProxy::MonitorAlignedFree(field_16);
        _free(param_1);
    }

    // 0x100c92720, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CrtHeapAllocatorProxy::GetUsed() const
    /* CrtHeapAllocatorProxy::GetZoneContext() */

    void CrtHeapAllocatorProxy::GetZoneContext() {
        _func_void_TestResults_ptr_basic_string_ptr* in_RSI;

        (field_16, in_RSI)->PointerRelease();
    }

    // 0x100c92730, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CrtHeapAllocatorProxy::PushZoneContext(void*, void*)
    /* CrtHeapAllocatorProxy::PopZoneContext() */

    void CrtHeapAllocatorProxy::PopZoneContext() {
        field_16->~AutoSingleton();
    }

    // 0x100c92760, 64 bytes, base-object constructor, inline, placed by class name
    // CrtHeapAllocatorProxy::CrtHeapAllocatorProxy(unsigned int)
    void CrtHeapAllocatorProxy::CrtHeapAllocatorProxy(uint param_1) {
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;

        new (this) HeapAllocatorProxy(param_1);
        field_0 = &PTR__CrtHeapAllocatorProxy_100f29af0;
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)field_16,
                                                      (NpcUID*)CONCAT44(in_register_00000034, param_1), extraout_RDX);
    }

    // 0x100c92ae0, 48 bytes, base-object destructor, inline, placed by class name
    // CrtHeapAllocatorProxy::~CrtHeapAllocatorProxy()
    void CrtHeapAllocatorProxy::~CrtHeapAllocatorProxy() {
        NpcUID* in_RDX;
        NpcUID* in_RSI;

        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)field_16, in_RSI, in_RDX);
        ~AutoSingleton();
    }

} // namespace jag::systemheap
