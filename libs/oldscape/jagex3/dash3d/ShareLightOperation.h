// libs/oldscape/jagex3/dash3d/ShareLightOperation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class ShareLightBuffer {
    public:
        IsPrepared() const;
        void Prepare();
        void AddRequest(OperationBuffer const&, ShareLightRequest);
        ShareLightBuffer* GetCache(OperationBuffer const&);
        void Flush(OperationBuffer&);
        ShareLightBuffer(ShareLightBuffer const&);
        ~ShareLightBuffer();
        ShareLightBuffer();

        // data members, from how the methods use this: 49 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[32];
        undefined1 m_prepared; // offset 48
    };

    class ShareLightCache {
    public:
        GetPointNormals() const;
        GetUniquePoints() const;
        GetVertexToPointMap() const;
        GetEditableModel() const;
        void Resolve(ShareLightCache const*);
        ResolveAndTransformModel(OperationBuffer const*);
        void GeneratePoints(jag::graphics::Model const&);
        ShareLightCache(OperationBuffer const&);
        ~ShareLightCache();

        // data members, from how the methods use this: 153 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[136];
        undefined1 field_152; // offset 152
    };

    class ShareLightNormalSum {
    public:
        ShareLightNormalSum(jag::math::Vector3T<int>, unsigned short, unsigned short);

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        undefined2 field_12; // offset 12
        undefined2 field_14; // offset 14
    };

    class ShareLightOperation {
    public:
        // virtual methods in vtable order
        virtual ResolvedModel* Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        virtual bool IsEqual(Operation const&) const;
        void InitializeNormalSums(eastl::vector<ShareLightNormalSum, eastl::allocator>&) const;
        void SumNormalsFromRequest(ShareLightRequest const&, eastl::vector<ShareLightNormalSum, eastl::allocator>&,
                                   unsigned long const&) const;
        void DegenerateFacesFromIteration(shared_ptr<jag::graphics::Model>&,
                                          eastl::vector<ShareLightNormalSum, eastl::allocator>&,
                                          unsigned long const&) const;
        void ApplyAveragedNormals(shared_ptr<jag::graphics::Model>&,
                                  eastl::vector<ShareLightNormalSum, eastl::allocator>&) const;
        void DegenerateFaceFromIteration(std::array<unsigned short*, 3ul>&, unsigned long const&,
                                         eastl::vector<ShareLightNormalSum, eastl::allocator>&,
                                         unsigned long const&) const;
        ShareLightOperation(shared_ptr<ShareLightCache> const&,
                            eastl::vector<ShareLightRequest, eastl::allocator> const&);
        ~ShareLightOperation();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
        char _unknown_32[8];
    };

    class ShareLightPointRSeven {
    public:
        ShareLightPointRSeven(jag::graphics::GeometryBatch const&, unsigned long);

        // data members, from how the methods use this: 20 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[8];
    };

    // 0x1002f4440, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShareLightNormalSum::ShareLightNormalSum(jag::math::Vector3T<int>, unsigned short, unsigned short): jumps straight to the base-object constructor

    // 0x1002f4570, 48 bytes, placed by debug map only (low confidence)
    // ShareLightBuffer::AddRequest(OperationBuffer const&, ShareLightRequest)
    void ShareLightBuffer::AddRequest(OperationBuffer* param_1, ShareLightRequest param_2) {
        ShareLightRequest* in_RDX;

        GetCache(this, param_1);
        (&field_16, in_RDX)->push_back();
    }

    // 0x1002f45a0, 112 bytes, placed by debug map only (low confidence)
    // ShareLightBuffer::GetCache(OperationBuffer const&)
    ShareLightBuffer* ShareLightBuffer::GetCache(OperationBuffer* param_1) {
        shared_ptr local_30;

        if (!operator_cast_to_bool()) {
            make_shared<ShareLightCache, OperationBuffer_const&>((jag*)&local_30, param_1);
            shared_ptr<ShareLightCache>::operator=((shared_ptr<ShareLightCache>*)this, &local_30);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x1002f4740, 272 bytes, placed by debug map only (low confidence)
    // ShareLightBuffer::Flush(OperationBuffer&)
    void ShareLightBuffer::Flush(OperationBuffer* param_1) {
        shared_ptr local_48;
        OperationBuffer local_38;

        if (operator_cast_to_bool()) {
            new (&local_38) OperationBuffer();
            OperationBuffer::operator=(param_1, &local_38);
            local_38.~LRUHashCacheWrapper();
            make_shared<ShareLightOperation, shared_ptr<ShareLightCache>&,
                        eastl::vector<ShareLightRequest, eastl::allocator>&>((jag*)&local_48, (shared_ptr*)this,
                                                                             (vector*)&field_16);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)&local_38, &local_48);
            param_1->AddOperation((shared_ptr*)&local_38);
            local_38.~shared_ptr();
            local_48.~shared_ptr();
            new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<ShareLightCache>::operator=((shared_ptr<ShareLightCache>*)this, (shared_ptr*)&local_38);
            local_38.~shared_ptr();
            (&field_16)->clear();
        }
    }

    // 0x1002f4850, 32 bytes, inline, placed by debug map only (low confidence)
    // OperationBuffer::operator=(OperationBuffer&&)
    /* OperationBuffer::TEMPNAMEPLACEHOLDERVALUE(OperationBuffer&&)
    */

    OperationBuffer* OperationBuffer::operator=(OperationBuffer* param_1) {
        shared_ptr<OperationBuffer::OperationImpl_const>::operator=(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this, (shared_ptr*)param_1);
        return this;
    }

    // 0x100326240, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ShareLightNormalSum::ShareLightNormalSum(jag::math::Vector3T<int>, unsigned short, unsigned short)
    void ShareLightNormalSum::ShareLightNormalSum(undefined8 param_2, undefined4 param_3, undefined2 param_4,
                                                  undefined2 param_5) {
        field_0 = param_2;
        field_8 = param_3;
        field_12 = param_4;
        field_14 = param_5;
    }

    // 0x10032f420, 16 bytes, complete-object constructor, inline, placed by class name
    // ShareLightOperation::ShareLightOperation(shared_ptr<ShareLightCache> const&, eastl::vector<ShareLightRequest, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x10032f430, 160 bytes, base-object constructor, inline, placed by class name
    // ShareLightOperation::ShareLightOperation(shared_ptr<ShareLightCache> const&, eastl::vector<ShareLightRequest, eastl::allocator> const&)
    void ShareLightOperation::ShareLightOperation(shared_ptr* param_1, vector* param_2) {
        new (this) Operation(10);
        field_0 = &PTR_Apply_100efb050;
        new (field_16, param_1) shared_ptr<Decor>();
        new (&field_32, param_2) eastl::vector<ShareLightRequest, eastl::allocator>();
        if (!field_16->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexSource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.h",
                      220, "Vertex source may not be null.");
        }
    }

    // 0x10032f570, 16 bytes, complete-object destructor, inline, placed by class name
    // ShareLightOperation::~ShareLightOperation(): jumps straight to the base-object destructor

    // 0x10032f580, 48 bytes, base-object destructor, inline, placed by class name
    // ShareLightOperation::~ShareLightOperation()
    void ShareLightOperation::~ShareLightOperation() {
        field_0 = &PTR_Apply_100efb050;
        (&field_32)->~vector();
        field_16->~shared_ptr();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1002f4660, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ShareLightCache>::type make_shared<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer const&>(oldscape::dash3d::OperationBuffer const&)
    jag* jag::make_shared<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer_const&>(
        OperationBuffer* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ShareLightCache* local_30[2];

        pvVar1 = (void*)aligned_alloc(192, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer_const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ShareLightCache>, int,
                                   oldscape::dash3d::ShareLightCache*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002f4870, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ShareLightOperation>::type make_shared<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&, eastl::vector<oldscape::dash3d::ShareLightRequest, eastl::allocator>&>(shared_ptr<oldscape::dash3d::ShareLightCache>&, eastl::vector<oldscape::dash3d::ShareLightRequest, eastl::allocator>&)
    jag* jag::make_shared<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&,
                          eastl::vector<oldscape::dash3d::ShareLightRequest, eastl::allocator>&>(shared_ptr* param_1,
                                                                                                 vector* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ShareLightOperation* local_38[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&,
                              eastl::vector<oldscape::dash3d::ShareLightRequest, eastl::allocator>&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ShareLightOperation>, int,
                                   oldscape::dash3d::ShareLightOperation*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002f4b80, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeJoint>::type make_shared<oldscape::graphics::animation::OldscapeJoint, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, bool const&>(int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, bool const&)
    jag* jag::make_shared<oldscape::graphics::animation::OldscapeJoint, int&,
                          oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, bool const&>(int* param_1,
                                                                                                   PacketJ* param_2,
                                                                                                   bool* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        OldscapeJoint* local_40[2];

        pvVar1 = (void*)aligned_alloc(480, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<oldscape::graphics::animation::OldscapeJoint, int&,
                                        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, bool const&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>, int,
                                   oldscape::graphics::animation::OldscapeJoint*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
