// libs/oldscape/jagex3/graphics/NXTPix2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics {
    template <
        typename...> // 4 instantiations, e.g. <BasicHLineHelper<OpaqueHelper> >, <BasicHLineHelper<TransparentHelper> >, <SectorHLineHelper<OpaqueHelper> >
    class DrawCircleHelper {
    public:
        void Draw(SharedArray<unsigned int>&, unsigned int, int, int, int, int);
    };

    class NXTPix2D {
    public:
        // virtual methods in vtable order
        virtual PrepareRender();
        virtual void Cls();
        virtual void ClearRect(int, int, int, int);
        virtual void FillRectTrans(int, int, int, int, unsigned int, unsigned int);
        virtual void FillRect(int, int, int, int, unsigned int);
        virtual void FillRectVGradTrans(int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int);
        virtual void FillRect2Colour(int, int, int, int, unsigned int, unsigned int,
                                     Array<unsigned char, eastl::allocator>&, int, bool);
        virtual void HLine(int, int, int, unsigned int);
        virtual void HLineTrans(int, int, int, unsigned int, unsigned int);
        virtual void VLine(int, int, int, unsigned int);
        virtual void VLineTrans(int, int, int, unsigned int, unsigned int);
        virtual void Line(int, int, int, int, unsigned int);
        virtual void LineTrans(int, int, int, int, unsigned int, unsigned int);
        virtual void FillCircle(int, int, int, unsigned int);
        virtual void FillCircleTrans(int, int, int, unsigned int, unsigned int);
        virtual void DrawCircle(int, int, int, unsigned int, unsigned int);
        virtual void DrawCircleTrans(int, int, int, unsigned int, unsigned int, unsigned int);
        virtual void FillSector(int, int, int, int, int, unsigned int);
        virtual void FillSectorTrans(int, int, int, int, int, unsigned int, unsigned int);
        virtual void DrawCircularArc(int, int, int, int, int, unsigned int, unsigned int);
        virtual void DrawCircularArcTrans(int, int, int, int, int, unsigned int, unsigned int, unsigned int);
        virtual void QuickPlotSprite(Pix32 const&, int, int);
        virtual void PlotSprite(Pix32 const&, int, int);
        virtual void PlotSprite(Pix8 const&, int, int);
        virtual void XPlotSpriteARGB(Pix32 const&, int, int, int, int, int, int, int, SpriteFlip);
        virtual void AddPlotSprite(Pix32 const&, int, int, int);
        virtual void ScalePlotSprite(Pix32 const&, int, int, int, int);
        virtual void ScalePlotSprite(Pix8 const&, int, int, int, int);
        virtual void LitPlotSprite(Pix32 const&, int, int, int, unsigned int);
        virtual void TransPlotSprite(Pix32 const&, int, int, unsigned int);
        virtual void TransScalePlotSprite(Pix32 const&, int, int, int, int, unsigned int);
        virtual void ScanlinePlotSprite(Pix32 const&, int, int, int, int, int, int, Array<int, eastl::allocator> const&,
                                        Array<int, eastl::allocator> const&);
        virtual void ScanlineRotatePlotSprite(Pix32 const&, int, int, int, int, int, int, int, int,
                                              Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&);
        virtual void RotateTransPlotSprite(Pix32 const&, int, int, int, int, int, int, double, int);
        virtual void RecolourPlotSprite(Pix32 const&, int, int, unsigned int);
        virtual void PixelPerfectRotateScalePlotSprite(Pix32 const&, int, int, int, int, int, int);
        virtual void AntialiasedShrinkPlotSprite(Pix32 const&, int, int, int, int);
        NXTPix2D* operator=(NXTPix2D&&);
        NXTPix2D(int, int);
        ~NXTPix2D();
        void FillRect_Inner(int, int, int, int, unsigned int);
        void PlotQuick(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int);
        void PlotSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int,
                        int);
        void PlotPal(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&,
                     SharedArray<unsigned int> const&, int, int, int, int, int, int);
        void PlotScale(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int,
                       int, int, int);
        void PlotScale(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&,
                       SharedArray<unsigned int> const&, int, int, int, int, int, int, int, int, int);
        void AddSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int,
                       int);
        void AddSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int,
                       int, int);
        void LitSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int,
                       unsigned int, unsigned int);
        void TranSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int,
                        unsigned int);
        void TranScale(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int,
                       int, int, int, unsigned int);
        void RecolSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int,
                         int, int, int, unsigned int);
        NXTPix2D(SharedArray<unsigned int>&, int, int);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        int field_8;         // offset 8
        int field_12;        // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        char _unknown_32[8];
    };

    template <typename...> // 2 instantiations, e.g. <OpaqueHelper>, <TransparentHelper>
    class SectorHLineHelper {
    public:
        void SetDirections(int, int, int);
        double ANGLE_TO_RADIANS(int);
    };

    template <typename...> // 2 instantiations, e.g. <XPlot_Normal>, <XPlot_NormalAlpha>
    class XPlotBlender {
    public:
        void XPlot(XPlotParams const&);
        XPlotBlender<int>(int);
    };

    class XPlotParams {
    public:
        XPlotParams(unsigned int*, unsigned int, int, unsigned int const*, unsigned int, int, int, int, int,
                    SpriteFlip);

        // data members, from how the methods use this: 56 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined8 field_24; // offset 24
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined8 field_40; // offset 40
        undefined4 field_48; // offset 48
        char _unknown_52[4];
    };

    // 0x100069c70, 32 bytes, inline, placed by class name and debug map
    // NXTPix2D::operator=(NXTPix2D&&)
    /* NXTPix2D::TEMPNAMEPLACEHOLDERVALUE(NXTPix2D&&)
    */

    NXTPix2D* NXTPix2D::operator=(NXTPix2D* param_1) {
        Pix2D::operator=((Pix2D*)this, (Pix2D*)param_1);
        return this;
    }

    // 0x100217610, 16 bytes, complete-object constructor, inline, placed by class name
    // NXTPix2D::NXTPix2D(int, int): jumps straight to the base-object constructor

    // 0x100217630, 16 bytes, complete-object destructor, inline, placed by class name
    // NXTPix2D::~NXTPix2D(): jumps straight to the base-object destructor

    // 0x100217710, 48 bytes, base-object constructor, inline, placed by class name
    // NXTPix2D::NXTPix2D(int, int)
    void NXTPix2D::NXTPix2D(int param_1, int param_2) {
        new (this) Pix2D(param_1, param_2);
        field_0 = &PTR__AutoSingleton_100efb0f8;
    }

    // 0x100217950, 16 bytes, base-object destructor, inline, placed by class name
    // NXTPix2D::~NXTPix2D()
    void NXTPix2D::~NXTPix2D() {
        ~Pix2D();
    }

    // 0x100315e50, 832 bytes, inline, placed by class header (inline)
    // DrawCircleHelper<BasicHLineHelper<OpaqueHelper> >::Draw(SharedArray<unsigned int>&, unsigned int, int, int, int, int)
    void graphics::DrawCircleHelper<BasicHLineHelper<OpaqueHelper>>::Draw(SharedArray* param_1, uint param_2,
                                                                          int param_3, int param_4, int param_5,
                                                                          int param_6) {
        uint uVar1;
        undefined4 uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        undefined4* puVar6;
        int iVar7;
        long lVar8;
        ulong uVar9;
        CircleComputer local_b8;
        CircleComputer local_90;
        ulong local_68;
        int local_60;
        int local_5c;
        ulong local_58;
        ulong local_50;
        ulong local_48;
        int local_34;

        iVar5 = *(int*)(this + 8);
        iVar4 = *(int*)(this + 16);
        iVar3 = iVar5 - iVar4;
        if ((iVar3 < param_6) && (iVar7 = iVar4 + iVar5 + 1, param_4 <= iVar7)) {
            if (param_6 <= iVar5 + iVar4) {
                iVar7 = param_6;
            }
            iVar5 = param_4 - iVar3;
            if (param_4 - iVar3 == 0 || param_4 < iVar3) {
                iVar5 = 0;
            }
            new (&local_90) CircleComputer(iVar4, iVar5);
            local_90.Advance();
            uVar1 = *(uint*)(this + 8);
            iVar5 = *(int*)(this + 12);
            iVar4 = iVar5 + uVar1;
            local_58 = (ulong)(uint)local_90.field_32;
            iVar3 = local_90.field_32 + uVar1;
            local_60 = iVar7;
            if (param_4 <= iVar4) {
                local_5c = iVar4 + 1;
                if (iVar7 <= iVar4) {
                    local_5c = iVar7;
                }
                iVar7 = param_4 - (uVar1 - iVar5);
                iVar4 = 0;
                if (iVar7 != 0 && (int)(uVar1 - iVar5) <= param_4) {
                    iVar4 = iVar7;
                }
                local_48 = (ulong)uVar1;
                new (&local_b8) CircleComputer(iVar5, iVar4);
                local_b8.Advance();
                local_68 = (ulong) * (uint*)(this + 8);
                local_50 = (ulong)(uint)local_b8.field_32;
                local_34 = local_b8.field_32 + *(uint*)(this + 8);
                if (iVar3 < local_34) {
                    local_58 = (ulong)(((int)local_58 + (int)local_48) * param_2);
                    do {
                        local_48 = CONCAT44(local_48._4_4_, iVar3);
                        iVar5 = *(int*)(this + 4);
                        iVar4 = iVar5 - local_90.field_28;
                        if (iVar5 - local_90.field_28 < param_3) {
                            iVar4 = param_3;
                        }
                        iVar3 = local_90.field_28 + iVar5 + 1;
                        if (param_5 <= local_90.field_28 + iVar5) {
                            iVar3 = param_5;
                        }
                        if (iVar3 - iVar4 != 0 && iVar4 <= iVar3) {
                            lVar8 = -(ulong)(uint)(iVar3 - iVar4);
                            iVar4 = iVar4 + (int)local_58;
                            do {
                                uVar2 = *(undefined4*)this;
                                puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, (long)iVar4);
                                *puVar6 = uVar2;
                                iVar4 = iVar4 + 1;
                                lVar8 = lVar8 + 1;
                            } while (lVar8 != 0);
                        }
                        local_90.Advance();
                        iVar3 = (int)local_48 + 1;
                        local_58 = (ulong)((int)local_58 + param_2);
                    } while (iVar3 < local_34);
                }
                if (local_34 < local_5c) {
                    local_50 = (ulong)(((int)local_50 + (int)local_68) * param_2);
                    do {
                        local_48 = CONCAT44(local_48._4_4_, iVar3);
                        iVar5 = *(int*)(this + 4) - local_b8.field_28;
                        if (param_3 <= iVar5) {
                            iVar4 = *(int*)(this + 4) - local_90.field_28;
                            if (iVar4 < param_3) {
                                iVar4 = param_3;
                            }
                            if (param_5 < iVar5) {
                                iVar5 = param_5;
                            }
                            if (iVar5 - iVar4 != 0 && iVar4 <= iVar5) {
                                lVar8 = -(ulong)(uint)(iVar5 - iVar4);
                                iVar4 = iVar4 + (int)local_50;
                                do {
                                    uVar2 = *(undefined4*)this;
                                    puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)param_1, (long)iVar4);
                                    *puVar6 = uVar2;
                                    iVar4 = iVar4 + 1;
                                    lVar8 = lVar8 + 1;
                                } while (lVar8 != 0);
                            }
                        }
                        iVar5 = *(int*)(this + 4) + local_b8.field_28 + 1;
                        if (iVar5 < param_5) {
                            iVar4 = *(int*)(this + 4) + local_90.field_28;
                            if (iVar5 < param_3) {
                                iVar5 = param_3;
                            }
                            iVar3 = iVar4 + 1;
                            if (param_5 <= iVar4) {
                                iVar3 = param_5;
                            }
                            if (iVar3 - iVar5 != 0 && iVar5 <= iVar3) {
                                uVar9 = (ulong)(uint)(iVar3 - iVar5);
                                iVar5 = iVar5 + (int)local_50;
                                do {
                                    uVar2 = *(undefined4*)this;
                                    puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)param_1, (long)iVar5);
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
                        local_50 = (ulong)((int)local_50 + param_2);
                    } while (local_34 < local_5c);
                }
            }
            if (iVar3 < local_60) {
                local_34 = iVar3 * param_2;
                do {
                    local_48 = CONCAT44(local_48._4_4_, iVar3);
                    iVar5 = *(int*)(this + 4);
                    iVar4 = iVar5 - local_90.field_28;
                    if (iVar5 - local_90.field_28 < param_3) {
                        iVar4 = param_3;
                    }
                    iVar3 = local_90.field_28 + iVar5 + 1;
                    if (param_5 <= local_90.field_28 + iVar5) {
                        iVar3 = param_5;
                    }
                    if (iVar3 - iVar4 != 0 && iVar4 <= iVar3) {
                        lVar8 = -(ulong)(uint)(iVar3 - iVar4);
                        iVar4 = iVar4 + local_34;
                        do {
                            uVar2 = *(undefined4*)this;
                            puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, (long)iVar4);
                            *puVar6 = uVar2;
                            iVar4 = iVar4 + 1;
                            lVar8 = lVar8 + 1;
                        } while (lVar8 != 0);
                    }
                    local_90.Advance();
                    iVar3 = (int)local_48 + 1;
                    local_34 = local_34 + param_2;
                } while (iVar3 != local_60);
            }
        }
    }

    // 0x100316290, 1040 bytes, inline, placed by class header (inline)
    // DrawCircleHelper<BasicHLineHelper<TransparentHelper> >::Draw(SharedArray<unsigned int>&, unsigned int, int, int, int, int)
    void graphics::DrawCircleHelper<BasicHLineHelper<TransparentHelper>>::Draw(SharedArray* param_1, uint param_2,
                                                                               int param_3, int param_4, int param_5,
                                                                               int param_6) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4* puVar4;
        uint* puVar5;
        int iVar6;
        long lVar7;
        ulong uVar8;
        int iVar9;
        CircleComputer local_b8;
        CircleComputer local_90;
        ulong local_68;
        int local_60;
        int local_5c;
        ulong local_58;
        ulong local_50;
        int local_38;
        int local_34;

        iVar2 = *(int*)(this + 20);
        iVar6 = *(int*)(this + 28);
        iVar1 = iVar2 - iVar6;
        if ((iVar1 < param_6) && (iVar9 = iVar6 + iVar2 + 1, param_4 <= iVar9)) {
            if (param_6 <= iVar2 + iVar6) {
                iVar9 = param_6;
            }
            iVar2 = param_4 - iVar1;
            if (param_4 - iVar1 == 0 || param_4 < iVar1) {
                iVar2 = 0;
            }
            new (&local_90) CircleComputer(iVar6, iVar2);
            local_90.Advance();
            iVar6 = *(int*)(this + 20);
            iVar1 = *(int*)(this + 24);
            iVar2 = iVar1 + iVar6;
            local_58 = (ulong)(uint)local_90.field_32;
            local_38 = local_90.field_32 + iVar6;
            local_60 = iVar9;
            if (param_4 <= iVar2) {
                local_5c = iVar2 + 1;
                if (iVar9 <= iVar2) {
                    local_5c = iVar9;
                }
                iVar9 = param_4 - (iVar6 - iVar1);
                iVar2 = 0;
                if (iVar9 != 0 && iVar6 - iVar1 <= param_4) {
                    iVar2 = iVar9;
                }
                new (&local_b8) CircleComputer(iVar1, iVar2);
                local_b8.Advance();
                local_68 = (ulong) * (uint*)(this + 20);
                local_50 = (ulong)(uint)local_b8.field_32;
                local_34 = local_b8.field_32 + *(uint*)(this + 20);
                if (local_38 < local_34) {
                    local_58 = (ulong)(((int)local_58 + iVar6) * param_2);
                    do {
                        iVar2 = *(int*)(this + 16);
                        iVar6 = iVar2 - local_90.field_28;
                        if (iVar2 - local_90.field_28 < param_3) {
                            iVar6 = param_3;
                        }
                        iVar1 = local_90.field_28 + iVar2 + 1;
                        if (param_5 <= local_90.field_28 + iVar2) {
                            iVar1 = param_5;
                        }
                        if (iVar1 - iVar6 != 0 && iVar6 <= iVar1) {
                            lVar7 = -(ulong)(uint)(iVar1 - iVar6);
                            iVar6 = iVar6 + (int)local_58;
                            do {
                                puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, (long)iVar6);
                                if (*puVar5 == 0) {
                                    uVar3 = *(undefined4*)this;
                                } else {
                                    uVar3 = BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12),
                                                       *puVar5);
                                }
                                puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, (long)iVar6);
                                *puVar4 = uVar3;
                                iVar6 = iVar6 + 1;
                                lVar7 = lVar7 + 1;
                            } while (lVar7 != 0);
                        }
                        local_90.Advance();
                        local_38 = local_38 + 1;
                        local_58 = (ulong)((int)local_58 + param_2);
                    } while (local_38 < local_34);
                }
                if (local_34 < local_5c) {
                    local_50 = (ulong)(((int)local_50 + (int)local_68) * param_2);
                    do {
                        iVar2 = *(int*)(this + 16) - local_b8.field_28;
                        if (param_3 <= iVar2) {
                            iVar6 = *(int*)(this + 16) - local_90.field_28;
                            if (iVar6 < param_3) {
                                iVar6 = param_3;
                            }
                            if (param_5 < iVar2) {
                                iVar2 = param_5;
                            }
                            if (iVar2 - iVar6 != 0 && iVar6 <= iVar2) {
                                lVar7 = -(ulong)(uint)(iVar2 - iVar6);
                                iVar6 = iVar6 + (int)local_50;
                                do {
                                    puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)param_1, (long)iVar6);
                                    if (*puVar5 == 0) {
                                        uVar3 = *(undefined4*)this;
                                    } else {
                                        uVar3 = BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12),
                                                           *puVar5);
                                    }
                                    puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)param_1, (long)iVar6);
                                    *puVar4 = uVar3;
                                    iVar6 = iVar6 + 1;
                                    lVar7 = lVar7 + 1;
                                } while (lVar7 != 0);
                            }
                        }
                        iVar2 = *(int*)(this + 16) + local_b8.field_28 + 1;
                        if (iVar2 < param_5) {
                            iVar6 = *(int*)(this + 16) + local_90.field_28;
                            if (iVar2 < param_3) {
                                iVar2 = param_3;
                            }
                            iVar1 = iVar6 + 1;
                            if (param_5 <= iVar6) {
                                iVar1 = param_5;
                            }
                            if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
                                uVar8 = (ulong)(uint)(iVar1 - iVar2);
                                iVar2 = iVar2 + (int)local_50;
                                do {
                                    puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)param_1, (long)iVar2);
                                    if (*puVar5 == 0) {
                                        uVar3 = *(undefined4*)this;
                                    } else {
                                        uVar3 = BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12),
                                                           *puVar5);
                                    }
                                    puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)param_1, (long)iVar2);
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
                        local_50 = (ulong)((int)local_50 + param_2);
                    } while (local_34 < local_5c);
                }
            }
            if (local_38 < local_60) {
                local_34 = local_38 * param_2;
                do {
                    iVar2 = *(int*)(this + 16);
                    iVar6 = iVar2 - local_90.field_28;
                    if (iVar2 - local_90.field_28 < param_3) {
                        iVar6 = param_3;
                    }
                    iVar1 = local_90.field_28 + iVar2 + 1;
                    if (param_5 <= local_90.field_28 + iVar2) {
                        iVar1 = param_5;
                    }
                    if (iVar1 - iVar6 != 0 && iVar6 <= iVar1) {
                        lVar7 = -(ulong)(uint)(iVar1 - iVar6);
                        iVar6 = iVar6 + local_34;
                        do {
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  (long)iVar6);
                            if (*puVar5 == 0) {
                                uVar3 = *(undefined4*)this;
                            } else {
                                uVar3 =
                                    BlendPixel(*(uint*)(this + 4), *(uint*)(this + 8), *(uint*)(this + 12), *puVar5);
                            }
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, (long)iVar6);
                            *puVar4 = uVar3;
                            iVar6 = iVar6 + 1;
                            lVar7 = lVar7 + 1;
                        } while (lVar7 != 0);
                    }
                    local_90.Advance();
                    local_38 = local_38 + 1;
                    local_34 = local_34 + param_2;
                } while (local_38 != local_60);
            }
        }
    }

    // 0x1003167a0, 208 bytes, inline, placed by class header (inline)
    // SectorHLineHelper<OpaqueHelper>::SetDirections(int, int, int)
    void SectorHLineHelper<OpaqueHelper>::SetDirections(int param_1, int param_2, int param_3) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        SectorHLineHelper<OpaqueHelper> SVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        double dVar8;
        double in_XMM1_Qa;
        double dVar9;

        uVar3 = param_2 & 65535;
        uVar1 = param_3 & 65535;
        iVar2 = uVar1 - uVar3;
        if (uVar1 < uVar3 || iVar2 == 0) {
            SVar5 = (SectorHLineHelper<OpaqueHelper>)(iVar2 + 65536U < 32768);
        } else {
            SVar5 = (SectorHLineHelper<OpaqueHelper>)(iVar2 < 32768);
        }
        this[20] = SVar5;
        uVar4 = uVar3;
        if (SVar5 != (SectorHLineHelper<OpaqueHelper>)0) {
            uVar4 = uVar1;
            uVar1 = uVar3;
        }
        uVar6 = ANGLE_TO_RADIANS(uVar1);
        uVar7 = ANGLE_TO_RADIANS(uVar4);
        dVar8 = (double)___sincos_stret(uVar6);
        dVar9 = (double)param_1 + 0.5;
        *(int*)(this + 4) = (int)(dVar8 * dVar9);
        in_XMM1_Qa = in_XMM1_Qa * dVar9;
        *(int*)(this + 12) = -(int)in_XMM1_Qa;
        dVar8 = (double)___sincos_stret(uVar7);
        *(int*)(this + 8) = (int)(dVar8 * dVar9);
        *(int*)(this + 16) = -(int)(in_XMM1_Qa * dVar9);
    }

    // 0x100316a60, 208 bytes, inline, placed by class header (inline)
    // SectorHLineHelper<TransparentHelper>::SetDirections(int, int, int)
    void SectorHLineHelper<TransparentHelper>::SetDirections(int param_1, int param_2, int param_3) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        SectorHLineHelper<TransparentHelper> SVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        double dVar8;
        double in_XMM1_Qa;
        double dVar9;

        uVar3 = param_2 & 65535;
        uVar1 = param_3 & 65535;
        iVar2 = uVar1 - uVar3;
        if (uVar1 < uVar3 || iVar2 == 0) {
            SVar5 = (SectorHLineHelper<TransparentHelper>)(iVar2 + 65536U < 32768);
        } else {
            SVar5 = (SectorHLineHelper<TransparentHelper>)(iVar2 < 32768);
        }
        this[32] = SVar5;
        uVar4 = uVar3;
        if (SVar5 != (SectorHLineHelper<TransparentHelper>)0) {
            uVar4 = uVar1;
            uVar1 = uVar3;
        }
        uVar6 = ANGLE_TO_RADIANS(uVar1);
        uVar7 = ANGLE_TO_RADIANS(uVar4);
        dVar8 = (double)___sincos_stret(uVar6);
        dVar9 = (double)param_1 + 0.5;
        *(int*)(this + 16) = (int)(dVar8 * dVar9);
        in_XMM1_Qa = in_XMM1_Qa * dVar9;
        *(int*)(this + 24) = -(int)in_XMM1_Qa;
        dVar8 = (double)___sincos_stret(uVar7);
        *(int*)(this + 20) = (int)(dVar8 * dVar9);
        *(int*)(this + 28) = -(int)(in_XMM1_Qa * dVar9);
    }

    // 0x100316bc0, 1184 bytes, inline, placed by class header (inline)
    // DrawCircleHelper<SectorHLineHelper<OpaqueHelper> >::Draw(SharedArray<unsigned int>&, unsigned int, int, int, int, int)
    void graphics::DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>::Draw(SharedArray* param_1, uint param_2,
                                                                           int param_3, int param_4, int param_5,
                                                                           int param_6) {
        int iVar1;
        int iVar2;
        uint uVar3;
        undefined4* puVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        ulong uVar9;
        long lVar10;
        CircleComputer local_c8;
        ulong local_a0;
        CircleComputer local_98;
        ulong local_70;
        int local_60;
        int local_5c;
        ulong local_58;
        ulong local_50;
        int local_44;
        undefined4 local_34;

        iVar5 = *(int*)(this + 28);
        iVar8 = *(int*)(this + 36);
        iVar2 = iVar5 - iVar8;
        if ((iVar2 < param_6) && (iVar6 = iVar8 + iVar5 + 1, param_4 <= iVar6)) {
            if (param_6 <= iVar5 + iVar8) {
                iVar6 = param_6;
            }
            iVar5 = param_4 - iVar2;
            if (param_4 - iVar2 == 0 || param_4 < iVar2) {
                iVar5 = 0;
            }
            new (&local_98) CircleComputer(iVar8, iVar5);
            local_98.Advance();
            iVar1 = local_98.field_32;
            iVar2 = *(int*)(this + 28);
            iVar7 = *(int*)(this + 32);
            iVar5 = iVar7 + iVar2;
            iVar8 = local_98.field_32 + iVar2;
            local_60 = iVar6;
            if (param_4 <= iVar5) {
                local_5c = iVar5 + 1;
                if (iVar6 <= iVar5) {
                    local_5c = iVar6;
                }
                iVar6 = param_4 - (iVar2 - iVar7);
                iVar5 = 0;
                if (iVar6 != 0 && iVar2 - iVar7 <= param_4) {
                    iVar5 = iVar6;
                }
                new (&local_c8) CircleComputer(iVar7, iVar5);
                local_c8.Advance();
                local_a0 = (ulong) * (uint*)(this + 28);
                local_58 = (ulong)(uint)local_c8.field_32;
                local_c8.field_32 = local_c8.field_32 + *(uint*)(this + 28);
                local_50 = CONCAT44(local_50._4_4_, local_c8.field_32);
                if (iVar8 < local_c8.field_32) {
                    local_70 = (ulong)((iVar1 + iVar2) * param_2);
                    local_44 = iVar8;
                    do {
                        iVar2 = local_98.field_32;
                        iVar5 = *(int*)(this + 24);
                        iVar8 = iVar5 - local_98.field_28;
                        if (iVar5 - local_98.field_28 < param_3) {
                            iVar8 = param_3;
                        }
                        iVar6 = local_98.field_28 + iVar5 + 1;
                        if (param_5 <= local_98.field_28 + iVar5) {
                            iVar6 = param_5;
                        }
                        if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                            iVar7 = iVar8 + (int)local_70;
                            lVar10 = -(ulong)(uint)(iVar6 - iVar8);
                            iVar8 = iVar8 - iVar5;
                            do {
                                if (this[20] ==
                                    (DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar2 <
                                                                                            *(int*)(this + 16) *
                                                                                                iVar8 &&
                                                                                        *(int*)(this + 12) * iVar8 <=
                                                                                            *(int*)(this + 4) *
                                                                                                iVar2)) {
                                    local_34 = *(undefined4*)this;
                                    puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)param_1, (long)iVar7);
                                    *puVar4 = local_34;
                                }
                                iVar7 = iVar7 + 1;
                                iVar8 = iVar8 + 1;
                                lVar10 = lVar10 + 1;
                            } while (lVar10 != 0);
                        }
                        local_98.Advance();
                        iVar8 = local_44 + 1;
                        local_70 = (ulong)((int)local_70 + param_2);
                        local_44 = iVar8;
                    } while (iVar8 < (int)local_50);
                }
                if ((int)local_50 < local_5c) {
                    local_58 = (ulong)(((int)local_58 + (int)local_a0) * param_2);
                    local_44 = iVar8;
                    do {
                        iVar8 = local_98.field_32;
                        iVar5 = *(int*)(this + 24);
                        iVar2 = iVar5 - local_c8.field_28;
                        if (param_3 <= iVar2) {
                            iVar6 = iVar5 - local_98.field_28;
                            if (iVar5 - local_98.field_28 < param_3) {
                                iVar6 = param_3;
                            }
                            if (param_5 < iVar2) {
                                iVar2 = param_5;
                            }
                            if (iVar2 - iVar6 != 0 && iVar6 <= iVar2) {
                                iVar7 = iVar6 + (int)local_58;
                                lVar10 = -(ulong)(uint)(iVar2 - iVar6);
                                iVar6 = iVar6 - iVar5;
                                do {
                                    if (this[20] ==
                                        (DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar8 <
                                                                                                *(int*)(this + 16) *
                                                                                                    iVar6 &&
                                                                                            *(int*)(this + 12) *
                                                                                                    iVar6 <=
                                                                                                *(int*)(this + 4) *
                                                                                                    iVar8)) {
                                        local_34 = *(undefined4*)this;
                                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)param_1, (long)iVar7);
                                        *puVar4 = local_34;
                                    }
                                    iVar7 = iVar7 + 1;
                                    iVar6 = iVar6 + 1;
                                    lVar10 = lVar10 + 1;
                                } while (lVar10 != 0);
                            }
                        }
                        iVar2 = local_98.field_32;
                        iVar5 = *(int*)(this + 24);
                        iVar8 = iVar5 + local_c8.field_28 + 1;
                        if (iVar8 < param_5) {
                            if (iVar8 < param_3) {
                                iVar8 = param_3;
                            }
                            iVar6 = local_98.field_28 + iVar5 + 1;
                            if (param_5 <= local_98.field_28 + iVar5) {
                                iVar6 = param_5;
                            }
                            if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                                uVar9 = (ulong)(uint)(iVar6 - iVar8);
                                iVar6 = iVar8 + (int)local_58;
                                iVar8 = iVar8 - iVar5;
                                do {
                                    if (this[20] ==
                                        (DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar2 <
                                                                                                *(int*)(this + 16) *
                                                                                                    iVar8 &&
                                                                                            *(int*)(this + 12) *
                                                                                                    iVar8 <=
                                                                                                *(int*)(this + 4) *
                                                                                                    iVar2)) {
                                        local_34 = *(undefined4*)this;
                                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)param_1, (long)iVar6);
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
                        local_58 = (ulong)((int)local_58 + param_2);
                        local_50 = CONCAT44(local_50._4_4_, iVar5);
                        local_44 = iVar8;
                    } while (iVar5 < local_5c);
                }
            }
            if (iVar8 < local_60) {
                uVar3 = iVar8 * param_2;
                local_44 = iVar8;
                do {
                    iVar2 = local_98.field_32;
                    local_50 = (ulong)uVar3;
                    iVar5 = *(int*)(this + 24);
                    iVar8 = iVar5 - local_98.field_28;
                    if (iVar5 - local_98.field_28 < param_3) {
                        iVar8 = param_3;
                    }
                    iVar6 = local_98.field_28 + iVar5 + 1;
                    if (param_5 <= local_98.field_28 + iVar5) {
                        iVar6 = param_5;
                    }
                    if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                        iVar7 = iVar8 + uVar3;
                        lVar10 = -(ulong)(uint)(iVar6 - iVar8);
                        iVar8 = iVar8 - iVar5;
                        do {
                            if (this[20] ==
                                (DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>)(*(int*)(this + 8) * iVar2 <
                                                                                        *(int*)(this + 16) * iVar8 &&
                                                                                    *(int*)(this + 12) * iVar8 <=
                                                                                        *(int*)(this + 4) * iVar2)) {
                                local_34 = *(undefined4*)this;
                                puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, (long)iVar7);
                                *puVar4 = local_34;
                            }
                            iVar7 = iVar7 + 1;
                            iVar8 = iVar8 + 1;
                            lVar10 = lVar10 + 1;
                        } while (lVar10 != 0);
                    }
                    local_98.Advance();
                    local_44 = local_44 + 1;
                    uVar3 = (int)local_50 + param_2;
                } while (local_44 != local_60);
            }
        }
    }

    // 0x100317160, 1392 bytes, inline, placed by class header (inline)
    // DrawCircleHelper<SectorHLineHelper<TransparentHelper> >::Draw(SharedArray<unsigned int>&, unsigned int, int, int, int, int)
    void graphics::DrawCircleHelper<SectorHLineHelper<TransparentHelper>>::Draw(SharedArray* param_1, uint param_2,
                                                                                int param_3, int param_4, int param_5,
                                                                                int param_6) {
        int iVar1;
        uint uVar2;
        int iVar3;
        int* piVar4;
        uint* puVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        ulong uVar9;
        long lVar10;
        DrawCircleHelper<SectorHLineHelper<TransparentHelper>>* pDVar11;
        CircleComputer local_d0;
        ulong local_a8;
        CircleComputer local_a0;
        int local_78;
        int local_74;
        ulong local_70;
        ulong local_68;
        SharedArray* local_60;
        ulong local_58;
        int local_4c;
        int local_48;
        int local_44;
        DrawCircleHelper<SectorHLineHelper<TransparentHelper>>* local_40;
        uint local_38;
        uint local_34;

        iVar3 = *(int*)(this + 40);
        iVar8 = *(int*)(this + 48);
        iVar1 = iVar3 - iVar8;
        if ((iVar1 < param_6) && (iVar6 = iVar8 + iVar3 + 1, param_4 <= iVar6)) {
            if (param_6 <= iVar3 + iVar8) {
                iVar6 = param_6;
            }
            iVar3 = param_4 - iVar1;
            if (param_4 - iVar1 == 0 || param_4 < iVar1) {
                iVar3 = 0;
            }
            local_60 = param_1;
            local_48 = param_5;
            local_44 = param_3;
            local_40 = this;
            local_38 = param_2;
            new (&local_a0) CircleComputer(iVar8, iVar3);
            local_a0.Advance();
            pDVar11 = local_40;
            iVar3 = *(int*)(local_40 + 40);
            iVar8 = *(int*)(local_40 + 44);
            iVar1 = iVar8 + iVar3;
            local_70 = (ulong)(uint)local_a0.field_32;
            iVar7 = local_a0.field_32 + iVar3;
            local_78 = iVar6;
            if (iVar1 < param_4) {
                if (iVar6 <= iVar7) {
                    return;
                }
            } else {
                local_74 = iVar1 + 1;
                if (iVar6 <= iVar1) {
                    local_74 = iVar6;
                }
                iVar6 = param_4 - (iVar3 - iVar8);
                iVar1 = 0;
                if (iVar6 != 0 && iVar3 - iVar8 <= param_4) {
                    iVar1 = iVar6;
                }
                new (&local_d0) CircleComputer(iVar8, iVar1);
                local_d0.Advance();
                local_a8 = (ulong) * (uint*)(pDVar11 + 40);
                local_68 = (ulong)(uint)local_d0.field_32;
                local_d0.field_32 = local_d0.field_32 + *(uint*)(pDVar11 + 40);
                local_58 = CONCAT44(local_58._4_4_, local_d0.field_32);
                if (iVar7 < local_d0.field_32) {
                    local_70 = (ulong)(((int)local_70 + iVar3) * local_38);
                    do {
                        iVar1 = local_a0.field_32;
                        iVar3 = *(int*)(pDVar11 + 36);
                        iVar8 = iVar3 - local_a0.field_28;
                        if (iVar3 - local_a0.field_28 < local_44) {
                            iVar8 = local_44;
                        }
                        iVar6 = local_a0.field_28 + iVar3 + 1;
                        if (local_48 <= local_a0.field_28 + iVar3) {
                            iVar6 = local_48;
                        }
                        local_4c = iVar7;
                        if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
                            iVar7 = iVar8 + (int)local_70;
                            lVar10 = -(ulong)(uint)(iVar6 - iVar8);
                            iVar8 = iVar8 - iVar3;
                            do {
                                if (pDVar11[32] ==
                                    (DrawCircleHelper<SectorHLineHelper<TransparentHelper>>)(*(int*)(pDVar11 + 20) *
                                                                                                     iVar1 <
                                                                                                 *(int*)(pDVar11 + 28) *
                                                                                                     iVar8 &&
                                                                                             *(int*)(pDVar11 + 24) *
                                                                                                     iVar8 <=
                                                                                                 *(int*)(pDVar11 + 16) *
                                                                                                     iVar1)) {
                                    puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)local_60, (long)iVar7);
                                    if (*puVar5 == 0) {
                                        local_34 = *(uint*)local_40;
                                    } else {
                                        local_34 = BlendPixel(*(uint*)(local_40 + 4), *(uint*)(local_40 + 8),
                                                              *(uint*)(local_40 + 12), *puVar5);
                                    }
                                    puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)local_60, (long)iVar7);
                                    *puVar5 = local_34;
                                    pDVar11 = local_40;
                                }
                                iVar7 = iVar7 + 1;
                                iVar8 = iVar8 + 1;
                                lVar10 = lVar10 + 1;
                            } while (lVar10 != 0);
                        }
                        local_a0.Advance();
                        iVar7 = local_4c + 1;
                        local_70 = (ulong)((int)local_70 + local_38);
                    } while (iVar7 < (int)local_58);
                }
                if ((int)local_58 < local_74) {
                    local_68 = (ulong)(((int)local_68 + (int)local_a8) * local_38);
                    do {
                        iVar8 = local_a0.field_32;
                        iVar3 = *(int*)(pDVar11 + 36);
                        iVar1 = iVar3 - local_d0.field_28;
                        local_4c = iVar7;
                        if (local_44 <= iVar1) {
                            iVar6 = iVar3 - local_a0.field_28;
                            if (iVar3 - local_a0.field_28 < local_44) {
                                iVar6 = local_44;
                            }
                            if (local_48 < iVar1) {
                                iVar1 = local_48;
                            }
                            if (iVar1 - iVar6 != 0 && iVar6 <= iVar1) {
                                iVar7 = iVar6 + (int)local_68;
                                lVar10 = -(ulong)(uint)(iVar1 - iVar6);
                                iVar6 = iVar6 - iVar3;
                                do {
                                    if (pDVar11[32] ==
                                        (DrawCircleHelper<
                                            SectorHLineHelper<TransparentHelper>>)(*(int*)(pDVar11 + 20) * iVar8 <
                                                                                       *(int*)(pDVar11 + 28) * iVar6 &&
                                                                                   *(int*)(pDVar11 + 24) * iVar6 <=
                                                                                       *(int*)(pDVar11 + 16) * iVar8)) {
                                        puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)local_60, (long)iVar7);
                                        if (*puVar5 == 0) {
                                            local_34 = *(uint*)local_40;
                                        } else {
                                            local_34 = BlendPixel(*(uint*)(local_40 + 4), *(uint*)(local_40 + 8),
                                                                  *(uint*)(local_40 + 12), *puVar5);
                                        }
                                        puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)local_60, (long)iVar7);
                                        *puVar5 = local_34;
                                        pDVar11 = local_40;
                                    }
                                    iVar7 = iVar7 + 1;
                                    iVar6 = iVar6 + 1;
                                    lVar10 = lVar10 + 1;
                                } while (lVar10 != 0);
                            }
                        }
                        iVar3 = *(int*)(pDVar11 + 36);
                        iVar8 = iVar3 + local_d0.field_28 + 1;
                        if (iVar8 < local_48) {
                            if (iVar8 < local_44) {
                                iVar8 = local_44;
                            }
                            iVar1 = local_a0.field_28 + iVar3 + 1;
                            if (local_48 <= local_a0.field_28 + iVar3) {
                                iVar1 = local_48;
                            }
                            if (iVar1 - iVar8 != 0 && iVar8 <= iVar1) {
                                uVar9 = (ulong)(uint)(iVar1 - iVar8);
                                iVar1 = iVar8 + (int)local_68;
                                iVar8 = iVar8 - iVar3;
                                local_34 = local_a0.field_32;
                                uVar2 = local_a0.field_32;
                                do {
                                    if (pDVar11[32] ==
                                        (DrawCircleHelper<
                                            SectorHLineHelper<TransparentHelper>>)((int)(*(int*)(pDVar11 + 20) *
                                                                                         uVar2) <
                                                                                       *(int*)(pDVar11 + 28) * iVar8 &&
                                                                                   *(int*)(pDVar11 + 24) * iVar8 <=
                                                                                       (int)(*(int*)(pDVar11 + 16) *
                                                                                             uVar2))) {
                                        puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)local_60, (long)iVar1);
                                        if (*puVar5 == 0) {
                                            iVar3 = *(int*)local_40;
                                        } else {
                                            iVar3 = BlendPixel(*(uint*)(local_40 + 4), *(uint*)(local_40 + 8),
                                                               *(uint*)(local_40 + 12), *puVar5);
                                        }
                                        piVar4 = (int*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)local_60, (long)iVar1);
                                        *piVar4 = iVar3;
                                        pDVar11 = local_40;
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
                        local_68 = (ulong)((int)local_68 + local_38);
                        local_58 = CONCAT44(local_58._4_4_, iVar3);
                    } while (iVar3 < local_74);
                }
                if (local_78 <= iVar7) {
                    return;
                }
            }
            uVar2 = iVar7 * local_38;
            do {
                local_58 = (ulong)uVar2;
                iVar3 = *(int*)(pDVar11 + 36);
                iVar8 = iVar3 - local_a0.field_28;
                if (iVar3 - local_a0.field_28 < local_44) {
                    iVar8 = local_44;
                }
                iVar1 = local_a0.field_28 + iVar3 + 1;
                if (local_48 <= local_a0.field_28 + iVar3) {
                    iVar1 = local_48;
                }
                local_4c = iVar7;
                if (iVar1 - iVar8 != 0 && iVar8 <= iVar1) {
                    iVar6 = iVar8 + uVar2;
                    lVar10 = -(ulong)(uint)(iVar1 - iVar8);
                    iVar8 = iVar8 - iVar3;
                    local_34 = local_a0.field_32;
                    uVar2 = local_a0.field_32;
                    do {
                        if (pDVar11[32] ==
                            (DrawCircleHelper<SectorHLineHelper<TransparentHelper>>)((int)(*(int*)(pDVar11 + 20) *
                                                                                           uVar2) <
                                                                                         *(int*)(pDVar11 + 28) *
                                                                                             iVar8 &&
                                                                                     *(int*)(pDVar11 + 24) * iVar8 <=
                                                                                         (int)(*(int*)(pDVar11 + 16) *
                                                                                               uVar2))) {
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)local_60,
                                                                                  (long)iVar6);
                            if (*puVar5 == 0) {
                                iVar3 = *(int*)pDVar11;
                            } else {
                                iVar3 = BlendPixel(*(uint*)(pDVar11 + 4), *(uint*)(pDVar11 + 8), *(uint*)(pDVar11 + 12),
                                                   *puVar5);
                            }
                            piVar4 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)local_60,
                                                                                 (long)iVar6);
                            *piVar4 = iVar3;
                            pDVar11 = local_40;
                            uVar2 = local_34;
                        }
                        iVar6 = iVar6 + 1;
                        iVar8 = iVar8 + 1;
                        lVar10 = lVar10 + 1;
                    } while (lVar10 != 0);
                }
                local_a0.Advance();
                iVar7 = local_4c + 1;
                uVar2 = (int)local_58 + local_38;
            } while (iVar7 != local_78);
        }
    }

    // 0x100318d00, 64 bytes, complete-object constructor, inline, placed by class header (inline)
    // XPlotParams::XPlotParams(unsigned int*, unsigned int, int, unsigned int const*, unsigned int, int, int, int, int, SpriteFlip)
    void XPlotParams::XPlotParams() {
        XPlotParams();
    }

    // 0x100318d40, 208 bytes, inline, placed by class header (inline)
    // XPlotBlender<XPlot_Normal>::XPlot(XPlotParams const&)
    void XPlotBlender<XPlot_Normal>::XPlot(XPlotParams* param_1) {
        int iVar1;
        long lVar2;
        uint uVar3;
        long lVar4;
        int iVar5;
        uint uVar6;
        uint* puVar7;
        int iVar8;

        lVar4 = param_1->field_24;
        iVar5 = param_1->field_12;
    LAB_100318d60:
        iVar1 = param_1->field_48;
        lVar2 = param_1->field_40;
        iVar8 = param_1->field_0;
        puVar7 = (uint*)(lVar4 + (long)(int)param_1->field_36 * 4);
        do {
            uVar3 = *(uint*)((ulong)(uint)(iVar1 * iVar5) * 4 + lVar2 + (long)iVar8 * 4);
            uVar6 = uVar3 >> 24;
            if (uVar6 == 255) {
            LAB_100318dca:
                *puVar7 = uVar3;
            } else if (16777215 < uVar3) {
                uVar3 = ComputeCompositeRGB(uVar3, uVar6);
                uVar3 = BlendPixel(uVar3, uVar6, uVar6 ^ 255, *puVar7);
                goto LAB_100318dca;
            }
            if (iVar8 == param_1->field_4)
                break;
            iVar8 = iVar8 + param_1->field_8;
            puVar7 = puVar7 + 1;
        } while (true);
        if (iVar5 == param_1->field_16) {
            return;
        }
        iVar5 = iVar5 + param_1->field_20;
        lVar4 = lVar4 + (ulong)(uint)param_1->field_32 * 4;
        goto LAB_100318d60;
    }

    // 0x100318e10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // XPlotBlender<XPlot_NormalAlpha>::XPlotBlender<int>(int): jumps straight to the base-object constructor

    // 0x100318e20, 240 bytes, inline, placed by class header (inline)
    // XPlotBlender<XPlot_NormalAlpha>::XPlot(XPlotParams const&)
    void XPlotBlender<XPlot_NormalAlpha>::XPlot(XPlotParams* param_1) {
        int iVar1;
        long lVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        long lVar6;
        int iVar7;
        uint* puVar8;

        lVar6 = param_1->field_24;
        iVar5 = param_1->field_12;
        while (true) {
            iVar1 = param_1->field_48;
            lVar2 = param_1->field_40;
            iVar7 = param_1->field_0;
            puVar8 = (uint*)(lVar6 + (long)(int)param_1->field_36 * 4);
            while (true) {
                uVar3 = *(uint*)((ulong)(uint)(iVar1 * iVar5) * 4 + lVar2 + (long)iVar7 * 4);
                uVar4 = (uVar3 >> 24) * *(int*)this;
                if (255 < uVar4) {
                    uVar4 = uVar4 >> 8;
                    uVar3 = ComputeCompositeRGB(uVar3, uVar4);
                    uVar3 = BlendPixel(uVar3, uVar4, 255 - uVar4, *puVar8);
                    *puVar8 = uVar3;
                }
                if (iVar7 == param_1->field_4)
                    break;
                iVar7 = iVar7 + param_1->field_8;
                puVar8 = puVar8 + 1;
            }
            if (iVar5 == param_1->field_16)
                break;
            iVar5 = iVar5 + param_1->field_20;
            lVar6 = lVar6 + (ulong)(uint)param_1->field_32 * 4;
        }
    }

    // 0x10031b740, 16 bytes, complete-object constructor, inline, placed by class name
    // NXTPix2D::NXTPix2D(SharedArray<unsigned int>&, int, int): jumps straight to the base-object constructor

    // 0x100327640, 32 bytes, base-object constructor, inline, placed by class name
    // NXTPix2D::NXTPix2D(SharedArray<unsigned int>&, int, int)
    void NXTPix2D::NXTPix2D(SharedArray* param_1, int param_2, int param_3) {
        new (this) Pix2D(param_1, param_2, param_3);
        field_0 = &PTR__AutoSingleton_100efb0f8;
    }

} // namespace jag::oldscape::graphics
