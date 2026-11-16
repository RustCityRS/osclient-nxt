// libs/oldscape/jagex3/dash3d/AnimFrame.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "AnimFrame.h"

namespace jag::oldscape::dash3d {
    // 0x100d425a5
    uint8_t AnimFrame::debug[3] = {1, 0, 0};

    // 0x103936098, set at startup by ___cxx_global_var_init.34
    Array<int> AnimFrame::m_tempTi = Array<int>(500);

    // 0x1039360b0, set at startup by ___cxx_global_var_init.35
    Array<int> AnimFrame::m_tempTx = Array<int>(500);

    // 0x1039360c8, set at startup by ___cxx_global_var_init.36
    Array<int> AnimFrame::m_tempTy = Array<int>(500);

    // 0x1039360e0, set at startup by ___cxx_global_var_init.37
    Array<int> AnimFrame::m_tempTz = Array<int>(500);

    // 0x100349b10
    AnimFrame::AnimFrame(shared_ptr<PacketJ<Array<unsigned char>>> packetJ, const shared_ptr<AnimBase>& animBase)
        : shared_ptr(), field_16(4294967295) {
        uint8_t bVar2;
        uint32_t uVar3;
        unsigned long arg1;
        int* piVar5;
        uint32_t* puVar6;
        unsigned long arg1_00;
        int iVar7;
        int iVar9;
        unsigned long uVar10;
        unsigned long local_70;
        unsigned int local_34;

        uint8_t* this_00 = &field_24;
        new (this_00) Array<int>();
        uint8_t* this_01 = &field_48;
        new (this_01) Array<int>();
        uint8_t* this_02 = &field_72;
        new (this_02) Array<int>();
        uint8_t* this_03 = &field_96;
        new (this_03) Array<int>();
        field_120 = 0;
        *this = animBase;
        TextureAtlasReference* this_04 = (TextureAtlasReference*)**packetJ;
        this_04->SetPos(2);
        uint8_t bVar1 = this_04->g1();
        long lVar4 = this_04->size();
        unsigned long uVar8 = lVar4 + (unsigned long)bVar1;
        if (bVar1 == 0) {
            local_34 = 0;
        } else {
            iVar9 = -1;
            uVar10 = 0;
            local_70 = 18446744073709551615;
            local_34 = 0;
            do {
                bVar2 = this_04->g1();
                arg1 = this_04->size();
                this_04->SetPos(uVar8);
                if (bVar2 != 0) {
                    lVar4 = (*this).operator->();
                    piVar5 = (int*)(*((lVar4 + 8)))[uVar10];
                    if (*piVar5 != 0) {
                        uVar8 = local_70;
                        do {
                            if ((long)uVar8 <= (long)iVar9)
                                goto LAB_100349cc1;
                            lVar4 = (*this).operator->();
                            piVar5 = (int*)(*((lVar4 + 8)))[uVar8];
                            uVar8 = uVar8 - 1;
                        } while (*piVar5 != 0);
                        arg1_00 = (unsigned long)(int)local_34;
                        piVar5 = &m_tempTi[arg1_00];
                        *piVar5 = (int)uVar8 + 1;
                        puVar6 = &m_tempTx[arg1_00];
                        *puVar6 = 0;
                        puVar6 = &m_tempTy[arg1_00];
                        *puVar6 = 0;
                        puVar6 = &m_tempTz[arg1_00];
                        *puVar6 = 0;
                        local_34 = local_34 + 1;
                    }
                LAB_100349cc1:
                    uVar8 = (unsigned long)(int)local_34;
                    piVar5 = &m_tempTi[uVar8];
                    iVar9 = (int)uVar10;
                    *piVar5 = iVar9;
                    lVar4 = (*this).operator->();
                    piVar5 = (int*)(*((lVar4 + 8)))[uVar10];
                    iVar7 = (unsigned int)(*piVar5 == 3) << 7;
                    if ((bVar2 & 1) == 0) {
                        piVar5 = &m_tempTx[uVar8];
                        *piVar5 = iVar7;
                        if ((bVar2 & 2) == 0)
                            goto LAB_100349d1b;
                    LAB_100349d72:
                        uVar3 = this_04->gSmart();
                        puVar6 = &m_tempTy[uVar8];
                        *puVar6 = uVar3;
                        if ((bVar2 & 4) != 0)
                            goto LAB_100349d94;
                    LAB_100349d33:
                        piVar5 = &m_tempTz[uVar8];
                        *piVar5 = iVar7;
                    } else {
                        uVar3 = this_04->gSmart();
                        puVar6 = &m_tempTx[uVar8];
                        *puVar6 = uVar3;
                        if ((bVar2 & 2) != 0)
                            goto LAB_100349d72;
                    LAB_100349d1b:
                        piVar5 = &m_tempTy[uVar8];
                        *piVar5 = iVar7;
                        if ((bVar2 & 4) == 0)
                            goto LAB_100349d33;
                    LAB_100349d94:
                        uVar3 = this_04->gSmart();
                        puVar6 = &m_tempTz[uVar8];
                        *puVar6 = uVar3;
                    }
                    lVar4 = (*this).operator->();
                    piVar5 = (int*)(*((lVar4 + 8)))[uVar10];
                    local_34 = local_34 + 1;
                    if (*piVar5 == 5) {
                        field_120 = 1;
                    }
                }
                uVar8 = this_04->size();
                this_04->SetPos(arg1);
                uVar10 = uVar10 + 1;
                local_70 = local_70 + 1;
            } while (uVar10 != bVar1);
        }
        uVar10 = this_04->GetTextureAtlas();
        if (uVar8 != uVar10) {
            LogAssert("pos2 == p.GetSize()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "AnimFrame.cpp",
                      108, nullptr);
        }
        field_16 = local_34;
        uVar8 = (unsigned long)(int)local_34;
        this_00->set_max_size(uVar8, 5);
        this_01->set_max_size(uVar8, 5);
        this_02->set_max_size(uVar8, 5);
        this_03->set_max_size(uVar8, 5);
        if (0 < (int)local_34) {
            uVar8 = 0;
            do {
                puVar6 = &m_tempTi[uVar8];
                uVar3 = *puVar6;
                puVar6 = (uint32_t*)(*this_00)[uVar8];
                *puVar6 = uVar3;
                puVar6 = &m_tempTx[uVar8];
                uVar3 = *puVar6;
                puVar6 = (uint32_t*)(*this_01)[uVar8];
                *puVar6 = uVar3;
                puVar6 = &m_tempTy[uVar8];
                uVar3 = *puVar6;
                puVar6 = (uint32_t*)(*this_02)[uVar8];
                *puVar6 = uVar3;
                puVar6 = &m_tempTz[uVar8];
                uVar3 = *puVar6;
                puVar6 = (uint32_t*)(*this_03)[uVar8];
                *puVar6 = uVar3;
                uVar8 = uVar8 + 1;
            } while (local_34 != uVar8);
        }
    }

    // 0x10034a010
    void AnimFrame::ResizePrecise(int arg1, int arg2) {
        int iVar1;
        int* piVar2;
        long lVar3;
        unsigned long arg1_00;

        int iVar4 = arg1 / arg2;
        if (0 < (int)field_16) {
            arg1_00 = 0;
            do {
                piVar2 = &field_24[arg1_00];
                iVar1 = *piVar2;
                lVar3 = (*this).operator->();
                piVar2 = (int*)(*((lVar3 + 8)))[(long)iVar1];
                if (*piVar2 == 0) {
                LAB_10034a060:
                    piVar2 = &field_48[arg1_00];
                    iVar1 = *piVar2;
                    piVar2 = &field_48[arg1_00];
                    *piVar2 = iVar1 * iVar4;
                    piVar2 = &field_72[arg1_00];
                    iVar1 = *piVar2;
                    piVar2 = &field_72[arg1_00];
                    *piVar2 = iVar1 * iVar4;
                    piVar2 = &field_96[arg1_00];
                    iVar1 = *piVar2;
                    piVar2 = &field_96[arg1_00];
                    *piVar2 = iVar1 * iVar4;
                } else {
                    lVar3 = (*this).operator->();
                    piVar2 = (int*)(*((lVar3 + 8)))[(long)iVar1];
                    if (*piVar2 == 1)
                        goto LAB_10034a060;
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_16);
        }
    }

} // namespace jag::oldscape::dash3d
