// libs/oldscape/jagex3/dash3d/Operation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class BatchMapBaseOperation : public TintOperation // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual BatchMapBaseOperation* ApplyFresh(const ResolvedModel& resolvedModel,
                                                  const OperationRecordEntry* operationRecordEntry) const;
        BatchMapBaseOperation(Operation::Type arg1);
    };

    class HillSkewOperation {
    public:
        // virtual methods in vtable order
        virtual auto Apply(const ResolvedModel& resolvedModel, const OperationRecordEntry* operationRecordEntry) const;
        virtual jag::math::AABB ApplyAABB(const jag::math::AABB& aabb) const;
        virtual bool IsEqual(const Operation& operation) const;
        bool CanApproximate(const ResolvedModel& resolvedModel) const;
        HillSkewOperation* CreateSkewModelMatrixApproximate() const;
        HillSkewOperation* SkewModelExact(const ResolvedModel& resolvedModel) const;
        HillSkewOperation(jag::math::Vector3T<int> vector3, int arg2, int arg3, bool arg4);

    private:
        Type field_8;
        void** field_12;
        int field_20;
        int field_24;
        int field_28;
        bool field_32;
        uint8_t _unknown_33[3];
    };

    class MirrorOperation {
    public:
        // virtual methods in vtable order
        virtual jag::math::AABB ApplyAABB(const jag::math::AABB& aabb) const;
        virtual bool IsEqual(const Operation& operation) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
                     geometryBatchInstance) const;
        MirrorOperation();
    };

    class Operation {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual bool CanAppend() const;
        virtual void Append(Operation&& arg1);
        virtual jag::math::AABB ApplyAABB(const jag::math::AABB& aabb) const;
        virtual bool IsEqual(const Operation& operation) const;
        Type GetType() const;
        auto CloneModel(const jag::graphics::Model& model, jag::graphics::ModelCopyType arg2) const;
        Operation(Type arg1);

    private:
        Type m_type;
        uint8_t _unknown_12[4];
    };

    class OperationBuffer {
    public:
        class OperationImpl;
        ~OperationBuffer();
        OperationBuffer(const OperationBuffer& lazyWave);
        OperationBuffer(OperationBuffer&& lazyWave);
        OperationBuffer* operator=(const OperationBuffer& operationBuffer);
        OperationBuffer* operator=(OperationBuffer&& operationBuffer);
        jag::math::AABB ResolveAABB() const;
        void AddOperation(shared_ptr<Operation>&& operation);
        void ClearCache() const;
        ResolvedModel* Resolve(const OperationBuffer* operationBuffer) const;
        bool ResolveAgainstPrevious(ResolvedModel& resolvedModel, unsigned long& arg2,
                                    const eastl::vector<OperationRecordEntry>& operationRecordEntrys) const;
        OperationBuffer();

    private:
        ref_counter_base* field_0;
        long field_8;
    };

    class OperationBuffer::OperationImpl {
    public:
        OperationImpl();
        ~OperationImpl();

    private:
        uint8_t _unknown_0[64];
        ResolvedModel field_64;
        AABB field_176;
        uint8_t _unknown_212[4];
    };

    class RecolourOperation {
    public:
        // virtual methods in vtable order
        virtual bool CanAppend() const;
        virtual void Append(Operation&& operation);
        virtual uint16_t IsEqual(const Operation& operation) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
                     geometryBatchInstance) const;
        RecolourOperation(unsigned short arg1, unsigned short arg2);
        ~RecolourOperation();

    private:
        uint8_t _unknown_8[4];
        unsigned short field_12;
        unsigned short field_14;
        uint8_t _unknown_16[8];
    };

    class ResolvedModel {
    public:
        ~ResolvedModel();
        ResolvedModel* GetModel() const;
        uint8_t* GetAnimationState() const;
        auto GetLocalTransform() const;
        ResolvedModel(const shared_ptr<jag::graphics::Model>& model, const shared_ptr<PoseStateRSeven>& poseStateRSeven,
                      jag::math::Matrix44T<float> matrix44);
        ResolvedModel();
        ResolvedModel* operator=(ResolvedModel&& resolvedModel);
        ResolvedModel* operator=(const ResolvedModel& resolvedModel);
        uint8_t* TryGetUploadableModel() const;
        ResolvedModel(const shared_ptr<jag::graphics::Model>& model1, const shared_ptr<jag::graphics::Model>& model2,
                      const shared_ptr<PoseStateRSeven>& poseStateRSeven, jag::math::Matrix44T<float> matrix44);
        auto GetWorldTransform(int arg1, int arg2, int arg3, int arg4) const;
        uint8_t* GetUploadableModel() const;
        ResolvedModel(const ResolvedModel& resolvedModel);
        ResolvedModel(ResolvedModel&& resolvedModel);

    private:
        uint8_t _unknown_0[16];
        shared_ptr field_16;
        uint8_t m_animationState[8];
        uint8_t _unknown_40[8];
        ReturnValue field_48;
        ReturnValue field_56;
        ReturnValue field_64;
        ReturnValue field_72;
        ReturnValue field_80;
        ReturnValue field_88;
        ReturnValue field_96;
        ReturnValue field_104;
    };

    class RetextureOperation {
    public:
        // virtual methods in vtable order
        virtual uint16_t IsEqual(const Operation& operation) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
                     geometryBatchInstance) const;
        RetextureOperation(unsigned short arg1, unsigned short arg2);

    private:
        uint8_t _unknown_8[4];
        unsigned short field_12;
        unsigned short field_14;
        uint8_t _unknown_16[6];
    };

    class SetModelOperation {
    public:
        // virtual methods in vtable order
        virtual auto Apply(const ResolvedModel& resolvedModel, const OperationRecordEntry* operationRecordEntry) const;
        virtual SetModelOperation* ApplyAABB(const jag::math::AABB& aabb) const;
        virtual bool IsEqual(const Operation& operation) const;
        SetModelOperation(shared_ptr<jag::graphics::Model>&& model);
        ~SetModelOperation();

    private:
        Type field_8;
        uint8_t _unknown_12[4];
        shared_ptr field_16;
    };

    class TransformOperation {
    public:
        // virtual methods in vtable order
        virtual auto Apply(const ResolvedModel& resolvedModel, const OperationRecordEntry* operationRecordEntry) const;
        virtual jag::math::AABB ApplyAABB(const jag::math::AABB& aabb) const;
        virtual bool IsEqual(const Operation& operation) const;
        TransformOperation(jag::math::Matrix44T<float> matrix44);

    private:
        Type field_8;
        uint8_t _unknown_12[4];
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
    };

    // 0x1002f1570
    OperationBuffer* OperationBuffer::operator=(const OperationBuffer& operationBuffer) {
        *this = operationBuffer;
        return this;
    }

    // 0x1002f1650
    void operator==(const EntityHighlight& entityHighlight1, const EntityHighlight& entityHighlight2) {
        unsigned short uVar1;
        unsigned short uVar2;

        if (((entityHighlight1.m_colour == entityHighlight2.m_colour) &&
             (uVar1._0_1_ = entityHighlight2.field_8, uVar1._1_1_ = entityHighlight2.field_9,
              uVar2._0_1_ = entityHighlight1.field_8, uVar2._1_1_ = entityHighlight1.field_9,
              ((uVar1 ^ uVar2) & 319) == 0)) &&
            (entityHighlight1.field_2 == entityHighlight2.field_2)) {
            return entityHighlight1.field_4 == entityHighlight2.field_4;
        }
        return 0;
    }

    // 0x100369750
    ResolvedModel::ResolvedModel(const shared_ptr<jag::graphics::Model>& model,
                                 const shared_ptr<PoseStateRSeven>& poseStateRSeven,
                                 jag::math::Matrix44T<float> matrix44) {
        Matrix44T<float>* in_R8;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        ResolvedModel(model, local_38, poseStateRSeven, in_R8);
    }

    // 0x100369e20
    ResolvedModel::ResolvedModel() {
        Matrix44T<float>* in_R8;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_20;
        ResolvedModel(local_40, local_30, local_20, in_R8);
    }

    // 0x100369ee0
    ResolvedModel* ResolvedModel::operator=(ResolvedModel&& resolvedModel) {
        *this = resolvedModel;
        *field_16 = resolvedModel.field_16;
        *m_animationState = resolvedModel.m_animationState;
        *field_48 = resolvedModel.field_48;
        return this;
    }

    // 0x10036a570
    ResolvedModel* ResolvedModel::operator=(const ResolvedModel& resolvedModel) {
        *this = resolvedModel;
        *field_16 = resolvedModel.field_16;
        *m_animationState = resolvedModel.m_animationState;
        *field_48 = resolvedModel.field_48;
        return this;
    }

    // 0x10036a650
    ResolvedModel::ResolvedModel(const shared_ptr<jag::graphics::Model>& model1,
                                 const shared_ptr<jag::graphics::Model>& model2,
                                 const shared_ptr<PoseStateRSeven>& poseStateRSeven,
                                 jag::math::Matrix44T<float> matrix44) {
        Matrix44T<float>* in_R9;

        ResolvedModel(model2, poseStateRSeven, *matrix44, in_R9);
    }

    // 0x100370cd0
    jag::math::AABB Operation::ApplyAABB(const jag::math::AABB& aabb) const {
        return jag::math::AABB(aabb);
    }

    // 0x100372f20
    Operation::Operation(Operation::Type arg1) : m_type(arg1) {}

} // namespace jag::oldscape::dash3d
