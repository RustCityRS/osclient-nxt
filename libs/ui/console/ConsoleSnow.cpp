// libs/ui/console/ConsoleSnow.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ConsoleSnow.h"

namespace jag::ui {
    // 0x100682460, 112 bytes, base-object constructor, placed by class name and debug map
    // ConsoleSnow::SnowFlake::SnowFlake(int, int, float)
    void ConsoleSnow::SnowFlake::SnowFlake(int param_1, int param_2, float param_3) {
        field_0 = (float)param_1;
        field_4 = (float)param_2;
        field_8 = (float)param_1;
        field_16 = math::FRand(90.0);
        field_20 = param_3;
        field_12 = (float)math::FRand(10.0) + 50.0;
        field_24 = math::Rand(120);
    }

    // 0x1006824d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ConsoleSnow::SnowFlake::SnowFlake(int, int, float): jumps straight to the base-object constructor

    // 0x1006824e0, 208 bytes, base-object constructor, placed by class name
    // ConsoleSnow::ConsoleSnow(graphics::RT7Core&)
    void ConsoleSnow::ConsoleSnow(RT7Core* param_1) {
        int iVar1;
        int* piVar2;
        long lVar3;
        int local_30[2];

        field_0 = param_1;
        new (&field_8) eastl::vector<unsigned short, eastl::allocator>();
        field_40 = 0;
        local_30[0] = 16;
        local_30[1] = 16;
        piVar2 = std::max<int>(local_30, local_30 + 1);
        new (&field_48, 1000, *piVar2) FastPool<ConsoleSnow::SnowFlake, int>();
        field_80 = 0;
        field_88 = 0;
        field_92 = 0;
        field_96 = 4294967295;
        field_104 = 0;
        lVar3 = FrameTime::GetCurrentTimeMS();
        iVar1 = math::Rand(10000);
        field_80 = lVar3 + iVar1;
    }

    // 0x1006825e0, 16 bytes, complete-object constructor, placed by class name
    // ConsoleSnow::ConsoleSnow(graphics::RT7Core&): jumps straight to the base-object constructor

    // 0x1006825f0, 128 bytes, placed by class name
    // ConsoleSnow::MainDraw(int, int, int, int)
    void ConsoleSnow::MainDraw(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int extraout_EDX;
        int extraout_EDX_00;
        int iVar2;
        int extraout_EDX_01;
        int extraout_EDX_02;
        int iVar3;

        iVar3 = param_1;
        iVar1 = (&field_8)->size();
        iVar2 = extraout_EDX;
        if (iVar1 != param_3) {
            iVar3 = param_3;
            eastl::vector<unsigned short, eastl::allocator>::resize((ulong)&field_8);
            iVar2 = extraout_EDX_00;
        }
        MoveSnowFlakes(this, iVar3, iVar2, param_3, param_4);
        iVar2 = param_3;
        GenerateSnowFlakes((int)this, iVar3, extraout_EDX_01, param_3);
        DrawSnowFlakes((int)this, param_1, param_2, iVar2);
        DrawSnowPiles(this, param_1, extraout_EDX_02, param_3, param_4);
    }

    // 0x100682670, 464 bytes, placed by class name
    // ConsoleSnow::MoveSnowFlakes(int, int, int, int)
    void ConsoleSnow::MoveSnowFlakes(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        long lVar1;
        int iVar2;
        long lVar3;
        SnowFlake* pSVar4;
        ushort* puVar5;
        int iVar6;
        float fVar7;
        float fVar9;
        float fVar10;

        lVar3 = FrameTime::GetCurrentTimeMS();
        lVar1 = field_40;
        if (lVar1 != 0) {
            this_00 = &field_48;
            iVar2 = this_00->GetValue();
            if (0 < iVar2) {
                fVar7 = (float)(ulong)(lVar3 - lVar1) * 0.001;
                iVar2 = 0;
                do {
                    pSVar4 = (SnowFlake*)FastPool<ConsoleSnow::SnowFlake, int>::operator[](
                        (FastPool<ConsoleSnow::SnowFlake, int>*)this_00, iVar2);
                    fVar10 = pSVar4->field_12 * fVar7 + pSVar4->field_4;
                    pSVar4->field_4 = fVar10;
                    if (0.0 < pSVar4->field_20) {
                        pSVar4->field_8 = pSVar4->field_20 * fVar7 + pSVar4->field_8;
                    }
                    fVar9 = pSVar4->field_8;
                    fVar9 = (float)::sin(((float)pSVar4->field_16 + fVar10) * 0.05) * 20.0 + fVar9;
                    iVar6 = (int)fVar9;
                    pSVar4->field_0 = fVar9;
                    if ((iVar6 < 0) || (param_3 <= iVar6)) {
                        if (param_4 < (int)fVar10) {
                            this_00->deallocate(pSVar4);
                            goto LAB_100682710;
                        }
                    } else {
                        puVar5 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                            (vector<unsigned short, eastl::allocator>*)&field_8, (long)iVar6);
                        if (param_4 - (int)fVar10 <= (int)(uint)*puVar5) {
                            this_00->deallocate(pSVar4);
                            AddToPile(this, iVar6);
                        LAB_100682710:
                            iVar2 = iVar2 + -1;
                        }
                    }
                    iVar2 = iVar2 + 1;
                    iVar6 = this_00->GetValue();
                } while (iVar2 < iVar6);
            }
        }
        field_40 = lVar3;
    }

    // 0x100682840, 624 bytes, placed by class name
    // ConsoleSnow::GenerateSnowFlakes(int, int, int, int)
    void ConsoleSnow::GenerateSnowFlakes(int param_1, int param_2, int param_3, int param_4) {
        Option<game::option::EnumBrightness>* pOVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        ulong uVar6;
        SnowFlake* pSVar7;
        undefined4 in_register_0000003c;
        long lVar8;
        float fVar9;
        float fVar10;
        float local_44;
        float local_40;
        int local_3c[3];

        lVar8 = CONCAT44(in_register_0000003c, param_1);
        local_3c[2] = param_4;
        uVar6 = FrameTime::GetCurrentTimeMS();
        fVar9 = (float)(uVar6 - *(long*)(lVar8 + 104));
        if (*(long*)(lVar8 + 104) == 0) {
            fVar10 = 1.0;
        } else {
            fVar10 = fVar9 * 0.1;
        }
        *(float*)(lVar8 + 88) = *(float*)(lVar8 + 88) + fVar10;
        if (*(ulong*)(lVar8 + 80) < uVar6) {
            fVar9 = (float)math::FRand(30000.0);
            *(ulong*)(lVar8 + 80) = uVar6 + ((long)(fVar9 - 9.223372e+18) & (long)fVar9 >> 63 | (long)fVar9) + 15000;
            *(undefined1*)(lVar8 + 92) = 1;
            *(int*)(lVar8 + 96) = -(local_3c[2] / 2);
        } else if (*(char*)(lVar8 + 92) != '\0') {
            local_40 = fVar10;
            iVar4 = eastl::max<int>(1, (int)(fVar9 * 0.120000005));
            iVar4 = iVar4 + *(int*)(lVar8 + 96);
            *(int*)(lVar8 + 96) = iVar4;
            if (local_3c[2] < iVar4) {
                *(undefined4*)(lVar8 + 96) = 4294967295;
                *(undefined1*)(lVar8 + 92) = 0;
            } else {
                fVar9 = (float)math::FRand(local_40 * 2.5);
                iVar4 = (int)fVar9;
                if (0 < iVar4) {
                    pOVar1 = (Option<game::option::EnumBrightness>*)(lVar8 + 48);
                    iVar5 = local_3c[2] / 10;
                    do {
                        iVar2 = pOVar1->GetValue();
                        iVar3 = pOVar1->capacity();
                        if (iVar2 == iVar3)
                            break;
                        iVar2 = *(int*)(lVar8 + 96);
                        local_3c[0] = math::Rand(iVar5);
                        local_3c[0] = local_3c[0] + iVar2;
                        local_3c[1] = 0;
                        local_44 = (float)math::FRand(100.0);
                        local_44 = local_44 + 200.0;
                        pSVar7 = FastPool<ConsoleSnow::SnowFlake, int>::Create<int, int, float>(
                            (FastPool<ConsoleSnow::SnowFlake, int>*)pOVar1, local_3c, local_3c + 1, &local_44);
                        pSVar7->field_12 = pSVar7->field_12 * 1.5;
                        iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                }
            }
        }
        if (1.0 < *(float*)(lVar8 + 88) || *(float*)(lVar8 + 88) == 1.0) {
            pOVar1 = (Option<game::option::EnumBrightness>*)(lVar8 + 48);
            local_3c[2] = local_3c[2] + -1;
            do {
                iVar4 = pOVar1->GetValue();
                iVar5 = pOVar1->capacity();
                if (iVar4 == iVar5)
                    break;
                local_3c[0] = math::Rand(local_3c[2]);
                local_3c[1] = 0;
                FastPool<ConsoleSnow::SnowFlake, int>::Create<int, int>((FastPool<ConsoleSnow::SnowFlake, int>*)pOVar1,
                                                                        local_3c, local_3c + 1);
                fVar9 = *(float*)(lVar8 + 88) + -1.0;
                *(float*)(lVar8 + 88) = fVar9;
            } while (1.0 <= fVar9);
        }
        *(ulong*)(lVar8 + 104) = uVar6;
    }

    // 0x100682ab0, 192 bytes, placed by class name
    // ConsoleSnow::DrawSnowFlakes(int, int, int, int)
    void ConsoleSnow::DrawSnowFlakes(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        float* pfVar4;
        undefined4 in_register_0000003c;
        Option<game::option::EnumBrightness>* this;
        undefined4 uVar5;

        uVar3 = (*(RT7Core**)CONCAT44(in_register_0000003c, param_1))->GetGUIManager();
        this = (Option<game::option::EnumBrightness>*)((undefined8*)CONCAT44(in_register_0000003c, param_1) + 6);
        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                uVar5 = (undefined4)((ulong)in_RAX >> 32);
                pfVar4 = (float*)FastPool<ConsoleSnow::SnowFlake, int>::operator[](
                    (FastPool<ConsoleSnow::SnowFlake, int>*)this, iVar1);
                in_RAX = CONCAT44(uVar5, 1);
                uVar3->AddColouredRectangle((int)(*pfVar4 + 0.5) + param_2, (int)(pfVar4[1] + 0.5) + param_3, 2, 2,
                                            (uint)pfVar4[6] | 4294967040, in_RAX);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
    }

    // 0x100682b70, 144 bytes, placed by class name
    // ConsoleSnow::DrawSnowPiles(int, int, int, int)
    void ConsoleSnow::DrawSnowPiles(int param_1, int param_2, int param_3, int param_4) {
        ushort uVar1;
        undefined8 uVar2;
        ushort* puVar3;
        ulong uVar4;

        uVar2 = field_0->GetGUIManager();
        if (0 < param_3) {
            uVar4 = (ulong)param_1;
            do {
                puVar3 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)&field_8, uVar4);
                uVar1 = *puVar3;
                if (uVar1 != 0) {
                    graphics::GUIManager::AddVerticalLine(uVar2, uVar4 & 4294967295, param_4 - (uint)uVar1, uVar1, 1,
                                                          4294967080, 1);
                }
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(param_3 + param_1));
        }
    }

    // 0x100682cb0, 192 bytes, placed by class name
    // ConsoleSnow::AddToPile(int)
    void ConsoleSnow::AddToPile(int param_1) {
        undefined1* this_00;
        ushort uVar1;
        int iVar2;
        short* psVar3;
        ushort* puVar4;
        uint uVar5;

        this_00 = &field_8;
        psVar3 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
            (vector<unsigned short, eastl::allocator>*)this_00, (ulong)param_1);
        *psVar3 = *psVar3 + 1;
        if (0 < param_1) {
            uVar5 = param_1 - 1;
            puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                (vector<unsigned short, eastl::allocator>*)this_00, (ulong)uVar5);
            uVar1 = *puVar4;
            puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                (vector<unsigned short, eastl::allocator>*)this_00, (ulong)param_1);
            if ((int)(uint)uVar1 < (int)(*puVar4 - 1))
                goto LAB_100682d45;
        }
        iVar2 = this_00->size();
        if (iVar2 + -1 <= param_1) {
            return;
        }
        uVar5 = param_1 + 1;
        puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
            (vector<unsigned short, eastl::allocator>*)this_00, (long)(int)uVar5);
        uVar1 = *puVar4;
        puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
            (vector<unsigned short, eastl::allocator>*)this_00, (ulong)param_1);
        if ((int)(*puVar4 - 1) <= (int)(uint)uVar1) {
            return;
        }
    LAB_100682d45:
        psVar3 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
            (vector<unsigned short, eastl::allocator>*)this_00, (ulong)param_1);
        *psVar3 = *psVar3 + -1;
        AddToPile(this, uVar5);
    }

} // namespace jag::ui

// 0x100682c50, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
