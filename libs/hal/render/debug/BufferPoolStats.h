// libs/hal/render/debug/BufferPoolStats.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render::internal {
    template <typename...> // 4 instantiations, e.g. <IndexBuffer>, <PixelUnpackBuffer>, <ShaderConstBuffer>
    class BufferPool {
    public:
        // virtual methods in vtable order
        virtual ~BufferPool();
        virtual void OnDeviceLost();
        virtual void OnEndFrame();
        BufferPool();
        void GarbageCollect(bool);
    };

    // 0x100c0e0f0, 224 bytes, base-object constructor, inline, placed by class header (inline)
    // BufferPool<IndexBuffer>::BufferPool()
    void BufferPool<IndexBuffer>::BufferPool() {
        undefined* puVar1;
        allocator local_30[8];

        new (this) AutoSingleton<BufferPool<IndexBuffer>>();
        new (this) RenderDeviceCallback(true, 3);
        new ((this + 16)) RenderDeviceOnEndFrame(true);
        puVar1 = PTR_vtable_100ee86b0;
        *(undefined**)this = PTR_vtable_100ee86b0 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 32));
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 80));
    }

    // 0x100c0fbf0, 224 bytes, base-object constructor, inline, placed by class header (inline)
    // BufferPool<VertexBuffer>::BufferPool()
    void BufferPool<VertexBuffer>::BufferPool() {
        undefined* puVar1;
        allocator local_30[8];

        new (this) AutoSingleton<BufferPool<VertexBuffer>>();
        new (this) RenderDeviceCallback(true, 3);
        new ((this + 16)) RenderDeviceOnEndFrame(true);
        puVar1 = PTR_vtable_100ee86b8;
        *(undefined**)this = PTR_vtable_100ee86b8 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 32));
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 80));
    }

    // 0x100c0fd30, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BufferPool<VertexBuffer>::BufferPool(): jumps straight to the base-object constructor

    // 0x100c0fd40, 208 bytes, inline, placed by class header (inline)
    // BufferPool<VertexBuffer>::OnEndFrame()
    void BufferPool<VertexBuffer>::OnEndFrame() {
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
                lVar4 = eastl::minmax_element<ManagedBuffer<VertexBuffer> const*,
                                              BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                                  auto : 1_const &, auto : 2_const &) _1_>(uVar2, uVar3);
                uVar1 = *puVar7;
                uVar6 = this_00->size();
                BufferPoolStats::RecordEndOfFrameStats("VertexBuffer", uVar1, uVar6, *(uint*)(lVar4 + 80),
                                                       *(uint*)(extraout_RDX_00 + 80));
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

    // 0x100c0fe10, 576 bytes, inline, placed by class header (inline)
    // BufferPool<VertexBuffer>::GarbageCollect(bool)
    void BufferPool<VertexBuffer>::GarbageCollect(bool param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        long lVar5;
        BufferInterface* this_00;
        BufferInterface* pBVar6;
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
        BufferPool<VertexBuffer>* local_40;
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
                    this_00 = (BufferInterface*)this_01->HeapBeginPtr();
                    pBVar6 = (BufferInterface*)this_01->end();
                    for (; this_00 != pBVar6; this_00 = (BufferInterface*)&this_00[1].m_nativeBuffer) {
                        uVar11 = this_00[1].field_0 + 1;
                        this_00[1].field_0 = uVar11;
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
                        std::remove_if<ManagedBuffer<VertexBuffer>*,
                                       bool->GarbageCollect()::_lambda(ManagedBuffer<VertexBuffer>&) _1_>(uVar7, uVar8);
                    pMVar10 = (ManagedBuffer*)this_01->end();
                    this_01->erase(pMVar9, pMVar10);
                    uVar7 = this_01->HeapBeginPtr();
                    uVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<VertexBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<VertexBuffer> const&,
                                                                      ManagedBuffer<VertexBuffer> const&) _1_>(uVar7,
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
                                        eastl::vector<ManagedBuffer<VertexBuffer>, eastl::allocator>>,
                            eastl::less<unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<unsigned int const,
                                                         eastl::vector<ManagedBuffer<VertexBuffer>, eastl::allocator>>>,
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

    // 0x100c10060, 16 bytes, inline, placed by class header (inline)
    // BufferPool<VertexBuffer>::OnDeviceLost()
    void BufferPool<VertexBuffer>::OnDeviceLost() {
        (SUB81(this, 0))->GarbageCollect();
    }

    // 0x100c11220, 224 bytes, base-object constructor, inline, placed by class header (inline)
    // BufferPool<ShaderConstBuffer>::BufferPool()
    void BufferPool<ShaderConstBuffer>::BufferPool() {
        undefined* puVar1;
        allocator local_30[8];

        new (this) AutoSingleton<BufferPool<ShaderConstBuffer>>();
        new (this) RenderDeviceCallback(true, 3);
        new ((this + 16)) RenderDeviceOnEndFrame(true);
        puVar1 = PTR_vtable_100ee86c8;
        *(undefined**)this = PTR_vtable_100ee86c8 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 32));
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 80));
    }

    // 0x100c11360, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BufferPool<ShaderConstBuffer>::BufferPool(): jumps straight to the base-object constructor

    // 0x100c11370, 208 bytes, inline, placed by class header (inline)
    // BufferPool<ShaderConstBuffer>::OnEndFrame()
    void BufferPool<ShaderConstBuffer>::OnEndFrame() {
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
                lVar4 = eastl::minmax_element<ManagedBuffer<VertexBuffer> const*,
                                              BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                                  auto : 1_const &, auto : 2_const &) _1_>(uVar2, uVar3);
                uVar1 = *puVar7;
                uVar6 = this_00->size();
                BufferPoolStats::RecordEndOfFrameStats("ShaderConstBuffer", uVar1, uVar6, *(uint*)(lVar4 + 80),
                                                       *(uint*)(extraout_RDX_00 + 80));
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

    // 0x100c11440, 576 bytes, inline, placed by class header (inline)
    // BufferPool<ShaderConstBuffer>::GarbageCollect(bool)
    void BufferPool<ShaderConstBuffer>::GarbageCollect(bool param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        long lVar5;
        BufferInterface* this_00;
        BufferInterface* pBVar6;
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
        BufferPool<ShaderConstBuffer>* local_40;
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
                    this_00 = (BufferInterface*)this_01->HeapBeginPtr();
                    pBVar6 = (BufferInterface*)this_01->end();
                    for (; this_00 != pBVar6; this_00 = (BufferInterface*)&this_00[1].m_nativeBuffer) {
                        uVar11 = this_00[1].field_0 + 1;
                        this_00[1].field_0 = uVar11;
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
                    pMVar9 = std::remove_if<ManagedBuffer<ShaderConstBuffer>*,
                                            bool->GarbageCollect()::_lambda(ManagedBuffer<ShaderConstBuffer>&) _1_>(
                        uVar7, uVar8);
                    pMVar10 = (ManagedBuffer*)this_01->end();
                    this_01->erase(pMVar9, pMVar10);
                    uVar7 = this_01->HeapBeginPtr();
                    uVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<ShaderConstBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<ShaderConstBuffer> const&,
                                                                      ManagedBuffer<ShaderConstBuffer> const&) _1_>(
                        uVar7, uVar8);
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
                                        eastl::vector<ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>,
                            eastl::less<unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<
                                unsigned int const, eastl::vector<ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>>,
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

    // 0x100c11690, 16 bytes, inline, placed by class header (inline)
    // BufferPool<ShaderConstBuffer>::OnDeviceLost()
    void BufferPool<ShaderConstBuffer>::OnDeviceLost() {
        (SUB81(this, 0))->GarbageCollect();
    }

    // 0x100c126f0, 224 bytes, base-object constructor, inline, placed by class header (inline)
    // BufferPool<PixelUnpackBuffer>::BufferPool()
    void BufferPool<PixelUnpackBuffer>::BufferPool() {
        undefined* puVar1;
        allocator local_30[8];

        new (this) AutoSingleton<BufferPool<PixelUnpackBuffer>>();
        new (this) RenderDeviceCallback(true, 3);
        new ((this + 16)) RenderDeviceOnEndFrame(true);
        puVar1 = PTR_vtable_100ee86c0;
        *(undefined**)this = PTR_vtable_100ee86c0 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 32));
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 80));
    }

    // 0x100c12830, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BufferPool<PixelUnpackBuffer>::BufferPool(): jumps straight to the base-object constructor

    // 0x100c12840, 208 bytes, inline, placed by class header (inline)
    // BufferPool<PixelUnpackBuffer>::OnEndFrame()
    void BufferPool<PixelUnpackBuffer>::OnEndFrame() {
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
                lVar4 = eastl::minmax_element<ManagedBuffer<VertexBuffer> const*,
                                              BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                                  auto : 1_const &, auto : 2_const &) _1_>(uVar2, uVar3);
                uVar1 = *puVar7;
                uVar6 = this_00->size();
                BufferPoolStats::RecordEndOfFrameStats("PixelUnpackBuffer", uVar1, uVar6, *(uint*)(lVar4 + 80),
                                                       *(uint*)(extraout_RDX_00 + 80));
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

    // 0x100c12910, 576 bytes, inline, placed by class header (inline)
    // BufferPool<PixelUnpackBuffer>::GarbageCollect(bool)
    void BufferPool<PixelUnpackBuffer>::GarbageCollect(bool param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        long lVar5;
        BufferInterface* this_00;
        BufferInterface* pBVar6;
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
        BufferPool<PixelUnpackBuffer>* local_40;
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
                    this_00 = (BufferInterface*)this_01->HeapBeginPtr();
                    pBVar6 = (BufferInterface*)this_01->end();
                    for (; this_00 != pBVar6; this_00 = (BufferInterface*)&this_00[1].m_nativeBuffer) {
                        uVar11 = this_00[1].field_0 + 1;
                        this_00[1].field_0 = uVar11;
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
                    pMVar9 = std::remove_if<ManagedBuffer<PixelUnpackBuffer>*,
                                            bool->GarbageCollect()::_lambda(ManagedBuffer<PixelUnpackBuffer>&) _1_>(
                        uVar7, uVar8);
                    pMVar10 = (ManagedBuffer*)this_01->end();
                    this_01->erase(pMVar9, pMVar10);
                    uVar7 = this_01->HeapBeginPtr();
                    uVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<PixelUnpackBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<PixelUnpackBuffer> const&,
                                                                      ManagedBuffer<PixelUnpackBuffer> const&) _1_>(
                        uVar7, uVar8);
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
                                        eastl::vector<ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>,
                            eastl::less<unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<
                                unsigned int const, eastl::vector<ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>>,
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

    // 0x100c12b60, 16 bytes, inline, placed by class header (inline)
    // BufferPool<PixelUnpackBuffer>::OnDeviceLost()
    void BufferPool<PixelUnpackBuffer>::OnDeviceLost() {
        (SUB81(this, 0))->GarbageCollect();
    }

    // 0x100c31070, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::~BufferPool(): jumps straight to the base-object destructor

    // 0x100c31080, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::~BufferPool()
    void BufferPool<IndexBuffer>::~BufferPool() {
        ~BufferPool(this);
        operator_delete(this);
    }

    // 0x100c310c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<VertexBuffer>::~BufferPool(): jumps straight to the base-object destructor

    // 0x100c310d0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // BufferPool<VertexBuffer>::~BufferPool()
    void BufferPool<VertexBuffer>::~BufferPool() {
        ~BufferPool(this);
        operator_delete(this);
    }

    // 0x100c31110, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<ShaderConstBuffer>::~BufferPool(): jumps straight to the base-object destructor

    // 0x100c31120, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // BufferPool<ShaderConstBuffer>::~BufferPool()
    void BufferPool<ShaderConstBuffer>::~BufferPool() {
        ~BufferPool(this);
        operator_delete(this);
    }

    // 0x100c31160, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<PixelUnpackBuffer>::~BufferPool(): jumps straight to the base-object destructor

    // 0x100c31170, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // BufferPool<PixelUnpackBuffer>::~BufferPool()
    void BufferPool<PixelUnpackBuffer>::~BufferPool() {
        ~BufferPool(this);
        operator_delete(this);
    }

    // 0x100c37470, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<IndexBuffer>::~BufferPool()
    void BufferPool<IndexBuffer>::~BufferPool() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee86b0;
        *(undefined**)this = PTR_vtable_100ee86b0 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        ((this + 80))->~map();
        ((this + 32))->~map();
        ((this + 16))->~RenderDeviceOnEndFrame();
        ~RenderDeviceCallback();
        ~AutoSingleton();
    }

    // 0x100c374d0, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<VertexBuffer>::~BufferPool()
    void BufferPool<VertexBuffer>::~BufferPool() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee86b8;
        *(undefined**)this = PTR_vtable_100ee86b8 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        ((this + 80))->~map();
        ((this + 32))->~map();
        ((this + 16))->~RenderDeviceOnEndFrame();
        ~RenderDeviceCallback();
        ~AutoSingleton();
    }

    // 0x100c37530, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<ShaderConstBuffer>::~BufferPool()
    void BufferPool<ShaderConstBuffer>::~BufferPool() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee86c8;
        *(undefined**)this = PTR_vtable_100ee86c8 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        ((this + 80))->~map();
        ((this + 32))->~map();
        ((this + 16))->~RenderDeviceOnEndFrame();
        ~RenderDeviceCallback();
        ~AutoSingleton();
    }

    // 0x100c37590, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BufferPool<PixelUnpackBuffer>::~BufferPool()
    void BufferPool<PixelUnpackBuffer>::~BufferPool() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee86c0;
        *(undefined**)this = PTR_vtable_100ee86c0 + 16;
        *(undefined**)(this + 16) = puVar1 + 72;
        ((this + 80))->~map();
        ((this + 32))->~map();
        ((this + 16))->~RenderDeviceOnEndFrame();
        ~RenderDeviceCallback();
        ~AutoSingleton();
    }

} // namespace jag::render::internal

namespace jag::render {
    class BufferPoolStats {
    public:
        class PoolStats;
        void RecordBufferCreation(char const*, unsigned int, unsigned int, BufferCreationReason);
        void RecordBufferRecycle(char const*, unsigned int, unsigned int, unsigned int);
        void RecordBufferDestruction(char const*, unsigned int, unsigned int, unsigned int);
        void RecordEndOfFrameStats(char const*, unsigned int, unsigned int, unsigned int, unsigned int);
        void PrintPoolUsage();
        void ResetStats();
        static /* 56 bytes */ m_stats;
    };

    class BufferPoolStats::PoolStats {
    public:
        PoolStats();
    };

    class StencilOpDesc {
    public:
        operator==(StencilOpDesc const&) const;
        StencilOpDesc();
        void SetToDefault();

        // data members, from how the methods use this: 20 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100c319f0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GPUMemoryTrackingEntry::~GPUMemoryTrackingEntry()
    void GPUMemoryTrackingEntry::~GPUMemoryTrackingEntry() {
        Unregister(this);
    }

    // 0x100c32d00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // StencilOpDesc::StencilOpDesc(): jumps straight to the base-object constructor

    // 0x100c32d10, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // StencilOpDesc::StencilOpDesc()
    void StencilOpDesc::StencilOpDesc() {
        SetToDefault(this);
    }

    // 0x100c32d20, 16 bytes, inline, placed by debug map only (low confidence)
    // StencilOpDesc::SetToDefault()
    void StencilOpDesc::SetToDefault() {
        field_0 = 7680;
        field_4 = 7680;
        field_8 = 7680;
        field_12 = 519;
    }

    // 0x100c32db0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RenderTargetBlendDesc::RenderTargetBlendDesc(): jumps straight to the base-object constructor

    // 0x100c32dc0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RenderTargetBlendDesc::RenderTargetBlendDesc()
    void RenderTargetBlendDesc::RenderTargetBlendDesc() {
        SetToDefault(this);
    }

    // 0x100c32dd0, 48 bytes, inline, placed by debug map only (low confidence)
    // RenderTargetBlendDesc::SetToDefault()
    void RenderTargetBlendDesc::SetToDefault() {
        field_0 = 0;
        field_4 = 1;
        field_8 = 0;
        *(undefined**)&field_12 = &UNK_100008006;
        field_20 = 0;
        field_24 = 32774;
        field_28 = 15;
    }

    // 0x100c33000, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VertexArrayObject::VertexArrayObject()
    void VertexArrayObject::VertexArrayObject() {
        new (this) MakeSharedPool<VertexArrayObject, 2048>();
        m_nativeVAO = 0;
        m_lastUsageSeconds = 0.0;
    }

    // 0x100c34c40, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // RenderContextStateCache::~RenderContextStateCache()
    void RenderContextStateCache::~RenderContextStateCache() {
        (&field_696)->~fixed_vector();
        (&field_528)->~fixed_vector();
        (&field_360)->~fixed_vector();
        (&field_72)->~fixed_vector();
    }

    // 0x100c350a0, 80 bytes, inline, placed by debug map only (low confidence)
    // RenderTargetBlendDesc::operator==(RenderTargetBlendDesc const&) const
    /* RenderTargetBlendDesc::TEMPNAMEPLACEHOLDERVALUE(RenderTargetBlendDesc
   const&) const */

    undefined4 RenderTargetBlendDesc::operator==(RenderTargetBlendDesc* param_1) {
        undefined4 uVar1;

        if ((((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) &&
            (((*(int*)&field_12 == *(int*)&param_1->field_12 && (field_16 == param_1->field_16)) &&
              ((field_20 == param_1->field_20 && (field_24 == param_1->field_24)))))) {
            uVar1 = CONCAT31((int3)((uint)field_24 >> 8), field_28 == param_1->field_28);
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100c37030, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::~GPUMemoryAllocatorZone()
    void GPUMemoryAllocatorZone::~GPUMemoryAllocatorZone() {
        (&field_29696)->~fixed_map();
        (&field_584)->~fixed_map();
        /* WARNING: Subroutine does not return */
        ~fixed_string();
    }

    // 0x100c372a0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DeviceCallbacks::~DeviceCallbacks(): jumps straight to the base-object destructor

    // 0x100c372b0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DeviceCallbacks::~DeviceCallbacks()
    void DeviceCallbacks::~DeviceCallbacks() {
        (&field_56)->~vector();
        ~hash_map();
    }

    // 0x100c37b80, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResourceDataT<unsigned char const>::ResourceDataT(unsigned char const*, unsigned int, unsigned int, bool)
    /* ResourceDataT<unsigned char>::ResourceDataT(unsigned char*, unsigned int, unsigned
   int, bool) */

    void ResourceDataT<unsigned char>::ResourceDataT(uchar* param_1, uint param_2, uint param_3, bool param_4) {
        *(uchar**)this = param_1;
        *(uint*)(this + 8) = param_2;
        *(uint*)(this + 12) = param_3;
        this[16] = (ResourceDataT<unsigned char>)param_4;
    }

    // 0x100c37ba0, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ResourceDataT<unsigned char const>::~ResourceDataT()
    /* ResourceDataT<unsigned char>::~ResourceDataT() */

    void ResourceDataT<unsigned char>::~ResourceDataT() {
        if (this[16] != (ResourceDataT<unsigned char>)0) {
            safe_delete_array<float>((float**)this);
        }
    }

} // namespace jag::render

namespace jag::math {
    // 0x100c312a0, 32 bytes, inline, placed by debug map only (low confidence)
    // IsPowerOf2(unsigned int)
    undefined4 IsPowerOf2(uint param_1) {
        if (param_1 == 0) {
            return 0;
        }
        return CONCAT31((int3)(param_1 - 1 >> 8), (param_1 & param_1 - 1) == 0);
    }

    // 0x100c312c0, 32 bytes, inline, placed by debug map only (low confidence)
    // RoundDownToPowerOf2(unsigned int)
    int RoundDownToPowerOf2(uint param_1) {
        int iVar1;
        int iVar2;

        iVar1 = GetPowerOf2(param_1);
        iVar2 = -1;
        if (-1 < iVar1) {
            iVar2 = 1 << ((byte)iVar1 & 31);
        }
        return iVar2;
    }

    // 0x100c312e0, 32 bytes, inline, placed by debug map only (low confidence)
    // GetPowerOf2(unsigned int)
    int GetPowerOf2(uint param_1) {
        bool bVar1;
        int iVar2;
        ulong uVar3;

        iVar2 = -1;
        if (param_1 != 0) {
            uVar3 = (ulong)param_1;
            do {
                uVar3 = uVar3 >> 1;
                iVar2 = iVar2 + 1;
                bVar1 = 1 < param_1;
                param_1 = (uint)uVar3;
            } while (bVar1);
        }
        return iVar2;
    }

} // namespace jag::math

namespace jag::fixedfunction {
    // 0x100c37c00, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function(function<void
   (render::RenderContext&), 128ul, 16ul, (Methods)0>&&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, function* param_1) {
        *(long*)this = param_1->field_0;
        *(undefined8*)(this + 144) = *(undefined8*)&param_1->field_144;
        *(undefined8*)(this + 152) = *(undefined8*)&param_1->field_152;
        if (operator_cast_to_bool()) {
            function<void(BaseApp*), 128ul, 16ul, (Methods)0>::copy(
                (function<void(BaseApp*), 128ul, 16ul, (Methods)0>*)param_1, this + 16);
        }
    }

    // 0x100c37c50, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::copy(void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::copy(void*) const */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::copy(function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this,
                                                            void* param_1) {
        if (operator_cast_to_bool()) {
            (**(code**)(this + 144))(this + 16, param_1);
        }
    }

} // namespace jag::fixedfunction

namespace jag {
    // 0x100c33320, 64 bytes, inline, placed by debug map only (low confidence)
    // char const* DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator> >(eastl::fixed_string<char, 128, true, eastl::allocator>&, unsigned long long)
    char* DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>(fixed_string* param_1,
                                                                                   ulonglong param_2) {
        float fVar2;

        fVar2 = Bytes2Megabytes<unsigned long long>(param_2);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)fVar2, "%.3fMB");
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag

// 0x100c37350, 48 bytes, inline, placed by debug map only (low confidence)
// __isctype(int, unsigned long)
bool __isctype(int param_1, ulong param_2) {
    bool bVar1;

    bVar1 = false;
    if ((uint)param_1 < 256) {
        bVar1 = (*(uint*)(PTR___DefaultRuneLocale_100ee4030 + (long)param_1 * 4 + 60) & (uint)param_2) != 0;
    }
    return bVar1;
}
