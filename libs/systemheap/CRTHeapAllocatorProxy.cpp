// libs/systemheap/CRTHeapAllocatorProxy.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.systemheap

#include "CRTHeapAllocatorProxy.h"

namespace jag::systemheap {
    // 0x100c92490
    void CrtHeapAllocatorProxy::GrabCallStack(unsigned long* arg1, unsigned int arg2) {
        unsigned int uVar2;

        if (arg1 == nullptr) {
            LogAssert("pFirstFrame",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/systemheap/"
                      "CRTHeapAllocatorProxy.cpp",
                      12, nullptr);
        }
        if (IsValid() == '\0') {
            uVar2 = GetLevel();
            ___bzero(arg1, (unsigned long)uVar2 << 3);
        } else {
            uVar2 = GetLevel();
            callstack::capture_stack_back_trace((unsigned long)arg2, (unsigned long)uVar2, arg1);
        }
    }

    // 0x100c926f0: CrtHeapAllocatorProxy::AlignedFree(void*, unsigned int) has the same machine code as CrtHeapAllocatorProxy::Free(void*, unsigned int)

    // 0x100c92720: CrtHeapAllocatorProxy::GetZoneContext() has the same machine code as CrtHeapAllocatorProxy::GetUsed() const

    // 0x100c92720: CrtHeapAllocatorProxy::GetZone() has the same machine code as CrtHeapAllocatorProxy::GetUsed() const

    // 0x100c92730: CrtHeapAllocatorProxy::PopZoneContext() has the same machine code as CrtHeapAllocatorProxy::PushZoneContext(void*, void*)

    // 0x100c92730: CrtHeapAllocatorProxy::PopZone() has the same machine code as CrtHeapAllocatorProxy::PushZoneContext(void*, void*)

    // 0x100c92730: CrtHeapAllocatorProxy::PushZone(char const*) has the same machine code as CrtHeapAllocatorProxy::PushZoneContext(void*, void*)

    // 0x100c92730: CrtHeapAllocatorProxy::SaveMemoryUsageToXML(std::function<void (char const*, unsigned long)> const&) const has the same machine code as CrtHeapAllocatorProxy::PushZoneContext(void*, void*)

    // 0x100c92730: CrtHeapAllocatorProxy::SaveMemoryUsageToConsole() const has the same machine code as CrtHeapAllocatorProxy::PushZoneContext(void*, void*)

    // 0x100c92730: CrtHeapAllocatorProxy::SaveMemoryUsageBottomUpToConsole() const has the same machine code as CrtHeapAllocatorProxy::PushZoneContext(void*, void*)

} // namespace jag::systemheap

namespace jag {
    // 0x100c92510
    void CRTHeapCreate() {
        auto crtHeapAllocatorProxy = _malloc(24);
        new (crtHeapAllocatorProxy) systemheap::CrtHeapAllocatorProxy(24);
        passThroughProxy = crtHeapAllocatorProxy;
        auto this_00 = _malloc(512);
        new (this_00) HeapInterface(crtHeapAllocatorProxy, 16);
        HeapInterface::SetInstance(this_00);
    }

    // 0x100c92580
    void CRTHeapDestroy() {
        DebugDataBasic* in_RSI;

        auto heapInterface = HeapInterface::Instance();
        heapInterface->AssertOnMemoryLeaks();
        auto local_18 = heapInterface->GetAllocatorProxy();
        if (local_18 != passThroughProxy) {
            local_18->AddAABB(in_RSI);
            heapInterface->PopAllocatorProxy();
            safe_delete<game::VarDomainType>(&local_18);
        }
        std::destroy_at(passThroughProxy);
        _free(passThroughProxy);
        passThroughProxy = nullptr;
        heapInterface->~HeapInterface();
        _free(heapInterface);
        HeapInterface::ClearInstance();
    }

} // namespace jag
