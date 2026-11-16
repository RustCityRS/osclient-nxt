// libs/hal/render/buffers/VertexBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class VertexBuffer {
    public:
        IsRecyclable() const;
        VertexBuffer(VertexBuffer&&);
        VertexBuffer();
        ~VertexBuffer();
        void Create(unsigned int, unsigned int, void const*);
        void Update(unsigned int, unsigned int, void const*, UpdateType);
        void Destroy();
        MapRead(LockType, unsigned int, unsigned int, unsigned int);
        MapWrite(LockType, unsigned int, unsigned int, unsigned int);
        void Unmap();
        ShaderConstBuffer* operator=(VertexBuffer&&);
        static /* 8 bytes */ BUFFER_TYPE_NAME; // = "VertexBuffer"

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

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    VertexBuffer::IsRecyclable() const;

    // 0x1001e19d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VertexBuffer::VertexBuffer(VertexBuffer&&): jumps straight to the base-object constructor

    // 0x1001e19d0: the linker folded this into VertexBuffer::VertexBuffer(VertexBuffer&&), which has identical code
    PixelBuffer::PixelBuffer(PixelBuffer&&);

    // 0x100bfc010: the linker folded this into ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&), which has identical code
    VertexBuffer::VertexBuffer(VertexBuffer&&);

    // 0x100c15450, 16 bytes, complete-object constructor, placed by class name
    // VertexBuffer::VertexBuffer(): jumps straight to the base-object constructor

    // 0x100c15460, 16 bytes, complete-object destructor, placed by class name
    // VertexBuffer::~VertexBuffer(): jumps straight to the base-object destructor

    // 0x100c15470, 80 bytes, placed by class name
    // VertexBuffer::MapRead(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 VertexBuffer::MapRead(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                                     undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapReadBuffer(param_1, param_2, "VertexBuffer", 34962, 35044, 35048, param_3, param_4, param_5,
                                       param_6);
        return param_1;
    }

    // 0x100c154c0, 80 bytes, placed by class name
    // VertexBuffer::MapWrite(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 VertexBuffer::MapWrite(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                                      undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapWriteBuffer(param_1, param_2, "VertexBuffer", 34962, 35044, 35048, param_3, param_4,
                                        param_5, param_6);
        return param_1;
    }

    // 0x100c15510, 32 bytes, placed by class name
    // VertexBuffer::Unmap()
    void VertexBuffer::Unmap() {
        UnmapBuffer("VertexBuffer", 34962);
    }

    // 0x100c3b2a0, 32 bytes, inline, placed by class name and debug map
    // VertexBuffer::operator=(VertexBuffer&&)
    /* ShaderConstBuffer::TEMPNAMEPLACEHOLDERVALUE(ShaderConstBuffer&&) */

    ShaderConstBuffer* ShaderConstBuffer::operator=(ShaderConstBuffer* param_1) {
        BufferInterface::operator=((BufferInterface*)this, (BufferInterface*)param_1);
        return this;
    }

    // 0x100c3e100, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DeferredRenderFunction::~DeferredRenderFunction(): jumps straight to the base-object destructor

    // 0x100c3e110, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DeferredRenderFunction::~DeferredRenderFunction()
    void DeferredRenderFunction::~DeferredRenderFunction() {
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)this);
    }

} // namespace jag::render

namespace jag::fixedfunction {
    // 0x100c3c780, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::__0, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __0* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(BufferInterface**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(char**)(this + 32) = param_1->field_16;
        *(code**)(this + 144) = function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
            (char const*)->UnmapBuffer(unsigned int)::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
            (char const*)->UnmapBuffer(unsigned int)::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
            (char const*)->UnmapBuffer(unsigned int)::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c3c7d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c3c7e0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*,
   unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned
   int)::$_0&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c3c800, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c3c810, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*,
   unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned
   int)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (char const*)->UnmapBuffer(unsigned int)::$_0::operator()(param_1, param_2);
    }

    // 0x100c3c8e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c3c9c0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void_const*, render::UpdateType)::__1,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __1* param_1) {
        *(undefined8*)this = 0;
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                           render::UpdateType)::$_1::__1((__1*)(this + 16), (__1*)param_1);
        *(code**)(this + 144) =
            function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                           unsigned int, void_const*, render::UpdateType)::$_1,
                     void>((char const*)
                               ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                                              render::UpdateType)::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                           unsigned int, void_const*, render::UpdateType)::$_1,
                     void>((char const*)
                               ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                                              render::UpdateType)::$_1&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                           unsigned int, void_const*, render::UpdateType)::$_1,
                     void>((char const*)
                               ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                                              render::UpdateType)::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c3ca60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void_const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void_const*, render::UpdateType)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c3ca70, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*,
   unsigned int, unsigned int, unsigned int, unsigned int, void const*,
   render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*,
   unsigned int, unsigned int, unsigned int, unsigned int, void const*,
   render::UpdateType)::$_1&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void_const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void_const*, render::UpdateType)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                           render::UpdateType)::$_1::__1(param_2, param_1);
    }

    // 0x100c3cae0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void_const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void_const*, render::UpdateType)::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c3caf0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*,
   unsigned int, unsigned int, unsigned int, unsigned int, void const*,
   render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*,
   unsigned int, unsigned int, unsigned int, unsigned int, void const*,
   render::UpdateType)::$_1&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void_const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void_const*, render::UpdateType)::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                           render::UpdateType)::$_1::operator()(param_1, param_2);
    }

    // 0x100c3cb90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void_const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void_const*, render::UpdateType)::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100c3cba0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*,
   unsigned int, unsigned int, unsigned int, unsigned int, void const*,
   render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*,
   unsigned int, unsigned int, unsigned int, unsigned int, void const*,
   render::UpdateType)::$_1&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void_const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void_const*, render::UpdateType)::$_1&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                           render::UpdateType)::$_1::~__1((__1*)this);
    }

} // namespace jag::fixedfunction

namespace jag::oldscape {
    // 0x1001e2070, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection(): jumps straight to the base-object constructor

    // 0x1001e2160, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection()
    void OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection() {
        new (field_12) UISceneSettings();
        new (field_44) callstack::Callstack();
    }

    // 0x1001e23c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection(OSRenderCore_RenderThread_JavaStyle::VertexBufferSection&&): jumps straight to the base-object constructor

    // 0x1001e23d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection(OSRenderCore_RenderThread_JavaStyle::VertexBufferSection&&)
    void OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection(VertexBufferSection* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        new (field_12, (UISceneSettings*)param_1->field_12) UISceneSettings();
        *(undefined4*)field_44 = *(undefined4*)param_1->field_44;
    }

} // namespace jag::oldscape

namespace jag::render::internal {
    // 0x100c3b3d0, 80 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BufferPool<VertexBuffer>::GarbageCollect(bool)::{lambda(ManagedBuffer<VertexBuffer> const&, ManagedBuffer<VertexBuffer> const&)#1}::operator()(ManagedBuffer<VertexBuffer> const&, ManagedBuffer<VertexBuffer> const&) const
    /* BufferPool<ShaderConstBuffer>::GarbageCollect(bool)::{lambda(ManagedBuffer<ShaderConstBuffer>
   const&, ManagedBuffer<ShaderConstBuffer>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(ManagedBuffer<ShaderConstBuffer>
   const&, ManagedBuffer<ShaderConstBuffer> const&) const */

    bool BufferPool<ShaderConstBuffer>::GarbageCollect(bool)::{
        lambda(ManagedBuffer<ShaderConstBuffer> const&, ManagedBuffer<ShaderConstBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<ShaderConstBuffer>
                     const__jag__render__internal__ManagedBuffer<ShaderConstBuffer> const___1_* this,
                 ManagedBuffer * param_1, ManagedBuffer * param_2)

    {
        char cVar1;
        uint uVar2;
        uint uVar3;

        cVar1 = param_1->IsPermanent();
        uVar3 = *(uint*)(param_1 + 80) + 1000;
        if (cVar1 == '\0') {
            uVar3 = *(uint*)(param_1 + 80);
        }
        cVar1 = param_2->IsPermanent();
        uVar2 = *(uint*)(param_2 + 80) + 1000;
        if (cVar1 == '\0') {
            uVar2 = *(uint*)(param_2 + 80);
        }
        return uVar2 < uVar3;
    }

} // namespace jag::render::internal
