// libs/oldscape/jagex3/dash3d/NXTRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class NXTRenderer {
    public:
        class FrameBarrier;
        class FrameBarrierCallback;
        class LogicToRenderData;
        NXTRenderCanvas* RenderThread_GetRenderCanvas();
        long LogicThread_GetRenderCanvas();
        NXTRenderer* GetInstancePtr();
        uint64_t InitColTabAndUploadTextureData(bool arg1, bool arg2, TextureProvider& textureProvider);
        void UpdateTextureOffsets(TextureProvider& textureProvider);
        NXTRenderer* GetInstance();
        NXTRenderer();
        void SetGamma(float arg1);
        float GetGamma();
        void FlipPermitRendering();
        void SetPermitRendering(bool arg1);
        void Shutdown();
        void LogicThread_Init();
        void RenderThread_Init();
        void RenderThead_Service(bool arg1);
        void RenderThread_ServiceUploadables(bool arg1, Array<unsigned int>& arg2,
                                             eastl::map<int, Array<unsigned int>>& arg3);
        void RenderThread_RenderFrontBuffer(bool arg1);
        void OnThreadsReadyForFlip();
        long long* PresentFrontBuffer(NXTRenderCanvas* nxtRenderCanvas);
        static int64_t m_pInstance;

    private:
        uint8_t _unknown_0[56];
        RollingAverageCounter field_56;
        RollingAverageCounter field_112;
        RollingAverageCounter field_168;
        RollingAverageCounter field_224;
        uint8_t _unknown_280[8];
        uint32_t field_288;
        bool m_permitRendering;
        uint8_t _unknown_293[3];
        float m_gamma;
        uint8_t _unknown_300[4];
        NXTRenderCanvas field_304;
        uint8_t _unknown_448[144];
        NXTRenderCanvas* field_592;
        NXTRenderCanvas* field_600;
        uint8_t _unknown_608[336];
    };

    class NXTRenderer::FrameBarrier {
    public:
        void Shutdown();
        bool IsShutdown() const;
        void Wait();
        FrameBarrier(NXTRenderer* nxtRenderer);
        ~FrameBarrier();

    private:
        uint8_t _unknown_0[112];
        unsigned long field_112;
        long field_120;
        uint64_t field_128;
        uint8_t _unknown_136[16];
        uint8_t m_shutdown;
    };

    class NXTRenderer::FrameBarrierCallback {
    public:
        FrameBarrierCallback(NXTRenderer* arg1);
        void operator()();

        uint8_t _unknown_0[8];
    };

    class NXTRenderer::LogicToRenderData {
    public:
        LogicToRenderData();
        ~LogicToRenderData();

        uint8_t _unknown_0[32];
    };

    // 0x1001c4620
    NXTRenderCanvas* NXTRenderer::RenderThread_GetRenderCanvas() {
        return field_600;
    }

    // 0x10031b0b0
    long NXTRenderer::LogicThread_GetRenderCanvas() {
        return m_cost;
    }

    // 0x1003672c0
    void NXTRenderer::FrameBarrier::Shutdown() {
        m_shutdown = 1;
        ArriveAndDrop();
    }

    // 0x100367460
    bool NXTRenderer::FrameBarrier::IsShutdown() const {
        return m_shutdown;
    }

    // 0x100367470
    void NXTRenderer::FrameBarrier::Wait() {
        if (m_shutdown == '\0') {
            Wait();
            return;
        }
    }

    // 0x1003723f0
    void NXTRenderer::FrameBarrierCallback::operator()() {
        OnThreadsReadyForFlip((NXTRenderer*)*this);
    }

    // 0x100372530
    NXTRenderer::FrameBarrier::FrameBarrier(NXTRenderer* nxtRenderer) {
        FrameBarrierCallback in_RAX;
        compressed_pair<EntityHighlight**, BucketAllocatorEASTL> acStackY_98[128];

        eastl::compressed_pair<EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            acStackY_98 + 128, (PlayerDataComparator<social::FriendChatUser>*)nxtRenderer);
        new (this) BarrierWithCompletion<NXTRenderer::FrameBarrierCallback>(2, in_RAX);
        m_shutdown = 0;
    }

    // 0x100372650
    NXTRenderer::LogicToRenderData::LogicToRenderData() : Array<unsigned int>() {

        new (&field_24) eastl::map(local_20);
    }

    // 0x1003726a0
    NXTRenderer::LogicToRenderData::~LogicToRenderData() {
        field_24.~map();
    }

    // 0x1003726d0
    NXTRenderer::FrameBarrier::~FrameBarrier() {}

} // namespace jag::oldscape::dash3d
