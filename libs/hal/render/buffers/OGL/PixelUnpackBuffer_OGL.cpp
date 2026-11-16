// libs/hal/render/buffers/OGL/PixelUnpackBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

namespace jag::render {
    class PixelUnpackBuffer {
    public:
        IsRecyclable() const;
        PixelUnpackBuffer(PixelUnpackBuffer&&);
        PixelUnpackBuffer();
        ~PixelUnpackBuffer();
        void Create(unsigned int, unsigned int, void const*);
        void Update(unsigned int, unsigned int, void const*, UpdateType);
        void Destroy();
        bool Bind();
        void Unbind();
        MapWrite(LockType, unsigned int, unsigned int, unsigned int);
        void Unmap();
        ShaderConstBuffer* operator=(PixelUnpackBuffer&&);
        static /* 8 bytes */ BUFFER_TYPE_NAME; // = "PixelUnpackBuffer"

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
        GPUMemoryTrackingEntry field_56; // offset 56
    };

    // 0x100f29028, 8 bytes, __const
    PixelUnpackBuffer::BUFFER_TYPE_NAME = "PixelUnpackBuffer";

    // 0x100c11a90, 16 bytes, base-object constructor, placed by class name and debug map
    // PixelUnpackBuffer::PixelUnpackBuffer()
    void PixelUnpackBuffer::PixelUnpackBuffer() {
        new (this) BufferInterface();
    }

    // 0x100c11d10, 48 bytes, base-object destructor, placed by class name and debug map
    // PixelUnpackBuffer::~PixelUnpackBuffer()
    void PixelUnpackBuffer::~PixelUnpackBuffer() {
        Destroy(this);
        ~BufferInterface();
    }

    // 0x100c121e0, 128 bytes, placed by class name and debug map
    // PixelUnpackBuffer::Create(unsigned int, unsigned int, void const*)
    void PixelUnpackBuffer::Create(uint param_1, uint param_2, void* param_3) {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 324) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLPixelUnpackBufferObjects",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelUnpackBuffer_OGL.cpp",
                      26, (char*)0);
        }
        CreateBuffer("PixelUnpackBuffer", 35052, 35044, 35040, param_1, param_2, param_3);
    }

    // 0x100c123c0, 48 bytes, placed by class name and debug map
    // PixelUnpackBuffer::Update(unsigned int, unsigned int, void const*, UpdateType)
    void PixelUnpackBuffer::Update(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_5) {
        UpdateBuffer("PixelUnpackBuffer", 35052, 35040, param_1, param_2, param_3, param_5);
    }

    // 0x100c12580, 32 bytes, placed by class name and debug map
    // PixelUnpackBuffer::Destroy()
    void PixelUnpackBuffer::Destroy() {
        ReleaseNativeResources("PixelUnpackBuffer", 35052);
    }

    // 0x100c14f90, 272 bytes, placed by __FILE__ string
    // PixelUnpackBuffer::Bind()
    bool PixelUnpackBuffer::Bind() {
        code* pcVar1;
        int iVar2;
        undefined4 uVar3;
        int iVar4;
        undefined8 uVar5;
        int local_34;

        iVar2 = GetNativeBuffer();
        pcVar1 = ___glewBindBuffer;
        if (iVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetNativeBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelUnpackBuffer_OGL.cpp",
                      40, (char*)0);
        }
        uVar3 = GetNativeBuffer();
        (*pcVar1)(35052, uVar3);
        CheckBufferGlError("glBindBuffer", "PixelUnpackBuffer");
        _glGetIntegerv(35055, &local_34);
        CheckBufferGlError("glGetIntegerv", "PixelUnpackBuffer");
        iVar2 = local_34;
        iVar4 = GetNativeBuffer();
        if (iVar2 != iVar4) {
            uVar5 = logger::default_logger();
            uVar3 = GetNativeBuffer();
            logger::Logger::Log(uVar5, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/OGL/PixelUnpackBuffer_OGL.cpp",
                                49, "Failed to bind %s: %i was bound instead of %i", "PixelUnpackBuffer", local_34,
                                uVar3);
        }
        return iVar2 == iVar4;
    }

    // 0x100c150a0, 96 bytes, placed by __FILE__ string
    // PixelUnpackBuffer::Unbind()
    void PixelUnpackBuffer::Unbind() {
        if (GetNativeBuffer() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetNativeBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "PixelUnpackBuffer_OGL.cpp",
                      56, (char*)0);
        }
        (*___glewBindBuffer)(35052, 0);
        CheckBufferGlError("glBindBuffer", "PixelUnpackBuffer");
    }

} // namespace jag::render
