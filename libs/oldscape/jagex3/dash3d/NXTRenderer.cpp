// libs/oldscape/jagex3/dash3d/NXTRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "NXTRenderer.h"

namespace jag::oldscape::dash3d {
    // 0x10394be68, 8 bytes, __common; zero-initialised
    NXTRenderer::m_pInstance;

    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    NXTRenderer::FrameBarrierCallback::FrameBarrierCallback(NXTRenderer*);

    // 0x10002a630: the linker folded this into eastl::fixed_vector_allocator<8ul, 20ul, 4ul, 0ul, true, eastl::allocator>::set_name(char const*), which has identical code
    NXTRenderer::FrameBarrierCallback::FrameBarrierCallback(NXTRenderer*);

    // 0x100365f60, 80 bytes, placed by class name and debug map
    // NXTRenderer::GetInstancePtr()
    NXTRenderer* NXTRenderer::GetInstancePtr() {
        NXTRenderer* this;

        if (m_pInstance == (NXTRenderer*)0) {
            this = operator_new(960);
            NXTRenderer(this);
            m_pInstance = this;
        }
        return m_pInstance;
    }

    // 0x100365fc0, 320 bytes, placed by class name and debug map
    // NXTRenderer::InitColTabAndUploadTextureData(bool, bool, TextureProvider&)
    undefined8 NXTRenderer::InitColTabAndUploadTextureData(bool param_1, bool param_2, TextureProvider* param_3) {
        undefined1* this_00;
        char cVar1;
        void* pvVar2;
        ulong uVar3;
        undefined7 in_register_00000031;
        map local_58[48];

        if ((int)CONCAT71(in_register_00000031, param_1) != 0) {
            Pix3D::InitColourTable((double)m_gamma);
            (&field_768, 65536, 5)->set_max_size();
            pvVar2 = (void*)(&field_768)->data();
            _memcpy(pvVar2, &Pix3D::m_colourTable, 262144);
        }
        if (param_2) {
            (**(code**)(param_3->field_0 + 8))(local_58, param_3);
            this_00 = &field_792;
            eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>, eastl::allocator>::operator=(
                (map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>, eastl::allocator>*)this_00,
                local_58);
            local_58->~map();
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                uVar3 = this_00->capacity();
                new (local_58) Array<int, eastl::allocator>(uVar3);
                Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_912, (Array*)local_58);
                local_58->~Array();
                uVar3 = this_00->capacity();
                new (local_58) Array<int, eastl::allocator>(uVar3);
                Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_936, (Array*)local_58);
                local_58->~Array();
                return 1;
            }
        }
        return 0;
    }

    // 0x100366140, 336 bytes, placed by class name and debug map
    // NXTRenderer::UpdateTextureOffsets(TextureProvider&)
    void NXTRenderer::UpdateTextureOffsets(TextureProvider* param_1) {
        undefined4 uVar1;
        char cVar2;
        long* plVar4;
        long lVar5;
        undefined4* puVar6;
        OSRenderCore_LogicThread_JavaStyle* pOVar7;
        int* piVar8;
        int* piVar9;
        ulong uVar10;
        ulong uVar11;
        undefined1 local_58[16];
        Array<int, eastl::allocator>* local_48;
        Array<int, eastl::allocator>* local_40;
        uint local_34;

        plVar4 = (long*)OSRenderCore_AudioThread::Instance();
        cVar2 = (((long)plVar4 + *(long*)(*plVar4 + -24)))->IsLogicThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      155, (char*)0);
        }
        local_48 = (Array<int, eastl::allocator>*)&field_912;
        cVar2 = local_48->empty();
        if (cVar2 == '\0') {
            pOVar7 = (OSRenderCore_LogicThread_JavaStyle*)param_1;
            local_34 = (**(code**)(param_1->field_0 + 48))();
            local_40 = (Array<int, eastl::allocator>*)&field_936;
            if (0 < (int)local_34) {
                uVar11 = (ulong)local_34;
                uVar10 = 0;
                do {
                    (**(code**)param_1->field_0)((OSRenderCore_LogicThread_JavaStyle*)local_58, param_1,
                                                 uVar10 & 4294967295);
                    if (operator!=((shared_ptr*)local_58, (_func_decltype_nullptr*)0)) {
                        lVar5 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)local_58);
                        uVar1 = *(undefined4*)(lVar5 + 160);
                        puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_48, uVar10);
                        *puVar6 = uVar1;
                        lVar5 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)local_58);
                        uVar1 = *(undefined4*)(lVar5 + 164);
                        puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_40, uVar10);
                        *puVar6 = uVar1;
                    }
                    pOVar7 = (OSRenderCore_LogicThread_JavaStyle*)local_58;
                    local_58->~shared_ptr();
                    uVar10 = uVar10 + 1;
                } while (uVar11 != uVar10);
            }
            pOVar7 = (OSRenderCore_LogicThread_JavaStyle*)pOVar7->Instance();
            piVar8 = (int*)local_48->data();
            piVar9 = (int*)local_40->data();
            pOVar7->SetTextureOffsets(piVar8, piVar9, local_34);
        }
    }

    // 0x1003670d0, 80 bytes, placed by class name
    // NXTRenderer::GetInstance()
    NXTRenderer* NXTRenderer::GetInstance() {
        NXTRenderer* this;

        if (m_pInstance == (NXTRenderer*)0) {
            this = operator_new(960);
            NXTRenderer(this);
            m_pInstance = this;
        }
        return m_pInstance;
    }

    // 0x100367120, 16 bytes, complete-object constructor, placed by class name
    // NXTRenderer::NXTRenderer(): jumps straight to the base-object constructor

    // 0x100367130, 96 bytes, placed by class name
    // NXTRenderer::SetGamma(float)
    void NXTRenderer::SetGamma(float param_1) {
        TextureCache* this_00;

        m_gamma = param_1;
        if ((&Pix3D::m_textureProvider)->operator_cast_to_bool()) {
            this_00 = (TextureCache*)shared_ptr<TextureProvider>::operator*(
                (shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
            this_00->SetGamma((double)m_gamma);
            NXTPix3D::m_needColTabUpdate = 1;
            NXTPix3D::m_needUploadTextureData = 1;
        }
    }

    // 0x100367190, 16 bytes, placed by class name
    // NXTRenderer::GetGamma()
    float NXTRenderer::GetGamma() {
        return m_gamma;
    }

    // 0x100367200, 16 bytes, placed by class name
    // NXTRenderer::FlipPermitRendering()
    void NXTRenderer::FlipPermitRendering() {
        m_permitRendering = (bool)(m_permitRendering ^ 1);
    }

    // 0x100367210, 16 bytes, placed by class name
    // NXTRenderer::SetPermitRendering(bool)
    void NXTRenderer::SetPermitRendering(bool param_1) {
        m_permitRendering = param_1;
    }

    // 0x100367220, 128 bytes, placed by class name
    // NXTRenderer::Shutdown()
    void NXTRenderer::Shutdown() {
        char cVar1;
        undefined8 uVar2;
        long* plVar3;

        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/NXTRenderer.cpp",
                            96, "NXTRenderer attempting shutdown");
        plVar3 = (long*)OSRenderCore_RenderThread::Instance();
        cVar1 = (((long)plVar3 + *(long*)(*plVar3 + -24)))->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      97, (char*)0);
        }
        (&field_608)->Shutdown();
    }

    // 0x1003672e0, 64 bytes, placed by class name
    // NXTRenderer::LogicThread_Init()
    void NXTRenderer::LogicThread_Init() {
        char cVar1;
        long* plVar2;

        plVar2 = (long*)OSRenderCore_AudioThread::Instance();
        cVar1 = (((long)plVar2 + *(long*)(*plVar2 + -24)))->IsLogicThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      107, (char*)0);
        }
    }

    // 0x100367320, 64 bytes, placed by class name
    // NXTRenderer::RenderThread_Init()
    void NXTRenderer::RenderThread_Init() {
        char cVar1;
        long* plVar2;

        plVar2 = (long*)OSRenderCore_RenderThread::Instance();
        cVar1 = (((long)plVar2 + *(long*)(*plVar2 + -24)))->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      112, (char*)0);
        }
    }

    // 0x100367360, 256 bytes, placed by class name
    // NXTRenderer::RenderThead_Service(bool)
    void NXTRenderer::RenderThead_Service(bool param_1) {
        undefined1* this_00;
        char cVar1;
        long* plVar2;
        OSRenderCore_RenderThread* pOVar3;
        ulonglong uVar4;
        ulonglong uVar5;

        plVar2 = (long*)OSRenderCore_RenderThread::Instance();
        cVar1 = (((long)plVar2 + *(long*)(*plVar2 + -24)))->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      117, (char*)0);
        }
        this_00 = &field_608;
        cVar1 = this_00->IsShutdown();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_frameBarrier.IsShutdown()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      118, (char*)0);
        }
        cVar1 = this_00->IsShutdown();
        if (cVar1 == '\0') {
            pOVar3 = (OSRenderCore_RenderThread*)OSRenderCore_RenderThread::Instance();
            pOVar3->UpdateWindowProperties();
            uVar4 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pOVar3);
            this_00->Wait();
            pOVar3 = (OSRenderCore_RenderThread*)OSRenderCore_RenderThread::Instance();
            pOVar3->ApplyWindowSetOptions();
            uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pOVar3);
            *(ulonglong*)&field_600->field_16 = uVar5 - uVar4;
            pOVar3 = (OSRenderCore_RenderThread*)OSRenderCore_RenderThread::Instance();
            pOVar3->OnBeginFrame();
            RenderThread_ServiceUploadables(this, false, (Array*)&field_840, (map*)&field_864);
            RenderThread_RenderFrontBuffer(this, param_1);
        }
    }

    // 0x100367490, 288 bytes, placed by class name
    // NXTRenderer::RenderThread_ServiceUploadables(bool, Array<unsigned int, eastl::allocator>&, eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>, eastl::allocator>&)
    void NXTRenderer::RenderThread_ServiceUploadables(bool param_1, Array* param_2, map* param_3) {
        uchar* puVar1;
        long lVar2;
        Array<game::VarValue, eastl::allocator>* this_00;
        ulong uVar3;
        char cVar4;
        OSRenderCore_RenderThread_JavaStyle* pOVar5;
        OSRenderCore_RenderThread_RSeven* pOVar6;
        byte bVar7;
        uint local_38;
        uint local_34;

        cVar4 = param_2->empty();
        if (cVar4 == '\0') {
            pOVar5 = (OSRenderCore_RenderThread_JavaStyle*)param_2;
            puVar1 = (uchar*)param_2->data();
            pOVar5 = (OSRenderCore_RenderThread_JavaStyle*)pOVar5->Instance();
            pOVar5->UploadColTab(puVar1);
            param_2->clear();
        }
        pOVar6 = (OSRenderCore_RenderThread_RSeven*)param_3;
        cVar4 = param_3->empty();
        if (cVar4 == '\0') {
            lVar2 = param_3->capacity();
            if (lVar2 != 0) {
                bVar7 = 0;
                do {
                    local_38 = (uint)bVar7;
                    this_00 = (Array<game::VarValue, eastl::allocator>*)
                        eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>,
                                   eastl::allocator>::operator[]((map<int, Array<unsigned int, eastl::allocator>,
                                                                      eastl::less<int>, eastl::allocator>*)param_3,
                                                                 (int*)&local_38);
                    cVar4 = this_00->empty();
                    if (cVar4 == '\0') {
                        local_34 = (uint)bVar7;
                        pOVar5 = (OSRenderCore_RenderThread_JavaStyle*)
                            eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>,
                                       eastl::allocator>::operator[]((map<int, Array<unsigned int, eastl::allocator>,
                                                                          eastl::less<int>, eastl::allocator>*)param_3,
                                                                     (int*)&local_34);
                        puVar1 = (uchar*)pOVar5->data();
                        pOVar5 = (OSRenderCore_RenderThread_JavaStyle*)pOVar5->Instance();
                        pOVar5->UploadTexture(bVar7, puVar1);
                    }
                    bVar7 = bVar7 + 1;
                    uVar3 = param_3->capacity();
                } while (bVar7 < uVar3);
            }
            param_3->clear();
            pOVar6 = (OSRenderCore_RenderThread_RSeven*)param_3;
        }
        pOVar6 = (OSRenderCore_RenderThread_RSeven*)pOVar6->Instance();
        pOVar6->UpdateGamma(m_gamma);
        pOVar6 = (OSRenderCore_RenderThread_RSeven*)pOVar6->Instance();
        pOVar6->CheckRebuild();
    }

    // 0x1003675b0, 64 bytes, placed by class name
    // NXTRenderer::RenderThread_RenderFrontBuffer(bool)
    void NXTRenderer::RenderThread_RenderFrontBuffer(bool param_1) {
        NXTRenderCanvas* this_00;
        undefined7 in_register_00000031;
        bool bVar1;

        this_00 = (NXTRenderCanvas*)RenderThread_GetRenderCanvas(this);
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            bVar1 = false;
        } else {
            bVar1 = m_permitRendering != false;
        }
        this_00->RenderThread_Render(bVar1);
    }

    // 0x1003675f0, 96 bytes, placed by class name
    // NXTRenderer::OnThreadsReadyForFlip()
    void NXTRenderer::OnThreadsReadyForFlip() {
        undefined8* puVar1;

        puVar1 = (undefined8*)OSRenderCore_RenderThread::Instance();
        (**(code**)*puVar1)(puVar1);
        std::swap<NXTRenderCanvas*>(&field_592, &field_600);
        Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_840,
                                                         (Array*)&field_768);
        eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>, eastl::allocator>::operator=(
            (map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>, eastl::allocator>*)&field_864,
            (map*)&field_792);
    }

    // 0x100367670, 208 bytes, placed by class name
    // NXTRenderer::PresentFrontBuffer(NXTRenderCanvas*)
    longlong* NXTRenderer::PresentFrontBuffer(NXTRenderCanvas* param_1) {
        longlong* plVar1;
        char cVar2;
        int iVar3;
        long* plVar4;
        ulonglong uVar5;
        ulonglong uVar6;
        SystemTimer* pSVar7;

        plVar4 = (long*)OSRenderCore_AudioThread::Instance();
        cVar2 = (((long)plVar4 + *(long*)(*plVar4 + -24)))->IsLogicThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      177, (char*)0);
        }
        plVar1 = *(longlong**)&param_1[4].field_24;
        pSVar7 = (SystemTimer*)&param_1[1].field_24;
        iVar3 = (*(NXTRenderCanvas**)&param_1[4].field_16)->GetLastNumVerts();
        pSVar7->AddSample((long)iVar3);
        uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>(pSVar7);
        pSVar7 = (SystemTimer*)&param_1[4].m_screenSize;
        pSVar7->Wait();
        uVar6 = SystemTimer::GetTimeNS<std::chrono::steady_clock>(pSVar7);
        param_1[1].field_80.AddSample(uVar6 - uVar5);
        param_1->AddSample(*plVar1);
        (&param_1->field_56, plVar1[1])->AddSample();
        (&param_1->field_112, plVar1[2])->AddSample();
        return plVar1;
    }

    // 0x100367740, 576 bytes, base-object constructor, placed by class name
    // NXTRenderer::NXTRenderer()
    void NXTRenderer::NXTRenderer() {
        NXTRenderCanvas* this_00;
        long lVar1;

        new (this) datastructure::RollingAverageCounter(15);
        new (field_56, 15) datastructure::RollingAverageCounter();
        new (field_112, 15) datastructure::RollingAverageCounter();
        new (field_168, 15) datastructure::RollingAverageCounter();
        new (field_224, 15) datastructure::RollingAverageCounter();
        field_288 = 1061997773;
        m_permitRendering = true;
        m_gamma = 0.8;
        lVar1 = 0;
        this_00 = (NXTRenderCanvas*)field_304;
        do {
            NXTRenderCanvas::NXTRenderCanvas(this_00);
            lVar1 = lVar1 + -144;
            this_00 = this_00 + 1;
        } while (lVar1 != -288);
        field_592 = (NXTRenderCanvas*)0;
        field_600 = (NXTRenderCanvas*)0;
        new (&field_608, this) FrameBarrier();
        new (&field_768) LogicToRenderData();
        new (&field_840) LogicToRenderData();
        new (&field_912) Array<int, eastl::allocator>();
        new (&field_936) Array<int, eastl::allocator>();
        NXTPix3D::m_needColTabUpdate = 1;
        field_592 = (NXTRenderCanvas*)field_304;
        field_600 = (NXTRenderCanvas*)&field_448;
    }

} // namespace jag::oldscape::dash3d
