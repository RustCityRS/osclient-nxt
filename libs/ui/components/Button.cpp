// libs/ui/components/Button.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Button.h"
#include "libs/tweaky/Tweaky_Button.h"

namespace jag::ui {
    // 0x100009e70: Button::DrawModelSprite(graphics::RT7Core*, int, int, unsigned char) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Button::GenerateModelSprite(graphics::RT7Core*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100269bb0: Button::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt::GetID() const

    // 0x1005fa390: Button::SupportsMargin(Component::MarginType) const has the same machine code as game::option::WindowMode::IsAvailable(game::option::OptionClient) const

    // 0x100688bb0
    Button::Button() : Component() {
        m_pValueRepresentation = &PTR__Button_100f0e518;
        new (field_400) ButtonElement(1, 1);
        uint8_t* this_00 = &field_432;
        new (this_00) TextData();
        new (&field_496) SpriteData();
        field_544 = false;
        field_545 = true;
        new (field_546) Margin(255);
        field_552 = 0;
        m_linkObjType = -1;
        m_linkObjCount = 0;
        SetEnabled(true);
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x100688ee0
    void Button::SetEnabled(bool arg1) {
        uint32_t in_register_00000031;

        SetEnabled(arg1);
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            field_400->FinishTransitions();
            field_552 = 0;
        }
    }

    // 0x100688fe0
    void Button::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4, bool arg5,
                           bool arg6, bool arg7) {
        uint8_t bVar1;

        if (field_400->GetZ() == 2) {
            bVar1 = field_400->IsPressed();
            arg5 = (bool)(~arg5 & bVar1 & componentDependencies[57] != (ComponentDependencies)0 | arg5);
        }
        if (UpdateState(arg4, arg5, arg6) != '\0') {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 32))(*(long**)(componentDependencies + 48),
                                                                              this);
        }
    }

    // 0x100689080
    uint64_t Button::UpdateState(bool arg1, bool arg2, bool arg3) {
        int iVar2;
        int arg4;
        uint32_t uVar3;
        uint8_t in_stack_ffffffffffffffb8;
        Vector2T<float> local_40;
        ButtonElement* local_38;

        if (IsEnabled() != '\0') {
            if (field_552 == 3) {
                field_552 = 0;
            }
            local_38 = (ButtonElement*)field_400;
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
            field_552 = uVar3;
        }
        return 0;
    }

    // 0x100689150
    void Button::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        uint8_t arg4_00 = GetAlpha();
        if (arg4_00 != 0) {
            if (((DragState*)(**(void (**)(...))(**(long**)(componentDependencies + 48) + 80))())
                    ->IsDraggedComponent(this)) {
                if (!(field_264->GetSpriteAlpha())) {
                    arg4_00 = (uint8_t)(int)((float)arg4_00 * 0.5);
                }
            }
            field_400->UpdateAnimations(arg4);
            DrawBaseSprite(*(RT7Core**)(componentDependencies + 16), arg2, arg3, arg4_00);
            DrawModelSprite(*(uint64_t*)(componentDependencies + 16), (unsigned long)(unsigned int)arg2,
                            (unsigned long)(unsigned int)arg3, (unsigned long)arg4_00);
            DrawLabel(componentDependencies, arg2, arg3, arg4_00);
        }
    }

    // 0x1006892c0
    void Button::DrawBaseSprite(graphics::RT7Core* rt7Core, int arg2, int arg3, unsigned char arg4) {
        bool arg7;
        unsigned short arg4_00;
        unsigned short arg5;
        int iVar2;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        SpriteAtlas* this_07;
        long lVar4;
        Logger* this_09;

        uint8_t* this_00 = &field_496;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_09 = logger::default_logger();
                iVar2 = 151;
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
                    this_07 = (SpriteAtlas*)(*this_04).operator->();
                    iVar2 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                    lVar4 = this_07->GetSpriteRenderMapping(iVar2);
                    arg4_00 = GetStreamCountLastMix();
                    arg5 = GetMinMapX();
                    iVar2 = GetUIHeight();
                    arg7 = (bool)IsEnabled();
                    field_400->Draw(*rt7Core, arg2, arg3, arg4_00, arg5, (unsigned int)arg4 | iVar2 << 8, arg7, texture,
                                    *((lVar4 + 88)), *this_00, false);
                    return;
                }
                this_09 = logger::default_logger();
                iVar2 = 159;
            }
            this_09->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Button.cpp", iVar2,
                "Invalid sprite atlas reference!");
        }
    }

    // 0x100689490
    void Button::DrawLabel(const ComponentDependencies& componentDependencies, int arg2, int arg3, unsigned char arg4) {
        FontHelpers* this_02;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int arg2_00;
        uint64_t in_register_00000081;
        StringView local_1c8;
        TextProperties local_1b8;
        Margin local_178;
        int local_168;
        int local_164;

        unsigned int local_174 = (unsigned int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        uint8_t* this_00 = &field_432;
        int iVar2 = this_00->GetEndPosition();
        if (iVar2 == -1) {
        LAB_1006896f2:
            return;
        }
        FontManager* this_01 = *(FontManager**)(componentDependencies + 8);
        iVar2 = this_00->GetEndPosition();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_160;
        auto this_03 = this_01->GetFont(iVar2, local_160);
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_03);
        if (!cVar1)
            goto LAB_1006896f2;
        local_160 = eastl::fixed_string<char, 256>();
        StringView local_188;
        if (field_545 != false) {
            cVar1 = GetLinkObjText();
            if (cVar1) {
                local_1b8.StringView<eastl::fixed_string<char, 40>>(local_160);
                goto LAB_10068959a;
            }
        }
        auto str = this_00->GetScreen();
        local_1b8.StringView<eastl::fixed_string<char, 40>>(*str);
    LAB_10068959a:
        local_188 = local_1b8;
        cVar1 = local_188.empty();
        if (!cVar1) {
            local_168 = GetStreamCountLastMix();
            local_164 = GetMinMapX();
            iVar2 = field_496.GetX();
            if (iVar2 != -1) {
                local_178 = (Margin)field_496.GetVisualMargin();
                local_1b8.m_pFont._0_4_ = field_546->GetValidOr(&local_178);
                local_1b8.ApplyTo(arg2, arg3, local_168, local_164);
            }
            uVar3 = this_00->GetTextAlpha();
            local_1b8 = graphics::TextProperties(*this_03);
            uVar4 = local_174 & 255;
            arg2_00 = GetRGBA();
            this_00->PopulateTextProperties(local_1b8, arg2_00, (unsigned char)(((uVar3 & 255) * uVar4) / 255));
            this_02 = *(FontHelpers**)componentDependencies;
            local_1c8 = StringView(local_188);
            this_02->DrawStringMultiline(&local_1c8, arg2, arg3, local_168, local_164, nullptr, local_1b8);
        }
    }

    // 0x100689760
    void Button::MainDrawClipped(const ComponentDependencies& componentDependencies) {
        if (field_544 != false) {
            if (GetLinkObjType() != -1) {
                DrawModelSprite(*(uint64_t*)(componentDependencies + 16));
            }
        }
    }

    // 0x1006897b0
    void Button::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint64_t in_RAX;

        Margin local_34 = (uint32_t)((unsigned long)in_RAX >> 32);
        char cVar1 = arg1.g1();
        SetEnabled(cVar1 == '\x01');
        cVar1 = arg1.g1();
        uint8_t bVar2 = arg1.g1();
        char cVar3 = arg1.g1();
        field_544 = cVar3 == '\x01';
        cVar3 = arg1.g1();
        field_545 = cVar3 == '\x01';
        local_34 = Margin(arg1);
        field_546[0] = local_34.field_0;
        field_546[1] = local_34.field_1;
        field_546[2] = local_34.field_2;
        field_546[3] = local_34.field_3;
        uint8_t bVar4 = arg1.g1();
        field_100 = ~bVar4;
        field_96 = arg1.g4();
        field_496.DecodeSpriteData(arg1, arg2);
        field_432.DecodeTextData(arg1, arg2);
        field_400->SetBehaviour((unsigned int)(cVar1 == '\x01') * 3 + 1, (unsigned int)bVar2);
    }

    // 0x1006898a0
    void Button::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 12, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 11, true);
        field_546->LoadFromStylesheet(13, styleSheet);
        field_432.LoadStyleSheetTextData(19, styleSheet);
        field_496.LoadStyleSheetSpriteData(27, styleSheet);
    }

    // 0x100689990
    unsigned long Button::HasInteractionInProgress() const {
        if (field_552 == 1) {
            return field_400->PressedRecently() ^ 1;
        }
        return 0;
    }

    // 0x1006899d0
    void Button::SetCanToggle(bool arg1) {
        uint64_t in_register_00000031;

        auto trigger = field_400->GetZ();
        field_400->SetBehaviour((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) * 3 + 1, trigger);
    }

    // 0x100689a10
    bool Button::NotifyInteracted() {
        bool bVar1;

        if (field_552 == 0) {
            UpdateState(true, true, true);
            bVar1 = field_552 == 2;
        } else {
            bVar1 = field_552 != 1;
        }
        return bVar1;
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100009e70: Button::ResetToDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10002d860: Button::OnMouseOver(float, float) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

} // namespace jag::tweak
