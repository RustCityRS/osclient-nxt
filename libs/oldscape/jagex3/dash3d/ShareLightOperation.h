// libs/oldscape/jagex3/dash3d/ShareLightOperation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class ShareLightBuffer {
    public:
        bool IsPrepared() const;
        void Prepare();
        void AddRequest(const OperationBuffer& operationBuffer, ShareLightRequest shareLightRequest);
        auto GetCache(const OperationBuffer& operationBuffer);
        void Flush(OperationBuffer& operationBuffer);
        ShareLightBuffer(const ShareLightBuffer& shareLightBuffer);
        ~ShareLightBuffer();
        ShareLightBuffer();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[32];
        uint8_t m_prepared;
    };

    class ShareLightCache {
    public:
        uint8_t* GetPointNormals() const;
        uint8_t* GetUniquePoints() const;
        vector<unsigned int>* GetVertexToPointMap() const;
        uint8_t* GetEditableModel() const;
        void Resolve(const ShareLightCache* shareLightCache);
        auto ResolveAndTransformModel(const OperationBuffer* operationBuffer);
        void GeneratePoints(const jag::graphics::Model& model);
        ShareLightCache(const OperationBuffer& operationBuffer);
        ~ShareLightCache();

    private:
        uint8_t _unknown_0[152];
        uint8_t field_152;
    };

    class ShareLightNormalSum {
    public:
        ShareLightNormalSum(jag::math::Vector3T<int> vector3, unsigned short arg2, unsigned short arg3);

    private:
        void** field_0;
        int field_8;
        unsigned short field_12;
        unsigned short field_14;
    };

    class ShareLightOperation {
    public:
        // virtual methods in vtable order
        virtual ResolvedModel* Apply(const ResolvedModel& resolvedModel,
                                     const OperationRecordEntry* operationRecordEntry) const;
        virtual bool IsEqual(const Operation& operation) const;
        void InitializeNormalSums(eastl::vector<ShareLightNormalSum>& shareLightNormalSums) const;
        void SumNormalsFromRequest(const ShareLightRequest& shareLightRequest,
                                   eastl::vector<ShareLightNormalSum>& shareLightNormalSums,
                                   const unsigned long& arg3) const;
        void DegenerateFacesFromIteration(shared_ptr<jag::graphics::Model>& model,
                                          eastl::vector<ShareLightNormalSum>& shareLightNormalSums,
                                          const unsigned long& arg3) const;
        void ApplyAveragedNormals(shared_ptr<jag::graphics::Model>& model,
                                  eastl::vector<ShareLightNormalSum>& shareLightNormalSums) const;
        void DegenerateFaceFromIteration(std::array<unsigned short*, 3ul>& arg1, const unsigned long& arg2,
                                         eastl::vector<ShareLightNormalSum>& shareLightNormalSums,
                                         const unsigned long& arg4) const;
        ShareLightOperation(const shared_ptr<ShareLightCache>& shareLightCache,
                            const eastl::vector<ShareLightRequest>& shareLightRequests);
        ~ShareLightOperation();

    private:
        Type field_8;
        uint8_t _unknown_12[4];
        shared_ptr field_16;
        uint8_t _unknown_32[8];
    };

    class ShareLightPointRSeven {
    public:
        ShareLightPointRSeven(const jag::graphics::GeometryBatch& geometryBatch, unsigned long arg2);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint8_t _unknown_12[8];
    };

    // 0x1002f4570
    void ShareLightBuffer::AddRequest(const OperationBuffer& operationBuffer, ShareLightRequest shareLightRequest) {
        GetCache((ReturnValue*)this, operationBuffer);
        field_16.push_back(*shareLightRequest);
    }

    // 0x1002f45a0
    auto ShareLightBuffer::GetCache(const OperationBuffer& operationBuffer) {
        auto result;
        ReturnValue local_30;

        if (result.operator_cast_to_bool() == '\0') {
            make_shared<ShareLightCache, OperationBuffer const&>(&local_30, operationBuffer);
            result = local_30;
        }
        return result;
    }

    // 0x1002f4740
    void ShareLightBuffer::Flush(OperationBuffer& operationBuffer) {
        ReturnValue local_48;
        OperationBuffer local_38;

        if (operator_cast_to_bool() != '\0') {
            local_38 = OperationBuffer();
            operationBuffer = local_38;
            make_shared<ShareLightOperation, shared_ptr<ShareLightCache>&, eastl::vector<ShareLightRequest>&>(
                &local_48, (shared_ptr<ShareLightCache>*)this, (vector<ShareLightRequest>*)&field_16);
            local_38.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
            operationBuffer.AddOperation(local_38);
            local_38 = shared_ptr();
            *this = local_38;
            field_16.clear();
        }
    }

    // 0x1002f4850
    OperationBuffer* OperationBuffer::operator=(OperationBuffer&& operationBuffer) {
        *this = operationBuffer;
        return this;
    }

    // 0x100326240
    ShareLightNormalSum::ShareLightNormalSum(jag::math::Vector3T<int> vector3, unsigned short arg2,
                                             unsigned short arg3) {
        field_8 = (int)vector3;
        field_12 = arg2;
        field_14 = arg3;
    }

    // 0x10032f430
    ShareLightOperation::ShareLightOperation(const shared_ptr<ShareLightCache>& shareLightCache,
                                             const eastl::vector<ShareLightRequest>& shareLightRequests)
        : Operation(10), field_16(shareLightCache), field_32(shareLightRequests) {
        if (field_16->operator_cast_to_bool() == '\0') {
            LogAssert("m_vertexSource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.h",
                      220, "Vertex source may not be null.");
        }
    }

    // 0x10032f580
    ShareLightOperation::~ShareLightOperation() {
        field_32.~vector();
        field_16->~shared_ptr();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1002f4660
    shared_ptr_if_not_array<oldscape::dash3d::ShareLightCache>::type
    make_shared<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer const&>(
        const oldscape::dash3d::OperationBuffer& operationBuffer) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ShareLightCache* local_30[2];

        auto arg1 = aligned_alloc(192, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ShareLightCache>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer const&>(
                (void*)((long)arg1 + 32), operationBuffer);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ShareLightCache>, int,
                              oldscape::dash3d::ShareLightCache*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002f4870
    shared_ptr_if_not_array<oldscape::dash3d::ShareLightOperation>::type
    make_shared<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&,
                eastl::vector<oldscape::dash3d::ShareLightRequest>&>(
        shared_ptr<oldscape::dash3d::ShareLightCache>& shareLightCache,
        eastl::vector<oldscape::dash3d::ShareLightRequest>& shareLightRequests) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ShareLightOperation* local_38[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ShareLightOperation>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&,
                              eastl::vector<oldscape::dash3d::ShareLightRequest>&>((void*)((long)arg1 + 32),
                                                                                   shareLightCache, shareLightRequests);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ShareLightOperation>, int,
                              oldscape::dash3d::ShareLightOperation*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002f4b80
    shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeJoint>::type
    make_shared<oldscape::graphics::animation::OldscapeJoint, int&, oldscape::PacketJ<Array<unsigned char>>&,
                bool const&>(int& arg1, oldscape::PacketJ<Array<unsigned char>>& packetJ, const bool& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        OldscapeJoint* local_40[2];

        auto arg1_00 = aligned_alloc(480, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeJoint>::type result;
        } else {
            local_40[0] = placement_new<oldscape::graphics::animation::OldscapeJoint, int&,
                                        oldscape::PacketJ<Array<unsigned char>>&, bool const&>(
                (void*)((long)arg1_00 + 32), arg1, packetJ, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>, int,
                              oldscape::graphics::animation::OldscapeJoint*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
