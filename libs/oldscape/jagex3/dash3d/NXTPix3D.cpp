// libs/oldscape/jagex3/dash3d/NXTPix3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "NXTPix3D.h"

namespace jag::oldscape::dash3d {
    // 0x100f37e18
    int64_t NXTPix3D::m_needUploadTextureData = 1;

    // 0x10394be60
    int64_t NXTPix3D::m_needColTabUpdate;

    // 0x1003637e0
    void NXTPix3D::FlatTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        int in_stack_fffffffffffffff0;

        int arg7_00 = field_16;
        GouraudTriangleOpenGL(arg1, arg2, arg3, arg4, arg5, arg6, arg7_00, arg7_00, arg7_00, arg7, arg7, arg7,
                              in_stack_fffffffffffffff0);
    }

    // 0x100363810
    void NXTPix3D::GouraudTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                   int arg9) {
        int in_stack_ffffffffffffffe0;

        int arg7_00 = field_16;
        GouraudTriangleOpenGL(arg1, arg2, arg3, arg4, arg5, arg6, arg7_00, arg7_00, arg7_00, arg7, arg8, arg9,
                              in_stack_ffffffffffffffe0);
    }

    // 0x100363850
    void NXTPix3D::TextureTriangleOpenGL(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                         int arg9, int arg10, int arg11, int arg12, float arg13, float arg14,
                                         float arg15, float arg16, float arg17, float arg18, int arg19) {
        short sVar3;
        uint16_t uVar4;
        short arg17_00;
        short arg24;
        int iVar6;
        int iVar7;
        int* piVar9;
        TextureCache* pTVar10;
        long lVar11;
        shared_ptr<configdecoder::ObjType> local_a8;
        int local_7c;
        unsigned int local_78;
        int local_74;
        int local_70[4];
        ReturnValue local_50;
        short local_3e;

        float local_3c = arg14;
        float local_38 = arg16;
        float local_34 = arg13;
        ErrorCapture local_3f8(true);
        long* plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
        int iVar5 = arg19;
        (**(void (**)(...))(*plVar8 + 16))(&local_a8, plVar8, arg19, &local_3f8);
        if (!local_a8 == nullptr) {
            if (local_3f8.IsRaised() == '\0') {
                iVar6 = field_12;
                local_70[0] = 2;
                piVar9 = std::max<int>(arg10, *local_70);
                local_50[0]._0_4_ = 126;
                piVar9 = std::min<int>(*piVar9, local_50);
                arg10 = *piVar9 + 1024;
                local_70[0] = 2;
                piVar9 = std::max<int>(arg11, *local_70);
                local_50[0]._0_4_ = 126;
                piVar9 = std::min<int>(*piVar9, local_50);
                arg11 = *piVar9 + 1024;
                local_70[0] = 2;
                piVar9 = std::max<int>(arg12, *local_70);
                local_50[0]._0_4_ = 126;
                piVar9 = std::min<int>(*piVar9, local_50);
                arg12 = *piVar9 + 1024;
                sVar3 = OSRenderCore_RenderThread::GetAtlasUV(iVar5);
                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)local_70);
                pTVar10 = (TextureCache*)(*local_70).operator->();
                local_50 = pTVar10->GetTexture(iVar5);
                lVar11 = local_50.operator->();
                iVar7 = *(int*)(lVar11 + 160);
                pTVar10 = (TextureCache*)(*local_70).operator->();
                local_50 = pTVar10->GetTexture(iVar5);
                local_3e = sVar3;
                lVar11 = local_50.operator->();
                local_78 = -(unsigned int)(iVar6 == 0) | iVar6 << 8 | 255;
                iVar5 = *(int*)(lVar11 + 164);
                local_7c = (int)(short)arg10;
                uVar4 = OSRenderCore_RenderThread::GetLocalU(local_34, iVar7);
                local_34 = (float)(((uint32_t)local_34._2_2_ << 16) | (uint16_t)uVar4);
                uVar4 = OSRenderCore_RenderThread::GetLocalU(local_38, iVar5);
                local_38 = (float)(((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar4);
                local_74 = (int)(short)arg11;
                uVar4 = OSRenderCore_RenderThread::GetLocalU(local_3c, iVar7);
                local_3c = (float)(((uint32_t)local_3c._2_2_ << 16) | (uint16_t)uVar4);
                arg17_00 = OSRenderCore_RenderThread::GetLocalU(arg17, iVar5);
                sVar3 = (short)arg12;
                arg24 = OSRenderCore_RenderThread::GetLocalU(arg15, iVar7);
                OSRenderCore_RenderThread::GetLocalU(arg18, iVar5);
                RenderCore_RenderTriangle((short)this, (short)arg4, (short)arg1, (short)arg7, local_3e, (short)local_7c,
                                          (short)local_78, local_34._0_2_, local_38._0_2_, (short)arg5, (short)arg2,
                                          (short)arg8, local_3e, (short)local_74, (short)local_78, local_3c._0_2_,
                                          arg17_00, (short)arg6, (short)arg3, (short)arg9, local_3e, sVar3,
                                          (short)local_78, arg24);
                goto LAB_100363bcf;
            }
        }
        plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
        iVar5 = (**(void (**)(...))(*plVar8 + 24))(plVar8, iVar5);
        iVar6 = Pix3D::TextureLightColour(iVar5, arg10);
        iVar7 = Pix3D::TextureLightColour(iVar5, arg11);
        iVar5 = Pix3D::TextureLightColour(iVar5, arg12);
        GouraudTriangle(arg1, arg2, arg3, arg4, arg5, arg6, iVar6, iVar7, iVar5);
    LAB_100363bcf:
    }

    // 0x100365dd0
    NXTPix3D::NXTPix3D(NXTRenderable& nxtRenderable) : Pix3D(), field_120(0) {
        new (&field_176) shared_ptr();
        field_128 = nxtRenderable;
        int iVar1 = (**(void (**)(...))(nxtRenderable.field_0 + 8))(nxtRenderable);
        field_104 = iVar1;
        iVar1 = (**(void (**)(...))(nxtRenderable.field_0 + 16))(nxtRenderable);
        field_108 = iVar1;
    }

    // 0x100365e60
    void NXTPix3D::PrepareRender() {
        bool cVar2;
        uint8_t bVar3;
        TextureProvider* pTVar7;
        uint64_t extraout_var;

        auto pOVar6 = OSRenderCore_LogicThread_JavaStyle::Instance();
        auto this_00 = NXTRenderer::GetInstancePtr();
        bool cVar1 = (**(void (**)(...))pOVar6->field_0)(pOVar6);
        if (!cVar1) {
            m_needUploadTextureData = 1;
        }
        if (m_needUploadTextureData != 0 || m_needColTabUpdate != '\0') {
            cVar2 = ((OSRenderCore_LogicThread_Common*)((long)&pOVar6->field_0 + *(long*)(pOVar6->field_0 - 24)))
                        ->WasRenderContextReady();
            cVar1 = m_needColTabUpdate;
            bVar3 = m_needUploadTextureData;
            if (cVar2) {
                pTVar7 = (TextureProvider*)*(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider));
                bVar3 = this_00->InitColTabAndUploadTextureData((bool)cVar1, (bool)bVar3, *pTVar7);
                if (m_needUploadTextureData != 0) {
                    m_needUploadTextureData = bVar3 ^ 1;
                }
                if (m_needColTabUpdate != '\0') {
                    m_needColTabUpdate = '\0';
                }
            }
        }
        pTVar7 = (TextureProvider*)*(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider));
        this_00->UpdateTextureOffsets(*pTVar7);
        int arg2 = (int)pTVar7;
        uint64_t uVar8 = (**(void (**)(...))field_128->field_0)();
        field_120 = uVar8;
        field_104 = (**(void (**)(...))(field_128->field_0 + 8))();
        NXTPix3D* this_01 = (NXTPix3D*)field_128;
        uint8_t uVar4 = this_01->SetRenderZoom((int)this_01, arg2);
        field_108 = (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4);
        uVar8 = GetHeapSize(this_01);
        *(uint64_t*)&this_00->field_280 = uVar8;
    }

    // 0x100366290
    unsigned long long NXTPix3D::GetHeapSize() {
        uint8_t local_20[8];
        unsigned long long local_18;

        auto arg1 = Instance();
        SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        hardware::HardwareInfo::GetProcessMemoryBytes(*arg1, local_18, (unsigned long long)local_20);
        return local_18;
    }

    // 0x1003662d0
    void NXTPix3D::SetMaxViewport(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        uint32_t in_register_0000003c;
        int in_stack_00000008;

        long lVar2 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        *(int*)(lVar2 + 136) = arg2;
        *(int*)(lVar2 + 140) = arg3;
        (*(NXTRenderCanvas**)(lVar2 + 120))
            ->SetRenderRect(arg2 + arg4, arg3 + arg5, arg6 - arg4, in_stack_00000008 - arg5);
        new ((lVar2 + 176)) GridRect(arg2 + arg4, arg3 + arg5, arg6 - arg4, in_stack_00000008 - arg5);
        new ((lVar2 + 160)) ServerConnectionWorkItem(-1);
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar1 + *(long*)(*plVar1 - 24)))
            ->AddUISceneSettings(*((lVar2 + 144)));
    }

    // 0x1003663a0
    void NXTPix3D::SetRenderClipping(int arg1, int arg2, int arg3, int arg4) {
        int* piVar2;
        uint8_t local_60[32];

        SetRenderClipping(arg1, arg2, arg3, arg4);
        Rect<int> local_40(arg1 + field_136, arg2 + field_140, arg3 - arg1, arg4 - arg2);
        new ((local_60 + 16)) jag::math::Rect(field_176);
        *local_60 = local_40.Intersection((local_60 + 16));
        uint8_t* this_00 = field_160;
        *this_00 = *local_60;
        if (field_176 == *this_00 == '\0') {
            piVar2 = (int*)this_00->qw();
            if (0 < *piVar2)
                goto LAB_100366450;
        }
        new (this_00) ServerConnectionWorkItem(-1);
    LAB_100366450:
        auto plVar3 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar3 + *(long*)(*plVar3 - 24)))->AddUISceneSettings(field_144);
    }

    // 0x100366510
    void NXTPix3D::SetRenderOrigin(int arg1, int arg2) {
        auto piVar3 = field_176.second();
        int iVar1 = *piVar3;
        piVar3 = (int*)field_176.qw();
        int iVar2 = *piVar3;
        field_144 = arg1 - iVar1 / 2;
        field_148 = arg2 - iVar2 / 2;
        auto plVar4 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar4 + *(long*)(*plVar4 - 24)))->AddUISceneSettings(field_144);
    }

    // 0x1003665a0
    void NXTPix3D::ResetOrigin() {
        ResetOrigin();
        field_144 = 0;
        field_148 = 0;
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar1 + *(long*)(*plVar1 - 24)))->AddUISceneSettings(field_144);
    }

    // 0x100366620
    void NXTPix3D::SetRenderZoom(int arg1, int arg2) {
        SetRenderZoom(arg1, arg2);
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar1 + *(long*)(*plVar1 - 24)))->SetZoom(arg1, arg2);
    }

    // 0x100366660
    void NXTPix3D::CalculateRenderDepth(int arg1) {
        CalculateRenderDepth(arg1);
    }

    // 0x100366690
    void NXTPix3D::GouraudTriangleOpenGL(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                         int arg9, int arg10, int arg11, int arg12, int arg13) {
        unsigned short arg7_00 = -(unsigned short)(field_12 == 0) | (unsigned short)(field_12 << 8) | 255;
        RenderCore_RenderTriangle((short)this, (short)arg4, (short)arg1, (short)arg7, 0, (short)arg10, arg7_00, 0, 0,
                                  (short)arg5, (short)arg2, (short)arg8, 0, (short)arg11, arg7_00, 0, 0, (short)arg6,
                                  (short)arg3, (short)arg9, 0, (short)arg12, arg7_00, 0);
    }

    // 0x1003667c0
    void NXTPix3D::TextureTriangleAffineOpenGL(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                               int arg8, int arg9, int arg10, int arg11, int arg12, int arg13,
                                               int arg14, int arg15, int arg16, int arg17, int arg18, int arg19,
                                               int arg20, int arg21, int arg22) {
        int iVar3;
        int iVar4;
        int iVar5;
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
        shared_ptr<configdecoder::ObjType> local_58;

        ErrorCapture local_3a8(true);
        long* plVar6 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
        (**(void (**)(...))(*plVar6 + 16))(&local_58, plVar6, arg22, &local_3a8);
        if (!local_58 == nullptr) {
            if (local_3a8.IsRaised() == '\0') {
                iVar8 = arg14 - arg13;
                iVar7 = arg17 - arg16;
                iVar5 = arg20 - arg19;
                iVar9 = arg15 - arg13;
                iVar4 = arg18 - arg16;
                fVar17 = (float)iVar5;
                iVar3 = arg21 - arg19;
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
                    arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12,
                    (fVar16 + fVar12 + fVar11) * fVar14, fVar10 * fVar14,
                    (fVar11 * fVar20 + fVar12 * fVar24 + fVar16 * fVar23) * fVar14, (fVar15 + fVar25 + fVar13) * fVar22,
                    (fVar13 * fVar17 + fVar25 * fVar18 + fVar15 * fVar19) * fVar22, fVar22 * fVar21, arg22);
                goto LAB_100366abd;
            }
        }
        plVar6 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
        iVar3 = (**(void (**)(...))(*plVar6 + 24))(plVar6, arg22);
        iVar4 = Pix3D::TextureLightColour(iVar3, arg10);
        iVar5 = Pix3D::TextureLightColour(iVar3, arg11);
        iVar3 = Pix3D::TextureLightColour(iVar3, arg12);
        GouraudTriangle(arg1, arg2, arg3, arg4, arg5, arg6, iVar4, iVar5, iVar3);
    LAB_100366abd:
    }

    // 0x100366b10
    void NXTPix3D::TextureTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                   int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15,
                                   int arg16, int arg17, int arg18, int arg19) {}

    // 0x100366b20
    void NXTPix3D::TextureTriangleAffine(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                         int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15,
                                         int arg16, int arg17, int arg18, int arg19) {}

    // 0x100366b30
    void NXTPix3D::RenderCore_RenderTriangle(short arg1, short arg2, short arg3, short arg4, short arg5, short arg6,
                                             short arg7, short arg8, short arg9, short arg10, short arg11, short arg12,
                                             short arg13, short arg14, short arg15, short arg16, short arg17,
                                             short arg18, short arg19, short arg20, short arg21, short arg22,
                                             short arg23, short arg24) {
        OSRenderCore_LogicThread_JavaStyle::Instance()->RenderTriangle(
            arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16,
            arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24);
    }

} // namespace jag::oldscape::dash3d
