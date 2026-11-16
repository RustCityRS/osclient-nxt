// libs/systemheap/CRTHeapAllocatorProxy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::systemheap {
    class CrtHeapAllocatorProxy {
    public:
        // virtual methods in vtable order
        virtual ~CrtHeapAllocatorProxy();
        virtual void* Alloc(unsigned long arg1, HeapState heapState, unsigned int arg3);
        virtual void* AlignedAlloc(unsigned long arg1, HeapState heapState, unsigned long arg3, unsigned int arg4);
        virtual void Free(void* arg1, unsigned int arg2);
        virtual void GetUsed() const;
        virtual void PushZoneContext(void* arg1, void* arg2);
        virtual void GrabCallStack(unsigned long* arg1, unsigned int arg2);
        CrtHeapAllocatorProxy(unsigned int arg1);
        void AlignedFree(void* arg1, unsigned int arg2);
        void GetZoneContext();
        void GetZone();
        void PopZoneContext();
        void PopZone();
        void PushZone(const char* arg1);
        void SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const& arg1) const;
        void SaveMemoryUsageToConsole() const;
        void SaveMemoryUsageBottomUpToConsole() const;

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        unsigned int field_12;
        InputFieldKeyboardHandler field_16;
    };

    // 0x100c92650
    void* CrtHeapAllocatorProxy::Alloc(unsigned long arg1, HeapState heapState, unsigned int arg3) {
        auto arg1_00 = _malloc(arg1);
        if (arg1_00 == nullptr) {
            callstack::OutOfMemoryHandler::OutOfMemoryTrap(arg1);
        }
        field_16->MonitorAlignedAlloc(arg1_00, arg1);
        return arg1_00;
    }

    // 0x100c926a0
    void* CrtHeapAllocatorProxy::AlignedAlloc(unsigned long arg1, HeapState heapState, unsigned long arg3,
                                              unsigned int arg4) {
        auto arg1_00 = aligned_malloc(arg1, arg3);
        if (arg1_00 == nullptr) {
            callstack::OutOfMemoryHandler::OutOfMemoryTrap(arg1);
        }
        field_16->MonitorAlignedAlloc(arg1_00, arg1);
        return arg1_00;
    }

    // 0x100c926f0
    void CrtHeapAllocatorProxy::Free(void* arg1, unsigned int arg2) {
        field_16->MonitorAlignedFree(arg1);
        _free(arg1);
    }

    // 0x100c92720
    void CrtHeapAllocatorProxy::GetUsed() const {
        field_16->PointerRelease();
    }

    // 0x100c92730
    void CrtHeapAllocatorProxy::PushZoneContext(void* arg1, void* arg2) {
        field_16->~AutoSingleton();
    }

    // 0x100c92760
    CrtHeapAllocatorProxy::CrtHeapAllocatorProxy(unsigned int arg1) : HeapAllocatorProxy(arg1) {
        field_16->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x100c92ae0
    CrtHeapAllocatorProxy::~CrtHeapAllocatorProxy() {
        field_16->destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::systemheap
