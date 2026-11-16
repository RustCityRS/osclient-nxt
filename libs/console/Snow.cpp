// libs/console/Snow.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.console

#include "Snow.h"

namespace jag::game::console {
    // 0x103bdd1a0
    int64_t Snow::ENABLE_SNOW;

    // 0x100009d50: Snow::GetSnowFlakes() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100c7f930
    Snow::SnowFlake::SnowFlake(int arg1, int arg2, float arg3) {
        field_0 = (float)arg1;
        field_4 = (float)arg2;
        field_8 = (float)arg1;
        field_16 = math::FRand(90.0);
        field_20 = arg3;
        field_12 = (float)math::FRand(10.0) + 50.0;
        field_24 = math::Rand(120);
    }

    // 0x100c7f9b0
    Snow::Snow() {
        int local_30[2];

        local_30[0] = 16;
        local_30[1] = 16;
        auto piVar2 = std::max<int>(*local_30, *(local_30 + 1));
        new (&field_8) FastPool<Snow::SnowFlake, int>(1000, *piVar2);
        new (&field_40) eastl::vector<unsigned short>();
        field_72 = 0;
        field_80 = 0;
        *(uint64_t*)((long)&field_80 + 5) = 0;
        field_96 = 4294967295;
        field_104 = 0;
        long lVar3 = FrameTime::GetCurrentTimeMS();
        int iVar1 = math::Rand(10000);
        field_80 = lVar3 + iVar1;
    }

    // 0x100c7faa0
    void Snow::MainDraw(int arg1, int arg2, int arg3, int arg4) {
        int extraout_EDX;
        int extraout_EDX_00;
        int arg3_00;

        int arg1_00 = arg1;
        int iVar1 = field_40.size();
        int arg2_00 = extraout_EDX;
        if (iVar1 != arg3) {
            field_40.resize((unsigned long)arg3);
            arg1_00 = (int)(unsigned long)arg3;
            arg2_00 = extraout_EDX_00;
        }
        MoveSnowFlakes(arg1_00, arg2_00, arg3, arg4);
        GenerateSnowFlakes((int)this, arg1_00, arg3_00, arg3);
        (*this->_vptr[1]._dtor)(this, (unsigned long)(unsigned int)arg1, (unsigned long)(unsigned int)arg2,
                                (unsigned long)(unsigned int)arg3, (unsigned long)(unsigned int)arg4);
    }

    // 0x100c7fb80
    void Snow::MoveSnowFlakes(int arg1, int arg2, int arg3, int arg4) {
        uint8_t* this_00;
        int iVar2;
        SnowFlake* snowFlake;
        unsigned short* puVar4;
        int iVar5;
        float fVar6;
        float fVar8;
        float fVar9;

        long lVar3 = FrameTime::GetCurrentTimeMS();
        long lVar1 = field_72;
        if (lVar1 != 0) {
            this_00 = &field_8;
            iVar2 = this_00->GetValue();
            if (0 < iVar2) {
                fVar6 = (float)(unsigned long)(lVar3 - lVar1) * 0.001;
                iVar2 = 0;
                do {
                    snowFlake = (SnowFlake*)(*this_00)[iVar2];
                    fVar9 = snowFlake->field_12 * fVar6 + snowFlake->field_4;
                    snowFlake->field_4 = fVar9;
                    if (0.0 < snowFlake->field_20) {
                        snowFlake->field_8 = snowFlake->field_20 * fVar6 + snowFlake->field_8;
                    }
                    fVar8 = snowFlake->field_8;
                    fVar8 = (float)::sin(((float)snowFlake->field_16 + fVar9) * 0.05) * 20.0 + fVar8;
                    iVar5 = (int)fVar8;
                    snowFlake->field_0 = fVar8;
                    if ((iVar5 < 0) || (arg3 <= iVar5)) {
                        if (arg4 < (int)fVar9) {
                            this_00->deallocate(snowFlake);
                            goto LAB_100c7fc20;
                        }
                    } else {
                        puVar4 = &field_40[(long)iVar5];
                        if (arg4 - (int)fVar9 <= (int)(unsigned int)*puVar4) {
                            this_00->deallocate(snowFlake);
                            AddToPile(iVar5);
                        LAB_100c7fc20:
                            iVar2 = iVar2 - 1;
                        }
                    }
                    iVar2 = iVar2 + 1;
                    iVar5 = this_00->GetValue();
                } while (iVar2 < iVar5);
            }
        }
        field_72 = lVar3;
    }

    // 0x100c7fd50
    void Snow::GenerateSnowFlakes(int arg1, int arg2, int arg3, int arg4) {
        FastPool<audio::SoundInstance, int>* pFVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        SnowFlake* pSVar7;
        uint32_t in_register_0000003c;
        float fVar10;
        float local_44;
        float local_40;
        int local_3c[3];

        long lVar8 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        local_3c[2] = arg4;
        unsigned long uVar6 = FrameTime::GetCurrentTimeMS();
        float fVar9 = (float)(uVar6 - *(long*)(lVar8 + 104));
        if (*(long*)(lVar8 + 104) == 0) {
            fVar10 = 1.0;
        } else {
            fVar10 = fVar9 * 0.1;
        }
        *(float*)(lVar8 + 88) = *(float*)(lVar8 + 88) + fVar10;
        if (*(unsigned long*)(lVar8 + 80) < uVar6) {
            fVar9 = (float)math::FRand(30000.0);
            *(unsigned long*)(lVar8 + 80) =
                uVar6 + ((long)(fVar9 - 9.223372e+18) & (long)fVar9 >> 63 | (long)fVar9) + 15000;
            *(uint8_t*)(lVar8 + 92) = 1;
            *(int*)(lVar8 + 96) = -(local_3c[2] / 2);
        } else if (*(char*)(lVar8 + 92) != '\0') {
            local_40 = fVar10;
            iVar4 = eastl::max<int>(1, (int)(fVar9 * 0.120000005f));
            iVar4 = iVar4 + *(int*)(lVar8 + 96);
            *(int*)(lVar8 + 96) = iVar4;
            if (local_3c[2] < iVar4) {
                *(uint32_t*)(lVar8 + 96) = 4294967295;
                *(uint8_t*)(lVar8 + 92) = 0;
            } else {
                fVar9 = (float)math::FRand(local_40 * 2.5);
                iVar4 = (int)fVar9;
                if (0 < iVar4) {
                    pFVar1 = (FastPool<audio::SoundInstance, int>*)(lVar8 + 8);
                    iVar5 = local_3c[2] / 10;
                    do {
                        iVar2 = pFVar1->GetValue();
                        iVar3 = pFVar1->capacity();
                        if (iVar2 == iVar3)
                            break;
                        iVar2 = *(int*)(lVar8 + 96);
                        local_3c[0] = math::Rand(iVar5);
                        local_3c[0] = local_3c[0] + iVar2;
                        local_3c[1] = 0;
                        local_44 = (float)math::FRand(100.0);
                        local_44 = local_44 + 200.0;
                        pSVar7 = pFVar1->Create<int, int, float>(*local_3c, *(local_3c + 1), local_44);
                        pSVar7->field_12 = pSVar7->field_12 * 1.5;
                        iVar4 = iVar4 - 1;
                    } while (iVar4 != 0);
                }
            }
        }
        if (1.0 < *(float*)(lVar8 + 88) || *(float*)(lVar8 + 88) == 1.0) {
            pFVar1 = (FastPool<audio::SoundInstance, int>*)(lVar8 + 8);
            local_3c[2] = local_3c[2] - 1;
            do {
                iVar4 = pFVar1->GetValue();
                iVar5 = pFVar1->capacity();
                if (iVar4 == iVar5)
                    break;
                local_3c[0] = math::Rand(local_3c[2]);
                local_3c[1] = 0;
                pFVar1->Create<int, int>(*local_3c, *(local_3c + 1));
                fVar9 = *(float*)(lVar8 + 88) - 1.0;
                *(float*)(lVar8 + 88) = fVar9;
            } while (1.0 <= fVar9);
        }
        *(unsigned long*)(lVar8 + 104) = uVar6;
    }

    // 0x100c80070
    void Snow::AddToPile(int arg1) {
        unsigned short uVar1;
        unsigned short* puVar4;
        unsigned int arg1_00;

        uint8_t* this_00 = &field_40;
        short* psVar3 = (short*)(*this_00)[(unsigned long)arg1];
        *psVar3 = *psVar3 + 1;
        if (0 < arg1) {
            arg1_00 = arg1 - 1;
            puVar4 = (unsigned short*)(*this_00)[(unsigned long)arg1_00];
            uVar1 = *puVar4;
            puVar4 = (unsigned short*)(*this_00)[(unsigned long)arg1];
            if ((int)(unsigned int)uVar1 < (int)(*puVar4 - 1))
                goto LAB_100c80105;
        }
        if (this_00->size() - 1 <= arg1) {
            return;
        }
        arg1_00 = arg1 + 1;
        puVar4 = (unsigned short*)(*this_00)[(long)(int)arg1_00];
        uVar1 = *puVar4;
        puVar4 = (unsigned short*)(*this_00)[(unsigned long)arg1];
        if ((int)(*puVar4 - 1) <= (int)(unsigned int)uVar1) {
            return;
        }
    LAB_100c80105:
        psVar3 = (short*)(*this_00)[(unsigned long)arg1];
        *psVar3 = *psVar3 - 1;
        AddToPile(arg1_00);
    }

    // 0x100c92b50: Snow::~Snow() has the same machine code as InlineFatalBreak()

} // namespace jag::game::console

// 0x100c80010
void sin(float arg1) {
    _sinf();
}
