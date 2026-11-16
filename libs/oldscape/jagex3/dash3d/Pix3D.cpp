// libs/oldscape/jagex3/dash3d/Pix3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Pix3D.h"

namespace jag::oldscape::dash3d {
    // 0x103936078, set at startup by ___cxx_global_var_init.129
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Pix3D::m_textureProvider =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x10394be70
    uint8_t Pix3D::m_divTable[2048];

    // 0x10394c670
    std::array<int, 2048ul> Pix3D::m_divTable2;

    // 0x10394e670
    std::array<int, 2048ul> Pix3D::m_sinTable;

    // 0x103950670
    std::array<int, 2048ul> Pix3D::m_cosTable;

    // 0x103952670
    std::array<int, _65536ul> Pix3D::m_colourTable;

    // 0x100344ce0
    array<int, _65536ul>* Pix3D::GetColourTable() {
        return (array<int, _65536ul>*)&m_colourTable;
    }

    // 0x100345590
    array<int, _2048ul>* Pix3D::GetCosTable() {
        return (array<int, _2048ul>*)&m_cosTable;
    }

    // 0x10034dea0
    array<int, _2048ul>* Pix3D::GetSinTable() {
        return (array<int, _2048ul>*)&m_sinTable;
    }

    // 0x10034deb0
    int Pix3D::RotateXAroundY(int arg1, int arg2, int arg3, int arg4) {
        return arg2 * arg4 + arg1 * arg3 >> 16;
    }

    // 0x10034ded0
    int Pix3D::RotateZAroundY(int arg1, int arg2, int arg3, int arg4) {
        return arg2 * arg3 - arg1 * arg4 >> 16;
    }

    // 0x10035fb00
    int Pix3D::GetRenderDepth() const {
        return m_renderDepth;
    }

    // 0x10035fb10
    int Pix3D::InvRotateYAroundX(int arg1, int arg2, int arg3, int arg4) {
        return arg2 * arg4 + arg1 * arg3 >> 16;
    }

    // 0x10035fb30
    int Pix3D::InvRotateZAroundX(int arg1, int arg2, int arg3, int arg4) {
        return arg2 * arg3 - arg1 * arg4 >> 16;
    }

    // 0x10035fb50
    int Pix3D::InvRotateXAroundY(int arg1, int arg2, int arg3, int arg4) {
        return arg1 * arg3 - arg2 * arg4 >> 16;
    }

    // 0x10035fb70
    int Pix3D::InvRotateZAroundY(int arg1, int arg2, int arg3, int arg4) {
        return arg2 * arg3 + arg1 * arg4 >> 16;
    }

    // 0x100365660
    void Pix3D::GetDivTable2() {
        return &m_divTable2;
    }

    // 0x100366480
    void Pix3D::SetRenderClipping(int arg1, int arg2, int arg3, int arg4) {
        unsigned int uVar2;
        int* piVar3;
        unsigned long arg1_00;

        m_xClip3 = arg3 - arg1;
        field_32 = arg4 - arg2;
        ResetOrigin();
        uint8_t* this_00 = &field_56;
        int iVar1 = this_00->size();
        if (iVar1 < (int)field_32) {
            uVar2 = jag::math::NearestPowerOf2GreaterOrEqual(field_32);
            this_00->resize((unsigned long)uVar2);
        }
        if (0 < (int)field_32) {
            iVar1 = arg2 * m_width + arg1;
            arg1_00 = 0;
            do {
                piVar3 = (int*)(*this_00)[arg1_00];
                *piVar3 = iVar1;
                iVar1 = iVar1 + m_width;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_32);
        }
    }

    // 0x1003665e0
    void Pix3D::ResetOrigin() {
        int iVar1 = m_xClip3 / 2;
        m_xOrigin = iVar1;
        int iVar2 = (int)field_32 / 2;
        m_yOrigin = iVar2;
        m_boundLeft = -iVar1;
        m_boundRight = m_xClip3 - iVar1;
        m_boundTop = -iVar2;
        m_boundBottom = field_32 - iVar2;
    }

    // 0x100366650
    void Pix3D::SetRenderZoom(int arg1, int arg2) {
        SetZoom(arg1);
    }

    // 0x100366670
    void Pix3D::CalculateRenderDepth(int arg1) {
        SetRenderDepth(arg1 * 140);
    }

    // 0x100366760
    int Pix3D::TextureLightColour(int arg1, int arg2) {
        int iVar1 = (arg1 & 127U) * arg2;
        int iVar2 = iVar1 >> 7;
        int iVar3 = 126;
        if (iVar2 < 126) {
            iVar3 = iVar2;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return iVar2 + (arg1 & 65408U);
    }

    // 0x1003671a0
    void Pix3D::InitColourTable(double arg1) {
        InitColourTable(arg1, 0, 512);
    }

    // 0x1003703f0
    void Pix3D::GetDivTable() {
        return &m_divTable;
    }

    // 0x100370400
    void Pix3D::InitTables() {
        uint32_t* puVar1;
        int* piVar2;
        unsigned long in_RSI;
        double dVar4;
        double in_XMM1_Qa;

        array<int, 512ul>* this_00 = (array<int, 512ul>*)&DAT_00000001;
        do {
            puVar1 = (uint32_t*)(*this_00)[in_RSI];
            *puVar1 = (int)(32768 / ((unsigned long)this_00 & 4294967295));
            this_00 = this_00 + 1;
        } while (this_00 != (array<int, 512ul>*)512);
        unsigned long uVar3 = 1;
        do {
            puVar1 = &m_divTable2[uVar3];
            *puVar1 = (int)(65536 / (uVar3 & 4294967295));
            uVar3 = uVar3 + 1;
        } while (uVar3 != 2048);
        uVar3 = 0;
        do {
            dVar4 = (double)___sincos_stret((double)(int)uVar3 * 0.0030679615);
            piVar2 = &m_sinTable[uVar3];
            *piVar2 = (int)(dVar4 * 65536.0);
            piVar2 = &m_cosTable[uVar3];
            *piVar2 = (int)(in_XMM1_Qa * 65536.0);
            uVar3 = uVar3 + 1;
            in_XMM1_Qa = 65536.0;
        } while (uVar3 != 2048);
    }

    // 0x100370540
    void Pix3D::InitColourTable(double arg1, int arg2, int arg3) {
        double dVar1;
        double dVar2;
        int iVar3;
        int* extraout_RAX;
        int iVar4;
        uint32_t in_register_00000034;
        int iVar6;
        array<int, 65536ul>* array;
        unsigned long uVar7;
        double dVar9;
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

        float fVar8 = (float)((Random*)&jag::math::g_Rand)->FRand(0.03);
        if (arg2 < arg3) {
            iVar4 = arg2 << 7;
            do {
                dVar9 = (double)(arg2 >> 3) * 0.015625f;
                dVar20 = dVar9 + 0.0078125f;
                dVar1 = (double)(arg2 & 7) * 0.125;
                dVar18 = dVar1 + 0.0625;
                uVar7 = -(unsigned long)(1.0 < dVar9 + 0.3411458333333333);
                dVar2 = (double)(~uVar7 & (unsigned long)(dVar9 + 0.3411458333333333) |
                                 (unsigned long)(dVar9 - 0.6588541666666667) & uVar7);
                uVar7 = -(unsigned long)(dVar9 - 0.3255208333333333 < 0.0);
                dVar9 = (double)(~uVar7 & (unsigned long)(dVar9 - 0.3255208333333333) |
                                 (unsigned long)(dVar9 + 0.6744791666666667) & uVar7);
                dVar14 = dVar2 * 6.0;
                dVar15 = dVar20 * 6.0;
                dVar16 = dVar9 * 6.0;
                iVar6 = 0;
                dVar19 = 0.0;
                array = (array<int, 65536ul>*)(long)iVar4;
                do {
                    dVar10 = dVar19 * 0.0078125f;
                    if (dVar18 == 0.0) {
                        dVar12 = dVar10;
                        dVar17 = dVar10;
                    } else {
                        dVar11 = (double)(-(unsigned long)(dVar10 < 0.5) & (unsigned long)(dVar10 * (dVar1 + 1.0625)) |
                                          ~-(unsigned long)(dVar10 < 0.5) &
                                              (unsigned long)((dVar10 + dVar18) - dVar10 * dVar18));
                        dVar13 = dVar19 * 0.015625f - dVar11;
                        if (1.0 <= dVar14) {
                            uVar7 = -(unsigned long)(dVar2 + dVar2 < 1.0);
                            dVar10 = (double)(~uVar7 & (unsigned long)dVar13 | uVar7 & (unsigned long)dVar11);
                            if (dVar2 + dVar2 < 1.0)
                                goto LAB_1003708f0;
                            if (dVar2 * 3.0 < 2.0) {
                                dVar10 = (dVar11 - dVar13) * (4.0 - dVar14) + dVar13;
                            }
                            if (dVar15 < 1.0)
                                goto LAB_1003708d6;
                        LAB_100370900:
                            uVar7 = -(unsigned long)(dVar20 + dVar20 < 1.0);
                            dVar12 = (double)(~uVar7 & (unsigned long)dVar13 | uVar7 & (unsigned long)dVar11);
                            if ((1.0 <= dVar20 + dVar20) && (dVar20 * 3.0 < 2.0)) {
                                dVar12 = (dVar11 - dVar13) * ((double)(arg2 >> 3) * -0.09375f + 3.953125f);
                                goto LAB_10037093f;
                            }
                        } else {
                            dVar10 = (dVar11 - dVar13) * dVar14 + dVar13;
                        LAB_1003708f0:
                            if (1.0 <= dVar15)
                                goto LAB_100370900;
                        LAB_1003708d6:
                            dVar12 = (dVar11 - dVar13) * dVar15;
                        LAB_10037093f:
                            dVar12 = dVar12 + dVar13;
                        }
                        if (1.0 <= dVar16) {
                            uVar7 = -(unsigned long)(dVar9 + dVar9 < 1.0);
                            dVar17 = (double)(~uVar7 & (unsigned long)dVar13 | uVar7 & (unsigned long)dVar11);
                            if ((dVar9 + dVar9 < 1.0) || (2.0 <= dVar9 * 3.0))
                                goto LAB_100370768;
                            dVar17 = (dVar11 - dVar13) * (4.0 - dVar16);
                        } else {
                            dVar17 = (dVar11 - dVar13) * dVar16;
                        }
                        dVar17 = dVar17 + dVar13;
                    }
                LAB_100370768:
                    iVar3 = jag::math::RunetekColour::GammaCorrectOSRS(((int)(dVar10 * 256.0) * 65536 +
                                                                        (int)(long)(dVar12 * 256.0) * 256 +
                                                                        (int)(long)(dVar17 * 256.0)) -
                                                                           16777216,
                                                                       (double)(fVar8 - 0.015) + arg1);
                    if (iVar3 == 0) {
                        iVar3 = 1;
                    }
                    (*array)[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg3)];
                    *extraout_RAX = iVar3;
                    dVar19 = dVar19 + 1.0;
                    iVar6 = iVar6 - 1;
                    array = array + 1;
                } while (iVar6 != -128);
                iVar4 = iVar4 + 128;
                arg2 = arg2 + 1;
            } while (arg2 != arg3);
        }
    }

    // 0x1003709f0
    void Pix3D::SetTextures(shared_ptr<TextureProvider> textureProvider) {
        m_textureProvider = *textureProvider;
    }

    // 0x100370a50
    void Pix3D::SetZoom(int arg1) {
        m_zoom = arg1;
    }

    // 0x100370a60
    int Pix3D::GetZoom() {
        return m_zoom;
    }

    // 0x100370a70
    int Pix3D::GetXOrigin() {
        return m_xOrigin;
    }

    // 0x100370a80
    int Pix3D::GetYOrigin() {
        return m_yOrigin;
    }

    // 0x100370a90
    int Pix3D::GetXClip3() {
        return m_xClip3;
    }

    // 0x100370aa0
    int Pix3D::GetBoundLeft() {
        return m_boundLeft;
    }

    // 0x100370ab0
    int Pix3D::GetBoundRight() {
        return m_boundRight;
    }

    // 0x100370ac0
    int Pix3D::GetBoundTop() {
        return m_boundTop;
    }

    // 0x100370ad0
    unsigned int Pix3D::GetBoundBottom() {
        return m_boundBottom;
    }

    // 0x100370ae0
    void Pix3D::SetTrans(int arg1) {
        m_trans = arg1;
    }

    // 0x100370af0
    int Pix3D::GetTrans() {
        return m_trans;
    }

    // 0x100370b00
    void Pix3D::SetHClip(bool arg1) {
        m_hClip = arg1;
    }

    // 0x100370b10
    void Pix3D::SetLowDetail(bool arg1) {
        m_lowDetail = arg1;
    }

    // 0x100370b20
    void Pix3D::SetClipping(int arg1, int arg2, int arg3, int arg4) {
        if (m_width < arg3) {
            arg3 = m_width;
        }
        if (m_height < arg4) {
            arg4 = m_height;
        }
        if (arg2 < 0) {
            arg2 = 0;
        }
        int iVar1 = 0;
        if (-1 < arg1) {
            iVar1 = arg1;
        }
        field_96 = iVar1;
        field_88 = arg2;
        field_100 = arg3;
        field_92 = arg4;
    }

    // 0x100370b60
    void Pix3D::SetRenderClipping() {
        SetRenderClipping((int)this, field_96, field_88, field_100);
    }

    // 0x100370bc0
    void Pix3D::SetOrigin(int arg1, int arg2) {
        int* piVar2 = &field_56[0];
        int iVar1 = *piVar2 / m_width;
        int iVar3 = (m_width * iVar1 - *piVar2) + arg1;
        m_xOrigin = iVar3;
        iVar1 = arg2 - iVar1;
        m_yOrigin = iVar1;
        m_boundLeft = -iVar3;
        m_boundRight = m_xClip3 - iVar3;
        m_boundTop = -iVar1;
        m_boundBottom = field_32 - iVar1;
    }

    // 0x100370c30
    void Pix3D::SetHClip(int arg1, int arg2, int arg3) {
        int iVar1;

        bool bVar2 = true;
        if ((((-1 < arg1) && (iVar1 = m_xClip3, arg1 <= iVar1)) && (-1 < arg2)) && ((arg2 <= iVar1 && (-1 < arg3)))) {
            bVar2 = iVar1 < arg3;
        }
        m_hClip = bVar2;
    }

    // 0x100370c60
    int Pix3D::GetWidth() {
        return m_width;
    }

    // 0x100370c70
    int Pix3D::GetHeight() {
        return m_height;
    }

    // 0x100370c80
    void Pix3D::SetRenderDepth(int arg1) {
        m_renderDepth = arg1;
    }

    // 0x100370c90
    int Pix3D::RotateYAroundX(int arg1, int arg2, int arg3, int arg4) {
        return arg1 * arg3 - arg2 * arg4 >> 16;
    }

    // 0x100370cb0
    int Pix3D::RotateZAroundX(int arg1, int arg2, int arg3, int arg4) {
        return arg1 * arg4 + arg2 * arg3 >> 16;
    }

    // 0x100c92b50: Pix3D::~Pix3D() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100347490
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(
        int& arg1, int&& arg2, int& arg3, int& arg4, int& arg5, int& arg6, const int& arg7, bool& arg8,
        decltype(nullptr)&& arg9, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&,
                              decltype(nullptr), int&>((void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7,
                                                       (int*)arg8, (bool*)arg9, (void**)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100347570
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                int&>(int& arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6, const int& arg7, bool& arg8,
                      decltype(nullptr)&& arg9, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&,
                              decltype(nullptr), int&>((void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7,
                                                       (int*)arg8, (bool*)arg9, (void**)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100347650
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(
        int& arg1, int&& arg2, int&& arg3, int& arg4, int& arg5, int& arg6, const int& arg7, bool& arg8,
        decltype(nullptr)&& arg9, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&,
                              decltype(nullptr), int&>((void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7,
                                                       (int*)arg8, (bool*)arg9, (void**)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag
