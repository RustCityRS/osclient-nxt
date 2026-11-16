// libs/hal/render/buffers/BufferInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class BufferInterface {
    public:
        GetSizeInBytes() const;
        GetPhysicalSizeInBytes() const;
        bool IsCreated() const;
        GetCreationFlags() const;
        byte IsPermanent() const;
        void IsMapped() const;
        byte IsDynamic() const;
        uint GetNativeBuffer() const;
        BufferInterface();
        BufferInterface(BufferInterface&&);
        BufferInterface* operator=(BufferInterface&&);
        bool UseDefaultVAO(unsigned int);
        bool CreateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                          void const*);
        int CreateBufferInternal(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                 void const*);
        uint GetNativeBufferInternal() const;
        void CheckBufferGlError(char const*, char const*);
        void ReleaseNativeResources(char const*, unsigned int);
        void ReleaseNativeResourcesInternal(char const*, unsigned int, unsigned int, bool);
        void CheckBufferGlErrorStatic(char const*, char const*);
        long MapBuffer(char const*, unsigned int, unsigned int, unsigned int, LockType, unsigned int, unsigned int,
                       unsigned int);
        ulong UnmapBuffer(char const*, unsigned int);
        void UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType);
        void ForceNoRecycling();
        ~BufferInterface();
        ResourceDataT<unsigned char const>* MapReadBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                          LockType, unsigned int, unsigned int, unsigned int);
        ResourceDataT<unsigned char const>* MapWriteBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                           LockType, unsigned int, unsigned int, unsigned int);

        // data members, from how the methods use this: 80 bytes
        uint field_0;           // offset 0
        RenderResource field_4; // offset 4
        char _unknown_5[3];
        uint m_nativeBuffer; // offset 8
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

    // 0x1000fa840: the linker folded this into oldscape::graphics::NXTPixScreen::GetHeight() const, which has identical code
    BufferInterface::GetSizeInBytes() const;

    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    BufferInterface::GetPhysicalSizeInBytes() const;

    // 0x100815450: the linker folded this into QueryView::IsValid() const, which has identical code
    BufferInterface::IsCreated() const;

    // 0x10082a9b0: the linker folded this into graphics::ModularParticleSystemTemplate::GetRenderPassBits() const, which has identical code
    BufferInterface::GetCreationFlags() const;

    // 0x100c0d970, 16 bytes, inline, placed by class name and debug map
    // BufferInterface::IsPermanent() const
    byte BufferInterface::IsPermanent() {
        return (field_44 & 4) >> 2;
    }

    // 0x100c0dc50, 16 bytes, inline, placed by class name and debug map
    // BufferInterface::IsMapped() const
    void BufferInterface::IsMapped() {
        (&field_48)->operator_cast_to_bool();
    }

    // 0x100c0dc70, 16 bytes, inline, placed by class name and debug map
    // BufferInterface::IsDynamic() const
    byte BufferInterface::IsDynamic() {
        return field_44 & 1;
    }

    // 0x100c149b0, 16 bytes, inline, placed by class name
    // BufferInterface::ForceNoRecycling()
    void BufferInterface::ForceNoRecycling() {
        field_44 = field_44 | 16;
    }

    // 0x100c149e0, 48 bytes, base-object destructor, inline, placed by class name
    // BufferInterface::~BufferInterface()
    void BufferInterface::~BufferInterface() {
        field_56->~GPUMemoryTrackingEntry();
        ~RenderResource();
    }

    // 0x100c31a10, 16 bytes, base-object destructor, placed by class name
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)::$_1::~$_1()
    /* ~$_1() */

    void BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                                       UpdateType)::$_1::~__1() {
        (&field_32)->~WrapArrayValueCopy();
    }

    // 0x100c3c820, 192 bytes, placed by class name
    // BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0::operator()(RenderContext&) const
    /* BufferInterface::UnmapBuffer(char const*, unsigned
   int)::$_0::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        BufferInterface* this_00;
        code* pcVar2;
        char cVar3;
        undefined4 uVar4;

        this_00 = field_0;
        cVar3 = param_1->IsObjectAlive(this_00);
        if (cVar3 != '\0') {
            cVar3 = IsCreated(this_00);
            pcVar2 = ___glewBindBuffer;
            if (cVar3 != '\0') {
                uVar1 = field_8;
                uVar4 = GetNativeBufferInternal(this_00);
                (*pcVar2)(uVar1, uVar4);
                CheckBufferGlError(this_00, "glBindBuffer", field_16);
                (*___glewFlushMappedBufferRange)(field_8, this_00->field_28, this_00->field_32);
                CheckBufferGlError(this_00, "glFlushMappedBufferRange", field_16);
                (*___glewBindBuffer)(field_8, 0);
                CheckBufferGlError(this_00, "glBindBuffer", field_16);
            }
        }
    }

    // 0x100c3ca10, 16 bytes, complete-object constructor, placed by class name
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)::$_1::$_1($_1&&): jumps straight to the base-object constructor

    // 0x100c3ca20, 64 bytes, base-object constructor, placed by class name
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)::$_1::$_1($_1&&)
    /* $_1($_1&&) */

    void BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                                       UpdateType)::$_1::__1(__1* param_1) {
        BufferInterface* pBVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        ulong uVar4;

        pBVar1 = *(BufferInterface**)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(ulong*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = uVar4;
        field_0 = pBVar1;
        field_8 = uVar2;
        new (&field_32, (WrapArrayValueCopy*)(param_1 + 32)) WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>();
        field_80 = *(undefined4*)(param_1 + 80);
    }

    // 0x100c3ca90, 16 bytes, complete-object constructor, placed by class name
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)::$_1::$_1($_1 const&): jumps straight to the base-object constructor

    // 0x100c3caa0, 64 bytes, base-object constructor, placed by class name
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)::$_1::$_1($_1 const&)
    /* $_1($_1 const&) */

    void BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                                       UpdateType)::$_1::__1(__1* param_1) {
        BufferInterface* pBVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        ulong uVar4;

        pBVar1 = *(BufferInterface**)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(ulong*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = uVar4;
        field_0 = pBVar1;
        field_8 = uVar2;
        new (&field_32, (WrapArrayValueCopy*)(param_1 + 32)) WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>();
        field_80 = *(undefined4*)(param_1 + 80);
    }

    // 0x100c3cb00, 144 bytes, placed by class name
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)::$_1::operator()(RenderContext&) const
    /* BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
   unsigned int, void const*,
   UpdateType)::$_1::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                                       UpdateType)::$_1::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        BufferInterface* this_00;
        undefined8 uVar3;
        ulong uVar4;
        char cVar5;
        undefined8 uVar6;
        undefined4 local_34;

        this_00 = field_0;
        cVar5 = param_1->IsObjectAlive(this_00);
        if (cVar5 != '\0') {
            cVar5 = IsCreated(this_00);
            if (cVar5 != '\0') {
                uVar3 = field_8;
                uVar1 = field_16;
                uVar2 = field_20;
                uVar4 = field_24;
                uVar6 = (&field_32)->end();
                local_34 = (undefined4)(uVar4 >> 32);
                UpdateBuffer(this_00, uVar3, uVar1, uVar2, uVar4 & 4294967295, local_34, uVar6, field_80);
            }
        }
    }

} // namespace jag::render
