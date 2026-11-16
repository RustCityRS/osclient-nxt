// libs/oldscape/jagex3/dash3d/NXTRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "NXTRenderer.h"

namespace jag::oldscape::dash3d {
    // 0x10394be68
    int64_t NXTRenderer::m_pInstance;

    // 0x10000b400: NXTRenderer::FrameBarrierCallback::FrameBarrierCallback(NXTRenderer*) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

    // 0x10002a630: NXTRenderer::FrameBarrierCallback::FrameBarrierCallback(NXTRenderer*) has the same machine code as eastl::fixed_vector_allocator<8ul, 20ul, 4ul, 0ul, true>::set_name(char const*)

    // 0x100365f60
    NXTRenderer* NXTRenderer::GetInstancePtr() {
        NXTRenderer* nXTRenderer;

        if (m_pInstance == nullptr) {
            nXTRenderer = (NXTRenderer*)operator new(960);
            NXTRenderer(nXTRenderer);
            m_pInstance = nXTRenderer;
        }
        return m_pInstance;
    }

    // 0x100365fc0
    uint64_t NXTRenderer::InitColTabAndUploadTextureData(bool arg1, bool arg2, TextureProvider& textureProvider) {
        uint8_t* this_00;
        unsigned long uVar3;
        uint64_t in_register_00000031;
        map<int, Array<unsigned int>> local_58;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            Pix3D::InitColourTable((double)m_gamma);
            field_768.set_max_size(65536, 5);
            _memcpy((void*)field_768.data(), &Pix3D::m_colourTable, 262144);
        }
        if (arg2) {
            (**(void (**)(...))(textureProvider.field_0 + 8))(&local_58, textureProvider);
            this_00 = &field_792;
            *this_00 = local_58;
            if (this_00->empty() == '\0') {
                uVar3 = this_00->capacity();
                local_58 = Array<int>(uVar3);
                field_912 = local_58;
                uVar3 = this_00->capacity();
                local_58 = Array<int>(uVar3);
                field_936 = local_58;
                return 1;
            }
        }
        return 0;
    }

    // 0x100366140
    void NXTRenderer::UpdateTextureOffsets(TextureProvider& textureProvider) {
        uint32_t uVar1;
        long lVar5;
        uint32_t* puVar6;
        OSRenderCore_LogicThread_JavaStyle* this_00;
        int* arg1;
        int* arg2;
        unsigned long arg1_00;
        unsigned long uVar7;
        shared_ptr<RSevenDebugPresetProvider> local_58;
        Array<int>* local_40;
        unsigned int local_34;

        auto plVar4 = OSRenderCore_AudioThread::Instance();
        if (!(((OSRenderCore_LogicThread_Common*)((long)plVar4 + *(long*)(*plVar4 - 24)))->IsLogicThread())) {
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      155, nullptr);
        }
        Array<int>* local_48 = (Array<int>*)&field_912;
        if (!(local_48->empty())) {
            local_34 = (**(void (**)(...))(textureProvider.field_0 + 48))(textureProvider);
            local_40 = (Array<int>*)&field_936;
            if (0 < (int)local_34) {
                uVar7 = (unsigned long)local_34;
                arg1_00 = 0;
                do {
                    (**(void (**)(...))textureProvider.field_0)(&local_58, textureProvider, arg1_00 & 4294967295);
                    if (local_58 != nullptr) {
                        lVar5 = local_58.operator->();
                        uVar1 = *(uint32_t*)(lVar5 + 160);
                        puVar6 = (uint32_t*)(*local_48)[arg1_00];
                        *puVar6 = uVar1;
                        lVar5 = local_58.operator->();
                        uVar1 = *(uint32_t*)(lVar5 + 164);
                        puVar6 = (uint32_t*)(*local_40)[arg1_00];
                        *puVar6 = uVar1;
                    }
                    arg1_00 = arg1_00 + 1;
                } while (uVar7 != arg1_00);
            }
            this_00 = OSRenderCore_LogicThread_JavaStyle::Instance();
            arg1 = (int*)local_48->data();
            arg2 = (int*)local_40->data();
            this_00->SetTextureOffsets(arg1, arg2, local_34);
        }
    }

    // 0x1003670d0
    NXTRenderer* NXTRenderer::GetInstance() {
        NXTRenderer* nXTRenderer;

        if (m_pInstance == nullptr) {
            nXTRenderer = (NXTRenderer*)operator new(960);
            NXTRenderer(nXTRenderer);
            m_pInstance = nXTRenderer;
        }
        return m_pInstance;
    }

    // 0x100367130
    void NXTRenderer::SetGamma(float arg1) {
        m_gamma = arg1;
        if ((&Pix3D::m_textureProvider)->operator_cast_to_bool() != '\0') {
            ((TextureCache*)*(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)))->SetGamma((double)m_gamma);
            NXTPix3D::m_needColTabUpdate = 1;
            NXTPix3D::m_needUploadTextureData = 1;
        }
    }

    // 0x100367190
    float NXTRenderer::GetGamma() {
        return m_gamma;
    }

    // 0x100367200
    void NXTRenderer::FlipPermitRendering() {
        m_permitRendering = (bool)(m_permitRendering ^ 1);
    }

    // 0x100367210
    void NXTRenderer::SetPermitRendering(bool arg1) {
        m_permitRendering = arg1;
    }

    // 0x100367220
    void NXTRenderer::Shutdown() {
        (logger::default_logger())
            ->Log(false, 5,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "NXTRenderer.cpp",
                  96, "NXTRenderer attempting shutdown");
        auto pOVar2 = OSRenderCore_RenderThread::Instance();
        if (((OSRenderCore_RenderThread_Common*)(pOVar2->field_32 + (long)(pOVar2->_vptr[-3].GetUISize - 32)))
                ->IsRenderThread() == '\0') {
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      97, nullptr);
        }
        field_608.Shutdown();
    }

    // 0x1003672e0
    void NXTRenderer::LogicThread_Init() {
        auto plVar2 = OSRenderCore_AudioThread::Instance();
        if (((OSRenderCore_LogicThread_Common*)((long)plVar2 + *(long*)(*plVar2 - 24)))->IsLogicThread() == '\0') {
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      107, nullptr);
        }
    }

    // 0x100367320
    void NXTRenderer::RenderThread_Init() {
        auto pOVar2 = OSRenderCore_RenderThread::Instance();
        if (((OSRenderCore_RenderThread_Common*)(pOVar2->field_32 + (long)(pOVar2->_vptr[-3].GetUISize - 32)))
                ->IsRenderThread() == '\0') {
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      112, nullptr);
        }
    }

    // 0x100367360
    void NXTRenderer::RenderThead_Service(bool arg1) {
        unsigned long long uVar3;
        unsigned long long uVar4;

        auto pOVar2 = OSRenderCore_RenderThread::Instance();
        if (!(((OSRenderCore_RenderThread_Common*)(pOVar2->field_32 + (long)(pOVar2->_vptr[-3].GetUISize - 32)))
                  ->IsRenderThread())) {
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      117, nullptr);
        }
        uint8_t* this_00 = &field_608;
        if (this_00->IsShutdown()) {
            LogAssert("!m_frameBarrier.IsShutdown()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      118, nullptr);
        }
        if (!(this_00->IsShutdown())) {
            pOVar2 = OSRenderCore_RenderThread::Instance();
            pOVar2->UpdateWindowProperties();
            uVar3 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            this_00->Wait();
            pOVar2 = OSRenderCore_RenderThread::Instance();
            pOVar2->ApplyWindowSetOptions();
            uVar4 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            *(unsigned long long*)&field_600->field_16 = uVar4 - uVar3;
            pOVar2 = OSRenderCore_RenderThread::Instance();
            pOVar2->OnBeginFrame();
            RenderThread_ServiceUploadables(false, field_840, field_864);
            RenderThread_RenderFrontBuffer(arg1);
        }
    }

    // 0x100367490
    void NXTRenderer::RenderThread_ServiceUploadables(bool arg1, Array<unsigned int>& arg2,
                                                      eastl::map<int, Array<unsigned int>>& arg3) {
        unsigned char* puVar2;
        OSRenderCore_RenderThread_JavaStyle* pOVar3;
        unsigned long uVar5;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        uint8_t arg1_00;
        unsigned int local_38;
        unsigned int local_34;

        if (!(arg2.empty())) {
            puVar2 = (unsigned char*)arg2.data();
            pOVar3 = OSRenderCore_RenderThread_JavaStyle::Instance();
            pOVar3->UploadColTab(puVar2);
            arg2.clear();
        }
        if (!(arg3.empty())) {
            if (arg3.capacity() != 0) {
                arg1_00 = 0;
                do {
                    local_38 = (unsigned int)arg1_00;
                    if (!(((Array<game::VarValue>*)arg3[local_38])->empty())) {
                        local_34 = (unsigned int)arg1_00;
                        this_01 = &arg3[local_34];
                        puVar2 = (unsigned char*)this_01->data();
                        pOVar3 = OSRenderCore_RenderThread_JavaStyle::Instance();
                        pOVar3->UploadTexture(arg1_00, puVar2);
                    }
                    arg1_00 = arg1_00 + 1;
                    uVar5 = arg3.capacity();
                } while (arg1_00 < uVar5);
            }
            arg3.clear();
        }
        auto pOVar6 = OSRenderCore_RenderThread_RSeven::Instance();
        pOVar6->UpdateGamma(m_gamma);
        pOVar6 = OSRenderCore_RenderThread_RSeven::Instance();
        pOVar6->CheckRebuild();
    }

    // 0x1003675b0
    void NXTRenderer::RenderThread_RenderFrontBuffer(bool arg1) {
        uint64_t in_register_00000031;
        bool arg1_00;

        auto this_00 = RenderThread_GetRenderCanvas();
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            arg1_00 = false;
        } else {
            arg1_00 = m_permitRendering != false;
        }
        this_00->RenderThread_Render(arg1_00);
    }

    // 0x1003675f0
    void NXTRenderer::OnThreadsReadyForFlip() {
        unsigned int* in_RSI;

        OSRenderCore_RenderThread::Instance()->GetUISize(in_RSI);
        std::swap<NXTRenderCanvas*>(field_592, field_600);
        field_840 = field_768;
        field_864 = field_792;
    }

    // 0x100367670
    long long* NXTRenderer::PresentFrontBuffer(NXTRenderCanvas* nxtRenderCanvas) {
        auto plVar4 = OSRenderCore_AudioThread::Instance();
        if (((OSRenderCore_LogicThread_Common*)((long)plVar4 + *(long*)(*plVar4 - 24)))->IsLogicThread() == '\0') {
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTRenderer.cpp",
                      177, nullptr);
        }
        long long* plVar1 = *(long long**)&nxtRenderCanvas[4].field_24;
        int iVar3 = (*(NXTRenderCanvas**)&nxtRenderCanvas[4].field_16)->GetLastNumVerts();
        nxtRenderCanvas[1].field_24.AddSample((long)iVar3);
        unsigned long long uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        nxtRenderCanvas[4].m_screenSize.Wait();
        unsigned long long uVar6 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        nxtRenderCanvas[1].field_80.AddSample(uVar6 - uVar5);
        nxtRenderCanvas->AddSample(*plVar1);
        nxtRenderCanvas->field_56.AddSample(plVar1[1]);
        nxtRenderCanvas->field_112.AddSample(plVar1[2]);
        return plVar1;
    }

    // 0x100367740
    NXTRenderer::NXTRenderer()
        : datastructure::RollingAverageCounter(15), field_56(15), field_112(15), field_168(15), field_224(15),
          field_288(1061997773), m_permitRendering(true), m_gamma(0.8) {
        long lVar1 = 0;
        NXTRenderCanvas* this_00 = (NXTRenderCanvas*)field_304;
        do {
            new (this_00) NXTRenderCanvas();
            lVar1 = lVar1 - 144;
            this_00 = this_00 + 1;
        } while (lVar1 != -288);
        field_592 = nullptr;
        field_600 = nullptr;
        new (&field_608) FrameBarrier(this);
        new (&field_768) LogicToRenderData();
        new (&field_840) LogicToRenderData();
        new (&field_912) Array<int>();
        new (&field_936) Array<int>();
        NXTPix3D::m_needColTabUpdate = 1;
        field_592 = (NXTRenderCanvas*)field_304;
        field_600 = (NXTRenderCanvas*)&field_448;
    }

} // namespace jag::oldscape::dash3d
