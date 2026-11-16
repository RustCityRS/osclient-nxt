// libs/game/runetek5/compression/huffman/Huffman.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Huffman.h"

namespace jag::game {
    // 0x1005f8990
    Huffman::Huffman(PacketT<Array<unsigned char>>& arg1) : field_0(nullptr), field_8(nullptr) {
        ReadyInit(arg1);
    }

    // 0x1005f8a30
    void Huffman::ReadyInit(PacketT<Array<unsigned char>>& arg1) {
        unsigned int uVar1;
        uint32_t uVar2;
        uint8_t bVar3;
        unsigned int* puVar6;
        int* piVar8;
        unsigned int uVar10;
        unsigned long uVar11;
        unsigned long uVar12;
        unsigned int uVar13;
        unsigned long uVar14;
        unsigned long local_118;
        unsigned int local_f0;
        unsigned int local_ec;

        int iVar4 = arg1.GetTextureAtlas();
        int iVar5 = arg1.size();
        unsigned int uVar15 = iVar4 - iVar5;
        uint8_t* this_00 = &field_80;
        unsigned long arg1_00 = (unsigned long)uVar15;
        this_00->resize(arg1_00);
        if (uVar15 != 0) {
            uVar11 = 0;
            do {
                bVar3 = arg1.g1();
                puVar6 = (unsigned int*)(*this_00)[uVar11];
                *puVar6 = (unsigned int)bVar3;
                uVar11 = uVar11 + 1;
            } while (arg1_00 != uVar11);
        }
        field_48.resize(arg1_00);
        uint8_t* this_01 = &field_112;
        this_01->resize(arg1_00);
        uint32_t* puVar7 = (uint32_t*)(*this_01)[0];
        *puVar7 = 0;
        fixed_vector<unsigned int, 33ul> local_e8(33);
        unsigned int local_f4 = 0;
        local_e8.assign(local_f4);
        if (uVar15 != 0) {
            uVar11 = 0;
            local_ec = 0;
            do {
                puVar6 = (unsigned int*)(*this_00)[uVar11];
                uVar15 = *puVar6;
                uVar12 = (unsigned long)uVar15;
                if (uVar12 != 0) {
                    puVar6 = &local_e8[uVar12];
                    uVar1 = *puVar6;
                    puVar6 = &field_48[uVar11];
                    *puVar6 = uVar1;
                    if ((uVar1 >> ((uint8_t)(32 - (char)uVar15) & 31) & 1) == 0) {
                        local_f0 = 1 << (-(char)uVar15 & 31U) | uVar1;
                        if (uVar15 - 1 != 0) {
                            uVar14 = (unsigned long)(uVar15 - 1);
                            local_118 = (unsigned long)(uVar15 - 2);
                            uVar13 = 33 - uVar15;
                            do {
                                puVar6 = &local_e8[uVar14];
                                uVar10 = *puVar6;
                                if (uVar10 != uVar1)
                                    break;
                                if ((uVar10 >> (uVar13 & 31) & 1) != 0) {
                                    puVar7 = &local_e8[local_118];
                                    uVar2 = *puVar7;
                                    puVar7 = &local_e8[uVar14];
                                    *puVar7 = uVar2;
                                    break;
                                }
                                puVar6 = &local_e8[uVar14];
                                *puVar6 = uVar10 | 1 << ((uint8_t)uVar13 & 31);
                                uVar14 = uVar14 - 1;
                                local_118 = local_118 - 1;
                                uVar13 = uVar13 + 1;
                            } while ((int)uVar14 != 0);
                        }
                    } else {
                        puVar6 = &local_e8[(unsigned long)(uVar15 - 1)];
                        local_f0 = *puVar6;
                    }
                    puVar6 = &local_e8[uVar12];
                    *puVar6 = local_f0;
                    if (uVar15 + 1 < 33) {
                        uVar12 = (unsigned long)(uVar15 + 1);
                        iVar4 = uVar15 - 32;
                        do {
                            puVar6 = &local_e8[uVar12];
                            if (*puVar6 == uVar1) {
                                puVar6 = &local_e8[uVar12];
                                *puVar6 = local_f0;
                            }
                            uVar12 = uVar12 + 1;
                            iVar4 = iVar4 + 1;
                        } while (iVar4 != 0);
                    }
                    if (uVar15 < 2) {
                        uVar15 = 1;
                    }
                    uVar13 = 0;
                    uVar10 = 2147483648;
                    do {
                        if ((uVar1 & uVar10) == 0) {
                            uVar13 = uVar13 + 1;
                        } else {
                            uVar12 = (unsigned long)uVar13;
                            piVar8 = (int*)(*this_01)[uVar12];
                            if (*piVar8 == 0) {
                                puVar6 = (unsigned int*)(*this_01)[uVar12];
                                *puVar6 = local_ec;
                            }
                            puVar6 = (unsigned int*)(*this_01)[uVar12];
                            uVar13 = *puVar6;
                        }
                        uVar10 = uVar10 >> 1;
                        uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                    uVar14 = (unsigned long)uVar13;
                    uVar12 = this_01->capacity();
                    if (uVar12 <= uVar14) {
                        this_01->set_capacity(this_01->size() * 2);
                    }
                    uVar12 = this_01->size();
                    while (uVar12 <= uVar14) {
                        local_f4 = 0;
                        this_01->push_back(local_f4);
                        uVar12 = this_01->size();
                    }
                    puVar6 = (unsigned int*)(*this_01)[uVar14];
                    *puVar6 = ~(unsigned int)uVar11;
                    if (local_ec <= uVar13) {
                        local_ec = uVar13 + 1;
                    }
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 != arg1_00);
        }
    }

    // 0x1005f8ec0
    unsigned long Huffman::Ready() {
        uint8_t uVar2;
        uint64_t extraout_var;
        uint8_t* puVar4;
        Logger* this_00;
        PacketT<Array<unsigned char> _>* arg1;
        uint64_t unaff_R14;
        Js5Index* local_40;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        unsigned int local_24;

        bool cVar1 = field_48.empty();
        unsigned long uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            uVar2 = (**(void (**)(...)) & ((Js5Index*)field_0->_vptr)->field_24)((Js5Index**)field_0,
                                                                                 (Js5ArchiveSettings*)&local_40);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) == DataStatus::READY) {
                if (local_40->GetGroupID<eastl::string>(local_24, field_16) == (DataStatus*)DataStatus::READY) {
                    local_38 = shared_ptr();
                    puVar4 = (uint8_t*)field_0->GetFile(local_38, *field_8, local_24, 0, (Priority*)Priority::HIGH,
                                                        true, false, false);
                    if (puVar4 == DataStatus::MISSING) {
                        this_00 = logger::default_logger();
                        uVar5 = 0;
                        this_00->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                     "runetek5/compression/huffman/Huffman.cpp",
                                     41, "Huffman: huffman binary file does not exist in JS5!");
                    } else if (puVar4 == DataStatus::READY) {
                        arg1 = (PacketT<Array<unsigned char> _>*)*local_38;
                        uVar5 = (((uint64_t)((int64_t)((unsigned long)&local_38 >> 8)) << 8) | (uint8_t)1);
                        ReadyInit(*arg1);
                    } else {
                        uVar5 = 0;
                    }
                    goto LAB_1005f8f16;
                }
            }
            uVar5 = 0;
        }
    LAB_1005f8f16:
        return uVar5 & 4294967295;
    }

    // 0x1005f90a0
    unsigned int Huffman::CalculateEncodedLength(const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                                 unsigned int arg2, unsigned int arg3) {
        char* pcVar1;
        int* piVar2;
        unsigned long arg1;
        int iVar3;

        unsigned int uVar4 = 0;
        if (arg2 < arg3 + arg2) {
            arg1 = (unsigned long)arg2;
            iVar3 = 0;
            do {
                pcVar1 = &str[arg1];
                piVar2 = &field_80[(long)*pcVar1];
                iVar3 = iVar3 + *piVar2;
                arg1 = arg1 + 1;
            } while (arg3 + arg2 != arg1);
            uVar4 = iVar3 + 7U >> 3;
        }
        return uVar4;
    }

    // 0x1005f9160
    int Huffman::Encode(const eastl::basic_string<char, BucketAllocatorEASTL>& str, unsigned int arg2,
                        unsigned int arg3, unsigned char* arg4, unsigned long arg5, unsigned int arg6) {
        uint8_t bVar1;
        int8_t sVar2;
        vector<unsigned int>* vector;
        unsigned long uVar4;
        uint8_t* pbVar5;
        unsigned int* puVar6;
        uint8_t* puVar7;
        unsigned long uVar8;
        int iVar9;
        uint32_t in_register_00000034;
        uint32_t in_register_0000008c;
        unsigned int uVar11;
        unsigned int uVar12;
        int in_stack_00000008;
        WrapArray<unsigned char> local_80;
        unsigned long local_70;
        unsigned long local_68;
        vector<unsigned int>* local_58;
        basic_string<char, BucketAllocatorEASTL>* local_50;
        unsigned long local_48;
        unsigned long local_40;
        unsigned int local_34;

        basic_string<char, BucketAllocatorEASTL>* local_60 =
            (basic_string<char, BucketAllocatorEASTL>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        new (&local_80) WrapArray(arg5, (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg6));
        unsigned int uVar3 = in_stack_00000008 * 8;
        unsigned int uVar10 = (int)arg4 + arg3;
        int iVar13 = 0;
        if (arg3 < uVar10) {
            local_50 = str + 48;
            local_58 = (vector<unsigned int>*)(str + 80);
            local_68 = (unsigned long)arg3;
            local_48 = (unsigned long)uVar10;
            uVar10 = 0;
            uVar4 = (unsigned long)uVar3;
            uVar8 = 0;
            do {
                vector = local_58;
                uVar11 = (int)uVar8 + (int)uVar4;
                pbVar5 = (uint8_t*)(*local_60)[local_68];
                bVar1 = *pbVar5;
                puVar6 = (unsigned int*)(*local_50)[(unsigned long)bVar1];
                uVar3 = *puVar6;
                puVar6 = (unsigned int*)(*vector)[(unsigned long)bVar1];
                iVar13 = (int)uVar11 >> 3;
                uVar12 = uVar11 & 7;
                if (uVar12 == 0) {
                    uVar10 = 0;
                }
                sVar2 = (int8_t)uVar12;
                local_70 = (unsigned long)*puVar6;
                iVar9 = *puVar6 + uVar12;
                uVar10 = uVar10 | uVar3 >> sVar2 + 24;
                local_40 = (unsigned long)uVar11;
                local_34 = uVar3;
                puVar7 = &local_80[(long)iVar13];
                *puVar7 = (char)uVar10;
                if (8 < iVar9) {
                    uVar10 = local_34 >> sVar2 + 16;
                    puVar7 = &local_80[(long)(iVar13 + 1)];
                    *puVar7 = (char)uVar10;
                    if (16 < iVar9) {
                        uVar10 = local_34 >> sVar2 + 8;
                        puVar7 = &local_80[(long)(iVar13 + 2)];
                        *puVar7 = (char)uVar10;
                        if (24 < iVar9) {
                            uVar10 = local_34 >> sVar2;
                            puVar7 = (uint8_t*)local_80[(long)(iVar13 + 3)];
                            *puVar7 = (char)uVar10;
                            if (32 < iVar9) {
                                uVar10 = local_34 << (-((uint8_t)local_40 | 248) & 31);
                                puVar7 = &local_80[(long)(iVar13 + 4)];
                                *puVar7 = (char)uVar10;
                            }
                        }
                    }
                }
                local_68 = local_68 + 1;
                uVar3 = (unsigned int)local_40;
                iVar13 = (int)local_70;
                uVar4 = local_40;
                uVar8 = local_70;
            } while (local_48 != local_68);
        }
        return ((int)(uVar3 + iVar13 + 7) >> 3) - in_stack_00000008;
    }

    // 0x1005f9390
    int Huffman::Decode(const Array<unsigned char>& arg1, unsigned int arg2,
                        eastl::basic_string<char, BucketAllocatorEASTL>& str, unsigned int arg4, unsigned int arg5) {
        uint8_t bVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        int iVar4;
        uint64_t uVar6;
        uint8_t* pbVar7;
        unsigned int* puVar8;
        int* piVar9;
        unsigned int uVar10;
        unsigned int uVar11;
        unsigned int uVar12;

        if (arg5 == 0) {
            iVar4 = 0;
        } else {
            uVar12 = arg5 + arg4;
            if (str.size() != arg4) {
                uVar6 = str.size();
                LogAssert("uoff == udata.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "compression/huffman/Huffman.cpp",
                          251, "Target string size(%d) must == uoff(%d)", uVar6, (unsigned long)arg4);
            }
            str.set_capacity((unsigned long)(uVar12 + 1));
            uVar11 = 0;
            uVar2 = arg2;
            do {
                pbVar7 = &arg1[(unsigned long)uVar2];
                bVar1 = *pbVar7;
                uVar10 = 128;
                iVar4 = 8;
                do {
                    if ((bVar1 & uVar10) == 0) {
                        uVar3 = uVar11 + 1;
                    } else {
                        puVar8 = &field_112[(unsigned long)uVar11];
                        uVar3 = *puVar8;
                    }
                    piVar9 = &field_112[(unsigned long)uVar3];
                    if (*piVar9 < 0) {
                        str.push_back(~(uint8_t)*piVar9);
                        arg4 = arg4 + 1;
                        uVar11 = 0;
                        if (uVar12 <= arg4)
                            break;
                    } else {
                        uVar11 = uVar3;
                    }
                    uVar10 = uVar10 >> 1;
                    iVar4 = iVar4 - 1;
                    uVar3 = uVar11;
                } while (iVar4 != 0);
                uVar11 = uVar3;
                uVar2 = uVar2 + 1;
            } while (arg4 < uVar12);
            iVar4 = uVar2 - arg2;
        }
        return iVar4;
    }

} // namespace jag::game
