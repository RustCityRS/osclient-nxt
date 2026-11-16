// libs/hal/thread/thread_specific_ptr.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 2 instantiations, e.g. <int>, <render::RenderContext>
    class thread_specific_ptr {
    public:
        thread_specific_ptr(void (*arg1)(void*));
        ~thread_specific_ptr();
        void get();
        void reset(int* arg1);
        void set_tls_data(int* arg1, void (*arg2)(void*));
        void get_tls_data();
        thread_specific_ptr();
        uint64_t release();
        operator render::RenderContext*();

        uint8_t _unknown_0[1];
    };

    // 0x1009ea640
    void thread_specific_ptr<int>::get() {
        get_tls_data(this);
    }

    // 0x1009eba40
    void thread_specific_ptr<int>::reset(int* arg1) {
        set_tls_data(this, arg1, *(void**)this);
    }

    // 0x1009ebae0
    bool IsCRCValid(unsigned int arg1, unsigned int arg2, Js5DiskCacheFormat js5DiskCacheFormat) {
        return arg2 + js5DiskCacheFormat == arg1;
    }

    // 0x100a01d90
    thread_specific_ptr<int>::thread_specific_ptr(void (*arg1)(void*)) {
        *(void**)this = arg1;
        set_tls_data(nullptr, nullptr);
    }

    // 0x100a01db0
    void thread_specific_ptr<int>::set_tls_data(int* arg1, void (*arg2)(void*)) {
        detail::set_tls_data(this, arg1, arg2);
    }

    // 0x100a01f90
    thread_specific_ptr<int>::~thread_specific_ptr() {
        reset(this, nullptr);
    }

    // 0x100a03680
    void thread_specific_ptr<int>::get_tls_data() {
        detail::get_tls_data(this);
    }

    // 0x100bf94c0
    thread_specific_ptr<render::RenderContext>::thread_specific_ptr() {
        *(uint64_t*)this = 0;
        set_tls_data(this, nullptr, nullptr);
    }

    // 0x100c2c850
    uint64_t thread_specific_ptr<render::RenderContext>::release() {
        uint64_t uVar1 = get(this);
        set_tls_data(this, nullptr, nullptr);
        return uVar1;
    }

    // 0x100c567a0
    thread_specific_ptr<render::RenderContext>::operator render::RenderContext*() {
        get();
    }

} // namespace jag

namespace jag::detail {
    class tls_map {
    public:
        tls_map();
        ~tls_map();

    private:
        uint8_t _unknown_0[8];
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_8;
    };

    // 0x100c96e00
    tls_map::tls_map() {

        new (this) eastl::map(local_20);
    }

    // 0x100c96e40
    tls_map::~tls_map() {
        void* pcVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_30;

        auto local_38 = rbegin();
        while (true) {
            local_30.end();
            if (local_38 != local_30 == '\0')
                break;
            lVar3 = *local_38;
            if (*(long*)(lVar3 + 16) != 0) {
                lVar3 = *local_38;
                pcVar1 = *(void (**)(...))(lVar3 + 16);
                lVar3 = *local_38;
                (*pcVar1)(*(uint64_t*)(lVar3 + 8));
                lVar3 = *local_38;
                *(uint64_t*)(lVar3 + 8) = 0;
            }
            ++local_38;
        }
    }

} // namespace jag::detail
