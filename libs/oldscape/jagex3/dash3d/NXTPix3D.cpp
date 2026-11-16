// libs/oldscape/jagex3/dash3d/NXTPix3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "NXTPix3D.h"

namespace jag::oldscape::dash3d {
    // 0x100f37e18, 8 bytes, __data
    NXTPix3D::m_needUploadTextureData = 1;

    // 0x10394be60, 8 bytes, __common; zero-initialised
    NXTPix3D::m_needColTabUpdate;

    // 0x1003637e0, 48 bytes, placed by class name and debug map
    // NXTPix3D::FlatTriangle(int, int, int, int, int, int, int)
    void NXTPix3D::FlatTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7) {
        int iVar1;

        iVar1 = field_16;
        GouraudTriangleOpenGL((int)this, param_1, param_2, param_3, param_4, param_5, param_6, iVar1, iVar1, iVar1,
                              param_7, param_7, param_7);
    }

    // 0x100363810, 64 bytes, placed by class name and debug map
    // NXTPix3D::GouraudTriangle(int, int, int, int, int, int, int, int, int)
    void NXTPix3D::GouraudTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                   int param_7, int param_8, int param_9) {
        int iVar1;

        iVar1 = field_16;
        GouraudTriangleOpenGL((int)this, param_1, param_2, param_3, param_4, param_5, param_6, iVar1, iVar1, iVar1,
                              param_7, param_8, param_9);
    }

    // 0x100363850, 1024 bytes, placed by class name and debug map
    // NXTPix3D::TextureTriangleOpenGL(int, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, int)
    void NXTPix3D::TextureTriangleOpenGL(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                         int param_7, int param_8, int param_9, int param_10, int param_11,
                                         int param_12, float param_13, float param_14, float param_15, float param_16,
                                         float param_17, float param_18, int param_19) {
        short sVar3;
        undefined2 uVar4;
        short sVar5;
        short sVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        long* plVar10;
        int* piVar11;
        long lVar12;
        shared_ptr* extraout_RDX;
        ErrorCapture local_3f8[17];
        shared_ptr local_a8;
        int local_7c;
        uint local_78;
        int local_74;
        shared_ptr local_70;
        int local_50[4];
        short local_3e;
        float local_3c;
        float local_38;
        float local_34;

        local_3c = param_14;
        local_38 = param_16;
        local_34 = param_13;
        ErrorCapture::ErrorCapture(local_3f8, true);
        plVar10 =
            (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
        iVar7 = param_19;
        (**(code**)(*plVar10 + 16))(&local_a8, plVar10, param_19, local_3f8);
        if (!operator==(&local_a8, (_func_decltype_nullptr*)0)) {
            if (local_3f8->IsRaised() == '\0') {
                iVar8 = field_12;
                local_70._0_4_ = 2;
                piVar11 = std::max<int>(&param_10, (int*)&local_70);
                local_50[0] = 126;
                piVar11 = std::min<int>(piVar11, local_50);
                param_10 = *piVar11 + 1024;
                local_70._0_4_ = 2;
                piVar11 = std::max<int>(&param_11, (int*)&local_70);
                local_50[0] = 126;
                piVar11 = std::min<int>(piVar11, local_50);
                param_11 = *piVar11 + 1024;
                local_70._0_4_ = 2;
                piVar11 = std::max<int>(&param_12, (int*)&local_70);
                local_50[0] = 126;
                piVar11 = std::min<int>(piVar11, local_50);
                param_12 = *piVar11 + 1024;
                sVar3 = OSRenderCore_RenderThread::GetAtlasUV(iVar7);
                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_70, (jag*)&Pix3D::m_textureProvider,
                                                                         extraout_RDX);
                iVar7 = shared_ptr<TextureCache>::operator->((shared_ptr<TextureCache>*)&local_70);
                local_50->GetTexture(iVar7);
                lVar12 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)local_50);
                iVar7 = *(int*)(lVar12 + 160);
                local_50->~shared_ptr();
                iVar9 = shared_ptr<TextureCache>::operator->((shared_ptr<TextureCache>*)&local_70);
                local_50->GetTexture(iVar9);
                local_3e = sVar3;
                lVar12 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)local_50);
                local_78 = -(uint)(iVar8 == 0) | iVar8 << 8 | 255;
                iVar8 = *(int*)(lVar12 + 164);
                local_50->~shared_ptr();
                local_7c = (int)(short)param_10;
                uVar4 = OSRenderCore_RenderThread::GetLocalU(local_34, iVar7);
                local_34 = (float)CONCAT22(local_34._2_2_, uVar4);
                uVar4 = OSRenderCore_RenderThread::GetLocalU(local_38, iVar8);
                local_38 = (float)CONCAT22(local_38._2_2_, uVar4);
                local_74 = (int)(short)param_11;
                uVar4 = OSRenderCore_RenderThread::GetLocalU(local_3c, iVar7);
                local_3c = (float)CONCAT22(local_3c._2_2_, uVar4);
                sVar3 = OSRenderCore_RenderThread::GetLocalU(param_17, iVar8);
                iVar9 = (int)(short)param_12;
                sVar5 = OSRenderCore_RenderThread::GetLocalU(param_15, iVar7);
                sVar6 = OSRenderCore_RenderThread::GetLocalU(param_18, iVar8);
                iVar7 = (int)(short)local_78;
                iVar8 = (int)local_3e;
                (*(code*)((NXTPix3D*)this)->field_0[12])(
                    (NXTPix3D*)this, (int)(short)param_4, (int)(short)param_1, (int)(short)param_7, iVar8, local_7c,
                    iVar7, (int)local_34._0_2_, (int)local_38._0_2_, (int)(short)param_5, (int)(short)param_2,
                    (int)(short)param_8, iVar8, local_74, iVar7, (int)local_3c._0_2_, (int)sVar3, (int)(short)param_6,
                    (int)(short)param_3, (int)(short)param_9, iVar8, iVar9, iVar7, (int)sVar5, (int)sVar6);
                local_70.~shared_ptr();
                goto LAB_100363bcf;
            }
        }
        plVar10 =
            (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
        iVar7 = (**(code**)(*plVar10 + 24))(plVar10, iVar7);
        iVar8 = Pix3D::TextureLightColour(iVar7, param_10);
        iVar9 = Pix3D::TextureLightColour(iVar7, param_11);
        iVar7 = Pix3D::TextureLightColour(iVar7, param_12);
        GouraudTriangle(this, param_1, param_2, param_3, param_4, param_5, param_6, iVar8, iVar9, iVar7);
    LAB_100363bcf:
        local_a8.~shared_ptr();
        local_3f8->~LanguageMessage();
    }

    // 0x100365dd0, 128 bytes, base-object constructor, placed by class name
    // NXTPix3D::NXTPix3D(NXTRenderable&)
    void NXTPix3D::NXTPix3D(NXTRenderable* param_1) {
        int iVar1;

        new (this) Pix3D();
        field_0 = &PTR__NXTPix3D_100efbf30;
        field_120 = (NXTRenderCanvas*)0;
        new (&field_144) UISceneSettings();
        new (field_176, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_128 = param_1;
        iVar1 = (**(code**)(param_1->field_0 + 8))(param_1);
        field_104 = iVar1;
        iVar1 = (**(code**)(param_1->field_0 + 16))(param_1);
        field_108 = iVar1;
    }

    // 0x100365e50, 16 bytes, complete-object constructor, placed by class name
    // NXTPix3D::NXTPix3D(NXTRenderable&): jumps straight to the base-object constructor

    // 0x100365e60, 256 bytes, placed by class name
    // NXTPix3D::PrepareRender()
    void NXTPix3D::PrepareRender() {
        bool bVar1;
        bool bVar2;
        char cVar3;
        byte bVar4;
        int iVar5;
        long* plVar6;
        NXTRenderer* this_00;
        TextureProvider* pTVar7;
        undefined8 uVar9;
        NXTPix3D* this_01;

        plVar6 = (long*)Instance();
        this_00 = (NXTRenderer*)NXTRenderer::GetInstancePtr();
        cVar3 = (**(code**)*plVar6)(plVar6);
        if (cVar3 == '\0') {
            m_needUploadTextureData = 1;
        }
        if (m_needUploadTextureData != 0 || m_needColTabUpdate != '\0') {
            cVar3 = (((long)plVar6 + *(long*)(*plVar6 + -24)))->WasRenderContextReady();
            bVar2 = (bool)m_needColTabUpdate;
            bVar1 = (bool)m_needUploadTextureData;
            if (cVar3 != '\0') {
                pTVar7 = (TextureProvider*)shared_ptr<TextureProvider>::operator*(
                    (shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
                bVar4 = this_00->InitColTabAndUploadTextureData(bVar2, bVar1, pTVar7);
                if (m_needUploadTextureData != 0) {
                    m_needUploadTextureData = bVar4 ^ 1;
                }
                if (m_needColTabUpdate != '\0') {
                    m_needColTabUpdate = '\0';
                }
            }
        }
        pTVar7 = (TextureProvider*)shared_ptr<TextureProvider>::operator*(
            (shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
        this_00->UpdateTextureOffsets(pTVar7);
        field_120 = (NXTRenderCanvas*)(**(code**)field_128->field_0)();
        iVar5 = (**(code**)(field_128->field_0 + 8))();
        field_104 = iVar5;
        this_01 = (NXTPix3D*)field_128;
        iVar5 = (*(code*)this_01->field_0[2])();
        field_108 = iVar5;
        uVar9 = GetHeapSize(this_01);
        *(undefined8*)&this_00->field_280 = uVar9;
    }

    // 0x100366290, 64 bytes, placed by class name
    // NXTPix3D::GetHeapSize()
    ulonglong NXTPix3D::GetHeapSize() {
        ulonglong* puVar1;
        undefined1 local_20[8];
        ulonglong local_18;

        puVar1 = (ulonglong*)Instance();
        SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        hardware::HardwareInfo::GetProcessMemoryBytes(puVar1, &local_18, (ulonglong)local_20);
        return local_18;
    }

    // 0x1003662d0, 176 bytes, placed by class name
    // NXTPix3D::SetMaxViewport(int, int, int, int, int, int)
    void NXTPix3D::SetMaxViewport(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        long* plVar1;

        field_136 = param_1;
        field_140 = param_2;
        (field_120, param_1 + param_3, param_2 + param_4, param_5 - param_3, param_6 - param_4)->SetRenderRect();
        new (field_176, param_1 + param_3, param_2 + param_4, param_5 - param_3, param_6 - param_4) GridRect();
        new (field_160, 4294967295) ServerConnectionWorkItem();
        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->AddUISceneSettings((UISceneSettings*)&field_144);
    }

    // 0x1003663a0, 224 bytes, placed by class name
    // NXTPix3D::SetRenderClipping(int, int, int, int)
    void NXTPix3D::SetRenderClipping(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        char cVar1;
        int* piVar2;
        long* plVar3;
        Rect local_60[16];
        Rect<unsigned int> local_50[16];
        undefined1 local_40[16];

        SetRenderClipping(param_1, param_2, param_3, param_4);
        new (local_40) GridRect(param_1 + field_136, param_2 + field_140, param_3 - param_1, param_4 - param_2);
        jag::math::Rect<unsigned int>::Rect(local_50, (Rect*)field_176);
        local_60->Intersection(local_40, local_50);
        this_00 = field_160;
        jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)this_00, local_60);
        cVar1 = render::StencilOpDesc::operator==((StencilOpDesc*)field_176, (StencilOpDesc*)this_00);
        if (cVar1 == '\0') {
            piVar2 = (int*)this_00->qw();
            if (0 < *piVar2)
                goto LAB_100366450;
        }
        new (this_00) ServerConnectionWorkItem(4294967295);
    LAB_100366450:
        plVar3 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar3 + *(long*)(*plVar3 + -24)))->AddUISceneSettings((UISceneSettings*)&field_144);
    }

    // 0x100366510, 144 bytes, placed by class name
    // NXTPix3D::SetRenderOrigin(int, int)
    void NXTPix3D::SetRenderOrigin(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int* piVar3;
        long* plVar4;

        piVar3 = (int*)field_176->second();
        iVar1 = *piVar3;
        piVar3 = (int*)field_176->qw();
        iVar2 = *piVar3;
        *(int*)&field_144 = param_1 - iVar1 / 2;
        *(int*)&field_148 = param_2 - iVar2 / 2;
        plVar4 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar4 + *(long*)(*plVar4 + -24)))->AddUISceneSettings((UISceneSettings*)&field_144);
    }

    // 0x1003665a0, 64 bytes, placed by class name
    // NXTPix3D::ResetOrigin()
    void NXTPix3D::ResetOrigin() {
        long* plVar1;

        ResetOrigin();
        *(undefined8*)&field_144 = 0;
        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->AddUISceneSettings((UISceneSettings*)&field_144);
    }

    // 0x100366620, 48 bytes, placed by class name
    // NXTPix3D::SetRenderZoom(int, int)
    void NXTPix3D::SetRenderZoom(int param_1, int param_2) {
        long* plVar1;

        SetRenderZoom(param_1, param_2);
        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->SetZoom(param_1, param_2);
    }

    // 0x100366660, 16 bytes, placed by class name
    // NXTPix3D::CalculateRenderDepth(int)
    void NXTPix3D::CalculateRenderDepth(int param_1) {
        CalculateRenderDepth(param_1);
    }

    // 0x100366690, 208 bytes, placed by class name
    // NXTPix3D::GouraudTriangleOpenGL(int, int, int, int, int, int, int, int, int, int, int, int, int)
    void NXTPix3D::GouraudTriangleOpenGL(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                         int param_7, int param_8, int param_9, int param_10, int param_11,
                                         int param_12, int param_13) {
        int iVar1;
        undefined4 in_register_0000003c;

        iVar1 = *(int*)(CONCAT44(in_register_0000003c, param_1) + 12);
        iVar1 = (int)(short)(-(ushort)(iVar1 == 0) | (ushort)(iVar1 << 8) | 255);
        (**(code**)(*(long*)CONCAT44(in_register_0000003c, param_1) + 96))(
            param_1, (int)(short)param_5, (int)(short)param_2, (int)(short)param_8, 0, (int)(short)param_11, iVar1, 0,
            0, (int)(short)param_6, (int)(short)param_3, (int)(short)param_9, 0, (int)(short)param_12, iVar1, 0, 0,
            (int)(short)param_7, (int)(short)param_4, (int)(short)param_10, 0, (int)(short)param_13, iVar1, 0, 0);
    }

    // 0x1003667c0, 848 bytes, placed by class name
    // NXTPix3D::TextureTriangleAffineOpenGL(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void NXTPix3D::TextureTriangleAffineOpenGL(int param_1, int param_2, int param_3, int param_4, int param_5,
                                               int param_6, int param_7, int param_8, int param_9, int param_10,
                                               int param_11, int param_12, int param_13, int param_14, int param_15,
                                               int param_16, int param_17, int param_18, int param_19, int param_20,
                                               int param_21, int param_22) {
        int iVar3;
        int iVar4;
        int iVar5;
        long* plVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        ErrorCapture local_3a8[17];
        shared_ptr local_58;

        ErrorCapture::ErrorCapture(local_3a8, true);
        plVar6 =
            (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
        (**(code**)(*plVar6 + 16))(&local_58, plVar6, param_22, local_3a8);
        if (!operator==(&local_58, (_func_decltype_nullptr*)0)) {
            if (local_3a8->IsRaised() == '\0') {
                iVar8 = param_14 - param_13;
                iVar7 = param_17 - param_16;
                iVar5 = param_20 - param_19;
                iVar9 = param_15 - param_13;
                iVar4 = param_18 - param_16;
                fVar17 = (float)iVar5;
                iVar3 = param_21 - param_19;
                fVar22 = (float)(iVar3 * iVar7 - iVar5 * iVar4);
                fVar20 = (float)iVar3;
                fVar13 = (float)(iVar5 * iVar9 - iVar3 * iVar8);
                fVar24 = (float)iVar4;
                fVar18 = (float)iVar7;
                fVar25 = (float)(iVar4 * iVar8 - iVar7 * iVar9);
                fVar23 = (float)iVar9;
                fVar16 = fVar25 * fVar24 - fVar13 * fVar20;
                fVar12 = fVar22 * fVar20 - fVar25 * fVar23;
                fVar19 = (float)iVar8;
                fVar11 = fVar13 * fVar23 - fVar22 * fVar24;
                fVar10 = fVar11 * fVar17 + fVar12 * fVar18 + fVar16 * fVar19;
                fVar14 = 1.0 / fVar10;
                fVar15 = fVar25 * fVar18 - fVar13 * fVar17;
                fVar25 = fVar22 * fVar17 - fVar25 * fVar19;
                fVar13 = fVar13 * fVar19 - fVar22 * fVar18;
                fVar21 = fVar20 * fVar13 + fVar24 * fVar25 + fVar23 * fVar15;
                fVar22 = 1.0 / fVar21;
                TextureTriangleOpenGL(
                    (NXTPix3D*)this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                    param_10, param_11, param_12, (fVar16 + fVar12 + fVar11) * fVar14, fVar10 * fVar14,
                    (fVar11 * fVar20 + fVar12 * fVar24 + fVar16 * fVar23) * fVar14, (fVar15 + fVar25 + fVar13) * fVar22,
                    (fVar13 * fVar17 + fVar25 * fVar18 + fVar15 * fVar19) * fVar22, fVar22 * fVar21, param_22);
                goto LAB_100366abd;
            }
        }
        plVar6 =
            (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
        iVar3 = (**(code**)(*plVar6 + 24))(plVar6, param_22);
        iVar4 = Pix3D::TextureLightColour(iVar3, param_10);
        iVar5 = Pix3D::TextureLightColour(iVar3, param_11);
        iVar3 = Pix3D::TextureLightColour(iVar3, param_12);
        GouraudTriangle((NXTPix3D*)this, param_1, param_2, param_3, param_4, param_5, param_6, iVar4, iVar5, iVar3);
    LAB_100366abd:
        local_58.~shared_ptr();
        local_3a8->~LanguageMessage();
    }

    // 0x100366b10, 16 bytes, placed by class name
    // NXTPix3D::TextureTriangle(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void NXTPix3D::TextureTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                   int param_7, int param_8, int param_9, int param_10, int param_11, int param_12,
                                   int param_13, int param_14, int param_15, int param_16, int param_17, int param_18,
                                   int param_19) {}

    // 0x100366b20, 16 bytes, placed by class name
    // NXTPix3D::TextureTriangleAffine(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void NXTPix3D::TextureTriangleAffine(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                         int param_7, int param_8, int param_9, int param_10, int param_11,
                                         int param_12, int param_13, int param_14, int param_15, int param_16,
                                         int param_17, int param_18, int param_19) {}

    // 0x100366b30, 336 bytes, placed by class name
    // NXTPix3D::RenderCore_RenderTriangle(short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short)
    void NXTPix3D::RenderCore_RenderTriangle(short param_1, short param_2, short param_3, short param_4, short param_5,
                                             short param_6, short param_7, short param_8, short param_9, short param_10,
                                             short param_11, short param_12, short param_13, short param_14,
                                             short param_15, short param_16, short param_17, short param_18,
                                             short param_19, short param_20, short param_21, short param_22,
                                             short param_23, short param_24) {
        OSRenderCore_LogicThread_JavaStyle* this_00;

        this_00 = (OSRenderCore_LogicThread_JavaStyle*)Instance();
        this_00->RenderTriangle(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                                param_10, param_11, param_12, param_13, param_14, param_15, param_16, param_17,
                                param_18, param_19, param_20, param_21, param_22, param_23, param_24);
    }

} // namespace jag::oldscape::dash3d
