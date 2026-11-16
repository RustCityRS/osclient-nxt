// libs/console/Snow.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.console

#include "Snow.h"

namespace jag::game::console {
    // 0x103bdd1a0, 8 bytes, __common; zero-initialised
    Snow::ENABLE_SNOW;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    Snow::GetSnowFlakes() const;

    // 0x100c7f930, 112 bytes, base-object constructor, placed by class name and debug map
    // Snow::SnowFlake::SnowFlake(int, int, float)
    void Snow::SnowFlake::SnowFlake(int param_1, int param_2, float param_3) {
        field_0 = (float)param_1;
        field_4 = (float)param_2;
        field_8 = (float)param_1;
        field_16 = math::FRand(90.0);
        field_20 = param_3;
        field_12 = (float)math::FRand(10.0) + 50.0;
        field_24 = math::Rand(120);
    }

    // 0x100c7f9a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Snow::SnowFlake::SnowFlake(int, int, float): jumps straight to the base-object constructor

    // 0x100c7f9b0, 192 bytes, base-object constructor, placed by class name and debug map
    // Snow::Snow()
    void Snow::Snow() {
        int iVar1;
        int* piVar2;
        long lVar3;
        int local_30[2];

        field_0 = PTR_vtable_100ee85e8 + 16;
        local_30[0] = 16;
        local_30[1] = 16;
        piVar2 = std::max<int>(local_30, local_30 + 1);
        new (&field_8, 1000, *piVar2) FastPool<Snow::SnowFlake, int>();
        new (&field_40) eastl::vector<unsigned short, eastl::allocator>();
        field_72 = 0;
        field_80 = 0;
        *(undefined8*)((long)&field_80 + 5) = 0;
        field_96 = 4294967295;
        field_104 = 0;
        lVar3 = FrameTime::GetCurrentTimeMS();
        iVar1 = math::Rand(10000);
        field_80 = lVar3 + iVar1;
    }

    // 0x100c7faa0, 144 bytes, placed by class name and debug map
    // Snow::MainDraw(int, int, int, int)
    void Snow::MainDraw(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int extraout_EDX;
        int extraout_EDX_00;
        int iVar2;
        int extraout_EDX_01;
        int iVar3;

        iVar3 = param_1;
        iVar1 = (&field_40)->size();
        iVar2 = extraout_EDX;
        if (iVar1 != param_3) {
            iVar3 = param_3;
            eastl::vector<unsigned short, eastl::allocator>::resize((ulong)&field_40);
            iVar2 = extraout_EDX_00;
        }
        MoveSnowFlakes(this, iVar3, iVar2, param_3, param_4);
        GenerateSnowFlakes((int)this, iVar3, extraout_EDX_01, param_3);
        (**(code**)(field_0 + 16))(this, param_1, param_2, param_3, param_4);
        (**(code**)(field_0 + 24))(this, param_1, param_2, param_3, param_4);
    }

    // 0x100c7fb80, 464 bytes, placed by class name and debug map
    // Snow::MoveSnowFlakes(int, int, int, int)
    void Snow::MoveSnowFlakes(int param_1, int param_2, int param_3, int param_4) {
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
        lVar1 = field_72;
        if (lVar1 != 0) {
            this_00 = &field_8;
            iVar2 = this_00->GetValue();
            if (0 < iVar2) {
                fVar7 = (float)(ulong)(lVar3 - lVar1) * 0.001;
                iVar2 = 0;
                do {
                    pSVar4 = (SnowFlake*)FastPool<Snow::SnowFlake, int>::operator[](
                        (FastPool<Snow::SnowFlake, int>*)this_00, iVar2);
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
                            goto LAB_100c7fc20;
                        }
                    } else {
                        puVar5 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                            (vector<unsigned short, eastl::allocator>*)&field_40, (long)iVar6);
                        if (param_4 - (int)fVar10 <= (int)(uint)*puVar5) {
                            this_00->deallocate(pSVar4);
                            AddToPile(this, iVar6);
                        LAB_100c7fc20:
                            iVar2 = iVar2 + -1;
                        }
                    }
                    iVar2 = iVar2 + 1;
                    iVar6 = this_00->GetValue();
                } while (iVar2 < iVar6);
            }
        }
        field_72 = lVar3;
    }

    // 0x100c7fd50, 624 bytes, placed by class name and debug map
    // Snow::GenerateSnowFlakes(int, int, int, int)
    void Snow::GenerateSnowFlakes(int param_1, int param_2, int param_3, int param_4) {
        Option<option::EnumBrightness>* pOVar1;
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
                    pOVar1 = (Option<option::EnumBrightness>*)(lVar8 + 8);
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
                        pSVar7 = FastPool<Snow::SnowFlake, int>::Create<int, int, float>(
                            (FastPool<Snow::SnowFlake, int>*)pOVar1, local_3c, local_3c + 1, &local_44);
                        pSVar7->field_12 = pSVar7->field_12 * 1.5;
                        iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                }
            }
        }
        if (1.0 < *(float*)(lVar8 + 88) || *(float*)(lVar8 + 88) == 1.0) {
            pOVar1 = (Option<option::EnumBrightness>*)(lVar8 + 8);
            local_3c[2] = local_3c[2] + -1;
            do {
                iVar4 = pOVar1->GetValue();
                iVar5 = pOVar1->capacity();
                if (iVar4 == iVar5)
                    break;
                local_3c[0] = math::Rand(local_3c[2]);
                local_3c[1] = 0;
                FastPool<Snow::SnowFlake, int>::Create<int, int>((FastPool<Snow::SnowFlake, int>*)pOVar1, local_3c,
                                                                 local_3c + 1);
                fVar9 = *(float*)(lVar8 + 88) + -1.0;
                *(float*)(lVar8 + 88) = fVar9;
            } while (1.0 <= fVar9);
        }
        *(ulong*)(lVar8 + 104) = uVar6;
    }

    // 0x100c80070, 192 bytes, placed by class name and debug map
    // Snow::AddToPile(int)
    void Snow::AddToPile(int param_1) {
        undefined1* this_00;
        ushort uVar1;
        int iVar2;
        short* psVar3;
        ushort* puVar4;
        uint uVar5;

        this_00 = &field_40;
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
                goto LAB_100c80105;
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
    LAB_100c80105:
        psVar3 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
            (vector<unsigned short, eastl::allocator>*)this_00, (ulong)param_1);
        *psVar3 = *psVar3 + -1;
        AddToPile(this, uVar5);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Snow::~Snow();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Snow::~Snow();

} // namespace jag::game::console

// 0x100c80010, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
