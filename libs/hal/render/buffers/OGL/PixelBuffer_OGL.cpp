// libs/hal/render/buffers/OGL/PixelBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

namespace jag::render {
    class PixelBuffer {
    public:
        PixelBuffer(PixelBuffer&&);
        PixelBuffer();
        ~PixelBuffer();
        void Destroy();
        void Create(unsigned int, unsigned int, void const*);
        void Bind();
        void Unbind();
        MapRead(LockType, unsigned int, unsigned int, unsigned int);
        void Unmap();

        // data members, from how the methods use this: 80 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        uint field_8; // offset 8
        char _unknown_12[4];
        long field_16;       // offset 16
        int field_24;        // offset 24
        uint field_28;       // offset 28
        int field_32;        // offset 32
        uint field_36;       // offset 36
        uint field_40;       // offset 40
        byte field_44;       // offset 44
        undefined3 field_45; // offset 45
        char _unknown_48[8];
        RadialHighlightState field_56; // offset 56
    };

    // 0x100c14cb0, 16 bytes, base-object constructor, placed by class name and debug map
    // PixelBuffer::PixelBuffer()
    void PixelBuffer::PixelBuffer() {
        new (this) BufferInterface();
    }

    // 0x100c14cc0, 16 bytes, complete-object constructor, placed by class name and debug map
    // PixelBuffer::PixelBuffer(): jumps straight to the base-object constructor

    // 0x100c14cd0, 48 bytes, base-object destructor, placed by class name and debug map
    // PixelBuffer::~PixelBuffer()
    void PixelBuffer::~PixelBuffer() {
        Destroy(this);
        ~BufferInterface();
    }

    // 0x100c14d00, 32 bytes, placed by class name and debug map
    // PixelBuffer::Destroy()
    void PixelBuffer::Destroy() {
        ReleaseNativeResources("PixelBuffer", 35051);
    }

    // 0x100c14d20, 16 bytes, complete-object destructor, placed by class name and debug map
    // PixelBuffer::~PixelBuffer(): jumps straight to the base-object destructor

    // 0x100c14d30, 176 bytes, placed by class name and debug map
    // PixelBuffer::Create(unsigned int, unsigned int, void const*)
    void PixelBuffer::Create(uint param_1, uint param_2, void* param_3) {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 323) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLPixelBufferObjects",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      26, (char*)0);
        }
        if (param_3 != (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pInitData == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      28, (char*)0);
        }
        CreateBuffer("PixelBuffer", 35051, 35041, 35049, param_1, param_2, 0);
    }

    // 0x100c14de0, 144 bytes, placed by class name and debug map
    // PixelBuffer::Bind()
    void PixelBuffer::Bind() {
        if (field_8 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      40, (char*)0);
        }
        if (IsMapped() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsMapped()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      41, (char*)0);
        }
        (*___glewBindBuffer)(35051, field_8);
        CheckBufferGlError("glBindBuffer", "PixelBuffer");
    }

    // 0x100c14e70, 144 bytes, placed by class name and debug map
    // PixelBuffer::Unbind()
    void PixelBuffer::Unbind() {
        if (field_8 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      48, (char*)0);
        }
        if (IsMapped() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsMapped()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelBuffer_OGL.cpp",
                      49, (char*)0);
        }
        (*___glewBindBuffer)(35051, 0);
        CheckBufferGlError("glBindBuffer", "PixelBuffer");
    }

    // 0x100c14f00, 80 bytes, placed by class name and debug map
    // PixelBuffer::MapRead(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 PixelBuffer::MapRead(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                                    undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapReadBuffer(param_1, param_2, "PixelBuffer", 35051, 35041, 35049, param_3, param_4, param_5,
                                       param_6);
        return param_1;
    }

    // 0x100c14f50, 32 bytes, placed by class name and debug map
    // PixelBuffer::Unmap()
    void PixelBuffer::Unmap() {
        UnmapBuffer("PixelBuffer", 35051);
    }

    // 0x100c14f70, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // PixelUnpackBuffer::PixelUnpackBuffer(): jumps straight to the base-object constructor

    // 0x100c14f80, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // PixelUnpackBuffer::~PixelUnpackBuffer(): jumps straight to the base-object destructor

    // 0x100c15100, 80 bytes, placed by debug map only (low confidence)
    // PixelUnpackBuffer::MapWrite(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 PixelUnpackBuffer::MapWrite(undefined8 param_1, undefined8 param_2, undefined4 param_3,
                                           undefined4 param_4, undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapWriteBuffer(param_1, param_2, "PixelUnpackBuffer", 35052, 35044, 35040, param_3, param_4,
                                        param_5, param_6);
        return param_1;
    }

    // 0x100c15150, 32 bytes, placed by debug map only (low confidence)
    // PixelUnpackBuffer::Unmap()
    void PixelUnpackBuffer::Unmap() {
        UnmapBuffer("PixelUnpackBuffer", 35052);
    }

} // namespace jag::render
