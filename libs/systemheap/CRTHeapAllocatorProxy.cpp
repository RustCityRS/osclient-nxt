// libs/systemheap/CRTHeapAllocatorProxy.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.systemheap

#include "CRTHeapAllocatorProxy.h"

namespace jag::systemheap {
    // 0x100c92490, 128 bytes, placed by class name and debug map
    // CrtHeapAllocatorProxy::GrabCallStack(unsigned long*, unsigned int)
    void CrtHeapAllocatorProxy::GrabCallStack(ulong* param_1, uint param_2) {
        uint uVar2;

        if (param_1 == (ulong*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pFirstFrame",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/systemheap/"
                      "CRTHeapAllocatorProxy.cpp",
                      12, (char*)0);
        }
        if (IsValid() == '\0') {
            uVar2 = GetLevel();
            ___bzero(param_1, (ulong)uVar2 << 3);
        } else {
            uVar2 = GetLevel();
            callstack::capture_stack_back_trace((ulong)param_2, (ulong)uVar2, param_1);
        }
    }

    // 0x100c926f0: the linker folded this into CrtHeapAllocatorProxy::Free(void*, unsigned int), which has identical code
    CrtHeapAllocatorProxy::AlignedFree(void*, unsigned int);

    // 0x100c92720: the linker folded this into CrtHeapAllocatorProxy::GetUsed() const, which has identical code
    CrtHeapAllocatorProxy::GetZoneContext();

    // 0x100c92720: the linker folded this into CrtHeapAllocatorProxy::GetUsed() const, which has identical code
    CrtHeapAllocatorProxy::GetZone();

    // 0x100c92730: the linker folded this into CrtHeapAllocatorProxy::PushZoneContext(void*, void*), which has identical code
    CrtHeapAllocatorProxy::PopZoneContext();

    // 0x100c92730: the linker folded this into CrtHeapAllocatorProxy::PushZoneContext(void*, void*), which has identical code
    CrtHeapAllocatorProxy::PopZone();

    // 0x100c92730: the linker folded this into CrtHeapAllocatorProxy::PushZoneContext(void*, void*), which has identical code
    CrtHeapAllocatorProxy::PushZone(char const*);

    // 0x100c92730: the linker folded this into CrtHeapAllocatorProxy::PushZoneContext(void*, void*), which has identical code
    CrtHeapAllocatorProxy::SaveMemoryUsageToXML(std::function<void(char const*, unsigned long)> const&) const;

    // 0x100c92730: the linker folded this into CrtHeapAllocatorProxy::PushZoneContext(void*, void*), which has identical code
    CrtHeapAllocatorProxy::SaveMemoryUsageToConsole() const;

    // 0x100c92730: the linker folded this into CrtHeapAllocatorProxy::PushZoneContext(void*, void*), which has identical code
    CrtHeapAllocatorProxy::SaveMemoryUsageBottomUpToConsole() const;

} // namespace jag::systemheap

namespace jag {
    // 0x100c92510, 96 bytes, placed by neighbouring functions
    // CRTHeapCreate()
    void CRTHeapCreate() {
        CrtHeapAllocatorProxy* this;
        HeapInterface* this_00;

        this = _malloc(24);
        systemheap::CrtHeapAllocatorProxy::CrtHeapAllocatorProxy(this, 24);
        passThroughProxy = this;
        this_00 = _malloc(512);
        HeapInterface::HeapInterface(this_00, (HeapAllocatorProxy*)this, 16);
        HeapInterface::SetInstance(this_00);
    }

    // 0x100c92580, 144 bytes, placed by neighbouring functions
    // CRTHeapDestroy()
    void CRTHeapDestroy() {
        HeapInterface* this;
        VarDomainType* local_18;

        this = (HeapInterface*)HeapInterface::Instance();
        AssertOnMemoryLeaks();
        local_18 = (VarDomainType*)GetAllocatorProxy();
        if (local_18 != passThroughProxy) {
            (**(code**)(local_18->field_0 + 72))(local_18);
            PopAllocatorProxy();
            safe_delete<game::VarDomainType>(&local_18);
        }
        (**(code**)passThroughProxy->field_0)();
        _free(passThroughProxy);
        passThroughProxy = (VarDomainType*)0;
        ~HeapInterface();
        _free(this);
        HeapInterface::ClearInstance();
    }

} // namespace jag
