// libs/game/runetek5/scene/loaders/EnvironmentLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EnvironmentLoader.h"

namespace jag::game {
    // 0x1039b4b08
    shared_ptr<MapEnvironmentSettings> EnvironmentLoader::DEFAULT_ENVIRONMENT_SETTINGS;

    // 0x1003dae50
    EnvironmentLoader::EnvironmentLoader(unsigned int arg1, unsigned int arg2,
                                         const shared_ptr<ClientCompositeData>& clientCompositeData)
        : MakeUniquePool<EnvironmentLoader, 48>(), field_0(arg1), field_4(arg2), field_8(clientCompositeData) {
        new (&field_24) shared_ptr();
        new (&field_40) shared_ptr();
    }

    // 0x1003daf40
    bool EnvironmentLoader::IsLoaded() const {
        bool bVar1 = field_24 != nullptr;
        bool bVar2 = true;
        if (!bVar1) {
            bVar2 = field_40 != nullptr;
        }
        return bVar2;
    }

    // 0x1003daf80
    uint8_t* EnvironmentLoader::GetEnvironmentSettings(shared_ptr<MapEnvironmentSettings>& mapEnvironmentSettings,
                                                       unsigned int arg2, unsigned int arg3, unsigned int arg4) const {
        CoordGrid* this_00;
        unsigned int uVar2;
        int iVar3;
        int iVar4;
        vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>, 8ul>,
               eastl::fixed_vector_allocator<1384ul, 4ul, 8ul, 0ul, true>>* this_01;
        vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>,
               eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true>>* this_02;
        vector<shared_ptr<MapEnvironmentSettings>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true>>* this_03;
        shared_ptr<MapEnvironmentSettings>* mapEnvironmentSettings_00;
        uint8_t** ppuVar5;
        uint8_t local_50[32];

        if (!(IsLoaded())) {
            mapEnvironmentSettings.reset();
            ppuVar5 = &DataStatus::NOTLOADED;
        } else {
            uVar2 = field_0 * 8192;
            if ((((arg2 < uVar2 + 8192) && (uVar2 <= arg2)) && (uVar2 = field_4 * 8192, uVar2 <= arg3)) &&
                (arg3 < uVar2 + 8192)) {
                if (!(field_8->operator_cast_to_bool())) {
                    mapEnvironmentSettings_00 = (shared_ptr<MapEnvironmentSettings>*)&field_24;
                } else {
                    new (local_50) CoordFine(0, (float)arg2, (float)arg3);
                    this_00 = (CoordGrid*)(local_50 + 16);
                    new (this_00) game::CoordGrid(local_50);
                    iVar3 = this_00->GetLocalX();
                    iVar4 = this_00->GetLocalZ();
                    this_01 =
                        (vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>, 8ul>,
                                eastl::fixed_vector_allocator<1384ul, 4ul, 8ul, 0ul, true>>*)*field_40;
                    this_02 =
                        (vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>,
                                eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true>>*)(*this_01)[(unsigned long)
                                                                                                           arg4];
                    this_03 = (vector<shared_ptr<MapEnvironmentSettings>,
                                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true>>*)(*this_02)
                        [(unsigned long)(unsigned int)(iVar3 >> 3)];
                    mapEnvironmentSettings_00 =
                        (shared_ptr<MapEnvironmentSettings>*)(*this_03)[(unsigned long)(unsigned int)(iVar4 >> 3)];
                }
                mapEnvironmentSettings = *mapEnvironmentSettings_00;
                ppuVar5 = &DataStatus::READY;
            } else {
                mapEnvironmentSettings.reset();
                ppuVar5 = &DataStatus::MISSING;
            }
        }
        return *ppuVar5;
    }

    // 0x1003db1f0
    uint8_t* EnvironmentLoader::Load(Js5ResourceProvider* js5ResourceProvider) {
        unsigned int arg2;
        long lVar2;
        unsigned long uVar3;
        EnvironmentLoader* pEVar4;
        unsigned int* puVar5;
        shared_ptr<MapEnvironmentSettings>* psVar6;
        uint8_t** ppuVar7;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>* this_01;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* this_02;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true>>* this_03;
        ClientCompositeZone* this_04;
        shared_ptr<MapEnvironmentSettings>* mapEnvironmentSettings;
        uint8_t* puVar8;
        unsigned int uVar9;
        EnvironmentLoader* arg1;
        bool bVar10;
        unsigned long arg1_00;
        ReturnValue local_70;
        shared_ptr local_58;
        unsigned long local_48;
        EnvironmentLoader* local_40;
        shared_ptr<ClientCompositeData>* local_38;

        uint8_t* this_00 = field_8;
        if (!(this_00->operator_cast_to_bool())) {
            LoadMapSquare(&local_70, (EnvironmentLoader*)js5ResourceProvider, js5ResourceProvider, field_0, field_4);
            field_24 = local_70;
            if (!((&field_24)->operator_cast_to_bool())) {
                ppuVar7 = &DataStatus::NOTLOADED;
            } else {
                ppuVar7 = &DataStatus::READY;
            }
            puVar8 = *ppuVar7;
        } else {
            local_40 = this;
            local_38 = (shared_ptr<ClientCompositeData>*)this_00;
            lVar2 = (*this_00).operator->();
            uVar3 = ((lVar2 + 9800))->size();
            local_70 = Array<shared_ptr<MapEnvironmentSettings>, BucketAllocatorEASTL>(uVar3);
            bVar10 = true;
            uVar9 = 0;
            while (true) {
                lVar2 = (*local_38).operator->();
                arg1 = (EnvironmentLoader*)(unsigned long)uVar9;
                pEVar4 = (EnvironmentLoader*)((lVar2 + 9800))->size();
                if (pEVar4 <= arg1)
                    break;
                lVar2 = (*local_38).operator->();
                puVar5 = (unsigned int*)(*((lVar2 + 9800)))[(unsigned long)arg1];
                arg2 = *puVar5;
                lVar2 = (*local_38).operator->();
                pEVar4 = arg1;
                lVar2 = (*((lVar2 + 9800)))[(unsigned long)arg1];
                LoadMapSquare((ReturnValue*)&local_58, pEVar4, js5ResourceProvider, arg2, *(unsigned int*)(lVar2 + 4));
                if (!(shared_ptr::operator_cast_to_bool(&local_58))) {
                    bVar10 = false;
                } else {
                    psVar6 = &local_70[(unsigned long)arg1];
                    *psVar6 = local_58;
                }
                uVar9 = uVar9 + 1;
            }
            if (bVar10) {
                make_shared<eastl::fixed_vector<
                    eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>(
                    (ReturnValue*)&local_58);
                local_40 = (EnvironmentLoader*)&local_40->field_40;
                *local_40 = local_58;
                local_48 = 0;
                do {
                    (*local_40).operator->();
                    eastl::fixed_vector<
                        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>, 8ul>,
                        4ul>::push_back();
                    uVar3 = 0;
                    do {
                        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>,
                                            8ul>::push_back();
                        uVar3 = uVar3 + 1;
                        arg1_00 = 1;
                        do {
                            psVar6 = (shared_ptr<MapEnvironmentSettings>*)
                                eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul>::push_back();
                            this_01 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                              eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)(*local_38)
                                          .operator->();
                            this_02 =
                                (vector<
                                    eastl::fixed_vector<ClientCompositeZone, 10ul>,
                                    eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>*)(*this_01)[local_48];
                            this_03 =
                                (vector<ClientCompositeZone,
                                        eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true>>*)(*this_02)[uVar3];
                            this_04 = (ClientCompositeZone*)(*this_03)[arg1_00];
                            if (!(this_04->IsValid())) {
                                *psVar6 = DEFAULT_ENVIRONMENT_SETTINGS;
                            } else {
                                mapEnvironmentSettings = (shared_ptr<MapEnvironmentSettings>*)
                                    local_70[(unsigned long)(unsigned int)this_04->field_16];
                                *psVar6 = *mapEnvironmentSettings;
                            }
                            arg1_00 = arg1_00 + 1;
                        } while (arg1_00 != 9);
                    } while (uVar3 != 8);
                    local_48 = local_48 + 1;
                } while (local_48 != 4);
                ppuVar7 = &DataStatus::READY;
                local_48 = 4;
            } else {
                ppuVar7 = &DataStatus::NOTLOADED;
            }
            puVar8 = *ppuVar7;
        }
        return puVar8;
    }

    // 0x1003db4e0
    auto EnvironmentLoader::LoadMapSquare(Js5ResourceProvider* js5ResourceProvider, unsigned int arg2,
                                          unsigned int arg3) {
        PacketT<Array<unsigned char> _> local_48;

        auto result;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        auto puVar1 = js5ResourceProvider->GetFile(local_38, *(Js5Archive::JS5_MAPS), arg3 << 7 | arg2, 6,
                                                   (Priority*)Priority::HIGH, true, false, false);
        if (puVar1 == DataStatus::MISSING) {
            result = DEFAULT_ENVIRONMENT_SETTINGS;
        } else if (puVar1 == DataStatus::READY) {
            *local_38;
            MakeSharedPool<MapEnvironmentSettings, 48>::MakeShared<PacketT<Array<unsigned char>>&>(&local_48);
            result = local_48;
        }
        return result;
    }

} // namespace jag::game

namespace jag {
    // 0x1003db6c0
    shared_ptr_if_not_array<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>::type
    make_shared<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>() {
        ref_counter_shared<eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, _8ul>, _8ul>, _4ul>
                               _>* ref_counter_shared;
        int local_2c;
        fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, _8ul>, _8ul>,
                     _4ul>* local_28[2];

        auto arg1 = aligned_alloc(5608, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::fixed_vector<
                eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>,
                4ul>>::type result;
        } else {
            local_28[0] = placement_new<eastl::fixed_vector<
                eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared = placement_new<
                ref_counter_shared<eastl::fixed_vector<
                    eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>,
                int,
                eastl::fixed_vector<
                    eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>,
                    4ul>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
