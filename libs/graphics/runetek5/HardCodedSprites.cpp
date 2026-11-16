// libs/graphics/runetek5/HardCodedSprites.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "HardCodedSprites.h"

namespace jag {
    // 0x10011c9a0: HardCodedSprites::SpriteGroup::~SpriteGroup() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10011c9a0: HardCodedSprites::SpriteReference::~SpriteReference() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10012a760: HardCodedSprites::SpriteGroup::~SpriteGroup() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x10012a760: HardCodedSprites::SpriteReference::~SpriteReference() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x10097b620
    HardCodedSprites::HardCodedSprites(Js5ResourceProvider& js5ResourceProvider, game::ConfigProvider& configProvider,
                                       graphics::FontHelpers& fontHelpers, graphics::RT7Core& rt7Core)
        : field_0(rt7Core), field_8(fontHelpers), field_16(configProvider), field_24(js5ResourceProvider), field_32(0) {
        uint8_t* local_88 = &field_40;
        new (local_88) eastl::fixed_vector<HardCodedSprites::SpriteGroup*, 13ul>();
        new (&field_184) eastl::hash_map<int, shared_ptr<Array<HardCodedSprites::SpriteReference>>>(local_90);
        uint8_t* local_80 = &field_184;
        new (&field_240) SpriteGroup(this);
        uint32_t* local_78 = &field_240;
        new (&field_264) SpriteGroup(this);
        uint32_t* local_70 = &field_264;
        new (&field_288) SpriteGroup(this);
        uint32_t* local_60 = &field_312;
        uint32_t* local_68 = &field_288;
        new (local_60) SpriteGroup(this);
        uint32_t* local_58 = &field_336;
        new (local_58) SpriteGroup(this);
        uint32_t* local_50 = &field_360;
        new (local_50) SpriteGroup(this);
        uint32_t* local_48 = &field_384;
        new (local_48) SpriteGroup(this);
        new (&field_408) SpriteGroup(this);
        int* local_40 = &field_408;
        new (&field_432) SpriteGroup(this);
        uint32_t* local_38 = &field_432;
        new (&field_456) SpriteGroup(this);
        new (&field_480) SpriteGroup(this);
        new (&field_504) SpriteGroup(this);
        new (field_528) SpriteGroup(this);
    }

    // 0x10097b8b0
    void HardCodedSprites::MainDraw() {
        uint32_t uVar2;
        GraphicsDefaults* this_00;
        unsigned long uVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        uint32_t* puVar5;
        uint32_t* puVar6;
        long lVar7;
        uint32_t* puVar8;
        Array<graphics::FontHelpers::ModIconReference> local_58;
        shared_ptr local_40;

        if (field_32 == '\0') {
            this_00 = (GraphicsDefaults*)field_16->GetGraphicsDefaults();
            if (this_00 != nullptr) {
                uVar2 = this_00->GetFont11pxRegularID();
                field_240 = uVar2;
                uVar2 = this_00->GetUsageType();
                field_264 = uVar2;
                uVar2 = this_00->GetFont12pxBoldID();
                field_288 = uVar2;
                uVar2 = this_00->GetSpriteCompassID();
                field_312 = uVar2;
                uVar2 = this_00->GetSpriteMapFlagID();
                field_336 = uVar2;
                uVar2 = this_00->GetSpriteMapDotsID();
                field_360 = uVar2;
                uVar2 = this_00->GetSpriteOtherLevelID();
                field_384 = uVar2;
                uVar2 = this_00->GetSpriteCrossID();
                field_504 = uVar2;
                field_408 = this_00->GetSpriteModIconsID();
                uVar2 = this_00->GetSpriteHintHeadIconsID();
                field_432 = uVar2;
                uVar2 = this_00->GetSpriteHintMapMarkersID();
                field_456 = uVar2;
                uVar2 = this_00->GetSpriteHintMapEdgeID();
                field_480 = uVar2;
                *(uint32_t*)field_528 = 4294967295;
                GetSpriteReferencesFromGroupID((ReturnValue*)&local_40, this, field_408, false);
                if (shared_ptr::operator_cast_to_bool(&local_40) != '\0') {
                    uVar4 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_40.operator->())
                                ->end();
                    local_58 = Array<graphics::FontHelpers::ModIconReference>(uVar4);
                    this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)*local_40;
                    puVar5 = (uint32_t*)this_02->data();
                    puVar6 = (uint32_t*)this_02->end();
                    if (puVar5 != puVar6) {
                        uVar4 = 0;
                        do {
                            uVar2 = puVar5[1];
                            lVar7 = local_58[uVar4];
                            *(uint32_t*)(lVar7 + 4) = uVar2;
                            uVar2 = *puVar5;
                            puVar8 = &local_58[uVar4];
                            *puVar8 = uVar2;
                            lVar7 = local_58[uVar4];
                            (*((lVar7 + 8))) = (*((puVar5 + 2)));
                            uVar4 = uVar4 + 1;
                            puVar5 = puVar5 + 6;
                        } while (puVar5 != puVar6);
                    }
                    field_8->SetModIcons(local_58);
                    field_32 = 1;
                }
            }
        }
    }

    // 0x10097bb30
    auto HardCodedSprites::GetSpriteReferencesFromGroupID(int arg1, bool arg2) {
        int iVar2;
        unsigned int uVar3;
        unsigned long uVar6;
        Array<HardCodedSprites::SpriteReference>* this_01;
        int* piVar7;
        CoordMapSquare* pCVar8;
        LoginManager* this_02;
        shared_ptr<Array<HardCodedSprites::SpriteReference>>* this_05;
        uint64_t in_register_00000009;
        unsigned long arg1_00;
        PacketView local_c0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_98;
        unsigned long local_88[2];
        uint64_t local_78;
        SpriteAtlasManager* local_70;
        vector<RGBAImage, BucketAllocatorEASTL> local_68;
        unsigned int local_50;
        ReturnValue* local_48;
        unsigned int local_38;

        int local_4c = (int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg2);
        if (local_4c != 0) {
            GetExistingSpriteReferencesFromGroupID(&result, this, arg1);
            if (result.operator_cast_to_bool()) {
                return result;
            }
            result.~shared_ptr();
        }
        if ((unsigned int)arg1 == 4294967295) {
            auto result;
        } else {
            local_c0 = PacketView();
            if ((uint8_t*)field_24->GetFile(local_c0, *(Js5Archive::JS5_SPRITES), (unsigned int)arg1, 0,
                                            (Priority*)Priority::HIGHEST, true, false, false) == DataStatus::READY) {
                local_68 = eastl::vector<RGBAImage, BucketAllocatorEASTL>();
                if (!(RAWDecoder::LoadFromPacket(local_68, local_c0))) {
                    new (&result) shared_ptr();
                } else {
                    local_70 = field_0->GetTextureManager()->GetSpriteAtlasManager();
                    local_88[0] = local_68.size();
                    local_48 = &result;
                    make_shared<Array<HardCodedSprites::SpriteReference>, unsigned long>(&result, local_88);
                    if (local_68.size() != 0) {
                        local_38 = 1;
                        arg1_00 = 0;
                        do {
                            this_01 = (Array<HardCodedSprites::SpriteReference>*)**local_48;
                            piVar7 = (int*)(*this_01)[arg1_00];
                            pCVar8 = &local_68[arg1_00];
                            iVar2 = pCVar8->GetX();
                            *piVar7 = iVar2;
                            pCVar8 = &local_68[arg1_00];
                            iVar2 = pCVar8->GetZ();
                            piVar7[1] = iVar2;
                            if ((0 < *piVar7) && (0 < iVar2)) {
                                this_02 = &local_68[arg1_00];
                                local_78 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                                this_02->GetDevCredentialsOutputDirectory())
                                               ->data();
                                pCVar8 = &local_68[arg1_00];
                                local_50 = pCVar8->GetX();
                                pCVar8 = &local_68[arg1_00];
                                uVar3 = pCVar8->GetZ();
                                ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                     local_68[arg1_00])
                                    ->second();
                                local_98 = shared_ptr();
                                graphics::SpriteAtlasManager::AddRuntimeSprite(
                                    local_88, (unsigned int)local_70, (unsigned int)local_78, local_50,
                                    *((fixed_vector<int, _4ul>*)(unsigned long)uVar3), nullptr);
                                (*((piVar7 + 2))) = *local_88;
                            }
                            uVar3 = local_38;
                            arg1_00 = (unsigned long)local_38;
                            uVar6 = local_68.size();
                            local_38 = uVar3 + 1;
                        } while (arg1_00 < uVar6);
                    }
                    &result = local_48;
                    if ((char)local_4c != '\0') {
                        this_05 = &field_184[(unsigned int)arg1];
                        *this_05 = result;
                    }
                }
            } else {
                new (&result) shared_ptr();
            }
        }
        return result;
    }

    // 0x10097be80
    auto HardCodedSprites::GetSpriteReferences(HardCodedSprites::SpriteGroup& spriteGroup) {
        ReturnValue local_38;

        uint8_t* this_00 = &spriteGroup.field_8;
        if (this_00->operator_cast_to_bool() == '\0') {
            if (field_32 == '\0') {
                return auto();
            }
            GetSpriteReferencesFromGroupID(&local_38, this, spriteGroup.field_0, false);
            *this_00 = local_38;
        }
        new (&result) shared_ptr(this_00);
        return result;
    }

    // 0x10097bf60
    void HardCodedSprites::ClearGroupSpriteReferences(HardCodedSprites::SpriteGroup& spriteGroup) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar1;
        long lVar2;
        Array<HardCodedSprites::SpriteReference>* this_01;
        unsigned long uVar3;
        unsigned int uVar5;
        unsigned long arg1;

        uint8_t* this_02 = &spriteGroup.field_8;
        if (this_02->operator_cast_to_bool()) {
            if (!(((Array<game::VarValue>*)(*this_02).operator->())->empty())) {
                pvVar1 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02).operator->();
                lVar2 = pvVar1->end();
                if (lVar2 != 0) {
                    uVar5 = 1;
                    arg1 = 0;
                    do {
                        this_01 = (Array<HardCodedSprites::SpriteReference>*)**this_02;
                        lVar2 = (*this_01)[arg1];
                        ((lVar2 + 8))->reset();
                        arg1 = (unsigned long)uVar5;
                        pvVar1 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02).operator->();
                        uVar3 = pvVar1->end();
                        uVar5 = uVar5 + 1;
                    } while (arg1 < uVar3);
                }
            }
            this_02->reset();
        }
    }

    // 0x10097c040
    auto HardCodedSprites::GetExistingSpriteReferencesFromGroupID(int arg1) {
        long lVar2;

        auto local_40 = field_184.find(arg1);
        auto local_50 = field_184.end();
        if (local_40 != local_50 == '\0') {
            auto result;
        } else {
            lVar2 = local_40.HeapBeginPtr();
            new (&result) shared_ptr((lVar2 + 8));
        }
        return result;
    }

    // 0x10097c0d0
    shared_ptr_if_not_array<Array<HardCodedSprites::SpriteReference>>::type
    make_shared<Array<HardCodedSprites::SpriteReference>, unsigned long>(unsigned long&& arg1) {
        ref_counter_shared<Array<HardCodedSprites::SpriteReference> _>* ref_counter_shared;
        int local_34;
        Array<HardCodedSprites::SpriteReference>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<HardCodedSprites::SpriteReference>>::type result;
        } else {
            local_30[0] = placement_new<Array<HardCodedSprites::SpriteReference>, unsigned long>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<HardCodedSprites::SpriteReference>>, int,
                              Array<HardCodedSprites::SpriteReference>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10097c1e0
    uint32_t* HardCodedSprites::GetCrossGroup() {
        uint32_t* puVar1 = (uint32_t*)field_528;
        if (*(int*)field_528 == -1) {
            puVar1 = &field_504;
        }
        return puVar1;
    }

    // 0x10097c200
    void HardCodedSprites::SetCrossGroupOverride(int arg1) {
        ClearGroupSpriteReferences(*field_528);
        int iVar1 = -1;
        if (field_504 != arg1) {
            iVar1 = arg1;
        }
        *(int*)field_528 = iVar1;
    }

} // namespace jag
