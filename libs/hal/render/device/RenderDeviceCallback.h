// libs/hal/render/device/RenderDeviceCallback.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render::internal {
    template <typename...> // 4 instantiations, e.g. <IndexBuffer>, <PixelUnpackBuffer>, <ShaderConstBuffer>
    class ManagedBuffer {
    public:
        ManagedBuffer();
        ManagedBuffer(PooledBuffer<IndexBuffer>&&);
        ~ManagedBuffer();
        IsReadyToReuse() const;
        ManagedBuffer(PooledBuffer<VertexBuffer>&&);
        ManagedBuffer(PooledBuffer<ShaderConstBuffer>&&);
        ManagedBuffer(PooledBuffer<PixelUnpackBuffer>&&);
        ManagedBuffer<IndexBuffer>* operator=(ManagedBuffer<IndexBuffer>&&);
        ManagedBuffer<ShaderConstBuffer>* operator=(ManagedBuffer<VertexBuffer>&&);
    };

    // 0x100c0e2e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::BufferPool(): jumps straight to the base-object constructor

    // 0x100c0e2f0, 208 bytes, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::OnEndFrame()
    void BufferPool<IndexBuffer>::OnEndFrame() {
        Layout* this_00;
        uint uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        long lVar4;
        bool bVar5;
        uint uVar6;
        uint* puVar7;
        hashtable_iterator_base* extraout_RDX;
        long extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        (SUB81(this, 0))->GarbageCollect();
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar5 = eastl::operator!=(local_40, local_38, extraout_RDX);
        if (bVar5) {
            do {
                puVar7 = (uint*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                this_00 = (Layout*)(puVar7 + 2);
                uVar2 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                uVar3 = this_00->end();
                lVar4 = eastl::minmax_element<ManagedBuffer<IndexBuffer> const*,
                                              BufferPool<IndexBuffer>::OnEndFrame()::_lambda(
                                                  auto : 1_const &, auto : 2_const &) _1_>(uVar2, uVar3);
                uVar1 = *puVar7;
                uVar6 = this_00->size();
                BufferPoolStats::RecordEndOfFrameStats("IndexBuffer", uVar1, uVar6, *(uint*)(lVar4 + 88),
                                                       *(uint*)(extraout_RDX_00 + 88));
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar5 = eastl::operator!=(local_40, local_38, extraout_RDX_01);
            } while (bVar5);
        }
    }

    // 0x100c0e3c0, 576 bytes, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::GarbageCollect(bool)
    void BufferPool<IndexBuffer>::GarbageCollect(bool param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        long lVar5;
        IndexBuffer* this_00;
        IndexBuffer* pIVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        ManagedBuffer* pMVar9;
        ManagedBuffer* pMVar10;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        uint uVar11;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8 local_50;
        hashtable_iterator_base local_48[8];
        BufferPool<IndexBuffer>* local_40;
        eastl local_38[8];

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      320, (char*)0);
        }
        if (param_1) {
            BufferPoolStats::PrintPoolUsage();
            ((this + 32))->clear();
            BufferPoolStats::ResetStats();
        } else {
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar2 = eastl::operator!=(local_38, local_48, extraout_RDX);
            if (bVar2) {
                local_40 = this + 32;
                do {
                    lVar5 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_38);
                    this_01 =
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar5 + 8);
                    cVar1 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_01);
                    if (cVar1 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!bufferList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  334, (char*)0);
                    }
                    this_00 = (IndexBuffer*)this_01->HeapBeginPtr();
                    pIVar6 = (IndexBuffer*)this_01->end();
                    for (; this_00 != pIVar6; this_00 = (IndexBuffer*)&this_00[1].field_4) {
                        uVar11 = *(int*)&this_00->field_88 + 1;
                        *(uint*)&this_00->field_88 = uVar11;
                        uVar3 = this_00->GetEndPosition();
                        uVar4 = 1000;
                        if (16383 < uVar3) {
                            uVar4 = 5;
                        }
                        if ((uVar4 < uVar11) && (cVar1 = this_00->IsPermanent(), cVar1 == '\0')) {
                            this_00->Destroy();
                        }
                    }
                    uVar7 = this_01->HeapBeginPtr();
                    uVar8 = this_01->end();
                    pMVar9 =
                        std::remove_if<ManagedBuffer<IndexBuffer>*,
                                       bool->GarbageCollect()::_lambda(ManagedBuffer<IndexBuffer>&) _1_>(uVar7, uVar8);
                    pMVar10 = (ManagedBuffer*)this_01->end();
                    this_01->erase(pMVar9, pMVar10);
                    uVar7 = this_01->HeapBeginPtr();
                    uVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<IndexBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<IndexBuffer> const&,
                                                                      ManagedBuffer<IndexBuffer> const&) _1_>(uVar7,
                                                                                                              uVar8);
                    cVar1 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_01);
                    if (cVar1 == '\0') {
                        eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator++((rbtree_iterator<
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                       local_38);
                    } else {
                        new (&local_50)
                            eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_38);
                        eastl::rbtree<
                            unsigned int,
                            eastl::pair<unsigned int const,
                                        eastl::vector<ManagedBuffer<IndexBuffer>, eastl::allocator>>,
                            eastl::less<unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<unsigned int const,
                                                         eastl::vector<ManagedBuffer<IndexBuffer>, eastl::allocator>>>,
                            true, true>::erase((rbtree_iterator*)local_48, local_40, local_50);
                        eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator=(
                            (rbtree_iterator<
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38,
                            (rbtree_iterator*)local_48);
                    }
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=(local_38, local_48, extraout_RDX_00);
                } while (bVar2);
            }
        }
    }

    // 0x100c0e6d0, 16 bytes, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::OnDeviceLost()
    void BufferPool<IndexBuffer>::OnDeviceLost() {
        (SUB81(this, 0))->GarbageCollect();
    }

    // 0x100c0ed50, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::ManagedBuffer()
    void ManagedBuffer<IndexBuffer>::ManagedBuffer() {
        PooledBuffer<IndexBuffer>::PooledBuffer();
        *(undefined4*)(this + 88) = 0;
    }

    // 0x100c0ed70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::ManagedBuffer(): jumps straight to the base-object constructor

    // 0x100c0ed80, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::ManagedBuffer(PooledBuffer<IndexBuffer>&&)
    void ManagedBuffer<IndexBuffer>::ManagedBuffer(PooledBuffer* param_1) {
        new (this) PooledBuffer<IndexBuffer>(param_1);
        *(undefined4*)(this + 88) = 0;
    }

    // 0x100c0eda0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::ManagedBuffer(PooledBuffer<IndexBuffer>&&): jumps straight to the base-object constructor

    // 0x100c0edb0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::~ManagedBuffer()
    void ManagedBuffer<IndexBuffer>::~ManagedBuffer() {
        Destroy();
        ~PooledBuffer();
    }

    // 0x100c0ede0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::~ManagedBuffer(): jumps straight to the base-object destructor

    // 0x100c0edf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ManagedBuffer<IndexBuffer>::IsReadyToReuse() const
    undefined8 ManagedBuffer<IndexBuffer>::IsReadyToReuse() {
        if (*(uint*)(this + 88) < 4) {
            return 0;
        }
        return IsCreated();
    }

    // 0x100c10390, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<VertexBuffer>::ManagedBuffer()
    void ManagedBuffer<VertexBuffer>::ManagedBuffer() {
        PooledBuffer<VertexBuffer>::PooledBuffer();
        *(undefined4*)(this + 80) = 0;
    }

    // 0x100c103b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<VertexBuffer>::ManagedBuffer(): jumps straight to the base-object constructor

    // 0x100c103c0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<VertexBuffer>::ManagedBuffer(PooledBuffer<VertexBuffer>&&)
    void ManagedBuffer<VertexBuffer>::ManagedBuffer(PooledBuffer* param_1) {
        new (this) PooledBuffer<ShaderConstBuffer>(param_1);
        *(undefined4*)(this + 80) = 0;
    }

    // 0x100c103e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<VertexBuffer>::ManagedBuffer(PooledBuffer<VertexBuffer>&&): jumps straight to the base-object constructor

    // 0x100c103f0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // ManagedBuffer<VertexBuffer>::~ManagedBuffer()
    void ManagedBuffer<VertexBuffer>::~ManagedBuffer() {
        Destroy();
        ~PooledBuffer();
    }

    // 0x100c10420, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ManagedBuffer<VertexBuffer>::~ManagedBuffer(): jumps straight to the base-object destructor

    // 0x100c10430, 32 bytes, inline, placed by class header (inline)
    // ManagedBuffer<VertexBuffer>::IsReadyToReuse() const
    undefined8 ManagedBuffer<VertexBuffer>::IsReadyToReuse() {
        if (*(uint*)(this + 80) < 4) {
            return 0;
        }
        return IsCreated();
    }

    // 0x100c119c0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<ShaderConstBuffer>::ManagedBuffer()
    void ManagedBuffer<ShaderConstBuffer>::ManagedBuffer() {
        PooledBuffer<ShaderConstBuffer>::PooledBuffer();
        *(undefined4*)(this + 80) = 0;
    }

    // 0x100c119e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<ShaderConstBuffer>::ManagedBuffer(): jumps straight to the base-object constructor

    // 0x100c119f0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<ShaderConstBuffer>::ManagedBuffer(PooledBuffer<ShaderConstBuffer>&&)
    void ManagedBuffer<ShaderConstBuffer>::ManagedBuffer(PooledBuffer* param_1) {
        new (this) PooledBuffer<ShaderConstBuffer>(param_1);
        *(undefined4*)(this + 80) = 0;
    }

    // 0x100c11a10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<ShaderConstBuffer>::ManagedBuffer(PooledBuffer<ShaderConstBuffer>&&): jumps straight to the base-object constructor

    // 0x100c11a20, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // ManagedBuffer<ShaderConstBuffer>::~ManagedBuffer()
    void ManagedBuffer<ShaderConstBuffer>::~ManagedBuffer() {
        Destroy();
        ~PooledBuffer();
    }

    // 0x100c11a50, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ManagedBuffer<ShaderConstBuffer>::~ManagedBuffer(): jumps straight to the base-object destructor

    // 0x100c11a60, 32 bytes, inline, placed by class header (inline)
    // ManagedBuffer<ShaderConstBuffer>::IsReadyToReuse() const
    undefined8 ManagedBuffer<ShaderConstBuffer>::IsReadyToReuse() {
        if (*(uint*)(this + 80) < 4) {
            return 0;
        }
        return IsCreated();
    }

    // 0x100c12e90, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer()
    void ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer() {
        PooledBuffer<PixelUnpackBuffer>::PooledBuffer();
        *(undefined4*)(this + 80) = 0;
    }

    // 0x100c12eb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer(): jumps straight to the base-object constructor

    // 0x100c12ec0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer(PooledBuffer<PixelUnpackBuffer>&&)
    void ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer(PooledBuffer* param_1) {
        new (this) PooledBuffer<ShaderConstBuffer>(param_1);
        *(undefined4*)(this + 80) = 0;
    }

    // 0x100c12ee0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer(PooledBuffer<PixelUnpackBuffer>&&): jumps straight to the base-object constructor

    // 0x100c12ef0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // ManagedBuffer<PixelUnpackBuffer>::~ManagedBuffer()
    void ManagedBuffer<PixelUnpackBuffer>::~ManagedBuffer() {
        Destroy();
        ~PooledBuffer();
    }

    // 0x100c12f20, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ManagedBuffer<PixelUnpackBuffer>::~ManagedBuffer(): jumps straight to the base-object destructor

    // 0x100c12f30, 32 bytes, inline, placed by class header (inline)
    // ManagedBuffer<PixelUnpackBuffer>::IsReadyToReuse() const
    undefined8 ManagedBuffer<PixelUnpackBuffer>::IsReadyToReuse() {
        if (*(uint*)(this + 80) < 4) {
            return 0;
        }
        return IsCreated();
    }

} // namespace jag::render::internal

namespace jag::render {
    class RenderDeviceCallback {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceCallback();
        virtual OnDeviceLost();
        OnWindowResize(math::Rect<unsigned int> const&);
        RenderDeviceCallback(bool, int);
        void RegisterRenderDeviceCallback(int);
        void UnregisterRenderDeviceCallback();

        // data members, from how the methods use this: 20 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        int field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderDeviceCallback::OnDeviceLost();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderDeviceCallback::OnWindowResize(math::Rect<unsigned int> const&);

    // 0x100c0e220, 48 bytes, base-object constructor, placed by class name
    // RenderDeviceCallback::RenderDeviceCallback(bool, int)
    void RenderDeviceCallback::RenderDeviceCallback(bool param_1, int param_2) {
        undefined7 in_register_00000031;

        field_0 = &PTR__RenderDeviceCallback_100f29110;
        field_8 = 0;
        field_12 = 1;
        if ((int)CONCAT71(in_register_00000031, param_1) != 0) {
            RegisterRenderDeviceCallback(this, param_2);
        }
    }

    // 0x100c0e250, 32 bytes, base-object constructor, placed by debug map only (low confidence)
    // RenderDeviceOnEndFrame::RenderDeviceOnEndFrame(bool)
    void RenderDeviceOnEndFrame::RenderDeviceOnEndFrame(bool param_1) {
        undefined3 in_register_00000031;

        field_0 = &PTR__RenderDeviceOnEndFrame_100f29140;
        field_8 = 0;
        if (CONCAT31(in_register_00000031, param_1) != 0) {
            RegisterOnEndFrame(this);
        }
    }

    // 0x100c0e280, 64 bytes, base-object destructor, placed by debug map only (low confidence)
    // RenderDeviceOnEndFrame::~RenderDeviceOnEndFrame()
    void RenderDeviceOnEndFrame::~RenderDeviceOnEndFrame() {
        RenderDevice* this_00;

        field_0 = &PTR__RenderDeviceOnEndFrame_100f29140;
        if (field_8 != '\0') {
            if (Singleton<RenderDevice>::InstancePtr() != 0) {
                this_00 = (RenderDevice*)((RenderDeviceOnEndFrame*)this)->Instance();
                this_00->UnregisterOnEndFrame(this);
            }
        }
    }

    // 0x100c0e2c0, 32 bytes, base-object destructor, placed by class name
    // RenderDeviceCallback::~RenderDeviceCallback()
    void RenderDeviceCallback::~RenderDeviceCallback() {
        field_0 = &PTR__RenderDeviceCallback_100f29110;
        UnregisterRenderDeviceCallback(this);
    }

    // 0x100c2e4d0, 48 bytes, placed by class name
    // RenderDeviceCallback::RegisterRenderDeviceCallback(int)
    void RenderDeviceCallback::RegisterRenderDeviceCallback(int param_1) {
        RenderDevice* this_00;

        if (field_8 == '\0') {
            field_12 = param_1;
            this_00 = (RenderDevice*)Instance();
            this_00->RegisterCallback(this);
            field_8 = 1;
        }
    }

    // 0x100c2e500, 16 bytes, complete-object constructor, placed by class name
    // RenderDeviceCallback::RenderDeviceCallback(bool, int): jumps straight to the base-object constructor

    // 0x100c2e510, 64 bytes, placed by class name
    // RenderDeviceCallback::UnregisterRenderDeviceCallback()
    void RenderDeviceCallback::UnregisterRenderDeviceCallback() {
        RenderDevice* this_00;

        if (field_8 != '\0') {
            if (Singleton<RenderDevice>::InstancePtr() != 0) {
                this_00 = (RenderDevice*)((RenderDeviceCallback*)this)->Instance();
                this_00->UnregisterCallback(this);
                field_8 = 0;
            }
        }
    }

    // 0x100c2e550, 16 bytes, complete-object destructor, placed by class name
    // RenderDeviceCallback::~RenderDeviceCallback(): jumps straight to the base-object destructor

    // 0x100c2e560, 32 bytes, deleting destructor, placed by class name
    // RenderDeviceCallback::~RenderDeviceCallback()
    void RenderDeviceCallback::~RenderDeviceCallback() {
        ~RenderDeviceCallback(this);
        operator_delete(this);
    }

} // namespace jag::render
