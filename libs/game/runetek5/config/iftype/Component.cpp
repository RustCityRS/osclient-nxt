// libs/game/runetek5/config/iftype/Component.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Component.h"

namespace jag::game {
    // 0x100546c90
    uint8_t GameUIHookProperties::Decode(PacketT<Array<unsigned char>>& arg1, int arg2) {
        bool cVar11;

        uint8_t bVar1 = DecodeComponentHook(36, arg1);
        uint8_t bVar2 = DecodeComponentHook(4, arg1);
        uint8_t bVar3 = DecodeComponentHook(6, arg1);
        uint8_t bVar4 = DecodeComponentHook(16, arg1);
        uint8_t bVar5 = DecodeComponentHook(15, arg1);
        uint8_t bVar6 = DecodeComponentHook(18, arg1);
        uint8_t bVar7 = DecodeComponentHook(19, arg1);
        uint8_t bVar8 = DecodeComponentHook(20, arg1);
        uint8_t bVar9 = DecodeComponentHook(37, arg1);
        uint8_t bVar10 = DecodeComponentHook(38, arg1);
        bVar2 = (bVar3 | bVar2 | bVar1 | bVar6 | bVar5 | bVar4 | bVar8 | bVar7 | bVar10 | bVar9) & 1;
        bVar1 = bVar2;
        if (-1 < arg2) {
            cVar11 = DecodeComponentHook(39, arg1);
            bVar1 = 1;
            if (!cVar11) {
                bVar1 = bVar2;
            }
        }
        cVar11 = DecodeComponentHook(5, arg1);
        bool cVar12 = DecodeComponentHook(0, arg1);
        bool cVar13 = DecodeComponentHook(1, arg1);
        bool cVar14 = DecodeComponentHook(2, arg1);
        bool cVar15 = DecodeComponentHook(3, arg1);
        bool cVar16 = DecodeComponentHook(7, arg1);
        bool cVar17 = DecodeComponentHook(8, arg1);
        bool cVar18 = DecodeComponentHook(9, arg1);
        bool cVar19 = DecodeComponentHook(21, arg1);
        bool cVar20 = DecodeComponentHook(22, arg1);
        if (cVar11) {
            bVar1 = 1;
        }
        if (cVar12) {
            bVar1 = 1;
        }
        if (cVar13) {
            bVar1 = 1;
        }
        if (cVar14) {
            bVar1 = 1;
        }
        if (cVar15) {
            bVar1 = 1;
        }
        if (cVar16) {
            bVar1 = 1;
        }
        if (cVar17) {
            bVar1 = 1;
        }
        if (cVar18) {
            bVar1 = 1;
        }
        if (cVar19) {
            bVar1 = 1;
        }
        if (cVar20) {
            bVar1 = 1;
        }
        if (5 < arg2) {
            cVar11 = DecodeComponentHook(50, arg1);
            cVar12 = DecodeComponentHook(51, arg1);
            cVar13 = DecodeComponentHook(52, arg1);
            if (cVar11) {
                bVar1 = 1;
            }
            if (cVar12) {
                bVar1 = 1;
            }
            if (cVar13) {
                bVar1 = 1;
            }
        }
        bVar2 = bVar1;
        if (7 < arg2) {
            cVar11 = DecodeComponentHook(53, arg1);
            bVar2 = 1;
            if (!cVar11) {
                bVar2 = bVar1;
            }
        }
        GameUIHookProperties* this_00 = (GameUIHookProperties*)field_8;
        GameUIHookProperties* pGVar22 = this_00;
        auto pfVar21 = this_00->GetMaterial();
        DecodeTransmitList(pGVar22, arg1, pfVar21);
        pGVar22 = this_00;
        pfVar21 = (fixed_vector<int, _1ul>*)this_00->GetCursorMutex();
        DecodeTransmitList(pGVar22, arg1, pfVar21);
        pGVar22 = this_00;
        pfVar21 = (fixed_vector<int, _1ul>*)this_00->GetImmediateThreadPool();
        DecodeTransmitList(pGVar22, arg1, pfVar21);
        pGVar22 = this_00;
        pfVar21 = (fixed_vector<int, _1ul>*)this_00->GetEntityHighlightGlobalState();
        DecodeTransmitList(pGVar22, arg1, pfVar21);
        pfVar21 = (fixed_vector<int, _1ul>*)this_00->GetParentLocationType();
        DecodeTransmitList(this_00, arg1, pfVar21);
        return bVar2;
    }

    // 0x100546fb0
    bool GameUIHookProperties::DecodeComponentHook(HookType hookType, PacketT<Array<unsigned char>>& arg2) {
        char cVar2;
        int iVar3;
        int arg1;
        VarValue local_178;
        basic_string<char, BucketAllocatorEASTL> local_158;
        unsigned long local_138;
        Hook local_128;

        uint8_t bVar1 = arg2.g1();
        unsigned int uVar4 = (unsigned int)bVar1;
        if (bVar1 != 0) {
            local_128 = Hook(uVar4 - 1);
            arg1 = -1;
            local_138 = (unsigned long)bVar1;
            do {
                cVar2 = arg2.g1();
                if (arg1 == -1) {
                    iVar3 = arg2.g4s();
                    local_128 = std::__cxx_atomic_base_impl(iVar3);
                } else if (cVar2 == '\x01') {
                    local_158.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>((uint8_t)arg2);
                    local_178 = VarValue(&local_158);
                    local_128.SetArg(arg1, local_178);
                } else if (!cVar2) {
                    iVar3 = arg2.g4s();
                    local_178 = VarValue(iVar3);
                    local_128.SetArg(arg1, local_178);
                }
                iVar3 = arg1 - uVar4;
                arg1 = arg1 + 1;
            } while (iVar3 != -2);
            field_8->AddHook(hookType & 255, local_128);
            uVar4 = (unsigned int)local_138;
        }
        return uVar4 != 0;
    }

    // 0x1005471a0
    void GameUIHookProperties::DecodeTransmitList(PacketT<Array<unsigned char>>& arg1,
                                                  eastl::fixed_vector<int, 1ul>& arg2) {
        uint32_t* puVar1;
        uint32_t uVar3;
        unsigned long arg1_00;

        uint8_t bVar2 = arg1.g1();
        if (bVar2 != 0) {
            arg2.resize((unsigned long)bVar2);
            arg1_00 = 0;
            do {
                uVar3 = arg1.g4s();
                puVar1 = &arg2[arg1_00];
                *puVar1 = uVar3;
                arg1_00 = arg1_00 + 1;
            } while (bVar2 != arg1_00);
        }
    }

    // 0x100547220
    void GameUIHookProperties::HasHook(ui::UIHook uiHook) const {
        uint32_t in_register_00000034;

        uint8_t* pbVar1 = (uint8_t*)(*(
            (array<HookType, 8ul>*)(long)(int)uiHook))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)uiHook)];
        HasHook((unsigned int)*pbVar1);
    }

    // 0x100547340
    void DecodeGameComponent(ui::Component* component, PacketT<Array<unsigned char>>& arg2, int arg3) {
        generic_iterator<oldscape::highlight::NpcUID*, void>* this;
        int iVar5;
        unsigned int arg2_00;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_78;
        unique_ptr<ui::UIHookProperties> local_58;
        unsigned int local_34;

        short sVar3 = arg2.g2s();
        component->SetDataX((int)sVar3);
        sVar3 = arg2.g2s();
        component->SetDataY((int)sVar3);
        unsigned short uVar4 = arg2.g2();
        component->SetDataWidth((unsigned int)uVar4);
        uVar4 = arg2.g2();
        component->SetDataHeight((unsigned int)uVar4);
        uint8_t bVar1 = arg2.g1s();
        component->SetModeWidth((unsigned int)bVar1);
        bVar1 = arg2.g1s();
        component->SetModeHeight((unsigned int)bVar1);
        bVar1 = arg2.g1s();
        component->SetModeX((unsigned int)bVar1);
        bVar1 = arg2.g1s();
        component->SetModeY((unsigned int)bVar1);
        char cVar2 = component->GetTextAlpha();
        if ((cVar2 == '\x04') || (cVar2 = component->GetModeHeight(), cVar2 == '\x04')) {
            uVar4 = arg2.g2();
            component->SetAspectRatioWidth((unsigned int)uVar4);
            uVar4 = arg2.g2();
            component->SetAspectRatioHeight((unsigned int)uVar4);
        }
        uVar4 = arg2.g2();
        component->SetLayerID(uVar4);
        bVar1 = arg2.g1();
        component->SetInitiallyHidden((bool)(bVar1 & 1));
        if (-1 < arg3) {
            component->SetClickthrough((bVar1 & 2) == 0);
        }
        component->slot9(arg2, arg3);
        if (5 < arg3) {
            iVar5 = arg2.g4s();
            if (32766 < iVar5) {
                LogAssert("stylesheetPackID < std::numeric_limits<int16>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/Component.cpp",
                          167, "Stylesheet ID exceeds int16 limit");
            }
            component->SetStyleSheetPackID((short)iVar5);
        }
        if (8 < arg3) {
            component->SetParentPageIndex(arg2.g1());
        }
        PacketT<Array<unsigned char> _>* pPVar6 =
            (PacketT<Array<unsigned char> _>*)component->GetDownSampledSourceRTs();
        auto local_48 = component->GetMapSquarePointLights();
        if (arg3 < 6) {
            local_34 = arg2.g3();
        } else {
            local_34 = arg2.g4();
        }
        iVar5 = (int)arg2;
        generic_iterator<oldscape::highlight::NpcUID*, void>* local_50 =
            (generic_iterator<oldscape::highlight::NpcUID*, void>*)pPVar6;
        ui::ComponentServerConfig::DecodeServerKeys(*pPVar6, iVar5);
        pPVar6 = (PacketT<Array<unsigned char> _>*)component->GetPixelBuffer();
        ui::ComponentOpConfig::Decode(*pPVar6, iVar5);
        pPVar6 = (PacketT<Array<unsigned char> _>*)component->GetDragConfig();
        ui::ComponentDragConfig::Decode(*pPVar6, iVar5);
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_78, (uint8_t)arg2);
        ((ComponentOpConfig*)component->GetPixelBuffer())
            ->SetTargetVerb((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        if ((local_34 & 260096) == 0) {
            arg2_00 = 4294967295;
            this = local_50;
        } else {
            uVar4 = arg2.g2();
            this = local_50;
            arg2_00 = 4294967295;
            if (uVar4 != 65535) {
                arg2_00 = (unsigned int)uVar4;
            }
            uVar4 = arg2.g2();
            local_48->SetValidTargetCursor((unsigned int)uVar4);
            uVar4 = arg2.g2();
            local_48->SetInvalidTargetCursor((unsigned int)uVar4);
        }
        if (-1 < arg3) {
            uVar4 = arg2.g2();
            local_48->SetMouseOverCursor((unsigned int)uVar4);
        }
        if ((local_34 != 0) || (arg2_00 != 4294967295)) {
            local_40 = oldscape::sidebars::SideBarData(local_34, arg2_00);
            new (this) eastl::generic_iterator(local_40);
        }
        ((ComponentParams*)component->GetLightSourcesDynamic())->Decode(arg2, arg3);
        SideBarData local_40 = std::make_unique<GameUIHookProperties>();
        cVar2 = ((GameUIHookProperties*)local_40.operator->())->Decode(arg2, arg3);
        if (cVar2) {
            local_58.unique_ptr<GameUIHookProperties, std::default_delete<GameUIHookProperties>, void, void>(local_40);
            component->SetHooks(local_58);
        }
    }

} // namespace jag::game
