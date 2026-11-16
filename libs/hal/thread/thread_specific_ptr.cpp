// libs/hal/thread/thread_specific_ptr.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.thread

#include "thread_specific_ptr.h"

namespace jag::detail {
    // 0x100c95d80
    void get_tls_data(void* arg1) {
        rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
               eastl::allocator, eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>, true,
               true>* this;
        uint64_t uVar2;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        void* local_30 = arg1;
        g_tlsMap();
        this =
            (rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
                    eastl::allocator, eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>,
                    true, true>*)(*(void (*)(...))g_tlsMap)();
        auto local_28 = find(local_30);
        g_tlsMap();
        local_38.end();
        if (!(local_28 == local_38)) {
            lVar3 = *local_28;
            uVar2 = *(uint64_t*)(lVar3 + 8);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100c95f00
    void set_tls_data(void* arg1, void* arg2, void (*arg3)(void*)) {
        GPUMemoryAllocatorZone* pGVar1;
        rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
               eastl::allocator, eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>, true,
               true>* prVar4;
        long lVar5;
        uint8_t auVar6[16];
        ReturnValue local_80;
        ReturnValue local_70;
        uint8_t local_58[16];
        ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>
            local_48[8];

        void* local_40 = arg1;
        GPUMemoryAllocatorZone* local_38 = arg2;
        void* local_30 = arg3;
        g_tlsMap();
        prVar4 =
            (rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
                    eastl::allocator, eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>,
                    true, true>*)(*(void (*)(...))g_tlsMap)();
        auto local_28 = prVar4->find(local_40);
        local_70.end();
        bool cVar3 = local_28 == local_70;
        void* pcVar2 = local_30;
        if (!cVar3) {
            if (local_30 != (void (*)(...))0) {
                lVar5 = *local_28;
                (*pcVar2)(*(uint64_t*)(lVar5 + 8));
            }
            pGVar1 = local_38;
            if (local_38 == nullptr) {
                new (local_48) eastl::ListIterator(&local_28);
                auVar6 = (*(void (*)(...))g_tlsMap)();
                local_70 = auVar6._0_8_->erase(auVar6._8_8_);
            } else {
                lVar5 = *local_28;
                pcVar2 = local_30;
                *(GPUMemoryAllocatorZone**)(lVar5 + 8) = pGVar1;
                lVar5 = *local_28;
                *(void (**)(...))(lVar5 + 16) = pcVar2;
            }
        } else if (local_38 != nullptr) {
            local_58 = eastl::make_pair<void*&, void (*&)(void*)>(local_38, &local_30);
            local_70 = eastl::make_pair<void*&, eastl::pair<void*, void (*)(void*)>>(local_40, *local_58);
            prVar4 = (rbtree<void*, eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>, eastl::less<void*>,
                             eastl::allocator,
                             eastl::use_first<eastl::pair<void* const, eastl::pair<void*, void (*)(void*)>>>, true,
                             true>*)(*(void (*)(...))g_tlsMap)();
            local_80 = prVar4->insert<eastl::pair<void*, eastl::pair<void*, void (*)(void*)>>, void>(local_70);
        }
    }

} // namespace jag::detail

// 0x100c95e00
void jag::detail::g_tlsMap(void) {
    ___tls_init();
    (*(void (*)(...))g_tlsMap)();
}
