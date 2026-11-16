// libs/oldscape/jagex3/graphics/NXTPix2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics {
    template <
        typename...> // 4 instantiations, e.g. <BasicHLineHelper<OpaqueHelper> >, <BasicHLineHelper<TransparentHelper> >, <SectorHLineHelper<OpaqueHelper> >
    class DrawCircleHelper {
    public:
        void Draw(SharedArray<unsigned int>& sharedArray, unsigned int arg2, int arg3, int arg4, int arg5, int arg6);
    };

    class NXTPix2D {
    public:
        // virtual methods in vtable order
        virtual void PrepareRender();
        virtual void Cls();
        virtual void ClearRect(int arg1, int arg2, int arg3, int arg4);
        virtual void FillRectTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6);
        virtual void FillRect(int arg1, int arg2, int arg3, int arg4, unsigned int arg5);
        virtual void FillRectVGradTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6,
                                        unsigned int arg7, unsigned int arg8);
        virtual void FillRect2Colour(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6,
                                     Array<unsigned char>& arg7, int arg8, bool arg9);
        virtual void HLine(int arg1, int arg2, int arg3, unsigned int arg4);
        virtual void HLineTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5);
        virtual void VLine(int arg1, int arg2, int arg3, unsigned int arg4);
        virtual void VLineTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5);
        virtual void Line(int arg1, int arg2, int arg3, int arg4, unsigned int arg5);
        virtual void LineTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6);
        virtual void FillCircle(int arg1, int arg2, int arg3, unsigned int arg4);
        virtual void FillCircleTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5);
        virtual void DrawCircle(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5);
        virtual void DrawCircleTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5,
                                     unsigned int arg6);
        virtual void FillSector(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6);
        virtual void FillSectorTrans(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                                     unsigned int arg7);
        virtual void DrawCircularArc(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                                     unsigned int arg7);
        virtual void DrawCircularArcTrans(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                                          unsigned int arg7, unsigned int arg8);
        virtual void QuickPlotSprite(const Pix32& pix32, int arg2, int arg3);
        virtual void PlotSprite(const Pix32& pix32, int arg2, int arg3);
        virtual void PlotSprite(const Pix8& pix8, int arg2, int arg3);
        virtual void XPlotSpriteARGB(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                     int arg8, SpriteFlip spriteFlip);
        virtual void AddPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4);
        virtual void ScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5);
        virtual void ScalePlotSprite(const Pix8& pix8, int arg2, int arg3, int arg4, int arg5);
        virtual void LitPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, unsigned int arg5);
        virtual void TransPlotSprite(const Pix32& pix32, int arg2, int arg3, unsigned int arg4);
        virtual void TransScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5,
                                          unsigned int arg6);
        virtual void ScanlinePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                        const Array<int>& arg8, const Array<int>& arg9);
        virtual void ScanlineRotatePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6,
                                              int arg7, int arg8, int arg9, const Array<int>& arg10,
                                              const Array<int>& arg11);
        virtual void RotateTransPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6,
                                           int arg7, double arg8, int arg9);
        virtual void RecolourPlotSprite(const Pix32& pix32, int arg2, int arg3, unsigned int arg4);
        virtual void PixelPerfectRotateScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5,
                                                       int arg6, int arg7);
        virtual void AntialiasedShrinkPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5);
        NXTPix2D* operator=(NXTPix2D&& nxtPix2D);
        NXTPix2D(int arg1, int arg2);
        ~NXTPix2D();
        void FillRect_Inner(int arg1, int arg2, int arg3, int arg4, unsigned int arg5);
        void PlotQuick(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2, int arg3,
                       int arg4, int arg5, int arg6, int arg7, int arg8);
        void PlotSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                        int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
        void PlotPal(SharedArray<unsigned int>& sharedArray1, const Array<unsigned char>& arg2,
                     const SharedArray<unsigned int>& sharedArray2, int arg4, int arg5, int arg6, int arg7, int arg8,
                     int arg9);
        void PlotScale(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2, int arg3,
                       int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12);
        void PlotScale(SharedArray<unsigned int>& sharedArray1, const Array<unsigned char>& arg2,
                       const SharedArray<unsigned int>& sharedArray2, int arg4, int arg5, int arg6, int arg7, int arg8,
                       int arg9, int arg10, int arg11, int arg12);
        void AddSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2, int arg3,
                       int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10);
        void AddSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2, int arg3,
                       int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11);
        void LitSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2, int arg3,
                       int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, unsigned int arg10,
                       unsigned int arg11);
        void TranSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                        int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, unsigned int arg10);
        void TranScale(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2, int arg3,
                       int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                       unsigned int arg13);
        void RecolSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                         int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                         unsigned int arg12);
        NXTPix2D(SharedArray<unsigned int>& sharedArray, int arg2, int arg3);

    private:
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        unsigned int field_24;
        unsigned int field_28;
        uint8_t _unknown_32[8];
    };

    template <typename...> // 2 instantiations, e.g. <OpaqueHelper>, <TransparentHelper>
    class SectorHLineHelper {
    public:
        void SetDirections(int arg1, int arg2, int arg3);
        double ANGLE_TO_RADIANS(int arg1);
    };

    template <typename...> // 2 instantiations, e.g. <XPlot_Normal>, <XPlot_NormalAlpha>
    class XPlotBlender {
    public:
        void XPlot(const XPlotParams& xPlotParams);
        XPlotBlender<int>(int arg1);
    };

    class XPlotParams {
    public:
        XPlotParams(unsigned int* arg1, unsigned int arg2, int arg3, const unsigned int* arg4, unsigned int arg5,
                    int arg6, int arg7, int arg8, int arg9, SpriteFlip spriteFlip);

    private:
        int field_0;
        int field_4;
        uint32_t field_8;
        int field_12;
        int field_16;
        uint32_t field_20;
        unsigned int* field_24;
        unsigned int field_32;
        int field_36;
        unsigned int* field_40;
        unsigned int field_48;
        uint8_t _unknown_52[4];
    };

    // 0x100069c70
    NXTPix2D* NXTPix2D::operator=(NXTPix2D&& nxtPix2D) {
        *this = nxtPix2D;
        return this;
    }

    // 0x100217710
    NXTPix2D::NXTPix2D(int arg1, int arg2) : Pix2D(arg1, arg2) {}

    // 0x100217950
    NXTPix2D::~NXTPix2D() {}

    // 0x100315e50
    void DrawCircleHelper<BasicHLineHelper<OpaqueHelper>>::Draw(SharedArray<unsigned int>& sharedArray,
                                                                unsigned int arg2, int arg3, int arg4, int arg5,
                                                                int arg6) {
        unsigned int uVar1;
        uint32_t uVar2;
        uint32_t* puVar6;
        uint32_t in_register_00000034;
        int iVar7;
        long lVar8;
        unsigned long uVar9;
        int in_stack_00000008;
        CircleComputer local_b8;
        CircleComputer local_90;
        unsigned long local_68;
        int local_60;
        int local_5c;
        unsigned long local_58;
        unsigned long local_50;
        unsigned long local_48;
        int local_34;

        SharedArray<unsigned int> sharedArray =
            (SharedArray<unsigned int>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        int iVar5 = *(int*)(sharedArray + 8);
        int iVar4 = *(int*)(sharedArray + 16);
        int iVar3 = iVar5 - iVar4;
        if ((iVar3 < in_stack_00000008) && (iVar7 = iVar4 + iVar5 + 1, arg5 <= iVar7)) {
            if (in_stack_00000008 <= iVar5 + iVar4) {
                iVar7 = in_stack_00000008;
            }
            iVar5 = arg5 - iVar3;
            if (arg5 - iVar3 == 0 || arg5 < iVar3) {
                iVar5 = 0;
            }
            local_90 = CircleComputer(iVar4, iVar5);
            local_90.Advance();
            uVar1 = *(unsigned int*)(sharedArray + 8);
            iVar5 = *(int*)(sharedArray + 12);
            iVar4 = iVar5 + uVar1;
            local_58 = (unsigned long)(unsigned int)local_90.field_32;
            iVar3 = local_90.field_32 + uVar1;
            local_60 = iVar7;
            if (arg5 <= iVar4) {
                local_5c = iVar4 + 1;
                if (iVar7 <= iVar4) {
                    local_5c = iVar7;
                }
                iVar7 = arg5 - (uVar1 - iVar5);
                iVar4 = 0;
                if (iVar7 != 0 && (int)(uVar1 - iVar5) <= arg5) {
                    iVar4 = iVar7;
                }
                local_48 = (unsigned long)uVar1;
                local_b8 = CircleComputer(iVar5, iVar4);
                local_b8.Advance();
                local_68 = (unsigned long)*(unsigned int*)(sharedArray + 8);
                local_50 = (unsigned long)(unsigned int)local_b8.field_32;
                local_34 = local_b8.field_32 + *(unsigned int*)(sharedArray + 8);
                if (iVar3 < local_34) {
                    local_58 = (unsigned long)(unsigned int)(((int)local_58 + (int)local_48) * arg3);
                    do {
                        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar3);
                        iVar5 = *(int*)(sharedArray + 4);
                        iVar4 = iVar5 - local_90.field_28;
                        if (iVar5 - local_90.field_28 < arg4) {
                            iVar4 = arg4;
                        }
                        iVar3 = local_90.field_28 + iVar5 + 1;
                        if (arg6 <= local_90.field_28 + iVar5) {
                            iVar3 = arg6;
                        }
                        if (iVar3 - iVar4 != 0 && iVar4 <= iVar3) {
                            lVar8 = -(unsigned long)(unsigned int)(iVar3 - iVar4);
                            iVar4 = iVar4 + (int)local_58;
                            do {
                                uVar2 = *(uint32_t*)sharedArray;
                                puVar6 = &sharedArray[(long)iVar4];
                                *puVar6 = uVar2;
                                iVar4 = iVar4 + 1;
                                lVar8 = lVar8 + 1;
                            } while (lVar8 != 0);
                        }
                        local_90.Advance();
                        iVar3 = (int)local_48 + 1;
                        local_58 = (unsigned long)(unsigned int)((int)local_58 + arg3);
                    } while (iVar3 < local_34);
                }
                if (local_34 < local_5c) {
                    local_50 = (unsigned long)(unsigned int)(((int)local_50 + (int)local_68) * arg3);
                    do {
                        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar3);
                        iVar5 = *(int*)(sharedArray + 4) - local_b8.field_28;
                        if (arg4 <= iVar5) {
                            iVar4 = *(int*)(sharedArray + 4) - local_90.field_28;
                            if (iVar4 < arg4) {
                                iVar4 = arg4;
                            }
                            if (arg6 < iVar5) {
                                iVar5 = arg6;
                            }
                            if (iVar5 - iVar4 != 0 && iVar4 <= iVar5) {
                                lVar8 = -(unsigned long)(unsigned int)(iVar5 - iVar4);
                                iVar4 = iVar4 + (int)local_50;
                                do {
                                    uVar2 = *(uint32_t*)sharedArray;
                                    puVar6 = &sharedArray[(long)iVar4];
                                    *puVar6 = uVar2;
                                    iVar4 = iVar4 + 1;
                                    lVar8 = lVar8 + 1;
                                } while (lVar8 != 0);
                            }
                        }
                        iVar5 = *(int*)(sharedArray + 4) + local_b8.field_28 + 1;
                        if (iVar5 < arg6) {
                            iVar4 = *(int*)(sharedArray + 4) + local_90.field_28;
                            if (iVar5 < arg4) {
                                iVar5 = arg4;
                            }
                            iVar3 = iVar4 + 1;
                            if (arg6 <= iVar4) {
                                iVar3 = arg6;
                            }
                            if (iVar3 - iVar5 != 0 && iVar5 <= iVar3) {
                                uVar9 = (unsigned long)(unsigned int)(iVar3 - iVar5);
                                iVar5 = iVar5 + (int)local_50;
                                do {
                                    uVar2 = *(uint32_t*)sharedArray;
                                    puVar6 = &sharedArray[(long)iVar5];
                                    *puVar6 = uVar2;
                                    iVar5 = iVar5 + 1;
                                    uVar9 = uVar9 - 1;
                                } while (uVar9 != 0);
                            }
                        }
                        local_90.Advance();
                        iVar3 = (int)local_48 + 1;
                        local_b8.Advance();
                        local_34 = local_34 + 1;
                        local_50 = (unsigned long)(unsigned int)((int)local_50 + arg3);
                    } while (local_34 < local_5c);
                }
            }
            if (iVar3 < local_60) {
                local_34 = iVar3 * arg3;
                do {
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar3);
                    iVar5 = *(int*)(sharedArray + 4);
                    iVar4 = iVar5 - local_90.field_28;
                    if (iVar5 - local_90.field_28 < arg4) {
                        iVar4 = arg4;
                    }
                    iVar3 = local_90.field_28 + iVar5 + 1;
                    if (arg6 <= local_90.field_28 + iVar5) {
                        iVar3 = arg6;
                    }
                    if (iVar3 - iVar4 != 0 && iVar4 <= iVar3) {
                        lVar8 = -(unsigned long)(unsigned int)(iVar3 - iVar4);
                        iVar4 = iVar4 + local_34;
                        do {
                            uVar2 = *(uint32_t*)sharedArray;
                            puVar6 = &sharedArray[(long)iVar4];
                            *puVar6 = uVar2;
                            iVar4 = iVar4 + 1;
                            lVar8 = lVar8 + 1;
                        } while (lVar8 != 0);
                    }
                    local_90.Advance();
                    iVar3 = (int)local_48 + 1;
                    local_34 = local_34 + arg3;
                } while (iVar3 != local_60);
            }
        }
    }

    // 0x100316290
    void DrawCircleHelper<BasicHLineHelper<TransparentHelper>>::Draw(SharedArray<unsigned int>& sharedArray,
                                                                     unsigned int arg2, int arg3, int arg4, int arg5,
                                                                     int arg6) {
        uint32_t uVar3;
        uint32_t* puVar4;
        unsigned int* puVar5;
        uint32_t in_register_00000034;
        long lVar7;
        unsigned long uVar8;
        int iVar9;
        int in_stack_00000008;
        CircleComputer local_b8;
        CircleComputer local_90;
        unsigned long local_68;
        int local_60;
        int local_5c;
        unsigned long local_58;
        unsigned long local_50;
        int local_38;
        int local_34;

        SharedArray<unsigned int> sharedArray =
            (SharedArray<unsigned int>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        int iVar2 = *(int*)(sharedArray + 20);
        int iVar6 = *(int*)(sharedArray + 28);
        int iVar1 = iVar2 - iVar6;
        if ((iVar1 < in_stack_00000008) && (iVar9 = iVar6 + iVar2 + 1, arg5 <= iVar9)) {
            if (in_stack_00000008 <= iVar2 + iVar6) {
                iVar9 = in_stack_00000008;
            }
            iVar2 = arg5 - iVar1;
            if (arg5 - iVar1 == 0 || arg5 < iVar1) {
                iVar2 = 0;
            }
            local_90 = CircleComputer(iVar6, iVar2);
            local_90.Advance();
            iVar6 = *(int*)(sharedArray + 20);
            iVar1 = *(int*)(sharedArray + 24);
            iVar2 = iVar1 + iVar6;
            local_58 = (unsigned long)(unsigned int)local_90.field_32;
            local_38 = local_90.field_32 + iVar6;
            local_60 = iVar9;
            if (arg5 <= iVar2) {
                local_5c = iVar2 + 1;
                if (iVar9 <= iVar2) {
                    local_5c = iVar9;
                }
                iVar9 = arg5 - (iVar6 - iVar1);
                iVar2 = 0;
                if (iVar9 != 0 && iVar6 - iVar1 <= arg5) {
                    iVar2 = iVar9;
                }
                local_b8 = CircleComputer(iVar1, iVar2);
                local_b8.Advance();
                local_68 = (unsigned long)*(unsigned int*)(sharedArray + 20);
                local_50 = (unsigned long)(unsigned int)local_b8.field_32;
                local_34 = local_b8.field_32 + *(unsigned int*)(sharedArray + 20);
                if (local_38 < local_34) {
                    local_58 = (unsigned long)(unsigned int)(((int)local_58 + iVar6) * arg3);
                    do {
                        iVar2 = *(int*)(sharedArray + 16);
                        iVar6 = iVar2 - local_90.field_28;
                        if (iVar2 - local_90.field_28 < arg4) {
                            iVar6 = arg4;
                        }
                        iVar1 = local_90.field_28 + iVar2 + 1;
                        if (arg6 <= local_90.field_28 + iVar2) {
                            iVar1 = arg6;
                        }
                        if (iVar1 - iVar6 != 0 && iVar6 <= iVar1) {
                            lVar7 = -(unsigned long)(unsigned int)(iVar1 - iVar6);
                            iVar6 = iVar6 + (int)local_58;
                            do {
                                puVar5 = &sharedArray[(long)iVar6];
                                if (*puVar5 == 0) {
                                    uVar3 = *(uint32_t*)sharedArray;
                                } else {
                                    uVar3 =
                                        BlendPixel(*(unsigned int*)(sharedArray + 4), *(unsigned int*)(sharedArray + 8),
                                                   *(unsigned int*)(sharedArray + 12), *puVar5);
                                }
                                puVar4 = &sharedArray[(long)iVar6];
                                *puVar4 = uVar3;
                                iVar6 = iVar6 + 1;
                                lVar7 = lVar7 + 1;
                            } while (lVar7 != 0);
                        }
                        local_90.Advance();
                        local_38 = local_38 + 1;
                        local_58 = (unsigned long)(unsigned int)((int)local_58 + arg3);
                    } while (local_38 < local_34);
                }
                if (local_34 < local_5c) {
                    local_50 = (unsigned long)(unsigned int)(((int)local_50 + (int)local_68) * arg3);
                    do {
                        iVar2 = *(int*)(sharedArray + 16) - local_b8.field_28;
                        if (arg4 <= iVar2) {
                            iVar6 = *(int*)(sharedArray + 16) - local_90.field_28;
                            if (iVar6 < arg4) {
                                iVar6 = arg4;
                            }
                            if (arg6 < iVar2) {
                                iVar2 = arg6;
                            }
                            if (iVar2 - iVar6 != 0 && iVar6 <= iVar2) {
                                lVar7 = -(unsigned long)(unsigned int)(iVar2 - iVar6);
                                iVar6 = iVar6 + (int)local_50;
                                do {
                                    puVar5 = &sharedArray[(long)iVar6];
                                    if (*puVar5 == 0) {
                                        uVar3 = *(uint32_t*)sharedArray;
                                    } else {
                                        uVar3 = BlendPixel(*(unsigned int*)(sharedArray + 4),
                                                           *(unsigned int*)(sharedArray + 8),
                                                           *(unsigned int*)(sharedArray + 12), *puVar5);
                                    }
                                    puVar4 = &sharedArray[(long)iVar6];
                                    *puVar4 = uVar3;
                                    iVar6 = iVar6 + 1;
                                    lVar7 = lVar7 + 1;
                                } while (lVar7 != 0);
                            }
                        }
                        iVar2 = *(int*)(sharedArray + 16) + local_b8.field_28 + 1;
                        if (iVar2 < arg6) {
                            iVar6 = *(int*)(sharedArray + 16) + local_90.field_28;
                            if (iVar2 < arg4) {
                                iVar2 = arg4;
                            }
                            iVar1 = iVar6 + 1;
                            if (arg6 <= iVar6) {
                                iVar1 = arg6;
                            }
                            if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
                                uVar8 = (unsigned long)(unsigned int)(iVar1 - iVar2);
                                iVar2 = iVar2 + (int)local_50;
                                do {
                                    puVar5 = &sharedArray[(long)iVar2];
                                    if (*puVar5 == 0) {
                                        uVar3 = *(uint32_t*)sharedArray;
                                    } else {
                                        uVar3 = BlendPixel(*(unsigned int*)(sharedArray + 4),
                                                           *(unsigned int*)(sharedArray + 8),
                                                           *(unsigned int*)(sharedArray + 12), *puVar5);
                                    }
                                    puVar4 = &sharedArray[(long)iVar2];
                                    *puVar4 = uVar3;
                                    iVar2 = iVar2 + 1;
                                    uVar8 = uVar8 - 1;
                                } while (uVar8 != 0);
                            }
                        }
                        local_90.Advance();
                        local_38 = local_38 + 1;
                        local_b8.Advance();
                        local_34 = local_34 + 1;
                        local_50 = (unsigned long)(unsigned int)((int)local_50 + arg3);
                    } while (local_34 < local_5c);
                }
            }
            if (local_38 < local_60) {
                local_34 = local_38 * arg3;
                do {
                    iVar2 = *(int*)(sharedArray + 16);
                    iVar6 = iVar2 - local_90.field_28;
                    if (iVar2 - local_90.field_28 < arg4) {
                        iVar6 = arg4;
                    }
                    iVar1 = local_90.field_28 + iVar2 + 1;
                    if (arg6 <= local_90.field_28 + iVar2) {
                        iVar1 = arg6;
                    }
                    if (iVar1 - iVar6 != 0 && iVar6 <= iVar1) {
                        lVar7 = -(unsigned long)(unsigned int)(iVar1 - iVar6);
                        iVar6 = iVar6 + local_34;
                        do {
                            puVar5 = &sharedArray[(long)iVar6];
                            if (*puVar5 == 0) {
                                uVar3 = *(uint32_t*)sharedArray;
                            } else {
                                uVar3 = BlendPixel(*(unsigned int*)(sharedArray + 4), *(unsigned int*)(sharedArray + 8),
                                                   *(unsigned int*)(sharedArray + 12), *puVar5);
                            }
                            puVar4 = &sharedArray[(long)iVar6];
                            *puVar4 = uVar3;
                            iVar6 = iVar6 + 1;
                            lVar7 = lVar7 + 1;
                        } while (lVar7 != 0);
                    }
                    local_90.Advance();
                    local_38 = local_38 + 1;
                    local_34 = local_34 + arg3;
                } while (local_38 != local_60);
            }
        }
    }

    // 0x1003167a0
    void SectorHLineHelper<OpaqueHelper>::SetDirections(int arg1, int arg2, int arg3) {
        SectorHLineHelper<OpaqueHelper> SVar3;
        double in_XMM1_Qa;

        unsigned int uVar2 = arg2 & 65535;
        unsigned int arg1_00 = arg3 & 65535;
        int iVar1 = arg1_00 - uVar2;
        if (arg1_00 < uVar2 || iVar1 == 0) {
            SVar3 = (SectorHLineHelper<OpaqueHelper>)(iVar1 + 65536U < 32768);
        } else {
            SVar3 = (SectorHLineHelper<OpaqueHelper>)(iVar1 < 32768);
        }
        this[20] = SVar3;
        unsigned int arg1_01 = uVar2;
        if (SVar3 != (SectorHLineHelper<OpaqueHelper>)0) {
            arg1_01 = arg1_00;
            arg1_00 = uVar2;
        }
        uint64_t uVar4 = ANGLE_TO_RADIANS(arg1_00);
        uint64_t uVar5 = ANGLE_TO_RADIANS(arg1_01);
        double dVar6 = (double)___sincos_stret(uVar4);
        double dVar7 = (double)arg1 + 0.5;
        *(int*)(this + 4) = (int)(dVar6 * dVar7);
        in_XMM1_Qa = in_XMM1_Qa * dVar7;
        *(int*)(this + 12) = -(int)in_XMM1_Qa;
        dVar6 = (double)___sincos_stret(uVar5);
        *(int*)(this + 8) = (int)(dVar6 * dVar7);
        *(int*)(this + 16) = -(int)(in_XMM1_Qa * dVar7);
    }

    // 0x100316a60
    void SectorHLineHelper<TransparentHelper>::SetDirections(int arg1, int arg2, int arg3) {
        SectorHLineHelper<TransparentHelper> SVar3;
        double in_XMM1_Qa;

        unsigned int uVar2 = arg2 & 65535;
        unsigned int arg1_00 = arg3 & 65535;
        int iVar1 = arg1_00 - uVar2;
        if (arg1_00 < uVar2 || iVar1 == 0) {
            SVar3 = (SectorHLineHelper<TransparentHelper>)(iVar1 + 65536U < 32768);
        } else {
            SVar3 = (SectorHLineHelper<TransparentHelper>)(iVar1 < 32768);
        }
        this[32] = SVar3;
        unsigned int arg1_01 = uVar2;
        if (SVar3 != (SectorHLineHelper<TransparentHelper>)0) {
            arg1_01 = arg1_00;
            arg1_00 = uVar2;
        }
        uint64_t uVar4 = ANGLE_TO_RADIANS(arg1_00);
        uint64_t uVar5 = ANGLE_TO_RADIANS(arg1_01);
        double dVar6 = (double)___sincos_stret(uVar4);
        double dVar7 = (double)arg1 + 0.5;
        *(int*)(this + 16) = (int)(dVar6 * dVar7);
        in_XMM1_Qa = in_XMM1_Qa * dVar7;
        *(int*)(this + 24) = -(int)in_XMM1_Qa;
        dVar6 = (double)___sincos_stret(uVar5);
        *(int*)(this + 20) = (int)(dVar6 * dVar7);
        *(int*)(this + 28) = -(int)(in_XMM1_Qa * dVar7);
    }

    // 0x100316bc0
    void DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>::Draw(SharedArray<unsigned int>& sharedArray,
                                                                 unsigned int arg2, int arg3, int arg4, int arg5,
                                                                 int arg6) {
        int iVar1;
        unsigned int uVar3;
        uint32_t* puVar4;
        int iVar6;
        int iVar7;
        uint32_t in_register_00000034;
        unsigned long uVar9;
        long lVar10;
        int in_stack_00000008;
        CircleComputer local_c8;
        unsigned long local_a0;
        CircleComputer local_98;
        unsigned long local_70;
        int local_60;
        int local_5c;
        unsigned long local_58;
        unsigned long local_50;
        int local_44;
        uint32_t local_34;

        SharedArray<unsigned int>* local_68 =
            (SharedArray<unsigned int>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        int iVar5 = *(int*)(sharedArray + 28);
        int iVar8 = *(int*)(sharedArray + 36);
        int iVar2 = iVar5 - iVar8;
        if ((iVar2 < in_stack_00000008) && (iVar6 = iVar8 + iVar5 + 1, arg5 <= iVar6)) {
            if (in_stack_00000008 <= iVar5 + iVar8) {
                iVar6 = in_stack_00000008;
            }
            iVar5 = arg5 - iVar2;
            if (arg5 - iVar2 == 0 || arg5 < iVar2) {
                iVar5 = 0;
            }
            local_98 = CircleComputer(iVar8, iVar5);
            local_98.Advance();
            iVar1 = local_98.field_32;
            iVar2 = *(int*)(sharedArray + 28);
            iVar7 = *(int*)(sharedArray + 32);
            iVar5 = iVar7 + iVar2;
            iVar8 = local_98.field_32 + iVar2;
            local_60 = iVar6;
            if (arg5 <= iVar5) {
                local_5c = iVar5 + 1;
                if (iVar6 <= iVar5) {
                    local_5c = iVar6;
                }
                iVar6 = arg5 - (iVar2 - iVar7);
                iVar5 = 0;
                if (iVar6 != 0 && iVar2 - iVar7 <= arg5) {
                    iVar5 = iVar6;
                }
                local_c8 = CircleComputer(iVar7, iVar5);
                local_c8.Advance();
                local_a0 = (unsigned long)*(unsigned int*)(sharedArray + 28);
                local_58 = (unsigned long)(unsigned int)local_c8.field_32;
                local_c8.field_32 = local_c8.field_32 + *(unsigned int*)(sharedArray + 28);
                local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)local_c8.field_32);
                if (iVar8 < local_c8.field_32) {
                    local_70 = (unsigned long)(unsigned int)((iVar1 + iVar2) * arg3);
                    local_44 = iVar8;
                    do {
                        iVar2 = local_98.field_32;
                        iVar5 = *(int*)(sharedArray + 24);
                        iVar8 = iVar5 - local_98.field_28;
                        if (iVar5 - local_98.field_28 < arg4) {
                            iVar8 = arg4;
                        }
                        iVar6 = local_98.field_28 + iVar5 + 1;
                        if (arg6 <= local_98.field_28 + iVar5) {
                            iVar6 = arg6;
                        }
                        if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                            iVar7 = iVar8 + (int)local_70;
                            lVar10 = -(unsigned long)(unsigned int)(iVar6 - iVar8);
                            iVar8 = iVar8 - iVar5;
                            do {
                                if (sharedArray[20] ==
                                    (SharedArray<unsigned int>)(*(int*)(sharedArray + 8) * iVar2 <
                                                                    *(int*)(sharedArray + 16) * iVar8 &&
                                                                *(int*)(sharedArray + 12) * iVar8 <=
                                                                    *(int*)(sharedArray + 4) * iVar2)) {
                                    local_34 = *(uint32_t*)sharedArray;
                                    puVar4 = (uint32_t*)(*local_68)[(long)iVar7];
                                    *puVar4 = local_34;
                                }
                                iVar7 = iVar7 + 1;
                                iVar8 = iVar8 + 1;
                                lVar10 = lVar10 + 1;
                            } while (lVar10 != 0);
                        }
                        local_98.Advance();
                        iVar8 = local_44 + 1;
                        local_70 = (unsigned long)(unsigned int)((int)local_70 + arg3);
                        local_44 = iVar8;
                    } while (iVar8 < (int)local_50);
                }
                if ((int)local_50 < local_5c) {
                    local_58 = (unsigned long)(unsigned int)(((int)local_58 + (int)local_a0) * arg3);
                    local_44 = iVar8;
                    do {
                        iVar8 = local_98.field_32;
                        iVar5 = *(int*)(sharedArray + 24);
                        iVar2 = iVar5 - local_c8.field_28;
                        if (arg4 <= iVar2) {
                            iVar6 = iVar5 - local_98.field_28;
                            if (iVar5 - local_98.field_28 < arg4) {
                                iVar6 = arg4;
                            }
                            if (arg6 < iVar2) {
                                iVar2 = arg6;
                            }
                            if (iVar2 - iVar6 != 0 && iVar6 <= iVar2) {
                                iVar7 = iVar6 + (int)local_58;
                                lVar10 = -(unsigned long)(unsigned int)(iVar2 - iVar6);
                                iVar6 = iVar6 - iVar5;
                                do {
                                    if (sharedArray[20] ==
                                        (SharedArray<unsigned int>)(*(int*)(sharedArray + 8) * iVar8 <
                                                                        *(int*)(sharedArray + 16) * iVar6 &&
                                                                    *(int*)(sharedArray + 12) * iVar6 <=
                                                                        *(int*)(sharedArray + 4) * iVar8)) {
                                        local_34 = *(uint32_t*)sharedArray;
                                        puVar4 = (uint32_t*)(*local_68)[(long)iVar7];
                                        *puVar4 = local_34;
                                    }
                                    iVar7 = iVar7 + 1;
                                    iVar6 = iVar6 + 1;
                                    lVar10 = lVar10 + 1;
                                } while (lVar10 != 0);
                            }
                        }
                        iVar2 = local_98.field_32;
                        iVar5 = *(int*)(sharedArray + 24);
                        iVar8 = iVar5 + local_c8.field_28 + 1;
                        if (iVar8 < arg6) {
                            if (iVar8 < arg4) {
                                iVar8 = arg4;
                            }
                            iVar6 = local_98.field_28 + iVar5 + 1;
                            if (arg6 <= local_98.field_28 + iVar5) {
                                iVar6 = arg6;
                            }
                            if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                                uVar9 = (unsigned long)(unsigned int)(iVar6 - iVar8);
                                iVar6 = iVar8 + (int)local_58;
                                iVar8 = iVar8 - iVar5;
                                do {
                                    if (sharedArray[20] ==
                                        (SharedArray<unsigned int>)(*(int*)(sharedArray + 8) * iVar2 <
                                                                        *(int*)(sharedArray + 16) * iVar8 &&
                                                                    *(int*)(sharedArray + 12) * iVar8 <=
                                                                        *(int*)(sharedArray + 4) * iVar2)) {
                                        local_34 = *(uint32_t*)sharedArray;
                                        puVar4 = (uint32_t*)(*local_68)[(long)iVar6];
                                        *puVar4 = local_34;
                                    }
                                    iVar6 = iVar6 + 1;
                                    iVar8 = iVar8 + 1;
                                    uVar9 = uVar9 - 1;
                                } while (uVar9 != 0);
                            }
                        }
                        local_98.Advance();
                        iVar8 = local_44 + 1;
                        local_c8.Advance();
                        iVar5 = (int)local_50 + 1;
                        local_58 = (unsigned long)(unsigned int)((int)local_58 + arg3);
                        local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)iVar5);
                        local_44 = iVar8;
                    } while (iVar5 < local_5c);
                }
            }
            if (iVar8 < local_60) {
                uVar3 = iVar8 * arg3;
                local_44 = iVar8;
                do {
                    iVar2 = local_98.field_32;
                    local_50 = (unsigned long)uVar3;
                    iVar5 = *(int*)(sharedArray + 24);
                    iVar8 = iVar5 - local_98.field_28;
                    if (iVar5 - local_98.field_28 < arg4) {
                        iVar8 = arg4;
                    }
                    iVar6 = local_98.field_28 + iVar5 + 1;
                    if (arg6 <= local_98.field_28 + iVar5) {
                        iVar6 = arg6;
                    }
                    if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                        iVar7 = iVar8 + uVar3;
                        lVar10 = -(unsigned long)(unsigned int)(iVar6 - iVar8);
                        iVar8 = iVar8 - iVar5;
                        do {
                            if (sharedArray[20] == (SharedArray<unsigned int>)(*(int*)(sharedArray + 8) * iVar2 <
                                                                                   *(int*)(sharedArray + 16) * iVar8 &&
                                                                               *(int*)(sharedArray + 12) * iVar8 <=
                                                                                   *(int*)(sharedArray + 4) * iVar2)) {
                                local_34 = *(uint32_t*)sharedArray;
                                puVar4 = (uint32_t*)(*local_68)[(long)iVar7];
                                *puVar4 = local_34;
                            }
                            iVar7 = iVar7 + 1;
                            iVar8 = iVar8 + 1;
                            lVar10 = lVar10 + 1;
                        } while (lVar10 != 0);
                    }
                    local_98.Advance();
                    local_44 = local_44 + 1;
                    uVar3 = (int)local_50 + arg3;
                } while (local_44 != local_60);
            }
        }
    }

    // 0x100317160
    void DrawCircleHelper<SectorHLineHelper<TransparentHelper>>::Draw(SharedArray<unsigned int>& sharedArray,
                                                                      unsigned int arg2, int arg3, int arg4, int arg5,
                                                                      int arg6) {
        unsigned int uVar2;
        int* piVar4;
        unsigned int* puVar5;
        int iVar6;
        uint32_t in_register_00000034;
        int iVar7;
        unsigned long uVar9;
        long lVar10;
        SharedArray<unsigned int>* pSVar11;
        int in_stack_00000008;
        CircleComputer local_d0;
        unsigned long local_a8;
        CircleComputer local_a0;
        int local_78;
        int local_74;
        unsigned long local_70;
        unsigned long local_68;
        unsigned long local_58;
        int local_4c;
        unsigned int local_34;

        SharedArray<unsigned int>* local_60 =
            (SharedArray<unsigned int>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        int iVar3 = *(int*)(sharedArray + 40);
        int iVar8 = *(int*)(sharedArray + 48);
        int iVar1 = iVar3 - iVar8;
        if ((iVar1 < in_stack_00000008) && (iVar6 = iVar8 + iVar3 + 1, arg5 <= iVar6)) {
            if (in_stack_00000008 <= iVar3 + iVar8) {
                iVar6 = in_stack_00000008;
            }
            iVar3 = arg5 - iVar1;
            if (arg5 - iVar1 == 0 || arg5 < iVar1) {
                iVar3 = 0;
            }
            local_a0 = CircleComputer(iVar8, iVar3);
            local_a0.Advance();
            pSVar11 = sharedArray;
            iVar3 = *(int*)(sharedArray + 40);
            iVar8 = *(int*)(sharedArray + 44);
            iVar1 = iVar8 + iVar3;
            local_70 = (unsigned long)(unsigned int)local_a0.field_32;
            iVar7 = local_a0.field_32 + iVar3;
            local_78 = iVar6;
            if (iVar1 < arg5) {
                if (iVar6 <= iVar7) {
                    return;
                }
            } else {
                local_74 = iVar1 + 1;
                if (iVar6 <= iVar1) {
                    local_74 = iVar6;
                }
                iVar6 = arg5 - (iVar3 - iVar8);
                iVar1 = 0;
                if (iVar6 != 0 && iVar3 - iVar8 <= arg5) {
                    iVar1 = iVar6;
                }
                local_d0 = CircleComputer(iVar8, iVar1);
                local_d0.Advance();
                local_a8 = (unsigned long)*(unsigned int*)(pSVar11 + 40);
                local_68 = (unsigned long)(unsigned int)local_d0.field_32;
                local_d0.field_32 = local_d0.field_32 + *(unsigned int*)(pSVar11 + 40);
                local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)local_d0.field_32);
                if (iVar7 < local_d0.field_32) {
                    local_70 = (unsigned long)(unsigned int)(((int)local_70 + iVar3) * arg3);
                    do {
                        iVar1 = local_a0.field_32;
                        iVar3 = *(int*)(pSVar11 + 36);
                        iVar8 = iVar3 - local_a0.field_28;
                        if (iVar3 - local_a0.field_28 < arg4) {
                            iVar8 = arg4;
                        }
                        iVar6 = local_a0.field_28 + iVar3 + 1;
                        if (arg6 <= local_a0.field_28 + iVar3) {
                            iVar6 = arg6;
                        }
                        local_4c = iVar7;
                        if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                            iVar7 = iVar8 + (int)local_70;
                            lVar10 = -(unsigned long)(unsigned int)(iVar6 - iVar8);
                            iVar8 = iVar8 - iVar3;
                            do {
                                if (pSVar11[32] == (SharedArray<unsigned int>)(*(int*)(pSVar11 + 20) * iVar1 <
                                                                                   *(int*)(pSVar11 + 28) * iVar8 &&
                                                                               *(int*)(pSVar11 + 24) * iVar8 <=
                                                                                   *(int*)(pSVar11 + 16) * iVar1)) {
                                    puVar5 = (unsigned int*)(*local_60)[(long)iVar7];
                                    if (*puVar5 == 0) {
                                        local_34 = *(unsigned int*)sharedArray;
                                    } else {
                                        local_34 = BlendPixel(*(unsigned int*)(sharedArray + 4),
                                                              *(unsigned int*)(sharedArray + 8),
                                                              *(unsigned int*)(sharedArray + 12), *puVar5);
                                    }
                                    puVar5 = (unsigned int*)(*local_60)[(long)iVar7];
                                    *puVar5 = local_34;
                                    pSVar11 = sharedArray;
                                }
                                iVar7 = iVar7 + 1;
                                iVar8 = iVar8 + 1;
                                lVar10 = lVar10 + 1;
                            } while (lVar10 != 0);
                        }
                        local_a0.Advance();
                        iVar7 = local_4c + 1;
                        local_70 = (unsigned long)(unsigned int)((int)local_70 + arg3);
                    } while (iVar7 < (int)local_58);
                }
                if ((int)local_58 < local_74) {
                    local_68 = (unsigned long)(unsigned int)(((int)local_68 + (int)local_a8) * arg3);
                    do {
                        iVar8 = local_a0.field_32;
                        iVar3 = *(int*)(pSVar11 + 36);
                        iVar1 = iVar3 - local_d0.field_28;
                        local_4c = iVar7;
                        if (arg4 <= iVar1) {
                            iVar6 = iVar3 - local_a0.field_28;
                            if (iVar3 - local_a0.field_28 < arg4) {
                                iVar6 = arg4;
                            }
                            if (arg6 < iVar1) {
                                iVar1 = arg6;
                            }
                            if (iVar1 - iVar6 != 0 && iVar6 <= iVar1) {
                                iVar7 = iVar6 + (int)local_68;
                                lVar10 = -(unsigned long)(unsigned int)(iVar1 - iVar6);
                                iVar6 = iVar6 - iVar3;
                                do {
                                    if (pSVar11[32] == (SharedArray<unsigned int>)(*(int*)(pSVar11 + 20) * iVar8 <
                                                                                       *(int*)(pSVar11 + 28) * iVar6 &&
                                                                                   *(int*)(pSVar11 + 24) * iVar6 <=
                                                                                       *(int*)(pSVar11 + 16) * iVar8)) {
                                        puVar5 = (unsigned int*)(*local_60)[(long)iVar7];
                                        if (*puVar5 == 0) {
                                            local_34 = *(unsigned int*)sharedArray;
                                        } else {
                                            local_34 = BlendPixel(*(unsigned int*)(sharedArray + 4),
                                                                  *(unsigned int*)(sharedArray + 8),
                                                                  *(unsigned int*)(sharedArray + 12), *puVar5);
                                        }
                                        puVar5 = (unsigned int*)(*local_60)[(long)iVar7];
                                        *puVar5 = local_34;
                                        pSVar11 = sharedArray;
                                    }
                                    iVar7 = iVar7 + 1;
                                    iVar6 = iVar6 + 1;
                                    lVar10 = lVar10 + 1;
                                } while (lVar10 != 0);
                            }
                        }
                        iVar3 = *(int*)(pSVar11 + 36);
                        iVar8 = iVar3 + local_d0.field_28 + 1;
                        if (iVar8 < arg6) {
                            if (iVar8 < arg4) {
                                iVar8 = arg4;
                            }
                            iVar1 = local_a0.field_28 + iVar3 + 1;
                            if (arg6 <= local_a0.field_28 + iVar3) {
                                iVar1 = arg6;
                            }
                            if (iVar1 - iVar8 != 0 && iVar8 <= iVar1) {
                                uVar9 = (unsigned long)(unsigned int)(iVar1 - iVar8);
                                iVar1 = iVar8 + (int)local_68;
                                iVar8 = iVar8 - iVar3;
                                local_34 = local_a0.field_32;
                                uVar2 = local_a0.field_32;
                                do {
                                    if (pSVar11[32] ==
                                        (SharedArray<unsigned int>)((int)(*(int*)(pSVar11 + 20) * uVar2) <
                                                                        *(int*)(pSVar11 + 28) * iVar8 &&
                                                                    *(int*)(pSVar11 + 24) * iVar8 <=
                                                                        (int)(*(int*)(pSVar11 + 16) * uVar2))) {
                                        puVar5 = (unsigned int*)(*local_60)[(long)iVar1];
                                        if (*puVar5 == 0) {
                                            iVar3 = *(int*)sharedArray;
                                        } else {
                                            iVar3 = BlendPixel(*(unsigned int*)(sharedArray + 4),
                                                               *(unsigned int*)(sharedArray + 8),
                                                               *(unsigned int*)(sharedArray + 12), *puVar5);
                                        }
                                        piVar4 = (int*)(*local_60)[(long)iVar1];
                                        *piVar4 = iVar3;
                                        pSVar11 = sharedArray;
                                        uVar2 = local_34;
                                    }
                                    iVar1 = iVar1 + 1;
                                    iVar8 = iVar8 + 1;
                                    uVar9 = uVar9 - 1;
                                } while (uVar9 != 0);
                            }
                        }
                        local_a0.Advance();
                        iVar7 = local_4c + 1;
                        local_d0.Advance();
                        iVar3 = (int)local_58 + 1;
                        local_68 = (unsigned long)(unsigned int)((int)local_68 + arg3);
                        local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar3);
                    } while (iVar3 < local_74);
                }
                if (local_78 <= iVar7) {
                    return;
                }
            }
            uVar2 = iVar7 * arg3;
            do {
                local_58 = (unsigned long)uVar2;
                iVar3 = *(int*)(pSVar11 + 36);
                iVar8 = iVar3 - local_a0.field_28;
                if (iVar3 - local_a0.field_28 < arg4) {
                    iVar8 = arg4;
                }
                iVar1 = local_a0.field_28 + iVar3 + 1;
                if (arg6 <= local_a0.field_28 + iVar3) {
                    iVar1 = arg6;
                }
                local_4c = iVar7;
                if (iVar1 - iVar8 != 0 && iVar8 <= iVar1) {
                    iVar6 = iVar8 + uVar2;
                    lVar10 = -(unsigned long)(unsigned int)(iVar1 - iVar8);
                    iVar8 = iVar8 - iVar3;
                    local_34 = local_a0.field_32;
                    uVar2 = local_a0.field_32;
                    do {
                        if (pSVar11[32] == (SharedArray<unsigned int>)((int)(*(int*)(pSVar11 + 20) * uVar2) <
                                                                           *(int*)(pSVar11 + 28) * iVar8 &&
                                                                       *(int*)(pSVar11 + 24) * iVar8 <=
                                                                           (int)(*(int*)(pSVar11 + 16) * uVar2))) {
                            puVar5 = (unsigned int*)(*local_60)[(long)iVar6];
                            if (*puVar5 == 0) {
                                iVar3 = *(int*)pSVar11;
                            } else {
                                iVar3 = BlendPixel(*(unsigned int*)(pSVar11 + 4), *(unsigned int*)(pSVar11 + 8),
                                                   *(unsigned int*)(pSVar11 + 12), *puVar5);
                            }
                            piVar4 = (int*)(*local_60)[(long)iVar6];
                            *piVar4 = iVar3;
                            pSVar11 = sharedArray;
                            uVar2 = local_34;
                        }
                        iVar6 = iVar6 + 1;
                        iVar8 = iVar8 + 1;
                        lVar10 = lVar10 + 1;
                    } while (lVar10 != 0);
                }
                local_a0.Advance();
                iVar7 = local_4c + 1;
                uVar2 = (int)local_58 + arg3;
            } while (iVar7 != local_78);
        }
    }

    // 0x100318d00
    XPlotParams::XPlotParams(unsigned int* arg1, unsigned int arg2, int arg3, const unsigned int* arg4,
                             unsigned int arg5, int arg6, int arg7, int arg8, int arg9, SpriteFlip spriteFlip) {
        XPlotParams(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, spriteFlip);
    }

    // 0x100318d40
    void XPlotBlender<XPlot_Normal>::XPlot(const XPlotParams& xPlotParams) {
        unsigned int uVar3;
        unsigned int arg2;

        unsigned int* puVar4 = xPlotParams.field_24;
        int iVar5 = xPlotParams.field_12;
    LAB_100318d60:
        unsigned int uVar1 = xPlotParams.field_48;
        unsigned int* puVar2 = xPlotParams.field_40;
        int iVar7 = xPlotParams.field_0;
        unsigned int* puVar6 = puVar4 + xPlotParams.field_36;
        do {
            uVar3 = puVar2[(uVar1 * iVar5) + (long)iVar7];
            arg2 = uVar3 >> 24;
            if (arg2 == 255) {
            LAB_100318dca:
                *puVar6 = uVar3;
            } else if (16777215 < uVar3) {
                uVar3 = ComputeCompositeRGB(uVar3, arg2);
                uVar3 = BlendPixel(uVar3, arg2, arg2 ^ 255, *puVar6);
                goto LAB_100318dca;
            }
            if (iVar7 == xPlotParams.field_4)
                break;
            iVar7 = iVar7 + xPlotParams.field_8;
            puVar6 = puVar6 + 1;
        } while (true);
        if (iVar5 == xPlotParams.field_16) {
            return;
        }
        iVar5 = iVar5 + xPlotParams.field_20;
        puVar4 = puVar4 + xPlotParams.field_32;
        goto LAB_100318d60;
    }

    // 0x100318e20
    void XPlotBlender<XPlot_NormalAlpha>::XPlot(const XPlotParams& xPlotParams) {
        unsigned int uVar1;
        unsigned int* puVar2;
        unsigned int uVar3;
        int iVar6;
        unsigned int* puVar7;

        unsigned int* puVar5 = xPlotParams.field_24;
        int iVar4 = xPlotParams.field_12;
        while (true) {
            uVar1 = xPlotParams.field_48;
            puVar2 = xPlotParams.field_40;
            iVar6 = xPlotParams.field_0;
            puVar7 = puVar5 + xPlotParams.field_36;
            while (true) {
                uVar3 = (puVar2[(uVar1 * iVar4) + (long)iVar6] >> 24) * *(int*)this;
                if (255 < uVar3) {
                    uVar3 = uVar3 >> 8;
                    uVar3 = BlendPixel(ComputeCompositeRGB(puVar2[(uVar1 * iVar4) + (long)iVar6], uVar3), uVar3,
                                       255 - uVar3, *puVar7);
                    *puVar7 = uVar3;
                }
                if (iVar6 == xPlotParams.field_4)
                    break;
                iVar6 = iVar6 + xPlotParams.field_8;
                puVar7 = puVar7 + 1;
            }
            if (iVar4 == xPlotParams.field_16)
                break;
            iVar4 = iVar4 + xPlotParams.field_20;
            puVar5 = puVar5 + xPlotParams.field_32;
        }
    }

    // 0x100327640
    NXTPix2D::NXTPix2D(SharedArray<unsigned int>& sharedArray, int arg2, int arg3) : Pix2D(sharedArray, arg2, arg3) {}

} // namespace jag::oldscape::graphics
