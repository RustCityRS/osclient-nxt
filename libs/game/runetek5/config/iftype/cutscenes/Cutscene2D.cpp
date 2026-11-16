// libs/game/runetek5/config/iftype/cutscenes/Cutscene2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Cutscene2D.h"
#include "libs/console/ConsoleArgs.h"
#include "Cutscene2DElements.h"
#include "libs/oldscape/osrendercore/rseven/Scene.h"

namespace jag::game {
    // 0x100f3c948
    float Cutscene2D::m_playbackSpeed = 1.0f;

    // 0x100f3ca60
    int32_t Cutscene2D::m_debugIsolateImageElementIndex[4] = {-1, 0, 0, 0};

    // 0x10053a400
    Cutscene2D::Cutscene2D()
        : eastl::fixed_vector<Cutscene2D::Scene, 1ul>(), field_696(1920), field_698(1080), field_700(65535) {}

    // 0x10053a450
    void Cutscene2D::Scene::PrepareResourceRequests(Cutscene2DResources* cutscene2DResources) const {
        bool cVar1;
        Logger* this_00;
        uint64_t uVar4;
        float* pfVar5;
        float* pfVar6;
        uint8_t extraout_DL;
        long lVar7;
        Cutscene2DAnimation<float> local_90;
        WrapArray<Cutscene2DAnimation<float>::Key const> local_80;
        uint64_t local_50;
        uint8_t local_48;
        float local_40;
        float local_3c;
        uint64_t local_38;

        long lVar2 = field_80.HeapBeginPtr();
        long lVar3 = field_80.end();
        float* local_70 = &m_playbackStart;
        float* local_60 = &m_playbackEnd;
        Scene* local_58 = this;
        if (lVar2 != lVar3) {
            lVar2 = lVar2 + 80;
            do {
                local_90.GetKeys();
                local_80.WrapArray<WrapArray<Cutscene2DAnimation<float>::Key const>>(local_90);
                local_50 = helpers::CalculateAnimationVisibilityTimeInterval(&local_80);
                local_48 = extraout_DL;
                cVar1 = local_50.operator_cast_to_bool();
                pfVar6 = local_70;
                if (!cVar1) {
                    this_00 = logger::default_logger();
                    local_38 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    this_00->Log(false, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                 "config/iftype/cutscenes/Cutscene2D.cpp",
                                 105,
                                 "Scene %s contains image element %s (id=%d) which is never visible due to its opacity "
                                 "animation",
                                 local_38, uVar4, (unsigned long)*(unsigned int*)(lVar2 - 4));
                } else {
                    local_38._0_4_ = *local_70;
                    pfVar5 = (float*)local_50.operator->();
                    local_40 = *pfVar5 + (float)local_38;
                    local_3c = (float)local_38 + pfVar5[1];
                    pfVar6 = std::max<float>(local_40, *pfVar6);
                    local_40 = *pfVar6;
                    local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)local_40);
                    pfVar6 = std::min<float>(local_3c, *local_60);
                    local_3c = *pfVar6;
                    cutscene2DResources->RegisterSprite(*(int*)(lVar2 - 4), (float)local_38, local_3c);
                }
                lVar7 = lVar2 + 208;
                lVar2 = lVar2 + 288;
            } while (lVar7 != lVar3);
        }
        uint8_t* this_01 = &local_58->field_408;
        lVar2 = this_01->HeapBeginPtr();
        lVar3 = this_01->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 80) {
            cutscene2DResources->RegisterSound(*(int*)(lVar2 + 72), *local_70, *local_60);
        }
    }

    // 0x10053a7c0
    void Cutscene2D::Scene::Play(graphics::GUIManager* guiManager, const math::Rect<int>& rect,
                                 const math::Vector2T<float>& vector2, float arg4,
                                 const Cutscene2DResources& cutscene2DResources) const {
        unsigned int uVar1;
        bool bVar3;
        int iVar4;
        int iVar5;
        BlendMode blendMode;
        Cutscene2DImageElement* cutscene2DImageElement1;
        Cutscene2DImageElement* cutscene2DImageElement2;
        long lVar6;
        shared_ptr* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr<graphics::SpriteAtlas>* this_04;
        MapArea* this_05;
        Logger* pLVar7;
        uint64_t uVar8;
        SoundInstance* this_07;
        uint8_t* puVar9;
        Scene* pSVar10;
        float fVar11;
        float fVar12;
        uint64_t local_b0;
        float local_90;
        float local_8c;
        double local_80;
        uint64_t local_78;
        float local_64;
        float local_60;
        float local_5c;
        Scene* local_58;
        ReturnValue local_50;
        vector<ObjStackEntry>* local_48;
        float local_40;
        float local_3c;
        uint64_t local_38;

        local_48 = (vector<ObjStackEntry>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)arg4);
        if (IsSceneActive(arg4)) {
            local_3c = local_48._0_4_ - m_playbackStart;
            puVar9 = &field_80;
            local_58 = this;
            local_50 = puVar9->rbegin();
            local_80 = (double)local_48._0_4_;
            local_48 = (vector<ObjStackEntry>*)puVar9;
            local_38 = puVar9->rend();
            bVar3 = local_50 != local_38;
            if (bVar3) {
                do {
                    iVar5 = *(int*)PTR_m_debugIsolateImageElementIndex_100ee65b8;
                    if (iVar5 == -1) {
                    LAB_10053a92c:
                        lVar6 = local_50.operator->();
                        fVar11 = (float)((lVar6 + 80))->Eval(local_3c);
                        if ((fVar11 < 0.0) || (1.0 < fVar11)) {
                            local_78._0_4_ = fVar11;
                            LogAssert("(opacityF >= 0.f) && (opacityF <= 1.f)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                      140, nullptr);
                        }
                        if ((char)(int)(fVar11 * 255.0) != '\0') {
                            lVar6 = local_50.operator->();
                            this_01 = (shared_ptr*)cutscene2DResources.GetSprite(*(int*)(lVar6 + 76));
                            if (!(shared_ptr::operator_cast_to_bool(this_01))) {
                                pLVar7 = logger::default_logger();
                                lVar6 = local_50.operator->();
                                uVar1 = *(unsigned int*)(lVar6 + 76);
                                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pLVar7->Log(false, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                            179, "Could not retrieve sprite resource %d at %.2f for scene %s",
                                            (uint32_t)local_80, (unsigned long)uVar1, uVar8);
                            } else {
                                lVar6 = local_50.operator->();
                                local_38 = (ReturnValue)((lVar6 + 176))->Eval(local_3c);
                                lVar6 = local_50.operator->();
                                local_78 = ((lVar6 + 232))->Eval(local_3c);
                                lVar6 = local_50.operator->();
                                local_40 = (float)*(unsigned short*)(lVar6 + 72) * (float)local_78;
                                lVar6 = local_50.operator->();
                                new (&local_90)
                                    math::Point(local_40, local_78._4_4_ * (float)*(unsigned short*)(lVar6 + 74));
                                lVar6 = local_50.operator->();
                                fVar12 = (float)((lVar6 + 128))->Eval(local_3c);
                                fVar12 = (float)math::Deg2Rad(fVar12);
                                local_78._0_4_ = fVar12;
                                local_38 *= vector2;
                                local_90 *= vector2;
                                local_b0 = local_90 * *0.5;
                                local_38 -= local_b0;
                                iVar5 = rect.GetX();
                                local_38._0_4_ = (float)iVar5 + (float)local_38;
                                iVar5 = rect.GetZ();
                                local_5c = (float)iVar5 + local_38._4_4_;
                                local_38._4_4_ = local_5c;
                                local_64 = (float)local_38;
                                local_40 = local_90 + (float)local_38;
                                local_60 = local_8c + local_5c;
                                lVar6 = ((SpriteAtlasReference*)(*this_01).operator->())->GetRenderMapping();
                                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                                               0>*)(*this_01)
                                              .operator->();
                                this_04 = (shared_ptr<graphics::SpriteAtlas>*)this_03->second();
                                this_05 = (MapArea*)(*this_04).operator->();
                                blendMode = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                 this_05->GetOrigin())
                                                ->end();
                                graphics::GUIManager::AddElementPrecise(
                                    local_64, local_5c, local_40, local_60, (unsigned int)guiManager,
                                    *((Rect<float>*)(unsigned long)((int)(fVar11 * 255.0) & 255U | 4294967040)),
                                    (lVar6 + 88), blendMode, (float)local_78, 1, -999999);
                            }
                        }
                    } else {
                        cutscene2DImageElement1 = (Cutscene2DImageElement*)*local_50;
                        local_38 = local_48->rbegin();
                        cutscene2DImageElement2 = (Cutscene2DImageElement*)*local_38;
                        iVar4 = std::distance<Cutscene2DImageElement const*>(cutscene2DImageElement1,
                                                                             cutscene2DImageElement2);
                        if (iVar5 == iVar4)
                            goto LAB_10053a92c;
                    }
                    ++local_50;
                    local_38 = local_48->rend();
                    bVar3 = local_50 != local_38;
                } while (bVar3);
            }
            pSVar10 = local_58;
            puVar9 = &local_58->field_408;
            local_50 = puVar9->rbegin();
            local_38 = puVar9->rend();
            bVar3 = local_50 != local_38;
            if (bVar3) {
                do {
                    lVar6 = local_50.operator->();
                    this_07 = (SoundInstance*)cutscene2DResources.GetSound(
                        *(int*)(lVar6 + 72), pSVar10->m_playbackStart, pSVar10->m_playbackEnd);
                    if (this_07 == nullptr) {
                        pLVar7 = logger::default_logger();
                        lVar6 = local_50.operator->();
                        uVar1 = *(unsigned int*)(lVar6 + 72);
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pSVar10 = local_58;
                        pLVar7->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                    196, "Could not retrieve sound resource %d at %.2f for scene %s",
                                    (uint32_t)local_80, (unsigned long)uVar1, uVar8);
                    } else {
                        this_07->Start();
                    }
                    ++local_50;
                    local_38 = puVar9->rend();
                    bVar3 = local_50 != local_38;
                } while (bVar3);
            }
        }
    }

    // 0x10053afd0
    void Cutscene2D::Scene::DrawSubtitles(graphics::GUIManager* guiManager, graphics::FontManager* fontManager,
                                          graphics::FontHelpers* fontHelpers, const math::Rect<int>& rect, float arg5,
                                          const Cutscene2DResources& cutscene2DResources,
                                          const GlobalCutscene2DResources& globalCutscene2DResources) const {
        CommandLine* this_00;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        Cutscene2DSubtitleElement* cutscene2DSubtitleElement;
        shared_ptr* psVar6;
        shared_ptr<EnumType>* this_01;
        VarValue* this_03;
        uint64_t uVar7;
        StringView local_138;
        StringView local_128;
        TextProperties local_118;
        StringView local_f0;
        Cutscene2DSubtitleElement* local_d8;
        uint64_t local_c8;
        CommandLine* local_a8;
        basic_string<char, BucketAllocatorEASTL>* local_98;
        Cutscene2DSubtitleElement local_90;

        if (IsSceneActive(arg5)) {
            cutscene2DSubtitleElement = (Cutscene2DSubtitleElement*)field_528.HeapBeginPtr();
            local_d8 = (Cutscene2DSubtitleElement*)field_528.end();
            if (cutscene2DSubtitleElement != local_d8) {
                local_a8 = (CommandLine*)rect;
                do {
                    local_90 = Cutscene2DSubtitleElement(*cutscene2DSubtitleElement);
                    if ((local_90.field_72 <= arg5) && (arg5 < local_90.field_76)) {
                        psVar6 = (shared_ptr*)cutscene2DResources.GetSubtitleDataSource();
                        if (!(shared_ptr::operator_cast_to_bool(psVar6))) {
                            LogAssert("resources.GetSubtitleDataSource()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/iftype/cutscenes/Cutscene2D.cpp",
                                      217, nullptr);
                        }
                        this_01 = (shared_ptr<EnumType>*)cutscene2DResources.GetSubtitleDataSource();
                        this_03 = ((EnumType*)(*this_01).operator->())->GetOutputString(local_90.field_80);
                        local_98 = (basic_string<char, BucketAllocatorEASTL>*)this_03->GetString();
                        iVar2 = (globalCutscene2DResources.GetSubtitleFont('\0')).value_or<int>(-1);
                        local_118 = shared_ptr();
                        psVar6 = (shared_ptr*)fontManager->GetFont(iVar2, local_118);
                        if (shared_ptr::operator_cast_to_bool(psVar6)) {
                            local_118 = graphics::TextProperties(*psVar6);
                            local_118.SetAlignment(1, 1);
                            graphics::TextProperties::SetShadowColour((unsigned int)&local_118);
                            local_138.StringView<eastl::fixed_string<char, 40>>(*local_98);
                            iVar2 = rect.GetPos();
                            uVar7 = graphics::FontHelpers::PredictHeightAndLines(&local_138, iVar2, local_118);
                            iVar2 = rect.MaxZ();
                            local_128.StringView<eastl::fixed_string<char, 40>>(*local_98);
                            iVar3 = rect.GetPos();
                            iVar3 = graphics::FontHelpers::PredictWidthMultiLine(&local_128, iVar3, local_118);
                            iVar2 = iVar2 - (int)uVar7;
                            local_c8 = uVar7;
                            iVar4 = rect.GetPos();
                            iVar5 = rect.GetX();
                            guiManager->AddColouredRectangle(iVar5 + (iVar4 - iVar3) / 2 - 30, iVar2 - 70, iVar3 + 60,
                                                             (int)local_c8 + 40, 102, 1);
                            local_f0.StringView<eastl::fixed_string<char, 40>>(*local_98);
                            this_00 = local_a8;
                            local_98 = (basic_string<char, BucketAllocatorEASTL>*)(((uint64_t)local_98._4_4_ << 32) |
                                                                                   (uint32_t)(iVar2 - 50));
                            iVar3 = local_a8->GetX();
                            iVar4 = this_00->GetPos();
                            iVar5 = this_00->MaxZ();
                            fontHelpers->DrawStringMultiline(&local_f0, iVar3, (int)local_98, iVar4, iVar5 - iVar2,
                                                             nullptr, local_118);
                            rect = (Rect<int>*)local_a8;
                        }
                    }
                    cutscene2DSubtitleElement = cutscene2DSubtitleElement + 1;
                } while (cutscene2DSubtitleElement != local_d8);
            }
        }
    }

    // 0x10053b3f0
    uint64_t Cutscene2D::Scene::LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2) {
        arg1.gStringNoConversion<32, true>(*this, true);
        float fVar1 = (float)arg1.gFloat();
        m_playbackStart = fVar1;
        fVar1 = (float)arg1.gFloat();
        m_playbackEnd = fVar1;
        helpers::LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DImageElement, 1ul>>(&field_80, arg1,
                                                                                                    arg2);
        helpers::LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DAudioElement, 1ul>>(&field_408, arg1,
                                                                                                    arg2);
        helpers::LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul>>(&field_528, arg1,
                                                                                                       arg2);
        return 1;
    }

    // 0x10053b5f0
    void Cutscene2D::Play(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                          graphics::FontHelpers* fontHelpers, const math::Rect<int>& rect, float arg5,
                          const Cutscene2DResources& cutscene2DResources,
                          const GlobalCutscene2DResources& globalCutscene2DResources) const {
        ReturnValue local_100;
        uint8_t local_e8[40];
        uint8_t local_90[24];

        local_90._16_8_ = fontHelpers;
        auto local_38 = rt7Core->GetGUIManager();
        CalculateCutsceneRescaling(&local_100, this, rect);
        auto local_60 = std::get<0ul, math::Vector2T<float>, math::Rect<int>>(local_100);
        auto this_00 = std::get<1ul, math::Vector2T<float>, math::Rect<int>>(local_100);
        auto pSVar7 = rt7Core->GetScaleManager();
        float local_40 = (float)pSVar7->GetSoundSpatialSizeMax();
        local_38->AddColouredRectangle(rect, 255, 1);
        new (local_e8) graphics::ClippingState(rt7Core);
        int* piVar8 = (int*)this_00->SSOBeginPtr();
        int local_3c = *piVar8;
        piVar8 = (int*)this_00->y();
        int iVar4 = *piVar8;
        piVar8 = (int*)this_00->second();
        int iVar5 = *piVar8;
        piVar8 = (int*)this_00->qw();
        rt7Core->SetClippingRectangle(local_3c, iVar4, iVar5, *piVar8, true);
        Rect<unsigned int> local_70(*this_00);
        pSVar7 = rt7Core->GetScaleManager();
        pSVar7->InterfaceToScreenRect(local_70, true);
        iVar4 = rt7Core->GetBackBufferWidth();
        iVar5 = rt7Core->GetBackBufferHeight();
        new ((local_e8 + 24)) oldscape::dash3d::GridRect(0, 0, iVar4, iVar5);
        DrawCallState local_c0 = local_70.Intersection((local_e8 + 24));
        local_70 = local_c0;
        piVar8 = (int*)local_70.SSOBeginPtr();
        local_3c = *piVar8;
        iVar5 = rt7Core->GetBackBufferHeight();
        int iVar6 = local_70.MaxZ();
        piVar8 = (int*)local_70.second();
        iVar4 = *piVar8;
        piVar8 = (int*)local_70.qw();
        new (local_90) oldscape::dash3d::GridRect(local_3c, iVar5 - iVar6, iVar4, *piVar8);
        GUIManager* pGVar2 = local_38;
        if (local_40 != 1.0) {
            local_90->Scale(local_40);
        }
        auto drawCallState = pGVar2->GetCurrentState();
        local_c0 = render::DrawCallState(*drawCallState);
        local_c0.GetOutputMergerState()->SetScissorRects(local_90, 1);
        pGVar2->Begin(local_c0);
        Cutscene2D* pCVar1 = this;
        auto pSVar9 = HeapBeginPtr();
        auto pSVar10 = pCVar1->end();
        for (; pSVar9 != pSVar10; pSVar9 = (Scene*)&pSVar9[1].field_120) {
            pSVar9->Play(pGVar2, *this_00, *local_60, arg5, cutscene2DResources);
        }
        if (globalCutscene2DResources.ShowSkybox() != '\0') {
            local_38->Render(nullptr);
            pCVar1 = this;
            pSVar9 = (Scene*)HeapBeginPtr();
            pSVar10 = (Scene*)pCVar1->end();
            for (; pSVar9 != pSVar10; pSVar9 = (Scene*)&pSVar9[1].field_120) {
                pSVar9->DrawSubtitles(local_38, fontManager, local_90._16_8_, *this_00, arg5, cutscene2DResources,
                                      globalCutscene2DResources);
            }
        }
        local_38->End();
        if ((*(float*)local_60 != 1.0) || (*(float*)(local_60 + 4) != 1.0)) {
            iVar6 = (local_40 != 1.0) + 1;
            piVar8 = (int*)this_00->second();
            iVar4 = *piVar8;
            iVar5 = ((CommandLine*)(Minimap*)rect)->GetPos();
            if (iVar4 != iVar5) {
                piVar8 = (int*)this_00->SSOBeginPtr();
                iVar4 = *piVar8;
                piVar8 = (int*)this_00->y();
                iVar5 = *piVar8;
                piVar8 = (int*)this_00->qw();
                pGVar2 = local_38;
                local_38->AddColouredRectangle(iVar4, iVar5, iVar6, *piVar8, 572662527, 1);
                iVar5 = this_00->Right();
                piVar8 = (int*)this_00->y();
                iVar4 = *piVar8;
                piVar8 = (int*)this_00->qw();
                pGVar2->AddColouredRectangle(iVar5 - iVar6, iVar4, iVar6, *piVar8, 572662527, 1);
            }
            piVar8 = (int*)this_00->qw();
            iVar4 = *piVar8;
            iVar5 = rect.GetLevel();
            if (iVar4 != iVar5) {
                piVar8 = (int*)this_00->SSOBeginPtr();
                iVar4 = *piVar8;
                piVar8 = (int*)this_00->y();
                iVar5 = *piVar8;
                piVar8 = (int*)this_00->second();
                pGVar2 = local_38;
                local_38->AddColouredRectangle(iVar4, iVar5, *piVar8, iVar6, 572662527, 1);
                piVar8 = (int*)this_00->SSOBeginPtr();
                iVar4 = *piVar8;
                iVar5 = this_00->MaxZ();
                piVar8 = (int*)this_00->second();
                pGVar2->AddColouredRectangle(iVar4, iVar5 - iVar6, *piVar8, iVar6, 572662527, 1);
            }
        }
    }

    // 0x10053bab0
    auto Cutscene2D::CalculateCutsceneRescaling(const math::Rect<int>& rect) const {
        auto result;
        int iVar2;
        float local_34;

        Rect<int> local_50(rect);
        float local_3c = (float)field_696 / (float)field_698;
        auto piVar3 = local_50.second();
        float local_40 = (float)*piVar3 / local_3c;
        int iVar1 = rect.GetLevel();
        float local_38 = (float)iVar1;
        auto pfVar4 = std::min<float>(local_40, local_38);
        local_40 = *pfVar4;
        iVar1 = math::RoundFloatToInt(local_40);
        local_50.SetLevel(iVar1);
        piVar3 = (int*)local_50.qw();
        iVar1 = math::RoundFloatToInt((float)*piVar3 * local_3c);
        local_50 = oldscape::ServerConnectionWorkItem(iVar1);
        piVar3 = (int*)local_50.second();
        local_38 = (float)rect.GetPos();
        piVar3 = std::min<int>(*piVar3, local_38);
        local_50 = oldscape::ServerConnectionWorkItem(*piVar3);
        piVar3 = (int*)local_50.qw();
        local_38 = (float)rect.GetLevel();
        piVar3 = std::min<int>(*piVar3, local_38);
        local_50.SetLevel(*piVar3);
        piVar3 = (int*)local_50.second();
        local_3c = (float)*piVar3 / (float)field_696;
        piVar3 = (int*)local_50.qw();
        new (&local_38) math::Point(local_3c, (float)*piVar3 / (float)field_698);
        if ((local_38 != 1.0) || (local_34 != 1.0)) {
            piVar3 = (int*)local_50.SSOBeginPtr();
            iVar1 = *piVar3;
            iVar2 = rect.GetPos();
            piVar3 = (int*)local_50.second();
            local_50 = std::__cxx_atomic_base_impl((iVar2 - *piVar3) / 2 + iVar1);
            piVar3 = (int*)local_50.y();
            iVar1 = *piVar3;
            iVar2 = rect.GetLevel();
            piVar3 = (int*)local_50.qw();
            local_50.SetZ((iVar2 - *piVar3) / 2 + iVar1);
        }
        result.pair<math::Vector2T<float>&, math::Rect<int>&, false>(local_38, local_50);
        return result;
    }

    // 0x10053bdf0
    void Cutscene2D::PrepareResourceRequests(Cutscene2DResources* cutscene2DResources) const {
        if (cutscene2DResources == nullptr) {
            LogAssert("resources",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      401, nullptr);
        }
        cutscene2DResources->SetSubtitleDataSourceID(field_700);
        auto this_00 = HeapBeginPtr();
        auto pSVar1 = end();
        for (; this_00 != pSVar1; this_00 = (Scene*)&this_00[1].field_120) {
            this_00->PrepareResourceRequests(cutscene2DResources);
        }
    }

    // 0x10053be90
    uint64_t Cutscene2D::LoadFromPacket(PacketT<Array<unsigned char>>& arg1) {
        if (arg1.g1() != '\x01') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/iftype/cutscenes/Cutscene2D.cpp",
                            421, nullptr);
        }
        unsigned short uVar3 = arg1.g2();
        field_696 = uVar3;
        uVar3 = arg1.g2();
        field_698 = uVar3;
        field_700 = arg1.g2();
        uint8_t bVar2 = arg1.g1();
        resize((unsigned long)bVar2);
        auto this_00 = HeapBeginPtr();
        auto pSVar5 = end();
        for (; this_00 != pSVar5; this_00 = (Scene*)&this_00[1].field_120) {
            this_00->LoadFromPacket(arg1, 1);
        }
        return 1;
    }

    // 0x10053bfc0
    float Cutscene2D::GetDurationSec() const {
        float* pfVar2;
        float local_30;

        return local_2c = 0.0;
        auto this_00 = HeapBeginPtr();
        auto pMVar1 = end();
        if (this_00 != pMVar1) {
            do {
                local_30 = (float)this_00->GetDefaultNonMetalSpecular();
                pfVar2 = std::max<float>(local_2c, local_30);
                local_2c = *pfVar2;
                this_00 = (Material*)&this_00[3].m_size;
            } while (this_00 != pMVar1);
        }
        return local_2c;
    }

    // 0x10053c050
    uint16_t Cutscene2D::GetSceneIndex(StringView stringView) const {
        uint16_t uVar3;
        uint16_t uVar2;
        unsigned long uVar5;
        unsigned long arg1;
        StringView local_58;
        unsigned char local_48[22];

        if (size() != 0) {
            arg1 = 0;
            do {
                (*this)[arg1];
                local_48->GetTypeName();
                local_58 = StringView(*stringView);
                if (*local_48 == &local_58 != '\0') {
                    local_48[0] = (unsigned char)arg1;
                    local_32.optional<unsigned char, 0>(*local_48);
                    uVar3._0_1_ = local_32[0];
                    uVar3._1_1_ = local_32[1];
                    return uVar3;
                }
                arg1 = arg1 + 1;
                uVar5 = size();
            } while (arg1 < uVar5);
        }
        optional<unsigned char> local_32;
        uVar2._0_1_ = local_32[0];
        uVar2._1_1_ = local_32[1];
        return uVar2;
    }

    // 0x10053c180
    void Cutscene2D::GetSceneStartSec(unsigned char arg1) const {
        uint64_t in_register_00000031;

        unsigned long arg1_00 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        if (size() <= arg1_00) {
            LogAssert("sceneIndex < m_scenes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      470, nullptr);
        }
        ((Scene*)(*this)[arg1_00])->GetPlaybackStart();
    }

    // 0x10053c1d0
    void Cutscene2D::GetSceneEndSec(unsigned char arg1) const {
        uint64_t in_register_00000031;

        unsigned long arg1_00 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        if (size() <= arg1_00) {
            LogAssert("sceneIndex < m_scenes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      478, nullptr);
        }
        ((Material*)(*this)[arg1_00])->GetDefaultNonMetalSpecular();
    }

    // 0x10053c220
    float Cutscene2D::GetSceneDurationSec(unsigned char arg1) const {
        uint64_t in_register_00000031;

        unsigned long arg1_00 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        if (size() <= arg1_00) {
            LogAssert("sceneIndex < m_scenes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2D.cpp",
                      486, nullptr);
        }
        Scene* this_00 = (Scene*)(*this)[arg1_00];
        float fVar2 = (float)this_00->GetDefaultNonMetalSpecular();
        float fVar3 = (float)this_00->GetPlaybackStart();
        return fVar2 - fVar3;
    }

    // 0x100542820: Cutscene2DSubtitleElement::Cutscene2DSubtitleElement() has the same machine code as Cutscene2DAudioElement::Cutscene2DAudioElement()

} // namespace jag::game

namespace jag::game::helpers {
    // 0x10053a220
    void CalculateAnimationVisibilityTimeInterval(WrapArray<Cutscene2DAnimation<float>::Key const> wrapArray) {
        int iVar2;
        int iVar3;
        long lVar4;
        float* pfVar5;
        uint64_t extraout_RDX;
        uint64_t uVar6;
        uint64_t extraout_RDX_00;
        unsigned long arg1;
        unsigned long arg1_00;
        uint8_t auVar7[16];
        pair<float, float> local_48;
        uint64_t local_40;
        uint8_t local_38;
        float local_30;
        float local_2c;

        if (wrapArray->empty() == '\0') {
            iVar2 = wrapArray->HeapBeginPtr();
            arg1 = (unsigned long)iVar2;
            do {
                if ((long)arg1 < 1)
                    goto LAB_10053a2d2;
                arg1 = arg1 - 1;
                lVar4 = (*wrapArray)[arg1];
            } while (*(float*)(lVar4 + 4) <= 0.0);
            iVar2 = (int)arg1;
            if (iVar2 != -1) {
                iVar3 = iVar2;
                if (0 < iVar2) {
                    arg1_00 = 0;
                    do {
                        lVar4 = (*wrapArray)[arg1_00];
                        if (0.0 < *(float*)(lVar4 + 4)) {
                            iVar3 = (int)arg1_00;
                            break;
                        }
                        arg1_00 = arg1_00 + 1;
                    } while ((arg1 & 4294967295) != arg1_00);
                }
                if (-1 < iVar3) {
                    if (iVar3 == 0) {
                        local_30 = -500000.0;
                    } else {
                        pfVar5 = (float*)(*wrapArray)[(long)(iVar3 - 1)];
                        local_30 = *pfVar5;
                    }
                    iVar3 = wrapArray->HeapBeginPtr();
                    if (iVar2 + 1 < iVar3) {
                        pfVar5 = (float*)(*wrapArray)[(long)(iVar2 + 1)];
                        local_2c = *pfVar5;
                    } else {
                        local_2c = 500000.0;
                    }
                    local_48.pair<float&, float&, false>(local_30, local_2c);
                    local_40.optional<std::pair<float, float>, 0>(local_48);
                    uVar6 = extraout_RDX_00;
                    goto LAB_10053a2db;
                }
            }
        }
    LAB_10053a2d2:
        new (&local_40) std::optional<std::pair<float, float>>();
        uVar6 = extraout_RDX;
    LAB_10053a2db:
        auVar7._9_7_ = (uint64_t)((unsigned long)uVar6 >> 8);
        auVar7[8] = local_38;
        auVar7._0_8_ = local_40;
        return auVar7;
    }

    // 0x10053b470
    bool LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DImageElement, 1ul>>(
        eastl::fixed_vector<Cutscene2DImageElement, 1ul>* cutscene2DImageElements, PacketT<Array<unsigned char>>& arg2,
        int arg3) {
        uint8_t bVar1 = arg2.g1();
        cutscene2DImageElements->resize((unsigned long)bVar1);
        auto cutscene2DImageElement = cutscene2DImageElements->HeapBeginPtr();
        auto pCVar3 = cutscene2DImageElements->end();
        bool cVar2 = (char)pCVar3;
        while (true) {
            if (cutscene2DImageElement == pCVar3) {
                return (bool)cVar2;
            }
            cVar2 = cutscene2DImageElement->LoadFromPacket(arg2, arg3);
            if (!cVar2)
                break;
            cutscene2DImageElement = (Cutscene2DImageElement*)&cutscene2DImageElement[1].field_48;
        }
        return false;
    }

    // 0x10053b4f0
    bool LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DAudioElement, 1ul>>(
        eastl::fixed_vector<Cutscene2DAudioElement, 1ul>* cutscene2DAudioElements, PacketT<Array<unsigned char>>& arg2,
        int arg3) {
        uint8_t bVar1 = arg2.g1();
        cutscene2DAudioElements->resize((unsigned long)bVar1);
        auto cutscene2DAudioElement = cutscene2DAudioElements->HeapBeginPtr();
        auto pCVar3 = cutscene2DAudioElements->end();
        bool cVar2 = (char)pCVar3;
        while (true) {
            if (cutscene2DAudioElement == pCVar3) {
                return (bool)cVar2;
            }
            cVar2 = cutscene2DAudioElement->LoadFromPacket(arg2, arg3);
            if (!cVar2)
                break;
            cutscene2DAudioElement = cutscene2DAudioElement + 1;
        }
        return false;
    }

    // 0x10053b570
    bool LoadCutscene2DElementsFromPacket<eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul>>(
        eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul>* cutscene2DSubtitleElements,
        PacketT<Array<unsigned char>>& arg2, int arg3) {
        uint8_t bVar1 = arg2.g1();
        cutscene2DSubtitleElements->resize((unsigned long)bVar1);
        auto cutscene2DSubtitleElement = cutscene2DSubtitleElements->HeapBeginPtr();
        auto pCVar3 = cutscene2DSubtitleElements->end();
        bool cVar2 = (char)pCVar3;
        while (true) {
            if (cutscene2DSubtitleElement == pCVar3) {
                return (bool)cVar2;
            }
            cVar2 = cutscene2DSubtitleElement->LoadFromPacket(arg2, arg3);
            if (!cVar2)
                break;
            cutscene2DSubtitleElement = cutscene2DSubtitleElement + 1;
        }
        return false;
    }

} // namespace jag::game::helpers

// 0x10053e160
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

// 0x100540bf0
void sin(float arg1) {
    _sinf();
}

// 0x100540c00
void cos(float arg1) {
    _cosf();
}

namespace jag {
    // 0x10053eb80
    ui::Interface* placement_new<ui::Interface, int&, bool&, eastl::vector<PacketT<Array<unsigned char>>>&,
                                 std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>&,
                                 void (*)(ui::Component*, PacketT<Array<unsigned char>>&, int)>(
        void* arg1, int& arg2, bool& arg3, eastl::vector<PacketT<Array<unsigned char>>>& arg4,
        std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>& callback,
        void (*&&)(ui::Component*, PacketT<Array<unsigned char>>&, int) arg6) {
        function<shared_ptr<ui::Component>(unsigned char, unsigned short)> local_68[48];
        long local_38;

        int arg1_00 = arg2;
        bool arg2_00 = arg3;
        new (local_68) std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>(callback);
        new (arg1) ui::Interface(arg1_00, arg2_00, arg4, local_68, *(void**)arg6);
        return arg1;
    }

    // 0x10053ec20
    MakeSharedPoolRefCounter<ui::Interface, MakeSharedPool<ui::Interface, 128>>*
    placement_new<MakeSharedPoolRefCounter<ui::Interface, MakeSharedPool<ui::Interface, 128>>,
                  MakeSharedPool<ui::Interface, 128>::RefCounterAndData*&, ui::Interface*>(
        void* arg1, MakeSharedPool<ui::Interface, 128>::RefCounterAndData*& arg2, ui::Interface*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<ui::Interface, MakeSharedPool<ui::Interface, 128>>(arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::console {
    // 0x10053c140: VarAny::GetTypeName() const has the same machine code as game::Cutscene2D::Scene::GetName() const

} // namespace jag::console
