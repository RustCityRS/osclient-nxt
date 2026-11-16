// libs/oldscape/jagex3/sound/jagfx.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "jagfx.h"

namespace jag::oldscape::sound {
    // 0x100297f20, 160 bytes, placed by class name and debug map
    // JagFX::Load(jagex3::Js5&, char const*, char const*)
    JagFX* JagFX::Load(Js5* param_1, char* param_2, char* param_3) {
        undefined* puVar1;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40[16];

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_40, (_func_decltype_nullptr*)param_1);
        puVar1 = (undefined*)((shared_ptr*)param_1)->GetFile(local_40, param_2, param_3);
        if (puVar1 == DataStatus::READY) {
            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
            std::make_unique<JagFX, PacketJ<Array<unsigned char, eastl::allocator>>&>((PacketJ*)this);
        } else {
            std::unique_ptr<JagFX, std::default_delete<JagFX>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        }
        local_40->~shared_ptr();
        return this;
    }

    // 0x100298030, 144 bytes, placed by class name and debug map
    // JagFX::Load(jagex3::Js5&, char const*)
    JagFX* JagFX::Load(Js5* param_1, char* param_2) {
        shared_ptr local_38;

        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        if ((undefined*)param_1->GetFile(&local_38, param_2) == DataStatus::READY) {
            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
            std::make_unique<JagFX, PacketJ<Array<unsigned char, eastl::allocator>>&>((PacketJ*)this);
        } else {
            std::unique_ptr<JagFX, std::default_delete<JagFX>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        }
        local_38.~shared_ptr();
        return this;
    }

    // 0x1002980c0, 160 bytes, placed by class name and debug map
    // JagFX::Load(jagex3::Js5&, int, int)
    JagFX* JagFX::Load(Js5* param_1, int param_2, int param_3) {
        undefined* puVar1;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40[16];

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_40, (_func_decltype_nullptr*)param_1);
        puVar1 = (undefined*)((shared_ptr*)param_1)->GetFile((int)local_40, param_2, (array*)(ulong)(uint)param_3);
        if (puVar1 == DataStatus::READY) {
            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
            std::make_unique<JagFX, PacketJ<Array<unsigned char, eastl::allocator>>&>((PacketJ*)this);
        } else {
            std::unique_ptr<JagFX, std::default_delete<JagFX>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        }
        local_40->~shared_ptr();
        return this;
    }

    // 0x100298160, 144 bytes, placed by class name and debug map
    // JagFX::Load(jagex3::Js5&, int)
    JagFX* JagFX::Load(Js5* param_1, int param_2) {
        shared_ptr local_38;

        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        if ((undefined*)param_1->GetFile(&local_38, param_2) == DataStatus::READY) {
            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
            std::make_unique<JagFX, PacketJ<Array<unsigned char, eastl::allocator>>&>((PacketJ*)this);
        } else {
            std::unique_ptr<JagFX, std::default_delete<JagFX>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        }
        local_38.~shared_ptr();
        return this;
    }

    // 0x1002981f0, 224 bytes, base-object constructor, placed by class name and debug map
    // JagFX::JagFX(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void JagFX::JagFX(PacketJ* param_1) {
        char cVar1;
        ushort uVar2;
        long lVar3;
        unique_ptr<Tone, std::default_delete<Tone>>* this_00;
        Tone* this_01;
        ulong uVar4;
        unique_ptr local_38[8];

        new (this) std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>();
        field_80 = 0;
        field_84 = 0;
        uVar4 = 0;
        do {
            cVar1 = param_1->g1();
            if (cVar1 != '\0') {
                lVar3 = param_1->size();
                param_1->SetPos(lVar3 - 1);
                std::make_unique<Tone>();
                this_00 = (unique_ptr<Tone, std::default_delete<Tone>>*)
                    std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](
                        (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)this, uVar4);
                std::unique_ptr<Tone, std::default_delete<Tone>>::operator=(this_00, local_38);
                local_38->~unique_ptr();
                this_01 = (Tone*)std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(this_00);
                this_01->Load(param_1);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 10);
        uVar2 = param_1->g2();
        field_80 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_84 = (uint)uVar2;
    }

    // 0x100298720, 16 bytes, complete-object constructor, placed by class name
    // JagFX::JagFX(PacketJ<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100298730, 480 bytes, placed by class name
    // JagFX::FromUncompressedSynth(Array<unsigned char, eastl::allocator>&)
    JagFX* JagFX::FromUncompressedSynth(Array* param_1) {
        byte bVar1;
        ushort uVar2;
        array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>* paVar3;
        unique_ptr<Tone, std::default_delete<Tone>>* puVar4;
        long lVar5;
        Tone* this_00;
        ulong uVar6;
        unique_ptr local_58[8];
        WindowSavedPosition local_50;

        local_50.PacketT(param_1);
        std::make_unique<JagFX>();
        bVar1 = local_50.g1();
        uVar6 = 0;
        do {
            std::make_unique<Tone>();
            paVar3 = (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)
                         std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
                             (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
            puVar4 = (unique_ptr<Tone, std::default_delete<Tone>>*)
                std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](paVar3, uVar6);
            std::unique_ptr<Tone, std::default_delete<Tone>>::operator=(puVar4, local_58);
            local_58->~unique_ptr();
            uVar6 = uVar6 + 1;
        } while (uVar6 != 10);
        if (bVar1 < 2) {
            uVar2 = local_50.g2();
            uVar6 = 0;
            do {
                paVar3 = (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)
                             std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
                                 (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
                puVar4 = (unique_ptr<Tone, std::default_delete<Tone>>*)
                    std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](paVar3, uVar6);
                lVar5 = std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(puVar4);
                *(uint*)(lVar5 + 4) = (uint)uVar2;
                paVar3 = (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)
                             std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
                                 (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
                puVar4 = (unique_ptr<Tone, std::default_delete<Tone>>*)
                    std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](paVar3, uVar6);
                lVar5 = std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(puVar4);
                *(undefined4*)(lVar5 + 8) = 0;
                uVar6 = uVar6 + 1;
            } while (uVar6 != 10);
        }
        uVar6 = 0;
        do {
            paVar3 = (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)
                         std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
                             (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
            puVar4 = (unique_ptr<Tone, std::default_delete<Tone>>*)
                std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](paVar3, uVar6);
            this_00 = (Tone*)std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(puVar4);
            this_00->LoadUncompressed((PacketJ*)&local_50, (uint)bVar1);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 10);
        if ((byte)(bVar1 - 1) < 2) {
            local_50.g3();
            local_50.g3();
        }
        lVar5 = std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
            (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
        *(undefined4*)(lVar5 + 80) = 0;
        lVar5 = std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
            (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
        *(undefined4*)(lVar5 + 84) = 0;
        if (2 < bVar1) {
            uVar2 = local_50.g2();
            lVar5 = std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
                (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
            *(uint*)(lVar5 + 80) = (uint)uVar2;
            uVar2 = local_50.g2();
            lVar5 = std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(
                (unique_ptr<JagFX, std::default_delete<JagFX>>*)this);
            *(uint*)(lVar5 + 84) = (uint)uVar2;
        }
        local_50.~WindowSavedPosition();
        return this;
    }

    // 0x100298cf0, 192 bytes, placed by class name
    // JagFX::ToWave()
    JagFX* JagFX::ToWave() {
        JagFX* in_RSI;
        Array<signed char, eastl::allocator> local_48[28];
        undefined4 local_2c;
        int local_28;
        int local_24;

        Array<signed char, eastl::allocator>::Array(local_48);
        MakeSound(in_RSI, (Array*)local_48);
        local_2c = 22050;
        local_28 = (int)(in_RSI->field_80 * 22050) / 1000;
        local_24 = (int)(in_RSI->field_84 * 22050) / 1000;
        std::make_unique<Wave, int, Array<signed char, eastl::allocator>, int, int>((int*)this, (Array*)&local_2c,
                                                                                    (int*)local_48, &local_28);
        local_48->~Array();
        return this;
    }

    // 0x100298db0, 496 bytes, placed by class name
    // JagFX::MakeSound(Array<signed char, eastl::allocator>&)
    void JagFX::MakeSound(Array* param_1) {
        ulong uVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        bool bVar5;
        int iVar6;
        unique_ptr* puVar7;
        char* pcVar8;
        int* piVar9;
        undefined1* puVar10;
        uint uVar11;
        _func_decltype_nullptr* p_Var12;
        ulong uVar13;
        _func_decltype_nullptr* p_Var14;
        uint uVar15;
        int iVar16;
        Array<int, eastl::allocator> local_68[24];
        long local_50;
        _func_decltype_nullptr* local_48;

        p_Var12 = (_func_decltype_nullptr*)0;
        iVar16 = 0;
        do {
            p_Var14 = p_Var12;
            puVar7 = (unique_ptr*)std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](
                (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)this, (ulong)p_Var12);
            bVar5 = std::operator!=(puVar7, p_Var14);
            if (((bVar5) && (pcVar8 = (char*)std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(
                                 (unique_ptr<Tone, std::default_delete<Tone>>*)puVar7),
                             *pcVar8 != '\0')) &&
                (iVar16 < *(int*)(pcVar8 + 8) + *(int*)(pcVar8 + 4))) {
                iVar16 = *(int*)(pcVar8 + 8) + *(int*)(pcVar8 + 4);
            }
            p_Var12 = p_Var12 + 1;
        } while (p_Var12 != (_func_decltype_nullptr*)10);
        if (iVar16 != 0) {
            param_1->set_max_size((long)((iVar16 * 22050) / 1000), 3);
            p_Var12 = (_func_decltype_nullptr*)0;
            do {
                p_Var14 = p_Var12;
                puVar7 = (unique_ptr*)std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](
                    (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)this, (ulong)p_Var12);
                bVar5 = std::operator!=(puVar7, p_Var14);
                if ((bVar5) && (pcVar8 = (char*)std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(
                                    (unique_ptr<Tone, std::default_delete<Tone>>*)puVar7),
                                *pcVar8 != '\0')) {
                    iVar16 = *(int*)(pcVar8 + 4);
                    uVar4 = (iVar16 * 22050) / 1000;
                    iVar3 = *(int*)(pcVar8 + 8);
                    local_48 = p_Var12;
                    iVar6 = std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(
                        (unique_ptr<Tone, std::default_delete<Tone>>*)puVar7);
                    local_68->Generate(iVar6, uVar4);
                    if (999 < iVar16 * 22050) {
                        local_50 = (long)((iVar3 * 22050) / 1000);
                        uVar13 = 0;
                        do {
                            uVar1 = local_50 + uVar13;
                            pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                                (Array<signed char, eastl::allocator>*)param_1, uVar1);
                            cVar2 = *pcVar8;
                            piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar13);
                            iVar16 = *piVar9;
                            puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                                (Array<signed char, eastl::allocator>*)param_1, uVar1);
                            uVar15 = (iVar16 >> 8) + (int)cVar2;
                            uVar11 = (uint)(byte)((byte)((int)uVar15 >> 31) ^ 127);
                            if ((int)(char)uVar15 == uVar15) {
                                uVar11 = uVar15;
                            }
                            *puVar10 = (char)uVar11;
                            uVar13 = uVar13 + 1;
                        } while (uVar4 != uVar13);
                    }
                    local_68->~Array();
                    p_Var12 = local_48;
                    this = (JagFX*)this;
                }
                p_Var12 = p_Var12 + 1;
            } while (p_Var12 != (_func_decltype_nullptr*)10);
        }
    }

    // 0x100299000, 320 bytes, placed by class name
    // JagFX::OptimiseStart()
    int JagFX::OptimiseStart() {
        uint uVar1;
        uint uVar2;
        bool bVar3;
        int iVar4;
        unique_ptr* puVar5;
        long lVar6;
        _func_decltype_nullptr* p_Var7;
        _func_decltype_nullptr* p_Var8;
        int iVar9;

        iVar9 = 9999999;
        p_Var7 = (_func_decltype_nullptr*)0;
        do {
            p_Var8 = p_Var7;
            puVar5 = (unique_ptr*)std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](
                (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)this, (ulong)p_Var7);
            bVar3 = std::operator!=(puVar5, p_Var8);
            if (bVar3) {
                lVar6 = std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(
                    (unique_ptr<Tone, std::default_delete<Tone>>*)puVar5);
                iVar4 = *(int*)(lVar6 + 8) / 20;
                if (iVar9 <= iVar4) {
                    iVar4 = iVar9;
                }
                iVar9 = iVar4;
            }
            p_Var7 = p_Var7 + 1;
        } while (p_Var7 != (_func_decltype_nullptr*)10);
        uVar1 = field_80;
        uVar2 = field_84;
        if ((int)uVar1 < (int)uVar2) {
            iVar4 = (int)uVar1 / 20;
            if (iVar9 <= (int)uVar1 / 20) {
                iVar4 = iVar9;
            }
            iVar9 = iVar4;
        }
        iVar4 = 0;
        if ((iVar9 != 0) && (iVar9 != 9999999)) {
            p_Var7 = (_func_decltype_nullptr*)0;
            do {
                p_Var8 = p_Var7;
                puVar5 = (unique_ptr*)std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>::operator[](
                    (array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>*)this, (ulong)p_Var7);
                bVar3 = std::operator!=(puVar5, p_Var8);
                if (bVar3) {
                    lVar6 = std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(
                        (unique_ptr<Tone, std::default_delete<Tone>>*)puVar5);
                    *(int*)(lVar6 + 8) = *(int*)(lVar6 + 8) + iVar9 * -20;
                }
                p_Var7 = p_Var7 + 1;
            } while (p_Var7 != (_func_decltype_nullptr*)10);
            if ((int)uVar1 < (int)uVar2) {
                field_80 = uVar1 + iVar9 * -20;
                field_84 = uVar2 + iVar9 * -20;
            }
            iVar4 = iVar9;
        }
        return iVar4;
    }

} // namespace jag::oldscape::sound
