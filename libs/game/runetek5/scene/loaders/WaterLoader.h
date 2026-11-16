// libs/game/runetek5/scene/loaders/WaterLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1003de820, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::vector<graphics::WaterPatchConfig, eastl::allocator> >::type make_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>()
    jag* make_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        vector* local_28[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>, int,
                                   eastl::vector<graphics::WaterPatchConfig, eastl::allocator>*&>(pvVar1, &local_2c,
                                                                                                  local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1003df5f0, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true, eastl::allocator>, 4ul, true, eastl::allocator>, int>(eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true, eastl::allocator>, 4ul, true, eastl::allocator> const&, int const&)
    bool jag::ArrayValidPosition<
        eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul,
                                true, eastl::allocator>,
            4ul, true, eastl::allocator>,
        int>(fixed_vector* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->size();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003df630, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true, eastl::allocator>, int>(eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true, eastl::allocator> const&, int const&)
    bool jag::ArrayValidPosition<
        eastl::fixed_vector<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                            eastl::allocator>,
        int>(fixed_vector* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->size();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003df670, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, int>(eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator> const&, int const&)
    bool jag::ArrayValidPosition<eastl::fixed_vector<game::ClientCompositeZone, 10ul, true, eastl::allocator>, int>(
        fixed_vector* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->size();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003e1080, 32 bytes, inline, placed by debug map only (low confidence)
    // eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator>* placement_new<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator>>(void*)
    fixed_vector* jag::placement_new<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                            8ul, true, eastl::allocator>,
        4ul, true, eastl::allocator>>(void* param_1) {
        eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true,
                                                                    eastl::allocator>,
                                                8ul, true, eastl::allocator>,
                            4ul, true, eastl::allocator>::fixed_vector(param_1);
        return param_1;
    }

    // 0x1003e10a0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator> >* placement_new<ref_counter_shared<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator> >, int, eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator>*&>(void*, int&&, eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<
            eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul,
                                                                        true, eastl::allocator>,
                                                    8ul, true, eastl::allocator>,
                                4ul, true, eastl::allocator>>,
        int,
        eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true,
                                                                    eastl::allocator>,
                                                8ul, true, eastl::allocator>,
                            4ul, true, eastl::allocator>*&>(void* param_1, int* param_2, fixed_vector** param_3) {
        ref_counter_shared<
            eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul,
                                                                        true, eastl::allocator>,
                                                    8ul, true, eastl::allocator>,
                                4ul, true, eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1003e13f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x1003e1400, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator>*)
    void jag::ref_counter_shared<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                            8ul, true, eastl::allocator>,
        4ul, true, eastl::allocator>>::
        ref_counter_shared(
            ref_counter_shared<
                eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>,
                                                                            8ul, true, eastl::allocator>,
                                                        8ul, true, eastl::allocator>,
                                    4ul, true, eastl::allocator>>* this,
            ulong param_1, fixed_vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(fixed_vector**)(this + 24) = param_2;
    }

    // 0x1003e1440, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator> >::DeleteData()
    void jag::ref_counter_shared<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                            8ul, true, eastl::allocator>,
        4ul, true, eastl::allocator>>::
        DeleteData(ref_counter_shared<
                   eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>,
                                                                               8ul, true, eastl::allocator>,
                                                           8ul, true, eastl::allocator>,
                                       4ul, true, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~fixed_vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 5576;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003e2dc0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::MapEnvironmentSettings* placement_new<game::MapEnvironmentSettings, PacketT<Array<unsigned char, eastl::allocator> >&>(void*, PacketT<Array<unsigned char, eastl::allocator> >&)
    MapEnvironmentSettings*
    jag::placement_new<game::MapEnvironmentSettings, PacketT<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, PacketT* param_2) {
        game::MapEnvironmentSettings::MapEnvironmentSettings(param_1, param_2);
        return param_1;
    }

    // 0x1003e2de0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48> >* placement_new<MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48> >, MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData*&, game::MapEnvironmentSettings*>(void*, MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData*&, game::MapEnvironmentSettings*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>,
        MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData*&, game::MapEnvironmentSettings*>(
        void* param_1, RefCounterAndData** param_2, MapEnvironmentSettings** param_3) {
        MakeSharedPoolRefCounter<game::MapEnvironmentSettings,
                                 MakeSharedPool<game::MapEnvironmentSettings, 48>>::MakeSharedPoolRefCounter(param_1,
                                                                                                             *param_2,
                                                                                                             *param_3);
        return param_1;
    }

    // 0x1003e2fd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48> >::MakeSharedPoolRefCounter(void*, game::MapEnvironmentSettings*): jumps straight to the base-object constructor

    // 0x1003e2fe0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48> >::MakeSharedPoolRefCounter(void*, game::MapEnvironmentSettings*)
    void jag::MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::MapEnvironmentSettings,
                                                          MakeSharedPool<game::MapEnvironmentSettings, 48>>* this,
                                 void* param_1, MapEnvironmentSettings* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7aa0 + 16;
        *(void**)(this + 16) = param_1;
        *(MapEnvironmentSettings**)(this + 24) = param_2;
    }

    // 0x1003e3020, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>::
        DeleteData(MakeSharedPoolRefCounter<game::MapEnvironmentSettings,
                                            MakeSharedPool<game::MapEnvironmentSettings, 48>>* this) {
        if (*(MapEnvironmentSettings**)(this + 24) != (MapEnvironmentSettings*)0) {
            (*(MapEnvironmentSettings**)(this + 24))->~MapEnvironmentSettings();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003e3050, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::MapEnvironmentSettings, MakeSharedPool<game::MapEnvironmentSettings, 48>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::MapEnvironmentSettings,
                                            MakeSharedPool<game::MapEnvironmentSettings, 48>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::MapEnvironmentSettings, 48>::deallocate(pvVar1);
    }

    // 0x1003e3a40, 112 bytes, inline, placed by debug map only (low confidence)
    // game::MapSquareLocation* placement_new<game::MapSquareLocation, signed char, signed char, signed char, int&, game::LocData, bool&, bool&, signed char&, shared_ptr<game::LocType>&, unsigned short&, bool&>(void*, signed char&&, signed char&&, signed char&&, int&, game::LocData&&, bool&, bool&, signed char&, shared_ptr<game::LocType>&, unsigned short&, bool&)
    MapSquareLocation*
    jag::placement_new<game::MapSquareLocation, signed char, signed char, signed char, int&, game::LocData, bool&,
                       bool&, signed char&, shared_ptr<game::LocType>&, unsigned short&, bool&>(
        void* param_1, signed* param_2, signed* param_3, signed* param_4, int* param_5, LocData* param_6, bool* param_7,
        bool* param_8, signed* param_9, shared_ptr* param_10, ushort* param_11, bool* param_12) {
        game::MapSquareLocation::MapSquareLocation(param_1, (int)(char)*param_2, (int)(char)*param_3,
                                                   (int)(char)*param_4, *param_5, param_6, *param_7, *param_8,
                                                   (int)(char)*param_9, param_10, *param_11, *param_12);
        return param_1;
    }

    // 0x1003e3ab0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384> >* placement_new<MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384> >, MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData*&, game::MapSquareLocation*>(void*, MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData*&, game::MapSquareLocation*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>,
        MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData*&, game::MapSquareLocation*>(
        void* param_1, RefCounterAndData** param_2, MapSquareLocation** param_3) {
        MakeSharedPoolRefCounter<game::MapSquareLocation,
                                 MakeSharedPool<game::MapSquareLocation, 16384>>::MakeSharedPoolRefCounter(param_1,
                                                                                                           *param_2,
                                                                                                           *param_3);
        return param_1;
    }

} // namespace jag

// 0x1003df6b0, 16 bytes, placed by debug map only (low confidence)
// floor(float)
void floor(float param_1) {
    _floorf();
}

// 0x1003df840, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}

// 0x1003df9b0, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x1003e0130, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x1003e0140, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

namespace jag::game {
    class WaterLoader {
    public:
        GetWaterPatches() const;
        GetDefaultWaterType() const;
        WaterLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&);
        IsLoaded() const;
        byte HasWaterPatches() const;
        Load(Js5ResourceProvider*, ConfigProvider*);
        LoadPatchData(Js5ResourceProvider*);
        ulong SetDefaultWaterPatch(ConfigProvider const&);
        LoadMapSquare(eastl::vector<graphics::WaterPatchConfig, eastl::allocator>&,
                      eastl::vector<unsigned short, BucketAllocatorEASTL>&, Js5ResourceProvider*, int, int,
                      math::Vector3T<float> const&);
        ~WaterLoader();

        // data members, from how the methods use this: 128 bytes
        uint field_0;        // offset 0
        uint field_4;        // offset 4
        shared_ptr field_8;  // offset 8
        undefined* field_24; // offset 24
        char _unknown_32[64];
        shared_ptr field_96; // offset 96
        ColourHSL field_112; // offset 112
    };

    // 0x1004114b0, 16 bytes, complete-object destructor, inline, placed by class name
    // WaterLoader::~WaterLoader(): jumps straight to the base-object destructor

    // 0x10041ccc0, 64 bytes, base-object destructor, inline, placed by class name
    // WaterLoader::~WaterLoader()
    void WaterLoader::~WaterLoader() {
        field_96->~shared_ptr();
        (&field_80)->~shared_ptr();
        (&field_56)->~vector();
        (&field_32)->~vector();
        field_8->~shared_ptr();
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003df850, 32 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33RotationQuaternion<float>(QuaternionT<float> const&)
    math* Matrix33RotationQuaternion<float>(QuaternionT* param_1) {
        new (this) Matrix33T<float>(param_1);
        return this;
    }

} // namespace jag::math
