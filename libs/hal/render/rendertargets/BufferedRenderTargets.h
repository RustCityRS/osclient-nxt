// libs/hal/render/rendertargets/BufferedRenderTargets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class BufferedRenderTargets {
    public:
        // virtual methods in vtable order
        virtual ~BufferedRenderTargets();
        virtual void OnEndFrame();
        BufferedRenderTargets(unsigned int arg1, unsigned int arg2, unsigned int arg3, Format format, const char* str);
        void IsContinuousReadbackSupported(const RenderDeviceCaps& renderDeviceCaps, Format format);
        bool UseAppleCVPixelBuffers(const RenderDeviceCaps& renderDeviceCaps, Format format);
        void UseShaderStorageBuffers(const RenderDeviceCaps& renderDeviceCaps) const;
        bool UsePixelBuffers(const RenderDeviceCaps& renderDeviceCaps);
        void UseShaderStorageBuffers(const RenderDeviceCaps& renderDeviceCaps, Format format);
        uint64_t GetOptimalDepthReadbackFormat();
        void GetWriteRTInternal();
        void GetReadRTInternal();
        RenderTargets* GetWriteRT();
        uint64_t GetReadRT();
        unsigned int GetWriteIndex();
        unsigned int GetReadIndex();
        unsigned long Create(int arg1, int arg2, unsigned int arg3);
        void UseAppleCVPixelBuffers(const RenderDeviceCaps& renderDeviceCaps) const;
        uint32_t CreateAppleCVRenderTarget(unsigned long arg1, int arg2, int arg3, unsigned int arg4);
        void Destroy();
        void ResetSyncFences();
        void MapColourTargetData(BufferedImageData& bufferedImageData);
        void SwapRBChannels(const unsigned char* arg1);
        unsigned long CopyColourTargetData(ImageData& imageData);
        void WriteFinished();
        void WriteFinishedInternal(int arg1);
        void CopyToShaderStorageBuffer(RenderContext& renderContext, int arg2);
        void CopyToPixelBuffer(RenderContext& renderContext, int arg2);
        void UnmapColourTargetData();
        unsigned long IsReadyToRead() const;
        void CreateStaticRenderingResources();
        void DestroyStaticRenderingResources();
        static ShaderProgram m_SSBOCopyShaderFloat1;        // = ShaderProgram("")
        static ShaderProgram m_SSBOCopyShaderFloat4;        // = ShaderProgram("")
        static ShaderProgram m_SSBOCopyShaderInt4;          // = ShaderProgram("")
        static ShaderProgram m_SSBOCopyShaderInt4RBSwizzle; // = ShaderProgram("")
        static InputAssemblerState m_IAState;               // = InputAssemblerState()
        static VertexBuffer m_quadVB;                       // = VertexBuffer()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            m_SSBOCopyRT; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static int64_t m_cvTextureCache;

    private:
        RenderDeviceOnEndFrame field_8;
        uint8_t _unknown_9[3];
        RenderResource field_12;
        uint8_t _unknown_17[55];
        unsigned int field_72;
        unsigned int field_76;
        unsigned int field_80;
        unsigned int field_84;
        int field_88;
        int field_92;
        unsigned int field_96;
        uint8_t _unknown_100[412];
    };

    // 0x100be3800
    void BufferedRenderTargets::UseShaderStorageBuffers(const RenderDeviceCaps& renderDeviceCaps) const {
        UseShaderStorageBuffers(renderDeviceCaps, field_72);
    }

    // 0x100be4600
    void BufferedRenderTargets::UseAppleCVPixelBuffers(const RenderDeviceCaps& renderDeviceCaps) const {
        UseAppleCVPixelBuffers((RenderDeviceCaps*)this, field_72);
    }

    // 0x100bfc1a0
    void BufferedRenderTargets::WriteFinished()::$_3::operator()(RenderContext& renderContext) const {
        BufferedRenderTargets* this_00 = field_0;
        if (renderContext.IsObjectAlive(this_00->field_12) != '\0') {
            WriteFinishedInternal(this_00, field_8);
        }
    }

} // namespace jag::render
