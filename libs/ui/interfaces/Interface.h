// libs/ui/interfaces/Interface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::ui {
    class Interface {
    public:
        GetInterfaceID() const;
        void GetStaticComponent(unsigned int) const;
        ~Interface();
        Interface(int, bool, eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>&,
                  std::function<shared_ptr<Component>(unsigned char, unsigned short)>,
                  void (*)(Component*, PacketT<Array<unsigned char, eastl::allocator>>&, int));
        GetChildHiddenUnsafe(Component const*) const;
        void SetChildHiddenUnsafe(Component const*, bool);
        void GetChildCombinedIDs(eastl::vector<unsigned int, BucketAllocatorEASTL>&);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullInterfaceShared;

        // data members, from how the methods use this: 105 bytes
        int field_0; // offset 0
        char _unknown_4[100];
        undefined1 field_104; // offset 104
    };

    class PinchPoint {
    public:
        PinchPoint();

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
    };

    class SwipeDelta {
    public:
        SwipeDelta();
        SwipeDelta* operator+=(SwipeDelta const&);
        SwipeDelta(std::chrono::duration<long long, std::ratio<1l, 1000000000l>>, int, int);

        // data members, from how the methods use this: 20 bytes
        long field_0;        // offset 0
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x1003bba30, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bba70, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bbab0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbaf0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbb30, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bbb60, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbba0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bbbe0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.47
    void ___cxx_global_var_init_47() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbc20, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbc60, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.49
    void ___cxx_global_var_init_49() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbca0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbce0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbd20, 39 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_45_cxx.cxx
    void __GLOBAL__sub_I_unity_45_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x100535f80, 32 bytes, inline, placed by class name
    // Interface::GetStaticComponent(unsigned int) const
    void Interface::GetStaticComponent(uint param_1) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;

        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
            eastl::vector<ComponentContainer, eastl::allocator>::operator[](
                (vector<ComponentContainer, eastl::allocator>*)&field_8, (ulong)param_1);
        eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator, 0>::second(this_00);
    }

    // 0x10053f170, 16 bytes, complete-object destructor, inline, placed by class name
    // Interface::~Interface(): jumps straight to the base-object destructor

    // 0x10053f180, 48 bytes, base-object destructor, inline, placed by class name
    // Interface::~Interface()
    void Interface::~Interface() {
        (&field_72)->~vector();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

    // 0x10067b480, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PinchPoint::PinchPoint(): jumps straight to the base-object constructor

    // 0x10067b490, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // PinchPoint::PinchPoint()
    void PinchPoint::PinchPoint() {
        field_0 = 4294967295;
        field_8 = 0;
    }

    // 0x10067b5d0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // SwipeDelta::SwipeDelta()
    void SwipeDelta::SwipeDelta() {
        uint in_EAX;
        undefined8 uStack_18;

        uStack_18 = (ulong)in_EAX;
        std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)this,
                                                                                     (type*)((long)&uStack_18 + 4));
        field_8 = 0;
        field_12 = 0;
    }

    // 0x10067b6a0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // SwipeDelta::SwipeDelta(std::chrono::duration<long long, std::ratio<1l, 1000000000l> >, int, int): jumps straight to the base-object constructor

    // 0x10067b6b0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // SwipeDelta::SwipeDelta(std::chrono::duration<long long, std::ratio<1l, 1000000000l> >, int, int)
    /* SwipeDelta::SwipeDelta(std::chrono::duration<long long, std::ratio<1l, 1000000000l> >,
   int, int) */

    void SwipeDelta::SwipeDelta(long param_2, undefined4 param_3, undefined4 param_4) {
        field_0 = param_2;
        field_8 = param_3;
        field_12 = param_4;
    }

} // namespace jag::ui

namespace jag::oldscape {
    class InterfaceMouseEvent {
    public:
        ~InterfaceMouseEvent();
        InterfaceMouseEvent();
        InterfaceMouseEvent(InterfaceMouseEvent const&);
        InterfaceMouseEvent(InterfaceMouseEvent&&);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[12];
    };

} // namespace jag::oldscape

namespace jag::oldscape::rs2lib {
    class InterfaceGraphicMask {
    public:
        pointInside(int, int);
        InterfaceGraphicMask(int, int, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, int);
        ~InterfaceGraphicMask();

        // data members, from how the methods use this: 64 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        char _unknown_8[48];
        int field_56; // offset 56
        char _unknown_60[4];
    };

} // namespace jag::oldscape::rs2lib
