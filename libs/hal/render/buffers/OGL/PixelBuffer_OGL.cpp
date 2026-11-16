// libs/hal/render/buffers/OGL/PixelBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

namespace jag::render {
    class PixelBuffer {
    public:
        PixelBuffer(PixelBuffer&& pooledBuffer);
        PixelBuffer(PixelBuffer&& shaderConstBuffer);
        PixelBuffer();
        ~PixelBuffer();
        void Destroy();
        void Create(unsigned int arg1, unsigned int arg2, const void* arg3);
        void Bind();
        void Unbind();
        auto MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void Unmap();

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
        RadialHighlightState field_56;
    };

    // 0x100c14cb0
    PixelBuffer::PixelBuffer() : BufferInterface() {}

    // 0x100c14cd0
    PixelBuffer::~PixelBuffer() {
        Destroy();
    }

    // 0x100c14d00
    void PixelBuffer::Destroy() {
        ReleaseNativeResources("PixelBuffer", 35051);
    }

    // 0x100c14d30
    void PixelBuffer::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 323) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLPixelBufferObjects",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      26, nullptr);
        }
        if (arg3 != nullptr) {
            LogAssert("pInitData == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      28, nullptr);
        }
        CreateBuffer("PixelBuffer", 35051, 35041, 35049, arg1, arg2, nullptr);
    }

    // 0x100c14de0
    void PixelBuffer::Bind() {
        if (field_8 == 0) {
            LogAssert("m_GLBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      40, nullptr);
        }
        if (IsMapped() != '\0') {
            LogAssert("!IsMapped()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      41, nullptr);
        }
        (*___glewBindBuffer)(35051, field_8);
        CheckBufferGlError("glBindBuffer", "PixelBuffer");
    }

    // 0x100c14e70
    void PixelBuffer::Unbind() {
        if (field_8 == 0) {
            LogAssert("m_GLBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      48, nullptr);
        }
        if (IsMapped() != '\0') {
            LogAssert("!IsMapped()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      49, nullptr);
        }
        (*___glewBindBuffer)(35051, 0);
        CheckBufferGlError("glBindBuffer", "PixelBuffer");
    }

    // 0x100c14f00
    auto PixelBuffer::MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapReadBuffer(this, 15052252, 35051, 35041, 35049, lockType, arg2, arg3);
        return result;
    }

    // 0x100c14f50
    void PixelBuffer::Unmap() {
        UnmapBuffer("PixelBuffer", 35051);
    }

    // 0x100c15100
    auto PixelUnpackBuffer::MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapWriteBuffer(this, 15049825, 35052, 35044, 35040, lockType, arg2, arg3);
        return result;
    }

    // 0x100c15150
    void PixelUnpackBuffer::Unmap() {
        UnmapBuffer("PixelUnpackBuffer", 35052);
    }

} // namespace jag::render
