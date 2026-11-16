// libs/ui/components/Check.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Check.h"

namespace jag::ui {
    // 0x1039bcdfd, 3 bytes, __common; zero-initialised
    Check::m_enableHold;

    // 0x100269bd0: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong::GetID() const, which has identical code
    Check::GetType() const;

    // 0x10068cbe0, 240 bytes, base-object constructor, placed by class name
    // Check::Check()
    void Check::Check() {
        new (this) Component();
        new (this) MakeSharedPool<Check, 128>();
        new (&m_pValueRepresentation) ComponentSingleValueMixin();
        field_0 = &PTR__Check_100f0e810;
        m_pValueRepresentation = &PTR__Check_100f0e940;
        new (&field_400) TextData();
        new (&field_464) SpriteData();
        field_512 = -1;
        field_516 = 0;
        field_520 = 0;
        new (field_524, 4, 1) ButtonElement();
        SetEnabled(this, true);
    }

    // 0x10068cd30, 64 bytes, placed by class name
    // Check::SetEnabled(bool)
    void Check::SetEnabled(bool param_1) {
        undefined3 in_register_00000031;

        SetEnabled(param_1);
        if (CONCAT31(in_register_00000031, param_1) == 0) {
            field_524->FinishTransitions();
            field_520 = 0;
        }
    }

    // 0x10068cd70, 16 bytes, complete-object constructor, placed by class name
    // Check::Check(): jumps straight to the base-object constructor

    // 0x10068cd80, 64 bytes, placed by class name
    // Check::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void Check::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                          bool param_6, bool param_7) {
        if (UpdateState(this, param_4, param_5, param_6) != '\0') {
            (**(code**)(**(long**)(param_1 + 48) + 32))(*(long**)(param_1 + 48), this);
        }
    }

    // 0x10068cdc0, 208 bytes, placed by class name
    // Check::UpdateState(bool, bool, bool)
    undefined8 Check::UpdateState(bool param_1, bool param_2, bool param_3) {
        undefined4 uVar2;
        undefined4 uVar3;
        int iVar4;
        ButtonElement* local_40;
        undefined1* local_38;

        if (IsEnabled() != '\0') {
            if (field_520 == 3) {
                field_520 = 0;
            }
            local_38 = field_524;
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
            field_520 = uVar2;
        }
        return 0;
    }

    // 0x10068ce90, 96 bytes, placed by class name
    // Check::MainDraw(ComponentDependencies const&, int, int, float)
    void Check::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        if (field_100 != 0) {
            (field_524, param_4)->UpdateAnimations();
            DrawCheckBox(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
            DrawLabel(this, param_1, param_2, param_3);
        }
    }

    // 0x10068cef0, 528 bytes, placed by class name
    // Check::DrawCheckBox(graphics::RT7Core*, int, int)
    void Check::DrawCheckBox(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        byte bVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar6;
        undefined* puVar7;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar8;
        undefined8 uVar9;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar10;
        undefined8 uVar11;
        ushort local_3c;
        int local_38;

        this_00 = &field_464;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar6 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar7 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar6, false);
        if (puVar7 == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            bVar2 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar2) {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                this_04 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_03);
                bVar2 = shared_ptr::operator_cast_to_bool(this_04);
                if (bVar2) {
                    this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    pTVar8 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    if (pTVar8 == (Texture*)0) {
                        return;
                    }
                    iVar3 = GetCheckBoxVisualSize(this);
                    iVar4 = GetMinMapX();
                    local_38 = param_2;
                    if ((field_512 != -1) && (field_512 != 2)) {
                        local_38 = GetStreamCountLastMix();
                        local_38 = (param_2 - iVar3) + local_38;
                    }
                    this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_08 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    iVar5 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                    lVar10 = this_07->GetSpriteRenderMapping(iVar5);
                    iVar5 = GetUIHeight();
                    bVar1 = field_100;
                    bVar2 = (bool)IsEnabled();
                    local_3c = (ushort)iVar3;
                    (field_524, param_1, local_38, (iVar4 - iVar3) / 2 + param_3, local_3c, local_3c,
                     (uint)bVar1 | iVar5 << 8, bVar2, pTVar8, (Rect*)(lVar10 + 88), (SpriteData*)this_00, false)
                        ->Draw();
                    return;
                }
                uVar9 = logger::default_logger();
                uVar11 = 89;
            } else {
                uVar9 = logger::default_logger();
                uVar11 = 81;
            }
            logger::Logger::Log(
                uVar9, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Check.cpp", uVar11,
                "Invalid sprite atlas reference!");
        }
    }

    // 0x10068d100, 400 bytes, placed by class name
    // Check::DrawLabel(ComponentDependencies const&, int, int)
    void Check::DrawLabel(ComponentDependencies* param_1, int param_2, int param_3) {
        undefined1* this_00;
        FontManager* this_01;
        FontHelpers* this_02;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        shared_ptr* this_03;
        fixed_string* pfVar6;
        undefined4 in_register_00000014;
        undefined1 uVar7;
        StringView SVar8;
        TextProperties* in_stack_ffffffffffffff78;
        StringView local_80;
        TextProperties local_70;
        uchar* local_38;

        local_38 = (uchar*)CONCAT44(in_register_00000014, param_2);
        this_00 = &field_400;
        iVar2 = this_00->GetEndPosition();
        if (iVar2 == -1) {
            return;
        }
        this_01 = *(FontManager**)(param_1 + 8);
        iVar2 = this_00->GetEndPosition();
        new (&local_70) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_03 = (shared_ptr*)this_01->GetFont(iVar2, (shared_ptr*)&local_70);
        local_70.~shared_ptr();
        if (!shared_ptr::operator_cast_to_bool(this_03)) {
            return;
        }
        iVar3 = GetCheckBoxVisualSize(this);
        iVar4 = GetStreamCountLastMix();
        iVar2 = field_512;
        if (iVar2 == 2) {
            local_38 = (uchar*)(ulong)((int)local_38 + iVar3 + 5);
        } else if (iVar2 != 1) {
            if (iVar2 == -1) {
                local_38 = (uchar*)(ulong)((int)local_38 + iVar3 + 5);
            }
            uVar7 = 0;
            goto LAB_10068d1d2;
        }
        uVar7 = 2;
    LAB_10068d1d2:
        new (&local_70) graphics::TextProperties(this_03);
        this_00->SetTextHAlign(uVar7);
        this_00->SetTextVAlign(1);
        uVar5 = GetRGBA();
        this_00->PopulateTextProperties(&local_70, uVar5, field_100);
        this_02 = *(FontHelpers**)param_1;
        pfVar6 = (fixed_string*)this_00->GetScreen();
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_80, pfVar6);
        iVar2 = GetMinMapX();
        SVar8.field_8 = local_38;
        SVar8.field_0 = (ulong)&local_80;
        this_02->DrawStringMultiline(SVar8, param_3, (iVar4 - iVar3) + -5, iVar2, 0, (uint*)&local_70,
                                     in_stack_ffffffffffffff78);
    }

    // 0x10068d290, 176 bytes, placed by class name
    // Check::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Check::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        undefined1 uVar2;
        byte bVar3;
        undefined4 uVar4;

        cVar1 = param_1->g1();
        SetEnabled(this, cVar1 == '\x01');
        cVar1 = param_1->g1();
        SetChecked(this, cVar1 == '\x01');
        cVar1 = param_1->g1s();
        field_512 = (int)cVar1;
        uVar2 = param_1->g1();
        field_516 = uVar2;
        bVar3 = param_1->g1();
        field_100 = ~bVar3;
        uVar4 = param_1->g4();
        field_96 = uVar4;
        (&field_464, param_1, param_2)->DecodeSpriteData();
        (&field_400, param_1, param_2)->DecodeTextData();
    }

    // 0x10068d370, 160 bytes, placed by class name
    // Check::LoadStyleSheetVisuals(StyleSheet const&)
    void Check::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 38, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 37, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_516, 40, 1);
        StyleSheet::LoadPropertyValueIfSet<signed char, Check::Alignment>(param_1, &field_512, 39, 1);
        (&field_400, 41, param_1)->LoadStyleSheetTextData();
        (&field_464, 49, param_1)->LoadStyleSheetSpriteData();
    }

    // 0x10068d480, 48 bytes, placed by class name
    // Check::HasInteractionInProgress() const
    ulong Check::HasInteractionInProgress() {
        if (field_520 == 1) {
            return field_524->PressedRecently() ^ 1;
        }
        return 0;
    }

    // 0x10068d4b0, 64 bytes, placed by class name
    // Check::NotifyInteracted()
    bool Check::NotifyInteracted() {
        bool bVar1;

        if (field_520 == 1) {
            bVar1 = false;
        } else if (field_520 == 0) {
            UpdateState(this, true, false, false);
            bVar1 = field_520 == 2;
        } else {
            bVar1 = true;
        }
        return bVar1;
    }

    // 0x1006acf00: the linker folded this into Button::GetValueRepresentation(), which has identical code
    Check::GetValueRepresentation();

} // namespace jag::ui
