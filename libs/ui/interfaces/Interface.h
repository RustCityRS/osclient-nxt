// libs/ui/interfaces/Interface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::ui {
    class Interface {
    public:
        int GetInterfaceID() const;
        void GetStaticComponent(unsigned int arg1) const;
        ~Interface();
        Interface(int arg1, bool arg2, eastl::vector<PacketT<Array<unsigned char>>>& arg3,
                  std::function<shared_ptr<Component>(unsigned char, unsigned short)> callback,
                  void (*arg5)(Component*, PacketT<Array<unsigned char>>&, int));
        uint32_t GetChildHiddenUnsafe(const Component* component) const;
        void SetChildHiddenUnsafe(const Component* component, bool arg2);
        void GetChildCombinedIDs(eastl::vector<unsigned int>& arg1);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullInterfaceShared; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        int m_interfaceID;
        uint8_t _unknown_4[100];
        bool field_104;
    };

    class PinchPoint {
    public:
        PinchPoint();

    private:
        uint64_t field_0;
        uint64_t field_8;
    };

    class SwipeDelta {
    public:
        SwipeDelta();
        SwipeDelta* operator+=(const SwipeDelta& swipeDelta);
        SwipeDelta(std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration, int arg2, int arg3);

    private:
        duration<long long, std::ratio<1l, 1000000000l>>* field_0;
        int field_8;
        int field_12;
        uint8_t _unknown_16[4];
    };

    // 0x1003bba30
    void ___cxx_global_var_init_40(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bba70
    void ___cxx_global_var_init_41(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bbab0
    void ___cxx_global_var_init_42(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbaf0
    void ___cxx_global_var_init_43(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbb30
    void ___cxx_global_var_init_44(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bbb60
    void ___cxx_global_var_init_45(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbba0
    void ___cxx_global_var_init_46(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003bbbe0
    void ___cxx_global_var_init_47(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbc20
    void ___cxx_global_var_init_48(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbc60
    void ___cxx_global_var_init_49(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbca0
    void ___cxx_global_var_init_50(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbce0
    void ___cxx_global_var_init_51(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003bbd20
    void __GLOBAL__sub_I_unity_45_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x100535f80
    void Interface::GetStaticComponent(unsigned int arg1) const {
        ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)field_8[(unsigned long)arg1])
            ->second();
    }

    // 0x10053f180
    Interface::~Interface() {
        field_72.~vector();
        field_40.~vector();
        field_8.~vector();
    }

    // 0x10067b490
    PinchPoint::PinchPoint() : field_0(4294967295), field_8(0) {}

    // 0x10067b5d0
    SwipeDelta::SwipeDelta() {
        unsigned int in_EAX;
        type* in_RDX;

        uint64_t uStack_18 = (unsigned long)in_EAX;
        duration<int>(*((int*)((long)&uStack_18 + 4)), in_RDX);
        field_8 = 0;
        field_12 = 0;
    }

    // 0x10067b6b0
    SwipeDelta::SwipeDelta(std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration, int arg2, int arg3)
        : field_0(duration), field_8(arg2), field_12(arg3) {}

} // namespace jag::ui

namespace jag::oldscape {
    class InterfaceMouseEvent {
    public:
        ~InterfaceMouseEvent();
        InterfaceMouseEvent();
        InterfaceMouseEvent(const InterfaceMouseEvent& interfaceMouseEvent);
        InterfaceMouseEvent(InterfaceMouseEvent&& interfaceMouseEvent);

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint8_t _unknown_12[12];
    };

} // namespace jag::oldscape

namespace jag::oldscape::rs2lib {
    class InterfaceGraphicMask {
    public:
        uint64_t pointInside(int arg1, int arg2);
        InterfaceGraphicMask(int arg1, int arg2, Array<int>&& arg3, Array<int>&& arg4, int arg5);
        ~InterfaceGraphicMask();

    private:
        int field_0;
        int field_4;
        uint8_t _unknown_8[48];
        int field_56;
        uint8_t _unknown_60[4];
    };

} // namespace jag::oldscape::rs2lib
