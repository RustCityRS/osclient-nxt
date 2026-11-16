// libs/oldscape/jagex3/dash3d/DeferredHighlight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics {
    template <typename...> // 2 instantiations, e.g. <OpaqueHelper>, <TransparentHelper>
    class BasicHLineHelper {
    public:
        BasicHLineHelper(unsigned int, unsigned int);
    };

    class CircleComputer {
    public:
        CircleComputer(int, int);
        void Advance();
        void PrepForBottomHalf();

        // data members, from how the methods use this: 40 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        int field_20; // offset 20
        int field_24; // offset 24
        int field_28; // offset 28
        int field_32; // offset 32
        char _unknown_36[4];
    };

    template <
        typename...> // 4 instantiations, e.g. <BasicHLineHelper<OpaqueHelper> >, <BasicHLineHelper<TransparentHelper> >, <SectorHLineHelper<OpaqueHelper> >
    class FillCircleHelper {
    public:
        void DrawClipped(SharedArray<unsigned int>&, unsigned int, int, int, int, int, int, int);
        void DrawUnclipped(SharedArray<unsigned int>&, unsigned int, int);
    };

    // 0x1003361d0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BasicHLineHelper<OpaqueHelper>::BasicHLineHelper(unsigned int, unsigned int)
    /* SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(unsigned
   int, unsigned int) */

    void SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(uint param_1, uint param_2) {
        uint uVar1;

        uVar1 = param_1 | 4278190080;
        if (16777215 < param_1) {
            uVar1 = param_1;
        }
        *(uint*)this = uVar1;
    }

    // 0x1003361f0, 224 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<BasicHLineHelper<OpaqueHelper> >::DrawClipped(SharedArray<unsigned int>&, unsigned int, int, int, int, int, int, int)
    void graphics::FillCircleHelper<BasicHLineHelper<OpaqueHelper>>::DrawClipped(SharedArray* param_1, uint param_2,
                                                                                 int param_3, int param_4, int param_5,
                                                                                 int param_6, int param_7,
                                                                                 int param_8) {
        int iVar1;
        undefined4 uVar2;
        int iVar3;
        undefined4* puVar4;
        int iVar5;
        long lVar6;
        int iVar7;
        CircleComputer local_60;
        int local_38;

        if (param_8 < param_4) {
            param_4 = param_8;
        }
        iVar3 = param_6 - param_3;
        if (param_6 - param_3 == 0 || param_6 < param_3) {
            iVar3 = 0;
        }
        local_60._36_4_ = param_5;
        new (&local_60) CircleComputer(*(int*)(this + 12), iVar3);
        local_60.Advance();
        iVar3 = *(int*)(this + 8) + local_60.field_32;
        local_38 = param_4;
        if (iVar3 < param_4) {
            do {
                iVar1 = *(int*)(this + 4);
                iVar7 = iVar1 - local_60.field_28;
                if (iVar1 - local_60.field_28 < (int)local_60._36_4_) {
                    iVar7 = local_60._36_4_;
                }
                iVar5 = local_60.field_28 + iVar1 + 1;
                if (param_7 <= local_60.field_28 + iVar1) {
                    iVar5 = param_7;
                }
                if (iVar5 - iVar7 != 0 && iVar7 <= iVar5) {
                    iVar3 = iVar7 + iVar3 * param_2;
                    lVar6 = -(ulong)(uint)(iVar5 - iVar7);
                    do {
                        uVar2 = *(undefined4*)this;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    (long)iVar3);
                        *puVar4 = uVar2;
                        iVar3 = iVar3 + 1;
                        lVar6 = lVar6 + 1;
                    } while (lVar6 != 0);
                }
                local_60.Advance();
                iVar3 = *(int*)(this + 8) + local_60.field_32;
            } while (iVar3 < local_38);
        }
    }

    // 0x1003362d0, 192 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<BasicHLineHelper<OpaqueHelper> >::DrawUnclipped(SharedArray<unsigned int>&, unsigned int, int)
    void graphics::FillCircleHelper<BasicHLineHelper<OpaqueHelper>>::DrawUnclipped(SharedArray* param_1, uint param_2,
                                                                                   int param_3) {
        undefined4 uVar1;
        int iVar2;
        undefined4* puVar3;
        uint uVar4;
        ulong uVar5;
        CircleComputer local_60;

        new (&local_60) CircleComputer(*(int*)(this + 12), 0);
        local_60.Advance();
        iVar2 = *(int*)(this + 8) + local_60.field_32;
        if (iVar2 < param_3) {
            do {
                uVar4 = local_60.field_28 * 2 + 1;
                if (0 < (int)uVar4) {
                    uVar5 = (ulong)uVar4;
                    iVar2 = (*(int*)(this + 4) + iVar2 * param_2) - local_60.field_28;
                    do {
                        uVar1 = *(undefined4*)this;
                        puVar3 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    (long)iVar2);
                        *puVar3 = uVar1;
                        iVar2 = iVar2 + 1;
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                }
                local_60.Advance();
                iVar2 = *(int*)(this + 8) + local_60.field_32;
            } while (iVar2 < param_3);
        }
    }

    // 0x100336390, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // CircleComputer::CircleComputer(int, int): jumps straight to the base-object constructor

    // 0x1003363a0, 240 bytes, inline, placed by debug map only (low confidence)
    // CircleComputer::Advance()
    void CircleComputer::Advance() {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar3 = field_8;
        if (iVar3 < 0) {
            while ((iVar1 = field_24, iVar1 <= field_4 || (field_20 <= field_4))) {
                iVar2 = field_12;
                field_20 = field_20 + iVar2 * 2;
                field_24 = iVar1 + iVar2 * 2 + 1;
                field_12 = iVar2 + 1;
            }
            iVar2 = field_16;
            field_28 = field_12 + -1;
            field_32 = iVar3;
            field_8 = iVar3 + 1;
            field_20 = ((field_20 - iVar2) - iVar2) + 1;
            field_16 = iVar2 + -1;
            field_24 = iVar1 - (iVar2 * 2 + -2);
        } else {
            if (iVar3 == 0) {
                PrepForBottomHalf(this);
            }
            iVar3 = field_24;
            while ((field_4 < iVar3 && (field_4 < field_20))) {
                iVar1 = field_12;
                iVar3 = iVar3 + iVar1 * -2 + 1;
                field_24 = iVar3;
                field_12 = iVar1 + -1;
                field_20 = field_20 - (iVar1 * 2 + -2);
            }
            field_28 = field_12;
            field_32 = field_8;
            field_8 = field_8 + 1;
            iVar1 = field_16;
            field_24 = iVar3 + iVar1 * 2;
            field_20 = field_20 + iVar1 * 2 + 1;
            field_16 = iVar1 + 1;
        }
    }

    // 0x100336490, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // CircleComputer::CircleComputer(int, int)
    void CircleComputer::CircleComputer(int param_1, int param_2) {
        int iVar1;

        field_0 = param_1;
        field_4 = param_1 * param_1;
        iVar1 = param_2 - param_1;
        field_8 = iVar1;
        if (iVar1 < 0) {
            field_12 = 0;
            field_16 = -iVar1;
            field_20 = iVar1 * iVar1;
            field_24 = iVar1 * iVar1 + iVar1;
            return;
        }
        PrepForBottomHalf(this);
    }

    // 0x1003364d0, 32 bytes, inline, placed by debug map only (low confidence)
    // CircleComputer::PrepForBottomHalf()
    void CircleComputer::PrepForBottomHalf() {
        int iVar1;

        iVar1 = field_8;
        field_12 = field_0;
        field_16 = iVar1;
        iVar1 = iVar1 * iVar1 + field_4;
        field_24 = iVar1;
        field_20 = iVar1 - field_0;
    }

    // 0x1003364f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BasicHLineHelper<TransparentHelper>::BasicHLineHelper(unsigned int, unsigned int)
    /* SectorHLineHelper<TransparentHelper>::SectorHLineHelper(unsigned
   int, unsigned int) */

    void SectorHLineHelper<TransparentHelper>::SectorHLineHelper(uint param_1, uint param_2) {
        undefined4 uVar1;

        *(uint*)this = param_2 << 24 | param_1;
        uVar1 = ComputeCompositeRGB(param_1, param_2);
        *(undefined4*)(this + 4) = uVar1;
        *(uint*)(this + 8) = param_2;
        *(uint*)(this + 12) = 255 - param_2;
    }

    // 0x100336530, 272 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<BasicHLineHelper<TransparentHelper> >::DrawClipped(SharedArray<unsigned int>&, unsigned int, int, int, int, int, int, int)
    void graphics::FillCircleHelper<BasicHLineHelper<TransparentHelper>>::DrawClipped(SharedArray* param_1,
                                                                                      uint param_2, int param_3,
                                                                                      int param_4, int param_5,
                                                                                      int param_6, int param_7,
                                                                                      int param_8) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4* puVar4;
        uint* puVar5;
        int iVar6;
        long lVar7;
        int iVar8;
        CircleComputer local_60;
        int local_38;

        if (param_8 < param_4) {
            param_4 = param_8;
        }
        iVar2 = param_6 - param_3;
        if (param_6 - param_3 == 0 || param_6 < param_3) {
            iVar2 = 0;
        }
        local_60._36_4_ = param_5;
        new (&local_60) CircleComputer(*(int*)(this + 24), iVar2);
        local_60.Advance();
        iVar2 = *(int*)(this + 20) + local_60.field_32;
        local_38 = param_4;
        if (iVar2 < param_4) {
            do {
                iVar1 = *(int*)(this + 16);
                iVar8 = iVar1 - local_60.field_28;
                if (iVar1 - local_60.field_28 < (int)local_60._36_4_) {
                    iVar8 = local_60._36_4_;
                }
                iVar6 = local_60.field_28 + iVar1 + 1;
                if (param_7 <= local_60.field_28 + iVar1) {
                    iVar6 = param_7;
                }
                if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                    iVar2 = iVar8 + iVar2 * param_2;
                    lVar7 = -(ulong)(uint)(iVar6 - iVar8);
                    do {
                        puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                              (long)iVar2);
                        if (*puVar5 == 0) {
                            uVar3 = *(undefined4*)this;
                        } else {
                            uVar3 = BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12), *puVar5);
                        }
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    (long)iVar2);
                        *puVar4 = uVar3;
                        iVar2 = iVar2 + 1;
                        lVar7 = lVar7 + 1;
                    } while (lVar7 != 0);
                }
                local_60.Advance();
                iVar2 = *(int*)(this + 20) + local_60.field_32;
            } while (iVar2 < local_38);
        }
    }

    // 0x100336640, 240 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<BasicHLineHelper<TransparentHelper> >::DrawUnclipped(SharedArray<unsigned int>&, unsigned int, int)
    void graphics::FillCircleHelper<BasicHLineHelper<TransparentHelper>>::DrawUnclipped(SharedArray* param_1,
                                                                                        uint param_2, int param_3) {
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        uint* puVar4;
        uint uVar5;
        ulong uVar6;
        CircleComputer local_60;

        new (&local_60) CircleComputer(*(int*)(this + 24), 0);
        local_60.Advance();
        iVar1 = *(int*)(this + 20) + local_60.field_32;
        if (iVar1 < param_3) {
            do {
                uVar5 = local_60.field_28 * 2 + 1;
                if (0 < (int)uVar5) {
                    uVar6 = (ulong)uVar5;
                    iVar1 = (*(int*)(this + 16) + iVar1 * param_2) - local_60.field_28;
                    do {
                        puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                              (long)iVar1);
                        if (*puVar4 == 0) {
                            uVar2 = *(undefined4*)this;
                        } else {
                            uVar2 = BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12), *puVar4);
                        }
                        puVar3 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    (long)iVar1);
                        *puVar3 = uVar2;
                        iVar1 = iVar1 + 1;
                        uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                }
                local_60.Advance();
                iVar1 = *(int*)(this + 20) + local_60.field_32;
            } while (iVar1 < param_3);
        }
    }

    // 0x100336730, 32 bytes, inline, placed by debug map only (low confidence)
    // SectorHLineHelper<OpaqueHelper>::ANGLE_TO_RADIANS(int)
    double SectorHLineHelper<OpaqueHelper>::ANGLE_TO_RADIANS(int param_1) {
        return (double)param_1 * 9.587379913330079e-05;
    }

    // 0x100336750, 304 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<SectorHLineHelper<OpaqueHelper> >::DrawClipped(SharedArray<unsigned int>&, unsigned int, int, int, int, int, int, int)
    void graphics::FillCircleHelper<SectorHLineHelper<OpaqueHelper>>::DrawClipped(SharedArray* param_1, uint param_2,
                                                                                  int param_3, int param_4, int param_5,
                                                                                  int param_6, int param_7,
                                                                                  int param_8) {
        int iVar1;
        int iVar2;
        undefined4* puVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        int iVar7;
        CircleComputer local_70;
        undefined4 local_40;
        int local_38;

        if (param_8 < param_4) {
            param_4 = param_8;
        }
        iVar7 = param_6 - param_3;
        if (param_6 - param_3 == 0 || param_6 < param_3) {
            iVar7 = 0;
        }
        new (&local_70) CircleComputer(*(int*)(this + 32), iVar7);
        local_70.Advance();
        iVar7 = *(int*)(this + 28) + local_70.field_32;
        local_38 = param_4;
        if (iVar7 < param_4) {
            do {
                iVar2 = local_70.field_32;
                iVar1 = *(int*)(this + 24);
                iVar5 = iVar1 - local_70.field_28;
                if (iVar1 - local_70.field_28 < param_5) {
                    iVar5 = param_5;
                }
                iVar4 = local_70.field_28 + iVar1 + 1;
                if (param_7 <= local_70.field_28 + iVar1) {
                    iVar4 = param_7;
                }
                if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
                    iVar7 = iVar7 * param_2 + iVar5;
                    lVar6 = -(ulong)(uint)(iVar4 - iVar5);
                    iVar5 = iVar5 - iVar1;
                    do {
                        if (this[20] ==
                            (FillCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar2 <
                                                                                    *(int*)(this + 16) * iVar5 &&
                                                                                *(int*)(this + 12) * iVar5 <=
                                                                                    *(int*)(this + 4) * iVar2)) {
                            local_40 = *(undefined4*)this;
                            puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, (long)iVar7);
                            *puVar3 = local_40;
                        }
                        iVar7 = iVar7 + 1;
                        iVar5 = iVar5 + 1;
                        lVar6 = lVar6 + 1;
                    } while (lVar6 != 0);
                }
                local_70.Advance();
                iVar7 = *(int*)(this + 28) + local_70.field_32;
            } while (iVar7 < local_38);
        }
    }

    // 0x100336880, 272 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<SectorHLineHelper<OpaqueHelper> >::DrawUnclipped(SharedArray<unsigned int>&, unsigned int, int)
    void graphics::FillCircleHelper<SectorHLineHelper<OpaqueHelper>>::DrawUnclipped(SharedArray* param_1, uint param_2,
                                                                                    int param_3) {
        undefined4 uVar1;
        int iVar2;
        int iVar3;
        undefined4* puVar4;
        uint uVar5;
        ulong uVar6;
        CircleComputer local_70;
        ulong local_38;

        new (&local_70) CircleComputer(*(int*)(this + 32), 0);
        local_70.Advance();
        iVar3 = *(int*)(this + 28) + local_70.field_32;
        if (iVar3 < param_3) {
            do {
                iVar2 = local_70.field_32;
                local_38 = (ulong) * (uint*)(this + 24);
                uVar5 = local_70.field_28 * 2 + 1;
                if (0 < (int)uVar5) {
                    uVar6 = (ulong)uVar5;
                    local_38 = (ulong)(*(uint*)(this + 24) + iVar3 * param_2);
                    iVar3 = -local_70.field_28;
                    do {
                        if (this[20] ==
                            (FillCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar2 <
                                                                                    *(int*)(this + 16) * iVar3 &&
                                                                                *(int*)(this + 12) * iVar3 <=
                                                                                    *(int*)(this + 4) * iVar2)) {
                            uVar1 = *(undefined4*)this;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, (long)((int)local_38 + iVar3));
                            *puVar4 = uVar1;
                        }
                        iVar3 = iVar3 + 1;
                        uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                }
                local_70.Advance();
                iVar3 = *(int*)(this + 28) + local_70.field_32;
            } while (iVar3 < param_3);
        }
    }

    // 0x100336990, 32 bytes, inline, placed by debug map only (low confidence)
    // SectorHLineHelper<TransparentHelper>::ANGLE_TO_RADIANS(int)
    double SectorHLineHelper<TransparentHelper>::ANGLE_TO_RADIANS(int param_1) {
        return (double)param_1 * 9.587379913330079e-05;
    }

    // 0x1003369b0, 336 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<SectorHLineHelper<TransparentHelper> >::DrawClipped(SharedArray<unsigned int>&, unsigned int, int, int, int, int, int, int)
    void graphics::FillCircleHelper<SectorHLineHelper<TransparentHelper>>::DrawClipped(SharedArray* param_1,
                                                                                       uint param_2, int param_3,
                                                                                       int param_4, int param_5,
                                                                                       int param_6, int param_7,
                                                                                       int param_8) {
        int iVar1;
        undefined4* puVar2;
        uint* puVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        long lVar8;
        CircleComputer local_78;
        int local_44;
        int local_3c;
        undefined4 local_34;

        if (param_8 < param_4) {
            param_4 = param_8;
        }
        iVar6 = param_6 - param_3;
        if (param_6 - param_3 == 0 || param_6 < param_3) {
            iVar6 = 0;
        }
        new (&local_78) CircleComputer(*(int*)(this + 44), iVar6);
        local_78.Advance();
        iVar6 = *(int*)(this + 40) + local_78.field_32;
        local_3c = param_4;
        if (iVar6 < param_4) {
            do {
                iVar1 = *(int*)(this + 36);
                iVar5 = iVar1 - local_78.field_28;
                if (iVar1 - local_78.field_28 < param_5) {
                    iVar5 = param_5;
                }
                iVar4 = local_78.field_28 + iVar1 + 1;
                if (param_7 <= local_78.field_28 + iVar1) {
                    iVar4 = param_7;
                }
                if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
                    iVar7 = iVar6 * param_2 + iVar5;
                    lVar8 = -(ulong)(uint)(iVar4 - iVar5);
                    iVar5 = iVar5 - iVar1;
                    iVar6 = local_78.field_32;
                    local_44 = local_78.field_32;
                    do {
                        if (this[32] ==
                            (FillCircleHelper<SectorHLineHelper<TransparentHelper>>)(*(int*)(this + 20) * iVar6 <
                                                                                         *(int*)(this + 28) * iVar5 &&
                                                                                     *(int*)(this + 24) * iVar5 <=
                                                                                         *(int*)(this + 16) * iVar6)) {
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  (long)iVar7);
                            if (*puVar3 == 0) {
                                local_34 = *(undefined4*)this;
                            } else {
                                local_34 =
                                    BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12), *puVar3);
                            }
                            puVar2 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, (long)iVar7);
                            *puVar2 = local_34;
                            iVar6 = local_44;
                        }
                        iVar7 = iVar7 + 1;
                        iVar5 = iVar5 + 1;
                        lVar8 = lVar8 + 1;
                    } while (lVar8 != 0);
                }
                local_78.Advance();
                iVar6 = *(int*)(this + 40) + local_78.field_32;
            } while (iVar6 < local_3c);
        }
    }

    // 0x100336b00, 304 bytes, inline, placed by debug map only (low confidence)
    // FillCircleHelper<SectorHLineHelper<TransparentHelper> >::DrawUnclipped(SharedArray<unsigned int>&, unsigned int, int)
    void graphics::FillCircleHelper<SectorHLineHelper<TransparentHelper>>::DrawUnclipped(SharedArray* param_1,
                                                                                         uint param_2, int param_3) {
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        uint* puVar4;
        uint uVar5;
        int iVar6;
        ulong uVar7;
        ulong uVar8;
        CircleComputer local_78;
        int local_44;
        ulong local_38;

        new (&local_78) CircleComputer(*(int*)(this + 44), 0);
        local_78.Advance();
        iVar1 = *(int*)(this + 40) + local_78.field_32;
        if (iVar1 < param_3) {
            do {
                local_38 = (ulong) * (uint*)(this + 36);
                uVar5 = local_78.field_28 * 2 + 1;
                if (0 < (int)uVar5) {
                    uVar8 = (ulong)uVar5;
                    local_38 = (ulong)(*(uint*)(this + 36) + iVar1 * param_2);
                    iVar6 = -local_78.field_28;
                    iVar1 = local_78.field_32;
                    local_44 = local_78.field_32;
                    do {
                        if (this[32] ==
                            (FillCircleHelper<SectorHLineHelper<TransparentHelper>>)(*(int*)(this + 20) * iVar1 <
                                                                                         *(int*)(this + 28) * iVar6 &&
                                                                                     *(int*)(this + 24) * iVar6 <=
                                                                                         *(int*)(this + 16) * iVar1)) {
                            uVar7 = (ulong)((int)local_38 + iVar6);
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar7);
                            if (*puVar4 == 0) {
                                uVar2 = *(undefined4*)this;
                            } else {
                                uVar2 =
                                    BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12), *puVar4);
                            }
                            puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar7);
                            *puVar3 = uVar2;
                            iVar1 = local_44;
                        }
                        iVar6 = iVar6 + 1;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                local_78.Advance();
                iVar1 = *(int*)(this + 40) + local_78.field_32;
            } while (iVar1 < param_3);
        }
    }

    // 0x100337270, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // pix8multi::pix8multi(Array<Pix8, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x100337290, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // pix8multi::pix8multi(Array<Pix8, eastl::allocator>&&)
    void pix8multi::pix8multi(Array* param_1) {
        new (this) Array<Pix8, eastl::allocator>(param_1);
    }

    // 0x100337370, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // pix32multi::pix32multi(Array<Pix32, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x100337390, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // pix32multi::pix32multi(Array<Pix32, eastl::allocator>&&)
    void pix32multi::pix32multi(Array* param_1) {
        new (this) Array<Pix32, eastl::allocator>(param_1);
    }

    // 0x100337470, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // pix32multi::~pix32multi(): jumps straight to the base-object destructor

    // 0x100337480, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // pix32multi::~pix32multi()
    void pix32multi::~pix32multi() {
        ~Array();
    }

} // namespace jag::oldscape::graphics

namespace jag {
    // 0x100336050, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_array<signed char []>::type make_shared<signed char []>(unsigned long)
    jag* make_shared<signed char[]>(ulong param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        ulong uVar3;
        _func_decltype_nullptr* p_Var4;
        ulong local_38;
        signed* local_30[2];

        p_Var4 = (_func_decltype_nullptr*)0;
        local_38 = param_1;
        if (param_1 != 0) {
            p_Var4 = (_func_decltype_nullptr*)8;
            pvVar1 = (void*)aligned_alloc(param_1 + 23, 8);
            if (pvVar1 != (void*)0) {
                local_30[0] = (signed*)((long)pvVar1 + 16);
                if (local_38 != 0) {
                    uVar3 = 0;
                    do {
                        placement_new<signed char>(local_30[0] + uVar3);
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < local_38);
                }
                prVar2 = placement_new<ref_counter_shared_trivial<signed char>, unsigned long&, signed char*&>(
                    pvVar1, &local_38, local_30);
                new (this)
                    eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
                return this;
            }
        }
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var4);
        return this;
    }

    // 0x100336100, 16 bytes, inline, placed by debug map only (low confidence)
    // signed char* placement_new<signed char>(void*)
    signed* placement_new<signed char>(void* param_1) {
        *(undefined1*)param_1 = 0;
        return param_1;
    }

    // 0x100336110, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<signed char>* placement_new<ref_counter_shared_trivial<signed char>, unsigned long&, signed char*&>(void*, unsigned long&, signed char*&)
    ref_counter_shared_trivial*
    placement_new<ref_counter_shared_trivial<signed char>, unsigned long&, signed char*&>(void* param_1, ulong* param_2,
                                                                                          signed** param_3) {
        ref_counter_shared_trivial<signed char>::ref_counter_shared_trivial(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100336130, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<signed char>::ref_counter_shared_trivial(unsigned long, signed char*): jumps straight to the base-object constructor

    // 0x100336140, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<signed char>::ref_counter_shared_trivial(unsigned long, signed char*)
    void ref_counter_shared_trivial<signed char>::ref_counter_shared_trivial(ulong param_1, signed* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d60 + 16;
    }

    // 0x100336ca0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_array<Array<unsigned char, eastl::allocator> []>::type make_shared<Array<unsigned char, eastl::allocator> []>(unsigned long)
    jag* make_shared<Array<unsigned char, eastl::allocator>[]>(ulong param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        ulong uVar3;
        _func_decltype_nullptr* p_Var4;
        long lVar5;
        ulong local_40;
        Array* local_38[2];

        p_Var4 = (_func_decltype_nullptr*)0;
        local_40 = param_1;
        if (param_1 != 0) {
            p_Var4 = (_func_decltype_nullptr*)8;
            pvVar1 = (void*)aligned_alloc(param_1 * 24 + 32, 8);
            if (pvVar1 != (void*)0) {
                local_38[0] = (Array*)((long)pvVar1 + 32);
                if (local_40 != 0) {
                    lVar5 = 0;
                    uVar3 = 0;
                    do {
                        placement_new<Array<unsigned char, eastl::allocator>>(local_38[0] + lVar5);
                        uVar3 = uVar3 + 1;
                        lVar5 = lVar5 + 24;
                    } while (uVar3 < local_40);
                }
                prVar2 = placement_new<ref_counter_shared<Array<unsigned char, eastl::allocator>>, unsigned long&,
                                       Array<unsigned char, eastl::allocator>*&>(pvVar1, &local_40, local_38);
                new (this)
                    eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
                return this;
            }
        }
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var4);
        return this;
    }

    // 0x100336d50, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<unsigned char, eastl::allocator>* placement_new<Array<unsigned char, eastl::allocator>>(void*)
    Array* placement_new<Array<unsigned char, eastl::allocator>>(void* param_1) {
        Array<unsigned char, eastl::allocator>::Array(param_1);
        return param_1;
    }

    // 0x100336d70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<unsigned char, eastl::allocator> >* placement_new<ref_counter_shared<Array<unsigned char, eastl::allocator> >, unsigned long&, Array<unsigned char, eastl::allocator>*&>(void*, unsigned long&, Array<unsigned char, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<Array<unsigned char, eastl::allocator>>, unsigned long&,
                                           Array<unsigned char, eastl::allocator>*&>(void* param_1, ulong* param_2,
                                                                                     Array** param_3) {
        ref_counter_shared<Array<unsigned char, eastl::allocator>>::ref_counter_shared(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100336d90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<unsigned char, eastl::allocator> >::ref_counter_shared(unsigned long, Array<unsigned char, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100336da0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<unsigned char, eastl::allocator> >::ref_counter_shared(unsigned long, Array<unsigned char, eastl::allocator>*)
    void ref_counter_shared<Array<unsigned char, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<unsigned char, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7418 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x100336de0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<unsigned char, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<unsigned char, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<unsigned char, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100336ed0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::jstring::PixfontGeneric* placement_new<oldscape::jstring::PixfontGeneric, Array<signed char, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>, SharedArray<unsigned int>, SharedArray<Array<unsigned char, eastl::allocator> > >(void*, Array<signed char, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, SharedArray<unsigned int>&&, SharedArray<Array<unsigned char, eastl::allocator> >&&)
    PixfontGeneric* jag::placement_new<oldscape::jstring::PixfontGeneric, Array<signed char, eastl::allocator>,
                                       Array<int, eastl::allocator>, Array<int, eastl::allocator>,
                                       Array<int, eastl::allocator>, Array<int, eastl::allocator>,
                                       SharedArray<unsigned int>, SharedArray<Array<unsigned char, eastl::allocator>>>(
        void* param_1, Array* param_2, Array* param_3, Array* param_4, Array* param_5, Array* param_6,
        SharedArray* param_7, SharedArray* param_8) {
        oldscape::jstring::PixfontGeneric::PixfontGeneric(param_1, param_2, param_3, param_4, param_5, param_6, param_7,
                                                          param_8);
        return param_1;
    }

    // 0x100336f00, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jstring::PixfontGeneric>* placement_new<ref_counter_shared<oldscape::jstring::PixfontGeneric>, int, oldscape::jstring::PixfontGeneric*&>(void*, int&&, oldscape::jstring::PixfontGeneric*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::jstring::PixfontGeneric>, int, oldscape::jstring::PixfontGeneric*&>(
        void* param_1, int* param_2, PixfontGeneric** param_3) {
        ref_counter_shared<oldscape::jstring::PixfontGeneric>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100336f20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jstring::PixfontGeneric>::ref_counter_shared(unsigned long, oldscape::jstring::PixfontGeneric*): jumps straight to the base-object constructor

    // 0x100336f30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jstring::PixfontGeneric>::ref_counter_shared(unsigned long, oldscape::jstring::PixfontGeneric*)
    void ref_counter_shared<oldscape::jstring::PixfontGeneric>::ref_counter_shared(ulong param_1,
                                                                                   PixfontGeneric* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7938 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PixfontGeneric**)(this + 24) = param_2;
    }

    // 0x100336f70, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jstring::PixfontGeneric>::DeleteData()
    void ref_counter_shared<oldscape::jstring::PixfontGeneric>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~PixfontGeneric();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 1192;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003375e0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::graphics::animation::OldscapeAnimKey* placement_new<oldscape::graphics::animation::OldscapeAnimKey>(void*)
    OldscapeAnimKey* placement_new<oldscape::graphics::animation::OldscapeAnimKey>(void* param_1) {
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        oldscape::graphics::animation::OldscapeAnimKey::OldscapeAnimKey(param_1);
        return param_1;
    }

    // 0x100337610, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>* placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>, int, oldscape::graphics::animation::OldscapeAnimKey*&>(void*, int&&, oldscape::graphics::animation::OldscapeAnimKey*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>, int,
                       oldscape::graphics::animation::OldscapeAnimKey*&>(void* param_1, int* param_2,
                                                                         OldscapeAnimKey** param_3) {
        ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::ref_counter_shared(param_1, (long)*param_2,
                                                                                               *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class DeferredGroundGridHighlight {
    public:
        // virtual methods in vtable order
        virtual void Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int);
        virtual ~DeferredGroundGridHighlight();
        DeferredGroundGridHighlight(int, GridRect, EntityHighlight const&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        int field_8;         // offset 8
        char _unknown_12[4];
        int field_16; // offset 16
        int field_20; // offset 20
        int field_24; // offset 24
        char _unknown_28[4];
        EntityHighlight* field_32; // offset 32
    };

    class DeferredHighlight {
    public:
        // virtual methods in vtable order
        virtual Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int);
        virtual ~DeferredHighlight();
        DeferredHighlight();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class DeferredModelHighlight {
    public:
        // virtual methods in vtable order
        virtual void Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int);
        virtual ~DeferredModelHighlight();
        DeferredModelHighlight(ModelSource&, int, int, int, int, long long, EntityHighlight const&);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0;       // offset 0, vtable pointer
        ModelSource* field_8;      // offset 8
        int field_16;              // offset 16
        int field_20;              // offset 20
        int field_24;              // offset 24
        int field_28;              // offset 28
        longlong field_32;         // offset 32
        EntityHighlight* field_40; // offset 40
    };

    // 0x1003341a0, 32 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DeferredModelHighlight::DeferredModelHighlight(ModelSource&, int, int, int, int, long long, EntityHighlight const&)
    void DeferredModelHighlight::DeferredModelHighlight(ModelSource* param_1, int param_2, int param_3, int param_4,
                                                        int param_5, longlong param_6, EntityHighlight* param_7) {
        DeferredModelHighlight(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x1003341d0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DeferredModelHighlight::DeferredModelHighlight(ModelSource&, int, int, int, int, long long, EntityHighlight const&)
    void DeferredModelHighlight::DeferredModelHighlight(ModelSource* param_1, int param_2, int param_3, int param_4,
                                                        int param_5, longlong param_6, EntityHighlight* param_7) {
        new (this) DeferredHighlight();
        field_0 = &PTR_Render_100efc020;
        field_8 = param_1;
        field_16 = param_2;
        field_20 = param_3;
        field_24 = param_4;
        field_28 = param_5;
        field_32 = param_6;
        field_40 = param_7;
    }

    // 0x100334240, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DeferredHighlight::DeferredHighlight()
    void DeferredHighlight::DeferredHighlight() {
        field_0 = PTR_vtable_100ee89c8 + 16;
    }

    // 0x1003348c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DeferredGroundGridHighlight::DeferredGroundGridHighlight(int, GridRect, EntityHighlight const&): jumps straight to the base-object constructor

    // 0x1003348e0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DeferredGroundGridHighlight::DeferredGroundGridHighlight(int, GridRect, EntityHighlight const&)
    void DeferredGroundGridHighlight::DeferredGroundGridHighlight(int param_1, GridRect param_2,
                                                                  EntityHighlight* param_3) {
        undefined8 in_RCX;
        EntityHighlight* in_R8;

        new (this) DeferredHighlight();
        field_0 = &PTR_Render_100efc048;
        field_8 = param_1;
        *(EntityHighlight**)&field_12 = param_3;
        field_20 = (int)in_RCX;
        field_24 = (int)((ulong)in_RCX >> 32);
        field_32 = in_R8;
    }

    // 0x100334a70, 32 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DeferredGroundFineHighlight::DeferredGroundFineHighlight(int, int, int, GridRect, EntityHighlight const&)
    void DeferredGroundFineHighlight::DeferredGroundFineHighlight(int param_1, int param_2, int param_3,
                                                                  GridRect param_4, EntityHighlight* param_5) {
        GridRect GVar1;
        undefined4 unaff_EBP;
        undefined8 in_stack_fffffffffffffff0;

        GVar1._8_8_ = in_stack_fffffffffffffff0;
        GVar1.field_0 = param_4.field_0;
        GVar1.field_4 = param_4.field_4;
        GVar1._16_4_ = unaff_EBP;
        DeferredGroundFineHighlight(this, param_1, param_2, param_3, GVar1, param_5);
    }

    // 0x100334aa0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DeferredGroundFineHighlight::DeferredGroundFineHighlight(int, int, int, GridRect, EntityHighlight const&)
    void DeferredGroundFineHighlight::DeferredGroundFineHighlight(int param_1, int param_2, int param_3,
                                                                  GridRect param_4, EntityHighlight* param_5) {
        undefined8 in_R9;

        new (this) DeferredHighlight();
        field_0 = &PTR_Render_100efc070;
        field_8 = param_1;
        field_12 = param_2;
        field_16 = param_3;
        field_20 = param_5;
        field_28 = (int)in_R9;
        field_32 = (int)((ulong)in_R9 >> 32);
        field_40 = param_4.field_0;
        field_44 = param_4.field_4;
    }

    // 0x100334e60, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DepthBiasComputer::Node::~Node(): jumps straight to the base-object destructor

    // 0x100334e70, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DepthBiasComputer::Node::~Node()
    void DepthBiasComputer::Node::~Node() {
        ~vector();
    }

    // 0x1003351a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DepthBiasComputer::Node::Node(DepthBiasComputer::Node&&): jumps straight to the base-object constructor

    // 0x1003351b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DepthBiasComputer::Node::Node(DepthBiasComputer::Node&&)
    void DepthBiasComputer::Node::Node(Node* param_1) {
        new (this) eastl::vector<DepthBiasComputer::Link, eastl::allocator>(param_1);
        field_40 = param_1->field_40;
        field_32 = param_1->field_32;
    }

    // 0x100335290, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DepthBiasComputer::Node::Node(): jumps straight to the base-object constructor

    // 0x1003352a0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DepthBiasComputer::Node::Node()
    void DepthBiasComputer::Node::Node() {
        new (this) eastl::vector<DepthBiasComputer::Link, eastl::allocator>();
        field_32 = 0;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x100334c50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<long long>::Vector3T<int>(Vector3T<int> const&)
    void Vector3T<long long>::Vector3T<int>(Vector3T* param_1) {
        vector* pvVar1;
        int* piVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(long*)this = (long)*(int*)pvVar1;
        piVar2 = (int*)param_1->y();
        *(long*)(this + 8) = (long)*piVar2;
        piVar2 = (int*)param_1->second();
        *(long*)(this + 16) = (long)*piVar2;
    }

} // namespace jag::math
