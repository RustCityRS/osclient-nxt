// libs/oldscape/jagex3/graphics/pix8.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Pix8.h"

namespace jag::oldscape::graphics {
    // 0x100303200
    void Pix8::Untrim() {
        uint8_t uVar1;
        int iVar2;
        uint8_t* puVar3;
        long lVar4;
        int iVar5;
        Array<unsigned char> local_50;
        int local_34;

        if ((field_48 != field_64) || (field_52 != field_68)) {
            local_50 = Array<unsigned char>((long)field_68 * (long)field_64);
            if (0 < (int)field_52) {
                iVar5 = 0;
                iVar2 = 0;
                do {
                    if (0 < field_48) {
                        lVar4 = 0;
                        local_34 = iVar2;
                        do {
                            puVar3 = (uint8_t*)(*this)[iVar2 + lVar4];
                            uVar1 = *puVar3;
                            puVar3 = &local_50[(long)(int)((field_60 + iVar5) * field_64 + field_56 + (int)lVar4)];
                            *puVar3 = uVar1;
                            lVar4 = lVar4 + 1;
                        } while ((int)lVar4 < field_48);
                        iVar2 = local_34 + (int)lVar4;
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 < (int)field_52);
            }
            *this = local_50;
            field_48 = field_64;
            field_52 = field_68;
            field_56 = 0;
            field_60 = 0;
        }
    }

    // 0x10031d540
    Pix8::Pix8(int arg1, int arg2, int arg3)
        : Array<unsigned char>((long)(arg2 * arg1)), field_24((long)arg3), field_48(arg1), field_64(arg1),
          field_52(arg2), field_68(arg2), field_56(0), field_60(0) {}

    // 0x10031d5c0
    Pix8* Pix8::CopyHFlip() {
        uint8_t uVar1;
        uint32_t* puVar6;
        uint8_t* puVar7;
        Array<unsigned char>* this_01;
        Array<unsigned char>* in_RSI;
        unsigned int uVar8;
        unsigned long arg1_00;
        int iVar11;

        Array<unsigned char>* arg1 = in_RSI + 48;
        Array<unsigned char>* arg2 = in_RSI + 52;
        Layout* this_00 = (Layout*)(in_RSI + 24);
        int local_44 = this_00->HeapBeginPtr();
        *this = std::make_unique<Pix8, int&, int&, int>(*arg1, *arg2, local_44);
        uint32_t uVar2 = *(uint32_t*)(in_RSI + 64);
        long lVar4 = (*this).operator->();
        *(uint32_t*)(lVar4 + 64) = uVar2;
        uVar2 = *(uint32_t*)(in_RSI + 68);
        lVar4 = (*this).operator->();
        *(uint32_t*)(lVar4 + 68) = uVar2;
        int iVar9 = *(int*)(in_RSI + 48);
        int iVar3 = *(int*)(in_RSI + 64);
        int iVar10 = *(int*)(in_RSI + 56);
        lVar4 = (*this).operator->();
        *(int*)(lVar4 + 56) = iVar3 - (iVar9 + iVar10);
        uVar2 = *(uint32_t*)(in_RSI + 60);
        lVar4 = (*this).operator->();
        *(uint32_t*)(lVar4 + 60) = uVar2;
        Layout* local_38 = this_00;
        unsigned long uVar5 = this_00->HeapBeginPtr();
        if (uVar5 != 0) {
            uVar8 = 1;
            arg1_00 = 0;
            do {
                puVar6 = (uint32_t*)(*local_38)[arg1_00];
                uVar2 = *puVar6;
                lVar4 = (*this).operator->();
                puVar6 = (uint32_t*)(*((lVar4 + 24)))[arg1_00];
                *puVar6 = uVar2;
                arg1_00 = (unsigned long)uVar8;
                uVar8 = uVar8 + 1;
            } while (arg1_00 < uVar5);
        }
        if (0 < *(int*)arg2) {
            iVar9 = 0;
            local_38 = (Layout*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)1);
            do {
                iVar3 = *(int*)arg1;
                if (0 < iVar3) {
                    iVar10 = 0;
                    iVar11 = -1;
                    do {
                        puVar7 = (uint8_t*)(*in_RSI)[(long)(iVar3 * (int)local_38 + iVar11)];
                        uVar1 = *puVar7;
                        this_01 = (Array<unsigned char>*)(*this).operator->();
                        puVar7 = (uint8_t*)(*this_01)[(long)(*(int*)arg1 * iVar9 + iVar10)];
                        *puVar7 = uVar1;
                        iVar10 = iVar10 + 1;
                        iVar3 = *(int*)arg1;
                        iVar11 = iVar11 - 1;
                    } while (iVar10 < iVar3);
                }
                iVar9 = iVar9 + 1;
                local_38 = (Layout*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)local_38 + 1));
            } while (iVar9 < *(int*)arg2);
        }
        return this;
    }

    // 0x10031d7e0
    auto Pix8::Copy() {
        auto result;
        uint8_t uVar1;
        uint32_t uVar4;
        bool bVar5;
        uint8_t* puVar8;
        Array<unsigned char>* this_02;
        uint32_t* puVar9;
        unsigned long uVar10;
        unsigned long uVar11;

        Pix8* this_01 = (Pix8*)operator new(72);
        int iVar2 = field_48;
        unsigned int uVar3 = field_52;
        uint8_t* this_00 = &field_24;
        int arg3 = this_00->HeapBeginPtr();
        Pix8(this_01, iVar2, uVar3, arg3);
        result.unique_ptr<true, void>(this_01);
        iVar2 = field_64;
        long lVar6 = (result).operator->();
        *(int*)(lVar6 + 64) = iVar2;
        iVar2 = field_68;
        lVar6 = (result).operator->();
        *(int*)(lVar6 + 68) = iVar2;
        iVar2 = field_56;
        lVar6 = (result).operator->();
        *(int*)(lVar6 + 56) = iVar2;
        uVar3 = field_60;
        lVar6 = (result).operator->();
        *(unsigned int*)(lVar6 + 60) = uVar3;
        unsigned long uVar7 = end();
        if (uVar7 != 0) {
            uVar10 = 0;
            uVar11 = 1;
            do {
                puVar8 = (uint8_t*)(*this)[uVar10];
                uVar1 = *puVar8;
                this_02 = (Array<unsigned char>*)(result).operator->();
                puVar8 = (uint8_t*)(*this_02)[uVar10];
                *puVar8 = uVar1;
                bVar5 = uVar11 < uVar7;
                uVar10 = uVar11;
                uVar11 = (unsigned long)((int)uVar11 + 1);
            } while (bVar5);
        }
        uVar7 = this_00->HeapBeginPtr();
        if (uVar7 != 0) {
            uVar10 = 0;
            uVar11 = 1;
            do {
                puVar9 = (uint32_t*)(*this_00)[uVar10];
                uVar4 = *puVar9;
                lVar6 = (result).operator->();
                puVar9 = (uint32_t*)(*((lVar6 + 24)))[uVar10];
                *puVar9 = uVar4;
                bVar5 = uVar11 < uVar7;
                uVar10 = uVar11;
                uVar11 = (unsigned long)((int)uVar11 + 1);
            } while (bVar5);
        }
        return result;
    }

    // 0x10031d970
    auto Pix8::Topix32() {
        auto result;
        uint32_t uVar2;
        uint8_t* pbVar5;
        uint32_t* puVar6;
        SharedArray<unsigned int>* this_00;
        unsigned long arg1;

        make_shared<Pix32, int&, int&>(&result, &field_48, (int*)&field_52);
        int iVar1 = field_56;
        long lVar4 = (result).operator->();
        *(int*)(lVar4 + 32) = iVar1;
        unsigned int uVar3 = field_60;
        lVar4 = (result).operator->();
        *(unsigned int*)(lVar4 + 36) = uVar3;
        iVar1 = field_64;
        lVar4 = (result).operator->();
        *(int*)(lVar4 + 40) = iVar1;
        iVar1 = field_68;
        lVar4 = (result).operator->();
        *(int*)(lVar4 + 44) = iVar1;
        uVar3 = field_52 * field_48;
        if (0 < (int)uVar3) {
            arg1 = 0;
            do {
                pbVar5 = (uint8_t*)(*this)[arg1];
                puVar6 = &field_24[(unsigned long)*pbVar5];
                uVar2 = *puVar6;
                this_00 = (SharedArray<unsigned int>*)(result).operator->();
                puVar6 = (uint32_t*)(*this_00)[arg1];
                *puVar6 = uVar2;
                arg1 = arg1 + 1;
            } while (uVar3 != arg1);
        }
        return result;
    }

    // 0x10031da60
    void Pix8::HalveSize() {
        uint8_t uVar1;
        uint8_t* puVar3;
        long lVar5;
        int local_34;

        int iVar4 = field_64 / 2;
        field_64 = iVar4;
        int iVar2 = field_68 / 2;
        field_68 = iVar2;
        Array<unsigned char> local_50((long)(iVar2 * iVar4));
        if (0 < (int)field_52) {
            iVar4 = 0;
            iVar2 = 0;
            do {
                if (0 < field_48) {
                    lVar5 = 0;
                    local_34 = iVar2;
                    do {
                        puVar3 = (uint8_t*)(*this)[iVar2 + lVar5];
                        uVar1 = *puVar3;
                        puVar3 =
                            &local_50[(long)(((int)(field_60 + iVar4) >> 1) * field_64 + (field_56 + (int)lVar5 >> 1))];
                        *puVar3 = uVar1;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < field_48);
                    iVar2 = local_34 + (int)lVar5;
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < (int)field_52);
        }
        *this = local_50;
        field_48 = field_64;
        field_52 = field_68;
        field_56 = 0;
        field_60 = 0;
    }

    // 0x10031db70
    void Pix8::Untrim(int arg1) {
        uint8_t uVar1;
        int iVar3;
        uint8_t* puVar4;
        unsigned long uVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        int iVar10;
        long lVar11;
        unsigned long uVar12;
        Array<unsigned char> local_68;
        unsigned long local_50;
        unsigned long local_48;
        unsigned int local_3c;
        int local_38;
        unsigned int local_34;

        int iVar13 = field_48;
        int iVar2 = field_64;
        if ((iVar13 != iVar2) || (field_52 != field_68)) {
            iVar3 = field_56;
            local_38 = arg1;
            if (iVar3 < arg1) {
                local_38 = iVar3;
            }
            iVar6 = iVar3 + iVar13 + arg1;
            iVar10 = iVar2 - (iVar3 + iVar13);
            if (iVar6 <= iVar2) {
                iVar10 = arg1;
            }
            uVar8 = field_60;
            local_34 = arg1;
            if ((int)uVar8 < arg1) {
                local_34 = uVar8;
            }
            iVar7 = uVar8 + field_52;
            iVar9 = field_68 - iVar7;
            if (iVar7 + arg1 <= field_68) {
                iVar9 = arg1;
            }
            uVar8 = iVar13 + local_38 + iVar10;
            local_48 = (unsigned long)uVar8;
            local_3c = field_52 + local_34 + iVar9;
            local_68 = Array<unsigned char>((long)(int)(local_3c * uVar8));
            if (0 < (int)field_52) {
                if (iVar2 < iVar6) {
                    iVar6 = iVar2;
                }
                uVar8 = (iVar6 + local_38) - iVar3;
                local_50 = (unsigned long)uVar8;
                uVar12 = (unsigned long)(local_34 * uVar8 + local_38);
                iVar13 = 0;
                do {
                    uVar5 = (unsigned long)(unsigned int)field_48;
                    if (0 < field_48) {
                        lVar11 = 0;
                        do {
                            puVar4 = (uint8_t*)(*this)[(int)uVar5 * iVar13 + lVar11];
                            uVar1 = *puVar4;
                            puVar4 = &local_68[(long)((int)lVar11 + (int)uVar12)];
                            *puVar4 = uVar1;
                            lVar11 = lVar11 + 1;
                            uVar5 = (unsigned long)field_48;
                        } while (lVar11 < (long)uVar5);
                    }
                    iVar13 = iVar13 + 1;
                    uVar12 = uVar12 + local_50;
                } while (iVar13 < (int)field_52);
            }
            *this = local_68;
            field_48 = (int)local_48;
            field_52 = local_3c;
            field_56 = field_56 - local_38;
            field_60 = field_60 - local_34;
        }
    }

    // 0x10031dcf0
    void Pix8::Rotate90Clockwise() {
        uint8_t uVar1;
        uint8_t* puVar4;
        int iVar5;
        int iVar6;
        unsigned long arg1;

        Array<unsigned char> local_48((long)(int)field_52 * (long)field_48);
        if (0 < field_48) {
            arg1 = 0;
            iVar6 = 0;
            do {
                if (0 < (int)field_52) {
                    arg1 = (unsigned long)(int)arg1;
                    iVar5 = field_52 + 1;
                    do {
                        puVar4 = (uint8_t*)(*this)[(long)((iVar5 - 2) * field_48 + iVar6)];
                        uVar1 = *puVar4;
                        puVar4 = &local_48[arg1];
                        arg1 = arg1 + 1;
                        *puVar4 = uVar1;
                        iVar5 = iVar5 - 1;
                    } while (1 < iVar5);
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < field_48);
        }
        *this = local_48;
        unsigned int uVar2 = field_52;
        unsigned int uVar3 = field_60;
        field_60 = field_56;
        iVar6 = field_68;
        field_56 = iVar6 - (uVar3 + uVar2);
        field_52 = field_48;
        field_48 = uVar2;
        field_68 = field_64;
        field_64 = iVar6;
    }

    // 0x10031de00
    void Pix8::Rotate90Anticlockwise() {
        uint8_t uVar1;
        bool bVar3;
        unsigned long uVar4;
        uint8_t* puVar5;
        long lVar6;
        unsigned int uVar7;
        unsigned int uVar8;
        unsigned long local_40;
        unsigned long local_38;

        Array<unsigned char> local_58((long)(int)field_52 * (long)field_48);
        if (0 < field_48) {
            uVar4 = 0;
            uVar7 = field_48;
            do {
                uVar8 = uVar7 - 1;
                if (0 < (int)field_52) {
                    lVar6 = 0;
                    local_40 = uVar4;
                    local_38 = (unsigned long)uVar7;
                    do {
                        puVar5 = (uint8_t*)(*this)[(long)(int)(field_48 * (int)lVar6 + uVar8)];
                        uVar1 = *puVar5;
                        puVar5 = &local_58[lVar6 + (int)uVar4];
                        *puVar5 = uVar1;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < (int)field_52);
                    uVar4 = (unsigned long)(unsigned int)((int)local_40 + (int)lVar6);
                    uVar7 = (unsigned int)local_38;
                }
                bVar3 = 1 < (int)uVar7;
                uVar7 = uVar8;
            } while (bVar3);
        }
        *this = local_58;
        uVar7 = field_52;
        int iVar2 = field_56;
        field_56 = field_60;
        field_60 = field_64 - (iVar2 + field_48);
        field_52 = field_48;
        field_48 = uVar7;
        iVar2 = field_68;
        field_68 = field_64;
        field_64 = iVar2;
    }

    // 0x10031df10
    void Pix8::HFlip() {
        uint8_t uVar1;
        uint8_t* puVar2;
        int iVar3;
        int iVar4;
        unsigned long arg1;

        Array<unsigned char> local_48((long)(int)field_52 * (long)field_48);
        if (0 < (int)field_52) {
            iVar4 = 0;
            arg1 = 0;
            do {
                if (0 < field_48) {
                    arg1 = (unsigned long)(int)arg1;
                    iVar3 = field_48 + 1;
                    do {
                        puVar2 = (uint8_t*)(*this)[(long)(field_48 * iVar4 + iVar3 - 2)];
                        uVar1 = *puVar2;
                        puVar2 = &local_48[arg1];
                        arg1 = arg1 + 1;
                        *puVar2 = uVar1;
                        iVar3 = iVar3 - 1;
                    } while (1 < iVar3);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < (int)field_52);
        }
        *this = local_48;
        field_56 = field_64 - (field_48 + field_56);
    }

    // 0x10031e000
    void Pix8::VFlip() {
        uint8_t uVar1;
        int iVar3;
        uint8_t* puVar4;
        unsigned int uVar5;
        unsigned long uVar6;
        unsigned int uVar7;
        long lVar8;
        unsigned long local_40;
        unsigned long local_38;

        Array<unsigned char> local_58((long)(int)field_52 * (long)field_48);
        unsigned int uVar2 = field_52;
        if (0 < (int)uVar2) {
            uVar6 = 0;
            uVar7 = uVar2;
            do {
                uVar7 = uVar7 - 1;
                iVar3 = field_48;
                uVar5 = uVar2;
                if (0 < iVar3) {
                    lVar8 = 0;
                    local_40 = (unsigned long)uVar2;
                    local_38 = uVar6;
                    do {
                        puVar4 = (uint8_t*)(*this)[(long)(int)(iVar3 * uVar7 + (int)lVar8)];
                        uVar1 = *puVar4;
                        puVar4 = &local_58[(int)uVar6 + lVar8];
                        *puVar4 = uVar1;
                        iVar3 = field_48;
                        lVar8 = lVar8 + 1;
                    } while ((int)lVar8 < iVar3);
                    uVar6 = (unsigned long)(unsigned int)((int)local_38 + (int)lVar8);
                    uVar5 = (unsigned int)local_40;
                }
                uVar2 = uVar5 - 1;
            } while (1 < (int)uVar5);
        }
        *this = local_58;
        field_60 = field_68 - (field_52 + field_60);
    }

    // 0x10031e100
    void Pix8::HVFlip() {
        uint8_t uVar1;
        uint8_t* puVar2;
        unsigned long arg1;
        unsigned long uVar4;

        unsigned int uVar3 = field_52 * field_48;
        Array<unsigned char> local_48((long)(int)uVar3);
        if (0 < (int)uVar3) {
            uVar4 = (unsigned long)uVar3;
            arg1 = 0;
            do {
                uVar3 = uVar3 - 1;
                puVar2 = (uint8_t*)(*this)[(unsigned long)uVar3];
                uVar1 = *puVar2;
                puVar2 = &local_48[arg1];
                arg1 = arg1 + 1;
                *puVar2 = uVar1;
            } while (arg1 != uVar4);
        }
        *this = local_48;
        field_56 = field_64 - (field_48 + field_56);
        field_60 = field_68 - (field_52 + field_60);
    }

    // 0x10031e1d0
    void Pix8::RgbAdjust(int arg1, int arg2, int arg3) {
        uint8_t bVar1;
        int iVar2;
        uint8_t* pbVar4;
        int* piVar5;
        unsigned long uVar6;
        int iVar7;
        int iVar8;
        unsigned int uVar9;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_24;
        long lVar3 = this_00->HeapBeginPtr();
        if (lVar3 != 0) {
            uVar9 = 1;
            arg1_00 = 0;
            do {
                lVar3 = (*this_00)[arg1_00];
                bVar1 = *(uint8_t*)(lVar3 + 3);
                lVar3 = (*this_00)[arg1_00];
                iVar7 = (unsigned int)*(uint8_t*)(lVar3 + 2) + arg1;
                if (254 < iVar7) {
                    iVar7 = 255;
                }
                if (iVar7 < 0) {
                    iVar7 = 0;
                }
                lVar3 = (*this_00)[arg1_00];
                iVar8 = (unsigned int)*(uint8_t*)(lVar3 + 1) + arg2;
                if (254 < iVar8) {
                    iVar8 = 255;
                }
                if (iVar8 < 0) {
                    iVar8 = 0;
                }
                pbVar4 = (uint8_t*)(*this_00)[arg1_00];
                iVar2 = (unsigned int)*pbVar4 + arg3;
                if (254 < iVar2) {
                    iVar2 = 255;
                }
                if (iVar2 < 0) {
                    iVar2 = 0;
                }
                piVar5 = (int*)(*this_00)[arg1_00];
                *piVar5 = iVar8 * 256 + iVar7 * 65536 + (unsigned int)bVar1 * 16777216 + iVar2;
                arg1_00 = (unsigned long)uVar9;
                uVar6 = this_00->HeapBeginPtr();
                uVar9 = uVar9 + 1;
            } while (arg1_00 < uVar6);
        }
    }

    // 0x10031e300
    void Pix8::Contrast(int arg1) {
        uint8_t bVar1;
        int iVar2;
        int* piVar3;
        long lVar4;
        uint8_t* pbVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;

        uint8_t* this_00 = &field_24;
        unsigned long arg1_00 = this_00->HeapBeginPtr();
        while (arg1_00 != 0) {
            arg1_00 = arg1_00 - 1;
            lVar4 = (*this_00)[arg1_00];
            bVar1 = *(uint8_t*)(lVar4 + 3);
            lVar4 = (*this_00)[arg1_00];
            iVar6 = (unsigned int)*(uint8_t*)(lVar4 + 2) * arg1;
            iVar7 = iVar6 >> 8;
            if (254 < iVar7) {
                iVar7 = 255;
            }
            lVar4 = (*this_00)[arg1_00];
            iVar9 = (unsigned int)*(uint8_t*)(lVar4 + 1) * arg1;
            iVar10 = iVar9 >> 8;
            if (254 < iVar10) {
                iVar10 = 255;
            }
            pbVar5 = (uint8_t*)(*this_00)[arg1_00];
            iVar8 = (int)((unsigned int)*pbVar5 * arg1) >> 8;
            if (254 < iVar8) {
                iVar8 = 255;
            }
            iVar11 = 0;
            iVar2 = 0;
            if (-1 < (int)((unsigned int)*pbVar5 * arg1)) {
                iVar2 = iVar8;
            }
            iVar7 = iVar7 << 16;
            if (iVar6 < 0) {
                iVar7 = 0;
            }
            if (-1 < iVar9) {
                iVar11 = iVar10 << 8;
            }
            piVar3 = (int*)(*this_00)[arg1_00];
            *piVar3 = iVar7 + (unsigned int)bVar1 * 16777216 + iVar11 + iVar2;
        }
    }

} // namespace jag::oldscape::graphics
