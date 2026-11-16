// libs/hal/render/buffers/PooledBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    template <typename...> // 4 instantiations, e.g. <IndexBuffer>, <PixelUnpackBuffer>, <ShaderConstBuffer>
    class PooledBuffer {
    public:
        PooledBuffer();
        ~PooledBuffer();
        void Destroy();
        ulong Create(unsigned int, unsigned int, void const*);
        PooledBuffer(PooledBuffer<IndexBuffer>&&);
        PooledBuffer(PooledBuffer<VertexBuffer>&&);
        PooledBuffer<IndexBuffer>* operator=(PooledBuffer<IndexBuffer>&&);
        PooledBuffer<ShaderConstBuffer>* operator=(PooledBuffer<VertexBuffer>&&);
        static /* 4 bytes */ POW2_ROUND_UP_MAX_SIZE;  // = 16384
        static /* 4 bytes */ POW2_ROUND_UP_MAX_SIZE;  // = 16384
        static /* 4 bytes */ POW2_ROUND_UP_MAX_SIZE;  // = 16384
        static /* 20 bytes */ POW2_ROUND_UP_MAX_SIZE; // = { 16384, 16711935, 0, 0, 0 }
    };

    // 0x100d997a0, 4 bytes, __const
    PooledBuffer<IndexBuffer>::POW2_ROUND_UP_MAX_SIZE = 16384;

    // 0x100d997a4, 4 bytes, __const
    PooledBuffer<VertexBuffer>::POW2_ROUND_UP_MAX_SIZE = 16384;

    // 0x100d997a8, 4 bytes, __const
    PooledBuffer<ShaderConstBuffer>::POW2_ROUND_UP_MAX_SIZE = 16384;

    // 0x100d997ac, 20 bytes, __const
    PooledBuffer<PixelUnpackBuffer>::POW2_ROUND_UP_MAX_SIZE = {16384, 16711935, 0, 0, 0};

    // 0x100c0ccc0, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // PooledBuffer<IndexBuffer>::PooledBuffer()
    void PooledBuffer<IndexBuffer>::PooledBuffer() {
        new (this) IndexBuffer();
    }

    // 0x100c0ccf0, 16 bytes, complete-object constructor, inline, placed by class name
    // PooledBuffer<IndexBuffer>::PooledBuffer(): jumps straight to the base-object constructor

    // 0x100c0cd00, 48 bytes, base-object destructor, inline, placed by class name
    // PooledBuffer<IndexBuffer>::~PooledBuffer()
    void PooledBuffer<IndexBuffer>::~PooledBuffer() {
        PooledBuffer<IndexBuffer>::Destroy();
        ~IndexBuffer();
    }

    // 0x100c0cd30, 560 bytes, inline, placed by class name
    // PooledBuffer<IndexBuffer>::Destroy()
    void PooledBuffer<IndexBuffer>::Destroy() {
        char cVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        undefined4 uVar9;
        ulong uVar10;
        long lVar11;
        vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>* this_00;
        uint* puVar12;
        int* piVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        PooledBuffer<IndexBuffer>* this_01;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>,
            eastl::less<unsigned int>, eastl::allocator>* this_02;
        uint local_3c;
        uint local_38;
        uint local_34;

        cVar1 = this_thread::IsMainThread();
        if ((cVar1 == '\0') && (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, (char*)0);
        }
        cVar1 = IsCreated();
        if ((((cVar1 != '\0') && (cVar1 = IsMapped(), cVar1 == '\0')) && (cVar1 = IsRecyclable(), cVar1 != '\0')) &&
            ((cVar1 = IsDynamic(),
              cVar1 != '\0' && (this_01 = this, uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)))) {
            if (*(int*)this != 3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, (char*)0);
            }
            lVar11 = this_01->Instance();
            this_02 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>*)
                eastl::map<unsigned int, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>::operator[](this_02, &local_3c);
            lVar11 = this_02->Instance();
            uVar6 = GetEndPosition();
            uVar7 = eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>::size(this_00);
            local_38 = GetEndPosition();
            puVar12 =
                (uint*)eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                    (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                    &local_38);
            BufferPoolStats::RecordBufferDestruction("IndexBuffer", uVar6, uVar7, *puVar12);
            cVar1 = IsPermanent();
            if (cVar1 != '\0') {
                local_34 = GetEndPosition();
                piVar13 = (int*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                        &local_34);
                *piVar13 = *piVar13 + 1;
            }
            eastl::vector<internal::ManagedBuffer<IndexBuffer>,
                          eastl::allocator>::emplace_back<PooledBuffer<IndexBuffer>>(this_00, (PooledBuffer*)this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1 != '\0') && (iVar8 = GetEndPosition(), iVar8 != 0)) &&
            (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            uVar14 = logger::default_logger();
            uVar15 = GetNativeBuffer();
            uVar2 = IsCreated();
            uVar3 = IsMapped();
            uVar4 = IsRecyclable();
            uVar5 = IsDynamic();
            uVar9 = GetEndPosition();
            logger::Logger::Log(uVar14, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/PooledBuffer.cpp",
                                263,
                                "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: "
                                "%i, dynamic: %i, physicalSize: %u)",
                                uVar15, uVar2, uVar3, uVar4, uVar5, uVar9);
        }
        Destroy();
    }

    // 0x100c0cf90, 16 bytes, complete-object destructor, inline, placed by class name
    // PooledBuffer<IndexBuffer>::~PooledBuffer(): jumps straight to the base-object destructor

    // 0x100c0cfa0, 1184 bytes, inline, placed by class name
    // PooledBuffer<IndexBuffer>::Create(unsigned int, unsigned int, void const*)
    ulong PooledBuffer<IndexBuffer>::Create(uint param_1, uint param_2, void* param_3) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        uint* puVar5;
        long lVar6;
        long lVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        ManagedBuffer* pMVar10;
        ManagedBuffer* pMVar11;
        PooledBuffer* pPVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar13;
        PooledBuffer<IndexBuffer>* this_00;
        void* pvVar14;
        Layout* this_02;
        IndexBuffer* pIVar15;
        hashtable_iterator_base local_70[8];
        undefined8 local_68;
        long local_60;
        hashtable_iterator_base local_58[8];
        uint local_40[2];
        uint local_34;

        if ((param_2 & 16) != 0) {
            uVar3 = Create(param_1, param_2, param_3, 5123);
            uVar13 = (ulong)uVar3;
            goto LAB_100c0d42d;
        }
        this_00 = this;
        local_34 = param_1;
        if ((param_2 & 4) == 0) {
            if (param_1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(param_1);
            } else {
                local_34 = math::RoundUpToMultiple(param_1, 16384);
            }
            local_40[0] = 16;
            this_00 = (PooledBuffer<IndexBuffer>*)&local_34;
            puVar5 = std::max<unsigned int>((uint*)this_00, local_40);
            local_34 = *puVar5;
        }
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, (char*)0);
        }
        lVar6 = this_00->Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<
                eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>>>,
            true, true>::lower_bound(local_40);
        lVar7 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_40);
        this_02 = (Layout*)(lVar7 + 8);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=((eastl*)local_40, local_58, extraout_RDX);
        if (bVar2) {
            puVar5 = (uint*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            pMVar10 = (ManagedBuffer*)0;
            bVar2 = true;
            if (((float)*puVar5 <= (float)local_34 * 1.55) && ((param_2 & 4) == 0)) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                pMVar10 = eastl::find_if<internal::ManagedBuffer<IndexBuffer>*,
                                         unsigned int->Create(unsigned int, void_const*)::_lambda(
                                             internal::ManagedBuffer<IndexBuffer> const&) _1_>(uVar8, uVar9);
                pMVar11 = (ManagedBuffer*)this_02->end();
                bVar2 = pMVar10 == pMVar11;
            }
            pIVar15 = (IndexBuffer*)this;
            if (!bVar2) {
                local_60 = lVar6 + 32;
                if (pMVar10 == (ManagedBuffer*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, (char*)0);
                }
                PooledBuffer((PooledBuffer<IndexBuffer>*)(IndexBuffer*)this, (PooledBuffer*)pMVar10);
                if (pIVar15->field_0 != 3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, (char*)0);
                }
                lVar6 = ((IndexBuffer*)this)->Instance();
                cVar1 = pIVar15->IsPermanent();
                if (cVar1 != '\0') {
                    eastl::rbtree_iterator<
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
                            local_40);
                    eastl::rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>,
                                  eastl::less<unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                                  true>::find((uint*)local_58);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)local_58, local_70, extraout_RDX_01);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, (char*)0);
                    }
                    lVar7 = eastl::rbtree_iterator<
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
                            local_58);
                    *(int*)(lVar7 + 4) = *(int*)(lVar7 + 4) + -1;
                    pIVar15 = (IndexBuffer*)this;
                }
                uVar3 = pIVar15->GetEndPosition();
                uVar4 = this_02->size();
                puVar5 = (uint*)eastl::rbtree_iterator<
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
                puVar5 = (uint*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar6 + 80),
                        puVar5);
                BufferPoolStats::RecordBufferRecycle("IndexBuffer", uVar3, uVar4, *puVar5);
                cVar1 = this_02->empty();
                if (cVar1 != '\0') {
                    new (&local_68)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const,
                                    eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<
                            unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>>>,
                        true, true>::erase(local_58, local_60, local_68);
                }
                uVar4 = pIVar15->GetEndPosition();
                uVar3 = param_1;
                if (uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, (char*)0);
                }
                cVar1 = pIVar15->IsCreated();
                pvVar14 = param_3;
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, (char*)0);
                }
                cVar1 = pIVar15->IsMapped();
                if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, (char*)0);
                }
                pIVar15->field_36 = uVar3;
                uVar13 = CONCAT71((int7)((ulong)(lVar6 + 80) >> 8), 1);
                if (pvVar14 != (void*)0) {
                    pIVar15->Update(0, uVar3, pvVar14, 2);
                }
                goto LAB_100c0d42d;
            }
        } else {
            pMVar10 = (ManagedBuffer*)0;
        }
        if ((param_2 & 4) == 0) {
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar2 = eastl::operator==((eastl*)local_40, local_58, extraout_RDX_00);
            if (bVar2) {
                uVar8 = 1;
                goto LAB_100c0d35c;
            }
            pPVar12 = (PooledBuffer*)this_02->end();
            pvVar14 = param_3;
            if (pMVar10 == (ManagedBuffer*)pPVar12) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                eastl::minmax_element<internal::ManagedBuffer<IndexBuffer> const*,
                                      internal::BufferPool<IndexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1_const &, auto : 2_const &) _1_>(uVar8, uVar9);
                uVar8 = 2;
            } else {
                uVar8 = 3;
            }
            BufferPoolStats::RecordBufferCreation("IndexBuffer", local_34, 1, uVar8);
        } else {
            uVar8 = 0;
        LAB_100c0d35c:
            BufferPoolStats::RecordBufferCreation("IndexBuffer", local_34, 1, uVar8);
            pvVar14 = param_3;
        }
        uVar3 = param_1;
        pIVar15 = (IndexBuffer*)this;
        if ((pvVar14 == (void*)0) || (local_34 == param_1)) {
            uVar4 = Create(local_34, param_2 | 43, pvVar14, 5123);
        } else {
            uVar4 = Create(local_34, param_2 | 43, 0, 5123);
            pIVar15->Update(0, uVar3, pvVar14, 0);
        }
        uVar13 = (ulong)uVar4;
        pIVar15->field_36 = uVar3;
    LAB_100c0d42d:
        return uVar13 & 4294967295;
    }

    // 0x100c0d960, 16 bytes, complete-object constructor, inline, placed by class name
    // PooledBuffer<IndexBuffer>::PooledBuffer(PooledBuffer<IndexBuffer>&&): jumps straight to the base-object constructor

    // 0x100c0ee10, 16 bytes, base-object constructor, inline, placed by class name
    // PooledBuffer<VertexBuffer>::PooledBuffer()
    void PooledBuffer<VertexBuffer>::PooledBuffer() {
        new (this) VertexBuffer();
    }

    // 0x100c0ee30, 16 bytes, complete-object constructor, inline, placed by class name
    // PooledBuffer<VertexBuffer>::PooledBuffer(): jumps straight to the base-object constructor

    // 0x100c0ee40, 48 bytes, base-object destructor, inline, placed by class name
    // PooledBuffer<VertexBuffer>::~PooledBuffer()
    void PooledBuffer<VertexBuffer>::~PooledBuffer() {
        PooledBuffer<VertexBuffer>::Destroy();
        ~VertexBuffer();
    }

    // 0x100c0ee70, 560 bytes, inline, placed by class name
    // PooledBuffer<VertexBuffer>::Destroy()
    void PooledBuffer<VertexBuffer>::Destroy() {
        char cVar1;
        bool bVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        undefined4 uVar9;
        ulong uVar10;
        long lVar11;
        vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>* this_00;
        uint* puVar12;
        int* piVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        BucketAllocatorSTL* in_RSI;
        PooledBuffer<VertexBuffer>* this_01;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>,
            eastl::less<unsigned int>, eastl::allocator>* this_02;
        uint local_3c;
        uint local_38;
        uint local_34;

        cVar1 = this_thread::IsMainThread();
        if ((cVar1 == '\0') && (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, (char*)0);
        }
        cVar1 = IsCreated();
        if ((((cVar1 != '\0') && (cVar1 = IsMapped(), cVar1 == '\0')) && (bVar2 = IsValidValue(in_RSI), bVar2)) &&
            ((cVar1 = IsDynamic(),
              cVar1 != '\0' && (this_01 = this, uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)))) {
            if (*(int*)this != 3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, (char*)0);
            }
            lVar11 = this_01->Instance();
            this_02 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>*)
                eastl::map<unsigned int, eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>::operator[](this_02, &local_3c);
            lVar11 = this_02->Instance();
            uVar6 = GetEndPosition();
            uVar7 = eastl::vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>::size(this_00);
            local_38 = GetEndPosition();
            puVar12 =
                (uint*)eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                    (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                    &local_38);
            BufferPoolStats::RecordBufferDestruction("VertexBuffer", uVar6, uVar7, *puVar12);
            cVar1 = IsPermanent();
            if (cVar1 != '\0') {
                local_34 = GetEndPosition();
                piVar13 = (int*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                        &local_34);
                *piVar13 = *piVar13 + 1;
            }
            eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>::emplace_back<
                PooledBuffer<VertexBuffer>>((vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>*)this_00,
                                            (PooledBuffer*)this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1 != '\0') && (iVar8 = GetEndPosition(), iVar8 != 0)) &&
            (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            uVar14 = logger::default_logger();
            uVar15 = GetNativeBuffer();
            uVar3 = IsCreated();
            uVar4 = IsMapped();
            bVar2 = IsValidValue(in_RSI);
            uVar5 = IsDynamic();
            uVar9 = GetEndPosition();
            logger::Logger::Log(uVar14, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/PooledBuffer.cpp",
                                263,
                                "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: "
                                "%i, dynamic: %i, physicalSize: %u)",
                                uVar15, uVar3, uVar4, bVar2, uVar5, uVar9);
        }
        Destroy();
    }

    // 0x100c0f0d0, 16 bytes, complete-object destructor, inline, placed by class name
    // PooledBuffer<VertexBuffer>::~PooledBuffer(): jumps straight to the base-object destructor

    // 0x100c0f0e0, 1168 bytes, inline, placed by class name
    // PooledBuffer<VertexBuffer>::Create(unsigned int, unsigned int, void const*)
    ulong PooledBuffer<VertexBuffer>::Create(uint param_1, uint param_2, void* param_3) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        uint* puVar5;
        long lVar6;
        long lVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        ManagedBuffer* pMVar10;
        ManagedBuffer* pMVar11;
        PooledBuffer* pPVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar13;
        PooledBuffer<VertexBuffer>* this_00;
        void* pvVar14;
        Layout* this_02;
        BufferInterface* pBVar15;
        hashtable_iterator_base local_70[8];
        undefined8 local_68;
        long local_60;
        hashtable_iterator_base local_58[8];
        uint local_40[2];
        uint local_34;

        if ((param_2 & 16) != 0) {
            uVar3 = Create(param_1, param_2, param_3);
            uVar13 = (ulong)uVar3;
            goto LAB_100c0f55b;
        }
        this_00 = this;
        local_34 = param_1;
        if ((param_2 & 4) == 0) {
            if (param_1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(param_1);
            } else {
                local_34 = math::RoundUpToMultiple(param_1, 16384);
            }
            local_40[0] = 16;
            this_00 = (PooledBuffer<VertexBuffer>*)&local_34;
            puVar5 = std::max<unsigned int>((uint*)this_00, local_40);
            local_34 = *puVar5;
        }
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, (char*)0);
        }
        lVar6 = this_00->Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const,
                                         eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>>>,
            true, true>::lower_bound(local_40);
        lVar7 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_40);
        this_02 = (Layout*)(lVar7 + 8);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=((eastl*)local_40, local_58, extraout_RDX);
        if (bVar2) {
            puVar5 = (uint*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            pMVar10 = (ManagedBuffer*)0;
            bVar2 = true;
            if (((float)*puVar5 <= (float)local_34 * 1.55) && ((param_2 & 4) == 0)) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                pMVar10 = eastl::find_if<internal::ManagedBuffer<VertexBuffer>*,
                                         unsigned int->Create(unsigned int, void_const*)::_lambda(
                                             internal::ManagedBuffer<VertexBuffer> const&) _1_>(uVar8, uVar9);
                pMVar11 = (ManagedBuffer*)this_02->end();
                bVar2 = pMVar10 == pMVar11;
            }
            pBVar15 = (BufferInterface*)this;
            if (!bVar2) {
                local_60 = lVar6 + 32;
                if (pMVar10 == (ManagedBuffer*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, (char*)0);
                }
                new ((BufferInterface*)this) PooledBuffer<ShaderConstBuffer>(pMVar10);
                if (pBVar15->field_0 != 3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, (char*)0);
                }
                lVar6 = ((BufferInterface*)this)->Instance();
                cVar1 = pBVar15->IsPermanent();
                if (cVar1 != '\0') {
                    eastl::rbtree_iterator<
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
                            local_40);
                    eastl::rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>,
                                  eastl::less<unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                                  true>::find((uint*)local_58);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)local_58, local_70, extraout_RDX_01);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, (char*)0);
                    }
                    lVar7 = eastl::rbtree_iterator<
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
                            local_58);
                    *(int*)(lVar7 + 4) = *(int*)(lVar7 + 4) + -1;
                    pBVar15 = (BufferInterface*)this;
                }
                uVar3 = pBVar15->GetEndPosition();
                uVar4 = this_02->size();
                puVar5 = (uint*)eastl::rbtree_iterator<
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
                puVar5 = (uint*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar6 + 80),
                        puVar5);
                BufferPoolStats::RecordBufferRecycle("VertexBuffer", uVar3, uVar4, *puVar5);
                cVar1 = this_02->empty();
                if (cVar1 != '\0') {
                    new (&local_68)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                    eastl::rbtree<unsigned int,
                                  eastl::pair<unsigned int const,
                                              eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>>,
                                  eastl::less<unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<
                                      unsigned int const,
                                      eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>>>,
                                  true, true>::erase(local_58, local_60, local_68);
                }
                uVar4 = pBVar15->GetEndPosition();
                uVar3 = param_1;
                if (uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, (char*)0);
                }
                cVar1 = pBVar15->IsCreated();
                pvVar14 = param_3;
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, (char*)0);
                }
                cVar1 = pBVar15->IsMapped();
                if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, (char*)0);
                }
                pBVar15->m_sizeInBytes = uVar3;
                uVar13 = CONCAT71((int7)((ulong)(lVar6 + 80) >> 8), 1);
                if (pvVar14 != (void*)0) {
                    pBVar15->Update(0, uVar3, pvVar14, 2);
                }
                goto LAB_100c0f55b;
            }
        } else {
            pMVar10 = (ManagedBuffer*)0;
        }
        if ((param_2 & 4) == 0) {
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar2 = eastl::operator==((eastl*)local_40, local_58, extraout_RDX_00);
            if (bVar2)
                goto LAB_100c0f496;
            pPVar12 = (PooledBuffer*)this_02->end();
            pvVar14 = param_3;
            if (pMVar10 == (ManagedBuffer*)pPVar12) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                eastl::minmax_element<internal::ManagedBuffer<VertexBuffer> const*,
                                      internal::BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1_const &, auto : 2_const &) _1_>(uVar8, uVar9);
            }
            BufferPoolStats::RecordBufferCreation("VertexBuffer", local_34, 1);
        } else {
        LAB_100c0f496:
            BufferPoolStats::RecordBufferCreation("VertexBuffer", local_34, 1);
            pvVar14 = param_3;
        }
        uVar3 = param_1;
        pBVar15 = (BufferInterface*)this;
        if ((pvVar14 == (void*)0) || (local_34 == param_1)) {
            uVar4 = ((BufferInterface*)this)->Create(local_34, param_2 | 43, pvVar14);
        } else {
            uVar4 = ((BufferInterface*)this)->Create(local_34, param_2 | 43, 0);
            pBVar15->Update(0, uVar3, pvVar14, 0);
        }
        uVar13 = (ulong)uVar4;
        pBVar15->m_sizeInBytes = uVar3;
    LAB_100c0f55b:
        return uVar13 & 4294967295;
    }

    // 0x100c0f8c0, 16 bytes, complete-object constructor, inline, placed by class name
    // PooledBuffer<VertexBuffer>::PooledBuffer(PooledBuffer<VertexBuffer>&&): jumps straight to the base-object constructor

    // 0x100c10450, 16 bytes, base-object constructor, inline, placed by class name
    // PooledBuffer<ShaderConstBuffer>::PooledBuffer()
    void PooledBuffer<ShaderConstBuffer>::PooledBuffer() {
        new (this) ShaderConstBuffer();
    }

    // 0x100c10470, 16 bytes, complete-object constructor, inline, placed by class name
    // PooledBuffer<ShaderConstBuffer>::PooledBuffer(): jumps straight to the base-object constructor

    // 0x100c10480, 48 bytes, base-object destructor, inline, placed by class name
    // PooledBuffer<ShaderConstBuffer>::~PooledBuffer()
    void PooledBuffer<ShaderConstBuffer>::~PooledBuffer() {
        PooledBuffer<ShaderConstBuffer>::Destroy();
        ~ShaderConstBuffer();
    }

    // 0x100c104b0, 560 bytes, inline, placed by class name
    // PooledBuffer<ShaderConstBuffer>::Destroy()
    void PooledBuffer<ShaderConstBuffer>::Destroy() {
        char cVar1;
        bool bVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        undefined4 uVar9;
        ulong uVar10;
        long lVar11;
        vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>* this_00;
        uint* puVar12;
        int* piVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        BucketAllocatorSTL* in_RSI;
        PooledBuffer<ShaderConstBuffer>* this_01;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>,
            eastl::less<unsigned int>, eastl::allocator>* this_02;
        uint local_3c;
        uint local_38;
        uint local_34;

        cVar1 = this_thread::IsMainThread();
        if ((cVar1 == '\0') && (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, (char*)0);
        }
        cVar1 = IsCreated();
        if ((((cVar1 != '\0') && (cVar1 = IsMapped(), cVar1 == '\0')) && (bVar2 = IsValidValue(in_RSI), bVar2)) &&
            ((cVar1 = IsDynamic(),
              cVar1 != '\0' && (this_01 = this, uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)))) {
            if (*(int*)this != 3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, (char*)0);
            }
            lVar11 = this_01->Instance();
            this_02 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>*)
                eastl::map<unsigned int, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>::operator[](this_02, &local_3c);
            lVar11 = this_02->Instance();
            uVar6 = GetEndPosition();
            uVar7 = eastl::vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>::size(this_00);
            local_38 = GetEndPosition();
            puVar12 =
                (uint*)eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                    (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                    &local_38);
            BufferPoolStats::RecordBufferDestruction("ShaderConstBuffer", uVar6, uVar7, *puVar12);
            cVar1 = IsPermanent();
            if (cVar1 != '\0') {
                local_34 = GetEndPosition();
                piVar13 = (int*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                        &local_34);
                *piVar13 = *piVar13 + 1;
            }
            eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>::emplace_back<
                PooledBuffer<ShaderConstBuffer>>(
                (vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>*)this_00, (PooledBuffer*)this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1 != '\0') && (iVar8 = GetEndPosition(), iVar8 != 0)) &&
            (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            uVar14 = logger::default_logger();
            uVar15 = GetNativeBuffer();
            uVar3 = IsCreated();
            uVar4 = IsMapped();
            bVar2 = IsValidValue(in_RSI);
            uVar5 = IsDynamic();
            uVar9 = GetEndPosition();
            logger::Logger::Log(uVar14, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/PooledBuffer.cpp",
                                263,
                                "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: "
                                "%i, dynamic: %i, physicalSize: %u)",
                                uVar15, uVar3, uVar4, bVar2, uVar5, uVar9);
        }
        Destroy();
    }

    // 0x100c10710, 16 bytes, complete-object destructor, inline, placed by class name
    // PooledBuffer<ShaderConstBuffer>::~PooledBuffer(): jumps straight to the base-object destructor

    // 0x100c10720, 1168 bytes, inline, placed by class name
    // PooledBuffer<ShaderConstBuffer>::Create(unsigned int, unsigned int, void const*)
    ulong PooledBuffer<ShaderConstBuffer>::Create(uint param_1, uint param_2, void* param_3) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        uint* puVar5;
        long lVar6;
        long lVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        ManagedBuffer* pMVar10;
        ManagedBuffer* pMVar11;
        PooledBuffer* pPVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar13;
        PooledBuffer<ShaderConstBuffer>* this_00;
        void* pvVar14;
        Layout* this_02;
        BufferInterface* pBVar15;
        hashtable_iterator_base local_70[8];
        undefined8 local_68;
        long local_60;
        hashtable_iterator_base local_58[8];
        uint local_40[2];
        uint local_34;

        if ((param_2 & 16) != 0) {
            uVar3 = Create(param_1, param_2, param_3);
            uVar13 = (ulong)uVar3;
            goto LAB_100c10b9b;
        }
        this_00 = this;
        local_34 = param_1;
        if ((param_2 & 4) == 0) {
            if (param_1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(param_1);
            } else {
                local_34 = math::RoundUpToMultiple(param_1, 16384);
            }
            local_40[0] = 16;
            this_00 = (PooledBuffer<ShaderConstBuffer>*)&local_34;
            puVar5 = std::max<unsigned int>((uint*)this_00, local_40);
            local_34 = *puVar5;
        }
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, (char*)0);
        }
        lVar6 = this_00->Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const,
                        eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const,
                                         eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>>,
            true, true>::lower_bound(local_40);
        lVar7 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_40);
        this_02 = (Layout*)(lVar7 + 8);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=((eastl*)local_40, local_58, extraout_RDX);
        if (bVar2) {
            puVar5 = (uint*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            pMVar10 = (ManagedBuffer*)0;
            bVar2 = true;
            if (((float)*puVar5 <= (float)local_34 * 1.55) && ((param_2 & 4) == 0)) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                pMVar10 = eastl::find_if<internal::ManagedBuffer<ShaderConstBuffer>*,
                                         unsigned int->Create(unsigned int, void_const*)::_lambda(
                                             internal::ManagedBuffer<ShaderConstBuffer> const&) _1_>(uVar8, uVar9);
                pMVar11 = (ManagedBuffer*)this_02->end();
                bVar2 = pMVar10 == pMVar11;
            }
            pBVar15 = (BufferInterface*)this;
            if (!bVar2) {
                local_60 = lVar6 + 32;
                if (pMVar10 == (ManagedBuffer*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, (char*)0);
                }
                PooledBuffer((PooledBuffer<ShaderConstBuffer>*)(BufferInterface*)this, (PooledBuffer*)pMVar10);
                if (pBVar15->field_0 != 3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, (char*)0);
                }
                lVar6 = ((BufferInterface*)this)->Instance();
                cVar1 = pBVar15->IsPermanent();
                if (cVar1 != '\0') {
                    eastl::rbtree_iterator<
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
                            local_40);
                    eastl::rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>,
                                  eastl::less<unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                                  true>::find((uint*)local_58);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)local_58, local_70, extraout_RDX_01);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, (char*)0);
                    }
                    lVar7 = eastl::rbtree_iterator<
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
                            local_58);
                    *(int*)(lVar7 + 4) = *(int*)(lVar7 + 4) + -1;
                    pBVar15 = (BufferInterface*)this;
                }
                uVar3 = pBVar15->GetEndPosition();
                uVar4 = this_02->size();
                puVar5 = (uint*)eastl::rbtree_iterator<
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
                puVar5 = (uint*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar6 + 80),
                        puVar5);
                BufferPoolStats::RecordBufferRecycle("ShaderConstBuffer", uVar3, uVar4, *puVar5);
                cVar1 = this_02->empty();
                if (cVar1 != '\0') {
                    new (&local_68)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const,
                                    eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<
                            eastl::pair<unsigned int const,
                                        eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>>,
                        true, true>::erase(local_58, local_60, local_68);
                }
                uVar4 = pBVar15->GetEndPosition();
                uVar3 = param_1;
                if (uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, (char*)0);
                }
                cVar1 = pBVar15->IsCreated();
                pvVar14 = param_3;
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, (char*)0);
                }
                cVar1 = pBVar15->IsMapped();
                if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, (char*)0);
                }
                pBVar15->m_sizeInBytes = uVar3;
                uVar13 = CONCAT71((int7)((ulong)(lVar6 + 80) >> 8), 1);
                if (pvVar14 != (void*)0) {
                    pBVar15->Update(0, uVar3, pvVar14, 2);
                }
                goto LAB_100c10b9b;
            }
        } else {
            pMVar10 = (ManagedBuffer*)0;
        }
        if ((param_2 & 4) == 0) {
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar2 = eastl::operator==((eastl*)local_40, local_58, extraout_RDX_00);
            if (bVar2)
                goto LAB_100c10ad6;
            pPVar12 = (PooledBuffer*)this_02->end();
            pvVar14 = param_3;
            if (pMVar10 == (ManagedBuffer*)pPVar12) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                eastl::minmax_element<internal::ManagedBuffer<VertexBuffer> const*,
                                      internal::BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1_const &, auto : 2_const &) _1_>(uVar8, uVar9);
            }
            BufferPoolStats::RecordBufferCreation("ShaderConstBuffer", local_34, 1);
        } else {
        LAB_100c10ad6:
            BufferPoolStats::RecordBufferCreation("ShaderConstBuffer", local_34, 1);
            pvVar14 = param_3;
        }
        uVar3 = param_1;
        pBVar15 = (BufferInterface*)this;
        if ((pvVar14 == (void*)0) || (local_34 == param_1)) {
            uVar4 = ((BufferInterface*)this)->Create(local_34, param_2 | 43, pvVar14);
        } else {
            uVar4 = ((BufferInterface*)this)->Create(local_34, param_2 | 43, 0);
            pBVar15->Update(0, uVar3, pvVar14, 0);
        }
        uVar13 = (ulong)uVar4;
        pBVar15->m_sizeInBytes = uVar3;
    LAB_100c10b9b:
        return uVar13 & 4294967295;
    }

    // 0x100c11a80, 16 bytes, base-object constructor, inline, placed by class name
    // PooledBuffer<PixelUnpackBuffer>::PooledBuffer()
    void PooledBuffer<PixelUnpackBuffer>::PooledBuffer() {
        new (this) PixelUnpackBuffer();
    }

    // 0x100c11aa0, 16 bytes, complete-object constructor, inline, placed by class name
    // PooledBuffer<PixelUnpackBuffer>::PooledBuffer(): jumps straight to the base-object constructor

    // 0x100c11ab0, 48 bytes, base-object destructor, inline, placed by class name
    // PooledBuffer<PixelUnpackBuffer>::~PooledBuffer()
    void PooledBuffer<PixelUnpackBuffer>::~PooledBuffer() {
        PooledBuffer<PixelUnpackBuffer>::Destroy();
        ~PixelUnpackBuffer();
    }

    // 0x100c11ae0, 560 bytes, inline, placed by class name
    // PooledBuffer<PixelUnpackBuffer>::Destroy()
    void PooledBuffer<PixelUnpackBuffer>::Destroy() {
        char cVar1;
        bool bVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        undefined4 uVar9;
        ulong uVar10;
        long lVar11;
        vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>* this_00;
        uint* puVar12;
        int* piVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        BucketAllocatorSTL* in_RSI;
        PooledBuffer<PixelUnpackBuffer>* this_01;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>,
            eastl::less<unsigned int>, eastl::allocator>* this_02;
        uint local_3c;
        uint local_38;
        uint local_34;

        cVar1 = this_thread::IsMainThread();
        if ((cVar1 == '\0') && (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, (char*)0);
        }
        cVar1 = IsCreated();
        if ((((cVar1 != '\0') && (cVar1 = IsMapped(), cVar1 == '\0')) && (bVar2 = IsValidValue(in_RSI), bVar2)) &&
            ((cVar1 = IsDynamic(),
              cVar1 != '\0' && (this_01 = this, uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)))) {
            if (*(int*)this != 3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, (char*)0);
            }
            lVar11 = this_01->Instance();
            this_02 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>*)
                eastl::map<unsigned int, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>,
                           eastl::less<unsigned int>, eastl::allocator>::operator[](this_02, &local_3c);
            lVar11 = this_02->Instance();
            uVar6 = GetEndPosition();
            uVar7 = eastl::vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>::size(this_00);
            local_38 = GetEndPosition();
            puVar12 =
                (uint*)eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                    (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                    &local_38);
            BufferPoolStats::RecordBufferDestruction("PixelUnpackBuffer", uVar6, uVar7, *puVar12);
            cVar1 = IsPermanent();
            if (cVar1 != '\0') {
                local_34 = GetEndPosition();
                piVar13 = (int*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar11 + 80),
                        &local_34);
                *piVar13 = *piVar13 + 1;
            }
            eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>::emplace_back<
                PooledBuffer<PixelUnpackBuffer>>(
                (vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>*)this_00, (PooledBuffer*)this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1 != '\0') && (iVar8 = GetEndPosition(), iVar8 != 0)) &&
            (uVar10 = GetNormalEmissiveMapID(), (uVar10 & 16) == 0)) {
            uVar14 = logger::default_logger();
            uVar15 = GetNativeBuffer();
            uVar3 = IsCreated();
            uVar4 = IsMapped();
            bVar2 = IsValidValue(in_RSI);
            uVar5 = IsDynamic();
            uVar9 = GetEndPosition();
            logger::Logger::Log(uVar14, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/PooledBuffer.cpp",
                                263,
                                "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: "
                                "%i, dynamic: %i, physicalSize: %u)",
                                uVar15, uVar3, uVar4, bVar2, uVar5, uVar9);
        }
        Destroy();
    }

    // 0x100c11d40, 16 bytes, complete-object destructor, inline, placed by class name
    // PooledBuffer<PixelUnpackBuffer>::~PooledBuffer(): jumps straight to the base-object destructor

    // 0x100c11d50, 1168 bytes, inline, placed by class name
    // PooledBuffer<PixelUnpackBuffer>::Create(unsigned int, unsigned int, void const*)
    ulong PooledBuffer<PixelUnpackBuffer>::Create(uint param_1, uint param_2, void* param_3) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        uint* puVar5;
        long lVar6;
        long lVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        ManagedBuffer* pMVar10;
        ManagedBuffer* pMVar11;
        PooledBuffer* pPVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar13;
        PooledBuffer<PixelUnpackBuffer>* this_00;
        void* pvVar14;
        Layout* this_02;
        BufferInterface* pBVar15;
        hashtable_iterator_base local_70[8];
        undefined8 local_68;
        long local_60;
        hashtable_iterator_base local_58[8];
        uint local_40[2];
        uint local_34;

        if ((param_2 & 16) != 0) {
            uVar3 = Create(param_1, param_2, param_3);
            uVar13 = (ulong)uVar3;
            goto LAB_100c121cb;
        }
        this_00 = this;
        local_34 = param_1;
        if ((param_2 & 4) == 0) {
            if (param_1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(param_1);
            } else {
                local_34 = math::RoundUpToMultiple(param_1, 16384);
            }
            local_40[0] = 16;
            this_00 = (PooledBuffer<PixelUnpackBuffer>*)&local_34;
            puVar5 = std::max<unsigned int>((uint*)this_00, local_40);
            local_34 = *puVar5;
        }
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, (char*)0);
        }
        lVar6 = this_00->Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const,
                        eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const,
                                         eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>>,
            true, true>::lower_bound(local_40);
        lVar7 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_40);
        this_02 = (Layout*)(lVar7 + 8);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=((eastl*)local_40, local_58, extraout_RDX);
        if (bVar2) {
            puVar5 = (uint*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            pMVar10 = (ManagedBuffer*)0;
            bVar2 = true;
            if (((float)*puVar5 <= (float)local_34 * 1.55) && ((param_2 & 4) == 0)) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                pMVar10 = eastl::find_if<internal::ManagedBuffer<PixelUnpackBuffer>*,
                                         unsigned int->Create(unsigned int, void_const*)::_lambda(
                                             internal::ManagedBuffer<PixelUnpackBuffer> const&) _1_>(uVar8, uVar9);
                pMVar11 = (ManagedBuffer*)this_02->end();
                bVar2 = pMVar10 == pMVar11;
            }
            pBVar15 = (BufferInterface*)this;
            if (!bVar2) {
                local_60 = lVar6 + 32;
                if (pMVar10 == (ManagedBuffer*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, (char*)0);
                }
                new ((BufferInterface*)this) PooledBuffer<ShaderConstBuffer>(pMVar10);
                if (pBVar15->field_0 != 3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, (char*)0);
                }
                lVar6 = ((BufferInterface*)this)->Instance();
                cVar1 = pBVar15->IsPermanent();
                if (cVar1 != '\0') {
                    eastl::rbtree_iterator<
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
                            local_40);
                    eastl::rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>,
                                  eastl::less<unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                                  true>::find((uint*)local_58);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)local_58, local_70, extraout_RDX_01);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, (char*)0);
                    }
                    lVar7 = eastl::rbtree_iterator<
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
                            local_58);
                    *(int*)(lVar7 + 4) = *(int*)(lVar7 + 4) + -1;
                    pBVar15 = (BufferInterface*)this;
                }
                uVar3 = pBVar15->GetEndPosition();
                uVar4 = this_02->size();
                puVar5 = (uint*)eastl::rbtree_iterator<
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
                puVar5 = (uint*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)(lVar6 + 80),
                        puVar5);
                BufferPoolStats::RecordBufferRecycle("PixelUnpackBuffer", uVar3, uVar4, *puVar5);
                cVar1 = this_02->empty();
                if (cVar1 != '\0') {
                    new (&local_68)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const,
                                    eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<
                            eastl::pair<unsigned int const,
                                        eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>>,
                        true, true>::erase(local_58, local_60, local_68);
                }
                uVar4 = pBVar15->GetEndPosition();
                uVar3 = param_1;
                if (uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, (char*)0);
                }
                cVar1 = pBVar15->IsCreated();
                pvVar14 = param_3;
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, (char*)0);
                }
                cVar1 = pBVar15->IsMapped();
                if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, (char*)0);
                }
                pBVar15->m_sizeInBytes = uVar3;
                uVar13 = CONCAT71((int7)((ulong)(lVar6 + 80) >> 8), 1);
                if (pvVar14 != (void*)0) {
                    pBVar15->Update(0, uVar3, pvVar14, 2);
                }
                goto LAB_100c121cb;
            }
        } else {
            pMVar10 = (ManagedBuffer*)0;
        }
        if ((param_2 & 4) == 0) {
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar2 = eastl::operator==((eastl*)local_40, local_58, extraout_RDX_00);
            if (bVar2)
                goto LAB_100c12106;
            pPVar12 = (PooledBuffer*)this_02->end();
            pvVar14 = param_3;
            if (pMVar10 == (ManagedBuffer*)pPVar12) {
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                uVar9 = this_02->end();
                eastl::minmax_element<internal::ManagedBuffer<VertexBuffer> const*,
                                      internal::BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1_const &, auto : 2_const &) _1_>(uVar8, uVar9);
            }
            BufferPoolStats::RecordBufferCreation("PixelUnpackBuffer", local_34, 1);
        } else {
        LAB_100c12106:
            BufferPoolStats::RecordBufferCreation("PixelUnpackBuffer", local_34, 1);
            pvVar14 = param_3;
        }
        uVar3 = param_1;
        pBVar15 = (BufferInterface*)this;
        if ((pvVar14 == (void*)0) || (local_34 == param_1)) {
            uVar4 = ((BufferInterface*)this)->Create(local_34, param_2 | 43, pvVar14);
        } else {
            uVar4 = ((BufferInterface*)this)->Create(local_34, param_2 | 43, 0);
            pBVar15->Update(0, uVar3, pvVar14, 0);
        }
        uVar13 = (ulong)uVar4;
        pBVar15->m_sizeInBytes = uVar3;
    LAB_100c121cb:
        return uVar13 & 4294967295;
    }

    // 0x100c31330, 16 bytes, base-object constructor, inline, placed by class name
    // PooledBuffer<IndexBuffer>::PooledBuffer(PooledBuffer<IndexBuffer>&&)
    void PooledBuffer<IndexBuffer>::PooledBuffer(PooledBuffer* param_1) {
        new (this) IndexBuffer(param_1);
    }

    // 0x100c397a0, 16 bytes, inline, placed by class name
    // PooledBuffer<IndexBuffer>::Create(unsigned int, unsigned int, void const*)::{lambda(internal::ManagedBuffer<IndexBuffer> const&)#1}::operator()(internal::ManagedBuffer<IndexBuffer> const&) const
    /* PooledBuffer<IndexBuffer>::Create(unsigned int, unsigned int, void
   const*)::{lambda(internal::ManagedBuffer<IndexBuffer>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(internal::ManagedBuffer<IndexBuffer>
   const&) const */

    void PooledBuffer<IndexBuffer>::Create(unsigned int, unsigned int, void_const*)::{
        lambda(internal::ManagedBuffer<IndexBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<IndexBuffer> const___1_* this, ManagedBuffer * param_1)

    {
        internal::ManagedBuffer<IndexBuffer>::IsReadyToReuse();
    }

    // 0x100c397b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // auto PooledBuffer<IndexBuffer>::Create(unsigned int, unsigned int, void const*)::{lambda(auto:1 const&, auto:2 const&)#1}::operator()<internal::ManagedBuffer<IndexBuffer>, internal::ManagedBuffer<IndexBuffer> >(internal::ManagedBuffer<IndexBuffer> const&, internal::ManagedBuffer<IndexBuffer> const&) const
    /* auto internal::BufferPool<IndexBuffer>::OnEndFrame()::{lambda(auto:1
   const&, auto:2
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(internal::ManagedBuffer<IndexBuffer>
   const&, internal::ManagedBuffer<IndexBuffer> const&) const */

    undefined4 internal::BufferPool<IndexBuffer>::OnEndFrame()::{
        lambda(auto : 1_const &, auto : 2_const &) #1
    }
    ::operator()(_lambda_auto_1_const__auto_2_const___1_* this, ManagedBuffer * param_1, ManagedBuffer * param_2)

    {
        return CONCAT31((int3)(*(uint*)(param_1 + 88) >> 8), *(uint*)(param_1 + 88) < *(uint*)(param_2 + 88));
    }

    // 0x100c3a680, 32 bytes, inline, placed by class name
    // PooledBuffer<IndexBuffer>::operator=(PooledBuffer<IndexBuffer>&&)
    /* PooledBuffer<IndexBuffer>::TEMPNAMEPLACEHOLDERVALUE(PooledBuffer<IndexBuffer>&&)
    */

    PooledBuffer<IndexBuffer>* PooledBuffer<IndexBuffer>::operator=(PooledBuffer* param_1) {
        IndexBuffer::operator=((IndexBuffer*)this, (IndexBuffer*)param_1);
        return this;
    }

    // 0x100c3a980, 16 bytes, inline, placed by class name
    // PooledBuffer<VertexBuffer>::Create(unsigned int, unsigned int, void const*)::{lambda(internal::ManagedBuffer<VertexBuffer> const&)#1}::operator()(internal::ManagedBuffer<VertexBuffer> const&) const
    /* PooledBuffer<VertexBuffer>::Create(unsigned int, unsigned int, void
   const*)::{lambda(internal::ManagedBuffer<VertexBuffer>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(internal::ManagedBuffer<VertexBuffer>
   const&) const */

    void PooledBuffer<VertexBuffer>::Create(unsigned int, unsigned int, void_const*)::{
        lambda(internal::ManagedBuffer<VertexBuffer> const&) #1
    }
    ::operator()(ManagedBuffer * param_1) {
        internal::ManagedBuffer<VertexBuffer>::IsReadyToReuse();
    }

    // 0x100c3a990, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // auto PooledBuffer<VertexBuffer>::Create(unsigned int, unsigned int, void const*)::{lambda(auto:1 const&, auto:2 const&)#1}::operator()<internal::ManagedBuffer<VertexBuffer>, internal::ManagedBuffer<VertexBuffer> >(internal::ManagedBuffer<VertexBuffer> const&, internal::ManagedBuffer<VertexBuffer> const&) const
    /* auto internal::BufferPool<VertexBuffer>::OnEndFrame()::{lambda(auto:1
   const&, auto:2
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(internal::ManagedBuffer<VertexBuffer>
   const&, internal::ManagedBuffer<VertexBuffer> const&) const */

    undefined4 internal::BufferPool<VertexBuffer>::OnEndFrame()::{
        lambda(auto : 1_const &, auto : 2_const &) #1
    }
    ::operator()(_lambda_auto_1_const__auto_2_const___1_* this, ManagedBuffer * param_1, ManagedBuffer * param_2)

    {
        return CONCAT31((int3)(*(uint*)(param_1 + 80) >> 8), *(uint*)(param_1 + 80) < *(uint*)(param_2 + 80));
    }

    // 0x100c3b280, 32 bytes, inline, placed by class name
    // PooledBuffer<VertexBuffer>::operator=(PooledBuffer<VertexBuffer>&&)
    /* PooledBuffer<ShaderConstBuffer>::TEMPNAMEPLACEHOLDERVALUE(PooledBuffer<ShaderConstBuffer>&&)
    */

    PooledBuffer<ShaderConstBuffer>* PooledBuffer<ShaderConstBuffer>::operator=(PooledBuffer* param_1) {
        ShaderConstBuffer::operator=((ShaderConstBuffer*)this, (ShaderConstBuffer*)param_1);
        return this;
    }

    // 0x100c3b570, 16 bytes, inline, placed by class name
    // PooledBuffer<ShaderConstBuffer>::Create(unsigned int, unsigned int, void const*)::{lambda(internal::ManagedBuffer<ShaderConstBuffer> const&)#1}::operator()(internal::ManagedBuffer<ShaderConstBuffer> const&) const
    /* PooledBuffer<ShaderConstBuffer>::Create(unsigned int, unsigned int,
   void const*)::{lambda(internal::ManagedBuffer<ShaderConstBuffer>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(internal::ManagedBuffer<ShaderConstBuffer>
   const&) const */

    void PooledBuffer<ShaderConstBuffer>::Create(unsigned int, unsigned int, void_const*)::{
        lambda(internal::ManagedBuffer<ShaderConstBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<ShaderConstBuffer> const___1_* this,
                 ManagedBuffer * param_1)

    {
        internal::ManagedBuffer<ShaderConstBuffer>::IsReadyToReuse();
    }

    // 0x100c3be60, 16 bytes, inline, placed by class name
    // PooledBuffer<PixelUnpackBuffer>::Create(unsigned int, unsigned int, void const*)::{lambda(internal::ManagedBuffer<PixelUnpackBuffer> const&)#1}::operator()(internal::ManagedBuffer<PixelUnpackBuffer> const&) const
    /* PooledBuffer<PixelUnpackBuffer>::Create(unsigned int, unsigned int,
   void const*)::{lambda(internal::ManagedBuffer<PixelUnpackBuffer>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(internal::ManagedBuffer<PixelUnpackBuffer>
   const&) const */

    void PooledBuffer<PixelUnpackBuffer>::Create(unsigned int, unsigned int, void_const*)::{
        lambda(internal::ManagedBuffer<PixelUnpackBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<PixelUnpackBuffer> const___1_* this,
                 ManagedBuffer * param_1)

    {
        internal::ManagedBuffer<PixelUnpackBuffer>::IsReadyToReuse();
    }

} // namespace jag::render
