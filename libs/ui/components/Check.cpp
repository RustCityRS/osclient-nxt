// libs/ui/components/Check.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Check.h"

namespace jag::ui {
    // 0x1039bcdfd
    bool Check::m_enableHold;

    // 0x100269bd0: Check::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong::GetID() const

    // 0x10068cbe0
    Check::Check() : Component(), MakeSharedPool<Check, 128>() {
        m_pValueRepresentation = &PTR__Check_100f0e940;
        new (&field_400) TextData();
        new (&field_464) SpriteData();
        field_512 = -1;
        field_516 = 0;
        field_520 = 0;
        new (field_524) ButtonElement(4, 1);
        SetEnabled(true);
    }

    // 0x10068cd30
    void Check::SetEnabled(bool arg1) {
        uint32_t in_register_00000031;

        SetEnabled(arg1);
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            field_524->FinishTransitions();
            field_520 = 0;
        }
    }

    // 0x10068cd80
    void Check::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4, bool arg5,
                          bool arg6, bool arg7) {
        if (UpdateState(arg4, arg5, arg6) != '\0') {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 32))(*(long**)(componentDependencies + 48),
                                                                              this);
        }
    }

    // 0x10068cdc0
    uint64_t Check::UpdateState(bool arg1, bool arg2, bool arg3) {
        int iVar2;
        int arg4;
        uint32_t uVar3;
        uint8_t in_stack_ffffffffffffffb8;
        Vector2T<float> local_40;
        ButtonElement* local_38;

        if (IsEnabled() != '\0') {
            if (field_520 == 3) {
                field_520 = 0;
            }
            local_38 = (ButtonElement*)field_524;
            local_40 = math::Vector2T(0.0);
            iVar2 = GetStreamCountLastMix();
            arg4 = GetMinMapX();
            iVar2 = local_38->UpdateLogic(nullptr, 0, iVar2, arg4, (unsigned int)arg3, arg1, arg2,
                                          (bool)in_stack_ffffffffffffffb8);
            if (iVar2 == 0) {
                uVar3 = 2;
            } else {
                if (iVar2 == 3) {
                    return 1;
                }
                if (iVar2 != 1) {
                    return 0;
                }
                uVar3 = 1;
            }
            field_520 = uVar3;
        }
        return 0;
    }

    // 0x10068ce90
    void Check::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        if (field_100 != 0) {
            field_524->UpdateAnimations(arg4);
            DrawCheckBox(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
            DrawLabel(componentDependencies, arg2, arg3);
        }
    }

    // 0x10068cef0
    void Check::DrawCheckBox(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        uint8_t bVar1;
        bool arg7;
        int iVar3;
        int iVar4;
        int iVar5;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        Logger* this_07;
        SpriteAtlas* this_08;
        long lVar7;
        unsigned short local_3c;
        int local_38;

        uint8_t* this_00 = &field_464;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_07 = logger::default_logger();
                iVar3 = 81;
            } else {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                              .operator->();
                this_04 = (shared_ptr*)this_03->second();
                if (shared_ptr::operator_cast_to_bool(this_04)) {
                    this_05 = (MapArea*)(*this_04).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    texture = (Texture*)this_06->end();
                    if (texture == nullptr) {
                        return;
                    }
                    iVar3 = GetCheckBoxVisualSize();
                    iVar4 = GetMinMapX();
                    local_38 = arg2;
                    if ((field_512 != -1) && (field_512 != 2)) {
                        local_38 = GetStreamCountLastMix();
                        local_38 = (arg2 - iVar3) + local_38;
                    }
                    this_08 = (SpriteAtlas*)(*this_04).operator->();
                    iVar5 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                    lVar7 = this_08->GetSpriteRenderMapping(iVar5);
                    iVar5 = GetUIHeight();
                    bVar1 = field_100;
                    arg7 = (bool)IsEnabled();
                    local_3c = (unsigned short)iVar3;
                    field_524->Draw(*rt7Core, local_38, (iVar4 - iVar3) / 2 + arg3, local_3c, local_3c,
                                    (unsigned int)bVar1 | iVar5 << 8, arg7, texture, *((lVar7 + 88)), *this_00, false);
                    return;
                }
                this_07 = logger::default_logger();
                iVar3 = 89;
            }
            this_07->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Check.cpp", iVar3,
                "Invalid sprite atlas reference!");
        }
    }

    // 0x10068d100
    void Check::DrawLabel(const ComponentDependencies& componentDependencies, int arg2, int arg3) {
        uint32_t in_register_00000014;
        uint8_t bVar5;
        StringView local_80;

        unsigned long local_38 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        uint8_t* this_00 = &field_400;
        int iVar2 = this_00->GetEndPosition();
        if (iVar2 == -1) {
            return;
        }
        FontManager* this_01 = *(FontManager**)(componentDependencies + 8);
        iVar2 = this_00->GetEndPosition();
        TextProperties local_70;
        auto this_03 = this_01->GetFont(iVar2, local_70);
        if (shared_ptr::operator_cast_to_bool(this_03) == '\0') {
            return;
        }
        int iVar3 = GetCheckBoxVisualSize();
        int iVar4 = GetStreamCountLastMix();
        iVar2 = field_512;
        if (iVar2 == 2) {
            local_38 = (unsigned long)((int)local_38 + iVar3 + 5);
        } else if (iVar2 != 1) {
            if (iVar2 == -1) {
                local_38 = (unsigned long)((int)local_38 + iVar3 + 5);
            }
            bVar5 = 0;
            goto LAB_10068d1d2;
        }
        bVar5 = 2;
    LAB_10068d1d2:
        local_70 = graphics::TextProperties(*this_03);
        this_00->SetTextHAlign((unsigned int)bVar5);
        this_00->SetTextVAlign(1);
        unsigned int arg2_00 = GetRGBA();
        this_00->PopulateTextProperties(local_70, arg2_00, field_100);
        FontHelpers* this_02 = *(FontHelpers**)componentDependencies;
        auto str = this_00->GetScreen();
        local_80.StringView<eastl::fixed_string<char, 40>>(*str);
        iVar2 = GetMinMapX();
        this_02->DrawStringMultiline(&local_80, (int)local_38, arg3, (iVar4 - iVar3) - 5, iVar2, nullptr, local_70);
    }

    // 0x10068d290
    void Check::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        char cVar1 = arg1.g1();
        SetEnabled(cVar1 == '\x01');
        cVar1 = arg1.g1();
        SetChecked(cVar1 == '\x01');
        cVar1 = arg1.g1s();
        field_512 = (int)cVar1;
        field_516 = arg1.g1();
        uint8_t bVar3 = arg1.g1();
        field_100 = ~bVar3;
        field_96 = arg1.g4();
        field_464.DecodeSpriteData(arg1, arg2);
        field_400.DecodeTextData(arg1, arg2);
    }

    // 0x10068d370
    void Check::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 38, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 37, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_516, 40, true);
        styleSheet.LoadPropertyValueIfSet<signed char, Check::Alignment>(field_512, 39, true);
        field_400.LoadStyleSheetTextData(41, styleSheet);
        field_464.LoadStyleSheetSpriteData(49, styleSheet);
    }

    // 0x10068d480
    unsigned long Check::HasInteractionInProgress() const {
        if (field_520 == 1) {
            return field_524->PressedRecently() ^ 1;
        }
        return 0;
    }

    // 0x10068d4b0
    bool Check::NotifyInteracted() {
        bool bVar1;

        if (field_520 == 1) {
            bVar1 = false;
        } else if (field_520 == 0) {
            UpdateState(true, false, false);
            bVar1 = field_520 == 2;
        } else {
            bVar1 = true;
        }
        return bVar1;
    }

    // 0x1006acf00: Check::GetValueRepresentation() has the same machine code as Button::GetValueRepresentation()

} // namespace jag::ui
