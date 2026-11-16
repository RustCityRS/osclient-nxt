// libs/oldscape/jagex3/dash3d/Pix3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Pix3D.h"

namespace jag::oldscape::dash3d {
    // 0x103936078, 16 bytes, __common; set at startup by ___cxx_global_var_init.129
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Pix3D::m_textureProvider;

    // 0x10394be70, 2048 bytes, __common; zero-initialised
    Pix3D::m_divTable;

    // 0x10394c670, 8192 bytes, __common; zero-initialised
    Pix3D::m_divTable2;

    // 0x10394e670, 8192 bytes, __common; zero-initialised
    Pix3D::m_sinTable;

    // 0x103950670, 8192 bytes, __common; zero-initialised
    Pix3D::m_cosTable;

    // 0x103952670, 262144 bytes, __common; zero-initialised
    Pix3D::m_colourTable;

    // 0x100344ce0, 16 bytes, placed by class name and debug map
    // Pix3D::GetColourTable()
    undefined1* Pix3D::GetColourTable() {
        return &m_colourTable;
    }

    // 0x100345590, 16 bytes, placed by class name and debug map
    // Pix3D::GetCosTable()
    undefined1* Pix3D::GetCosTable() {
        return &m_cosTable;
    }

    // 0x10034dea0, 16 bytes, placed by class name
    // Pix3D::GetSinTable()
    undefined1* Pix3D::GetSinTable() {
        return &m_sinTable;
    }

    // 0x10034deb0, 32 bytes, placed by class name
    // Pix3D::RotateXAroundY(int, int, int, int)
    int Pix3D::RotateXAroundY(int param_1, int param_2, int param_3, int param_4) {
        return param_2 * param_4 + param_1 * param_3 >> 16;
    }

    // 0x10034ded0, 32 bytes, placed by class name
    // Pix3D::RotateZAroundY(int, int, int, int)
    int Pix3D::RotateZAroundY(int param_1, int param_2, int param_3, int param_4) {
        return param_2 * param_3 - param_1 * param_4 >> 16;
    }

    // 0x10035fb00, 16 bytes, placed by class name
    // Pix3D::GetRenderDepth() const
    int Pix3D::GetRenderDepth() {
        return m_renderDepth;
    }

    // 0x10035fb10, 32 bytes, placed by class name
    // Pix3D::InvRotateYAroundX(int, int, int, int)
    int Pix3D::InvRotateYAroundX(int param_1, int param_2, int param_3, int param_4) {
        return param_2 * param_4 + param_1 * param_3 >> 16;
    }

    // 0x10035fb30, 32 bytes, placed by class name
    // Pix3D::InvRotateZAroundX(int, int, int, int)
    int Pix3D::InvRotateZAroundX(int param_1, int param_2, int param_3, int param_4) {
        return param_2 * param_3 - param_1 * param_4 >> 16;
    }

    // 0x10035fb50, 32 bytes, placed by class name
    // Pix3D::InvRotateXAroundY(int, int, int, int)
    int Pix3D::InvRotateXAroundY(int param_1, int param_2, int param_3, int param_4) {
        return param_1 * param_3 - param_2 * param_4 >> 16;
    }

    // 0x10035fb70, 32 bytes, placed by class name
    // Pix3D::InvRotateZAroundY(int, int, int, int)
    int Pix3D::InvRotateZAroundY(int param_1, int param_2, int param_3, int param_4) {
        return param_2 * param_3 + param_1 * param_4 >> 16;
    }

    // 0x100365660, 16 bytes, placed by class name
    // Pix3D::GetDivTable2()
    undefined1* Pix3D::GetDivTable2() {
        return &m_divTable2;
    }

    // 0x100366480, 144 bytes, placed by class name
    // Pix3D::SetRenderClipping(int, int, int, int)
    void Pix3D::SetRenderClipping(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        int iVar1;
        int* piVar2;
        ulong uVar3;

        m_xClip3 = param_3 - param_1;
        field_32 = param_4 - param_2;
        (*(code*)field_0[4])();
        this_00 = &field_56;
        iVar1 = this_00->size();
        if (iVar1 < (int)field_32) {
            jag::math::NearestPowerOf2GreaterOrEqual(field_32);
            eastl::vector<int, eastl::allocator>::resize((ulong)this_00);
        }
        if (0 < (int)field_32) {
            iVar1 = param_2 * m_width + param_1;
            uVar3 = 0;
            do {
                piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                *piVar2 = iVar1;
                iVar1 = iVar1 + m_width;
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)field_32);
        }
    }

    // 0x1003665e0, 64 bytes, placed by class name
    // Pix3D::ResetOrigin()
    void Pix3D::ResetOrigin() {
        int iVar1;
        int iVar2;

        iVar1 = m_xClip3 / 2;
        m_xOrigin = iVar1;
        iVar2 = (int)field_32 / 2;
        m_yOrigin = iVar2;
        m_boundLeft = -iVar1;
        m_boundRight = m_xClip3 - iVar1;
        m_boundTop = -iVar2;
        m_boundBottom = field_32 - iVar2;
    }

    // 0x100366650, 16 bytes, placed by class name
    // Pix3D::SetRenderZoom(int, int)
    void Pix3D::SetRenderZoom(int param_1, int param_2) {
        SetZoom(this, param_1);
    }

    // 0x100366670, 32 bytes, placed by class name
    // Pix3D::CalculateRenderDepth(int)
    void Pix3D::CalculateRenderDepth(int param_1) {
        SetRenderDepth(this, param_1 * 140);
    }

    // 0x100366760, 64 bytes, placed by class name
    // Pix3D::TextureLightColour(int, int)
    int Pix3D::TextureLightColour(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar1 = (param_1 & 127U) * param_2;
        iVar2 = iVar1 >> 7;
        iVar3 = 126;
        if (iVar2 < 126) {
            iVar3 = iVar2;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return iVar2 + (param_1 & 65408U);
    }

    // 0x1003671a0, 32 bytes, placed by class name
    // Pix3D::InitColourTable(double)
    void Pix3D::InitColourTable(double param_1) {
        InitColourTable(param_1, 0, 512);
    }

    // 0x1003703f0, 16 bytes, placed by class name
    // Pix3D::GetDivTable()
    undefined1* Pix3D::GetDivTable() {
        return &m_divTable;
    }

    // 0x100370400, 272 bytes, placed by class name
    // Pix3D::InitTables()
    void Pix3D::InitTables() {
        undefined4* puVar1;
        int* piVar2;
        ulong uVar3;
        double dVar4;
        double in_XMM1_Qa;

        uVar3 = 1;
        do {
            puVar1 = (undefined4*)std::array<int, 512ul>::operator[](uVar3);
            *puVar1 = (int)(32768 / (uVar3 & 4294967295));
            uVar3 = uVar3 + 1;
        } while (uVar3 != 512);
        uVar3 = 1;
        do {
            puVar1 = (undefined4*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&m_divTable2, uVar3);
            *puVar1 = (int)(65536 / (uVar3 & 4294967295));
            uVar3 = uVar3 + 1;
        } while (uVar3 != 2048);
        uVar3 = 0;
        do {
            dVar4 = (double)___sincos_stret((double)(int)uVar3 * 0.0030679615);
            piVar2 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&m_sinTable, uVar3);
            *piVar2 = (int)(dVar4 * 65536.0);
            piVar2 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&m_cosTable, uVar3);
            *piVar2 = (int)(in_XMM1_Qa * 65536.0);
            uVar3 = uVar3 + 1;
            in_XMM1_Qa = 65536.0;
        } while (uVar3 != 2048);
    }

    // 0x100370540, 1168 bytes, placed by class name
    // Pix3D::InitColourTable(double, int, int)
    void Pix3D::InitColourTable(double param_1, int param_2, int param_3) {
        double dVar1;
        double dVar2;
        int iVar3;
        int* piVar4;
        int iVar5;
        int iVar6;
        ulong uVar7;
        ulong uVar8;
        float fVar9;
        double dVar10;
        double dVar11;
        double dVar12;
        double dVar13;
        double dVar14;
        double dVar15;
        double dVar16;
        double dVar17;
        double dVar18;
        double dVar19;
        double dVar20;
        double dVar21;

        fVar9 = (float)(&jag::math::g_Rand)->FRand(0.03);
        if (param_2 < param_3) {
            iVar5 = param_2 << 7;
            do {
                dVar10 = (double)(param_2 >> 3) * 0.015625;
                dVar21 = dVar10 + 0.0078125;
                dVar1 = (double)(param_2 & 7) * 0.125;
                dVar19 = dVar1 + 0.0625;
                uVar7 = -(ulong)(1.0 < dVar10 + 0.3411458333333333);
                dVar2 = (double)(~uVar7 & (ulong)(dVar10 + 0.3411458333333333) |
                                 (ulong)(dVar10 + -0.6588541666666667) & uVar7);
                uVar7 = -(ulong)(dVar10 + -0.3255208333333333 < 0.0);
                dVar10 = (double)(~uVar7 & (ulong)(dVar10 + -0.3255208333333333) |
                                  (ulong)(dVar10 + 0.6744791666666667) & uVar7);
                dVar15 = dVar2 * 6.0;
                dVar16 = dVar21 * 6.0;
                dVar17 = dVar10 * 6.0;
                iVar6 = 0;
                dVar20 = 0.0;
                uVar7 = (long)iVar5;
                do {
                    dVar11 = dVar20 * 0.0078125;
                    if (dVar19 == 0.0) {
                        dVar13 = dVar11;
                        dVar18 = dVar11;
                    } else {
                        dVar12 = (double)(-(ulong)(dVar11 < 0.5) & (ulong)(dVar11 * (dVar1 + 1.0625)) |
                                          ~-(ulong)(dVar11 < 0.5) & (ulong)((dVar11 + dVar19) - dVar11 * dVar19));
                        dVar14 = dVar20 * 0.015625 - dVar12;
                        if (1.0 <= dVar15) {
                            uVar8 = -(ulong)(dVar2 + dVar2 < 1.0);
                            dVar11 = (double)(~uVar8 & (ulong)dVar14 | uVar8 & (ulong)dVar12);
                            if (dVar2 + dVar2 < 1.0)
                                goto LAB_1003708f0;
                            if (dVar2 * 3.0 < 2.0) {
                                dVar11 = (dVar12 - dVar14) * (4.0 - dVar15) + dVar14;
                            }
                            if (dVar16 < 1.0)
                                goto LAB_1003708d6;
                        LAB_100370900:
                            uVar8 = -(ulong)(dVar21 + dVar21 < 1.0);
                            dVar13 = (double)(~uVar8 & (ulong)dVar14 | uVar8 & (ulong)dVar12);
                            if ((1.0 <= dVar21 + dVar21) && (dVar21 * 3.0 < 2.0)) {
                                dVar13 = (dVar12 - dVar14) * ((double)(param_2 >> 3) * -0.09375 + 3.953125);
                                goto LAB_10037093f;
                            }
                        } else {
                            dVar11 = (dVar12 - dVar14) * dVar15 + dVar14;
                        LAB_1003708f0:
                            if (1.0 <= dVar16)
                                goto LAB_100370900;
                        LAB_1003708d6:
                            dVar13 = (dVar12 - dVar14) * dVar16;
                        LAB_10037093f:
                            dVar13 = dVar13 + dVar14;
                        }
                        if (1.0 <= dVar17) {
                            uVar8 = -(ulong)(dVar10 + dVar10 < 1.0);
                            dVar18 = (double)(~uVar8 & (ulong)dVar14 | uVar8 & (ulong)dVar12);
                            if ((dVar10 + dVar10 < 1.0) || (2.0 <= dVar10 * 3.0))
                                goto LAB_100370768;
                            dVar18 = (dVar12 - dVar14) * (4.0 - dVar17);
                        } else {
                            dVar18 = (dVar12 - dVar14) * dVar17;
                        }
                        dVar18 = dVar18 + dVar14;
                    }
                LAB_100370768:
                    iVar3 = jag::math::RunetekColour::GammaCorrectOSRS(((int)(dVar11 * 256.0) * 65536 +
                                                                        (int)(long)(dVar13 * 256.0) * 256 +
                                                                        (int)(long)(dVar18 * 256.0)) -
                                                                           16777216,
                                                                       (double)(fVar9 + -0.015) + param_1);
                    if (iVar3 == 0) {
                        iVar3 = 1;
                    }
                    piVar4 = (int*)std::array<int, 65536ul>::operator[](uVar7);
                    *piVar4 = iVar3;
                    dVar20 = dVar20 + 1.0;
                    iVar6 = iVar6 + -1;
                    uVar7 = uVar7 + 1;
                } while (iVar6 != -128);
                iVar5 = iVar5 + 128;
                param_2 = param_2 + 1;
            } while (param_2 != param_3);
        }
    }

    // 0x1003709f0, 32 bytes, placed by class name
    // Pix3D::SetTextures(shared_ptr<TextureProvider>)
    void Pix3D::SetTextures(shared_ptr param_1) {
        shared_ptr* in_RDI;

        shared_ptr<TextureProvider>::operator=((shared_ptr<TextureProvider>*)&m_textureProvider, in_RDI);
    }

    // 0x100370a50, 16 bytes, placed by class name
    // Pix3D::SetZoom(int)
    void Pix3D::SetZoom(int param_1) {
        m_zoom = param_1;
    }

    // 0x100370a60, 16 bytes, placed by class name
    // Pix3D::GetZoom()
    int Pix3D::GetZoom() {
        return m_zoom;
    }

    // 0x100370a70, 16 bytes, placed by class name
    // Pix3D::GetXOrigin()
    int Pix3D::GetXOrigin() {
        return m_xOrigin;
    }

    // 0x100370a80, 16 bytes, placed by class name
    // Pix3D::GetYOrigin()
    int Pix3D::GetYOrigin() {
        return m_yOrigin;
    }

    // 0x100370a90, 16 bytes, placed by class name
    // Pix3D::GetXClip3()
    int Pix3D::GetXClip3() {
        return m_xClip3;
    }

    // 0x100370aa0, 16 bytes, placed by class name
    // Pix3D::GetBoundLeft()
    int Pix3D::GetBoundLeft() {
        return m_boundLeft;
    }

    // 0x100370ab0, 16 bytes, placed by class name
    // Pix3D::GetBoundRight()
    int Pix3D::GetBoundRight() {
        return m_boundRight;
    }

    // 0x100370ac0, 16 bytes, placed by class name
    // Pix3D::GetBoundTop()
    int Pix3D::GetBoundTop() {
        return m_boundTop;
    }

    // 0x100370ad0, 16 bytes, placed by class name
    // Pix3D::GetBoundBottom()
    uint Pix3D::GetBoundBottom() {
        return m_boundBottom;
    }

    // 0x100370ae0, 16 bytes, placed by class name
    // Pix3D::SetTrans(int)
    void Pix3D::SetTrans(int param_1) {
        m_trans = param_1;
    }

    // 0x100370af0, 16 bytes, placed by class name
    // Pix3D::GetTrans()
    int Pix3D::GetTrans() {
        return m_trans;
    }

    // 0x100370b00, 16 bytes, placed by class name
    // Pix3D::SetHClip(bool)
    void Pix3D::SetHClip(bool param_1) {
        m_hClip = param_1;
    }

    // 0x100370b10, 16 bytes, placed by class name
    // Pix3D::SetLowDetail(bool)
    void Pix3D::SetLowDetail(bool param_1) {
        m_lowDetail = param_1;
    }

    // 0x100370b20, 64 bytes, placed by class name
    // Pix3D::SetClipping(int, int, int, int)
    void Pix3D::SetClipping(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;

        if (m_width < param_3) {
            param_3 = m_width;
        }
        if (m_height < param_4) {
            param_4 = m_height;
        }
        if (param_2 < 0) {
            param_2 = 0;
        }
        iVar1 = 0;
        if (-1 < param_1) {
            iVar1 = param_1;
        }
        field_96 = iVar1;
        field_88 = param_2;
        field_100 = param_3;
        field_92 = param_4;
    }

    // 0x100370b60, 32 bytes, placed by class name
    // Pix3D::SetRenderClipping()
    void Pix3D::SetRenderClipping() {
        (*(code*)field_0[3])(this, field_96, field_88, field_100, field_92);
    }

    // 0x100370bc0, 112 bytes, placed by class name
    // Pix3D::SetOrigin(int, int)
    void Pix3D::SetOrigin(int param_1, int param_2) {
        int iVar1;
        int* piVar2;
        int iVar3;

        piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_56, 0);
        iVar1 = *piVar2 / m_width;
        iVar3 = (m_width * iVar1 - *piVar2) + param_1;
        m_xOrigin = iVar3;
        iVar1 = param_2 - iVar1;
        m_yOrigin = iVar1;
        m_boundLeft = -iVar3;
        m_boundRight = m_xClip3 - iVar3;
        m_boundTop = -iVar1;
        m_boundBottom = field_32 - iVar1;
    }

    // 0x100370c30, 48 bytes, placed by class name
    // Pix3D::SetHClip(int, int, int)
    void Pix3D::SetHClip(int param_1, int param_2, int param_3) {
        int iVar1;
        bool bVar2;

        bVar2 = true;
        if ((((-1 < param_1) && (iVar1 = m_xClip3, param_1 <= iVar1)) && (-1 < param_2)) &&
            ((param_2 <= iVar1 && (-1 < param_3)))) {
            bVar2 = iVar1 < param_3;
        }
        m_hClip = bVar2;
    }

    // 0x100370c60, 16 bytes, placed by class name
    // Pix3D::GetWidth()
    int Pix3D::GetWidth() {
        return m_width;
    }

    // 0x100370c70, 16 bytes, placed by class name
    // Pix3D::GetHeight()
    int Pix3D::GetHeight() {
        return m_height;
    }

    // 0x100370c80, 16 bytes, placed by class name
    // Pix3D::SetRenderDepth(int)
    void Pix3D::SetRenderDepth(int param_1) {
        m_renderDepth = param_1;
    }

    // 0x100370c90, 32 bytes, placed by class name
    // Pix3D::RotateYAroundX(int, int, int, int)
    int Pix3D::RotateYAroundX(int param_1, int param_2, int param_3, int param_4) {
        return param_1 * param_3 - param_2 * param_4 >> 16;
    }

    // 0x100370cb0, 32 bytes, placed by class name
    // Pix3D::RotateZAroundX(int, int, int, int)
    int Pix3D::RotateZAroundX(int param_1, int param_2, int param_3, int param_4) {
        return param_1 * param_4 + param_2 * param_3 >> 16;
    }

    // 0x10038f980, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Pix3D::m_textureProvider) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee54e8, &Pix3D::m_textureProvider, 4294967296);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Pix3D::~Pix3D();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Pix3D::~Pix3D();

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100347490, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(int&, int&&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr)&&, int&)
    jag* jag::make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&,
                          decltype(nullptr), int&>(int* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                                   int* param_6, int* param_7, bool* param_8,
                                                   _func_decltype_nullptr** param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&,
                              decltype(nullptr), int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4,
                                                       param_5, param_6, param_7, param_8, param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100347570, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr)&&, int&)
    jag* jag::make_shared<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&,
                          decltype(nullptr), int&>(int* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                                   int* param_6, int* param_7, bool* param_8,
                                                   _func_decltype_nullptr** param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&,
                              decltype(nullptr), int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4,
                                                       param_5, param_6, param_7, param_8, param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100347650, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(int&, int&&, int&&, int&, int&, int&, int const&, bool&, decltype(nullptr)&&, int&)
    jag* jag::make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&,
                          decltype(nullptr), int&>(int* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                                   int* param_6, int* param_7, bool* param_8,
                                                   _func_decltype_nullptr** param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&,
                              decltype(nullptr), int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4,
                                                       param_5, param_6, param_7, param_8, param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
