// libs/game/runetek5/config/iftype/Component.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Component.h"

namespace jag::game {
    // 0x100546c90, 800 bytes, placed by debug map only (low confidence)
    // GameUIHookProperties::Decode(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    byte GameUIHookProperties::Decode(PacketT* param_1, int param_2) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        byte bVar6;
        byte bVar7;
        byte bVar8;
        byte bVar9;
        byte bVar10;
        char cVar11;
        char cVar12;
        char cVar13;
        char cVar14;
        char cVar15;
        char cVar16;
        char cVar17;
        char cVar18;
        char cVar19;
        char cVar20;
        fixed_vector* pfVar21;
        GameUIHookProperties* pGVar22;
        GameUIHookProperties* this_00;

        bVar1 = DecodeComponentHook(this, 36, param_1);
        bVar2 = DecodeComponentHook(this, 4, param_1);
        bVar3 = DecodeComponentHook(this, 6, param_1);
        bVar4 = DecodeComponentHook(this, 16, param_1);
        bVar5 = DecodeComponentHook(this, 15, param_1);
        bVar6 = DecodeComponentHook(this, 18, param_1);
        bVar7 = DecodeComponentHook(this, 19, param_1);
        bVar8 = DecodeComponentHook(this, 20, param_1);
        bVar9 = DecodeComponentHook(this, 37, param_1);
        bVar10 = DecodeComponentHook(this, 38, param_1);
        bVar2 = (bVar3 | bVar2 | bVar1 | bVar6 | bVar5 | bVar4 | bVar8 | bVar7 | bVar10 | bVar9) & 1;
        bVar1 = bVar2;
        if (-1 < param_2) {
            cVar11 = DecodeComponentHook(this, 39, param_1);
            bVar1 = 1;
            if (cVar11 == '\0') {
                bVar1 = bVar2;
            }
        }
        cVar11 = DecodeComponentHook(this, 5, param_1);
        cVar12 = DecodeComponentHook(this, 0, param_1);
        cVar13 = DecodeComponentHook(this, 1, param_1);
        cVar14 = DecodeComponentHook(this, 2, param_1);
        cVar15 = DecodeComponentHook(this, 3, param_1);
        cVar16 = DecodeComponentHook(this, 7, param_1);
        cVar17 = DecodeComponentHook(this, 8, param_1);
        cVar18 = DecodeComponentHook(this, 9, param_1);
        cVar19 = DecodeComponentHook(this, 21, param_1);
        cVar20 = DecodeComponentHook(this, 22, param_1);
        if (cVar11 != '\0') {
            bVar1 = 1;
        }
        if (cVar12 != '\0') {
            bVar1 = 1;
        }
        if (cVar13 != '\0') {
            bVar1 = 1;
        }
        if (cVar14 != '\0') {
            bVar1 = 1;
        }
        if (cVar15 != '\0') {
            bVar1 = 1;
        }
        if (cVar16 != '\0') {
            bVar1 = 1;
        }
        if (cVar17 != '\0') {
            bVar1 = 1;
        }
        if (cVar18 != '\0') {
            bVar1 = 1;
        }
        if (cVar19 != '\0') {
            bVar1 = 1;
        }
        if (cVar20 != '\0') {
            bVar1 = 1;
        }
        if (5 < param_2) {
            cVar11 = DecodeComponentHook(this, 50, param_1);
            cVar12 = DecodeComponentHook(this, 51, param_1);
            cVar13 = DecodeComponentHook(this, 52, param_1);
            if (cVar11 != '\0') {
                bVar1 = 1;
            }
            if (cVar12 != '\0') {
                bVar1 = 1;
            }
            if (cVar13 != '\0') {
                bVar1 = 1;
            }
        }
        bVar2 = bVar1;
        if (7 < param_2) {
            cVar11 = DecodeComponentHook(this, 53, param_1);
            bVar2 = 1;
            if (cVar11 == '\0') {
                bVar2 = bVar1;
            }
        }
        this_00 = (GameUIHookProperties*)field_8;
        pGVar22 = this_00;
        pfVar21 = (fixed_vector*)this_00->GetMaterial();
        DecodeTransmitList(pGVar22, param_1, pfVar21);
        pGVar22 = this_00;
        pfVar21 = (fixed_vector*)this_00->GetCursorMutex();
        DecodeTransmitList(pGVar22, param_1, pfVar21);
        pGVar22 = this_00;
        pfVar21 = (fixed_vector*)this_00->GetImmediateThreadPool();
        DecodeTransmitList(pGVar22, param_1, pfVar21);
        pGVar22 = this_00;
        pfVar21 = (fixed_vector*)this_00->GetEntityHighlightGlobalState();
        DecodeTransmitList(pGVar22, param_1, pfVar21);
        pfVar21 = (fixed_vector*)this_00->GetParentLocationType();
        DecodeTransmitList(this_00, param_1, pfVar21);
        return bVar2;
    }

    // 0x100546fb0, 496 bytes, placed by debug map only (low confidence)
    // GameUIHookProperties::DecodeComponentHook(HookType, PacketT<Array<unsigned char, eastl::allocator> >&)
    bool GameUIHookProperties::DecodeComponentHook(
        undefined4 param_2, PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_3) {
        byte bVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        uint uVar6;
        VarValue local_178[32];
        basic_string<char, BucketAllocatorEASTL> local_158[24];
        ulong local_138;
        Hook local_128[15];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = param_3->g1();
        uVar6 = (uint)bVar1;
        if (bVar1 != 0) {
            Hook::Hook(local_128, uVar6 - 1);
            iVar5 = -1;
            local_138 = (ulong)bVar1;
            do {
                cVar2 = param_3->g1();
                if (iVar5 == -1) {
                    uVar4 = param_3->g4s();
                    new (local_128)
                        std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(uVar4);
                } else if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_158,
                        SUB81(param_3, 0));
                    VarValue::VarValue(local_178,
                                       (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_158);
                    local_128->SetArg(iVar5, local_178);
                    local_178->~VarValue();
                    eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_158);
                } else if (cVar2 == '\0') {
                    iVar3 = param_3->g4s();
                    VarValue::VarValue(local_178, iVar3);
                    local_128->SetArg(iVar5, local_178);
                    local_178->~VarValue();
                }
                iVar3 = iVar5 - uVar6;
                iVar5 = iVar5 + 1;
            } while (iVar3 != -2);
            (((GameUIHookProperties*)this)->field_8, (undefined1)param_2, local_128)->AddHook();
            local_128->~Hook();
            uVar6 = (uint)local_138;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar6 != 0;
    }

    // 0x1005471a0, 128 bytes, placed by debug map only (low confidence)
    // GameUIHookProperties::DecodeTransmitList(PacketT<Array<unsigned char, eastl::allocator> >&, eastl::fixed_vector<int, 1ul, true, eastl::allocator>&)
    void GameUIHookProperties::DecodeTransmitList(PacketT* param_1, fixed_vector* param_2) {
        undefined4* puVar1;
        byte bVar2;
        undefined4 uVar3;
        ulong uVar4;

        bVar2 = param_1->g1();
        if (bVar2 != 0) {
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::resize(
                (ulong)param_2);
            uVar4 = 0;
            do {
                uVar3 = param_1->g4s();
                puVar1 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)
                            param_2,
                        uVar4);
                *puVar1 = uVar3;
                uVar4 = uVar4 + 1;
            } while (bVar2 != uVar4);
        }
    }

    // 0x100547220, 48 bytes, placed by debug map only (low confidence)
    // GameUIHookProperties::HasHook(ui::UIHook) const
    void GameUIHookProperties::HasHook(int param_2) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<HookType, 8ul>::operator[]((long)param_2);
        HasHook(this, *puVar1);
    }

    // 0x100547340, 912 bytes, placed by __FILE__ string
    // DecodeGameComponent(ui::Component*, PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void DecodeGameComponent(Component* param_1, PacketT* param_2, int param_3) {
        generic_iterator<oldscape::highlight::NpcUID*, void>* this;
        undefined1 uVar1;
        char cVar2;
        byte bVar3;
        uchar uVar4;
        short sVar5;
        ushort uVar6;
        int iVar7;
        PacketT* pPVar8;
        ComponentOpConfig* this_00;
        char* pcVar9;
        ComponentParams* this_01;
        GameUIHookProperties* this_02;
        uint uVar10;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_78[32];
        unique_ptr<ui::UIHookProperties, std::default_delete<ui::UIHookProperties>> local_58[8];
        generic_iterator<oldscape::highlight::NpcUID*, void>* local_50;
        ComponentCursorConfig* local_48;
        SideBarData local_40;
        uint local_34;

        sVar5 = param_2->g2s();
        param_1->SetDataX((int)sVar5);
        sVar5 = param_2->g2s();
        param_1->SetDataY((int)sVar5);
        uVar6 = param_2->g2();
        param_1->SetDataWidth((uint)uVar6);
        uVar6 = param_2->g2();
        param_1->SetDataHeight((uint)uVar6);
        uVar1 = param_2->g1s();
        param_1->SetModeWidth(uVar1);
        uVar1 = param_2->g1s();
        param_1->SetModeHeight(uVar1);
        uVar1 = param_2->g1s();
        param_1->SetModeX(uVar1);
        uVar1 = param_2->g1s();
        param_1->SetModeY(uVar1);
        cVar2 = param_1->GetTextAlpha();
        if ((cVar2 == '\x04') || (cVar2 = param_1->GetModeHeight(), cVar2 == '\x04')) {
            uVar6 = param_2->g2();
            param_1->SetAspectRatioWidth((uint)uVar6);
            uVar6 = param_2->g2();
            param_1->SetAspectRatioHeight((uint)uVar6);
        }
        uVar6 = param_2->g2();
        param_1->SetLayerID(uVar6);
        bVar3 = param_2->g1();
        param_1->SetInitiallyHidden((bool)(bVar3 & 1));
        if (-1 < param_3) {
            param_1->SetClickthrough((bVar3 & 2) == 0);
        }
        (*(code*)param_1->field_0[9])(param_1, param_2, param_3);
        if (5 < param_3) {
            iVar7 = param_2->g4s();
            if (32766 < iVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("stylesheetPackID < std::numeric_limits<int16>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/Component.cpp",
                          167, "Stylesheet ID exceeds int16 limit");
            }
            param_1->SetStyleSheetPackID((short)iVar7);
        }
        if (8 < param_3) {
            uVar4 = param_2->g1();
            param_1->SetParentPageIndex(uVar4);
        }
        pPVar8 = (PacketT*)param_1->GetDownSampledSourceRTs();
        local_48 = (ComponentCursorConfig*)param_1->GetMapSquarePointLights();
        if (param_3 < 6) {
            local_34 = param_2->g3();
        } else {
            local_34 = param_2->g4();
        }
        iVar7 = (int)param_2;
        local_50 = (generic_iterator<oldscape::highlight::NpcUID*, void>*)pPVar8;
        ui::ComponentServerConfig::DecodeServerKeys(pPVar8, iVar7);
        pPVar8 = (PacketT*)param_1->GetPixelBuffer();
        ui::ComponentOpConfig::Decode(pPVar8, iVar7);
        pPVar8 = (PacketT*)param_1->GetDragConfig();
        ui::ComponentDragConfig::Decode(pPVar8, iVar7);
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_78, SUB81(param_2, 0));
        this_00 = (ComponentOpConfig*)param_1->GetPixelBuffer();
        pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->SetTargetVerb(pcVar9);
        if ((local_34 & 260096) == 0) {
            uVar10 = 4294967295;
            this = local_50;
        } else {
            uVar6 = param_2->g2();
            this = local_50;
            uVar10 = 4294967295;
            if (uVar6 != 65535) {
                uVar10 = (uint)uVar6;
            }
            uVar6 = param_2->g2();
            local_48->SetValidTargetCursor((uint)uVar6);
            uVar6 = param_2->g2();
            local_48->SetInvalidTargetCursor((uint)uVar6);
        }
        if (-1 < param_3) {
            uVar6 = param_2->g2();
            local_48->SetMouseOverCursor((uint)uVar6);
        }
        if ((local_34 != 0) || (uVar10 != 4294967295)) {
            new (&local_40) oldscape::sidebars::SideBarData(local_34, uVar10);
            eastl::generic_iterator<oldscape::highlight::NpcUID*, void>::generic_iterator(this, (NpcUID**)&local_40);
        }
        this_01 = (ComponentParams*)param_1->GetLightSourcesDynamic();
        this_01->Decode(param_2, param_3);
        std::make_unique<GameUIHookProperties>();
        this_02 = (GameUIHookProperties*)
                      std::unique_ptr<GameUIHookProperties, std::default_delete<GameUIHookProperties>>::operator->(
                          (unique_ptr<GameUIHookProperties, std::default_delete<GameUIHookProperties>>*)&local_40);
        cVar2 = this_02->Decode(param_2, param_3);
        if (cVar2 != '\0') {
            std::unique_ptr<ui::UIHookProperties, std::default_delete<ui::UIHookProperties>>::unique_ptr<
                GameUIHookProperties, std::default_delete<GameUIHookProperties>, void, void>(local_58,
                                                                                             (unique_ptr*)&local_40);
            param_1->SetHooks(local_58);
            std::unique_ptr<ui::UIHookProperties, std::default_delete<ui::UIHookProperties>>::~unique_ptr(local_58);
        }
        local_40.~unique_ptr();
        local_78->~basic_string();
    }

} // namespace jag::game
