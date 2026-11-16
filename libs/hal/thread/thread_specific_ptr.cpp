// libs/hal/thread/thread_specific_ptr.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.thread

#include "thread_specific_ptr.h"

namespace jag::detail {
    // 0x100c95d80, 128 bytes, placed by debug map only (low confidence)
    // get_tls_data(void*)
    undefined8 get_tls_data(void* param_1) {
        undefined8 uVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_38[8];
        void* local_30;
        eastl local_28[8];

        local_30 = param_1;
        g_tlsMap();
        (*(code*)g_tlsMap)();
        eastl::rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
                      eastl::allocator, eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>,
                      true, true>::find((void**)local_28);
        g_tlsMap();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator==(local_28, local_38, extraout_RDX)) {
            uVar2 = 0;
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
                    local_28);
            uVar2 = *(undefined8*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x100c95f00, 288 bytes, placed by debug map only (low confidence)
    // set_tls_data(void*, void*, void (*)(void*))
    void set_tls_data(void* param_1, void* param_2, _func_void_void_ptr* param_3) {
        long lVar1;
        undefined8 uVar2;
        void* pvVar3;
        _func_void_void_ptr* p_Var4;
        bool bVar5;
        hashtable_iterator_base* extraout_RDX;
        undefined8 extraout_RDX_00;
        pair local_80[16];
        hashtable_iterator_base local_70[24];
        undefined8 local_58;
        undefined8 local_50;
        ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>
            local_48[8];
        void* local_40;
        void* local_38;
        _func_void_void_ptr* local_30;
        eastl local_28[8];

        local_40 = param_1;
        local_38 = param_2;
        local_30 = param_3;
        g_tlsMap();
        (*(code*)g_tlsMap)();
        eastl::rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
                      eastl::allocator, eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>,
                      true, true>::find((void**)local_28);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar5 = eastl::operator==(local_28, local_70, extraout_RDX);
        p_Var4 = local_30;
        if (bVar5) {
            if (local_38 != (void*)0) {
                local_58 = eastl::make_pair<void*&, void (*&)(void*)>(&local_38, (_func_void_void_ptr*)&local_30);
                local_50 = extraout_RDX_00;
                eastl::make_pair<void*&, eastl::pair<void*, void (*)(void*)>>((eastl*)local_70, &local_40,
                                                                              (pair*)&local_58);
                (*(code*)g_tlsMap)();
                eastl::rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
                              eastl::allocator,
                              eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>, true,
                              true>::insert<eastl::pair<void*, eastl::pair<void*, void (*)(void*)>>, void>(local_80);
            }
        } else {
            if (local_30 != (_func_void_void_ptr*)0) {
                lVar1 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_28);
                (*p_Var4)(*(void**)(lVar1 + 8));
            }
            pvVar3 = local_38;
            if (local_38 == (void*)0) {
                eastl::ListIterator<
                    shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>::ListIterator(local_48,
                                                                                             (ListIterator*)local_28);
                uVar2 = (*(code*)g_tlsMap)();
                eastl::rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
                              eastl::allocator,
                              eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>, true,
                              true>::erase(local_70, uVar2);
            } else {
                lVar1 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_28);
                p_Var4 = local_30;
                *(void**)(lVar1 + 8) = pvVar3;
                lVar1 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_28);
                *(_func_void_void_ptr**)(lVar1 + 16) = p_Var4;
            }
        }
    }

} // namespace jag::detail

// 0x100c95e00, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::detail::g_tlsMap
void jag::detail::g_tlsMap() {
    ___tls_init();
    (*(code*)g_tlsMap)();
}
