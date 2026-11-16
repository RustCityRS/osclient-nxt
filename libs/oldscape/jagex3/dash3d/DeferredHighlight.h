// libs/oldscape/jagex3/dash3d/DeferredHighlight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics {
    template <typename...> // 2 instantiations, e.g. <OpaqueHelper>, <TransparentHelper>
    class BasicHLineHelper {
    public:
        BasicHLineHelper(unsigned int arg1, unsigned int arg2);
    };

    class CircleComputer {
    public:
        CircleComputer(int arg1, int arg2);
        void Advance();
        void PrepForBottomHalf();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        int field_32;
        uint8_t _unknown_36[4];
    };

    template <
        typename...> // 4 instantiations, e.g. <BasicHLineHelper<OpaqueHelper> >, <BasicHLineHelper<TransparentHelper> >, <SectorHLineHelper<OpaqueHelper> >
    class FillCircleHelper {
    public:
        void DrawClipped(SharedArray<unsigned int>& sharedArray, unsigned int arg2, int arg3, int arg4, int arg5,
                         int arg6, int arg7, int arg8);
        void DrawUnclipped(SharedArray<unsigned int>& sharedArray, unsigned int arg2, int arg3);
    };

    // 0x1003361d0
    BasicHLineHelper<OpaqueHelper>::BasicHLineHelper(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar1 = arg1 | 4278190080;
        if (16777215 < arg1) {
            uVar1 = arg1;
        }
        *(unsigned int*)this = uVar1;
    }

    // 0x1003361f0
    void FillCircleHelper<BasicHLineHelper<OpaqueHelper>>::DrawClipped(SharedArray<unsigned int>& sharedArray,
                                                                       unsigned int arg2, int arg3, int arg4, int arg5,
                                                                       int arg6, int arg7, int arg8) {
        int iVar1;
        uint32_t uVar2;
        uint32_t* puVar4;
        int iVar5;
        long lVar6;
        int iVar7;

        if (arg8 < arg4) {
            arg4 = arg8;
        }
        int iVar3 = arg6 - arg3;
        if (arg6 - arg3 == 0 || arg6 < arg3) {
            iVar3 = 0;
        }
        local_60._36_4_ = arg5;
        CircleComputer local_60(*(int*)(this + 12), iVar3);
        local_60.Advance();
        iVar3 = *(int*)(this + 8) + local_60.field_32;
        int local_38 = arg4;
        if (iVar3 < arg4) {
            do {
                iVar1 = *(int*)(this + 4);
                iVar7 = iVar1 - local_60.field_28;
                if (iVar1 - local_60.field_28 < (int)local_60._36_4_) {
                    iVar7 = local_60._36_4_;
                }
                iVar5 = local_60.field_28 + iVar1 + 1;
                if (arg7 <= local_60.field_28 + iVar1) {
                    iVar5 = arg7;
                }
                if (iVar5 - iVar7 != 0 && iVar7 <= iVar5) {
                    iVar3 = iVar7 + iVar3 * arg2;
                    lVar6 = -(unsigned long)(unsigned int)(iVar5 - iVar7);
                    do {
                        uVar2 = *(uint32_t*)this;
                        puVar4 = &sharedArray[(long)iVar3];
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

    // 0x1003362d0
    void FillCircleHelper<BasicHLineHelper<OpaqueHelper>>::DrawUnclipped(SharedArray<unsigned int>& sharedArray,
                                                                         unsigned int arg2, int arg3) {
        uint32_t uVar1;
        uint32_t* puVar3;
        unsigned int uVar4;
        unsigned long uVar5;

        CircleComputer local_60(*(int*)(this + 12), 0);
        local_60.Advance();
        int iVar2 = *(int*)(this + 8) + local_60.field_32;
        if (iVar2 < arg3) {
            do {
                uVar4 = local_60.field_28 * 2 + 1;
                if (0 < (int)uVar4) {
                    uVar5 = (unsigned long)uVar4;
                    iVar2 = (*(int*)(this + 4) + iVar2 * arg2) - local_60.field_28;
                    do {
                        uVar1 = *(uint32_t*)this;
                        puVar3 = &sharedArray[(long)iVar2];
                        *puVar3 = uVar1;
                        iVar2 = iVar2 + 1;
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                }
                local_60.Advance();
                iVar2 = *(int*)(this + 8) + local_60.field_32;
            } while (iVar2 < arg3);
        }
    }

    // 0x1003363a0
    void CircleComputer::Advance() {
        int iVar1;
        int iVar2;

        int iVar3 = field_8;
        if (iVar3 < 0) {
            while ((iVar1 = field_24, iVar1 <= field_4 || (field_20 <= field_4))) {
                iVar2 = field_12;
                field_20 = field_20 + iVar2 * 2;
                field_24 = iVar1 + iVar2 * 2 + 1;
                field_12 = iVar2 + 1;
            }
            iVar2 = field_16;
            field_28 = field_12 - 1;
            field_32 = iVar3;
            field_8 = iVar3 + 1;
            field_20 = ((field_20 - iVar2) - iVar2) + 1;
            field_16 = iVar2 - 1;
            field_24 = iVar1 - (iVar2 * 2 - 2);
        } else {
            if (iVar3 == 0) {
                PrepForBottomHalf();
            }
            iVar3 = field_24;
            while ((field_4 < iVar3 && (field_4 < field_20))) {
                iVar1 = field_12;
                iVar3 = iVar3 + iVar1 * -2 + 1;
                field_24 = iVar3;
                field_12 = iVar1 - 1;
                field_20 = field_20 - (iVar1 * 2 - 2);
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

    // 0x100336490
    CircleComputer::CircleComputer(int arg1, int arg2) : field_0(arg1) {
        field_4 = arg1 * arg1;
        int iVar1 = arg2 - arg1;
        field_8 = iVar1;
        if (iVar1 < 0) {
            field_12 = 0;
            field_16 = -iVar1;
            field_20 = iVar1 * iVar1;
            field_24 = iVar1 * iVar1 + iVar1;
            return;
        }
        PrepForBottomHalf();
    }

    // 0x1003364d0
    void CircleComputer::PrepForBottomHalf() {
        int iVar1 = field_8;
        field_12 = field_0;
        field_16 = iVar1;
        iVar1 = iVar1 * iVar1 + field_4;
        field_24 = iVar1;
        field_20 = iVar1 - field_0;
    }

    // 0x1003364f0
    BasicHLineHelper<TransparentHelper>::BasicHLineHelper(unsigned int arg1, unsigned int arg2) {
        *(unsigned int*)this = arg2 << 24 | arg1;
        uint32_t uVar1 = ComputeCompositeRGB(arg1, arg2);
        *(uint32_t*)(this + 4) = uVar1;
        *(unsigned int*)(this + 8) = arg2;
        *(unsigned int*)(this + 12) = 255 - arg2;
    }

    // 0x100336530
    void FillCircleHelper<BasicHLineHelper<TransparentHelper>>::DrawClipped(SharedArray<unsigned int>& sharedArray,
                                                                            unsigned int arg2, int arg3, int arg4,
                                                                            int arg5, int arg6, int arg7, int arg8) {
        int iVar1;
        uint32_t uVar3;
        uint32_t* puVar4;
        unsigned int* puVar5;
        int iVar6;
        long lVar7;
        int iVar8;

        if (arg8 < arg4) {
            arg4 = arg8;
        }
        int iVar2 = arg6 - arg3;
        if (arg6 - arg3 == 0 || arg6 < arg3) {
            iVar2 = 0;
        }
        local_60._36_4_ = arg5;
        CircleComputer local_60(*(int*)(this + 24), iVar2);
        local_60.Advance();
        iVar2 = *(int*)(this + 20) + local_60.field_32;
        int local_38 = arg4;
        if (iVar2 < arg4) {
            do {
                iVar1 = *(int*)(this + 16);
                iVar8 = iVar1 - local_60.field_28;
                if (iVar1 - local_60.field_28 < (int)local_60._36_4_) {
                    iVar8 = local_60._36_4_;
                }
                iVar6 = local_60.field_28 + iVar1 + 1;
                if (arg7 <= local_60.field_28 + iVar1) {
                    iVar6 = arg7;
                }
                if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                    iVar2 = iVar8 + iVar2 * arg2;
                    lVar7 = -(unsigned long)(unsigned int)(iVar6 - iVar8);
                    do {
                        puVar5 = &sharedArray[(long)iVar2];
                        if (*puVar5 == 0) {
                            uVar3 = *(uint32_t*)this;
                        } else {
                            uVar3 = BlendPixel(*(unsigned int*)(this + 4), *(unsigned int*)(this + 8),
                                               *(unsigned int*)(this + 12), *puVar5);
                        }
                        puVar4 = &sharedArray[(long)iVar2];
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

    // 0x100336640
    void FillCircleHelper<BasicHLineHelper<TransparentHelper>>::DrawUnclipped(SharedArray<unsigned int>& sharedArray,
                                                                              unsigned int arg2, int arg3) {
        uint32_t uVar2;
        uint32_t* puVar3;
        unsigned int* puVar4;
        unsigned int uVar5;
        unsigned long uVar6;

        CircleComputer local_60(*(int*)(this + 24), 0);
        local_60.Advance();
        int iVar1 = *(int*)(this + 20) + local_60.field_32;
        if (iVar1 < arg3) {
            do {
                uVar5 = local_60.field_28 * 2 + 1;
                if (0 < (int)uVar5) {
                    uVar6 = (unsigned long)uVar5;
                    iVar1 = (*(int*)(this + 16) + iVar1 * arg2) - local_60.field_28;
                    do {
                        puVar4 = &sharedArray[(long)iVar1];
                        if (*puVar4 == 0) {
                            uVar2 = *(uint32_t*)this;
                        } else {
                            uVar2 = BlendPixel(*(unsigned int*)(this + 4), *(unsigned int*)(this + 8),
                                               *(unsigned int*)(this + 12), *puVar4);
                        }
                        puVar3 = &sharedArray[(long)iVar1];
                        *puVar3 = uVar2;
                        iVar1 = iVar1 + 1;
                        uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                }
                local_60.Advance();
                iVar1 = *(int*)(this + 20) + local_60.field_32;
            } while (iVar1 < arg3);
        }
    }

    // 0x100336730
    double SectorHLineHelper<OpaqueHelper>::ANGLE_TO_RADIANS(int arg1) {
        return (double)arg1 * 9.587379913330079e-05;
    }

    // 0x100336750
    void FillCircleHelper<SectorHLineHelper<OpaqueHelper>>::DrawClipped(SharedArray<unsigned int>& sharedArray,
                                                                        unsigned int arg2, int arg3, int arg4, int arg5,
                                                                        int arg6, int arg7, int arg8) {
        int iVar1;
        int iVar2;
        uint32_t* puVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        uint32_t local_40;

        if (arg8 < arg4) {
            arg4 = arg8;
        }
        int iVar7 = arg6 - arg3;
        if (arg6 - arg3 == 0 || arg6 < arg3) {
            iVar7 = 0;
        }
        CircleComputer local_70(*(int*)(this + 32), iVar7);
        local_70.Advance();
        iVar7 = *(int*)(this + 28) + local_70.field_32;
        int local_38 = arg4;
        if (iVar7 < arg4) {
            do {
                iVar2 = local_70.field_32;
                iVar1 = *(int*)(this + 24);
                iVar5 = iVar1 - local_70.field_28;
                if (iVar1 - local_70.field_28 < arg5) {
                    iVar5 = arg5;
                }
                iVar4 = local_70.field_28 + iVar1 + 1;
                if (arg7 <= local_70.field_28 + iVar1) {
                    iVar4 = arg7;
                }
                if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
                    iVar7 = iVar7 * arg2 + iVar5;
                    lVar6 = -(unsigned long)(unsigned int)(iVar4 - iVar5);
                    iVar5 = iVar5 - iVar1;
                    do {
                        if (this[20] ==
                            (FillCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar2 <
                                                                                    *(int*)(this + 16) * iVar5 &&
                                                                                *(int*)(this + 12) * iVar5 <=
                                                                                    *(int*)(this + 4) * iVar2)) {
                            local_40 = *(uint32_t*)this;
                            puVar3 = &sharedArray[(long)iVar7];
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

    // 0x100336880
    void FillCircleHelper<SectorHLineHelper<OpaqueHelper>>::DrawUnclipped(SharedArray<unsigned int>& sharedArray,
                                                                          unsigned int arg2, int arg3) {
        uint32_t uVar1;
        int iVar2;
        uint32_t* puVar4;
        unsigned int uVar5;
        unsigned long uVar6;
        unsigned long local_38;

        CircleComputer local_70(*(int*)(this + 32), 0);
        local_70.Advance();
        int iVar3 = *(int*)(this + 28) + local_70.field_32;
        if (iVar3 < arg3) {
            do {
                iVar2 = local_70.field_32;
                local_38 = (unsigned long)*(unsigned int*)(this + 24);
                uVar5 = local_70.field_28 * 2 + 1;
                if (0 < (int)uVar5) {
                    uVar6 = (unsigned long)uVar5;
                    local_38 = (unsigned long)(*(unsigned int*)(this + 24) + iVar3 * arg2);
                    iVar3 = -local_70.field_28;
                    do {
                        if (this[20] ==
                            (FillCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar2 <
                                                                                    *(int*)(this + 16) * iVar3 &&
                                                                                *(int*)(this + 12) * iVar3 <=
                                                                                    *(int*)(this + 4) * iVar2)) {
                            uVar1 = *(uint32_t*)this;
                            puVar4 = (uint32_t*)sharedArray[(long)((int)local_38 + iVar3)];
                            *puVar4 = uVar1;
                        }
                        iVar3 = iVar3 + 1;
                        uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                }
                local_70.Advance();
                iVar3 = *(int*)(this + 28) + local_70.field_32;
            } while (iVar3 < arg3);
        }
    }

    // 0x100336990
    double SectorHLineHelper<TransparentHelper>::ANGLE_TO_RADIANS(int arg1) {
        return (double)arg1 * 9.587379913330079e-05;
    }

    // 0x1003369b0
    void FillCircleHelper<SectorHLineHelper<TransparentHelper>>::DrawClipped(SharedArray<unsigned int>& sharedArray,
                                                                             unsigned int arg2, int arg3, int arg4,
                                                                             int arg5, int arg6, int arg7, int arg8) {
        int iVar1;
        uint32_t* puVar2;
        unsigned int* puVar3;
        int iVar4;
        int iVar5;
        int iVar7;
        long lVar8;
        int local_44;
        uint32_t local_34;

        if (arg8 < arg4) {
            arg4 = arg8;
        }
        int iVar6 = arg6 - arg3;
        if (arg6 - arg3 == 0 || arg6 < arg3) {
            iVar6 = 0;
        }
        CircleComputer local_78(*(int*)(this + 44), iVar6);
        local_78.Advance();
        iVar6 = *(int*)(this + 40) + local_78.field_32;
        int local_3c = arg4;
        if (iVar6 < arg4) {
            do {
                iVar1 = *(int*)(this + 36);
                iVar5 = iVar1 - local_78.field_28;
                if (iVar1 - local_78.field_28 < arg5) {
                    iVar5 = arg5;
                }
                iVar4 = local_78.field_28 + iVar1 + 1;
                if (arg7 <= local_78.field_28 + iVar1) {
                    iVar4 = arg7;
                }
                if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
                    iVar7 = iVar6 * arg2 + iVar5;
                    lVar8 = -(unsigned long)(unsigned int)(iVar4 - iVar5);
                    iVar5 = iVar5 - iVar1;
                    iVar6 = local_78.field_32;
                    local_44 = local_78.field_32;
                    do {
                        if (this[32] ==
                            (FillCircleHelper<SectorHLineHelper<TransparentHelper>>)(*(int*)(this + 20) * iVar6 <
                                                                                         *(int*)(this + 28) * iVar5 &&
                                                                                     *(int*)(this + 24) * iVar5 <=
                                                                                         *(int*)(this + 16) * iVar6)) {
                            puVar3 = &sharedArray[(long)iVar7];
                            if (*puVar3 == 0) {
                                local_34 = *(uint32_t*)this;
                            } else {
                                local_34 = BlendPixel(*(unsigned int*)(this + 4), *(unsigned int*)(this + 8),
                                                      *(unsigned int*)(this + 12), *puVar3);
                            }
                            puVar2 = &sharedArray[(long)iVar7];
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

    // 0x100336b00
    void FillCircleHelper<SectorHLineHelper<TransparentHelper>>::DrawUnclipped(SharedArray<unsigned int>& sharedArray,
                                                                               unsigned int arg2, int arg3) {
        uint32_t uVar2;
        uint32_t* puVar3;
        unsigned int* puVar4;
        unsigned int uVar5;
        int iVar6;
        unsigned long arg1;
        unsigned long uVar7;
        int local_44;
        unsigned long local_38;

        CircleComputer local_78(*(int*)(this + 44), 0);
        local_78.Advance();
        int iVar1 = *(int*)(this + 40) + local_78.field_32;
        if (iVar1 < arg3) {
            do {
                local_38 = (unsigned long)*(unsigned int*)(this + 36);
                uVar5 = local_78.field_28 * 2 + 1;
                if (0 < (int)uVar5) {
                    uVar7 = (unsigned long)uVar5;
                    local_38 = (unsigned long)(*(unsigned int*)(this + 36) + iVar1 * arg2);
                    iVar6 = -local_78.field_28;
                    iVar1 = local_78.field_32;
                    local_44 = local_78.field_32;
                    do {
                        if (this[32] ==
                            (FillCircleHelper<SectorHLineHelper<TransparentHelper>>)(*(int*)(this + 20) * iVar1 <
                                                                                         *(int*)(this + 28) * iVar6 &&
                                                                                     *(int*)(this + 24) * iVar6 <=
                                                                                         *(int*)(this + 16) * iVar1)) {
                            arg1 = (unsigned long)((int)local_38 + iVar6);
                            puVar4 = &sharedArray[arg1];
                            if (*puVar4 == 0) {
                                uVar2 = *(uint32_t*)this;
                            } else {
                                uVar2 = BlendPixel(*(unsigned int*)(this + 4), *(unsigned int*)(this + 8),
                                                   *(unsigned int*)(this + 12), *puVar4);
                            }
                            puVar3 = &sharedArray[arg1];
                            *puVar3 = uVar2;
                            iVar1 = local_44;
                        }
                        iVar6 = iVar6 + 1;
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                local_78.Advance();
                iVar1 = *(int*)(this + 40) + local_78.field_32;
            } while (iVar1 < arg3);
        }
    }

    // 0x100337290
    pix8multi::pix8multi(Array<Pix8>&& pix8s) : Array<Pix8>(pix8s) {}

    // 0x100337390
    pix32multi::pix32multi(Array<Pix32>&& pix32s) : Array<Pix32>(pix32s) {}

    // 0x100337480
    pix32multi::~pix32multi() {}

} // namespace jag::oldscape::graphics

namespace jag {
    // 0x100336050
    shared_ptr_if_array<signed char[]>::type make_shared<signed char[]>(unsigned long arg1) {
        void* arg1_00;
        unsigned long uVar1;
        schar* local_30[2];

        unsigned long local_38 = arg1;
        if ((arg1 == 0) || (arg1_00 = (void*)aligned_alloc(arg1 + 23, 8), arg1_00 == nullptr)) {
            return shared_ptr_if_array<signed char[]>::type();
        }
        local_30[0] = (schar*)((long)arg1_00 + 16);
        if (local_38 != 0) {
            uVar1 = 0;
            do {
                placement_new<signed char>(local_30[0] + uVar1);
                uVar1 = uVar1 + 1;
            } while (uVar1 < local_38);
        }
        auto fastPool = placement_new<ref_counter_shared_trivial<signed char>, unsigned long&, signed char*&>(
            arg1_00, &local_38, local_30);
        new (&result) eastl::hashtable_iterator(fastPool, (unsigned long)local_30[0]);
        return result;
    }

    // 0x100336100
    signed char* placement_new<signed char>(void* arg1) {
        *(uint8_t*)arg1 = 0;
        return arg1;
    }

    // 0x100336110
    ref_counter_shared_trivial<signed char>*
    placement_new<ref_counter_shared_trivial<signed char>, unsigned long&, signed char*&>(void* arg1,
                                                                                          unsigned long& arg2,
                                                                                          signed char*& arg3) {
        new (arg1) ref_counter_shared_trivial<signed char>(arg2, arg3);
        return arg1;
    }

    // 0x100336140
    ref_counter_shared_trivial<signed char>::ref_counter_shared_trivial(unsigned long arg1, signed char* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7d60 + 16;
    }

    // 0x100336ca0
    shared_ptr_if_array<Array<unsigned char>[]>::type make_shared<Array<unsigned char>[]>(unsigned long arg1) {
        void* arg1_00;
        unsigned long uVar1;
        long lVar2;
        Array<unsigned char>* local_38[2];

        unsigned long local_40 = arg1;
        if ((arg1 == 0) || (arg1_00 = (void*)aligned_alloc(arg1 * 24 + 32, 8), arg1_00 == nullptr)) {
            return shared_ptr_if_array<Array<unsigned char>[]>::type();
        }
        local_38[0] = (Array<unsigned char>*)((long)arg1_00 + 32);
        if (local_40 != 0) {
            lVar2 = 0;
            uVar1 = 0;
            do {
                placement_new<Array<unsigned char>>(local_38[0] + lVar2);
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 24;
            } while (uVar1 < local_40);
        }
        auto fastPool = placement_new<ref_counter_shared<Array<unsigned char>>, unsigned long&, Array<unsigned char>*&>(
            arg1_00, &local_40, local_38);
        new (&result) eastl::hashtable_iterator(fastPool, (unsigned long)local_38[0]);
        return result;
    }

    // 0x100336d50
    Array<unsigned char>* placement_new<Array<unsigned char>>(void* arg1) {
        new (arg1) Array<unsigned char>();
        return arg1;
    }

    // 0x100336d70
    ref_counter_shared<Array<unsigned char>>*
    placement_new<ref_counter_shared<Array<unsigned char>>, unsigned long&, Array<unsigned char>*&>(
        void* arg1, unsigned long& arg2, Array<unsigned char>*& arg3) {
        new (arg1) ref_counter_shared<Array<unsigned char>>(arg2, arg3);
        return arg1;
    }

    // 0x100336da0
    ref_counter_shared<Array<unsigned char>>::ref_counter_shared(unsigned long arg1, Array<unsigned char>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7418 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<unsigned char>**)(this + 24) = arg2;
    }

    // 0x100336de0
    void ref_counter_shared<Array<unsigned char>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<unsigned char>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100336ed0
    oldscape::jstring::PixfontGeneric*
    placement_new<oldscape::jstring::PixfontGeneric, Array<signed char>, Array<int>, Array<int>, Array<int>, Array<int>,
                  SharedArray<unsigned int>, SharedArray<Array<unsigned char>>>(
        void* arg1, Array<signed char>&& arg2, Array<int>&& arg3, Array<int>&& arg4, Array<int>&& arg5,
        Array<int>&& arg6, SharedArray<unsigned int>&& sharedArray1, SharedArray<Array<unsigned char>>&& sharedArray2) {
        new (arg1) oldscape::jstring::PixfontGeneric(arg2, arg3, arg4, arg5, arg6, sharedArray1, sharedArray2);
        return arg1;
    }

    // 0x100336f00
    ref_counter_shared<oldscape::jstring::PixfontGeneric>*
    placement_new<ref_counter_shared<oldscape::jstring::PixfontGeneric>, int, oldscape::jstring::PixfontGeneric*&>(
        void* arg1, int&& arg2, oldscape::jstring::PixfontGeneric*& arg3) {
        new (arg1) ref_counter_shared<oldscape::jstring::PixfontGeneric>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100336f30
    ref_counter_shared<oldscape::jstring::PixfontGeneric>::ref_counter_shared(
        unsigned long arg1, oldscape::jstring::PixfontGeneric* pixfontGeneric)
        : ref_counter_base() {}

    // 0x100336f70
    void ref_counter_shared<oldscape::jstring::PixfontGeneric>::DeleteData() {
        ref_counter_shared<oldscape::jstring::PixfontGeneric> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((PixfontGeneric*)((long)&(this[3]._vptr)->_dtor + lVar2))->~PixfontGeneric();
                    prVar1 = (ref_counter_shared<oldscape::jstring::PixfontGeneric> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 1192;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1003375e0
    oldscape::graphics::animation::OldscapeAnimKey*
    placement_new<oldscape::graphics::animation::OldscapeAnimKey>(void* arg1) {
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        new (arg1) oldscape::graphics::animation::OldscapeAnimKey();
        return arg1;
    }

    // 0x100337610
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>*
    placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>, int,
                  oldscape::graphics::animation::OldscapeAnimKey*&>(
        void* arg1, int&& arg2, oldscape::graphics::animation::OldscapeAnimKey*& arg3) {
        new (arg1) ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class DeferredGroundGridHighlight {
    public:
        // virtual methods in vtable order
        virtual void Render(world& world, NXTWorldRenderer* nxtWorldRenderer,
                            ModelLitRenderer<NXTPix3D>* modelLitRenderer, int arg4, int arg5, int arg6, int arg7,
                            int arg8);
        virtual ~DeferredGroundGridHighlight();
        DeferredGroundGridHighlight(int arg1, GridRect gridRect, const EntityHighlight& entityHighlight);

    private:
        int field_8;
        uint8_t _unknown_12[4];
        int field_16;
        uint8_t _unknown_20[4];
        int field_24;
        uint8_t _unknown_28[4];
        EntityHighlight* field_32;
    };

    class DeferredHighlight {
    public:
        // virtual methods in vtable order
        virtual void Render(world& arg1, NXTWorldRenderer* arg2, ModelLitRenderer<NXTPix3D>* arg3, int arg4, int arg5,
                            int arg6, int arg7, int arg8);
        virtual ~DeferredHighlight();
        DeferredHighlight();
    };

    class DeferredModelHighlight {
    public:
        // virtual methods in vtable order
        virtual void Render(world& world, NXTWorldRenderer* nxtWorldRenderer,
                            ModelLitRenderer<NXTPix3D>* modelLitRenderer, int arg4, int arg5, int arg6, int arg7,
                            int arg8);
        virtual ~DeferredModelHighlight();
        DeferredModelHighlight(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, long long arg6,
                               const EntityHighlight& entityHighlight);

    private:
        ModelSource* field_8;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        long long field_32;
        EntityHighlight* field_40;
    };

    // 0x1003341d0
    DeferredModelHighlight::DeferredModelHighlight(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5,
                                                   long long arg6, const EntityHighlight& entityHighlight)
        : DeferredHighlight(), field_8(modelSource), field_16(arg2), field_20(arg3), field_24(arg4), field_28(arg5),
          field_32(arg6), field_40(entityHighlight) {}

    // 0x100334240
    DeferredHighlight::DeferredHighlight() {}

    // 0x1003348e0
    DeferredGroundGridHighlight::DeferredGroundGridHighlight(int arg1, GridRect gridRect,
                                                             const EntityHighlight& entityHighlight)
        : DeferredHighlight() {
        uint32_t in_register_00000014;
        EntityHighlight* in_R8;

        *(unsigned long*)&field_12 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg1);
        *(EntityHighlight**)&field_20 = entityHighlight;
        field_32 = in_R8;
    }

    // 0x100334aa0
    DeferredGroundFineHighlight::DeferredGroundFineHighlight(int arg1, int arg2, int arg3, GridRect gridRect,
                                                             const EntityHighlight& entityHighlight)
        : DeferredHighlight(), field_12(arg1), field_16(arg2) {
        uint32_t in_register_00000084;

        field_20 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg3);
        *(EntityHighlight**)&field_28 = entityHighlight;
        field_40 = gridRect.field_0;
        field_44 = gridRect.field_4;
    }

    // 0x100334e70
    DepthBiasComputer::Node::~Node() {}

    // 0x1003351b0
    DepthBiasComputer::Node::Node(DepthBiasComputer::Node&& node)
        : eastl::vector<DepthBiasComputer::Link>(node), field_40(node.field_40), field_32(node.field_32) {}

    // 0x1003352a0
    DepthBiasComputer::Node::Node() : eastl::vector<DepthBiasComputer::Link>(), field_32(0) {}

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x100334c50
    Vector3T<long long>::Vector3T<int>(const Vector3T<int>& vector3) {
        int* piVar1 = (int*)vector3.SSOBeginPtr();
        *(long*)this = (long)*piVar1;
        piVar1 = (int*)vector3.y();
        *(long*)(this + 8) = (long)*piVar1;
        piVar1 = (int*)vector3.second();
        *(long*)(this + 16) = (long)*piVar1;
    }

} // namespace jag::math
