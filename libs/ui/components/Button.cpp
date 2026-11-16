// libs/ui/components/Button.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Button.h"
#include "libs/tweaky/Tweaky_Button.h"

namespace jag::ui {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Button::DrawModelSprite(graphics::RT7Core*, int, int, unsigned char);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Button::GenerateModelSprite(graphics::RT7Core*);

    // 0x100269bb0: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt::GetID() const, which has identical code
    Button::GetType() const;

    // 0x1005fa390: the linker folded this into game::option::WindowMode::IsAvailable(game::option::OptionClient) const, which has identical code
    Button::SupportsMargin(Component::MarginType) const;

    // 0x100688bb0, 288 bytes, base-object constructor, placed by class name
    // Button::Button()
    void Button::Button() {
        undefined1* this_00;

        new (this) Component();
        new (&m_pValueRepresentation) ComponentSingleValueMixin();
        field_0 = &PTR__Button_100f0e3d0;
        m_pValueRepresentation = &PTR__Button_100f0e518;
        new (field_400, 1, 1) ButtonElement();
        this_00 = &field_432;
        new (this_00) TextData();
        new (&field_496) SpriteData();
        field_544 = false;
        field_545 = true;
        new (&field_546, 255) Margin();
        field_552 = 0;
        m_linkObjType = -1;
        m_linkObjCount = 0;
        SetEnabled(this, true);
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x100688ee0, 64 bytes, placed by class name
    // Button::SetEnabled(bool)
    void Button::SetEnabled(bool param_1) {
        undefined3 in_register_00000031;

        SetEnabled(param_1);
        if (CONCAT31(in_register_00000031, param_1) == 0) {
            field_400->FinishTransitions();
            field_552 = 0;
        }
    }

    // 0x100688fd0, 16 bytes, complete-object constructor, placed by class name
    // Button::Button(): jumps straight to the base-object constructor

    // 0x100688fe0, 144 bytes, placed by class name
    // Button::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void Button::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                           bool param_6, bool param_7) {
        byte bVar1;

        if (field_400->GetZ() == 2) {
            bVar1 = field_400->IsPressed();
            param_5 = (bool)(~param_5 & bVar1 & param_1[57] != (ComponentDependencies)0 | param_5);
        }
        if (UpdateState(this, param_4, param_5, param_6) != '\0') {
            (**(code**)(**(long**)(param_1 + 48) + 32))(*(long**)(param_1 + 48), this);
        }
    }

    // 0x100689080, 208 bytes, placed by class name
    // Button::UpdateState(bool, bool, bool)
    undefined8 Button::UpdateState(bool param_1, bool param_2, bool param_3) {
        undefined4 uVar2;
        undefined4 uVar3;
        int iVar4;
        ButtonElement* local_40;
        undefined1* local_38;

        if (IsEnabled() != '\0') {
            if (field_552 == 3) {
                field_552 = 0;
            }
            local_38 = field_400;
            new (&local_40) math::Vector2T<float>(0.0);
            uVar2 = GetStreamCountLastMix();
            uVar3 = GetMinMapX();
            iVar4 = local_40->UpdateLogic(local_38, 0, 0, uVar2, uVar3, param_3, param_1, param_2);
            if (iVar4 == 0) {
                uVar2 = 2;
            } else {
                if (iVar4 == 3) {
                    return 1;
                }
                if (iVar4 != 1) {
                    return 0;
                }
                uVar2 = 1;
            }
            field_552 = uVar2;
        }
        return 0;
    }

    // 0x100689150, 224 bytes, placed by class name
    // Button::MainDraw(ComponentDependencies const&, int, int, float)
    void Button::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        byte bVar1;
        char cVar2;
        DragState* this_00;

        bVar1 = GetAlpha();
        if (bVar1 != 0) {
            this_00 = (DragState*)(**(code**)(**(long**)(param_1 + 48) + 80))();
            cVar2 = this_00->IsDraggedComponent(this);
            if (cVar2 != '\0') {
                cVar2 = field_264->GetSpriteAlpha();
                if (cVar2 == '\0') {
                    bVar1 = (byte)(int)((float)bVar1 * 0.5);
                }
            }
            (field_400, param_4)->UpdateAnimations();
            DrawBaseSprite(this, *(RT7Core**)(param_1 + 16), param_2, param_3, bVar1);
            (*(code*)field_0[36])(this, *(undefined8*)(param_1 + 16), param_2, param_3, bVar1);
            DrawLabel(this, param_1, param_2, param_3, bVar1);
        }
    }

    // 0x1006892c0, 464 bytes, placed by class name
    // Button::DrawBaseSprite(graphics::RT7Core*, int, int, unsigned char)
    void Button::DrawBaseSprite(RT7Core* param_1, int param_2, int param_3, uchar param_4) {
        undefined1* this_00;
        bool bVar1;
        ushort uVar2;
        ushort uVar3;
        int iVar4;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar5;
        undefined* puVar6;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar7;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar8;
        undefined8 uVar9;
        undefined8 uVar10;

        this_00 = &field_496;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar5 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar6 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar5, false);
        if (puVar6 == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            bVar1 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar1) {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                this_04 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_03);
                bVar1 = shared_ptr::operator_cast_to_bool(this_04);
                if (bVar1) {
                    this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    pTVar7 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    if (pTVar7 == (Texture*)0) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_08 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    iVar4 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                    lVar8 = this_07->GetSpriteRenderMapping(iVar4);
                    uVar2 = GetStreamCountLastMix();
                    uVar3 = GetMinMapX();
                    iVar4 = GetUIHeight();
                    bVar1 = (bool)IsEnabled();
                    (field_400, param_1, param_2, param_3, uVar2, uVar3, (uint)param_4 | iVar4 << 8, bVar1, pTVar7,
                     (Rect*)(lVar8 + 88), (SpriteData*)this_00, false)
                        ->Draw();
                    return;
                }
                uVar9 = logger::default_logger();
                uVar10 = 159;
            } else {
                uVar9 = logger::default_logger();
                uVar10 = 151;
            }
            logger::Logger::Log(
                uVar9, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Button.cpp",
                uVar10, "Invalid sprite atlas reference!");
        }
    }

    // 0x100689490, 720 bytes, placed by class name
    // Button::DrawLabel(ComponentDependencies const&, int, int, unsigned char)
    void Button::DrawLabel(ComponentDependencies* param_1, int param_2, int param_3, uchar param_4) {
        undefined1* this_00;
        FontManager* this_01;
        FontHelpers* this_02;
        char cVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        shared_ptr* this_03;
        fixed_string* pfVar7;
        undefined7 in_register_00000081;
        StringView SVar8;
        TextProperties* in_stack_fffffffffffffe38;
        undefined1 auStack_1be[6];
        TextProperties local_1b8;
        StringView local_188;
        Margin local_178;
        uint local_174;
        int local_170;
        int local_16c;
        int local_168;
        int local_164;
        shared_ptr local_160[18];
        long local_38;

        local_174 = (uint)CONCAT71(in_register_00000081, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_432;
        local_170 = param_2;
        local_16c = param_3;
        iVar3 = this_00->GetEndPosition();
        if (iVar3 == -1) {
        LAB_1006896f2:
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        this_01 = *(FontManager**)(param_1 + 8);
        iVar3 = this_00->GetEndPosition();
        new (local_160) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_03 = (shared_ptr*)this_01->GetFont(iVar3, local_160);
        local_160->~shared_ptr();
        if (!shared_ptr::operator_cast_to_bool(this_03))
            goto LAB_1006896f2;
        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
        new (&local_188) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        if (field_545 != false) {
            cVar2 = (*(code*)field_0[38])(this, local_160);
            if (cVar2 != '\0') {
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)&local_1b8,
                                                                                              (fixed_string*)local_160);
                goto LAB_10068959a;
            }
        }
        pfVar7 = (fixed_string*)this_00->GetScreen();
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)&local_1b8, pfVar7);
    LAB_10068959a:
        StringView::operator=(&local_188, (StringView*)&local_1b8);
        cVar2 = local_188.empty();
        if (cVar2 == '\0') {
            local_168 = GetStreamCountLastMix();
            local_164 = GetMinMapX();
            iVar3 = (&field_496)->GetX();
            if (iVar3 != -1) {
                local_178 = (Margin)(&field_496)->GetVisualMargin();
                local_1b8.m_pFont._0_4_ = (&field_546, &local_178)->GetValidOr();
                local_1b8.ApplyTo(&local_170, &local_16c, &local_168, &local_164);
            }
            uVar4 = this_00->GetTextAlpha();
            new (&local_1b8) graphics::TextProperties(this_03);
            uVar5 = local_174 & 255;
            uVar6 = GetRGBA();
            this_00->PopulateTextProperties(&local_1b8, uVar6, (uchar)(((uVar4 & 255) * uVar5) / 255));
            this_02 = *(FontHelpers**)param_1;
            new ((auStack_1be + -10)) StringView(&local_188);
            SVar8.field_8._0_4_ = local_170;
            SVar8.field_0 = (ulong)(auStack_1be + -10);
            SVar8.field_8._4_4_ = 0;
            this_02->DrawStringMultiline(SVar8, local_16c, local_168, local_164, 0, (uint*)&local_1b8,
                                         in_stack_fffffffffffffe38);
        }
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x100689760, 64 bytes, placed by class name
    // Button::MainDrawClipped(ComponentDependencies const&)
    void Button::MainDrawClipped(ComponentDependencies* param_1) {
        if (field_544 != false) {
            if (GetLinkObjType(this) != -1) {
                (*(code*)field_0[37])(this, *(undefined8*)(param_1 + 16));
            }
        }
    }

    // 0x1006897b0, 240 bytes, placed by class name
    // Button::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Button::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        undefined1 uVar2;
        char cVar3;
        byte bVar4;
        undefined4 uVar5;
        undefined8 in_RAX;
        Margin local_34;

        local_34 = SUB84((ulong)in_RAX >> 32, 0);
        cVar1 = param_1->g1();
        SetEnabled(this, cVar1 == '\x01');
        cVar1 = param_1->g1();
        uVar2 = param_1->g1();
        cVar3 = param_1->g1();
        field_544 = cVar3 == '\x01';
        cVar3 = param_1->g1();
        field_545 = cVar3 == '\x01';
        new (&local_34) Margin(param_1);
        field_546 = local_34;
        bVar4 = param_1->g1();
        field_100 = ~bVar4;
        uVar5 = param_1->g4();
        field_96 = uVar5;
        (&field_496, param_1, param_2)->DecodeSpriteData();
        (&field_432, param_1, param_2)->DecodeTextData();
        (field_400, (cVar1 == '\x01') * '\x03' + '\x01', uVar2)->SetBehaviour();
    }

    // 0x1006898a0, 128 bytes, placed by class name
    // Button::LoadStyleSheetVisuals(StyleSheet const&)
    void Button::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 12, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 11, 1);
        (&field_546, 13, param_1)->LoadFromStylesheet();
        (&field_432, 19, param_1)->LoadStyleSheetTextData();
        (&field_496, 27, param_1)->LoadStyleSheetSpriteData();
    }

    // 0x100689990, 48 bytes, placed by class name
    // Button::HasInteractionInProgress() const
    ulong Button::HasInteractionInProgress() {
        if (field_552 == 1) {
            return field_400->PressedRecently() ^ 1;
        }
        return 0;
    }

    // 0x1006899d0, 64 bytes, placed by class name
    // Button::SetCanToggle(bool)
    void Button::SetCanToggle(bool param_1) {
        undefined4 uVar1;
        undefined7 in_register_00000031;

        uVar1 = field_400->GetZ();
        (field_400, (int)CONCAT71(in_register_00000031)->SetBehaviour(param_1) * 3 + 1, uVar1);
    }

    // 0x100689a10, 64 bytes, placed by class name
    // Button::NotifyInteracted()
    bool Button::NotifyInteracted() {
        bool bVar1;

        if (field_552 == 0) {
            UpdateState(this, true, true, true);
            bVar1 = field_552 == 2;
        } else {
            bVar1 = field_552 != 1;
        }
        return bVar1;
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Button::ResetToDefault();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Button::OnMouseOver(float, float);

} // namespace jag::tweak
