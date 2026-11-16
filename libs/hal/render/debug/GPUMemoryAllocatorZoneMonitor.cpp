// libs/hal/render/debug/GPUMemoryAllocatorZoneMonitor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "GPUMemoryAllocatorZoneMonitor.h"

namespace jag::render {
    // 0x100904f20: the linker folded this into GPUMemoryAllocatorZoneMonitor::GetRootZone() const, which has identical code
    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::GetRootZone();

    // 0x100c29a00, 192 bytes, base-object constructor, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::GPUMemoryAllocatorZoneMonitor()
    void GPUMemoryAllocatorZoneMonitor::GPUMemoryAllocatorZoneMonitor() {
        GPUMemoryAllocatorZone* pGVar2;

        new (this) eastl::vector_map<
            unsigned long, eastl::fixed_stack<GPUMemoryAllocatorZone*, 256ul, true>, eastl::less<unsigned long>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, eastl::fixed_stack<GPUMemoryAllocatorZone*, 256ul, true>>,
                          eastl::allocator>>();
        new (&field_40)
            eastl::fixed_map<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>, GPUMemoryAllocatorZone*, 1024ul, true,
                             eastl::less<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>>, eastl::allocator>();
        new (&field_57536) eastl::fixed_vector<GPUMemoryAllocatorZone, 1024ul, true, eastl::allocator>();
        m_pRootZone = (GPUMemoryAllocatorZone*)0;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      11, (char*)0);
        }
        PushZone(this, "RootZone");
        pGVar2 = (GPUMemoryAllocatorZone*)GetCurrentZone(this);
        SetRootZone(this, pGVar2);
    }

    // 0x100c29af0, 240 bytes, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::PushZone(char const*)
    void GPUMemoryAllocatorZoneMonitor::PushZone(char* param_1) {
        GPUMemoryAllocatorZone* pGVar1;
        Layout* this_00;
        vector* pvVar2;
        undefined8 uVar3;
        type* ptVar4;
        GPUMemoryAllocatorZone** ppGVar5;
        GPUMemoryAllocatorZone** ppGVar6;
        long local_20;

        pGVar1 = (GPUMemoryAllocatorZone*)GetCurrentZone(this);
        local_20 = CreateZone(this, pGVar1, param_1);
        if (local_20 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("zone != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      62, (char*)0);
        }
        this_00 = (Layout*)GetZoneStack(this);
        pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pGVar1);
        uVar3 = pvVar2->HeapBeginPtr();
        pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pGVar1);
        ptVar4 = (type*)pvVar2->end();
        ppGVar5 = eastl::find_if<GPUMemoryAllocatorZone**, (char const*)->PushZone()::__104>(uVar3, ptVar4, &local_20);
        pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar4);
        ppGVar6 = (GPUMemoryAllocatorZone**)pvVar2->end();
        if (ppGVar5 != ppGVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert("it == zoneStack.get_container().end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      70, "Attempting to push zone that is already on the stack");
        }
        pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar4);
        ppGVar6 = (GPUMemoryAllocatorZone**)pvVar2->end();
        if (ppGVar5 == ppGVar6) {
            eastl::stack<GPUMemoryAllocatorZone*,
                         eastl::fixed_vector<GPUMemoryAllocatorZone*, 256ul, true,
                                             eastl::allocator>>::push((GPUMemoryAllocatorZone**)this_00);
        }
    }

    // 0x100c29bf0, 64 bytes, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::GetCurrentZone()
    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::GetCurrentZone() {
        stack<math::Rect<int>, eastl::vector<math::Rect<int>, eastl::allocator>>* this_00;
        GPUMemoryAllocatorZone** ppGVar2;

        this_00 = (stack<math::Rect<int>, eastl::vector<math::Rect<int>, eastl::allocator>>*)GetZoneStack(this);
        if (eastl::stack<math::Rect<int>, eastl::vector<math::Rect<int>, eastl::allocator>>::empty(this_00) == '\0') {
            ppGVar2 = (GPUMemoryAllocatorZone**)this_00->top();
        } else {
            ppGVar2 = &m_pRootZone;
        }
        return *ppGVar2;
    }

    // 0x100c29c60, 16 bytes, complete-object constructor, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::GPUMemoryAllocatorZoneMonitor(): jumps straight to the base-object constructor

    // 0x100c29c70, 272 bytes, base-object destructor, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::~GPUMemoryAllocatorZoneMonitor()
    void GPUMemoryAllocatorZoneMonitor::~GPUMemoryAllocatorZoneMonitor() {
        char cVar1;
        long lVar2;
        long lVar3;

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      20, (char*)0);
        }
        PopZone(this);
        lVar2 = HeapBeginPtr();
        lVar3 = end();
        while (true) {
            if (lVar2 == lVar3) {
                (&field_57536)->~fixed_vector();
                (&field_40)->~fixed_map();
                ~vector_map();
                return;
            }
            cVar1 = ((lVar2 + 8))->empty();
            if (cVar1 == '\0')
                break;
            lVar2 = lVar2 + 2096;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("zoneStack.second.empty()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                  "GPUMemoryAllocatorZoneMonitor.cpp",
                  25, "Other zones still exist");
    }

    // 0x100c29d80, 80 bytes, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::PopZone()
    void GPUMemoryAllocatorZoneMonitor::PopZone() {
        stack<math::Rect<int>, eastl::vector<math::Rect<int>, eastl::allocator>>* this_00;

        this_00 = (stack<math::Rect<int>, eastl::vector<math::Rect<int>, eastl::allocator>>*)GetZoneStack(this);
        if (eastl::stack<math::Rect<int>, eastl::vector<math::Rect<int>, eastl::allocator>>::empty(this_00) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!zoneStack.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      80, (char*)0);
        }
        this_00->pop();
    }

    // 0x100c29dd0, 16 bytes, complete-object destructor, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::~GPUMemoryAllocatorZoneMonitor(): jumps straight to the base-object destructor

    // 0x100c29e20, 352 bytes, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::CreateZone(GPUMemoryAllocatorZone*, char const*)
    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::CreateZone(GPUMemoryAllocatorZone* param_1, char* param_2) {
        bool bVar1;
        GPUMemoryAllocatorZone* this_00;
        undefined8* puVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        GPUMemoryAllocatorZone* local_e608;
        undefined1 local_e600[16];
        hash<char const*> local_e5f0[8];
        GPUMemoryAllocatorZone local_e5e8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e608 = param_1;
        local_e5e8._0_8_ = eastl::hash<char const*>::operator()(local_e5f0, param_2);
        local_e600 = eastl::make_pair<void*&, void (*&)(void*)>(&local_e608, (_func_void_void_ptr*)&local_e5e8);
        eastl::rbtree<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>,
                      eastl::pair<eastl::pair<GPUMemoryAllocatorZone*, unsigned long> const, GPUMemoryAllocatorZone*>,
                      eastl::less<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>>,
                      eastl::fixed_node_allocator<56ul, 1024ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<eastl::pair<GPUMemoryAllocatorZone*, unsigned long> const,
                                                   GPUMemoryAllocatorZone*>>,
                      true, true>::find((pair*)local_e5f0);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator==((eastl*)local_e5f0, (hashtable_iterator_base*)&local_e5e8, extraout_RDX);
        if (bVar1) {
            new (&local_e5e8) GPUMemoryAllocatorZone(param_2);
            (&field_57536, &local_e5e8)->push_back();
            local_e5e8.~GPUMemoryAllocatorZone();
            this_00 = (GPUMemoryAllocatorZone*)(&field_57536)->back();
            this_00->SetParent(local_e600._0_8_);
            puVar2 =
                (undefined8*)eastl::map<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>, GPUMemoryAllocatorZone*,
                                        eastl::less<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>>,
                                        eastl::fixed_node_allocator<56ul, 1024ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((map<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>, GPUMemoryAllocatorZone*,
                                eastl::less<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>>,
                                eastl::fixed_node_allocator<56ul, 1024ul, 8ul, 0ul, true, eastl::allocator>>*)&field_40,
                           (pair*)local_e600);
            *puVar2 = this_00;
        } else {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_e5f0);
            this_00 = *(GPUMemoryAllocatorZone**)(lVar3 + 16);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this_00;
    }

    // 0x100c54e70, 48 bytes, placed by class name
    // GPUMemoryAllocatorZoneMonitor::PushZone(char const*)::$_104::operator()(GPUMemoryAllocatorZone*) const
    /* GPUMemoryAllocatorZoneMonitor::PushZone(char
   const*)::$_104::TEMPNAMEPLACEHOLDERVALUE(GPUMemoryAllocatorZone*) const */

    void GPUMemoryAllocatorZoneMonitor::PushZone(char const*)::$_104::operator()(GPUMemoryAllocatorZone* param_1) {
        vector* pvVar1;
        vector* pvVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        pvVar2 = (**(undefined8**)this)->SSOBeginPtr(param_1);
        eastl::operator==((basic_string*)pvVar1, (basic_string*)pvVar2);
    }

} // namespace jag::render
