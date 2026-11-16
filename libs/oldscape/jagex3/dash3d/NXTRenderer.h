// libs/oldscape/jagex3/dash3d/NXTRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class NXTRenderer {
    public:
        class FrameBarrier;
        class FrameBarrierCallback;
        class LogicToRenderData;
        NXTRenderCanvas* RenderThread_GetRenderCanvas();
        LogicThread_GetRenderCanvas();
        NXTRenderer* GetInstancePtr();
        InitColTabAndUploadTextureData(bool, bool, TextureProvider&);
        void UpdateTextureOffsets(TextureProvider&);
        NXTRenderer* GetInstance();
        NXTRenderer();
        void SetGamma(float);
        float GetGamma();
        void FlipPermitRendering();
        void SetPermitRendering(bool);
        void Shutdown();
        void LogicThread_Init();
        void RenderThread_Init();
        void RenderThead_Service(bool);
        void RenderThread_ServiceUploadables(
            bool, Array<unsigned int, eastl::allocator>&,
            eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>, eastl::allocator>&);
        void RenderThread_RenderFrontBuffer(bool);
        void OnThreadsReadyForFlip();
        longlong* PresentFrontBuffer(NXTRenderCanvas*);
        static /* 8 bytes */ m_pInstance;

        // data members, from how the methods use this: 944 bytes
        char _unknown_0[56];
        RollingAverageCounter field_56;  // offset 56
        RollingAverageCounter field_112; // offset 112
        RollingAverageCounter field_168; // offset 168
        RollingAverageCounter field_224; // offset 224
        char _unknown_280[8];
        undefined4 field_288;   // offset 288
        bool m_permitRendering; // offset 292
        char _unknown_293[3];
        float m_gamma; // offset 296
        char _unknown_300[4];
        NXTRenderCanvas field_304; // offset 304
        char _unknown_448[144];
        NXTRenderCanvas* field_592; // offset 592
        NXTRenderCanvas* field_600; // offset 600
        char _unknown_608[336];
    };

    class NXTRenderer::FrameBarrier {
    public:
        void Shutdown();
        IsShutdown() const;
        void Wait();
        FrameBarrier(NXTRenderer*);
        ~FrameBarrier();

        // data members, from how the methods use this: 153 bytes
        char _unknown_0[112];
        ulong field_112;      // offset 112
        long field_120;       // offset 120
        undefined8 field_128; // offset 128
        char _unknown_136[16];
        undefined1 m_shutdown; // offset 152
    };

    class NXTRenderer::FrameBarrierCallback {
    public:
        FrameBarrierCallback(NXTRenderer*);
        void operator()();

        // data members, from how the methods use this: 8 bytes
        NXTRenderer* field_0; // offset 0
    };

    class NXTRenderer::LogicToRenderData {
    public:
        LogicToRenderData();
        ~LogicToRenderData();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[32];
    };

    // 0x1001c4620, 16 bytes, inline, placed by class name and debug map
    // NXTRenderer::RenderThread_GetRenderCanvas()
    NXTRenderCanvas* NXTRenderer::RenderThread_GetRenderCanvas() {
        return field_600;
    }

    // 0x10031b0b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTRenderer::LogicThread_GetRenderCanvas()
    /* game::ObjType::GetCost() const */

    long game::ObjType::GetCost() {
        return m_cost;
    }

    // 0x1003672c0, 32 bytes, inline, placed by class name
    // NXTRenderer::FrameBarrier::Shutdown()
    void NXTRenderer::FrameBarrier::Shutdown() {
        m_shutdown = 1;
        ArriveAndDrop();
    }

    // 0x100367460, 16 bytes, inline, placed by class name
    // NXTRenderer::FrameBarrier::IsShutdown() const
    undefined1 NXTRenderer::FrameBarrier::IsShutdown() {
        return m_shutdown;
    }

    // 0x100367470, 32 bytes, inline, placed by class name
    // NXTRenderer::FrameBarrier::Wait()
    void NXTRenderer::FrameBarrier::Wait() {
        if (m_shutdown == '\0') {
            Wait();
            return;
        }
    }

    // 0x100367990, 16 bytes, complete-object constructor, inline, placed by class name
    // NXTRenderer::FrameBarrier::FrameBarrier(NXTRenderer*): jumps straight to the base-object constructor

    // 0x1003679a0, 16 bytes, complete-object constructor, inline, placed by class name
    // NXTRenderer::LogicToRenderData::LogicToRenderData(): jumps straight to the base-object constructor

    // 0x1003679b0, 16 bytes, complete-object destructor, inline, placed by class name
    // NXTRenderer::LogicToRenderData::~LogicToRenderData(): jumps straight to the base-object destructor

    // 0x1003679c0, 16 bytes, complete-object destructor, inline, placed by class name
    // NXTRenderer::FrameBarrier::~FrameBarrier(): jumps straight to the base-object destructor

    // 0x1003723f0, 16 bytes, inline, placed by class name
    // NXTRenderer::FrameBarrierCallback::operator()()
    /* NXTRenderer::FrameBarrierCallback::TEMPNAMEPLACEHOLDERVALUE() */

    void NXTRenderer::FrameBarrierCallback::operator()() {
        OnThreadsReadyForFlip(field_0);
    }

    // 0x100372530, 64 bytes, base-object constructor, inline, placed by class name
    // NXTRenderer::FrameBarrier::FrameBarrier(NXTRenderer*)
    void NXTRenderer::FrameBarrier::FrameBarrier(NXTRenderer* param_1) {
        FrameBarrierCallback in_RAX;
        BucketAllocatorEASTL* in_RDX;
        FrameBarrierCallback local_18;

        local_18.field_0 = in_RAX.field_0;
        new (&local_18) eastl::compressed_pair<EntityHighlight**, BucketAllocatorEASTL>(param_1, in_RDX);
        new (this) BarrierWithCompletion<NXTRenderer::FrameBarrierCallback>(2, local_18);
        m_shutdown = 0;
    }

    // 0x100372650, 80 bytes, base-object constructor, inline, placed by class name
    // NXTRenderer::LogicToRenderData::LogicToRenderData()
    void NXTRenderer::LogicToRenderData::LogicToRenderData() {
        allocator local_20[8];

        new (this) Array<unsigned int, eastl::allocator>();
        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_24);
    }

    // 0x1003726a0, 48 bytes, base-object destructor, inline, placed by class name
    // NXTRenderer::LogicToRenderData::~LogicToRenderData()
    void NXTRenderer::LogicToRenderData::~LogicToRenderData() {
        (&field_24)->~map();
        ~Array();
    }

    // 0x1003726d0, 16 bytes, base-object destructor, inline, placed by class name
    // NXTRenderer::FrameBarrier::~FrameBarrier()
    void NXTRenderer::FrameBarrier::~FrameBarrier() {
        ~BarrierWithCompletion();
    }

} // namespace jag::oldscape::dash3d
