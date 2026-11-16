// libs/oldscape/jagex3/dash3d/Operation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class BatchMapBaseOperation : public TintOperation // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual BatchMapBaseOperation* ApplyFresh(ResolvedModel const&, OperationRecordEntry const*) const;
        BatchMapBaseOperation(Operation::Type);

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    class HillSkewOperation {
    public:
        // virtual methods in vtable order
        virtual HillSkewOperation* Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        virtual AABB* ApplyAABB(jag::math::AABB const&) const;
        virtual IsEqual(Operation const&) const;
        CanApproximate(ResolvedModel const&) const;
        Matrix44T<float>* CreateSkewModelMatrixApproximate() const;
        ResolvedModel* SkewModelExact(ResolvedModel const&) const;
        HillSkewOperation(jag::math::Vector3T<int>, int, int, bool);

        // data members, from how the methods use this: 36 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        int field_12;        // offset 12
        char _unknown_16[4];
        int field_20;        // offset 20
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        undefined1 field_32; // offset 32
        char _unknown_33[3];
    };

    class MirrorOperation {
    public:
        // virtual methods in vtable order
        virtual AABB* ApplyAABB(jag::math::AABB const&) const;
        virtual bool IsEqual(Operation const&) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const;
        MirrorOperation();

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    class Operation {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual CanAppend() const;
        virtual Append(Operation&&);
        virtual AABB* ApplyAABB(jag::math::AABB const&) const;
        virtual IsEqual(Operation const&) const;
        GetType() const;
        CloneModel(jag::graphics::Model const&, jag::graphics::ModelCopyType) const;
        Operation(Type);

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
    };

    class OperationBuffer {
    public:
        class OperationImpl;
        ~OperationBuffer();
        OperationBuffer(OperationBuffer const&);
        OperationBuffer(OperationBuffer&&);
        OperationBuffer* operator=(OperationBuffer const&);
        OperationBuffer* operator=(OperationBuffer&&);
        AABB* ResolveAABB() const;
        void AddOperation(shared_ptr<Operation>&&);
        void ClearCache() const;
        ResolvedModel* Resolve(OperationBuffer const*) const;
        bool ResolveAgainstPrevious(ResolvedModel&, unsigned long&,
                                    eastl::vector<OperationRecordEntry, eastl::allocator> const&) const;
        OperationBuffer();

        // data members, from how the methods use this: 16 bytes
        ref_counter_base* field_0; // offset 0
        long field_8;              // offset 8
    };

    class OperationBuffer::OperationImpl {
    public:
        OperationImpl();
        ~OperationImpl();

        // data members, from how the methods use this: 216 bytes
        char _unknown_0[64];
        ResolvedModel field_64; // offset 64
        AABB field_176;         // offset 176
        char _unknown_212[4];
    };

    class RecolourOperation {
    public:
        // virtual methods in vtable order
        virtual CanAppend() const;
        virtual void Append(Operation&&);
        virtual IsEqual(Operation const&) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const;
        RecolourOperation(unsigned short, unsigned short);
        ~RecolourOperation();

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[4];
        ushort field_12; // offset 12
        ushort field_14; // offset 14
        char _unknown_16[8];
    };

    class ResolvedModel {
    public:
        ~ResolvedModel();
        ResolvedModel* GetModel() const;
        GetAnimationState() const;
        GetLocalTransform() const;
        ResolvedModel(shared_ptr<jag::graphics::Model> const&, shared_ptr<PoseStateRSeven> const&,
                      jag::math::Matrix44T<float>);
        ResolvedModel();
        ResolvedModel* operator=(ResolvedModel&&);
        ResolvedModel* operator=(ResolvedModel const&);
        TryGetUploadableModel() const;
        ResolvedModel(shared_ptr<jag::graphics::Model> const&, shared_ptr<jag::graphics::Model> const&,
                      shared_ptr<PoseStateRSeven> const&, jag::math::Matrix44T<float>);
        GetWorldTransform(int, int, int, int) const;
        GetUploadableModel() const;
        ResolvedModel(ResolvedModel const&);
        ResolvedModel(ResolvedModel&&);

        // data members, from how the methods use this: 112 bytes
        undefined8 field_0;          // offset 0
        undefined8 field_8;          // offset 8
        undefined8 field_16;         // offset 16
        undefined8 field_24;         // offset 24
        undefined8 m_animationState; // offset 32
        undefined8 field_40;         // offset 40
        undefined8 field_48;         // offset 48
        undefined8 field_56;         // offset 56
        undefined8 field_64;         // offset 64
        undefined8 field_72;         // offset 72
        undefined8 field_80;         // offset 80
        undefined8 field_88;         // offset 88
        undefined8 field_96;         // offset 96
        undefined8 field_104;        // offset 104
    };

    class RetextureOperation {
    public:
        // virtual methods in vtable order
        virtual IsEqual(Operation const&) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const;
        RetextureOperation(unsigned short, unsigned short);

        // data members, from how the methods use this: 22 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[4];
        ushort field_12; // offset 12
        ushort field_14; // offset 14
        char _unknown_16[6];
    };

    class SetModelOperation {
    public:
        // virtual methods in vtable order
        virtual Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        virtual SetModelOperation* ApplyAABB(jag::math::AABB const&) const;
        virtual bool IsEqual(Operation const&) const;
        SetModelOperation(shared_ptr<jag::graphics::Model>&&);
        ~SetModelOperation();

        // data members, from how the methods use this: 32 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
    };

    class TransformOperation {
    public:
        // virtual methods in vtable order
        virtual TransformOperation* Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        virtual ApplyAABB(jag::math::AABB const&) const;
        virtual bool IsEqual(Operation const&) const;
        TransformOperation(jag::math::Matrix44T<float>);

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        float field_8;       // offset 8
        char _unknown_12[4];
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        float field_24;      // offset 24
        char _unknown_28[4];
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
        undefined8 field_72; // offset 72
    };

    // 0x1002f1570, 32 bytes, inline, placed by debug map only (low confidence)
    // OperationBuffer::operator=(OperationBuffer const&)
    /* OperationBuffer::TEMPNAMEPLACEHOLDERVALUE(OperationBuffer
   const&) */

    OperationBuffer* OperationBuffer::operator=(OperationBuffer* param_1) {
        shared_ptr<OperationBuffer::OperationImpl_const>::operator=(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this, (shared_ptr*)param_1);
        return this;
    }

    // 0x1002f1650, 64 bytes, inline, placed by debug map only (low confidence)
    // operator==(EntityHighlight const&, EntityHighlight const&)
    /* TEMPNAMEPLACEHOLDERVALUE(EntityHighlight const&,
   EntityHighlight const&) */

    undefined2 operator==(EntityHighlight* param_1, EntityHighlight* param_2) {
        ushort uVar1;
        ushort uVar2;

        if (((param_1->field_0 == param_2->field_0) &&
             (uVar1._0_1_ = param_2->field_8, uVar1._1_1_ = param_2->field_9, uVar2._0_1_ = param_1->field_8,
              uVar2._1_1_ = param_1->field_9, ((uVar1 ^ uVar2) & 319) == 0)) &&
            (param_1->field_2 == param_2->field_2)) {
            return CONCAT11((char)((ushort)param_1->field_2 >> 8), param_1->field_4 == param_2->field_4);
        }
        return 0;
    }

    // 0x100369750, 144 bytes, complete-object constructor, inline, placed by class header (inline)
    // ResolvedModel::ResolvedModel(shared_ptr<jag::graphics::Model> const&, shared_ptr<PoseStateRSeven> const&, jag::math::Matrix44T<float>)
    void ResolvedModel::ResolvedModel(shared_ptr* param_1, shared_ptr* param_2, Matrix44T param_3) {
        shared_ptr local_38;

        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        ResolvedModel(this, param_1, &local_38, param_2, param_3);
        local_38.~shared_ptr();
    }

    // 0x100369e20, 192 bytes, complete-object constructor, inline, placed by class header (inline)
    // ResolvedModel::ResolvedModel()
    void ResolvedModel::ResolvedModel() {
        shared_ptr local_40;
        shared_ptr local_30;
        shared_ptr local_20;

        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        new (&local_20) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        ResolvedModel(this, &local_40, &local_30, &local_20, *(Matrix44T*)PTR_IDENTITY_100ee6730);
        local_20.~shared_ptr();
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100369ee0, 80 bytes, inline, placed by class header (inline)
    // ResolvedModel::operator=(ResolvedModel&&)
    /* ResolvedModel::TEMPNAMEPLACEHOLDERVALUE(ResolvedModel&&)
    */

    ResolvedModel* ResolvedModel::operator=(ResolvedModel* param_1) {
        shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)this, (shared_ptr*)param_1);
        shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)&field_16,
                                                    (shared_ptr*)&param_1->field_16);
        shared_ptr<PoseStateRSeven>::operator=((shared_ptr<PoseStateRSeven>*)&m_animationState,
                                               (shared_ptr*)&param_1->m_animationState);
        jag::math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_48, (Matrix44T*)&param_1->field_48);
        return this;
    }

    // 0x10036a570, 80 bytes, inline, placed by class header (inline)
    // ResolvedModel::operator=(ResolvedModel const&)
    /* ResolvedModel::TEMPNAMEPLACEHOLDERVALUE(ResolvedModel
   const&) */

    ResolvedModel* ResolvedModel::operator=(ResolvedModel* param_1) {
        shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)this, (shared_ptr*)param_1);
        shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)&field_16,
                                                    (shared_ptr*)&param_1->field_16);
        shared_ptr<PoseStateRSeven>::operator=((shared_ptr<PoseStateRSeven>*)&m_animationState,
                                               (shared_ptr*)&param_1->m_animationState);
        jag::math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_48, (Matrix44T*)&param_1->field_48);
        return this;
    }

    // 0x10036a650, 64 bytes, complete-object constructor, inline, placed by class header (inline)
    // ResolvedModel::ResolvedModel(shared_ptr<jag::graphics::Model> const&, shared_ptr<jag::graphics::Model> const&, shared_ptr<PoseStateRSeven> const&, jag::math::Matrix44T<float>)
    void ResolvedModel::ResolvedModel(shared_ptr* param_1, shared_ptr* param_2, shared_ptr* param_3,
                                      Matrix44T param_4) {
        ResolvedModel(this, param_1, param_2, param_3, param_4);
    }

    // 0x10036a9e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ResolvedModel::ResolvedModel(ResolvedModel const&): jumps straight to the base-object constructor

    // 0x100370cd0, 32 bytes, inline, placed by class name
    // Operation::ApplyAABB(jag::math::AABB const&) const
    AABB* Operation::ApplyAABB(AABB* param_1) {
        AABB* in_RDX;

        jag::math::AABB::AABB(param_1, in_RDX);
        return param_1;
    }

    // 0x100372f20, 32 bytes, base-object constructor, inline, placed by class name
    // Operation::Operation(Operation::Type)
    void Operation::Operation(undefined4 param_2) {
        field_0 = &PTR____cxa_pure_virtual_100efc130;
        field_8 = param_2;
    }

} // namespace jag::oldscape::dash3d
