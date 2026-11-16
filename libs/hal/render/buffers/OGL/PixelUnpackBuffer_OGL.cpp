// libs/hal/render/buffers/OGL/PixelUnpackBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

namespace jag::render {
    class PixelUnpackBuffer {
    public:
        bool IsRecyclable() const;
        PixelUnpackBuffer(PixelUnpackBuffer&& shaderConstBuffer);
        PixelUnpackBuffer();
        ~PixelUnpackBuffer();
        void Create(unsigned int arg1, unsigned int arg2, const void* arg3);
        void Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType);
        void Destroy();
        bool Bind();
        void Unbind();
        auto MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void Unmap();
        ShaderConstBuffer* operator=(PixelUnpackBuffer&& vertexBuffer);
        static const char* BUFFER_TYPE_NAME; // = "PixelUnpackBuffer"

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        unsigned int field_8;
        uint8_t _unknown_12[4];
        long field_16;
        LockType field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        uint8_t field_44;
        uint8_t field_45[3];
        uint8_t _unknown_48[8];
        GPUMemoryTrackingEntry field_56;
    };

    // 0x100f29028
    const char* PixelUnpackBuffer::BUFFER_TYPE_NAME = "PixelUnpackBuffer";

    // 0x100c11a90
    PixelUnpackBuffer::PixelUnpackBuffer() : BufferInterface() {}

    // 0x100c11d10
    PixelUnpackBuffer::~PixelUnpackBuffer() {
        Destroy();
    }

    // 0x100c121e0
    void PixelUnpackBuffer::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 324) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLPixelUnpackBufferObjects",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelUnpackBuffer_OGL.cpp",
                      26, nullptr);
        }
        CreateBuffer("PixelUnpackBuffer", 35052, 35044, 35040, arg1, arg2, arg3);
    }

    // 0x100c123c0
    void PixelUnpackBuffer::Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType) {
        UpdateBuffer("PixelUnpackBuffer", 35052, 35040, arg1, arg2, arg3, updateType);
    }

    // 0x100c12580
    void PixelUnpackBuffer::Destroy() {
        ReleaseNativeResources("PixelUnpackBuffer", 35052);
    }

    // 0x100c14f90
    bool PixelUnpackBuffer::Bind() {
        unsigned int uVar6;
        Logger* this_00;
        unsigned int local_34;

        int iVar3 = GetNativeBuffer();
        void* pcVar1 = ___glewBindBuffer;
        if (iVar3 == 0) {
            LogAssert("GetNativeBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelUnpackBuffer_OGL.cpp",
                      40, nullptr);
        }
        uint32_t uVar4 = GetNativeBuffer();
        (*pcVar1)(35052, uVar4);
        CheckBufferGlError("glBindBuffer", "PixelUnpackBuffer");
        _glGetIntegerv(35055, &local_34);
        CheckBufferGlError("glGetIntegerv", "PixelUnpackBuffer");
        unsigned int uVar2 = local_34;
        unsigned int uVar5 = GetNativeBuffer();
        if (uVar2 != uVar5) {
            this_00 = logger::default_logger();
            uVar6 = GetNativeBuffer();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                         "PixelUnpackBuffer_OGL.cpp",
                         49, "Failed to bind %s: %i was bound instead of %i", "PixelUnpackBuffer",
                         (unsigned long)local_34, (unsigned long)uVar6);
        }
        return uVar2 == uVar5;
    }

    // 0x100c150a0
    void PixelUnpackBuffer::Unbind() {
        if (GetNativeBuffer() == 0) {
            LogAssert("GetNativeBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelUnpackBuffer_OGL.cpp",
                      56, nullptr);
        }
        (*___glewBindBuffer)(35052, 0);
        CheckBufferGlError("glBindBuffer", "PixelUnpackBuffer");
    }

} // namespace jag::render
