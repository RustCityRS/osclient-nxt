// libs/hal/render/rendertargets/BufferedRenderTargets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class BufferedRenderTargets {
    public:
        // virtual methods in vtable order
        virtual ~BufferedRenderTargets();
        virtual void OnEndFrame();
        BufferedRenderTargets(unsigned int, unsigned int, unsigned int, Format, char const*);
        void IsContinuousReadbackSupported(RenderDeviceCaps const&, Format);
        bool UseAppleCVPixelBuffers(RenderDeviceCaps const&, Format);
        void UseShaderStorageBuffers(RenderDeviceCaps const&) const;
        bool UsePixelBuffers(RenderDeviceCaps const&);
        UseShaderStorageBuffers(RenderDeviceCaps const&, Format);
        GetOptimalDepthReadbackFormat();
        void GetWriteRTInternal();
        void GetReadRTInternal();
        GetWriteRT();
        GetReadRT();
        uint GetWriteIndex();
        uint GetReadIndex();
        ulong Create(int, int, unsigned int);
        void UseAppleCVPixelBuffers(RenderDeviceCaps const&) const;
        CreateAppleCVRenderTarget(unsigned long, int, int, unsigned int);
        void Destroy();
        void ResetSyncFences();
        void MapColourTargetData(BufferedImageData&);
        void SwapRBChannels(unsigned char const*);
        ulong CopyColourTargetData(ImageData&);
        void WriteFinished();
        void WriteFinishedInternal(int);
        void CopyToShaderStorageBuffer(RenderContext&, int);
        void CopyToPixelBuffer(RenderContext&, int);
        void UnmapColourTargetData();
        ulong IsReadyToRead() const;
        void CreateStaticRenderingResources();
        void DestroyStaticRenderingResources();
        static ShaderProgram /* 1856 bytes */ m_SSBOCopyShaderFloat1;        // = ShaderProgram("")
        static ShaderProgram /* 1856 bytes */ m_SSBOCopyShaderFloat4;        // = ShaderProgram("")
        static ShaderProgram /* 1856 bytes */ m_SSBOCopyShaderInt4;          // = ShaderProgram("")
        static ShaderProgram /* 1856 bytes */ m_SSBOCopyShaderInt4RBSwizzle; // = ShaderProgram("")
        static InputAssemblerState /* 192 bytes */ m_IAState;                // = InputAssemblerState()
        static VertexBuffer /* 80 bytes */ m_quadVB;                         // = VertexBuffer()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_SSBOCopyRT;
        static /* 8 bytes */ m_cvTextureCache;

        // data members, from how the methods use this: 512 bytes
        undefined** field_0;            // offset 0, vtable pointer
        RenderDeviceOnEndFrame field_8; // offset 8
        char _unknown_9[3];
        RenderResource field_12; // offset 12
        char _unknown_17[55];
        uint field_72; // offset 72
        uint field_76; // offset 76
        uint field_80; // offset 80
        uint field_84; // offset 84
        int field_88;  // offset 88
        int field_92;  // offset 92
        uint field_96; // offset 96
        char _unknown_100[412];
    };

    // 0x100be3800, 32 bytes, inline, placed by class name
    // BufferedRenderTargets::UseShaderStorageBuffers(RenderDeviceCaps const&) const
    void BufferedRenderTargets::UseShaderStorageBuffers(RenderDeviceCaps* param_1) {
        UseShaderStorageBuffers(param_1, field_72);
    }

    // 0x100be4600, 16 bytes, inline, placed by class name
    // BufferedRenderTargets::UseAppleCVPixelBuffers(RenderDeviceCaps const&) const
    void BufferedRenderTargets::UseAppleCVPixelBuffers(RenderDeviceCaps* param_1) {
        UseAppleCVPixelBuffers(this, field_72);
    }

    // 0x100bfc1a0, 48 bytes, placed by class name
    // BufferedRenderTargets::WriteFinished()::$_3::operator()(RenderContext&) const
    /* BufferedRenderTargets::WriteFinished()::$_3::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void BufferedRenderTargets::WriteFinished()::$_3::operator()(RenderContext* param_1) {
        BufferedRenderTargets* this_00;

        this_00 = field_0;
        if (param_1->IsObjectAlive(this_00->field_12) != '\0') {
            WriteFinishedInternal(this_00, field_8);
        }
    }

} // namespace jag::render
