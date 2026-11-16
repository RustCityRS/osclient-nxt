// libs/hal/thread/thread_specific_ptr.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 2 instantiations, e.g. <int>, <render::RenderContext>
    class thread_specific_ptr {
    public:
        thread_specific_ptr(void (*)(void*));
        ~thread_specific_ptr();
        void get();
        void reset(int*);
        void set_tls_data(int*, void (*)(void*));
        void get_tls_data();
        thread_specific_ptr();
        release();
        operator render::RenderContext*();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009e9100, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // thread_specific_ptr<int>::thread_specific_ptr(void (*)(void*)): jumps straight to the base-object constructor

    // 0x1009e92b0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // thread_specific_ptr<int>::~thread_specific_ptr(): jumps straight to the base-object destructor

    // 0x1009ea640, 16 bytes, inline, placed by class name and debug map
    // thread_specific_ptr<int>::get()
    /* thread_specific_ptr<render::RenderContext>::get() */

    void thread_specific_ptr<render::RenderContext>::get() {
        get_tls_data(this);
    }

    // 0x1009eba40, 16 bytes, inline, placed by class name and debug map
    // thread_specific_ptr<int>::reset(int*)
    /* thread_specific_ptr<render::RenderContext>::reset(render::RenderContext*) */

    void thread_specific_ptr<render::RenderContext>::reset(RenderContext* param_1) {
        set_tls_data(this, param_1, *(_func_void_void_ptr**)this);
    }

    // 0x1009ebae0, 16 bytes, inline, placed by debug map only (low confidence)
    // IsCRCValid(unsigned int, unsigned int, Js5DiskCacheFormat)
    bool IsCRCValid(int param_1, int param_2, int param_3) {
        return param_2 + param_3 == param_1;
    }

    // 0x100a01d90, 32 bytes, base-object constructor, inline, placed by class name
    // thread_specific_ptr<int>::thread_specific_ptr(void (*)(void*))
    void thread_specific_ptr<int>::thread_specific_ptr(_func_void_void_ptr* param_1) {
        *(_func_void_void_ptr**)this = param_1;
        set_tls_data(0, 0);
    }

    // 0x100a01db0, 16 bytes, inline, placed by class name
    // thread_specific_ptr<int>::set_tls_data(int*, void (*)(void*))
    /* thread_specific_ptr<render::RenderContext>::set_tls_data(render::RenderContext*,
   void (*)(void*)) */

    void thread_specific_ptr<render::RenderContext>::set_tls_data(RenderContext* param_1,
                                                                  _func_void_void_ptr* param_2) {
        detail::set_tls_data(this, param_1, param_2);
    }

    // 0x100a01f90, 16 bytes, base-object destructor, inline, placed by class name
    // thread_specific_ptr<int>::~thread_specific_ptr()
    /* thread_specific_ptr<render::RenderContext>::~thread_specific_ptr() */

    void thread_specific_ptr<render::RenderContext>::~thread_specific_ptr() {
        reset(this, (RenderContext*)0);
    }

    // 0x100a03680, 16 bytes, inline, placed by class name
    // thread_specific_ptr<int>::get_tls_data()
    /* thread_specific_ptr<render::RenderContext>::get_tls_data() */

    void thread_specific_ptr<render::RenderContext>::get_tls_data() {
        detail::get_tls_data(this);
    }

    // 0x100bdcb70, 16 bytes, complete-object constructor, inline, placed by class name
    // thread_specific_ptr<render::RenderContext>::thread_specific_ptr(): jumps straight to the base-object constructor

    // 0x100bf94c0, 32 bytes, base-object constructor, inline, placed by class name
    // thread_specific_ptr<render::RenderContext>::thread_specific_ptr()
    void thread_specific_ptr<render::RenderContext>::thread_specific_ptr() {
        *(undefined8*)this = 0;
        set_tls_data(this, (RenderContext*)0, (_func_void_void_ptr*)0);
    }

    // 0x100c2c850, 48 bytes, inline, placed by class name
    // thread_specific_ptr<render::RenderContext>::release()
    undefined8 thread_specific_ptr<render::RenderContext>::release() {
        undefined8 uVar1;

        uVar1 = get(this);
        set_tls_data(this, (RenderContext*)0, (_func_void_void_ptr*)0);
        return uVar1;
    }

    // 0x100c567a0, 16 bytes, inline, placed by class name
    // thread_specific_ptr<render::RenderContext>::operator render::RenderContext*()
    RenderContext* thread_specific_ptr::operator_cast_to_RenderContext_() {
        RenderContext* pRVar1;

        pRVar1 = (RenderContext*)get();
        return pRVar1;
    }

} // namespace jag

namespace jag::detail {
    class tls_map {
    public:
        tls_map();
        ~tls_map();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100c95d60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // tls_map::tls_map(): jumps straight to the base-object constructor

    // 0x100c95d70, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // tls_map::~tls_map(): jumps straight to the base-object destructor

    // 0x100c96e00, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // tls_map::tls_map()
    void tls_map::tls_map() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)this);
    }

    // 0x100c96e40, 192 bytes, base-object destructor, inline, placed by class header (inline)
    // tls_map::~tls_map()
    void tls_map::~tls_map() {
        code* pcVar1;
        long lVar2;
        bool bVar3;
        hashtable_iterator_base* extraout_RDX;
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>
            local_38[8];
        hashtable_iterator_base local_30[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        while (true) {
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar3 = eastl::operator!=((eastl*)local_38, local_30, extraout_RDX);
            if (!bVar3)
                break;
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const,
                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_38);
            if (*(long*)(lVar2 + 16) != 0) {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_38);
                pcVar1 = *(code**)(lVar2 + 16);
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_38);
                (*pcVar1)(*(undefined8*)(lVar2 + 8));
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_38);
                *(undefined8*)(lVar2 + 8) = 0;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const,
                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator++(local_38);
        }
        eastl::map<void*, eastl::pair<void*, void (*)(void*)>, eastl::less<void*>, eastl::allocator>::~map(
            (map<void*, eastl::pair<void*, void (*)(void*)>, eastl::less<void*>, eastl::allocator>*)this);
    }

} // namespace jag::detail
