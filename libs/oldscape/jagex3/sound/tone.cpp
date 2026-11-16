// libs/oldscape/jagex3/sound/tone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "tone.h"

namespace jag::oldscape::sound {
    // 0x100d41918, 8 bytes, __const
    Tone::m_deciSemitone = 4607208507887251972;

    // 0x1016c1dd8, 8 bytes, __common; zero-initialised
    Tone::m_initDone;

    // 0x1016c1de0, 24 bytes, __common; set at startup by ___cxx_global_var_init.58
    Array<int, eastl::allocator> Tone::m_buf = Array<int, eastl::allocator>();

    // 0x1016c1df8, 24 bytes, __common; set at startup by ___cxx_global_var_init.59
    Array<int, eastl::allocator> Tone::m_noise = Array<int, eastl::allocator>();

    // 0x1016c1e10, 24 bytes, __common; set at startup by ___cxx_global_var_init.60
    Array<int, eastl::allocator> Tone::m_sine = Array<int, eastl::allocator>();

    // 0x1016c1e28, 20 bytes, __common; zero-initialised
    Tone::m_fPos;

    // 0x1016c1e3c, 20 bytes, __common; zero-initialised
    Tone::m_fDel;

    // 0x1016c1e50, 20 bytes, __common; zero-initialised
    Tone::m_fAmp;

    // 0x1016c1e64, 20 bytes, __common; zero-initialised
    Tone::m_fMulti;

    // 0x1016c1e78, 24 bytes, __common; zero-initialised
    Tone::m_fOffset;

    // 0x100298390, 912 bytes, placed by class name and debug map
    // Tone::Load(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Tone::Load(PacketJ* param_1) {
        char cVar1;
        ushort uVar2;
        int iVar3;
        undefined4 uVar4;
        uint uVar5;
        Envelope* pEVar6;
        long lVar7;
        int* piVar8;
        undefined4* puVar9;
        Filter* this_00;
        ulong uVar10;
        unique_ptr local_38[8];

        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_16, local_38);
        local_38->~unique_ptr();
        pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_16);
        pEVar6->Load(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_24, local_38);
        local_38->~unique_ptr();
        pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_24);
        pEVar6->Load(param_1);
        cVar1 = param_1->g1();
        if (cVar1 != '\0') {
            lVar7 = param_1->size();
            param_1->SetPos(lVar7 - 1);
            std::make_unique<Envelope>();
            std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_32, local_38);
            local_38->~unique_ptr();
            pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_32);
            pEVar6->Load(param_1);
            std::make_unique<Envelope>();
            std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_40, local_38);
            local_38->~unique_ptr();
            pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_40);
            pEVar6->Load(param_1);
        }
        cVar1 = param_1->g1();
        if (cVar1 != '\0') {
            lVar7 = param_1->size();
            param_1->SetPos(lVar7 - 1);
            std::make_unique<Envelope>();
            std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_48, local_38);
            local_38->~unique_ptr();
            pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_48);
            pEVar6->Load(param_1);
            std::make_unique<Envelope>();
            std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_56, local_38);
            local_38->~unique_ptr();
            pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_56);
            pEVar6->Load(param_1);
        }
        cVar1 = param_1->g1();
        if (cVar1 != '\0') {
            lVar7 = param_1->size();
            param_1->SetPos(lVar7 - 1);
            std::make_unique<Envelope>();
            std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_64, local_38);
            local_38->~unique_ptr();
            pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_64);
            pEVar6->Load(param_1);
            std::make_unique<Envelope>();
            std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_72, local_38);
            local_38->~unique_ptr();
            pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_72);
            pEVar6->Load(param_1);
        }
        uVar10 = 0;
        do {
            iVar3 = param_1->gSmarts();
            if (iVar3 == 0)
                break;
            piVar8 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&field_80, uVar10);
            *piVar8 = iVar3;
            uVar4 = param_1->gSmart();
            puVar9 = (undefined4*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)((long)&field_96 + 4), uVar10);
            *puVar9 = uVar4;
            uVar4 = param_1->gSmarts();
            puVar9 = (undefined4*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&field_120, uVar10);
            *puVar9 = uVar4;
            uVar10 = uVar10 + 1;
        } while (uVar10 != 6);
        uVar5 = param_1->gSmarts();
        field_140 = uVar5;
        uVar5 = param_1->gSmarts();
        field_144 = uVar5;
        uVar2 = param_1->g2();
        field_4 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_8 = (uint)uVar2;
        std::make_unique<Filter>();
        std::unique_ptr<Filter, std::default_delete<Filter>>::operator=(
            (unique_ptr<Filter, std::default_delete<Filter>>*)&field_152, local_38);
        local_38->~unique_ptr();
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_160, local_38);
        local_38->~unique_ptr();
        this_00 = (Filter*)std::unique_ptr<Filter, std::default_delete<Filter>>::operator->(
            (unique_ptr<Filter, std::default_delete<Filter>>*)&field_152);
        pEVar6 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator*(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_160);
        this_00->Load(param_1, pEVar6);
    }

    // 0x100298970, 880 bytes, placed by class name and debug map
    // Tone::LoadUncompressed(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void Tone::LoadUncompressed(PacketJ* param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        ushort uVar1;
        undefined4 uVar2;
        Envelope* pEVar3;
        uint* puVar4;
        undefined4* puVar5;
        Filter* this_03;
        long lVar6;
        ulong uVar7;
        unique_ptr local_38[8];

        std::make_unique<Envelope>();
        this_00 = &field_16;
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00);
        pEVar3->LoadUncompressed(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_24, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_24);
        pEVar3->LoadUncompressed(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_32, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_32);
        pEVar3->LoadUncompressed(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_40, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_40);
        pEVar3->LoadUncompressed(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_48, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_48);
        pEVar3->LoadUncompressed(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_56, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_56);
        pEVar3->LoadUncompressed(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_64, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_64);
        pEVar3->LoadUncompressed(param_1);
        std::make_unique<Envelope>();
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_72, local_38);
        local_38->~unique_ptr();
        pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_72);
        pEVar3->LoadUncompressed(param_1);
        uVar7 = 0;
        do {
            uVar1 = param_1->g2();
            puVar4 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&field_80, uVar7);
            *puVar4 = (uint)uVar1;
            uVar2 = param_1->g4();
            puVar5 = (undefined4*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)((long)&field_96 + 4), uVar7);
            *puVar5 = uVar2;
            uVar1 = param_1->g2();
            puVar4 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&field_120, uVar7);
            *puVar4 = (uint)uVar1;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 5);
        uVar1 = param_1->g2();
        field_140 = (uint)uVar1;
        uVar1 = param_1->g2();
        field_144 = (uint)uVar1;
        if (1 < param_2) {
            uVar1 = param_1->g2();
            field_4 = (uint)uVar1;
            uVar1 = param_1->g2();
            field_8 = (uint)uVar1;
        }
        std::make_unique<Filter>();
        this_01 = &field_152;
        std::unique_ptr<Filter, std::default_delete<Filter>>::operator=(
            (unique_ptr<Filter, std::default_delete<Filter>>*)this_01, local_38);
        local_38->~unique_ptr();
        std::make_unique<Envelope>();
        this_02 = &field_160;
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_02, local_38);
        local_38->~unique_ptr();
        if (3 < param_2) {
            std::make_unique<Filter>();
            std::unique_ptr<Filter, std::default_delete<Filter>>::operator=(
                (unique_ptr<Filter, std::default_delete<Filter>>*)this_01, local_38);
            local_38->~unique_ptr();
            this_03 = (Filter*)std::unique_ptr<Filter, std::default_delete<Filter>>::operator->(
                (unique_ptr<Filter, std::default_delete<Filter>>*)this_01);
            this_03->LoadUncompressed(param_1);
            std::make_unique<Envelope>();
            std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator=(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_02, local_38);
            local_38->~unique_ptr();
            pEVar3 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_02);
            pEVar3->LoadUncompressed(param_1);
        }
        lVar6 = std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00);
        field_0 = *(int*)(lVar6 + 8) != 0;
    }

    // 0x100299150, 3744 bytes, placed by class name and debug map
    // Tone::Generate(int, int)
    Tone* Tone::Generate(int param_1, int param_2) {
        Tone* this_00;
        Tone* this_01;
        unique_ptr* this_02;
        unique_ptr<Filter, std::default_delete<Filter>>* this_03;
        int iVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        uint uVar8;
        undefined8 uVar9;
        Envelope* pEVar10;
        int* piVar11;
        undefined4* puVar12;
        int* piVar13;
        long lVar14;
        char* pcVar15;
        Filter* pFVar16;
        uint* puVar17;
        int in_ECX;
        uint uVar18;
        int iVar19;
        ulong uVar20;
        unique_ptr<Envelope, std::default_delete<Envelope>>* this_04;
        ulong uVar21;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var22;
        Tone* pTVar23;
        int iVar24;
        ulong uVar25;
        long lVar26;
        long lVar27;
        uint uVar28;
        _func_decltype_nullptr* p_Var29;
        ulong uVar30;
        Tone* this_05;
        double extraout_XMM0_Qa;
        double dVar31;
        double dVar32;
        int local_a4;
        int local_7c;
        int local_78;
        int local_74;
        long local_58;
        long local_50;
        ulong local_48;
        ulong local_40;

        lVar26 = CONCAT44(in_register_00000034, param_1);
        uVar9 = m_buf.data();
        p_Var29 = (_func_decltype_nullptr*)((long)param_2 * 4);
        ___bzero(uVar9);
        if (9 < in_ECX) {
            dVar32 = (double)param_2 / (double)in_ECX;
            this_00 = (Tone*)(lVar26 + 16);
            pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00);
            pEVar10->GenInit();
            pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 24));
            pEVar10->GenInit();
            this_01 = (Tone*)(lVar26 + 32);
            bVar2 = std::operator!=((unique_ptr*)this_01, p_Var29);
            local_a4 = 0;
            local_78 = 0;
            local_7c = 0;
            if (bVar2) {
                pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                    (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_01);
                local_78 = 0;
                local_7c = 0;
                if (pEVar10->field_12 != false) {
                    pEVar10->GenInit();
                    pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 40));
                    pEVar10->GenInit();
                    piVar11 = (int*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_01);
                    local_7c = (int)((double)(piVar11[1] - *piVar11) * 32.768 * (1.0 / dVar32));
                    local_78 = (int)((double)*piVar11 * 32.768 * (1.0 / dVar32));
                }
            }
            this_05 = (Tone*)(lVar26 + 48);
            bVar2 = std::operator!=((unique_ptr*)this_05, p_Var29);
            if (bVar2) {
                pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                    (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_05);
                local_74 = 0;
                if (pEVar10->field_12 != false) {
                    pEVar10->GenInit();
                    pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 56));
                    pEVar10->GenInit();
                    piVar11 = (int*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_05);
                    local_74 = (int)((double)(piVar11[1] - *piVar11) * 32.768 * (1.0 / dVar32));
                    local_a4 = (int)((double)*piVar11 * 32.768 * (1.0 / dVar32));
                }
            } else {
                local_74 = 0;
            }
            p_Var29 = (_func_decltype_nullptr*)0;
            do {
                p_Var22 = p_Var29;
                piVar11 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)(lVar26 + 80), (ulong)p_Var29);
                if (*piVar11 != 0) {
                    puVar12 = (undefined4*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fPos, (ulong)p_Var29);
                    *puVar12 = 0;
                    piVar13 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)(lVar26 + 120), (ulong)p_Var29);
                    iVar19 = *piVar13;
                    piVar13 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fDel, (ulong)p_Var29);
                    *piVar13 = (int)((double)iVar19 * dVar32);
                    iVar19 = *piVar11;
                    piVar11 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fAmp, (ulong)p_Var29);
                    *piVar11 = (iVar19 << 14) / 100;
                    piVar11 = (int*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00);
                    iVar19 = piVar11[1];
                    iVar24 = *piVar11;
                    piVar11 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)(lVar26 + 100), (ulong)p_Var29);
                    dVar31 = (double)pow<double, int>(extraout_XMM0_Qa, *piVar11);
                    piVar11 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fMulti, (ulong)p_Var29);
                    *piVar11 = (int)(dVar31 * 32.768 * (double)(iVar19 - iVar24) * (1.0 / dVar32));
                    piVar11 = (int*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00);
                    iVar19 = *piVar11;
                    p_Var22 = p_Var29;
                    piVar11 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fOffset, (ulong)p_Var29);
                    *piVar11 = (int)((double)iVar19 * 32.768 * (1.0 / dVar32));
                }
                p_Var29 = p_Var29 + 1;
            } while (p_Var29 != (_func_decltype_nullptr*)5);
            if (0 < param_2) {
                uVar18 = 0;
                iVar19 = 0;
                iVar24 = 0;
                do {
                    pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00);
                    iVar3 = pEVar10->GenNext(param_2);
                    pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                        (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 24));
                    p_Var29 = (_func_decltype_nullptr*)(ulong)(uint)param_2;
                    iVar4 = pEVar10->GenNext(param_2);
                    bVar2 = std::operator!=((unique_ptr*)this_01, p_Var29);
                    if ((bVar2) &&
                        (pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                             (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_01),
                         pEVar10->field_12 != false)) {
                        iVar5 = pEVar10->GenNext(param_2);
                        pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                            (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 40));
                        iVar6 = pEVar10->GenNext(param_2);
                        pTVar23 = this_01;
                        lVar14 = std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_01);
                        p_Var29 = (_func_decltype_nullptr*)(ulong)uVar18;
                        iVar6 = WaveFunc(pTVar23, uVar18, iVar6, *(int*)(lVar14 + 8));
                        iVar3 = iVar3 + (iVar6 >> 1);
                        uVar18 = uVar18 + local_78 + (iVar5 * local_7c >> 16);
                    }
                    bVar2 = std::operator!=((unique_ptr*)this_05, p_Var29);
                    if ((bVar2) &&
                        (pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                             (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_05),
                         pEVar10->field_12 != false)) {
                        iVar5 = pEVar10->GenNext(param_2);
                        pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                            (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 56));
                        iVar6 = pEVar10->GenNext(param_2);
                        pTVar23 = this_05;
                        lVar14 = std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_05);
                        iVar6 = WaveFunc(pTVar23, iVar19, iVar6, *(int*)(lVar14 + 8));
                        iVar4 = ((iVar6 >> 1) + 32768) * iVar4 >> 15;
                        iVar19 = iVar19 + local_a4 + (iVar5 * local_74 >> 16);
                    }
                    p_Var29 = (_func_decltype_nullptr*)0;
                    do {
                        p_Var22 = p_Var29;
                        piVar11 =
                            (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)(lVar26 + 80), (ulong)p_Var29);
                        if (*piVar11 != 0) {
                            p_Var22 = p_Var29;
                            piVar11 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fDel, (ulong)p_Var29);
                            iVar5 = *piVar11;
                            if ((int)((long)iVar24 + (long)iVar5) < param_2) {
                                piVar11 =
                                    (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fPos, (ulong)p_Var29);
                                iVar6 = *piVar11;
                                piVar13 =
                                    (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fAmp, (ulong)p_Var29);
                                iVar1 = *piVar13;
                                pTVar23 = this_00;
                                lVar14 = std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                                    (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_00);
                                iVar6 = WaveFunc(pTVar23, iVar6, iVar1 * iVar4 >> 15, *(int*)(lVar14 + 8));
                                piVar13 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&m_buf, (long)iVar24 + (long)iVar5);
                                *piVar13 = *piVar13 + iVar6;
                                piVar13 =
                                    (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fMulti, (ulong)p_Var29);
                                iVar5 = *piVar13;
                                p_Var22 = p_Var29;
                                piVar13 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&m_fOffset,
                                                                                 (ulong)p_Var29);
                                *piVar11 = *piVar11 + (iVar5 * iVar3 >> 16) + *piVar13;
                            }
                        }
                        p_Var29 = p_Var29 + 1;
                    } while (p_Var29 != (_func_decltype_nullptr*)5);
                    iVar24 = iVar24 + 1;
                } while (iVar24 != param_2);
            }
            this_02 = (unique_ptr*)(lVar26 + 64);
            bVar2 = std::operator!=(this_02, p_Var22);
            if ((bVar2) && (pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                                (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_02),
                            pEVar10->field_12 != false)) {
                pEVar10->GenInit();
                pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                    (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 72));
                pEVar10->GenInit();
                if (0 < param_2) {
                    bVar2 = true;
                    p_Var29 = (_func_decltype_nullptr*)0;
                    iVar19 = 0;
                    do {
                        pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_02);
                        iVar3 = pEVar10->GenNext(param_2);
                        pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                            (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 72));
                        iVar24 = pEVar10->GenNext(param_2);
                        piVar11 = (int*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                            (unique_ptr<Envelope, std::default_delete<Envelope>>*)this_02);
                        if (bVar2) {
                            iVar24 = iVar3;
                        }
                        iVar19 = iVar19 + 256;
                        if ((iVar24 * (piVar11[1] - *piVar11) >> 8) + *piVar11 <= iVar19) {
                            iVar19 = 0;
                            bVar2 = (bool)(bVar2 ^ 1);
                        }
                        if (bVar2) {
                            puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&m_buf, (ulong)p_Var29);
                            *puVar12 = 0;
                        }
                        p_Var29 = p_Var29 + 1;
                    } while ((_func_decltype_nullptr*)(ulong)(uint)param_2 != p_Var29);
                }
            }
            if (((0 < *(int*)(lVar26 + 140)) && (0 < *(int*)(lVar26 + 144))) &&
                (iVar19 = (int)(dVar32 * (double)*(int*)(lVar26 + 140)), iVar19 < param_2)) {
                uVar20 = 0;
                do {
                    piVar11 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_buf, uVar20);
                    iVar24 = *(int*)(lVar26 + 144);
                    iVar3 = *piVar11;
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_buf,
                                                                             (long)iVar19 + uVar20);
                    *piVar11 = *piVar11 + (iVar24 * iVar3) / 100;
                    uVar20 = uVar20 + 1;
                } while (param_2 - iVar19 != (int)uVar20);
            }
            this_03 = (unique_ptr<Filter, std::default_delete<Filter>>*)(lVar26 + 152);
            pcVar15 = (char*)std::unique_ptr<Filter, std::default_delete<Filter>>::operator->(this_03);
            if (*pcVar15 != '\0') {
                piVar11 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(pcVar15 + 4), 0);
                if ((0 < *piVar11) ||
                    (piVar11 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(pcVar15 + 4), 1),
                     0 < *piVar11)) {
                    this_04 = (unique_ptr<Envelope, std::default_delete<Envelope>>*)(lVar26 + 160);
                    pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(this_04);
                    pEVar10->GenInit();
                    pEVar10 = (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(this_04);
                    iVar24 = param_2 + 1;
                    iVar19 = pEVar10->GenNext(iVar24);
                    pFVar16 = (Filter*)std::unique_ptr<Filter, std::default_delete<Filter>>::operator->(this_03);
                    uVar20 = 0;
                    uVar7 = pFVar16->CalculateCoeffs(0, (float)iVar19 * 1.5258789e-05);
                    local_48 = (ulong)uVar7;
                    pFVar16 = (Filter*)std::unique_ptr<Filter, std::default_delete<Filter>>::operator->(this_03);
                    uVar18 = pFVar16->CalculateCoeffs(1, (float)iVar19 * 1.5258789e-05);
                    if ((int)(uVar18 + uVar7) <= param_2) {
                        uVar8 = param_2 - uVar7;
                        if ((int)uVar18 <= (int)(param_2 - uVar7)) {
                            uVar8 = uVar18;
                        }
                        if (0 < (int)uVar8) {
                            local_50 = ((long)(int)uVar7 << 32) + -4294967296;
                            uVar25 = 18446744073709551615;
                            uVar20 = 0;
                            do {
                                piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&m_buf, uVar20 + (long)(int)uVar7);
                                uVar30 = (ulong)((long)Filter::m_reduceCoeffInt * (long)*piVar11) >> 16;
                                if (0 < (int)uVar7) {
                                    uVar21 = 0;
                                    lVar26 = local_50;
                                    do {
                                        piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)&m_buf, lVar26 >> 32);
                                        iVar19 = *piVar11;
                                        piVar11 = (int*)Filter::RCoeffInt(0, (int)uVar21);
                                        uVar30 = (ulong)(uint)((int)uVar30 +
                                                               (int)((ulong)((long)*piVar11 * (long)iVar19) >> 16));
                                        uVar21 = uVar21 + 1;
                                        lVar26 = lVar26 + -4294967296;
                                    } while (local_48 != uVar21);
                                }
                                uVar28 = (uint)uVar30;
                                if (uVar20 != 0) {
                                    iVar19 = 0;
                                    uVar21 = uVar25;
                                    do {
                                        piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)&m_buf, uVar21);
                                        iVar3 = *piVar11;
                                        piVar11 = (int*)Filter::RCoeffInt(1, iVar19);
                                        uVar28 = (int)uVar30 - (int)((ulong)((long)*piVar11 * (long)iVar3) >> 16);
                                        uVar30 = (ulong)uVar28;
                                        iVar19 = iVar19 + 1;
                                        bVar2 = uVar21 != 0;
                                        uVar21 = uVar21 - 1;
                                    } while (bVar2);
                                }
                                puVar17 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&m_buf, uVar20);
                                *puVar17 = uVar28;
                                pEVar10 =
                                    (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                                        this_04);
                                iVar19 = pEVar10->GenNext(iVar24);
                                uVar20 = uVar20 + 1;
                                local_50 = local_50 + 4294967296;
                                uVar25 = uVar25 + 1;
                            } while (uVar20 != uVar8);
                        }
                        iVar3 = 128;
                        while (true) {
                            iVar4 = param_2 - (int)local_48;
                            if (iVar4 < iVar3) {
                                iVar3 = iVar4;
                            }
                            iVar5 = (int)uVar20;
                            if (iVar5 < iVar3) {
                                uVar20 = (ulong)iVar5;
                                lVar26 = (ulong)((iVar5 + (int)local_48) - 1) << 32;
                                local_50 = (uVar20 << 32) + -4294967296;
                                do {
                                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)&m_buf, uVar20 + (long)(int)local_48);
                                    uVar25 = (ulong)((long)Filter::m_reduceCoeffInt * (long)*piVar11) >> 16;
                                    if (0 < (int)local_48) {
                                        uVar30 = 0;
                                        lVar14 = lVar26;
                                        do {
                                            piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)&m_buf, lVar14 >> 32);
                                            iVar19 = *piVar11;
                                            piVar11 = (int*)Filter::RCoeffInt(0, (int)uVar30);
                                            uVar25 = (ulong)(uint)((int)uVar25 +
                                                                   (int)((ulong)((long)*piVar11 * (long)iVar19) >> 16));
                                            uVar30 = uVar30 + 1;
                                            lVar14 = lVar14 + -4294967296;
                                        } while ((local_48 & 4294967295) != uVar30);
                                    }
                                    uVar7 = (uint)uVar25;
                                    if (0 < (int)uVar18) {
                                        uVar30 = 0;
                                        lVar14 = local_50;
                                        do {
                                            piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)&m_buf, lVar14 >> 32);
                                            iVar19 = *piVar11;
                                            piVar11 = (int*)Filter::RCoeffInt(1, (int)uVar30);
                                            uVar7 = (int)uVar25 - (int)((ulong)((long)*piVar11 * (long)iVar19) >> 16);
                                            uVar25 = (ulong)uVar7;
                                            uVar30 = uVar30 + 1;
                                            lVar14 = lVar14 + -4294967296;
                                        } while (uVar18 != uVar30);
                                    }
                                    puVar17 = (uint*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)&m_buf, uVar20);
                                    *puVar17 = uVar7;
                                    pEVar10 =
                                        (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                                            this_04);
                                    iVar19 = pEVar10->GenNext(iVar24);
                                    uVar20 = uVar20 + 1;
                                    lVar26 = lVar26 + 4294967296;
                                    local_50 = local_50 + 4294967296;
                                } while (iVar3 != (int)uVar20);
                            }
                            iVar5 = (int)uVar20;
                            if (iVar4 <= iVar5)
                                break;
                            pFVar16 =
                                (Filter*)std::unique_ptr<Filter, std::default_delete<Filter>>::operator->(this_03);
                            local_48 = pFVar16->CalculateCoeffs(0, (float)iVar19 * 1.5258789e-05);
                            pFVar16 =
                                (Filter*)std::unique_ptr<Filter, std::default_delete<Filter>>::operator->(this_03);
                            uVar18 = pFVar16->CalculateCoeffs(1, (float)iVar19 * 1.5258789e-05);
                            iVar3 = iVar3 + 128;
                        }
                        if (iVar5 < param_2) {
                            uVar7 = (iVar5 + (int)local_48) - param_2;
                            lVar26 = (long)(int)local_48;
                            uVar20 = (ulong)iVar5;
                            local_58 = (ulong)((iVar5 + (int)local_48) - 1) << 32;
                            local_48 = (uVar20 << 32) + -4294967296;
                            do {
                                local_40 = (ulong)uVar7;
                                iVar19 = 0;
                                if ((long)((lVar26 + uVar20) - (long)param_2) < lVar26) {
                                    lVar27 = local_58 - (local_40 << 32);
                                    lVar14 = (long)(int)uVar7;
                                    iVar19 = 0;
                                    do {
                                        piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)&m_buf, lVar27 >> 32);
                                        iVar3 = *piVar11;
                                        piVar11 = (int*)Filter::RCoeffInt(0, (int)lVar14);
                                        iVar19 = iVar19 + (int)((ulong)((long)*piVar11 * (long)iVar3) >> 16);
                                        lVar14 = lVar14 + 1;
                                        lVar27 = lVar27 + -4294967296;
                                    } while (lVar14 < lVar26);
                                }
                                if (0 < (int)uVar18) {
                                    uVar30 = 0;
                                    uVar25 = local_48;
                                    do {
                                        piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)&m_buf, (long)uVar25 >> 32);
                                        iVar3 = *piVar11;
                                        piVar11 = (int*)Filter::RCoeffInt(1, (int)uVar30);
                                        iVar19 = iVar19 - (int)((ulong)((long)*piVar11 * (long)iVar3) >> 16);
                                        uVar30 = uVar30 + 1;
                                        uVar25 = uVar25 + -4294967296;
                                    } while (uVar18 != uVar30);
                                }
                                piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&m_buf, uVar20);
                                *piVar11 = iVar19;
                                pEVar10 =
                                    (Envelope*)std::unique_ptr<Envelope, std::default_delete<Envelope>>::operator->(
                                        this_04);
                                pEVar10->GenNext(iVar24);
                                uVar20 = uVar20 + 1;
                                uVar7 = uVar7 + 1;
                                local_58 = local_58 + 4294967296;
                                local_48 = local_48 + 4294967296;
                            } while ((int)uVar20 != param_2);
                        }
                    }
                }
            }
            if (0 < param_2) {
                uVar20 = 0;
                do {
                    piVar11 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_buf, uVar20);
                    if (*piVar11 < -32768) {
                        puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_buf, uVar20);
                        *puVar12 = 4294934528;
                    }
                    piVar11 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_buf, uVar20);
                    if (32767 < *piVar11) {
                        puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_buf, uVar20);
                        *puVar12 = 32767;
                    }
                    uVar20 = uVar20 + 1;
                } while ((uint)param_2 != uVar20);
            }
        }
        new (this) Array<int, eastl::allocator>((Array*)&m_buf);
        return this;
    }

    // 0x1002a0860, 288 bytes, placed by class name
    // Tone::StaticInit()
    void Tone::StaticInit() {
        uint* puVar1;
        int* piVar2;
        long lVar3;
        ulong uVar4;
        uint uVar5;
        bool bVar6;
        double dVar7;

        m_noise.set_max_size(32768, 5);
        uVar4 = 0;
        do {
            puVar1 =
                (uint*)eastl::vector<unsigned int,
                                     eastl::fixed_vector_allocator<4ul, 1024ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 1024ul, 4ul, 0ul, true, eastl::allocator>>*)&noiseBits,
                    uVar4 >> 5);
            lVar3 = 0;
            uVar5 = *puVar1;
            do {
                piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_noise,
                                                                        uVar4 + lVar3);
                *piVar2 = (uVar5 & 1) * 2 + -1;
                lVar3 = lVar3 + 1;
                uVar5 = (int)uVar5 >> 1;
            } while (lVar3 != 32);
            bVar6 = uVar4 < 32736;
            uVar4 = uVar4 + 32;
        } while (bVar6);
        m_sine.set_max_size(32768, 5);
        uVar4 = 0;
        do {
            dVar7 = (double)_sin((double)(int)uVar4 * 0.00019174755713132846);
            piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_sine, uVar4);
            *piVar2 = (int)(dVar7 * 16384.0);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 32768);
        m_buf.set_max_size(220500, 1);
    }

    // 0x1002a09c0, 336 bytes, base-object constructor, placed by class name
    // Tone::Tone()
    void Tone::Tone() {
        field_0 = true;
        field_4 = 500;
        field_8 = 0;
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_16);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_24);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_32);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_40);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_48);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_56);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_64);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_72);
        field_128 = 0;
        *(undefined8*)&field_136 = 0;
        field_112 = 0;
        field_120 = 0;
        field_96 = 0;
        field_104 = 0;
        field_80 = 0;
        field_88 = 0;
        field_144 = 100;
        std::unique_ptr<Filter, std::default_delete<Filter>>::unique_ptr<true, void>(
            (unique_ptr<Filter, std::default_delete<Filter>>*)&field_152);
        std::unique_ptr<Envelope, std::default_delete<Envelope>>::unique_ptr<true, void>(
            (unique_ptr<Envelope, std::default_delete<Envelope>>*)&field_160);
        if (m_initDone == '\0') {
            StaticInit();
        }
    }

    // 0x1002a0b50, 16 bytes, complete-object constructor, placed by class name
    // Tone::Tone(): jumps straight to the base-object constructor

    // 0x1002a0bb0, 176 bytes, placed by class name
    // Tone::WaveFunc(int, int, int)
    int Tone::WaveFunc(int param_1, int param_2, int param_3) {
        int* piVar1;
        int iVar2;

        switch (param_3) {
        case 1:
            iVar2 = -param_2;
            if ((param_1 & 16384U) == 0) {
                iVar2 = param_2;
            }
            break;
        case 2:
            piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_sine,
                                                                    (ulong)(param_1 & 32767));
            iVar2 = param_2 * *piVar1 >> 14;
            break;
        case 3:
            iVar2 = ((int)((param_1 & 32767U) * param_2) >> 14) - param_2;
            break;
        case 4:
            piVar1 = (int*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&m_noise,
                (ulong)((uint)((ulong)((long)param_1 * 1687014389) >> 42) - (param_1 >> 31) & 32767));
            iVar2 = param_2 * *piVar1;
            break;
        default:
            iVar2 = 0;
        }
        return iVar2;
    }

    // 0x1002a0da0, 128 bytes, placed by class name
    // Tone::FromUncompressedTone(Array<unsigned char, eastl::allocator> const&)
    Tone* Tone::FromUncompressedTone(Array* param_1) {
        byte bVar1;
        Tone* this_00;
        WindowSavedPosition local_40;

        local_40.PacketT(param_1);
        std::make_unique<Tone>();
        bVar1 = local_40.g1();
        this_00 = (Tone*)std::unique_ptr<Tone, std::default_delete<Tone>>::operator->(
            (unique_ptr<Tone, std::default_delete<Tone>>*)this);
        LoadUncompressed(this_00, (PacketJ*)&local_40, (uint)bVar1);
        local_40.~WindowSavedPosition();
        return this;
    }

    // 0x1002adc70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        new (&Tone::m_buf) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &Tone::m_buf, 4294967296);
    }

    // 0x1002adcb0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59() {
        new (&Tone::m_noise) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &Tone::m_noise, 4294967296);
    }

    // 0x1002adcf0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        new (&Tone::m_sine) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &Tone::m_sine, 4294967296);
    }

} // namespace jag::oldscape::sound
