// libs/graphics/runetek5/HardCodedSprites.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "HardCodedSprites.h"

namespace jag {
    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    HardCodedSprites::SpriteGroup::~SpriteGroup();

    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    HardCodedSprites::SpriteReference::~SpriteReference();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    HardCodedSprites::SpriteGroup::~SpriteGroup();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    HardCodedSprites::SpriteReference::~SpriteReference();

    // 0x10097b620, 576 bytes, base-object constructor, placed by class name and debug map
    // HardCodedSprites::HardCodedSprites(Js5ResourceProvider&, game::ConfigProvider&, graphics::FontHelpers&, graphics::RT7Core&)
    void HardCodedSprites::HardCodedSprites(Js5ResourceProvider* param_1, ConfigProvider* param_2, FontHelpers* param_3,
                                            RT7Core* param_4) {
        allocator local_90[8];
        undefined1* local_88;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        field_0 = param_4;
        field_8 = param_3;
        field_16 = param_2;
        field_24 = param_1;
        field_32 = 0;
        local_88 = &field_40;
        new (local_88) eastl::fixed_vector<HardCodedSprites::SpriteGroup*, 13ul, true, eastl::allocator>();
        eastl::allocator::allocator(local_90, "EASTL hash_map");
        new (&field_184, local_90)
            eastl::hash_map<int, shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>,
                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        local_80 = &field_184;
        new (field_240, this) SpriteGroup();
        local_78 = field_240;
        new (field_264, this) SpriteGroup();
        local_70 = field_264;
        new (field_288, this) SpriteGroup();
        local_60 = field_312;
        local_68 = field_288;
        new (local_60) SpriteGroup(this);
        local_58 = field_336;
        new (local_58) SpriteGroup(this);
        local_50 = field_360;
        new (local_50) SpriteGroup(this);
        local_48 = field_384;
        new (local_48) SpriteGroup(this);
        new (field_408, this) SpriteGroup();
        local_40 = field_408;
        new (field_432, this) SpriteGroup();
        local_38 = field_432;
        new (field_456, this) SpriteGroup();
        new (field_480, this) SpriteGroup();
        new (field_504, this) SpriteGroup();
        new (field_528, this) SpriteGroup();
    }

    // 0x10097b8a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HardCodedSprites::HardCodedSprites(Js5ResourceProvider&, game::ConfigProvider&, graphics::FontHelpers&, graphics::RT7Core&): jumps straight to the base-object constructor

    // 0x10097b8b0, 528 bytes, placed by class name and debug map
    // HardCodedSprites::MainDraw()
    void HardCodedSprites::MainDraw() {
        bool bVar1;
        undefined4 uVar2;
        GraphicsDefaults* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        ulong uVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_02;
        undefined4* puVar4;
        undefined4* puVar5;
        long lVar6;
        undefined4* puVar7;
        Array<graphics::FontHelpers::ModIconReference, eastl::allocator> local_58[24];
        shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>> local_40[16];

        if (field_32 == '\0') {
            this_00 = (GraphicsDefaults*)field_16->GetGraphicsDefaults();
            if (this_00 != (GraphicsDefaults*)0) {
                uVar2 = this_00->GetFont11pxRegularID();
                *(undefined4*)field_240 = uVar2;
                uVar2 = this_00->GetUsageType();
                *(undefined4*)field_264 = uVar2;
                uVar2 = this_00->GetFont12pxBoldID();
                *(undefined4*)field_288 = uVar2;
                uVar2 = this_00->GetSpriteCompassID();
                *(undefined4*)field_312 = uVar2;
                uVar2 = this_00->GetSpriteMapFlagID();
                *(undefined4*)field_336 = uVar2;
                uVar2 = this_00->GetSpriteMapDotsID();
                *(undefined4*)field_360 = uVar2;
                uVar2 = this_00->GetSpriteOtherLevelID();
                *(undefined4*)field_384 = uVar2;
                uVar2 = this_00->GetSpriteCrossID();
                *(undefined4*)field_504 = uVar2;
                uVar2 = this_00->GetSpriteModIconsID();
                *(undefined4*)field_408 = uVar2;
                uVar2 = this_00->GetSpriteHintHeadIconsID();
                *(undefined4*)field_432 = uVar2;
                uVar2 = this_00->GetSpriteHintMapMarkersID();
                *(undefined4*)field_456 = uVar2;
                uVar2 = this_00->GetSpriteHintMapEdgeID();
                *(undefined4*)field_480 = uVar2;
                *(undefined4*)field_528 = 4294967295;
                GetSpriteReferencesFromGroupID((HardCodedSprites*)local_40, (int)this,
                                               SUB41(*(undefined4*)field_408, 0));
                bVar1 = local_40->operator_cast_to_bool();
                if (bVar1) {
                    this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                  shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator->(
                                      local_40);
                    uVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                    Array<graphics::FontHelpers::ModIconReference, eastl::allocator>::Array(local_58, uVar3);
                    this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)
                        shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator*(local_40);
                    puVar4 = (undefined4*)this_02->data();
                    puVar5 = (undefined4*)this_02->end();
                    if (puVar4 != puVar5) {
                        uVar3 = 0;
                        do {
                            uVar2 = puVar4[1];
                            lVar6 = Array<graphics::FontHelpers::ModIconReference, eastl::allocator>::operator[](
                                local_58, uVar3);
                            *(undefined4*)(lVar6 + 4) = uVar2;
                            uVar2 = *puVar4;
                            puVar7 = (undefined4*)
                                Array<graphics::FontHelpers::ModIconReference, eastl::allocator>::operator[](local_58,
                                                                                                             uVar3);
                            *puVar7 = uVar2;
                            lVar6 = Array<graphics::FontHelpers::ModIconReference, eastl::allocator>::operator[](
                                local_58, uVar3);
                            shared_ptr<graphics::SpriteAtlasReference>::operator=(
                                (shared_ptr<graphics::SpriteAtlasReference>*)(lVar6 + 8), (shared_ptr*)(puVar4 + 2));
                            uVar3 = uVar3 + 1;
                            puVar4 = puVar4 + 6;
                        } while (puVar4 != puVar5);
                    }
                    (field_8, (Array*)local_58)->SetModIcons();
                    field_32 = 1;
                    local_58->~Array();
                }
                local_40->~shared_ptr();
            }
        }
    }

    // 0x10097bb30, 832 bytes, placed by class name and debug map
    // HardCodedSprites::GetSpriteReferencesFromGroupID(int, bool)
    HardCodedSprites* HardCodedSprites::GetSpriteReferencesFromGroupID(int param_1, bool param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        undefined* puVar5;
        TextureManager* this_00;
        long lVar6;
        ulong uVar7;
        Array<HardCodedSprites::SpriteReference, eastl::allocator>* this_01;
        int* piVar8;
        CoordMapSquare* pCVar9;
        LoginManager* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_04;
        shared_ptr* psVar10;
        shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>* this_05;
        int in_ECX;
        undefined7 in_register_00000011;
        undefined4 in_register_00000034;
        ulong uVar11;
        PacketView local_c0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_98[16];
        ulong local_88[3];
        void* local_70;
        vector local_68[24];
        uint local_50;
        int local_4c;
        HardCodedSprites* local_48;
        undefined8* local_40;
        uint local_38;
        uint local_34;

        local_40 = (undefined8*)CONCAT44(in_register_00000034, param_1);
        local_34 = (uint)CONCAT71(in_register_00000011, param_2);
        local_4c = in_ECX;
        if (in_ECX != 0) {
            GetExistingSpriteReferencesFromGroupID((int)this);
            bVar1 = operator_cast_to_bool();
            if (bVar1) {
                return this;
            }
            ~shared_ptr();
        }
        if (local_34 == 4294967295) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            new (&local_c0) PacketView();
            puVar5 = (undefined*)local_40[3]->GetFile(&local_c0, Js5Archive::JS5_SPRITES, local_34, 0,
                                                      (Priority*)Priority::HIGHEST, true, false, false);
            if (puVar5 == DataStatus::READY) {
                eastl::vector<RGBAImage, BucketAllocatorEASTL>::vector();
                cVar2 = RAWDecoder::LoadFromPacket(local_68, &local_c0);
                if (cVar2 == '\0') {
                    new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                } else {
                    this_00 = (TextureManager*)(*local_40)->GetTextureManager();
                    local_70 = (void*)this_00->GetSpriteAtlasManager();
                    local_88[0] = local_68->size();
                    local_48 = this;
                    make_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>, unsigned long>((jag*)this,
                                                                                                           local_88);
                    lVar6 = local_68->size();
                    if (lVar6 != 0) {
                        local_38 = 1;
                        uVar11 = 0;
                        do {
                            this_01 = (Array<HardCodedSprites::SpriteReference, eastl::allocator>*)
                                shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>*)local_48);
                            piVar8 = (int*)Array<HardCodedSprites::SpriteReference, eastl::allocator>::operator[](
                                this_01, uVar11);
                            pCVar9 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                (vector<RGBAImage, BucketAllocatorEASTL>*)local_68, uVar11);
                            iVar3 = pCVar9->GetX();
                            *piVar8 = iVar3;
                            pCVar9 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                (vector<RGBAImage, BucketAllocatorEASTL>*)local_68, uVar11);
                            iVar3 = pCVar9->GetZ();
                            piVar8[1] = iVar3;
                            if ((0 < *piVar8) && (0 < iVar3)) {
                                this_02 = (LoginManager*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_68, uVar11);
                                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                                 eastl::allocator>*)this_02->GetDevCredentialsOutputDirectory();
                                local_88[2] = this_03->data();
                                pCVar9 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_68, uVar11);
                                local_50 = pCVar9->GetX();
                                pCVar9 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_68, uVar11);
                                uVar4 = pCVar9->GetZ();
                                this_04 = (compressed_pair_imp<
                                           std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                                    eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_68, uVar11);
                                psVar10 = (shared_ptr*)eastl::compressed_pair_imp<
                                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                    eastl::allocator, 0>::second(this_04);
                                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                                    local_98, (_func_decltype_nullptr*)0);
                                local_88->AddRuntimeSprite(local_70, (uint)local_88[2], local_50, uVar4, 0, psVar10);
                                shared_ptr<graphics::SpriteAtlasReference>::operator=(
                                    (shared_ptr<graphics::SpriteAtlasReference>*)(piVar8 + 2), (shared_ptr*)local_88);
                                local_88->~shared_ptr();
                                local_98->~shared_ptr();
                            }
                            uVar4 = local_38;
                            uVar11 = (ulong)local_38;
                            uVar7 = local_68->size();
                            local_38 = uVar4 + 1;
                        } while (uVar11 < uVar7);
                    }
                    this = local_48;
                    if ((char)local_4c != '\0') {
                        this_05 = (shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>*)
                            eastl::hash_map<int, shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>,
                                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::
                            operator[](
                                (hash_map<int, shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>,
                                          eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)(local_40 +
                                                                                                             23),
                                (int*)&local_34);
                        shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator=(
                            this_05, (shared_ptr*)this);
                    }
                }
                local_68->~vector();
            } else {
                new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            }
            local_c0.~PacketView();
        }
        return this;
    }

    // 0x10097be80, 160 bytes, placed by class name and debug map
    // HardCodedSprites::GetSpriteReferences(HardCodedSprites::SpriteGroup&)
    HardCodedSprites* HardCodedSprites::GetSpriteReferences(SpriteGroup* param_1) {
        shared_ptr* this_00;
        undefined4* in_RDX;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];

        this_00 = (shared_ptr*)(in_RDX + 2);
        if (!shared_ptr::operator_cast_to_bool(this_00)) {
            if (*(char*)&param_1[2].field_0 == '\0') {
                new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                return this;
            }
            GetSpriteReferencesFromGroupID((HardCodedSprites*)local_38, (int)param_1, SUB41(*in_RDX, 0));
            shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator=(
                (shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>*)this_00,
                (shared_ptr*)local_38);
            local_38->~shared_ptr();
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(this_00);
        return this;
    }

    // 0x10097bf60, 160 bytes, placed by class name and debug map
    // HardCodedSprites::ClearGroupSpriteReferences(HardCodedSprites::SpriteGroup&)
    void HardCodedSprites::ClearGroupSpriteReferences(SpriteGroup* param_1) {
        Array<game::VarValue, eastl::allocator>* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar1;
        long lVar2;
        Array<HardCodedSprites::SpriteReference, eastl::allocator>* this_01;
        ulong uVar3;
        uint uVar6;
        undefined1* this_02;
        ulong uVar7;

        this_02 = &param_1->field_8;
        if (this_02->operator_cast_to_bool()) {
            this_00 = (Array<game::VarValue, eastl::allocator>*)
                          shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator->(
                              (shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>*)this_02);
            if (this_00->empty() == '\0') {
                pvVar1 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                             shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator->(
                                 (shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>*)this_02);
                lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar1);
                if (lVar2 != 0) {
                    uVar6 = 1;
                    uVar7 = 0;
                    do {
                        this_01 = (Array<HardCodedSprites::SpriteReference, eastl::allocator>*)
                            shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator*(
                                (shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>*)this_02);
                        Array<HardCodedSprites::SpriteReference, eastl::allocator>::operator[](this_01, uVar7);
                        shared_ptr<graphics::SpriteAtlasReference>::reset();
                        uVar7 = (ulong)uVar6;
                        pvVar1 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator->(
                                    (shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>*)this_02);
                        uVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar1);
                        uVar6 = uVar6 + 1;
                    } while (uVar7 < uVar3);
                }
            }
            shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::reset();
        }
    }

    // 0x10097c040, 144 bytes, placed by class name and debug map
    // HardCodedSprites::GetExistingSpriteReferencesFromGroupID(int)
    shared_ptr<oldscape::dash3d::Decor>* HardCodedSprites::GetExistingSpriteReferencesFromGroupID(int param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_0000003c;
        shared_ptr<oldscape::dash3d::Decor>* this;
        hashtable_iterator_base local_50[16];
        eastl local_40[24];

        this = (shared_ptr<oldscape::dash3d::Decor>*)CONCAT44(in_register_0000003c, param_1);
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<oldscape::ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<oldscape::ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_40);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_40, local_50, extraout_RDX)) {
            lVar2 = local_40->HeapBeginPtr();
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(this, (shared_ptr*)(lVar2 + 8));
        } else {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x10097c0d0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<HardCodedSprites::SpriteReference, eastl::allocator> >::type make_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>, unsigned long>(unsigned long&&)
    jag* make_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>, unsigned long>(ulong* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<HardCodedSprites::SpriteReference, eastl::allocator>, unsigned long>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>>, int,
                                   Array<HardCodedSprites::SpriteReference, eastl::allocator>*&>(pvVar1, &local_34,
                                                                                                 local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10097c1e0, 32 bytes, placed by class name and debug map
    // HardCodedSprites::GetCrossGroup()
    undefined1* HardCodedSprites::GetCrossGroup() {
        undefined1* puVar1;

        puVar1 = field_528;
        if (*(int*)field_528 == -1) {
            puVar1 = field_504;
        }
        return puVar1;
    }

    // 0x10097c200, 64 bytes, placed by class name and debug map
    // HardCodedSprites::SetCrossGroupOverride(int)
    void HardCodedSprites::SetCrossGroupOverride(int param_1) {
        int iVar1;

        ClearGroupSpriteReferences(this, (SpriteGroup*)field_528);
        iVar1 = -1;
        if (*(int*)field_504 != param_1) {
            iVar1 = param_1;
        }
        *(int*)field_528 = iVar1;
    }

} // namespace jag
