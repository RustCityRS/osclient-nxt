// libs/hal/render/buffers/PooledBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    template <typename...> // 4 instantiations, e.g. <IndexBuffer>, <PixelUnpackBuffer>, <ShaderConstBuffer>
    class PooledBuffer {
    public:
        PooledBuffer();
        ~PooledBuffer();
        void Destroy();
        unsigned long Create(unsigned int arg1, unsigned int arg2, const void* arg3);
        PooledBuffer(PooledBuffer<IndexBuffer>&& pooledBuffer);
        PooledBuffer(PooledBuffer<VertexBuffer>&& pooledBuffer);
        PooledBuffer<IndexBuffer>* operator=(PooledBuffer<IndexBuffer>&& pooledBuffer);
        PooledBuffer<ShaderConstBuffer>* operator=(PooledBuffer<VertexBuffer>&& pooledBuffer);
        static int32_t POW2_ROUND_UP_MAX_SIZE;    // = 16384
        static int32_t POW2_ROUND_UP_MAX_SIZE;    // = 16384
        static int32_t POW2_ROUND_UP_MAX_SIZE;    // = 16384
        static int32_t POW2_ROUND_UP_MAX_SIZE[5]; // = { 16384, 16711935, 0, 0, 0 }
    };

    // 0x100d997a0
    int32_t PooledBuffer<IndexBuffer>::POW2_ROUND_UP_MAX_SIZE = 16384;

    // 0x100d997a4
    int32_t PooledBuffer<VertexBuffer>::POW2_ROUND_UP_MAX_SIZE = 16384;

    // 0x100d997a8
    int32_t PooledBuffer<ShaderConstBuffer>::POW2_ROUND_UP_MAX_SIZE = 16384;

    // 0x100d997ac
    int32_t PooledBuffer<PixelUnpackBuffer>::POW2_ROUND_UP_MAX_SIZE[5] = {16384, 16711935, 0, 0, 0};

    // 0x100c0ccc0
    PooledBuffer<IndexBuffer>::PooledBuffer() : IndexBuffer() {}

    // 0x100c0cd00
    PooledBuffer<IndexBuffer>::~PooledBuffer() {
        PooledBuffer<IndexBuffer>::Destroy();
    }

    // 0x100c0cd30
    void PooledBuffer<IndexBuffer>::Destroy() {
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        unsigned int uVar6;
        unsigned int arg2;
        int iVar7;
        unsigned long uVar8;
        long lVar9;
        vector<internal::ManagedBuffer<IndexBuffer>>* this_00;
        unsigned int* puVar10;
        int* piVar11;
        Logger* this_01;
        uint64_t uVar12;
        PooledBuffer<IndexBuffer>* this_02;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>* this_03;
        unsigned int in_R8D;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        bool cVar1 = this_thread::IsMainThread();
        if ((!cVar1) && (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, nullptr);
        }
        cVar1 = IsCreated();
        if ((((cVar1) && (cVar1 = IsMapped(), !cVar1)) && (cVar1 = IsRecyclable(), cVar1)) &&
            ((cVar1 = IsDynamic(), cVar1 && (this_02 = this, uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)))) {
            if (*(int*)this != 3) {
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, nullptr);
            }
            lVar9 = this_02->Instance();
            this_03 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>*)(lVar9 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<internal::ManagedBuffer<IndexBuffer>>*)(*this_03)[local_3c];
            lVar9 = this_03->Instance();
            uVar6 = GetEndPosition();
            arg2 = this_00->size();
            local_38 = GetEndPosition();
            puVar10 = (unsigned int*)(*((lVar9 + 80)))[local_38];
            ((BufferPoolStats*)"IndexBuffer")
                ->RecordBufferDestruction((char*)(unsigned long)uVar6, arg2, *puVar10, in_R8D);
            cVar1 = IsPermanent();
            if (cVar1) {
                local_34 = GetEndPosition();
                piVar11 = (int*)(*((lVar9 + 80)))[local_34];
                *piVar11 = *piVar11 + 1;
            }
            this_00->emplace_back<PooledBuffer<IndexBuffer>>(*this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1) && (iVar7 = GetEndPosition(), iVar7 != 0)) &&
            (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            this_01 = logger::default_logger();
            uVar12 = GetNativeBuffer();
            bVar2 = IsCreated();
            bVar3 = IsMapped();
            bVar4 = IsRecyclable();
            bVar5 = IsDynamic();
            uVar6 = GetEndPosition();
            this_01->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                         "PooledBuffer.cpp",
                         263,
                         "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: %i, "
                         "dynamic: %i, physicalSize: %u)",
                         uVar12, (unsigned long)bVar2, (unsigned long)bVar3, (unsigned long)bVar4, (unsigned long)bVar5,
                         (unsigned long)uVar6);
        }
        Destroy();
    }

    // 0x100c0cfa0
    unsigned long PooledBuffer<IndexBuffer>::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int* puVar4;
        ManagedBuffer<IndexBuffer>* pMVar6;
        ManagedBuffer<IndexBuffer>* pMVar7;
        rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true, true>* this_00;
        unsigned long uVar9;
        BufferCreationReason in_R8D;
        void* pvVar10;
        IndexBuffer* pIVar11;
        bool bVar12;
        uint8_t auVar13[16];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_70;
        rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>> _>,
                        eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>> _> const*,
                        eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>> _> const&>*
            local_68;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>>,
               true, true>* local_60;
        ReturnValue local_58;
        ReturnValue local_40;

        if ((arg2 & 16) != 0) {
            uVar2 = Create(arg1, arg2, arg3, 5123);
            uVar9 = (unsigned long)uVar2;
            goto LAB_100c0d42d;
        }
        PooledBuffer<IndexBuffer>* pPVar8 = this;
        unsigned int local_34 = arg1;
        if ((arg2 & 4) == 0) {
            if (arg1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(arg1);
            } else {
                local_34 = math::RoundUpToMultiple(arg1, 16384);
            }
            local_40._0_4_ = 16;
            pPVar8 = (PooledBuffer<IndexBuffer>*)&local_34;
            puVar4 = std::max<unsigned int>(*pPVar8, local_40);
            local_34 = *puVar4;
        }
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, nullptr);
        }
        long lVar5 = pPVar8->Instance();
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>>,
               true, true>* this_02 =
            (rbtree<
                unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>>>>,
                true, true>*)(lVar5 + 32);
        local_40 = this_02->lower_bound(local_34);
        lVar5 = *local_40;
        Layout* this_03 = (Layout*)(lVar5 + 8);
        local_58.end();
        cVar1 = local_40 != local_58;
        if (!cVar1) {
            pMVar6 = nullptr;
        } else {
            puVar4 = (unsigned int*)*local_40;
            pMVar6 = nullptr;
            bVar12 = true;
            if (((float)*puVar4 <= (float)local_34 * 1.55) && ((arg2 & 4) == 0)) {
                pMVar6 = (ManagedBuffer<IndexBuffer>*)this_03->HeapBeginPtr();
                auVar13 = this_03->end();
                pMVar6 = eastl::find_if<internal::ManagedBuffer<IndexBuffer>*,
                                        unsigned int->Create(unsigned int, void const*)::_lambda(
                                            internal::ManagedBuffer<IndexBuffer> const&) _1_>(pMVar6, auVar13._0_8_,
                                                                                              auVar13._8_8_);
                pMVar7 = (ManagedBuffer<IndexBuffer>*)this_03->end();
                bVar12 = pMVar6 == pMVar7;
            }
            pIVar11 = (IndexBuffer*)this;
            if (!bVar12) {
                local_60 = this_02;
                if (pMVar6 == nullptr) {
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, nullptr);
                }
                PooledBuffer((PooledBuffer<IndexBuffer>*)(IndexBuffer*)this, (PooledBuffer<IndexBuffer>*)pMVar6);
                if (pIVar11->field_0 != 3) {
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, nullptr);
                }
                lVar5 = ((AutoSingleton<internal::BufferPool<IndexBuffer>>*)(IndexBuffer*)this)->Instance();
                this_00 =
                    (rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>,
                            eastl::allocator, eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                            true>*)(lVar5 + 80);
                cVar1 = pIVar11->IsPermanent();
                if (cVar1) {
                    puVar4 = (unsigned int*)*local_40;
                    local_58 = this_00->find(*puVar4);
                    local_70.end();
                    cVar1 = local_58 != local_70;
                    if (!cVar1) {
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, nullptr);
                    }
                    lVar5 = *local_58;
                    *(int*)(lVar5 + 4) = *(int*)(lVar5 + 4) - 1;
                    pIVar11 = (IndexBuffer*)this;
                }
                uVar2 = pIVar11->GetEndPosition();
                uVar3 = this_03->size();
                puVar4 = (unsigned int*)*local_40;
                puVar4 = (unsigned int*)(*this_00)[*puVar4];
                BufferPoolStats::RecordBufferRecycle("IndexBuffer", uVar2, uVar3, *puVar4);
                cVar1 = this_03->empty();
                if (cVar1) {
                    new (&local_68) eastl::ListIterator(&local_40);
                    local_58 = local_60->erase(local_68);
                }
                uVar3 = pIVar11->GetEndPosition();
                uVar2 = arg1;
                if (uVar3 < arg1) {
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, nullptr);
                }
                cVar1 = pIVar11->IsCreated();
                pvVar10 = arg3;
                if (!cVar1) {
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, nullptr);
                }
                cVar1 = pIVar11->IsMapped();
                if (cVar1) {
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, nullptr);
                }
                pIVar11->field_36 = uVar2;
                uVar9 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                if (pvVar10 != nullptr) {
                    pIVar11->Update(0, uVar2, pvVar10, 2);
                }
                goto LAB_100c0d42d;
            }
        }
        if ((arg2 & 4) == 0) {
            local_58.end();
            cVar1 = local_40 == local_58;
            if (cVar1) {
                uVar2 = 1;
                goto LAB_100c0d35c;
            }
            pPVar8 = (PooledBuffer<IndexBuffer>*)this_03->end();
            pvVar10 = arg3;
            if (pMVar6 == (ManagedBuffer<IndexBuffer>*)pPVar8) {
                pMVar6 = (ManagedBuffer<IndexBuffer>*)this_03->HeapBeginPtr();
                auVar13 = this_03->end();
                eastl::minmax_element<internal::ManagedBuffer<IndexBuffer> const*,
                                      internal::BufferPool<IndexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1 const&, auto : 2 const&) _1_>(pMVar6, auVar13._0_8_, auVar13._8_8_);
                uVar2 = 2;
            } else {
                uVar2 = 3;
            }
            ((BufferPoolStats*)"IndexBuffer")->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
        } else {
            uVar2 = 0;
        LAB_100c0d35c:
            ((BufferPoolStats*)"IndexBuffer")->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
            pvVar10 = arg3;
        }
        uVar2 = arg1;
        pIVar11 = (IndexBuffer*)this;
        if ((pvVar10 == nullptr) || (local_34 == arg1)) {
            uVar3 = Create(local_34, arg2 | 43, pvVar10, 5123);
        } else {
            uVar3 = Create(local_34, arg2 | 43, nullptr, 5123);
            pIVar11->Update(0, uVar2, pvVar10, 0);
        }
        uVar9 = (unsigned long)uVar3;
        pIVar11->field_36 = uVar2;
    LAB_100c0d42d:
        return uVar9 & 4294967295;
    }

    // 0x100c0ee10
    PooledBuffer<VertexBuffer>::PooledBuffer() : VertexBuffer() {}

    // 0x100c0ee40
    PooledBuffer<VertexBuffer>::~PooledBuffer() {
        PooledBuffer<VertexBuffer>::Destroy();
    }

    // 0x100c0ee70
    void PooledBuffer<VertexBuffer>::Destroy() {
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        unsigned int uVar6;
        unsigned int arg2;
        int iVar7;
        unsigned long uVar8;
        long lVar9;
        vector<game::BuildCombinedLocationResult_CombinableGroup>* this_00;
        unsigned int* puVar10;
        int* piVar11;
        Logger* this_01;
        uint64_t uVar12;
        PooledBuffer<VertexBuffer>* this_02;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>* this_03;
        unsigned int in_R8D;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        bool cVar1 = this_thread::IsMainThread();
        if ((!cVar1) && (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, nullptr);
        }
        cVar1 = IsCreated();
        if ((((cVar1) && (cVar1 = IsMapped(), !cVar1)) && (cVar1 = IsValidValue(), cVar1)) &&
            ((cVar1 = IsDynamic(), cVar1 && (this_02 = this, uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)))) {
            if (*(int*)this != 3) {
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, nullptr);
            }
            lVar9 = this_02->Instance();
            this_03 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>*)(lVar9 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<game::BuildCombinedLocationResult_CombinableGroup>*)(*this_03)[local_3c];
            lVar9 = this_03->Instance();
            uVar6 = GetEndPosition();
            arg2 = this_00->size();
            local_38 = GetEndPosition();
            puVar10 = (unsigned int*)(*((lVar9 + 80)))[local_38];
            ((BufferPoolStats*)"VertexBuffer")
                ->RecordBufferDestruction((char*)(unsigned long)uVar6, arg2, *puVar10, in_R8D);
            cVar1 = IsPermanent();
            if (cVar1) {
                local_34 = GetEndPosition();
                piVar11 = (int*)(*((lVar9 + 80)))[local_34];
                *piVar11 = *piVar11 + 1;
            }
            this_00->emplace_back<PooledBuffer<VertexBuffer>>(*this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1) && (iVar7 = GetEndPosition(), iVar7 != 0)) &&
            (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            this_01 = logger::default_logger();
            uVar12 = GetNativeBuffer();
            bVar2 = IsCreated();
            bVar3 = IsMapped();
            bVar4 = IsValidValue();
            bVar5 = IsDynamic();
            uVar6 = GetEndPosition();
            this_01->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                         "PooledBuffer.cpp",
                         263,
                         "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: %i, "
                         "dynamic: %i, physicalSize: %u)",
                         uVar12, (unsigned long)bVar2, (unsigned long)bVar3, (unsigned long)bVar4, (unsigned long)bVar5,
                         (unsigned long)uVar6);
        }
        Destroy();
    }

    // 0x100c0f0e0
    unsigned long PooledBuffer<VertexBuffer>::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int* puVar4;
        ManagedBuffer<VertexBuffer>* pMVar6;
        ManagedBuffer<VertexBuffer>* pMVar7;
        ManagedBuffer<ShaderConstBuffer>* managedBuffer1;
        rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true, true>* this_00;
        unsigned long uVar9;
        BufferCreationReason in_R8D;
        void* pvVar10;
        BufferInterface* pBVar11;
        bool bVar12;
        uint8_t auVar13[16];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_70;
        rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>> _>,
                        eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>> _> const*,
                        eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>> _> const&>*
            local_68;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>>,
               true, true>* local_60;
        ReturnValue local_58;
        ReturnValue local_40;

        if ((arg2 & 16) != 0) {
            uVar2 = Create(arg1, arg2, arg3);
            uVar9 = (unsigned long)uVar2;
            goto LAB_100c0f55b;
        }
        PooledBuffer<VertexBuffer>* pPVar8 = this;
        unsigned int local_34 = arg1;
        if ((arg2 & 4) == 0) {
            if (arg1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(arg1);
            } else {
                local_34 = math::RoundUpToMultiple(arg1, 16384);
            }
            local_40._0_4_ = 16;
            pPVar8 = (PooledBuffer<VertexBuffer>*)&local_34;
            puVar4 = std::max<unsigned int>(*pPVar8, local_40);
            local_34 = *puVar4;
        }
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, nullptr);
        }
        long lVar5 = pPVar8->Instance();
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>>,
               true, true>* this_02 =
            (rbtree<
                unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>>>>,
                true, true>*)(lVar5 + 32);
        local_40 = this_02->lower_bound(local_34);
        lVar5 = *local_40;
        Layout* this_03 = (Layout*)(lVar5 + 8);
        local_58.end();
        cVar1 = local_40 != local_58;
        if (!cVar1) {
            pMVar6 = nullptr;
        } else {
            puVar4 = (unsigned int*)*local_40;
            pMVar6 = nullptr;
            bVar12 = true;
            if (((float)*puVar4 <= (float)local_34 * 1.55) && ((arg2 & 4) == 0)) {
                pMVar6 = (ManagedBuffer<VertexBuffer>*)this_03->HeapBeginPtr();
                auVar13 = this_03->end();
                pMVar6 = eastl::find_if<internal::ManagedBuffer<VertexBuffer>*,
                                        unsigned int->Create(unsigned int, void const*)::_lambda(
                                            internal::ManagedBuffer<VertexBuffer> const&) _1_>(pMVar6, auVar13._0_8_,
                                                                                               auVar13._8_8_);
                pMVar7 = (ManagedBuffer<VertexBuffer>*)this_03->end();
                bVar12 = pMVar6 == pMVar7;
            }
            pBVar11 = (BufferInterface*)this;
            if (!bVar12) {
                local_60 = this_02;
                if (pMVar6 == nullptr) {
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, nullptr);
                }
                new ((PooledBuffer<ShaderConstBuffer>*)(BufferInterface*)this) PooledBuffer(*pMVar6);
                if (pBVar11->field_0 != 3) {
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, nullptr);
                }
                lVar5 = ((AutoSingleton<internal::BufferPool<VertexBuffer>>*)(BufferInterface*)this)->Instance();
                this_00 =
                    (rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>,
                            eastl::allocator, eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                            true>*)(lVar5 + 80);
                cVar1 = pBVar11->IsPermanent();
                if (cVar1) {
                    puVar4 = (unsigned int*)*local_40;
                    local_58 = this_00->find(*puVar4);
                    local_70.end();
                    cVar1 = local_58 != local_70;
                    if (!cVar1) {
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, nullptr);
                    }
                    lVar5 = *local_58;
                    *(int*)(lVar5 + 4) = *(int*)(lVar5 + 4) - 1;
                    pBVar11 = (BufferInterface*)this;
                }
                uVar2 = pBVar11->GetEndPosition();
                uVar3 = this_03->size();
                puVar4 = (unsigned int*)*local_40;
                puVar4 = (unsigned int*)(*this_00)[*puVar4];
                BufferPoolStats::RecordBufferRecycle("VertexBuffer", uVar2, uVar3, *puVar4);
                cVar1 = this_03->empty();
                if (cVar1) {
                    new (&local_68) eastl::ListIterator(&local_40);
                    local_58 = local_60->erase(local_68);
                }
                uVar3 = pBVar11->GetEndPosition();
                uVar2 = arg1;
                if (uVar3 < arg1) {
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, nullptr);
                }
                cVar1 = pBVar11->IsCreated();
                pvVar10 = arg3;
                if (!cVar1) {
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, nullptr);
                }
                cVar1 = pBVar11->IsMapped();
                if (cVar1) {
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, nullptr);
                }
                pBVar11->m_sizeInBytes = uVar2;
                uVar9 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                if (pvVar10 != nullptr) {
                    pBVar11->Update(0, uVar2, pvVar10, 2);
                }
                goto LAB_100c0f55b;
            }
        }
        if ((arg2 & 4) == 0) {
            local_58.end();
            cVar1 = local_40 == local_58;
            if (cVar1) {
                uVar2 = 1;
                goto LAB_100c0f496;
            }
            pPVar8 = (PooledBuffer<VertexBuffer>*)this_03->end();
            pvVar10 = arg3;
            if (pMVar6 == (ManagedBuffer<VertexBuffer>*)pPVar8) {
                managedBuffer1 = (ManagedBuffer<ShaderConstBuffer>*)this_03->HeapBeginPtr();
                auVar13 = this_03->end();
                eastl::minmax_element<internal::ManagedBuffer<VertexBuffer> const*,
                                      internal::BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1 const&, auto : 2 const&) _1_>(managedBuffer1, auVar13._0_8_,
                                                                                 auVar13._8_8_);
                uVar2 = 2;
            } else {
                uVar2 = 3;
            }
            ((BufferPoolStats*)"VertexBuffer")->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
        } else {
            uVar2 = 0;
        LAB_100c0f496:
            ((BufferPoolStats*)"VertexBuffer")->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
            pvVar10 = arg3;
        }
        uVar2 = arg1;
        pBVar11 = (BufferInterface*)this;
        if ((pvVar10 == nullptr) || (local_34 == arg1)) {
            uVar3 = ((VertexBuffer*)(BufferInterface*)this)->Create(local_34, arg2 | 43, pvVar10);
        } else {
            uVar3 = ((VertexBuffer*)(BufferInterface*)this)->Create(local_34, arg2 | 43, nullptr);
            pBVar11->Update(0, uVar2, pvVar10, 0);
        }
        uVar9 = (unsigned long)uVar3;
        pBVar11->m_sizeInBytes = uVar2;
    LAB_100c0f55b:
        return uVar9 & 4294967295;
    }

    // 0x100c10450
    PooledBuffer<ShaderConstBuffer>::PooledBuffer() : ShaderConstBuffer() {}

    // 0x100c10480
    PooledBuffer<ShaderConstBuffer>::~PooledBuffer() {
        PooledBuffer<ShaderConstBuffer>::Destroy();
    }

    // 0x100c104b0
    void PooledBuffer<ShaderConstBuffer>::Destroy() {
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        unsigned int uVar6;
        unsigned int arg2;
        int iVar7;
        unsigned long uVar8;
        long lVar9;
        vector<game::BuildCombinedLocationResult_CombinableGroup>* this_00;
        unsigned int* puVar10;
        int* piVar11;
        Logger* this_01;
        uint64_t uVar12;
        PooledBuffer<ShaderConstBuffer>* this_02;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>* this_03;
        unsigned int in_R8D;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        bool cVar1 = this_thread::IsMainThread();
        if ((!cVar1) && (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, nullptr);
        }
        cVar1 = IsCreated();
        if ((((cVar1) && (cVar1 = IsMapped(), !cVar1)) && (cVar1 = IsValidValue(), cVar1)) &&
            ((cVar1 = IsDynamic(), cVar1 && (this_02 = this, uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)))) {
            if (*(int*)this != 3) {
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, nullptr);
            }
            lVar9 = this_02->Instance();
            this_03 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>*)(lVar9 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<game::BuildCombinedLocationResult_CombinableGroup>*)(*this_03)[local_3c];
            lVar9 = this_03->Instance();
            uVar6 = GetEndPosition();
            arg2 = this_00->size();
            local_38 = GetEndPosition();
            puVar10 = (unsigned int*)(*((lVar9 + 80)))[local_38];
            ((BufferPoolStats*)"ShaderConstBuffer")
                ->RecordBufferDestruction((char*)(unsigned long)uVar6, arg2, *puVar10, in_R8D);
            cVar1 = IsPermanent();
            if (cVar1) {
                local_34 = GetEndPosition();
                piVar11 = (int*)(*((lVar9 + 80)))[local_34];
                *piVar11 = *piVar11 + 1;
            }
            this_00->emplace_back<PooledBuffer<ShaderConstBuffer>>(*this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1) && (iVar7 = GetEndPosition(), iVar7 != 0)) &&
            (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            this_01 = logger::default_logger();
            uVar12 = GetNativeBuffer();
            bVar2 = IsCreated();
            bVar3 = IsMapped();
            bVar4 = IsValidValue();
            bVar5 = IsDynamic();
            uVar6 = GetEndPosition();
            this_01->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                         "PooledBuffer.cpp",
                         263,
                         "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: %i, "
                         "dynamic: %i, physicalSize: %u)",
                         uVar12, (unsigned long)bVar2, (unsigned long)bVar3, (unsigned long)bVar4, (unsigned long)bVar5,
                         (unsigned long)uVar6);
        }
        Destroy();
    }

    // 0x100c10720
    unsigned long PooledBuffer<ShaderConstBuffer>::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int* puVar4;
        ManagedBuffer<ShaderConstBuffer>* pMVar6;
        ManagedBuffer<ShaderConstBuffer>* pMVar7;
        PooledBuffer<VertexBuffer>* pPVar8;
        rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true, true>* this_00;
        unsigned long uVar9;
        BufferCreationReason in_R8D;
        void* pvVar10;
        BufferInterface* pBVar11;
        bool bVar12;
        uint8_t auVar13[16];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_70;
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>> _>,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>> _> const*,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>> _> const&>*
            local_68;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<
                   eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>>,
               true, true>* local_60;
        ReturnValue local_58;
        ReturnValue local_40;

        if ((arg2 & 16) != 0) {
            uVar2 = Create(arg1, arg2, arg3);
            uVar9 = (unsigned long)uVar2;
            goto LAB_100c10b9b;
        }
        PooledBuffer<ShaderConstBuffer>* this_01 = this;
        unsigned int local_34 = arg1;
        if ((arg2 & 4) == 0) {
            if (arg1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(arg1);
            } else {
                local_34 = math::RoundUpToMultiple(arg1, 16384);
            }
            local_40._0_4_ = 16;
            this_01 = (PooledBuffer<ShaderConstBuffer>*)&local_34;
            puVar4 = std::max<unsigned int>(*this_01, local_40);
            local_34 = *puVar4;
        }
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, nullptr);
        }
        long lVar5 = this_01->Instance();
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<
                   eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>>,
               true, true>* this_03 =
            (rbtree<unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<
                        eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>>>>,
                    true, true>*)(lVar5 + 32);
        local_40 = this_03->lower_bound(local_34);
        lVar5 = *local_40;
        Layout* this_04 = (Layout*)(lVar5 + 8);
        local_58.end();
        cVar1 = local_40 != local_58;
        if (!cVar1) {
            pMVar6 = nullptr;
        } else {
            puVar4 = (unsigned int*)*local_40;
            pMVar6 = nullptr;
            bVar12 = true;
            if (((float)*puVar4 <= (float)local_34 * 1.55) && ((arg2 & 4) == 0)) {
                pMVar6 = (ManagedBuffer<ShaderConstBuffer>*)this_04->HeapBeginPtr();
                auVar13 = this_04->end();
                pMVar6 = eastl::find_if<internal::ManagedBuffer<ShaderConstBuffer>*,
                                        unsigned int->Create(unsigned int, void const*)::_lambda(
                                            internal::ManagedBuffer<ShaderConstBuffer> const&) _1_>(
                    pMVar6, auVar13._0_8_, auVar13._8_8_);
                pMVar7 = (ManagedBuffer<ShaderConstBuffer>*)this_04->end();
                bVar12 = pMVar6 == pMVar7;
            }
            pBVar11 = (BufferInterface*)this;
            if (!bVar12) {
                local_60 = this_03;
                if (pMVar6 == nullptr) {
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, nullptr);
                }
                PooledBuffer((PooledBuffer<ShaderConstBuffer>*)(BufferInterface*)this,
                             (PooledBuffer<VertexBuffer>*)pMVar6);
                if (pBVar11->field_0 != 3) {
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, nullptr);
                }
                lVar5 = ((AutoSingleton<internal::BufferPool<ShaderConstBuffer>>*)(BufferInterface*)this)->Instance();
                this_00 =
                    (rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>,
                            eastl::allocator, eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                            true>*)(lVar5 + 80);
                cVar1 = pBVar11->IsPermanent();
                if (cVar1) {
                    puVar4 = (unsigned int*)*local_40;
                    local_58 = this_00->find(*puVar4);
                    local_70.end();
                    cVar1 = local_58 != local_70;
                    if (!cVar1) {
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, nullptr);
                    }
                    lVar5 = *local_58;
                    *(int*)(lVar5 + 4) = *(int*)(lVar5 + 4) - 1;
                    pBVar11 = (BufferInterface*)this;
                }
                uVar2 = pBVar11->GetEndPosition();
                uVar3 = this_04->size();
                puVar4 = (unsigned int*)*local_40;
                puVar4 = (unsigned int*)(*this_00)[*puVar4];
                BufferPoolStats::RecordBufferRecycle("ShaderConstBuffer", uVar2, uVar3, *puVar4);
                cVar1 = this_04->empty();
                if (cVar1) {
                    new (&local_68) eastl::ListIterator(&local_40);
                    local_58 = local_60->erase(local_68);
                }
                uVar3 = pBVar11->GetEndPosition();
                uVar2 = arg1;
                if (uVar3 < arg1) {
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, nullptr);
                }
                cVar1 = pBVar11->IsCreated();
                pvVar10 = arg3;
                if (!cVar1) {
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, nullptr);
                }
                cVar1 = pBVar11->IsMapped();
                if (cVar1) {
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, nullptr);
                }
                pBVar11->m_sizeInBytes = uVar2;
                uVar9 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                if (pvVar10 != nullptr) {
                    pBVar11->Update(0, uVar2, pvVar10, 2);
                }
                goto LAB_100c10b9b;
            }
        }
        if ((arg2 & 4) == 0) {
            local_58.end();
            cVar1 = local_40 == local_58;
            if (cVar1) {
                uVar2 = 1;
                goto LAB_100c10ad6;
            }
            pPVar8 = (PooledBuffer<VertexBuffer>*)this_04->end();
            pvVar10 = arg3;
            if (pMVar6 == (ManagedBuffer<ShaderConstBuffer>*)pPVar8) {
                pMVar6 = (ManagedBuffer<ShaderConstBuffer>*)this_04->HeapBeginPtr();
                auVar13 = this_04->end();
                eastl::minmax_element<internal::ManagedBuffer<VertexBuffer> const*,
                                      internal::BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1 const&, auto : 2 const&) _1_>(pMVar6, auVar13._0_8_, auVar13._8_8_);
                uVar2 = 2;
            } else {
                uVar2 = 3;
            }
            ((BufferPoolStats*)"ShaderConstBuffer")
                ->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
        } else {
            uVar2 = 0;
        LAB_100c10ad6:
            ((BufferPoolStats*)"ShaderConstBuffer")
                ->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
            pvVar10 = arg3;
        }
        uVar2 = arg1;
        pBVar11 = (BufferInterface*)this;
        if ((pvVar10 == nullptr) || (local_34 == arg1)) {
            uVar3 = ((ShaderConstBuffer*)(BufferInterface*)this)->Create(local_34, arg2 | 43, pvVar10);
        } else {
            uVar3 = ((ShaderConstBuffer*)(BufferInterface*)this)->Create(local_34, arg2 | 43, nullptr);
            pBVar11->Update(0, uVar2, pvVar10, 0);
        }
        uVar9 = (unsigned long)uVar3;
        pBVar11->m_sizeInBytes = uVar2;
    LAB_100c10b9b:
        return uVar9 & 4294967295;
    }

    // 0x100c11a80
    PooledBuffer<PixelUnpackBuffer>::PooledBuffer() : PixelUnpackBuffer() {}

    // 0x100c11ab0
    PooledBuffer<PixelUnpackBuffer>::~PooledBuffer() {
        PooledBuffer<PixelUnpackBuffer>::Destroy();
    }

    // 0x100c11ae0
    void PooledBuffer<PixelUnpackBuffer>::Destroy() {
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        unsigned int uVar6;
        unsigned int arg2;
        int iVar7;
        unsigned long uVar8;
        long lVar9;
        vector<game::BuildCombinedLocationResult_CombinableGroup>* this_00;
        unsigned int* puVar10;
        int* piVar11;
        Logger* this_01;
        uint64_t uVar12;
        PooledBuffer<PixelUnpackBuffer>* this_02;
        map<unsigned int, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>* this_03;
        unsigned int in_R8D;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        bool cVar1 = this_thread::IsMainThread();
        if ((!cVar1) && (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            LogAssert(
                "this_thread::IsMainThread() || (this->GetCreationFlags() & FORCE_NO_RECYCLING) == FORCE_NO_RECYCLING",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "PooledBuffer.cpp",
                205, nullptr);
        }
        cVar1 = IsCreated();
        if ((((cVar1) && (cVar1 = IsMapped(), !cVar1)) && (cVar1 = IsValidValue(), cVar1)) &&
            ((cVar1 = IsDynamic(), cVar1 && (this_02 = this, uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)))) {
            if (*(int*)this != 3) {
                LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "PooledBuffer.cpp",
                          230, nullptr);
            }
            lVar9 = this_02->Instance();
            this_03 = (map<unsigned int, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>*)(lVar9 + 32);
            local_3c = GetEndPosition();
            this_00 = (vector<game::BuildCombinedLocationResult_CombinableGroup>*)(*this_03)[local_3c];
            lVar9 = this_03->Instance();
            uVar6 = GetEndPosition();
            arg2 = this_00->size();
            local_38 = GetEndPosition();
            puVar10 = (unsigned int*)(*((lVar9 + 80)))[local_38];
            ((BufferPoolStats*)"PixelUnpackBuffer")
                ->RecordBufferDestruction((char*)(unsigned long)uVar6, arg2, *puVar10, in_R8D);
            cVar1 = IsPermanent();
            if (cVar1) {
                local_34 = GetEndPosition();
                piVar11 = (int*)(*((lVar9 + 80)))[local_34];
                *piVar11 = *piVar11 + 1;
            }
            this_00->emplace_back<PooledBuffer<PixelUnpackBuffer>>(*this);
            return;
        }
        cVar1 = IsCreated();
        if (((cVar1) && (iVar7 = GetEndPosition(), iVar7 != 0)) &&
            (uVar8 = GetNormalEmissiveMapID(), (uVar8 & 16) == 0)) {
            this_01 = logger::default_logger();
            uVar12 = GetNativeBuffer();
            bVar2 = IsCreated();
            bVar3 = IsMapped();
            bVar4 = IsValidValue();
            bVar5 = IsDynamic();
            uVar6 = GetEndPosition();
            this_01->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                         "PooledBuffer.cpp",
                         263,
                         "Attempting to recycle invalid buffer (id: %u, created: %i, mapped: %i, recyclable: %i, "
                         "dynamic: %i, physicalSize: %u)",
                         uVar12, (unsigned long)bVar2, (unsigned long)bVar3, (unsigned long)bVar4, (unsigned long)bVar5,
                         (unsigned long)uVar6);
        }
        Destroy();
    }

    // 0x100c11d50
    unsigned long PooledBuffer<PixelUnpackBuffer>::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int* puVar4;
        ManagedBuffer<PixelUnpackBuffer>* pMVar6;
        ManagedBuffer<PixelUnpackBuffer>* pMVar7;
        PooledBuffer<VertexBuffer>* pPVar8;
        ManagedBuffer<ShaderConstBuffer>* managedBuffer1;
        rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true, true>* this_00;
        unsigned long uVar9;
        BufferCreationReason in_R8D;
        void* pvVar10;
        BufferInterface* pBVar11;
        bool bVar12;
        uint8_t auVar13[16];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_70;
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>> _>,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>> _> const*,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>> _> const&>*
            local_68;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<
                   eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>>,
               true, true>* local_60;
        ReturnValue local_58;
        ReturnValue local_40;

        if ((arg2 & 16) != 0) {
            uVar2 = Create(arg1, arg2, arg3);
            uVar9 = (unsigned long)uVar2;
            goto LAB_100c121cb;
        }
        PooledBuffer<PixelUnpackBuffer>* this_01 = this;
        unsigned int local_34 = arg1;
        if ((arg2 & 4) == 0) {
            if (arg1 < 16385) {
                local_34 = math::RoundUpToPowerOf2(arg1);
            } else {
                local_34 = math::RoundUpToMultiple(arg1, 16384);
            }
            local_40._0_4_ = 16;
            this_01 = (PooledBuffer<PixelUnpackBuffer>*)&local_34;
            puVar4 = std::max<unsigned int>(*this_01, local_40);
            local_34 = *puVar4;
        }
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      83, nullptr);
        }
        long lVar5 = this_01->Instance();
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<
                   eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>>,
               true, true>* this_03 =
            (rbtree<unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<
                        eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>>>>,
                    true, true>*)(lVar5 + 32);
        local_40 = this_03->lower_bound(local_34);
        lVar5 = *local_40;
        Layout* this_04 = (Layout*)(lVar5 + 8);
        local_58.end();
        cVar1 = local_40 != local_58;
        if (!cVar1) {
            pMVar6 = nullptr;
        } else {
            puVar4 = (unsigned int*)*local_40;
            pMVar6 = nullptr;
            bVar12 = true;
            if (((float)*puVar4 <= (float)local_34 * 1.55) && ((arg2 & 4) == 0)) {
                pMVar6 = (ManagedBuffer<PixelUnpackBuffer>*)this_04->HeapBeginPtr();
                auVar13 = this_04->end();
                pMVar6 = eastl::find_if<internal::ManagedBuffer<PixelUnpackBuffer>*,
                                        unsigned int->Create(unsigned int, void const*)::_lambda(
                                            internal::ManagedBuffer<PixelUnpackBuffer> const&) _1_>(
                    pMVar6, auVar13._0_8_, auVar13._8_8_);
                pMVar7 = (ManagedBuffer<PixelUnpackBuffer>*)this_04->end();
                bVar12 = pMVar6 == pMVar7;
            }
            pBVar11 = (BufferInterface*)this;
            if (!bVar12) {
                local_60 = this_03;
                if (pMVar6 == nullptr) {
                    LogAssert("bufferIt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              157, nullptr);
                }
                new ((PooledBuffer<ShaderConstBuffer>*)(BufferInterface*)this) PooledBuffer(*pMVar6);
                if (pBVar11->field_0 != 3) {
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::KEEP_ALIVE_EXTERNAL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              164, nullptr);
                }
                lVar5 = ((AutoSingleton<internal::BufferPool<PixelUnpackBuffer>>*)(BufferInterface*)this)->Instance();
                this_00 =
                    (rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>,
                            eastl::allocator, eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                            true>*)(lVar5 + 80);
                cVar1 = pBVar11->IsPermanent();
                if (cVar1) {
                    puVar4 = (unsigned int*)*local_40;
                    local_58 = this_00->find(*puVar4);
                    local_70.end();
                    cVar1 = local_58 != local_70;
                    if (!cVar1) {
                        LogAssert("permanentBufferIt != numPermanentBuffers.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  171, nullptr);
                    }
                    lVar5 = *local_58;
                    *(int*)(lVar5 + 4) = *(int*)(lVar5 + 4) - 1;
                    pBVar11 = (BufferInterface*)this;
                }
                uVar2 = pBVar11->GetEndPosition();
                uVar3 = this_04->size();
                puVar4 = (unsigned int*)*local_40;
                puVar4 = (unsigned int*)(*this_00)[*puVar4];
                BufferPoolStats::RecordBufferRecycle("PixelUnpackBuffer", uVar2, uVar3, *puVar4);
                cVar1 = this_04->empty();
                if (cVar1) {
                    new (&local_68) eastl::ListIterator(&local_40);
                    local_58 = local_60->erase(local_68);
                }
                uVar3 = pBVar11->GetEndPosition();
                uVar2 = arg1;
                if (uVar3 < arg1) {
                    LogAssert("this->GetPhysicalSizeInBytes() >= sizeInBytes",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              182, nullptr);
                }
                cVar1 = pBVar11->IsCreated();
                pvVar10 = arg3;
                if (!cVar1) {
                    LogAssert("this->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              183, nullptr);
                }
                cVar1 = pBVar11->IsMapped();
                if (cVar1) {
                    LogAssert("!this->IsMapped()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/PooledBuffer.cpp",
                              184, nullptr);
                }
                pBVar11->m_sizeInBytes = uVar2;
                uVar9 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                if (pvVar10 != nullptr) {
                    pBVar11->Update(0, uVar2, pvVar10, 2);
                }
                goto LAB_100c121cb;
            }
        }
        if ((arg2 & 4) == 0) {
            local_58.end();
            cVar1 = local_40 == local_58;
            if (cVar1) {
                uVar2 = 1;
                goto LAB_100c12106;
            }
            pPVar8 = (PooledBuffer<VertexBuffer>*)this_04->end();
            pvVar10 = arg3;
            if (pMVar6 == (ManagedBuffer<PixelUnpackBuffer>*)pPVar8) {
                managedBuffer1 = (ManagedBuffer<ShaderConstBuffer>*)this_04->HeapBeginPtr();
                auVar13 = this_04->end();
                eastl::minmax_element<internal::ManagedBuffer<VertexBuffer> const*,
                                      internal::BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                          auto : 1 const&, auto : 2 const&) _1_>(managedBuffer1, auVar13._0_8_,
                                                                                 auVar13._8_8_);
                uVar2 = 2;
            } else {
                uVar2 = 3;
            }
            ((BufferPoolStats*)"PixelUnpackBuffer")
                ->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
        } else {
            uVar2 = 0;
        LAB_100c12106:
            ((BufferPoolStats*)"PixelUnpackBuffer")
                ->RecordBufferCreation((char*)(unsigned long)local_34, 1, uVar2, in_R8D);
            pvVar10 = arg3;
        }
        uVar2 = arg1;
        pBVar11 = (BufferInterface*)this;
        if ((pvVar10 == nullptr) || (local_34 == arg1)) {
            uVar3 = ((PixelUnpackBuffer*)(BufferInterface*)this)->Create(local_34, arg2 | 43, pvVar10);
        } else {
            uVar3 = ((PixelUnpackBuffer*)(BufferInterface*)this)->Create(local_34, arg2 | 43, nullptr);
            pBVar11->Update(0, uVar2, pvVar10, 0);
        }
        uVar9 = (unsigned long)uVar3;
        pBVar11->m_sizeInBytes = uVar2;
    LAB_100c121cb:
        return uVar9 & 4294967295;
    }

    // 0x100c31330
    PooledBuffer<IndexBuffer>::PooledBuffer(PooledBuffer<IndexBuffer>&& pooledBuffer) : IndexBuffer(pooledBuffer) {}

    // 0x100c397a0
    void PooledBuffer<IndexBuffer>::Create(unsigned int, unsigned int, void const*)::{
        lambda(internal::ManagedBuffer<IndexBuffer> const&) #1
    }
    ::operator()(const internal::ManagedBuffer<IndexBuffer>& unsigned int) const {
        lambda(internal::ManagedBuffer<IndexBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<IndexBuffer> const___1_* this,
                 ManagedBuffer<IndexBuffer>* managedBuffer) {
        internal::ManagedBuffer<IndexBuffer>::IsReadyToReuse();
        return;
    }

    // 0x100c397b0
    auto PooledBuffer<IndexBuffer>::Create(unsigned int, unsigned int, void const*)::{
        lambda(auto : 1 const&, auto : 2 const&) #1
    }
    ::operator()<internal::ManagedBuffer<IndexBuffer>, internal::ManagedBuffer<IndexBuffer>>(
        const internal::ManagedBuffer<IndexBuffer>& arg1, const internal::ManagedBuffer<IndexBuffer>& arg2) const {
        lambda(auto : 1 const&, auto : 2 const&) #1
    }
    ::operator()(_lambda_auto_1_const__auto_2_const___1_* this, ManagedBuffer<IndexBuffer>* managedBuffer1,
                 ManagedBuffer<IndexBuffer>* managedBuffer2) {
        return *(unsigned int*)(managedBuffer1 + 88) < *(unsigned int*)(managedBuffer2 + 88);
    }

    // 0x100c3a680
    PooledBuffer<IndexBuffer>* PooledBuffer<IndexBuffer>::operator=(PooledBuffer<IndexBuffer>&& pooledBuffer) {
        *this = pooledBuffer;
        return this;
    }

    // 0x100c3a980
    void PooledBuffer<VertexBuffer>::Create(unsigned int, unsigned int, void const*)::{
        lambda(internal::ManagedBuffer<VertexBuffer> const&) #1
    }
    ::operator()(const internal::ManagedBuffer<VertexBuffer>& managedBuffer) const {
        internal::ManagedBuffer<VertexBuffer>::IsReadyToReuse();
    }

    // 0x100c3a990
    auto PooledBuffer<VertexBuffer>::Create(unsigned int, unsigned int, void const*)::{
        lambda(auto : 1 const&, auto : 2 const&) #1
    }
    ::operator()<internal::ManagedBuffer<VertexBuffer>, internal::ManagedBuffer<VertexBuffer>>(
        const internal::ManagedBuffer<VertexBuffer>& arg1, const internal::ManagedBuffer<VertexBuffer>& arg2) const {
        lambda(auto : 1 const&, auto : 2 const&) #1
    }
    ::operator()(_lambda_auto_1_const__auto_2_const___1_* this, ManagedBuffer<ShaderConstBuffer>* managedBuffer1,
                 ManagedBuffer<ShaderConstBuffer>* managedBuffer2) {
        return *(unsigned int*)(managedBuffer1 + 80) < *(unsigned int*)(managedBuffer2 + 80);
    }

    // 0x100c3b280
    PooledBuffer<ShaderConstBuffer>* PooledBuffer<VertexBuffer>::operator=(PooledBuffer<VertexBuffer>&& pooledBuffer) {
        *this = pooledBuffer;
        return this;
    }

    // 0x100c3b570
    void PooledBuffer<ShaderConstBuffer>::Create(unsigned int, unsigned int, void const*)::{
        lambda(internal::ManagedBuffer<ShaderConstBuffer> const&) #1
    }
    ::operator()(const internal::ManagedBuffer<ShaderConstBuffer>& unsigned int) const {
        lambda(internal::ManagedBuffer<ShaderConstBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<ShaderConstBuffer> const___1_* this,
                 ManagedBuffer<ShaderConstBuffer>* managedBuffer) {
        internal::ManagedBuffer<ShaderConstBuffer>::IsReadyToReuse();
        return;
    }

    // 0x100c3be60
    void PooledBuffer<PixelUnpackBuffer>::Create(unsigned int, unsigned int, void const*)::{
        lambda(internal::ManagedBuffer<PixelUnpackBuffer> const&) #1
    }
    ::operator()(const internal::ManagedBuffer<PixelUnpackBuffer>& unsigned int) const {
        lambda(internal::ManagedBuffer<PixelUnpackBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<PixelUnpackBuffer> const___1_* this,
                 ManagedBuffer<PixelUnpackBuffer>* managedBuffer) {
        internal::ManagedBuffer<PixelUnpackBuffer>::IsReadyToReuse();
        return;
    }

} // namespace jag::render
