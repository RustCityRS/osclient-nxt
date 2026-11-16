// libs/oldscape/jagex3/dash3d/MousePickingHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class ChainedPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual auto GetBoneTransform(unsigned long arg1) const;
        virtual auto GetJointTransform(unsigned long arg1) const;
        virtual float GetLabelTransparencyDelta(unsigned long arg1) const;
        virtual bool IsEqual(const PoseStateRSeven& poseStateRSeven) const;
        ChainedPoseStateRSeven(const shared_ptr<PoseStateRSeven>& poseStateRSeven1,
                               const shared_ptr<PoseStateRSeven>& poseStateRSeven2);
        ~ChainedPoseStateRSeven();

    private:
        Type field_8;
        uint8_t _unknown_12[4];
        shared_ptr field_16;
        shared_ptr field_32;
    };

    class MaskedDashPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(const PoseStateRSeven& poseStateRSeven) const;
        void InitializeFrameData();
        uint8_t* GetMask() const;
        bool GetInvertMask() const;
        MaskedDashPoseStateRSeven(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2,
                                  const ResolvedModel& resolvedModel, const Array<int>& arg4, bool arg5);
        ~MaskedDashPoseStateRSeven();

    private:
        uint8_t _unknown_8[8];
        shared_ptr field_16;
        int field_32;
        uint8_t _unknown_36[156];
        bool m_invertMask;
        uint8_t _unknown_193[7];
    };

    class MousePickingHelper {
    public:
        bool IsMouseIntersectingModelAABB<SoftwarePix3D>(ModelLitImpl& modelLitImpl, int arg2, int arg3, int arg4,
                                                         int arg5,
                                                         const ModelLitRenderer<SoftwarePix3D>& modelLitRenderer);
        unsigned long GetPackedTypeCodeLoc(int arg1, int arg2, int arg3, bool arg4, int arg5, LocLayer locLayer);
        void GetEntityIdFromTypecode(long long arg1);
        void AdjustAABBRadiiForPicking(int& arg1, int& arg2, bool arg3);
        void GetPickedEntityCount();
        bool IsPlayerTypecode(long long arg1);
        unsigned int GetEntityTypeFromTypecode(long long arg1);
        bool IsNpcTypecode(long long arg1);
        bool IsLocTypecode(long long arg1);
        bool IsObjTypecode(long long arg1);
        unsigned long IsActiveEntityTypecode(long long arg1);
        uint8_t GetEntityInactiveFromTypecode(long long arg1);
        void GetPickedEntityTypecode(int arg1);
        void GetPickedEntityX(int arg1);
        unsigned int GetEntityXFromTypecode(long long arg1);
        void GetPickedEntityZ(int arg1);
        unsigned int GetEntityZFromTypecode(long long arg1);
        void GetPickedEntityLevel(int arg1);
        unsigned int GetEntityLevelFromTypecode(long long arg1);
        void GetPickedEntityType(int arg1);
        void GetPickedEntityInactive(int arg1);
        void GetPickedEntityId(int arg1);
        void GetPickedLocLayer(int arg1);
        unsigned int GetLocLayerFromTypecode(long long arg1);
        unsigned long OverwriteEntityCoordInTypecode(long long arg1, int arg2, int arg3, int arg4);
        long GetPackedTypeCode(int arg1, int arg2, int arg3, int arg4, bool arg5, int arg6);
        void SetMouseCoords(int arg1, int arg2, bool arg3);
        void AddPickingEntity(long long arg1);
        void SortPickingEntities(game::CoordGrid coordGrid);
        void IsMousePickingEnabled();
        bool HasCheckedScreenCoordLastRender(int arg1, int arg2);
        void GetMouseScreenX();
        void GetMouseScreenY();
        void CheckCalculateMouseWorldVector(const Pix3D& pix3D);
        void SetMouseWorldVector(jag::math::Vector3T<int> vector31, jag::math::Vector3T<int> vector32);
        void GetMouseWorldVector(jag::math::Vector3T<int>& vector31, jag::math::Vector3T<int>& vector32);
        void GetViewProjectionMatrix();
        void SetViewProjectionMatrix(jag::math::Matrix44T<float> matrix44);
        void CalculateMouseWorldVectorRSeven(jag::math::Vector2T<int> vector2, jag::math::Vector3T<int>& vector31,
                                             jag::math::Vector3T<int>& vector32);
        void GetGroundIntersection(world& world, jag::math::Vector3T<int> vector31, jag::math::Vector3T<int> vector32,
                                   jag::math::Vector3T<int>& vector33, jag::math::Vector3T<int>& vector34);
        bool DoesMouseIntersectModelPoints(const ModelLit& modelLit, int* arg2, int* arg3, int arg4);
        bool IsMouseRoughlyInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void IsAABBWithinMaxViewDistanceFromCamera(const ModelLit::AABB& aabb, int arg2, int arg3);
        bool IsAABBWithinMaxViewDistance(const ModelLit::AABB& aabb, int arg2, int arg3);
        void SetupPickingHelper(jag::graphics::PickingHelper& pickingHelper);
        void SetViewportDimensions(jag::math::Rect<int> rect, int arg2);
        void GetViewportFov();
        auto GetViewportRect();
        int Sign(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void IsMouseInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void IsMouseIntersectingModelAABB(ModelLitImpl& modelLitImpl, int arg2, int arg3, int arg4, int arg5,
                                          bool arg6);
        void IsMouseIntersectingModelAABB(const ModelLit::AABB& aabb, int arg2, int arg3, int arg4, bool arg5);
        static int32_t m_useAABBMouseCheck; // = 1
        static int32_t m_mouseCheck;
        static int32_t m_mouseX;
        static int32_t m_mouseY;
        static int32_t m_mouseWorldLineCalculated;
        static int32_t m_mouseLineWorldCentreX;
        static int32_t m_mouseLineWorldCentreY;
        static int32_t m_mouseLineWorldCentreZ;
        static int32_t m_mouseLineWorldRadiusX;
        static int32_t m_mouseLineWorldRadiusY;
        static int32_t m_mouseLineWorldRadiusZ;
        static int32_t m_mouseLineWorldAbsRadiusX;
        static int32_t m_mouseLineWorldAbsRadiusY;
        static int32_t m_mouseLineWorldAbsRadiusZ;
        static jag::math::Rect<unsigned int> m_viewportRect; // = Rect<unsigned int>((Rect<int> *)PTR_ZERO_100ee6690)
        static uint8_t m_viewportFov[12];
        static jag::math::Matrix44T<float> m_viewProjectionMatrixRSeven; // = Matrix44T<float>()
        static int64_t m_pickedEntityCount;
        static eastl::fixed_vector<long long, 1000ul> m_pickedEntityTypecode; // = fixed_vector<long long, 1000ul>(1000)

    private:
        long field_0;
        uint8_t _unknown_8[88];
        int field_96;
        uint8_t _unknown_100[125];
    };

    class ShiftedLabelRangePoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual auto GetBoneTransform(unsigned long arg1) const;
        virtual auto GetJointTransform(unsigned long arg1) const;
        virtual uint64_t GetLabelTransparencyDelta(unsigned long arg1) const;
        virtual uint16_t IsEqual(const PoseStateRSeven& poseStateRSeven) const;
        ShiftedLabelRangePoseStateRSeven(const shared_ptr<PoseStateRSeven>& poseStateRSeven, unsigned short arg2,
                                         unsigned short arg3, unsigned short arg4, unsigned short arg5,
                                         unsigned short arg6, unsigned short arg7);
        ~ShiftedLabelRangePoseStateRSeven();

    private:
        Type field_8;
        uint8_t _unknown_12[4];
        shared_ptr field_16;
        unsigned short field_32;
        unsigned short field_34;
        unsigned short field_36;
        unsigned short field_38;
        unsigned short field_40;
        unsigned short field_42;
        uint8_t _unknown_44[6];
    };

    // 0x1002f6cd0
    bool MousePickingHelper::IsMouseIntersectingModelAABB<SoftwarePix3D>(
        ModelLitImpl& modelLitImpl, int arg2, int arg3, int arg4, int arg5,
        const ModelLitRenderer<SoftwarePix3D>& modelLitRenderer) {
        uint8_t uVar2;

        if (IsMousePickingEnabled() == '\0') {
            uVar2 = 0;
        } else {
            CheckCalculateMouseWorldVector(*(Pix3D**)(modelLitRenderer + 6437224));
            uVar2 = IsMouseIntersectingModelAABB(modelLitImpl, arg2, arg3, arg4, arg5, false);
        }
        return (bool)uVar2;
    }

    // 0x100380900
    void MousePickingHelper::IsMouseIntersectingModelAABB(ModelLitImpl& modelLitImpl, int arg2, int arg3, int arg4,
                                                          int arg5, bool arg6) {
        IsMouseIntersectingModelAABB((AABB*)modelLitImpl.GetMousePickingAabb(arg2), arg3, arg4, arg5, arg6);
    }

    // 0x100380940
    void MousePickingHelper::IsMouseIntersectingModelAABB(const ModelLit::AABB& aabb, int arg2, int arg3, int arg4,
                                                          bool arg5) {
        int iVar2;
        int iVar3;
        int iVar6;
        int iVar7;

        if (m_mouseWorldLineCalculated == '\0') {
            LogAssert("m_mouseWorldLineCalculated",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "MousePickingHelper.h",
                      283, nullptr);
        }
        int iVar8 = -aabb.field_4;
        if (arg5) {
            iVar8 = aabb.field_4;
        }
        int iVar5 = m_mouseLineWorldCentreX - (arg2 + aabb.field_0);
        int iVar4 = -iVar5;
        if (-iVar5 < 0) {
            iVar4 = iVar5;
        }
        int iVar1 = aabb.field_12;
        if (iVar4 <= m_mouseLineWorldAbsRadiusX + iVar1) {
            iVar4 = (iVar8 - arg3) + m_mouseLineWorldCentreY;
            iVar8 = -iVar4;
            if (-iVar4 < 0) {
                iVar8 = iVar4;
            }
            iVar2 = aabb.field_16;
            if (iVar8 <= m_mouseLineWorldAbsRadiusY + iVar2) {
                iVar6 = m_mouseLineWorldCentreZ - (arg4 + aabb.field_8);
                iVar8 = -iVar6;
                if (-iVar6 < 0) {
                    iVar8 = iVar6;
                }
                iVar3 = aabb.field_20;
                if (iVar8 <= m_mouseLineWorldAbsRadiusZ + iVar3) {
                    iVar7 = m_mouseLineWorldRadiusY * iVar6 - m_mouseLineWorldRadiusZ * iVar4;
                    iVar8 = -iVar7;
                    if (iVar8 < 0) {
                        iVar8 = iVar7;
                    }
                    if (iVar8 <= m_mouseLineWorldAbsRadiusY * iVar3 + m_mouseLineWorldAbsRadiusZ * iVar2) {
                        iVar6 = m_mouseLineWorldRadiusZ * iVar5 - iVar6 * m_mouseLineWorldRadiusX;
                        iVar8 = -iVar6;
                        if (iVar8 < 0) {
                            iVar8 = iVar6;
                        }
                        if (iVar8 <= m_mouseLineWorldAbsRadiusZ * iVar1 + iVar3 * m_mouseLineWorldAbsRadiusX) {
                            iVar4 = m_mouseLineWorldRadiusX * iVar4 - m_mouseLineWorldRadiusY * iVar5;
                            iVar8 = -iVar4;
                            if (iVar8 < 0) {
                                iVar8 = iVar4;
                            }
                            iVar4 = m_mouseLineWorldAbsRadiusX * iVar2 + m_mouseLineWorldAbsRadiusY * iVar1;
                            return iVar8 <= iVar4;
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100381c40
    OperationRecordEntry* OperationRecordEntry::operator=(const OperationRecordEntry& operationRecordEntry) {
        *this = operationRecordEntry;
        *m_inputModel = operationRecordEntry.m_inputModel;
        *m_outputModel = operationRecordEntry.m_outputModel;
        return this;
    }

    // 0x100381d40
    OperationRecordEntry::OperationRecordEntry(const OperationRecordEntry& operationRecordEntry)
        : shared_ptr(operationRecordEntry), m_inputModel(operationRecordEntry.m_inputModel),
          m_outputModel(operationRecordEntry.m_outputModel) {}

    // 0x100381ea0
    OperationRecordEntry::OperationRecordEntry(OperationRecordEntry&& operationRecordEntry) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(operationRecordEntry);
        new (m_inputModel) ResolvedModel(operationRecordEntry.m_inputModel);
        new (m_outputModel) ResolvedModel(operationRecordEntry.m_outputModel);
    }

    // 0x100381f20
    ResolvedModel::ResolvedModel(ResolvedModel&& resolvedModel) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(resolvedModel);
        field_16->shared_ptr<FileRSevenDebugPresetProvider, void>(resolvedModel.field_16);
        m_animationState->shared_ptr<FileRSevenDebugPresetProvider, void>(resolvedModel.m_animationState);
        uint64_t uVar1 = *(uint64_t*)resolvedModel.field_48;
        uint64_t uVar2 = *(uint64_t*)resolvedModel.field_56;
        uint64_t uVar3 = *(uint64_t*)resolvedModel.field_64;
        uint64_t uVar4 = *(uint64_t*)resolvedModel.field_72;
        uint64_t uVar5 = *(uint64_t*)resolvedModel.field_80;
        uint64_t uVar6 = *(uint64_t*)resolvedModel.field_88;
        uint64_t uVar7 = *(uint64_t*)resolvedModel.field_104;
        *(uint64_t*)field_96 = *(uint64_t*)resolvedModel.field_96;
        *(uint64_t*)field_104 = uVar7;
        *(uint64_t*)field_80 = uVar5;
        *(uint64_t*)field_88 = uVar6;
        *(uint64_t*)field_64 = uVar3;
        *(uint64_t*)field_72 = uVar4;
        *(uint64_t*)field_48 = uVar1;
        *(uint64_t*)field_56 = uVar2;
    }

    // 0x100382e00
    void CombineOperation::IncrementLabelOffsets(
        jag::graphics::Model const&, unsigned short&, unsigned short&,
        unsigned short&) const ::$_6::operator()(const jag::graphics::GeometryBatch& geometryBatch) const {
        GetBoneIDMap();
    }

    // 0x1003835c0
    void CombineOperation::IncrementLabelOffsets(
        jag::graphics::Model const&, unsigned short&, unsigned short&,
        unsigned short&) const ::$_7::operator()(const jag::graphics::GeometryBatch& geometryBatch) const {
        GetJointIDMap();
    }

    // 0x100383d30
    void CombineOperation::IncrementLabelOffsets(
        jag::graphics::Model const&, unsigned short&, unsigned short&,
        unsigned short&) const ::$_8::operator()(const jag::graphics::GeometryBatch& geometryBatch) const {
        GetMaterial();
    }

    // 0x100383d40
    unsigned short CombineOperation::UpdateLabelOffset(
        jag::graphics::Model const&, unsigned short&,
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>)
        const ::$_9::operator()(
            unsigned short arg1,
            const std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                  MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
                geometryBatchInstance) const {
        function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>*
            this_00;
        unsigned short* puVar2;
        unsigned short local_14;
        unsigned short local_12;

        this_00 = *(function<eastl::vector_map<unsigned short, unsigned short> const*(
                        jag::graphics::GeometryBatch const&)>**)this;
        auto this_01 = geometryBatchInstance.operator->();
        auto geometryBatch = this_01->GetGeometryBatch();
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_02 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                std::function<eastl::vector_map<unsigned short, unsigned short> const*(
                    jag::graphics::GeometryBatch const&)>::operator()(this_00, geometryBatch);
        if (!(this_02->empty())) {
            this_02->back();
            puVar2 = std::max<unsigned short>(local_12, local_14);
            arg1 = *puVar2;
        }
        return arg1;
    }

    // 0x100383ef0
    TransformedPoseStateRSeven::TransformedPoseStateRSeven(jag::math::Matrix43T<float> matrix43)
        : PoseStateRSeven(5), field_16(in_stack_00000008), field_24(in_stack_00000010), field_32(in_stack_00000018),
          field_40(in_stack_00000020), field_48(in_stack_00000028), field_56(in_stack_00000030) {
        uint64_t in_stack_00000008;
        uint64_t in_stack_00000010;
        uint64_t in_stack_00000018;
        uint64_t in_stack_00000020;
        uint64_t in_stack_00000028;
        uint64_t in_stack_00000030;
    }

    // 0x100384000
    ChainedPoseStateRSeven::ChainedPoseStateRSeven(const shared_ptr<PoseStateRSeven>& poseStateRSeven1,
                                                   const shared_ptr<PoseStateRSeven>& poseStateRSeven2)
        : PoseStateRSeven(0), field_16(poseStateRSeven1), field_32(poseStateRSeven2) {

        if (!(field_16->operator_cast_to_bool())) {
            LogAssert("m_first",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      395, "First pose state may not be null.");
        }
        if (!(field_32->operator_cast_to_bool())) {
            LogAssert("m_second",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      396, "Second pose state may not be null.");
        }
    }

    // 0x100384180
    ChainedPoseStateRSeven::~ChainedPoseStateRSeven() {
        field_32->~shared_ptr();
        field_16->~shared_ptr();
    }

    // 0x100384240
    ShiftedLabelRangePoseStateRSeven::ShiftedLabelRangePoseStateRSeven(
        const shared_ptr<PoseStateRSeven>& poseStateRSeven, unsigned short arg2, unsigned short arg3,
        unsigned short arg4, unsigned short arg5, unsigned short arg6, unsigned short arg7)
        : PoseStateRSeven(4), field_16(poseStateRSeven), field_32(arg2), field_34(arg3), field_36(arg4), field_38(arg5),
          field_40(arg6), field_42(arg7) {
        if (field_16->operator_cast_to_bool() == '\0') {
            LogAssert("m_pose",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      431, "Pose must not be null");
        }
    }

    // 0x1003843c0
    ShiftedLabelRangePoseStateRSeven::~ShiftedLabelRangePoseStateRSeven() {
        field_16->~shared_ptr();
    }

    // 0x100384450
    MaskedDashPoseStateRSeven::MaskedDashPoseStateRSeven(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2,
                                                         const ResolvedModel& resolvedModel, const Array<int>& arg4,
                                                         bool arg5)
        : DashBasePoseStateRSeven(1, animFrameSet, arg2, resolvedModel), field_168(arg4), m_invertMask(arg5) {
        InitializeFrameData();
    }

    // 0x1003844d0
    DashBasePoseStateRSeven::DashBasePoseStateRSeven(PoseStateRSeven::Type arg1,
                                                     const shared_ptr<AnimFrameSet>& animFrameSet, int arg3,
                                                     const ResolvedModel& resolvedModel)
        : PoseStateRSeven(arg1), field_16(animFrameSet), m_frame(arg3) {
        field_40.unique_ptr<true, void>();
        field_48.unique_ptr<true, void>();
        new (&field_56) shared_ptr();
        new (&field_80) jag::math::Matrix43T<float>();
        new (&field_128) shared_ptr();
        new (&field_144) Array<jag::graphics::LabelData>();
        if (field_16->operator_cast_to_bool() == '\0') {
            LogAssert("m_frameSet",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      126, "Frameset may not be null.");
        }
        auto this_00 = resolvedModel.GetAnimationState();
        if ((DashBasePoseStateRSeven*)this_00->end() == this) {
            LogAssert("labeledModel.GetAnimationState().get() != this",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      127, nullptr);
        }
        LoadFromLabeledModel(resolvedModel);
    }

    // 0x100384630
    DashBasePoseStateRSeven::~DashBasePoseStateRSeven() {
        field_144.~Array();
        field_128.~shared_ptr();
        field_56.~weak_ptr();
        field_48.~unique_ptr();
        field_40.~unique_ptr();
        field_16->~shared_ptr();
    }

    // 0x100384900
    MaskedDashPoseStateRSeven::~MaskedDashPoseStateRSeven() {
        field_168.~Array();
    }

    // 0x100384990
    DashPoseStateRSeven::DashPoseStateRSeven(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2,
                                             const ResolvedModel& resolvedModel)
        : DashBasePoseStateRSeven(1, animFrameSet, arg2, resolvedModel) {
        InitializeFrameData();
    }

    // 0x100384a90
    DashPoseStateRSeven::~DashPoseStateRSeven() {}

    // 0x10038b3c0
    uint16_t AnimateBaseOperation::SeparateBatchByLabelTransparency(
        jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&,
        eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&)
        const ::$_10::operator()(unsigned short arg1) const {
        uint64_t in_register_00000032;

        uint16_t* puVar1 = (uint16_t*)(*(*(vector<AnimateBaseOperation::SeparatedIndexCount>**)this))[(
            unsigned long)((unsigned int)((int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) * 43691) >>
                           17)];
        return *puVar1;
    }

    // 0x10038bd90
    uint16_t AnimateBaseOperation::SeparateBatchByLabelTransparency(
        jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&,
        eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&)
        const ::$_11::operator()(unsigned short arg1) const {
        uint64_t in_register_00000032;

        long lVar1 = (*(*(vector<AnimateBaseOperation::SeparatedIndexCount>**)this))[(
            unsigned long)((unsigned int)((int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) * 43691) >>
                           17)];
        return *(uint16_t*)(lVar1 + 2);
    }

    // 0x10038d8c0
    unsigned long HillSkewOperation::SkewModelExact(ResolvedModel const&) const ::$_12::operator()(int arg1) const {
        GeometryBatchInstance* this_00 =
            (GeometryBatchInstance*)(*(*(unique_ptr<jag::graphics::GeometryBatchInstance,
                                                    MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                                   3072>::UniquePoolDeleter>**)this))
                .operator->();
        auto this_01 = this_00->GetGeometryBatch();
        auto this_02 = this_01->GetVertexDataBufferPos();
        unsigned long* puVar1 = (unsigned long*)(*this_02)[(long)arg1];
        return *puVar1 ^ 9223372036854775808;
    }

    // 0x10038e260
    void HillSkewOperation::SkewModelExact(ResolvedModel const&) const ::$_13::operator()(int arg1, int arg2) const {
        GeometryBatchInstance* this_00 =
            (GeometryBatchInstance*)(*(*(unique_ptr<jag::graphics::GeometryBatchInstance,
                                                    MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                                   3072>::UniquePoolDeleter>**)this))
                .operator->();
        auto this_01 = this_00->GetGeometryBatch();
        auto this_02 = this_01->GetVertexDataBufferPos();
        long lVar1 = (*this_02)[(long)arg1];
        *(float*)(lVar1 + 4) = (float)-arg2;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100383e60
    oldscape::dash3d::TransformedPoseStateRSeven*
    placement_new<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float>>(
        void* arg1, math::Matrix43T<float>&& matrix43) {
        new (arg1) oldscape::dash3d::TransformedPoseStateRSeven(matrix43);
        return arg1;
    }

    // 0x100383ea0
    ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>, int,
                  oldscape::dash3d::TransformedPoseStateRSeven*&>(void* arg1, int&& arg2,
                                                                  oldscape::dash3d::TransformedPoseStateRSeven*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100383f40
    ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::TransformedPoseStateRSeven* transformedPoseStateRSeven)
        : ref_counter_base() {}

    // 0x100383f70
    oldscape::dash3d::ChainedPoseStateRSeven*
    placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                  shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>>(
        void* arg1, const shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven,
        shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&& transformedPoseStateRSeven) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(transformedPoseStateRSeven);
        new (arg1) oldscape::dash3d::ChainedPoseStateRSeven(poseStateRSeven, local_30);
        return arg1;
    }

    // 0x100383fd0
    ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>*
    placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                  oldscape::dash3d::ChainedPoseStateRSeven*&>(void* arg1, int&& arg2,
                                                              oldscape::dash3d::ChainedPoseStateRSeven*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1003840e0
    ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::ChainedPoseStateRSeven* chainedPoseStateRSeven)
        : ref_counter_base() {}

    // 0x100384120
    void ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ChainedPoseStateRSeven*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ChainedPoseStateRSeven();
                    prVar1 =
                        (ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1003841c0
    oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*
    placement_new<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven,
                  shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&, unsigned short const&,
                  unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&>(
        void* arg1, const shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven, const unsigned short& arg3,
        const unsigned short& arg4, const unsigned short& arg5, const unsigned short& arg6, const unsigned short& arg7,
        const unsigned short& arg8) {
        new (arg1)
            oldscape::dash3d::ShiftedLabelRangePoseStateRSeven(poseStateRSeven, arg3, arg4, arg5, arg6, arg7, arg8);
        return arg1;
    }

    // 0x100384200
    ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>*
    placement_new<ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>, int,
                  oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*&>(
        void* arg1, int&& arg2, oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100384320
    ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::ShiftedLabelRangePoseStateRSeven* shiftedLabelRangePoseStateRSeven)
        : ref_counter_base() {}

    // 0x100384360
    void ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ShiftedLabelRangePoseStateRSeven*)((long)&(this[3]._vptr)->_dtor + lVar2))
                        ->~ShiftedLabelRangePoseStateRSeven();
                    prVar1 =
                        (ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven> _vtbl*)((long)&prVar1
                                                                                                            ->_dtor +
                                                                                                        1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1003843e0
    oldscape::dash3d::ChainedPoseStateRSeven*
    placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven>&,
                  shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(
        void* arg1, shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven1,
        shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven2) {
        new (arg1) oldscape::dash3d::ChainedPoseStateRSeven(poseStateRSeven1, poseStateRSeven2);
        return arg1;
    }

    // 0x100384400
    oldscape::dash3d::MaskedDashPoseStateRSeven*
    placement_new<oldscape::dash3d::MaskedDashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                  int const&, oldscape::dash3d::ResolvedModel const&, Array<int>&, bool const&>(
        void* arg1, const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, const int& arg3,
        const oldscape::dash3d::ResolvedModel& resolvedModel, Array<int>& arg5, const bool& arg6) {
        new (arg1) oldscape::dash3d::MaskedDashPoseStateRSeven(animFrameSet, arg3, resolvedModel, arg5, arg6);
        return arg1;
    }

    // 0x100384420
    ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>*
    placement_new<ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>, int,
                  oldscape::dash3d::MaskedDashPoseStateRSeven*&>(void* arg1, int&& arg2,
                                                                 oldscape::dash3d::MaskedDashPoseStateRSeven*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100384860
    ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::MaskedDashPoseStateRSeven* maskedDashPoseStateRSeven)
        : ref_counter_base() {}

    // 0x1003848a0
    void ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MaskedDashPoseStateRSeven*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MaskedDashPoseStateRSeven();
                    prVar1 =
                        (ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven> _vtbl*)((long)&prVar1->_dtor +
                                                                                                 1);
                    lVar2 = lVar2 + 208;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100384940
    oldscape::dash3d::DashPoseStateRSeven*
    placement_new<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&,
                  oldscape::dash3d::ResolvedModel const&>(
        void* arg1, const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, const int& arg3,
        const oldscape::dash3d::ResolvedModel& resolvedModel) {
        new (arg1) oldscape::dash3d::DashPoseStateRSeven(animFrameSet, arg3, resolvedModel);
        return arg1;
    }

    // 0x100384960
    ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>*
    placement_new<ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>, int,
                  oldscape::dash3d::DashPoseStateRSeven*&>(void* arg1, int&& arg2,
                                                           oldscape::dash3d::DashPoseStateRSeven*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1003849f0
    ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::DashPoseStateRSeven* dashPoseStateRSeven)
        : ref_counter_base() {}

    // 0x100384a30
    void ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((DashPoseStateRSeven*)((long)&(this[3]._vptr)->_dtor + lVar2))->~DashPoseStateRSeven();
                    prVar1 =
                        (ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 176;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100384aa0
    oldscape::dash3d::ChainedPoseStateRSeven*
    placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>,
                  shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(
        void* arg1, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&& transformedPoseStateRSeven,
        shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(transformedPoseStateRSeven);
        new (arg1) oldscape::dash3d::ChainedPoseStateRSeven(local_30, poseStateRSeven);
        return arg1;
    }

    // 0x100387bb0
    void SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphicutils::BatchDestroyHelper<
            std::unique_ptr<graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(std::__packaged_task_func<
                             std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
                                 graphics::GeometryBatchInstance,
                                 MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
                                 lambda() #1
                             }>,
                             SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                         unsigned long arg2) {
        packaged_task_func->DeAllocate((arg2 * 24), arg2 * 8);
    }

    // 0x10038e3b0
    unsigned int extract_bits(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        return ~(-1 << ((uint8_t)arg3 & 31)) & arg1 >> ((uint8_t)arg2 & 31);
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x100385130
    void BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        OnDestroy<BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                          MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>(
            BatchDestroy<eastl::vector<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>&
                batchDestroy) {
        long lVar1;
        long lVar2;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>* geometryBatchInstance1;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>* geometryBatchInstance2;
        back_insert_iterator<eastl::vector<std::unique_ptr<
            graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>
                                 _>* back_insert_iterator;
        vector<eastl::pair<int, int>>* this_00;

        scoped_lock<std::mutex> local_30(*((this + 56)));
        if (UseDestroyList() != '\0') {
            this_00 = (vector<eastl::pair<int, int>>*)(this + 16);
            lVar1 = this_00->size();
            lVar2 = batchDestroy.size();
            this_00->reserve(lVar1 + lVar2);
            geometryBatchInstance1 =
                (unique_ptr<graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                    batchDestroy.HeapBeginPtr();
            geometryBatchInstance2 =
                (unique_ptr<graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                    batchDestroy.end();
            back_insert_iterator =
                (back_insert_iterator<eastl::vector<
                     std::unique_ptr<graphics::GeometryBatchInstance,
                                     MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>
                                          _>*)
                    std::back_inserter<eastl::vector<
                        std::unique_ptr<graphics::GeometryBatchInstance,
                                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>(
                        *this_00);
            eastl::move<std::unique_ptr<graphics::GeometryBatchInstance,
                                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*,
                        std::back_insert_iterator<eastl::vector<std::unique_ptr<
                            graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>(
                geometryBatchInstance1, geometryBatchInstance2, back_insert_iterator);
            batchDestroy.reset_lose_memory();
        }
    }

    // 0x100385280
    BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                       MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        BatchDestroyHelper() {
        function<void()>* this_01;
        function<void()> local_68[56];
        long local_30;

        new (this) AutoSingleton<BatchDestroyHelper<
            std::unique_ptr<graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>();
        new (this) render::RenderDeviceOnEndFrame(true);
        *(uint8_t**)this = PTR_vtable_100ee7098 + 16;
        new ((this + 16)) eastl::vector();
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>)1;
        new ((this + 56)) std::mutex();
        atomic<int>* this_00 = (atomic<int>*)(this + 120);
        new (this_00) std::atomic<int>(0);
        auto pBVar1 = this_00->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                               MakeUniquePool<graphics::GeometryBatchInstance, 3072>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _1_,
            void>(local_68, (_lambda___1_*)this);
        pBVar1->AddPauseCallback(*local_68);
        this_01 = local_68;
        this_01->~function();
        pBVar1 = (BatchDestroyManager*)this_01->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                               MakeUniquePool<graphics::GeometryBatchInstance, 3072>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _2_,
            void>(local_68, (_lambda___2_*)this);
        pBVar1->AddResumeCallback(*local_68);
    }

    // 0x100385450
    void BatchDestroyManager::AddPauseCallback(std::function<void()>&& callback) {
        emplace_back<std::function<void()>>(callback);
    }

    // 0x100385470
    void BatchDestroyManager::AddResumeCallback(std::function<void()>&& callback) {
        field_32.emplace_back<std::function<void()>>(callback);
    }

    // 0x1003854d0
    void BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::OnEndFrame() {
        Flush(this);
    }

    // 0x1003855a0
    BatchDestroyManager::BatchDestroyManager()
        : AutoSingleton<BatchDestroyManager>(), eastl::vector<std::function<void()>>() {}

    // 0x100386360
    void BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        BatchDestroyHelper()::{
        lambda() #1
    }
    ::operator()() const {
        OnPause(*(BatchDestroyHelper<
                  std::unique_ptr<graphics::GeometryBatchInstance,
                                  MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>**)this);
    }

    // 0x100386370
    void BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::OnPause() {

        scoped_lock<std::mutex> local_18(*((this + 56)));
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>)0;
        ((this + 16))->clear();
        WaitDestroyList(this);
    }

    // 0x1003863c0
    void BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::WaitDestroyList() {
        type* extraout_RDX;
        type* arg2;
        type* extraout_RDX_00;
        memory_order memory_order;
        int* in_RSI;
        duration<long long, std::ratio<1l, 1000l>> local_28;

        __atomic_base* this_01 = (__atomic_base*)(this + 120);
        int iVar1 = std::__atomic_base::operator_cast_to_int(this_01);
        int iVar3 = 0;
        if (iVar1 != 0) {
            arg2 = extraout_RDX;
            do {
                if (iVar3 == 1000)
                    goto LAB_100386423;
                local_28.duration<int>(*in_RSI, arg2);
                std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_28);
                iVar1 = std::__atomic_base::operator_cast_to_int(this_01);
                iVar3 = iVar3 + 1;
                arg2 = extraout_RDX_00;
            } while (iVar1 != 0);
        }
        if (iVar3 < 1000) {
            return;
        }
    LAB_100386423:
        memory_order = (memory_order)in_RSI;
        auto this_00 = logger::default_logger();
        uint32_t uVar2 = this_01->load(memory_order);
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                     "BatchDestroy.h",
                     220, "BatchDestroy took too long, %d entries remaining", uVar2);
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "BatchDestroy.h",
                        221, nullptr);
    }

    // 0x100387100
    void BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        BatchDestroyHelper()::{
        lambda() #2
    }
    ::operator()() const {
        OnResume(*(BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>**)this);
    }

    // 0x100387110
    void BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::OnResume() {

        scoped_lock<std::mutex> local_20(*((this + 56)));
        this[48] = (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)1;
    }

    // 0x100387160
    BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                       MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        ~BatchDestroyHelper() {
        *(uint8_t**)this = PTR_vtable_100ee7098 + 16;
        ((this + 56))->~mutex();
        ((this + 16))->~vector();
    }

    // 0x1003871a0
    void BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush() {
        ReturnValue local_20;

        auto this_00 = Instance();
        auto this_01 = this_00->SSOBeginPtr();
        BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                           MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            local_18 = this;
        ThreadPool::AddTask<BatchDestroyHelper<std::unique_ptr<
            graphics::GeometryBatchInstance,
            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
            &local_20, this_01, "Flush", (_lambda___1_*)&local_18);
    }

    // 0x100387c10
    void BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    ::operator()() const {
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>* geometryBatchInstance1;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>* geometryBatchInstance2;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>* geometryBatchInstance3;

        long lVar1 = *(long*)this;
        Array<std::unique_ptr<graphics::GeometryBatchInstance,
                              MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
              BucketAllocatorEASTL>
            local_48;
        scoped_lock<std::mutex> local_30(*((lVar1 + 56)));
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(lVar1 + 16);
        int iVar2 = this_00->size();
        (*((lVar1 + 120))) += iVar2;
        local_48.set_max_size(this_00->size(), 0);
        geometryBatchInstance1 =
            (unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                this_00->HeapBeginPtr();
        geometryBatchInstance2 =
            (unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)this_00->end();
        geometryBatchInstance3 =
            (unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)local_48.data();
        eastl::move<std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*,
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*>(
            geometryBatchInstance1, geometryBatchInstance2, geometryBatchInstance3);
        this_00->reset_lose_memory();
        iVar2 = local_48.end();
        local_48.clear();
        (*((lVar1 + 120))) -= iVar2;
    }

    // 0x10038a470
    unsigned long BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::UseDestroyList()
        const {
        RenderDevice* pRVar2;
        MapArea* this_00;
        long lVar3;

        if (this[48] != (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)0) {
            pRVar2 = InstancePtr();
            if (pRVar2 != nullptr) {
                pRVar2 = (RenderDevice*)Instance();
                if (pRVar2->GetReadyState() == 0) {
                    this_00 = (MapArea*)pRVar2->Instance();
                    lVar3 = this_00->GetOrigin();
                    if (*(char*)(lVar3 + 227) != '\0') {
                        pRVar2 = (RenderDevice*)this_00->Instance();
                        return ((RenderContext*)pRVar2->GetPrimaryRenderContext())->IsDeviceResetInProgress() ^ 1;
                    }
                }
            }
        }
        return 0;
    }

} // namespace jag::graphicutils

namespace jag::math {
    // 0x100384710
    Matrix43T<float>::Matrix43T() {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
    }

    // 0x10038e2c0
    Matrix33T<float>::Matrix33T(const Vector3T<float>& vector31, const Vector3T<float>& vector32,
                                const Vector3T<float>& vector33) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        SetXYZ(vector31);
        ((this + 12))->SetXYZ(vector32);
        ((this + 24))->SetXYZ(vector33);
    }

    // 0x10038e330
    ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(unsigned int arg1) {
        Set(this, arg1);
    }

    // 0x10038e340
    void ColourStorage8888<ARGB8StorageLayout>::Set(unsigned int arg1) {
        ColourStorage8888<ARGB8StorageLayout> CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(arg1, 16, 8);
        this[2] = CVar1;
        CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(arg1, 8, 8);
        this[1] = CVar1;
        CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(arg1, 0, 8);
        *this = CVar1;
        CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(arg1, 24, 8);
        this[3] = CVar1;
    }

    // 0x10038e3d0
    Vector3T<float>::Vector3T<signed char>(const Vector3T<signed char>& vector3) {
        auto pcVar1 = vector3.SSOBeginPtr();
        *(float*)this = (float)(int)*pcVar1;
        pcVar1 = (char*)vector3.y();
        *(float*)(this + 4) = (float)(int)*pcVar1;
        pcVar1 = (char*)vector3.z();
        *(float*)(this + 8) = (float)(int)*pcVar1;
    }

    // 0x10038e430
    Vector3T<int>::Vector3T<float>(const Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        *(int*)this = (int)*pfVar1;
        pfVar1 = (float*)vector3.y();
        *(int*)(this + 4) = (int)*pfVar1;
        pfVar1 = (float*)vector3.second();
        *(int*)(this + 8) = (int)*pfVar1;
    }

    // 0x10038e480
    Vector3T<int>::Vector3T(int arg1) {
        *(int*)this = arg1;
        *(int*)(this + 4) = arg1;
        *(int*)(this + 8) = arg1;
    }

    // 0x10038e490
    Vector3T<signed char>::Vector3T<int>(const Vector3T<int>& vector3) {
        auto pVVar1 = vector3.SSOBeginPtr();
        *this = *pVVar1;
        pVVar1 = (Vector3T<signed char>*)vector3.y();
        this[1] = *pVVar1;
        pVVar1 = (Vector3T<signed char>*)vector3.second();
        this[2] = *pVVar1;
    }

    // 0x10038e4d0
    Vector3T<int>::Vector3T<signed char>(const Vector3T<signed char>& vector3) {
        auto pcVar1 = vector3.SSOBeginPtr();
        *(int*)this = (int)*pcVar1;
        pcVar1 = (char*)vector3.y();
        *(int*)(this + 4) = (int)*pcVar1;
        pcVar1 = (char*)vector3.z();
        *(int*)(this + 8) = (int)*pcVar1;
    }

} // namespace jag::math

// 0x10038cfa0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
