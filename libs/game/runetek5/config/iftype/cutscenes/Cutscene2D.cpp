// libs/game/runetek5/config/iftype/cutscenes/Cutscene2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Cutscene2D.h"
#include "libs/console/ConsoleArgs.h"
#include "Cutscene2DElements.h"
#include "libs/oldscape/osrendercore/rseven/Scene.h"

namespace jag::game {
    // 0x100f3c948, 4 bytes, __data
    float Cutscene2D::m_playbackSpeed = 1.0f;

    // 0x100f3ca60, 16 bytes, __data
    Cutscene2D::m_debugIsolateImageElementIndex = {-1, 0, 0, 0};

    // 0x10053a400, 48 bytes, base-object constructor, placed by class name and debug map
    // Cutscene2D::Cutscene2D()
    void Cutscene2D::Cutscene2D() {
        new (this) eastl::fixed_vector<Cutscene2D::Scene, 1ul, true, eastl::allocator>();
        field_696 = 1920;
        field_698 = 1080;
        field_700 = 65535;
    }

    // 0x10053a440, 16 bytes, complete-object constructor, placed by class name and debug map
    // Cutscene2D::Cutscene2D(): jumps straight to the base-object constructor

    // 0x10053a450, 544 bytes, placed by class name and debug map
    // Cutscene2D::Scene::PrepareResourceRequests(Cutscene2DResources*) const
    void Cutscene2D::Scene::PrepareResourceRequests(Cutscene2DResources* param_1) {
        bool bVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        float* pfVar6;
        float* pfVar7;
        undefined1 extraout_DL;
        long lVar8;
        undefined1* this_00;
        Cutscene2DAnimation<float> local_90[16];
        WrapArray<Cutscene2DAnimation<float>::Key_const> local_80[16];
        float* local_70;
        float* local_60;
        Scene* local_58;
        undefined8 local_50;
        undefined1 local_48;
        float local_40;
        float local_3c;
        undefined8 local_38;

        lVar2 = (&field_80)->HeapBeginPtr();
        lVar3 = (&field_80)->end();
        local_70 = &m_playbackStart;
        local_60 = &field_76;
        local_58 = this;
        if (lVar2 != lVar3) {
            lVar2 = lVar2 + 80;
            do {
                local_90->GetKeys();
                WrapArray<Cutscene2DAnimation<float>::Key_const>::WrapArray<
                    WrapArray<Cutscene2DAnimation<float>::Key_const>>(local_80, local_90);
                local_50 = helpers::CalculateAnimationVisibilityTimeInterval(local_80);
                local_48 = extraout_DL;
                bVar1 = local_50.operator_cast_to_bool();
                pfVar7 = local_70;
                if (bVar1) {
                    local_38._0_4_ = *local_70;
                    pfVar6 = (float*)std::optional<std::pair<float, float>>::operator->(
                        (optional<std::pair<float, float>>*)&local_50);
                    local_40 = *pfVar6 + (float)local_38;
                    local_3c = (float)local_38 + pfVar6[1];
                    pfVar7 = std::max<float>(&local_40, pfVar7);
                    local_40 = *pfVar7;
                    local_38 = CONCAT44(local_38._4_4_, local_40);
                    pfVar7 = std::min<float>(&local_3c, local_60);
                    local_3c = *pfVar7;
                    param_1->RegisterSprite(*(int*)(lVar2 + -4), (float)local_38, local_3c);
                } else {
                    uVar4 = logger::default_logger();
                    local_38 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar4, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                        105,
                                        "Scene %s contains image element %s (id=%d) which is never visible due to its "
                                        "opacity animation",
                                        local_38, uVar5, *(undefined4*)(lVar2 + -4));
                }
                lVar8 = lVar2 + 208;
                lVar2 = lVar2 + 288;
            } while (lVar8 != lVar3);
        }
        this_00 = &local_58->field_408;
        lVar2 = this_00->HeapBeginPtr();
        lVar3 = this_00->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 80) {
            param_1->RegisterSound(*(int*)(lVar2 + 72), *local_70, *local_60);
        }
    }

    // 0x10053a7c0, 1280 bytes, placed by class name and debug map
    // Cutscene2D::Scene::Play(graphics::GUIManager*, math::Rect<int> const&, math::Vector2T<float> const&, float, Cutscene2DResources const&) const
    void Cutscene2D::Scene::Play(GUIManager* param_1, Rect* param_2, Vector2T* param_3, float param_4,
                                 Cutscene2DResources* param_5) {
        Vector2T* pVVar1;
        CoordMapSquare* this_00;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        Cutscene2DImageElement* pCVar6;
        Cutscene2DImageElement* pCVar7;
        long lVar8;
        shared_ptr* this_01;
        SpriteAtlasReference* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr<graphics::SpriteAtlas>* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        undefined8 uVar9;
        undefined8 uVar10;
        SoundInstance* this_07;
        Scene* pSVar11;
        float fVar12;
        float fVar13;
        undefined4 uVar14;
        undefined8 local_b0;
        Vector2T* local_a8;
        CoordMapSquare* local_a0;
        GUIManager* local_98;
        float local_90;
        float local_8c;
        Cutscene2DResources* local_88;
        double local_80;
        undefined8 local_78;
        undefined8 local_64;
        float local_5c;
        Scene* local_58;
        reverse_iterator local_50[8];
        undefined1* local_48;
        float local_40;
        float local_3c;
        undefined8 local_38;

        local_48 = (undefined1*)CONCAT44(local_48._4_4_, param_4);
        local_a8 = param_3;
        local_a0 = (CoordMapSquare*)param_2;
        local_98 = param_1;
        local_88 = param_5;
        cVar2 = IsSceneActive(this, param_4);
        if (cVar2 != '\0') {
            local_3c = local_48._0_4_ - m_playbackStart;
            local_58 = this;
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            local_80 = (double)local_48._0_4_;
            local_48 = &field_80;
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            bVar3 = eastl::operator!=(local_50, (reverse_iterator*)&local_38);
            if (bVar3) {
                do {
                    iVar5 = *(int*)PTR_m_debugIsolateImageElementIndex_100ee65b8;
                    if (iVar5 == -1) {
                    LAB_10053a92c:
                        lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                            (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                        fVar12 = (float)((lVar8 + 80))->Eval(local_3c);
                        if ((fVar12 < 0.0) || (1.0 < fVar12)) {
                            local_78._0_4_ = fVar12;
                            /* WARNING: Subroutine does not return */
                            LogAssert("(opacityF >= 0.f) && (opacityF <= 1.f)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                      140, (char*)0);
                        }
                        if ((char)(int)(fVar12 * 255.0) != '\0') {
                            lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                                (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                            this_01 = (shared_ptr*)local_88->GetSprite(*(int*)(lVar8 + 76));
                            bVar3 = shared_ptr::operator_cast_to_bool(this_01);
                            if (bVar3) {
                                lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                                    (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                                local_38 = ((lVar8 + 176))->Eval(local_3c);
                                lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                                    (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                                local_78 = ((lVar8 + 232))->Eval(local_3c);
                                lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                                    (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                                local_40 = (float)*(ushort*)(lVar8 + 72) * (float)local_78;
                                lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                                    (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                                new (&local_90)
                                    math::Point<float>(local_40, local_78._4_4_ * (float)*(ushort*)(lVar8 + 74));
                                lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                                    (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                                fVar13 = (float)((lVar8 + 128))->Eval(local_3c);
                                uVar14 = math::Deg2Rad(fVar13);
                                pVVar1 = local_a8;
                                local_78._0_4_ = (float)uVar14;
                                math::Vector2T<float>::operator*=((Vector2T<float>*)&local_38, local_a8);
                                math::Vector2T<float>::operator*=((Vector2T<float>*)&local_90, pVVar1);
                                local_b0 = math::operator*(0.5, (Vector2T*)&local_90);
                                math::Vector2T<float>::operator-=((Vector2T<float>*)&local_38, (Vector2T*)&local_b0);
                                this_00 = local_a0;
                                iVar5 = local_a0->GetX();
                                local_38._0_4_ = (GUIManager*)((float)iVar5 + (float)(GUIManager*)local_38);
                                iVar5 = this_00->GetZ();
                                local_5c = (float)iVar5 + local_38._4_4_;
                                local_38 = CONCAT44(local_5c, (GUIManager*)local_38);
                                local_64._0_4_ = (GUIManager*)local_38;
                                local_40 = local_90 + (float)(GUIManager*)local_38;
                                local_64._4_4_ = local_8c + local_5c;
                                this_02 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                    (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
                                lVar8 = this_02->GetRenderMapping();
                                this_03 = (compressed_pair_imp<
                                           std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
                                this_04 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                    eastl::allocator, 0>::second(this_03);
                                this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(this_04);
                                this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                              this_05->GetOrigin();
                                uVar9 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                    this_06);
                                local_64->AddElementPrecise(local_5c, local_40, local_64._4_4_, (float)local_78,
                                                            local_98, (int)(fVar12 * 255.0) & 255U | 4294967040,
                                                            lVar8 + 88, uVar9, 1, 4293967297, 18446744073708551617);
                            } else {
                                uVar9 = logger::default_logger();
                                lVar8 = eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator->(
                                    (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                                uVar14 = *(undefined4*)(lVar8 + 76);
                                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(SUB84(local_80, 0), uVar9, 0, 3,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                                    179, "Could not retrieve sprite resource %d at %.2f for scene %s",
                                                    uVar14, uVar10);
                            }
                        }
                    } else {
                        pCVar6 =
                            (Cutscene2DImageElement*)eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator*(
                                (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                        eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true,
                                                                                   eastl::allocator>>::rbegin();
                        pCVar7 =
                            (Cutscene2DImageElement*)eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator*(
                                (reverse_iterator<Cutscene2DImageElement_const*>*)&local_38);
                        iVar4 = std::distance<Cutscene2DImageElement_const*>(pCVar6, pCVar7);
                        if (iVar5 == iVar4)
                            goto LAB_10053a92c;
                    }
                    eastl::reverse_iterator<Cutscene2DImageElement_const*>::operator++(
                        (reverse_iterator<Cutscene2DImageElement_const*>*)local_50);
                    eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                    bVar3 = eastl::operator!=(local_50, (reverse_iterator*)&local_38);
                } while (bVar3);
            }
            pSVar11 = local_58;
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            bVar3 = eastl::operator!=(local_50, (reverse_iterator*)&local_38);
            if (bVar3) {
                do {
                    lVar8 = eastl::reverse_iterator<Cutscene2DAudioElement_const*>::operator->(
                        (reverse_iterator<Cutscene2DAudioElement_const*>*)local_50);
                    this_07 = (SoundInstance*)local_88->GetSound(*(int*)(lVar8 + 72), pSVar11->m_playbackStart,
                                                                 pSVar11->field_76);
                    if (this_07 == (SoundInstance*)0) {
                        uVar9 = logger::default_logger();
                        lVar8 = eastl::reverse_iterator<Cutscene2DAudioElement_const*>::operator->(
                            (reverse_iterator<Cutscene2DAudioElement_const*>*)local_50);
                        uVar14 = *(undefined4*)(lVar8 + 72);
                        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pSVar11 = local_58;
                        logger::Logger::Log(SUB84(local_80, 0), uVar9, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                            196, "Could not retrieve sound resource %d at %.2f for scene %s", uVar14,
                                            uVar10);
                    } else {
                        this_07->Start();
                    }
                    eastl::reverse_iterator<Cutscene2DAudioElement_const*>::operator++(
                        (reverse_iterator<Cutscene2DAudioElement_const*>*)local_50);
                    eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                    bVar3 = eastl::operator!=(local_50, (reverse_iterator*)&local_38);
                } while (bVar3);
            }
        }
    }

    // 0x10053afd0, 928 bytes, placed by class name and debug map
    // Cutscene2D::Scene::DrawSubtitles(graphics::GUIManager*, graphics::FontManager*, graphics::FontHelpers*, math::Rect<int> const&, float, Cutscene2DResources const&, GlobalCutscene2DResources const&) const
    void Cutscene2D::Scene::DrawSubtitles(GUIManager* param_1, FontManager* param_2, FontHelpers* param_3,
                                          Rect* param_4, float param_5, Cutscene2DResources* param_6,
                                          GlobalCutscene2DResources* param_7) {
        CommandLine* this_00;
        bool bVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        Cutscene2DSubtitleElement* pCVar9;
        shared_ptr* psVar10;
        shared_ptr<EnumType>* this_01;
        EnumType* this_02;
        VarValue* this_03;
        undefined8 uVar11;
        StringView SVar13;
        StringView SVar14;
        StringView SVar15;
        undefined8 in_stack_fffffffffffffeb8;
        TextProperties* in_stack_fffffffffffffec8;
        StringView local_128;
        TextProperties local_118;
        StringView local_f0;
        undefined8 local_e0;
        Cutscene2DSubtitleElement* local_d8;
        undefined8 local_c8;
        FontHelpers* local_b8;
        CommandLine* local_a8;
        int local_a0;
        fixed_string* local_98;
        Cutscene2DSubtitleElement local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b8 = param_3;
        if (IsSceneActive(this, param_5) != '\0') {
            pCVar9 = (Cutscene2DSubtitleElement*)(&field_528)->HeapBeginPtr();
            local_d8 = (Cutscene2DSubtitleElement*)(&field_528)->end();
            if (pCVar9 != local_d8) {
                local_a8 = (CommandLine*)param_4;
                do {
                    new (&local_90) Cutscene2DSubtitleElement(pCVar9);
                    if ((local_90.field_72 <= param_5) && (param_5 < local_90.field_76)) {
                        psVar10 = (shared_ptr*)param_6->GetSubtitleDataSource();
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar10);
                        if (!bVar2) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("resources.GetSubtitleDataSource()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                      217, (char*)0);
                        }
                        this_01 = (shared_ptr<EnumType>*)param_6->GetSubtitleDataSource();
                        this_02 = (EnumType*)shared_ptr<EnumType>::operator->(this_01);
                        this_03 = (VarValue*)this_02->GetOutputString(local_90.field_80);
                        local_98 = (fixed_string*)this_03->GetString();
                        local_e0 = param_7->GetSubtitleFont('\0');
                        local_a0 = -1;
                        iVar3 = std::optional<int>::value_or<int>((optional<int>*)&local_e0, &local_a0);
                        new (&local_118) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        psVar10 = (shared_ptr*)param_2->GetFont(iVar3, (shared_ptr*)&local_118);
                        local_118.~shared_ptr();
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar10);
                        uVar8 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                        if (bVar2) {
                            new (&local_118) graphics::TextProperties(psVar10);
                            local_118.SetAlignment(1, 1);
                            graphics::TextProperties::SetShadowColour((uint)&local_118);
                            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                (StringView*)((long)register0x00000020 + -312), local_98);
                            uVar4 = param_4->GetPos();
                            SVar14.field_8._0_4_ = uVar4;
                            SVar14.field_0 = (ulong)((long)register0x00000020 + -312);
                            SVar14.field_8._4_4_ = 0;
                            uVar11 = graphics::FontHelpers::PredictHeightAndLines(SVar14, (uint)&local_118,
                                                                                  (TextProperties*)param_3);
                            iVar3 = param_4->MaxZ();
                            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_128,
                                                                                                          local_98);
                            uVar4 = param_4->GetPos();
                            SVar15.field_8._0_4_ = uVar4;
                            SVar15.field_0 = (ulong)&local_128;
                            SVar15.field_8._4_4_ = 0;
                            iVar5 = graphics::FontHelpers::PredictWidthMultiLine(SVar15, (int)&local_118,
                                                                                 (TextProperties*)param_3);
                            iVar3 = iVar3 - (int)uVar11;
                            local_c8 = uVar11;
                            iVar6 = param_4->GetPos();
                            iVar7 = param_4->GetX();
                            param_1->AddColouredRectangle(iVar7 + (iVar6 - iVar5) / 2 + -30, iVar3 + -70, iVar5 + 60,
                                                          (int)local_c8 + 40, 102, CONCAT44(uVar8, 1));
                            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_f0,
                                                                                                          local_98);
                            this_00 = local_a8;
                            local_98 = (fixed_string*)CONCAT44(local_98._4_4_, iVar3 + -50);
                            uVar8 = local_a8->GetX();
                            iVar5 = this_00->GetPos();
                            iVar6 = this_00->MaxZ();
                            in_stack_fffffffffffffeb8 = 0;
                            param_3 = (FontHelpers*)((ulong)local_98 & 4294967295);
                            SVar13.field_8._0_4_ = uVar8;
                            SVar13.field_0 = (ulong)&local_f0;
                            SVar13.field_8._4_4_ = 0;
                            local_b8->DrawStringMultiline(SVar13, (int)local_98, iVar5, iVar6 - iVar3, 0,
                                                          (uint*)&local_118, in_stack_fffffffffffffec8);
                            param_4 = (Rect*)local_a8;
                        }
                    }
                    local_90.~pair();
                    pCVar9 = pCVar9 + 1;
                } while (pCVar9 != local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10053b3f0, 128 bytes, placed by class name and debug map
    // Cutscene2D::Scene::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    undefined8 Cutscene2D::Scene::LoadFromPacket(PacketT* param_1, int param_2) {
        undefined7 extraout_var;
        float fVar1;

        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion<32, true>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (fixed_string*)this, true);
        fVar1 = (float)param_1->gFloat();
        m_playbackStart = fVar1;
        fVar1 = (float)param_1->gFloat();
        field_76 = fVar1;
        helpers::LoadCutscene2DElementsFromPacket<
            eastl::fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator>>((fixed_vector*)&field_80, param_1,
                                                                                      param_2);
        helpers::LoadCutscene2DElementsFromPacket<
            eastl::fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator>>((fixed_vector*)&field_408,
                                                                                      param_1, param_2);
        helpers::LoadCutscene2DElementsFromPacket<
            eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator>>((fixed_vector*)&field_528,
                                                                                         param_1, param_2);
        return CONCAT71(extraout_var, 1);
    }

    // 0x10053b5f0, 1216 bytes, placed by class name and debug map
    // Cutscene2D::Play(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, math::Rect<int> const&, float, Cutscene2DResources const&, GlobalCutscene2DResources const&) const
    void Cutscene2D::Play(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3, Rect* param_4, float param_5,
                          Cutscene2DResources* param_6, GlobalCutscene2DResources* param_7) {
        undefined4 uVar1;
        uint uVar2;
        Cutscene2D* pCVar3;
        int iVar5;
        int iVar6;
        int iVar7;
        type* this_00;
        SoundInstance* this_01;
        vector* pvVar8;
        int* piVar9;
        ScaleManager* this_02;
        DrawCallState* pDVar10;
        Rect* pRVar11;
        Scene* pSVar12;
        Scene* pSVar13;
        undefined4* puVar14;
        GUIManager* pGVar16;
        GUIManager* pGVar17;
        type* ptVar18;
        undefined8 in_stack_fffffffffffffef8;
        undefined4 uVar21;
        undefined8 uVar20;
        undefined4 uVar22;
        undefined1 local_100[24];
        undefined1 local_e8[40];
        DrawCallState local_c0;
        undefined1 local_90[24];
        Rect<unsigned int> local_70[16];
        Texture* local_60;
        float local_40;
        int local_3c;
        GUIManager* local_38;

        local_90._16_8_ = param_3;
        local_38 = (GUIManager*)param_1->GetGUIManager();
        CalculateCutsceneRescaling((Cutscene2D*)local_100, (Rect*)this);
        local_60 = (Texture*)std::get<0ul, math::Vector2T<float>, math::Rect<int>>((pair*)local_100);
        this_00 = std::get<1ul, math::Vector2T<float>, math::Rect<int>>((pair*)local_100);
        this_01 = (SoundInstance*)param_1->GetScaleManager();
        local_40 = (float)this_01->GetSoundSpatialSizeMax();
        local_38->AddColouredRectangle(param_4, 255, 1);
        new (local_e8) graphics::ClippingState(param_1);
        pvVar8 = this_00->SSOBeginPtr(param_1);
        local_3c = *(int*)pvVar8;
        piVar9 = (int*)this_00->y();
        iVar5 = *piVar9;
        piVar9 = (int*)this_00->second();
        iVar6 = *piVar9;
        piVar9 = (int*)this_00->qw();
        param_1->SetClippingRectangle(local_3c, iVar5, iVar6, *piVar9, true);
        math::Rect<unsigned int>::Rect(local_70, (Rect*)this_00);
        this_02 = (ScaleManager*)param_1->GetScaleManager();
        this_02->InterfaceToScreenRect(local_70, true);
        iVar5 = param_1->GetBackBufferWidth();
        iVar6 = param_1->GetBackBufferHeight();
        new ((local_e8 + 24)) oldscape::dash3d::GridRect(0, 0, iVar5, iVar6);
        local_c0.Intersection(local_70, local_e8 + 24);
        pDVar10 = &local_c0;
        math::Rect<unsigned int>::operator=(local_70, (Rect*)pDVar10);
        pvVar8 = local_70->SSOBeginPtr(pDVar10);
        local_3c = *(int*)pvVar8;
        iVar6 = param_1->GetBackBufferHeight();
        iVar7 = local_70->MaxZ();
        piVar9 = (int*)local_70->second();
        iVar5 = *piVar9;
        piVar9 = (int*)local_70->qw();
        new (local_90) oldscape::dash3d::GridRect(local_3c, iVar6 - iVar7, iVar5, *piVar9);
        pGVar17 = local_38;
        if (local_40 != 1.0) {
            local_90->Scale(local_40);
        }
        pDVar10 = (DrawCallState*)pGVar17->GetCurrentState();
        new (&local_c0) render::DrawCallState(pDVar10);
        pRVar11 = (Rect*)local_c0.GetOutputMergerState();
        render::OutputMergerState::SetScissorRects(pRVar11, (uint)local_90);
        pGVar16 = (GUIManager*)&local_c0;
        pGVar17->Begin(pGVar16);
        pCVar3 = (Cutscene2D*)this;
        pSVar12 = (Scene*)((Cutscene2D*)this)->HeapBeginPtr();
        pSVar13 = (Scene*)pCVar3->end();
        uVar21 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 32);
        for (; pSVar12 != pSVar13; pSVar12 = (Scene*)&pSVar12[1].field_120) {
            pGVar16 = pGVar17;
            pSVar12->Play(pGVar17, this_00, local_60, param_5, param_6);
            uVar21 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 32);
        }
        if (param_7->ShowSkybox() != '\0') {
            pGVar16 = (GUIManager*)0;
            local_38->Render(0);
            pCVar3 = (Cutscene2D*)this;
            pSVar12 = (Scene*)((Cutscene2D*)this)->HeapBeginPtr();
            pSVar13 = (Scene*)pCVar3->end();
            pGVar17 = local_38;
            for (; local_38 = pGVar17, pSVar12 != pSVar13; pSVar12 = (Scene*)&pSVar12[1].field_120) {
                pSVar12->DrawSubtitles(pGVar17, param_2, local_90._16_8_, this_00, param_5, param_6, param_7);
                uVar21 = (undefined4)((ulong)param_7 >> 32);
                pGVar16 = pGVar17;
                pGVar17 = local_38;
            }
        }
        local_38->End();
        local_c0.~DrawCallState();
        local_e8->~ClippingState();
        if ((*(float*)&local_60->field_0 != 1.0) || (*(float*)((long)&local_60->field_0 + 4) != 1.0)) {
            iVar7 = (local_40 != 1.0) + 1;
            piVar9 = (int*)this_00->second();
            iVar5 = *piVar9;
            iVar6 = ((Minimap*)param_4)->GetPos();
            if (iVar5 != iVar6) {
                pvVar8 = this_00->SSOBeginPtr(pGVar16);
                uVar22 = *(undefined4*)pvVar8;
                puVar14 = (undefined4*)this_00->y();
                uVar1 = *puVar14;
                puVar14 = (undefined4*)this_00->qw();
                pGVar17 = local_38;
                uVar20 = CONCAT44(uVar21, 1);
                local_38->AddColouredRectangle(uVar22, uVar1, iVar7, *puVar14, 572662527, uVar20);
                uVar22 = (undefined4)((ulong)uVar20 >> 32);
                iVar5 = this_00->Right();
                puVar14 = (undefined4*)this_00->y();
                uVar21 = *puVar14;
                puVar14 = (undefined4*)this_00->qw();
                uVar20 = CONCAT44(uVar22, 1);
                pGVar16 = (GUIManager*)(ulong)(uint)(iVar5 - iVar7);
                pGVar17->AddColouredRectangle(pGVar16, uVar21, iVar7, *puVar14, 572662527, uVar20);
                uVar21 = (undefined4)((ulong)uVar20 >> 32);
            }
            piVar9 = (int*)this_00->qw();
            iVar5 = *piVar9;
            iVar6 = param_4->GetLevel();
            if (iVar5 != iVar6) {
                pvVar8 = this_00->SSOBeginPtr(pGVar16);
                uVar2 = *(uint*)pvVar8;
                puVar14 = (undefined4*)this_00->y();
                uVar22 = *puVar14;
                puVar14 = (undefined4*)this_00->second();
                pGVar17 = local_38;
                uVar20 = CONCAT44(uVar21, 1);
                ptVar18 = (type*)(ulong)uVar2;
                local_38->AddColouredRectangle(ptVar18, uVar22, *puVar14, iVar7, 572662527, uVar20);
                uVar22 = (undefined4)((ulong)uVar20 >> 32);
                pvVar8 = this_00->SSOBeginPtr(ptVar18);
                uVar21 = *(undefined4*)pvVar8;
                iVar5 = this_00->MaxZ();
                puVar14 = (undefined4*)this_00->second();
                pGVar17->AddColouredRectangle(uVar21, iVar5 - iVar7, *puVar14, iVar7, 572662527, CONCAT44(uVar22, 1));
            }
        }
    }

    // 0x10053bab0, 544 bytes, placed by class name and debug map
    // Cutscene2D::CalculateCutsceneRescaling(math::Rect<int> const&) const
    Cutscene2D* Cutscene2D::CalculateCutsceneRescaling(Rect* param_1) {
        int iVar1;
        undefined4 uVar2;
        int iVar3;
        int* piVar4;
        float* pfVar5;
        uint* puVar6;
        vector* pvVar7;
        Minimap* in_RDX;
        type* ptVar8;
        Rect local_50[16];
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        new (local_50) math::Rect<unsigned int>(in_RDX);
        local_3c = (float)*(ushort*)(param_1 + 696) / (float)*(ushort*)(param_1 + 698);
        piVar4 = (int*)local_50->second();
        local_40 = (float)*piVar4 / local_3c;
        iVar1 = in_RDX->GetLevel();
        local_38 = (float)iVar1;
        pfVar5 = std::min<float>(&local_40, &local_38);
        local_40 = *pfVar5;
        iVar1 = math::RoundFloatToInt(local_40);
        local_50->SetLevel(iVar1);
        piVar4 = (int*)local_50->qw();
        uVar2 = math::RoundFloatToInt((float)*piVar4 * local_3c);
        new (local_50) oldscape::ServerConnectionWorkItem(uVar2);
        piVar4 = (int*)local_50->second();
        local_38 = (float)in_RDX->GetPos();
        piVar4 = std::min<int>(piVar4, (int*)&local_38);
        new (local_50) oldscape::ServerConnectionWorkItem(*piVar4);
        piVar4 = (int*)local_50->qw();
        local_38 = (float)in_RDX->GetLevel();
        puVar6 = (uint*)std::min<int>(piVar4, (int*)&local_38);
        ptVar8 = (type*)(ulong)*puVar6;
        local_50->SetLevel(*puVar6);
        piVar4 = (int*)local_50->second();
        local_3c = (float)*piVar4 / (float)*(ushort*)(param_1 + 696);
        piVar4 = (int*)local_50->qw();
        new (&local_38) math::Point<float>(local_3c, (float)*piVar4 / (float)*(ushort*)(param_1 + 698));
        if ((local_38 != 1.0) || (local_34 != 1.0)) {
            pvVar7 = local_50->SSOBeginPtr(ptVar8);
            iVar1 = *(int*)pvVar7;
            iVar3 = in_RDX->GetPos();
            piVar4 = (int*)local_50->second();
            new (local_50) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(
                (iVar3 - *piVar4) / 2 + iVar1);
            piVar4 = (int*)local_50->y();
            iVar1 = *piVar4;
            iVar3 = in_RDX->GetLevel();
            piVar4 = (int*)local_50->qw();
            local_50->SetZ((iVar3 - *piVar4) / 2 + iVar1);
        }
        std::pair<math::Vector2T<float>, math::Rect<int>>::pair<math::Vector2T<float>&, math::Rect<int>&, false>(
            (pair<math::Vector2T<float>, math::Rect<int>>*)this, (Vector2T*)&local_38, local_50);
        return this;
    }

    // 0x10053bdf0, 144 bytes, placed by class name and debug map
    // Cutscene2D::PrepareResourceRequests(Cutscene2DResources*) const
    void Cutscene2D::PrepareResourceRequests(Cutscene2DResources* param_1) {
        Scene* this_00;
        Scene* pSVar1;

        if (param_1 == (Cutscene2DResources*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("resources",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      401, (char*)0);
        }
        param_1->SetSubtitleDataSourceID(field_700);
        this_00 = (Scene*)HeapBeginPtr();
        pSVar1 = (Scene*)end();
        for (; this_00 != pSVar1; this_00 = (Scene*)&this_00[1].field_120) {
            this_00->PrepareResourceRequests(param_1);
        }
    }

    // 0x10053be90, 208 bytes, placed by class name and debug map
    // Cutscene2D::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Cutscene2D::LoadFromPacket(PacketT* param_1) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        undefined2 uVar4;
        Scene* this_00;
        Scene* pSVar5;

        cVar1 = param_1->g1();
        if (cVar1 != '\x01') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/iftype/cutscenes/Cutscene2D.cpp",
                            421, (char*)0);
        }
        uVar3 = param_1->g2();
        field_696 = uVar3;
        uVar3 = param_1->g2();
        field_698 = uVar3;
        uVar4 = param_1->g2();
        field_700 = uVar4;
        bVar2 = param_1->g1();
        resize((ulong)bVar2);
        this_00 = (Scene*)HeapBeginPtr();
        pSVar5 = (Scene*)end();
        for (; this_00 != pSVar5; this_00 = (Scene*)&this_00[1].field_120) {
            this_00->LoadFromPacket(param_1, 1);
        }
        return 1;
    }

    // 0x10053bfc0, 128 bytes, placed by class name and debug map
    // Cutscene2D::GetDurationSec() const
    float Cutscene2D::GetDurationSec() {
        Material* this_00;
        Material* pMVar1;
        float* pfVar2;
        float local_30;
        float local_2c;

        local_2c = 0.0;
        this_00 = (Material*)HeapBeginPtr();
        pMVar1 = (Material*)end();
        if (this_00 != pMVar1) {
            do {
                local_30 = (float)this_00->GetDefaultNonMetalSpecular();
                pfVar2 = std::max<float>(&local_2c, &local_30);
                local_2c = *pfVar2;
                this_00 = (Material*)&this_00[3].field_8;
            } while (this_00 != pMVar1);
        }
        return local_2c;
    }

    // 0x10053c050, 160 bytes, placed by class name and debug map
    // Cutscene2D::GetSceneIndex(StringView) const
    undefined2 Cutscene2D::GetSceneIndex(StringView param_1) {
        undefined2 uVar3;
        undefined2 uVar2;
        long lVar4;
        ulong uVar5;
        uchar* extraout_RDX;
        ulong uVar6;
        StringView SVar7;
        StringView local_58;
        undefined1 local_48[22];
        optional<unsigned char> local_32[2];

        lVar4 = size();
        if (lVar4 != 0) {
            uVar6 = 0;
            do {
                eastl::vector<Cutscene2D::Scene,
                              eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<Cutscene2D::Scene,
                                   eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           uVar6);
                local_48->GetTypeName();
                new (&local_58) StringView(param_1.field_0);
                SVar7.field_8 = extraout_RDX;
                SVar7.field_0 = (ulong)&local_58;
                if (StringView::operator==((StringView*)local_48, SVar7) != '\0') {
                    local_48[0] = (undefined1)uVar6;
                    std::optional<unsigned char>::optional<unsigned char, 0>((uchar*)local_32);
                    uVar3._0_1_ = local_32[0];
                    uVar3._1_1_ = local_32[1];
                    return uVar3;
                }
                uVar6 = uVar6 + 1;
                uVar5 = size();
            } while (uVar6 < uVar5);
        }
        std::optional<unsigned char>::optional(local_32);
        uVar2._0_1_ = local_32[0];
        uVar2._1_1_ = local_32[1];
        return uVar2;
    }

    // 0x10053c180, 80 bytes, placed by class name and debug map
    // Cutscene2D::GetSceneStartSec(unsigned char) const
    void Cutscene2D::GetSceneStartSec(uchar param_1) {
        ulong uVar1;
        Scene* this_00;
        ulong uVar2;
        undefined7 in_register_00000031;

        uVar2 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        uVar1 = size();
        if (uVar1 <= uVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("sceneIndex < m_scenes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      470, (char*)0);
        }
        this_00 = (Scene*)eastl::vector<Cutscene2D::Scene,
                                        eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<Cutscene2D::Scene,
                           eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                   uVar2);
        this_00->GetPlaybackStart();
    }

    // 0x10053c1d0, 80 bytes, placed by class name and debug map
    // Cutscene2D::GetSceneEndSec(unsigned char) const
    void Cutscene2D::GetSceneEndSec(uchar param_1) {
        ulong uVar1;
        Material* this_00;
        ulong uVar2;
        undefined7 in_register_00000031;

        uVar2 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        uVar1 = size();
        if (uVar1 <= uVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("sceneIndex < m_scenes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      478, (char*)0);
        }
        this_00 =
            (Material*)eastl::vector<Cutscene2D::Scene,
                                     eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<Cutscene2D::Scene,
                               eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                       uVar2);
        this_00->GetDefaultNonMetalSpecular();
    }

    // 0x10053c220, 112 bytes, placed by class name and debug map
    // Cutscene2D::GetSceneDurationSec(unsigned char) const
    float Cutscene2D::GetSceneDurationSec(uchar param_1) {
        ulong uVar1;
        Scene* this_00;
        ulong uVar2;
        undefined7 in_register_00000031;
        float fVar3;
        float fVar4;

        uVar2 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        uVar1 = size();
        if (uVar1 <= uVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("sceneIndex < m_scenes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      486, (char*)0);
        }
        this_00 = (Scene*)eastl::vector<Cutscene2D::Scene,
                                        eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<Cutscene2D::Scene,
                           eastl::fixed_vector_allocator<656ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                   uVar2);
        fVar3 = (float)this_00->GetDefaultNonMetalSpecular();
        fVar4 = (float)this_00->GetPlaybackStart();
        return fVar3 - fVar4;
    }

    // 0x100542810: the linker folded this into Cutscene2DAudioElement::Cutscene2DAudioElement(), which has identical code
    Cutscene2DSubtitleElement::Cutscene2DSubtitleElement();

    // 0x100542820: the linker folded this into Cutscene2DAudioElement::Cutscene2DAudioElement(), which has identical code
    Cutscene2DSubtitleElement::Cutscene2DSubtitleElement();

} // namespace jag::game

namespace jag::game::helpers {
    // 0x10053a220, 304 bytes, placed by debug map only (low confidence)
    // CalculateAnimationVisibilityTimeInterval(WrapArray<Cutscene2DAnimation<float>::Key const>)
    undefined1[16] CalculateAnimationVisibilityTimeInterval(
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* param_1) {
        int iVar2;
        int iVar3;
        long lVar4;
        float* pfVar5;
        undefined8 extraout_RDX;
        undefined8 uVar6;
        undefined8 extraout_RDX_00;
        ulong uVar7;
        ulong uVar8;
        undefined1 auVar9[16];
        pair<float, float> local_48[8];
        undefined8 local_40;
        undefined1 local_38;
        float local_30;
        float local_2c;

        if (param_1->empty() == '\0') {
            iVar2 = param_1->HeapBeginPtr();
            uVar7 = (ulong)iVar2;
            do {
                if ((long)uVar7 < 1)
                    goto LAB_10053a2d2;
                uVar7 = uVar7 - 1;
                lVar4 = WrapArray<Cutscene2DAnimation<float>::Key_const>::operator[](
                    (WrapArray<Cutscene2DAnimation<float>::Key_const>*)param_1, uVar7);
            } while (*(float*)(lVar4 + 4) <= 0.0);
            iVar2 = (int)uVar7;
            if (iVar2 != -1) {
                iVar3 = iVar2;
                if (0 < iVar2) {
                    uVar8 = 0;
                    do {
                        lVar4 = WrapArray<Cutscene2DAnimation<float>::Key_const>::operator[](
                            (WrapArray<Cutscene2DAnimation<float>::Key_const>*)param_1, uVar8);
                        if (0.0 < *(float*)(lVar4 + 4)) {
                            iVar3 = (int)uVar8;
                            break;
                        }
                        uVar8 = uVar8 + 1;
                    } while ((uVar7 & 4294967295) != uVar8);
                }
                if (-1 < iVar3) {
                    if (iVar3 == 0) {
                        local_30 = -500000.0;
                    } else {
                        pfVar5 = (float*)WrapArray<Cutscene2DAnimation<float>::Key_const>::operator[](
                            (WrapArray<Cutscene2DAnimation<float>::Key_const>*)param_1, (long)(iVar3 + -1));
                        local_30 = *pfVar5;
                    }
                    iVar3 = param_1->HeapBeginPtr();
                    if (iVar2 + 1 < iVar3) {
                        pfVar5 = (float*)WrapArray<Cutscene2DAnimation<float>::Key_const>::operator[](
                            (WrapArray<Cutscene2DAnimation<float>::Key_const>*)param_1, (long)(iVar2 + 1));
                        local_2c = *pfVar5;
                    } else {
                        local_2c = 500000.0;
                    }
                    std::pair<float, float>::pair<float&, float&, false>(local_48, &local_30, &local_2c);
                    std::optional<std::pair<float, float>>::optional<std::pair<float, float>, 0>((pair*)&local_40);
                    uVar6 = extraout_RDX_00;
                    goto LAB_10053a2db;
                }
            }
        }
    LAB_10053a2d2:
        new (&local_40) std::optional<std::pair<float, float>>();
        uVar6 = extraout_RDX;
    LAB_10053a2db:
        auVar9._9_7_ = (undefined7)((ulong)uVar6 >> 8);
        auVar9[8] = local_38;
        auVar9._0_8_ = local_40;
        return auVar9;
    }

    // 0x10053b470, 128 bytes, placed by neighbouring functions
    // bool LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator> >(eastl::fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator>*, PacketT<Array<unsigned char, eastl::allocator> >&, int)
    bool
    helpers::LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator>>(
        fixed_vector* param_1, PacketT* param_2, int param_3) {
        byte bVar1;
        char cVar2;
        Cutscene2DImageElement* pCVar3;
        Cutscene2DImageElement* this;

        bVar1 = param_2->g1();
        param_1->resize((ulong)bVar1);
        this = (Cutscene2DImageElement*)param_1->HeapBeginPtr();
        pCVar3 = (Cutscene2DImageElement*)param_1->end();
        cVar2 = (char)pCVar3;
        while (true) {
            if (this == pCVar3) {
                return (bool)cVar2;
            }
            cVar2 = LoadFromPacket(param_2, param_3);
            if (cVar2 == '\0')
                break;
            this = (Cutscene2DImageElement*)&this[1].field_48;
        }
        return false;
    }

    // 0x10053b4f0, 128 bytes, placed by neighbouring functions
    // bool LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator> >(eastl::fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator>*, PacketT<Array<unsigned char, eastl::allocator> >&, int)
    bool
    helpers::LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator>>(
        fixed_vector* param_1, PacketT* param_2, int param_3) {
        byte bVar1;
        char cVar2;
        Cutscene2DAudioElement* pCVar3;
        Cutscene2DAudioElement* this;

        bVar1 = param_2->g1();
        param_1->resize((ulong)bVar1);
        this = (Cutscene2DAudioElement*)param_1->HeapBeginPtr();
        pCVar3 = (Cutscene2DAudioElement*)param_1->end();
        cVar2 = (char)pCVar3;
        while (true) {
            if (this == pCVar3) {
                return (bool)cVar2;
            }
            cVar2 = LoadFromPacket(param_2, param_3);
            if (cVar2 == '\0')
                break;
            this = this + 1;
        }
        return false;
    }

    // 0x10053b570, 128 bytes, placed by neighbouring functions
    // bool LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator> >(eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator>*, PacketT<Array<unsigned char, eastl::allocator> >&, int)
    bool helpers::LoadCutscene2DElementsFromPacket<
        eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator>>(fixed_vector* param_1,
                                                                                     PacketT* param_2, int param_3) {
        byte bVar1;
        char cVar2;
        Cutscene2DSubtitleElement* pCVar3;
        Cutscene2DSubtitleElement* this;

        bVar1 = param_2->g1();
        param_1->resize((ulong)bVar1);
        this = (Cutscene2DSubtitleElement*)param_1->HeapBeginPtr();
        pCVar3 = (Cutscene2DSubtitleElement*)param_1->end();
        cVar2 = (char)pCVar3;
        while (true) {
            if (this == pCVar3) {
                return (bool)cVar2;
            }
            cVar2 = LoadFromPacket(param_2, param_3);
            if (cVar2 == '\0')
                break;
            this = this + 1;
        }
        return false;
    }

} // namespace jag::game::helpers

// 0x10053e160, 64 bytes, placed by debug map only (low confidence)
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

// 0x100540bf0, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100540c00, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

namespace jag {
    // 0x10053eb80, 160 bytes, inline, placed by debug map only (low confidence)
    // ui::Interface* placement_new<ui::Interface, int&, bool&, eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>&, std::function<shared_ptr<ui::Component> (unsigned char, unsigned short)>&, void (*)(ui::Component*, PacketT<Array<unsigned char, eastl::allocator> >&, int)>(void*, int&, bool&, eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>&, std::function<shared_ptr<ui::Component> (unsigned char, unsigned short)>&, void (*&&)(ui::Component*, PacketT<Array<unsigned char, eastl::allocator> >&, int))
    /* ui::Interface* placement_new<ui::Interface, int&, bool&,
   eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>&,
   std::function<shared_ptr<ui::Component> (unsigned char, unsigned short)>&, void
   (*)(ui::Component*, PacketT<Array<unsigned char, eastl::allocator> >&,
   int)>(void*, int&, bool&, eastl::vector<PacketT<Array<unsigned char, eastl::allocator>
   >, eastl::allocator>&, std::function<shared_ptr<ui::Component> (unsigned char, unsigned
   short)>&, void (*&&)(ui::Component*, PacketT<Array<unsigned char,
   eastl::allocator> >&, int)) */

    Interface* jag::placement_new<ui::Interface, int&, bool&,
                                  eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>&,
                                  std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>&,
                                  void (*)(ui::Component*, PacketT<Array<unsigned char, eastl::allocator>>&, int)>(
        void* param_1, int* param_2, bool* param_3, vector* param_4, function* param_5,
        _func_void_Component_ptr_PacketT_ptr_int* param_6) {
        bool bVar1;
        int iVar2;
        function<shared_ptr<ui::Component>(unsigned char, unsigned short)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar2 = *param_2;
        bVar1 = *param_3;
        std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>::function(local_68, param_5);
        ui::Interface::Interface(param_1, iVar2, bVar1, param_4, local_68, *(undefined8*)param_6);
        std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x10053ec20, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<ui::Interface, MakeSharedPool<ui::Interface, 128> >* placement_new<MakeSharedPoolRefCounter<ui::Interface, MakeSharedPool<ui::Interface, 128> >, MakeSharedPool<ui::Interface, 128>::RefCounterAndData*&, ui::Interface*>(void*, MakeSharedPool<ui::Interface, 128>::RefCounterAndData*&, ui::Interface*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<ui::Interface, MakeSharedPool<ui::Interface, 128>>,
                       MakeSharedPool<ui::Interface, 128>::RefCounterAndData*&, ui::Interface*>(
        void* param_1, RefCounterAndData** param_2, Interface** param_3) {
        MakeSharedPoolRefCounter<ui::Interface, MakeSharedPool<ui::Interface, 128>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::console {
    // 0x10053c140: the linker folded this into game::Cutscene2D::Scene::GetName() const, which has identical code
    VarAny::GetTypeName() const;

} // namespace jag::console
