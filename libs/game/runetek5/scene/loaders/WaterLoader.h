// libs/game/runetek5/scene/loaders/WaterLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1003de820
    shared_ptr_if_not_array<eastl::vector<graphics::WaterPatchConfig>>::type
    make_shared<eastl::vector<graphics::WaterPatchConfig>>() {
        ref_counter_shared<eastl::vector<graphics::WaterPatchConfig> _>* ref_counter_shared;
        int local_2c;
        vector<graphics::WaterPatchConfig>* local_28[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::vector<graphics::WaterPatchConfig>>::type result;
        } else {
            local_28[0] = placement_new<eastl::vector<graphics::WaterPatchConfig>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared = placement_new<ref_counter_shared<eastl::vector<graphics::WaterPatchConfig>>, int,
                                               eastl::vector<graphics::WaterPatchConfig>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1003df5f0
    bool ArrayValidPosition<
        eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul>, 10ul>, 4ul>, int>(
        const eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul>, 10ul>, 4ul>&
            clientCompositeZonesss,
        const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = clientCompositeZonesss.size();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003df630
    bool ArrayValidPosition<eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul>, 10ul>, int>(
        const eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul>, 10ul>& clientCompositeZoness,
        const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = clientCompositeZoness.size();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003df670
    bool ArrayValidPosition<eastl::fixed_vector<game::ClientCompositeZone, 10ul>, int>(
        const eastl::fixed_vector<game::ClientCompositeZone, 10ul>& clientCompositeZones, const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = clientCompositeZones.size();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003e1080
    eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>,
                        4ul>*
    placement_new<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>(
        void* arg1) {
        new (arg1) eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>();
        return arg1;
    }

    // 0x1003e10a0
    ref_counter_shared<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>*
    placement_new<
        ref_counter_shared<eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>,
        int,
        eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>*&>(
        void* arg1, int&& arg2,
        eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>*& arg3) {
        new (arg1) ref_counter_shared<eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>(
            (long)*arg2, arg3);
        return arg1;
    }

    // 0x1003e1400
    ref_counter_shared<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>::
        ref_counter_shared(
            unsigned long arg1,
            eastl::fixed_vector<
                eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>*
                mapEnvironmentSettingssss)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71b0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, _8ul>, _8ul>,
                       _4ul>**)(this + 24) = mapEnvironmentSettingssss;
    }

    // 0x1003e1440
    void ref_counter_shared<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>,
        4ul>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((fixed_vector<
                         eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>,
                         4ul>*)(*(long*)(this + 24) + lVar2))
                        ->~fixed_vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 5576;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1003e2dc0
    game::MapEnvironmentSettings*
    placement_new<game::MapEnvironmentSettings, PacketT<Array<unsigned char>>&>(void* arg1,
                                                                                PacketT<Array<unsigned char>>& arg2) {
        new (arg1) game::MapEnvironmentSettings(arg2);
        return arg1;
    }

    // 0x1003e2de0
    MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>*
    placement_new<
        MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>,
        MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData*&, game::MapEnvironmentSettings*>(
        void* arg1, MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData*& arg2,
        game::MapEnvironmentSettings*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>(
                arg2, arg3);
        return arg1;
    }

    // 0x1003e2fe0
    MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>::
        MakeSharedPoolRefCounter(void* arg1, game::MapEnvironmentSettings* mapEnvironmentSettings)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7aa0 + 16;
        *(void**)(this + 16) = arg1;
        *(MapEnvironmentSettings**)(this + 24) = mapEnvironmentSettings;
    }

    // 0x1003e3020
    void MakeSharedPoolRefCounter<game::MapEnvironmentSettings,
                                  MakeSharedPool<game::MapEnvironmentSettings, 48>>::DeleteData() {
        if (*(MapEnvironmentSettings**)(this + 24) != nullptr) {
            (*(MapEnvironmentSettings**)(this + 24))->~MapEnvironmentSettings();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1003e3050
    void MakeSharedPoolRefCounter<game::MapEnvironmentSettings,
                                  MakeSharedPool<game::MapEnvironmentSettings, 48>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::MapEnvironmentSettings, 48>::deallocate(arg1);
    }

    // 0x1003e3a40
    game::MapSquareLocation*
    placement_new<game::MapSquareLocation, signed char, signed char, signed char, int&, game::LocData, bool&, bool&,
                  signed char&, shared_ptr<game::LocType>&, unsigned short&, bool&>(
        void* arg1, signed char&& arg2, signed char&& arg3, signed char&& arg4, int& arg5, game::LocData&& locData,
        bool& arg7, bool& arg8, signed char& arg9, shared_ptr<game::LocType>& locType, unsigned short& arg11,
        bool& arg12) {
        new (arg1) game::MapSquareLocation(arg2, arg3, arg4, arg5, locData, arg7, arg8, arg9, locType, arg11, arg12);
        return arg1;
    }

    // 0x1003e3ab0
    MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>*
    placement_new<MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>,
                  MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData*&, game::MapSquareLocation*>(
        void* arg1, MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData*& arg2,
        game::MapSquareLocation*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>(
            arg2, arg3);
        return arg1;
    }

} // namespace jag

// 0x1003df6b0
void floor(float arg1) {
    _floorf();
}

// 0x1003df840
void acos(float arg1) {
    _acosf();
}

// 0x1003df9b0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x1003e0130
void sin(float arg1) {
    _sinf();
}

// 0x1003e0140
void cos(float arg1) {
    _cosf();
}

namespace jag::game {
    class WaterLoader {
    public:
        uint8_t* GetWaterPatches() const;
        shared_ptr GetDefaultWaterType() const;
        WaterLoader(unsigned int arg1, unsigned int arg2, const shared_ptr<ClientCompositeData>& clientCompositeData);
        bool IsLoaded() const;
        bool HasWaterPatches() const;
        uint8_t* Load(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        uint64_t LoadPatchData(Js5ResourceProvider* js5ResourceProvider);
        uint32_t SetDefaultWaterPatch(const ConfigProvider& configProvider);
        void LoadMapSquare(eastl::vector<graphics::WaterPatchConfig>& waterPatchConfigs,
                           eastl::vector<unsigned short>& arg2, Js5ResourceProvider* js5ResourceProvider, int arg4,
                           int arg5, const math::Vector3T<float>& vector3);
        ~WaterLoader();

    private:
        unsigned int field_0;
        unsigned int field_4;
        shared_ptr field_8;
        uint8_t* field_24;
        uint8_t _unknown_32[64];
        shared_ptr m_defaultWaterType;
        ColourHSL field_112;
    };

    // 0x10041ccc0
    WaterLoader::~WaterLoader() {
        m_defaultWaterType->~shared_ptr();
        field_80.~shared_ptr();
        field_56.~vector();
        field_32.~vector();
        field_8->~shared_ptr();
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003df850
    Matrix33T<float> Matrix33RotationQuaternion<float>(const QuaternionT<float>& quaternion) {
        QuaternionT<float>* in_RSI;

        new (quaternion) Matrix33T<float>(*in_RSI);
        return quaternion;
    }

} // namespace jag::math
