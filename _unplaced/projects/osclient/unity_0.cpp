// _unplaced/projects/osclient/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "_unplaced/classes/jag/TintMode.h"
#include "_unplaced/classes/jag/oldscape/sound/PCMStreamable.h"
#include "libs/graphics/runetek7/animation/Animation.h"
#include "libs/graphics/runetek7/particles/Particle.h"

namespace jag {
    // 0x10017dee0
    shared_ptr_if_not_array<oldscape::ChatLine>::type
    make_shared<oldscape::ChatLine, int&, eastl::string const&, eastl::string const&, eastl::string const&>(
        int& arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ChatLine* local_40[2];

        auto arg1_00 = aligned_alloc(280, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::ChatLine>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::ChatLine, int&, eastl::stringconst&, eastl::stringconst&, eastl::stringconst&>(
                    (void*)((long)arg1_00 + 32), arg1, str1, str2, str3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ChatLine>, int, oldscape::ChatLine*&>(arg1_00, &local_44,
                                                                                                 local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1001981a0: TintMode::TintMode() has the same machine code as Error::Error()

    // 0x100198d90
    char const* GetErrorString<eastl::string>(eastl::string& str, int arg2) {
        char local_228[520];

        if (_strerror_r(arg2, local_228, 512) == 0) {
            str.assign(local_228);
        } else {
            str.clear();
        }
        if (str.empty() != '\0') {
            str.reserve(16);
            str.sprintf("Error (%d)", (unsigned long)(unsigned int)arg2);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1001a8860
    oldscape::ChatLine*
    placement_new<oldscape::ChatLine, int&, eastl::string const&, eastl::string const&, eastl::string const&>(
        void* arg1, int& arg2, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3) {
        new (arg1) oldscape::ChatLine(arg2, str1, str2, str3);
        return arg1;
    }

    // 0x1001a8880
    ref_counter_shared<oldscape::ChatLine>*
    placement_new<ref_counter_shared<oldscape::ChatLine>, int, oldscape::ChatLine*&>(void* arg1, int&& arg2,
                                                                                     oldscape::ChatLine*& arg3) {
        new (arg1) ref_counter_shared<oldscape::ChatLine>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001a8e00
    oldscape::rs2lib::social::DisplayName*
    placement_new<oldscape::rs2lib::social::DisplayName, eastl::string, oldscape::rs2lib::social::NameSpace&>(
        void* arg1, eastl::string&& str, oldscape::rs2lib::social::NameSpace& nameSpace) {
        new (arg1) oldscape::rs2lib::social::DisplayName(str, nameSpace);
        return arg1;
    }

    // 0x1001a8e20
    ref_counter_shared<oldscape::rs2lib::social::DisplayName>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::DisplayName>, int,
                  oldscape::rs2lib::social::DisplayName*&>(void* arg1, int&& arg2,
                                                           oldscape::rs2lib::social::DisplayName*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::DisplayName>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001aa6f0
    oldscape::ClientScript* placement_new<oldscape::ClientScript>(void* arg1) {
        *(uint64_t*)((long)arg1 + 144) = 0;
        *(uint64_t*)((long)arg1 + 152) = 0;
        *(uint64_t*)((long)arg1 + 128) = 0;
        *(uint64_t*)((long)arg1 + 136) = 0;
        *(uint64_t*)((long)arg1 + 112) = 0;
        *(uint64_t*)((long)arg1 + 120) = 0;
        *(uint64_t*)((long)arg1 + 96) = 0;
        *(uint64_t*)((long)arg1 + 104) = 0;
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 160) = 0;
        new (arg1) oldscape::ClientScript();
        return arg1;
    }

    // 0x1001aa750
    ref_counter_shared<oldscape::ClientScript>*
    placement_new<ref_counter_shared<oldscape::ClientScript>, int, oldscape::ClientScript*&>(
        void* arg1, int&& arg2, oldscape::ClientScript*& arg3) {
        new (arg1) ref_counter_shared<oldscape::ClientScript>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001ae510
    oldscape::rs2lib::IfType* placement_new<oldscape::rs2lib::IfType, int&>(void* arg1, int& arg2) {
        new (arg1) oldscape::rs2lib::IfType(arg2);
        return arg1;
    }

    // 0x1001ae530
    ref_counter_shared<oldscape::rs2lib::IfType>*
    placement_new<ref_counter_shared<oldscape::rs2lib::IfType>, int, oldscape::rs2lib::IfType*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::IfType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::IfType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001b5e10
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1001b5e70
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1001b5e90
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1001b5ef0
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1001b5f50
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1001b5fb0
    void ___cxx_global_var_init_8(void) {
        oldscape::defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x1001b5fc0
    void ___cxx_global_var_init_9(void) {
        uint64_t local_28 = 21474836484;
        mach_header* local_38 = &__mh_execute_header;
        uint64_t uStack_30 = 12884901890;
        uint64_t local_40 = 6;
        new ((Array<oldscape::Font>*)&oldscape::AllFonts) Array<oldscape::Font>(&local_38);
        ___cxa_atexit(PTR__Array_100ee6788, &oldscape::AllFonts, 4294967296);
    }

    // 0x1001b64a0
    void ___cxx_global_var_init_41(void) {

        new ((hash_map<int, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>*)&oldscape::ChatHistory::m_history)
            eastl::hash_map<int, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6da0, &oldscape::ChatHistory::m_history, 4294967296);
    }

    // 0x1001b64f0
    void ___cxx_global_var_init_43(void) {

        new ((hash_map<int, shared_ptr<oldscape::ChatLine>>*)&oldscape::ChatHistory::m_historyByUid)
            eastl::hash_map<int, shared_ptr<oldscape::ChatLine>>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6d90, &oldscape::ChatHistory::m_historyByUid, 4294967296);
    }

    // 0x1001b6580
    void ___cxx_global_var_init_51(void) {
        hash<int> local_28;
        equal_to<int> local_20;

        new ((hash_map<int, oldscape::ClientInvCache>*)&oldscape::ClientInvCache::m_invList)
            eastl::hash_map<int, oldscape::ClientInvCache>(32, local_28, local_20, local_30);
        ___cxa_atexit(PTR__hash_map_100ee6d98, &oldscape::ClientInvCache::m_invList, 4294967296);
    }

    // 0x1001b6660
    void ___cxx_global_var_init_68(void) {
        eastl::string local_38;

        if (*PTR_m_spriteNamesInBinary_100ee4950 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesInBinary_100ee4950) != 0) {
                local_38 = eastl::string("titlewide.png");
                new (PTR_m_spriteNamesInBinary_100ee6aa0) eastl::vector<eastl::string>(&local_38, DAT_00000001);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesInBinary_100ee6aa0, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesInBinary_100ee4950);
            }
        }
    }

    // 0x1001b6760
    void ___cxx_global_var_init_71(void) {
        long lVar2;
        eastl::string local_2c8;
        eastl::string local_2a8;
        eastl::string local_288;
        eastl::string local_268;
        eastl::string local_248;
        eastl::string local_228;
        eastl::string local_208;
        eastl::string local_1e8;
        eastl::string local_1c8;
        eastl::string local_1a8;
        eastl::string local_188;
        eastl::string local_168;
        eastl::string local_148;
        eastl::string local_128;
        eastl::string local_108;
        eastl::string local_e8;
        eastl::string local_c8;
        eastl::string local_a8;
        eastl::string local_88;
        eastl::string local_68;
        eastl::string local_48;

        if (*PTR_m_spriteNames_100ee4948 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNames_100ee4948) != 0) {
                local_2c8 = eastl::string("logo_osrs");
                local_2a8 = eastl::string("logo_deadman_mode");
                local_288 = eastl::string("logo_seasonal_mode");
                local_268 = eastl::string("titlebox");
                local_248 = eastl::string("titlebutton");
                local_228 = eastl::string("titlebutton_large");
                local_208 = eastl::string("play_now_text");
                local_1e8 = eastl::string("titlebutton_wide42,1");
                local_1c8 = eastl::string("runes");
                local_1a8 = eastl::string("title_mute");
                local_188 = eastl::string("volume_options_bobble_slider");
                local_168 = eastl::string("options_radio_buttons,0");
                local_148 = eastl::string("options_radio_buttons,2");
                local_128 = eastl::string("options_radio_buttons,4");
                local_108 = eastl::string("options_radio_buttons,6");
                local_e8 = eastl::string("login_icons");
                local_c8 = eastl::string("sl_back");
                local_a8 = eastl::string("sl_flags");
                local_88 = eastl::string("sl_arrows");
                local_68 = eastl::string("sl_stars");
                local_48 = eastl::string("sl_button");
                new (PTR_m_spriteNames_100ee6a98) eastl::vector<eastl::string>(&local_2c8, *21);
                lVar2 = 640;
                do {
                    (&local_2c8 + lVar2)->~basic_string();
                    lVar2 = lVar2 - 32;
                } while (lVar2 != -32);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNames_100ee6a98, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNames_100ee4948);
            }
        }
    }

    // 0x1001b6d80
    void ___cxx_global_var_init_93(void) {
        eastl::string local_38;

        if (*PTR_m_spriteNamesOptional_100ee4958 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesOptional_100ee4958) != 0) {
                local_38 = eastl::string("logo_speedrunning");
                new (PTR_m_spriteNamesOptional_100ee6aa8) eastl::vector<eastl::string>(&local_38, DAT_00000001);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesOptional_100ee6aa8, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesOptional_100ee4958);
            }
        }
    }

    // 0x1001b6f40
    void ___cxx_global_var_init_194(void) {
        long lVar1 = 0;
        do {
            new ((&oldscape::ReceivePlayerPositions::m_apCache + lVar1)) shared_ptr();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 32768);
        ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
    }

    // 0x1001b7000
    void ___cxx_global_var_init_195(void) {
        int local_14;

        *((ReturnValue*)&oldscape::ReceivePlayerPositions::m_tempP) =
            make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(local_14);
        ___cxa_atexit(PTR__shared_ptr_100ee5518, &oldscape::ReceivePlayerPositions::m_tempP, 4294967296);
    }

    // 0x1001b7100
    void ___cxx_global_var_init_244(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b7140
    void ___cxx_global_var_init_245(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b7180
    void ___cxx_global_var_init_246(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b71b0
    void ___cxx_global_var_init_247(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b71f0
    void ___cxx_global_var_init_248(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7230
    void ___cxx_global_var_init_249(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7270
    void ___cxx_global_var_init_250(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b72b0
    void ___cxx_global_var_init_251(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b72f0
    void ___cxx_global_var_init_252(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7330
    void ___cxx_global_var_init_253(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7370
    void ___cxx_global_var_init_254(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b73b0
    void ___cxx_global_var_init_255(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b73f0
    void ___cxx_global_var_init_256(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7430
    void ___cxx_global_var_init_257(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7470
    void ___cxx_global_var_init_258(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b74d0
    void ___cxx_global_var_init_259(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7510
    void ___cxx_global_var_init_260(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b7570
    void ___cxx_global_var_init_261(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b75b0
    void ___cxx_global_var_init_262(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b75f0
    void ___cxx_global_var_init_263(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7630
    void ___cxx_global_var_init_264(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7670
    void ___cxx_global_var_init_265(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4960;
        if (*PTR_m_pSingleton_100ee4960 == '\0') {
            ___cxa_atexit(std::unique_ptr<SecureRandom>::~unique_ptr, PTR_m_pSingleton_100ee6bd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b76b0
    void ___cxx_global_var_init_266(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics>::~unique_ptr, PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7730
    void ___cxx_global_var_init_268(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee6980;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4930;
        if (*PTR_NullCacheObj_100ee4930 == '\0') {
            new (PTR_NullCacheObj_100ee6980) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5430, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7770
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_31();
        ___cxx_global_var_init_33();
        ___cxx_global_var_init_35();
        ___cxx_global_var_init_37();
        ___cxx_global_var_init_39();
        ___cxx_global_var_init_41();
        ___cxx_global_var_init_43();
        ___cxx_global_var_init_44();
        ___cxx_global_var_init_51();
        ___cxx_global_var_init_55();
        ___cxx_global_var_init_57();
        ___cxx_global_var_init_185();
        ___cxx_global_var_init_192();
        ___cxx_global_var_init_193();
        ___cxx_global_var_init_194();
        ___cxx_global_var_init_195();
        ___cxx_global_var_init_196();
        ___cxx_global_var_init_197();
        ___cxx_global_var_init_206();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x103c054b0
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x103c054f0
    uint8_t WORLD_ORTHOGONAL[12];

    // 0x1001981a0: RenderPassBitSet::Clear() has the same machine code as Error::Error()

    // 0x1001981a0: RenderPassBitSet::RenderPassBitSet() has the same machine code as Error::Error()

    // 0x1001981a0: ParticleModuleUpdateState::ParticleModuleUpdateState() has the same machine code as Error::Error()

    // 0x10019c120: AnimationInfo::~AnimationInfo() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

    // 0x10019c130: AnimationInfo::~AnimationInfo() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x100fa67a8, set at startup by ___cxx_global_var_init.206
    ScriptRunnerImpl g_SRStatics = ScriptRunnerImpl();

    // 0x103c05500
    uint8_t AllFonts[24];

    // 0x103c05518, set at startup by ___cxx_global_var_init.10
    eastl::string typeToInstance[10] = {
        /* [1] */ "hiscore_oldschool_ironman",
        /* [2] */ "hiscore_oldschool_hardcore_ironman",
        /* [3] */ "hiscore_oldschool_deadman",
        /* [4] */ "hiscore_oldschool_seasonal",
        /* [5] */ "hiscore_oldschool_ultimate",
        /* [6] */ "hiscore_oldschool_tournament",
        /* [7] */ "oldschool_gim_hiscores",
        /* [8] */ "oldschool_hardcore_gim_hiscores",
        /* [9] */ "hiscore_oldschool_fresh_start",
    };

    // 0x103c05688, set at startup by ___cxx_global_var_init.57
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> g_nullScript =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

} // namespace jag::oldscape

namespace jag::render {
    // 0x1001981a0: TextureFormatBitSet::Clear() has the same machine code as Error::Error()

    // 0x1001981a0: TextureFormatBitSet::TextureFormatBitSet() has the same machine code as Error::Error()

} // namespace jag::render

namespace jag::oldscape::defaults {
    // 0x103c054fc
    int32_t DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag::hal::audio::decoders::vorbis {
    // 0x100198190: VorbisDecoderPacket::~VorbisDecoderPacket() has the same machine code as oldscape::PacketJ<Array<unsigned char>>::~PacketJ()

} // namespace jag::hal::audio::decoders::vorbis

namespace jag::oldscape::sound {
    // 0x1001981a0: PCMStreamable::PCMStreamable() has the same machine code as Error::Error()

} // namespace jag::oldscape::sound

// 0x1001b6fc0
void ___cxx_global_array_dtor(void) {
    long lVar1 = 32752;
    do {
        ((&jag::oldscape::ReceivePlayerPositions::m_apCache + lVar1))->~shared_ptr();
        lVar1 = lVar1 - 16;
    } while (lVar1 != -16);
}
