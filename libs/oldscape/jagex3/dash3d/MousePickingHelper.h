// libs/oldscape/jagex3/dash3d/MousePickingHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class ChainedPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual GetBoneTransform(unsigned long) const;
        virtual GetJointTransform(unsigned long) const;
        virtual float GetLabelTransparencyDelta(unsigned long) const;
        virtual IsEqual(PoseStateRSeven const&) const;
        ChainedPoseStateRSeven(shared_ptr<PoseStateRSeven> const&, shared_ptr<PoseStateRSeven> const&);
        ~ChainedPoseStateRSeven();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
        shared_ptr field_32; // offset 32
    };

    class MaskedDashPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual IsEqual(PoseStateRSeven const&) const;
        void InitializeFrameData();
        GetMask() const;
        bool GetInvertMask() const;
        MaskedDashPoseStateRSeven(shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&,
                                  Array<int, eastl::allocator> const&, bool);
        ~MaskedDashPoseStateRSeven();

        // data members, from how the methods use this: 200 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        shared_ptr field_16; // offset 16
        undefined4 field_32; // offset 32
        char _unknown_36[156];
        bool m_invertMask; // offset 192
        char _unknown_193[7];
    };

    class MousePickingHelper {
    public:
        bool IsMouseIntersectingModelAABB<SoftwarePix3D>(ModelLitImpl&, int, int, int, int,
                                                         ModelLitRenderer<SoftwarePix3D> const&);
        ulong GetPackedTypeCodeLoc(int, int, int, bool, int, LocLayer);
        void GetEntityIdFromTypecode(long long);
        void AdjustAABBRadiiForPicking(int&, int&, bool);
        GetPickedEntityCount();
        bool IsPlayerTypecode(long long);
        uint GetEntityTypeFromTypecode(long long);
        bool IsNpcTypecode(long long);
        bool IsLocTypecode(long long);
        bool IsObjTypecode(long long);
        ulong IsActiveEntityTypecode(long long);
        byte GetEntityInactiveFromTypecode(long long);
        GetPickedEntityTypecode(int);
        void GetPickedEntityX(int);
        uint GetEntityXFromTypecode(long long);
        void GetPickedEntityZ(int);
        uint GetEntityZFromTypecode(long long);
        void GetPickedEntityLevel(int);
        uint GetEntityLevelFromTypecode(long long);
        void GetPickedEntityType(int);
        void GetPickedEntityInactive(int);
        void GetPickedEntityId(int);
        GetPickedLocLayer(int);
        uint GetLocLayerFromTypecode(long long);
        ulong OverwriteEntityCoordInTypecode(long long, int, int, int);
        long GetPackedTypeCode(int, int, int, int, bool, int);
        void SetMouseCoords(int, int, bool);
        void AddPickingEntity(long long);
        void SortPickingEntities(game::CoordGrid);
        IsMousePickingEnabled();
        bool HasCheckedScreenCoordLastRender(int, int);
        GetMouseScreenX();
        GetMouseScreenY();
        void CheckCalculateMouseWorldVector(Pix3D const&);
        void SetMouseWorldVector(jag::math::Vector3T<int>, jag::math::Vector3T<int>);
        void GetMouseWorldVector(jag::math::Vector3T<int>&, jag::math::Vector3T<int>&);
        GetViewProjectionMatrix();
        void SetViewProjectionMatrix(jag::math::Matrix44T<float>);
        void CalculateMouseWorldVectorRSeven(jag::math::Vector2T<int>, jag::math::Vector3T<int>&,
                                             jag::math::Vector3T<int>&);
        void GetGroundIntersection(world&, jag::math::Vector3T<int>, jag::math::Vector3T<int>,
                                   jag::math::Vector3T<int>&, jag::math::Vector3T<int>&);
        bool DoesMouseIntersectModelPoints(ModelLit const&, int*, int*, int);
        IsMouseRoughlyInsideTriangle(int, int, int, int, int, int, int);
        void IsAABBWithinMaxViewDistanceFromCamera(ModelLit::AABB const&, int, int);
        bool IsAABBWithinMaxViewDistance(ModelLit::AABB const&, int, int);
        void SetupPickingHelper(jag::graphics::PickingHelper&);
        void SetViewportDimensions(jag::math::Rect<int>, int);
        GetViewportFov();
        MousePickingHelper* GetViewportRect();
        int Sign(int, int, int, int, int, int);
        IsMouseInsideTriangle(int, int, int, int, int, int);
        void IsMouseIntersectingModelAABB(ModelLitImpl&, int, int, int, int, bool);
        IsMouseIntersectingModelAABB(ModelLit::AABB const&, int, int, int, bool);
        static /* 4 bytes */ m_useAABBMouseCheck; // = 1
        static /* 4 bytes */ m_mouseCheck;
        static /* 4 bytes */ m_mouseX;
        static /* 4 bytes */ m_mouseY;
        static /* 4 bytes */ m_mouseWorldLineCalculated;
        static /* 4 bytes */ m_mouseLineWorldCentreX;
        static /* 4 bytes */ m_mouseLineWorldCentreY;
        static /* 4 bytes */ m_mouseLineWorldCentreZ;
        static /* 4 bytes */ m_mouseLineWorldRadiusX;
        static /* 4 bytes */ m_mouseLineWorldRadiusY;
        static /* 4 bytes */ m_mouseLineWorldRadiusZ;
        static /* 4 bytes */ m_mouseLineWorldAbsRadiusX;
        static /* 4 bytes */ m_mouseLineWorldAbsRadiusY;
        static /* 4 bytes */ m_mouseLineWorldAbsRadiusZ;
        static jag::math::Rect<unsigned int> /* 16 bytes */
            m_viewportRect;                  // = Rect<unsigned int>((Rect *)PTR_ZERO_100ee6690)
        static /* 12 bytes */ m_viewportFov;
        static jag::math::Matrix44T<float> /* 64 bytes */ m_viewProjectionMatrixRSeven; // = Matrix44T<float>()
        static /* 8 bytes */ m_pickedEntityCount;
        static /* 8040 bytes */ m_pickedEntityTypecode;

        // data members, from how the methods use this: 257 bytes
        long field_0; // offset 0
        char _unknown_8[240];
        undefined1 field_248; // offset 248
        char _unknown_249[3];
        float field_252; // offset 252
        bool field_256;  // offset 256
    };

    class ShiftedLabelRangePoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual GetBoneTransform(unsigned long) const;
        virtual GetJointTransform(unsigned long) const;
        virtual GetLabelTransparencyDelta(unsigned long) const;
        virtual IsEqual(PoseStateRSeven const&) const;
        ShiftedLabelRangePoseStateRSeven(shared_ptr<PoseStateRSeven> const&, unsigned short, unsigned short,
                                         unsigned short, unsigned short, unsigned short, unsigned short);
        ~ShiftedLabelRangePoseStateRSeven();

        // data members, from how the methods use this: 50 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
        ushort field_32;     // offset 32
        ushort field_34;     // offset 34
        ushort field_36;     // offset 36
        ushort field_38;     // offset 38
        ushort field_40;     // offset 40
        ushort field_42;     // offset 42
        int field_44;        // offset 44
        char _unknown_48[2];
    };

    // 0x1002f6cd0, 112 bytes, inline, placed by class name and debug map
    // bool MousePickingHelper::IsMouseIntersectingModelAABB<SoftwarePix3D>(ModelLitImpl&, int, int, int, int, ModelLitRenderer<SoftwarePix3D> const&)
    /* bool 
   MousePickingHelper::IsMouseIntersectingModelAABB<NXTPix3D>(ModelLitImpl&,
   int, int, int, int, ModelLitRenderer<NXTPix3D>
   const&) */

    bool MousePickingHelper::IsMouseIntersectingModelAABB<NXTPix3D>(ModelLitImpl* param_1, int param_2, int param_3,
                                                                    int param_4, int param_5,
                                                                    ModelLitRenderer* param_6) {
        undefined1 uVar2;

        if (IsMousePickingEnabled() == '\0') {
            uVar2 = 0;
        } else {
            CheckCalculateMouseWorldVector(*(Pix3D**)(param_6 + 6437224));
            uVar2 = IsMouseIntersectingModelAABB(param_1, param_2, param_3, param_4, param_5, false);
        }
        return (bool)uVar2;
    }

    // 0x100380900, 64 bytes, inline, placed by class name and debug map
    // MousePickingHelper::IsMouseIntersectingModelAABB(ModelLitImpl&, int, int, int, int, bool)
    void MousePickingHelper::IsMouseIntersectingModelAABB(ModelLitImpl* param_1, int param_2, int param_3, int param_4,
                                                          int param_5, bool param_6) {
        AABB* pAVar1;

        pAVar1 = (AABB*)param_1->GetMousePickingAabb(param_2);
        IsMouseIntersectingModelAABB(pAVar1, param_3, param_4, param_5, param_6);
    }

    // 0x100380940, 368 bytes, inline, placed by class name and debug map
    // MousePickingHelper::IsMouseIntersectingModelAABB(ModelLit::AABB const&, int, int, int, bool)
    undefined4 MousePickingHelper::IsMouseIntersectingModelAABB(AABB* param_1, int param_2, int param_3, int param_4,
                                                                bool param_5) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;

        if (m_mouseWorldLineCalculated == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_mouseWorldLineCalculated",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "MousePickingHelper.h",
                      283, (char*)0);
        }
        iVar8 = -param_1->field_4;
        if (param_5) {
            iVar8 = param_1->field_4;
        }
        iVar5 = m_mouseLineWorldCentreX - (param_2 + param_1->field_0);
        iVar4 = -iVar5;
        if (-iVar5 < 0) {
            iVar4 = iVar5;
        }
        iVar1 = param_1->field_12;
        if (iVar4 <= m_mouseLineWorldAbsRadiusX + iVar1) {
            iVar4 = (iVar8 - param_3) + m_mouseLineWorldCentreY;
            iVar8 = -iVar4;
            if (-iVar4 < 0) {
                iVar8 = iVar4;
            }
            iVar2 = param_1->field_16;
            if (iVar8 <= m_mouseLineWorldAbsRadiusY + iVar2) {
                iVar6 = m_mouseLineWorldCentreZ - (param_4 + param_1->field_8);
                iVar8 = -iVar6;
                if (-iVar6 < 0) {
                    iVar8 = iVar6;
                }
                iVar3 = param_1->field_20;
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
                            return CONCAT31((int3)((uint)iVar4 >> 8), iVar8 <= iVar4);
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100381c40, 64 bytes, inline, placed by debug map only (low confidence)
    // OperationRecordEntry::operator=(OperationRecordEntry const&)
    /* OperationRecordEntry::TEMPNAMEPLACEHOLDERVALUE(OperationRecordEntry
   const&) */

    OperationRecordEntry* OperationRecordEntry::operator=(OperationRecordEntry* param_1) {
        shared_ptr<Operation>::operator=((shared_ptr<Operation>*)this, (shared_ptr*)param_1);
        ResolvedModel::operator=((ResolvedModel*)m_inputModel, (ResolvedModel*)param_1->m_inputModel);
        ResolvedModel::operator=((ResolvedModel*)m_outputModel, (ResolvedModel*)param_1->m_outputModel);
        return this;
    }

    // 0x100381d20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OperationRecordEntry::OperationRecordEntry(OperationRecordEntry const&): jumps straight to the base-object constructor

    // 0x100381d40, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OperationRecordEntry::OperationRecordEntry(OperationRecordEntry const&)
    void OperationRecordEntry::OperationRecordEntry(OperationRecordEntry* param_1) {
        new (this) shared_ptr<Decor>(param_1);
        new (m_inputModel, (ResolvedModel*)param_1->m_inputModel) ResolvedModel();
        new (m_outputModel, (ResolvedModel*)param_1->m_outputModel) ResolvedModel();
    }

    // 0x100381db0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OperationRecordEntry::OperationRecordEntry(OperationRecordEntry&&): jumps straight to the base-object constructor

    // 0x100381ea0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OperationRecordEntry::OperationRecordEntry(OperationRecordEntry&&)
    void OperationRecordEntry::OperationRecordEntry(OperationRecordEntry* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        new (m_inputModel, (ResolvedModel*)param_1->m_inputModel) ResolvedModel();
        new (m_outputModel, (ResolvedModel*)param_1->m_outputModel) ResolvedModel();
    }

    // 0x100381f10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedModel::ResolvedModel(ResolvedModel&&): jumps straight to the base-object constructor

    // 0x100381f20, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedModel::ResolvedModel(ResolvedModel&&)
    void ResolvedModel::ResolvedModel(ResolvedModel* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&m_animationState, (shared_ptr*)&param_1->m_animationState);
        uVar1 = param_1->field_48;
        uVar2 = param_1->field_56;
        uVar3 = param_1->field_64;
        uVar4 = param_1->field_72;
        uVar5 = param_1->field_80;
        uVar6 = param_1->field_88;
        uVar7 = param_1->field_104;
        field_96 = param_1->field_96;
        field_104 = uVar7;
        field_80 = uVar5;
        field_88 = uVar6;
        field_64 = uVar3;
        field_72 = uVar4;
        field_48 = uVar1;
        field_56 = uVar2;
    }

    // 0x100382e00, 16 bytes, placed by debug map only (low confidence)
    // CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&, unsigned short&, unsigned short&) const::$_6::operator()(jag::graphics::GeometryBatch const&) const
    /* CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&,
   unsigned short&, unsigned short&, unsigned short&)
   const::$_6::TEMPNAMEPLACEHOLDERVALUE(jag::graphics::GeometryBatch const&) const */

    _func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr* const ::$_6::
    operator()(GeometryBatch * param_1) {
        _func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr* p_Var1;

        p_Var1 = (_func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr*)
            GetBoneIDMap();
        return p_Var1;
    }

    // 0x1003835c0, 16 bytes, placed by debug map only (low confidence)
    // CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&, unsigned short&, unsigned short&) const::$_7::operator()(jag::graphics::GeometryBatch const&) const
    /* CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&,
   unsigned short&, unsigned short&, unsigned short&)
   const::$_7::TEMPNAMEPLACEHOLDERVALUE(jag::graphics::GeometryBatch const&) const */

    _func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr* const ::$_7::
    operator()(GeometryBatch * param_1) {
        _func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr* p_Var1;

        p_Var1 = (_func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr*)
            GetJointIDMap();
        return p_Var1;
    }

    // 0x100383d30, 16 bytes, placed by debug map only (low confidence)
    // CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&, unsigned short&, unsigned short&) const::$_8::operator()(jag::graphics::GeometryBatch const&) const
    /* CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&,
   unsigned short&, unsigned short&, unsigned short&)
   const::$_8::TEMPNAMEPLACEHOLDERVALUE(jag::graphics::GeometryBatch const&) const */

    _func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr* const ::$_8::
    operator()(GeometryBatch * param_1) {
        _func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr* p_Var1;

        p_Var1 = (_func_IncrementLabelOffsets_Model_const_ptr_unsigned_short_ptr_unsigned_short_ptr_unsigned_short_ptr*)
            GetMaterial();
        return p_Var1;
    }

    // 0x100383d40, 112 bytes, inline, placed by debug map only (low confidence)
    // CombineOperation::UpdateLabelOffset(jag::graphics::Model const&, unsigned short&, std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const* (jag::graphics::GeometryBatch const&)>) const::$_9::operator()(unsigned short, std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const&) const
    /* CombineOperation::UpdateLabelOffset(jag::graphics::Model const&, unsigned
   short&, std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned
   short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>,
   eastl::allocator> > const* (jag::graphics::GeometryBatch const&)>)
   const::$_9::TEMPNAMEPLACEHOLDERVALUE(unsigned short,
   std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const&) const
    */

    _func_UpdateLabelOffset_Model_const_ptr_unsigned_short_ptr_function* const ::$_9::operator()(ushort param_1,
                                                                                                 unique_ptr * param_2) {
        function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                 eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>*
            this_00;
        char cVar1;
        GeometryBatchInstance* this_01;
        GeometryBatch* pGVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        ushort* puVar3;
        ushort local_14;
        ushort local_12;

        this_00 =
            *(function<
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>**)this;
        this_01 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_2);
        pGVar2 = (GeometryBatch*)this_01->GetGeometryBatch();
        this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
            std::function<eastl::vector_map<
                unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned short, unsigned short>,
                              eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::operator()(this_00,
                                                                                                          pGVar2);
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_02);
        if (cVar1 == '\0') {
            this_02->back();
            puVar3 = std::max<unsigned short>(&local_12, &local_14);
            param_1 = *puVar3;
        }
        return (_func_UpdateLabelOffset_Model_const_ptr_unsigned_short_ptr_function*)(ulong)param_1;
    }

    // 0x100383ec0, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TransformedPoseStateRSeven::TransformedPoseStateRSeven(jag::math::Matrix43T<float>)
    void TransformedPoseStateRSeven::TransformedPoseStateRSeven() {
        TransformedPoseStateRSeven();
    }

    // 0x100383ef0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TransformedPoseStateRSeven::TransformedPoseStateRSeven(jag::math::Matrix43T<float>)
    void TransformedPoseStateRSeven::TransformedPoseStateRSeven() {
        undefined8 in_stack_00000008;
        undefined8 in_stack_00000010;
        undefined8 in_stack_00000018;
        undefined8 in_stack_00000020;
        undefined8 in_stack_00000028;
        undefined8 in_stack_00000030;

        new (this) PoseStateRSeven(5);
        field_0 = &PTR_GetBoneTransform_100efae30;
        field_16 = in_stack_00000008;
        field_24 = in_stack_00000010;
        field_32 = in_stack_00000018;
        field_40 = in_stack_00000020;
        field_48 = in_stack_00000028;
        field_56 = in_stack_00000030;
    }

    // 0x100383ff0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::ChainedPoseStateRSeven(shared_ptr<PoseStateRSeven> const&, shared_ptr<PoseStateRSeven> const&): jumps straight to the base-object constructor

    // 0x100384000, 208 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::ChainedPoseStateRSeven(shared_ptr<PoseStateRSeven> const&, shared_ptr<PoseStateRSeven> const&)
    void ChainedPoseStateRSeven::ChainedPoseStateRSeven(shared_ptr* param_1, shared_ptr* param_2) {
        bool bVar1;

        new (this) PoseStateRSeven(0);
        field_0 = &PTR_GetBoneTransform_100efafa0;
        new (field_16, param_1) shared_ptr<Decor>();
        new (field_32, param_2) shared_ptr<Decor>();
        bVar1 = field_16->operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_first",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      395, "First pose state may not be null.");
        }
        bVar1 = field_32->operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_second",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      396, "Second pose state may not be null.");
        }
    }

    // 0x100384170, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::~ChainedPoseStateRSeven(): jumps straight to the base-object destructor

    // 0x100384180, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::~ChainedPoseStateRSeven()
    void ChainedPoseStateRSeven::~ChainedPoseStateRSeven() {
        field_0 = &PTR_GetBoneTransform_100efafa0;
        field_32->~shared_ptr();
        field_16->~shared_ptr();
    }

    // 0x100384220, 32 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::ShiftedLabelRangePoseStateRSeven(shared_ptr<PoseStateRSeven> const&, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short)
    void ShiftedLabelRangePoseStateRSeven::ShiftedLabelRangePoseStateRSeven(shared_ptr* param_1, ushort param_2,
                                                                            ushort param_3, ushort param_4,
                                                                            ushort param_5, ushort param_6,
                                                                            ushort param_7) {
        ShiftedLabelRangePoseStateRSeven(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x100384240, 208 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::ShiftedLabelRangePoseStateRSeven(shared_ptr<PoseStateRSeven> const&, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short)
    void ShiftedLabelRangePoseStateRSeven::ShiftedLabelRangePoseStateRSeven(shared_ptr* param_1, ushort param_2,
                                                                            ushort param_3, ushort param_4,
                                                                            ushort param_5, ushort param_6,
                                                                            ushort param_7) {
        new (this) PoseStateRSeven(4);
        field_0 = &PTR_GetBoneTransform_100efafd0;
        new (field_16, param_1) shared_ptr<Decor>();
        field_32 = param_2;
        field_34 = param_3;
        field_36 = param_4;
        field_38 = param_5;
        field_40 = param_6;
        field_42 = param_7;
        if (!field_16->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pose",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      431, "Pose must not be null");
        }
    }

    // 0x1003843b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::~ShiftedLabelRangePoseStateRSeven(): jumps straight to the base-object destructor

    // 0x1003843c0, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::~ShiftedLabelRangePoseStateRSeven()
    void ShiftedLabelRangePoseStateRSeven::~ShiftedLabelRangePoseStateRSeven() {
        field_0 = &PTR_GetBoneTransform_100efafd0;
        field_16->~shared_ptr();
    }

    // 0x100384440, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::MaskedDashPoseStateRSeven(shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&, Array<int, eastl::allocator> const&, bool): jumps straight to the base-object constructor

    // 0x100384450, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::MaskedDashPoseStateRSeven(shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&, Array<int, eastl::allocator> const&, bool)
    void MaskedDashPoseStateRSeven::MaskedDashPoseStateRSeven(shared_ptr* param_1, int param_2, ResolvedModel* param_3,
                                                              Array* param_4, bool param_5) {
        new (this) DashBasePoseStateRSeven(1, param_1, param_2, param_3);
        field_0 = &PTR_GetBoneTransform_100efaf10;
        new (&field_168, param_4) Array<int, eastl::allocator>();
        m_invertMask = param_5;
        InitializeFrameData(this);
    }

    // 0x1003844d0, 352 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DashBasePoseStateRSeven::DashBasePoseStateRSeven(PoseStateRSeven::Type, shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&)
    void DashBasePoseStateRSeven::DashBasePoseStateRSeven(undefined8 param_2, shared_ptr* param_3, undefined4 param_4,
                                                          ResolvedModel* param_5) {
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        DashBasePoseStateRSeven* pDVar2;

        PoseStateRSeven::PoseStateRSeven();
        field_0 = &PTR_GetBoneTransform_100efae60;
        new (field_16, param_3) shared_ptr<Decor>();
        m_frame = param_4;
        std::unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>::unique_ptr<true,
                                                                                                               void>(
            (unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>*)&field_40);
        std::unique_ptr<Array<float, eastl::allocator>,
                        std::default_delete<Array<float, eastl::allocator>>>::unique_ptr<true,
                                                                                         void>((
            unique_ptr<Array<float, eastl::allocator>, std::default_delete<Array<float, eastl::allocator>>>*)&field_48);
        new (&field_56, (_func_decltype_nullptr*)param_3) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_80) jag::math::Matrix43T<float>();
        new (&field_128, (_func_decltype_nullptr*)param_3) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_144) Array<jag::graphics::LabelData, eastl::allocator>();
        if (!field_16->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_frameSet",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      126, "Frameset may not be null.");
        }
        this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)param_5->GetAnimationState();
        pDVar2 = (DashBasePoseStateRSeven*)eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (pDVar2 == this) {
            /* WARNING: Subroutine does not return */
            LogAssert("labeledModel.GetAnimationState().get() != this",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      127, (char*)0);
        }
        LoadFromLabeledModel(this, param_5);
    }

    // 0x100384630, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DashBasePoseStateRSeven::~DashBasePoseStateRSeven()
    void DashBasePoseStateRSeven::~DashBasePoseStateRSeven() {
        field_0 = &PTR_GetBoneTransform_100efae60;
        (&field_144)->~Array();
        (&field_128)->~shared_ptr();
        (&field_56)->~weak_ptr();
        (&field_48)->~unique_ptr();
        (&field_40)->~unique_ptr();
        field_16->~shared_ptr();
    }

    // 0x1003848f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::~MaskedDashPoseStateRSeven(): jumps straight to the base-object destructor

    // 0x100384900, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::~MaskedDashPoseStateRSeven()
    void MaskedDashPoseStateRSeven::~MaskedDashPoseStateRSeven() {
        field_0 = &PTR_GetBoneTransform_100efaf10;
        (&field_168)->~Array();
        ~DashBasePoseStateRSeven();
    }

    // 0x100384980, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DashPoseStateRSeven::DashPoseStateRSeven(shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&): jumps straight to the base-object constructor

    // 0x100384990, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DashPoseStateRSeven::DashPoseStateRSeven(shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&)
    void DashPoseStateRSeven::DashPoseStateRSeven(shared_ptr* param_1, int param_2, ResolvedModel* param_3) {
        new (this) DashBasePoseStateRSeven(1, param_1, param_2, param_3);
        field_0 = &PTR_GetBoneTransform_100efaeb8;
        InitializeFrameData(this);
    }

    // 0x100384a80, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DashPoseStateRSeven::~DashPoseStateRSeven(): jumps straight to the base-object destructor

    // 0x100384a90, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DashPoseStateRSeven::~DashPoseStateRSeven()
    void DashPoseStateRSeven::~DashPoseStateRSeven() {
        ~DashBasePoseStateRSeven();
    }

    // 0x10038b3c0, 32 bytes, inline, placed by debug map only (low confidence)
    // AnimateBaseOperation::SeparateBatchByLabelTransparency(jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&, eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator>&) const::$_10::operator()(unsigned short) const
    /* AnimateBaseOperation::SeparateBatchByLabelTransparency(jag::graphics::GeometryBatchInstance
   const&, jag::graphics::Model&,
   eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator>&) const::$_10::TEMPNAMEPLACEHOLDERVALUE(unsigned short) const */

    _func_SeparateBatchByLabelTransparency_GeometryBatchInstance_const_ptr_Model_ptr_vector_ptr* const ::$_10::
    operator()(ushort param_1) {
        ushort* puVar1;
        undefined6 in_register_00000032;

        puVar1 = (ushort*)eastl::vector<AnimateBaseOperation::SeparatedIndexCount, eastl::allocator>::operator[](
            *(vector<AnimateBaseOperation::SeparatedIndexCount, eastl::allocator>**)this,
            (ulong)((uint)((int)CONCAT62(in_register_00000032, param_1) * 43691) >> 17));
        return (
            _func_SeparateBatchByLabelTransparency_GeometryBatchInstance_const_ptr_Model_ptr_vector_ptr*)(ulong)*puVar1;
    }

    // 0x10038bd90, 32 bytes, inline, placed by debug map only (low confidence)
    // AnimateBaseOperation::SeparateBatchByLabelTransparency(jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&, eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator>&) const::$_11::operator()(unsigned short) const
    /* AnimateBaseOperation::SeparateBatchByLabelTransparency(jag::graphics::GeometryBatchInstance
   const&, jag::graphics::Model&,
   eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator>&) const::$_11::TEMPNAMEPLACEHOLDERVALUE(unsigned short) const */

    _func_SeparateBatchByLabelTransparency_GeometryBatchInstance_const_ptr_Model_ptr_vector_ptr* const ::$_11::
    operator()(ushort param_1) {
        long lVar1;
        undefined6 in_register_00000032;

        lVar1 = eastl::vector<AnimateBaseOperation::SeparatedIndexCount, eastl::allocator>::operator[](
            *(vector<AnimateBaseOperation::SeparatedIndexCount, eastl::allocator>**)this,
            (ulong)((uint)((int)CONCAT62(in_register_00000032, param_1) * 43691) >> 17));
        return (_func_SeparateBatchByLabelTransparency_GeometryBatchInstance_const_ptr_Model_ptr_vector_ptr*)(ulong) *
               (ushort*)(lVar1 + 2);
    }

    // 0x10038d8c0, 80 bytes, placed by debug map only (low confidence)
    // HillSkewOperation::SkewModelExact(ResolvedModel const&) const::$_12::operator()(int) const
    /* HillSkewOperation::SkewModelExact(ResolvedModel
   const&) const::$_12::TEMPNAMEPLACEHOLDERVALUE(int) const */

    _func_SkewModelExact_ResolvedModel_const_ptr* const ::$_12::operator()(int param_1) {
        GeometryBatchInstance* this_00;
        GeometryBatch* this_01;
        vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>* this_02;
        _func_SkewModelExact_ResolvedModel_const_ptr* p_Var1;

        this_00 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->(
                    *(unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>**)this);
        this_01 = (GeometryBatch*)this_00->GetGeometryBatch();
        this_02 = (vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>*)this_01->GetVertexDataBufferPos();
        p_Var1 = (_func_SkewModelExact_ResolvedModel_const_ptr*)
            eastl::vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>::operator[](this_02, (long)param_1);
        return p_Var1;
    }

    // 0x10038e260, 80 bytes, placed by debug map only (low confidence)
    // HillSkewOperation::SkewModelExact(ResolvedModel const&) const::$_13::operator()(int, int) const
    /* HillSkewOperation::SkewModelExact(ResolvedModel
   const&) const::$_13::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

    _func_SkewModelExact_ResolvedModel_const_ptr* const ::$_13::operator()(int param_1, int param_2) {
        GeometryBatchInstance* this_00;
        GeometryBatch* this_01;
        vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>* this_02;
        _func_SkewModelExact_ResolvedModel_const_ptr* p_Var1;

        this_00 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->(
                    *(unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>**)this);
        this_01 = (GeometryBatch*)this_00->GetGeometryBatch();
        this_02 = (vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>*)this_01->GetVertexDataBufferPos();
        p_Var1 = (_func_SkewModelExact_ResolvedModel_const_ptr*)
            eastl::vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>::operator[](this_02, (long)param_1);
        *(float*)(p_Var1 + 4) = (float)-param_2;
        return p_Var1;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100383e60, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::TransformedPoseStateRSeven* placement_new<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float> >(void*, math::Matrix43T<float>&&)
    TransformedPoseStateRSeven*
    placement_new<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float>>(void* param_1,
                                                                                        Matrix43T* param_2) {
        oldscape::dash3d::TransformedPoseStateRSeven::TransformedPoseStateRSeven();
        return param_1;
    }

    // 0x100383ea0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>, int, oldscape::dash3d::TransformedPoseStateRSeven*&>(void*, int&&, oldscape::dash3d::TransformedPoseStateRSeven*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>, int,
                       oldscape::dash3d::TransformedPoseStateRSeven*&>(void* param_1, int* param_2,
                                                                       TransformedPoseStateRSeven** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100383f30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TransformedPoseStateRSeven*): jumps straight to the base-object constructor

    // 0x100383f40, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TransformedPoseStateRSeven*)
    void ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>::ref_counter_shared_trivial(
        ulong param_1, TransformedPoseStateRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d48 + 16;
    }

    // 0x100383f70, 96 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ChainedPoseStateRSeven* placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven> >(void*, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&&)
    ChainedPoseStateRSeven*
    jag::placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                       shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>>(void* param_1, shared_ptr* param_2,
                                                                                 shared_ptr* param_3) {
        shared_ptr local_30;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, param_3);
        oldscape::dash3d::ChainedPoseStateRSeven::ChainedPoseStateRSeven(param_1, param_2, &local_30);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x100383fd0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>* placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int, oldscape::dash3d::ChainedPoseStateRSeven*&>(void*, int&&, oldscape::dash3d::ChainedPoseStateRSeven*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                       oldscape::dash3d::ChainedPoseStateRSeven*&>(void* param_1, int* param_2,
                                                                   ChainedPoseStateRSeven** param_3) {
        ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::ref_counter_shared(param_1, (long)*param_2,
                                                                                         *param_3);
        return param_1;
    }

    // 0x1003840d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::ChainedPoseStateRSeven*): jumps straight to the base-object constructor

    // 0x1003840e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::ChainedPoseStateRSeven*)
    void
    ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::ref_counter_shared(ulong param_1,
                                                                                     ChainedPoseStateRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ChainedPoseStateRSeven**)(this + 24) = param_2;
    }

    // 0x100384120, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ChainedPoseStateRSeven();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003841c0, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ShiftedLabelRangePoseStateRSeven* placement_new<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&>(void*, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&)
    ShiftedLabelRangePoseStateRSeven*
    jag::placement_new<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven,
                       shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&,
                       unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&,
                       unsigned short const&>(void* param_1, shared_ptr* param_2, ushort* param_3, ushort* param_4,
                                              ushort* param_5, ushort* param_6, ushort* param_7, ushort* param_8) {
        oldscape::dash3d::ShiftedLabelRangePoseStateRSeven::ShiftedLabelRangePoseStateRSeven(
            param_1, param_2, *param_3, *param_4, *param_5, *param_6, *param_7, *param_8);
        return param_1;
    }

    // 0x100384200, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>* placement_new<ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>, int, oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*&>(void*, int&&, oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>, int,
                                           oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*&>(
        void* param_1, int* param_2, ShiftedLabelRangePoseStateRSeven** param_3) {
        ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100384310, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*): jumps straight to the base-object constructor

    // 0x100384320, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*)
    void ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::ref_counter_shared(
        ulong param_1, ShiftedLabelRangePoseStateRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ShiftedLabelRangePoseStateRSeven**)(this + 24) = param_2;
    }

    // 0x100384360, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ShiftedLabelRangePoseStateRSeven();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003843e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ChainedPoseStateRSeven* placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven>&, shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(void*, shared_ptr<oldscape::dash3d::PoseStateRSeven>&, shared_ptr<oldscape::dash3d::PoseStateRSeven>&)
    /* oldscape::dash3d::ChainedPoseStateRSeven*
   placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
   shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
   shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(void*,
   shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
   shared_ptr<oldscape::dash3d::PoseStateRSeven>&) */

    ChainedPoseStateRSeven*
    jag::placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                       shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(void* param_1, shared_ptr* param_2,
                                                                       shared_ptr* param_3) {
        oldscape::dash3d::ChainedPoseStateRSeven::ChainedPoseStateRSeven(param_1, param_2, param_3);
        return param_1;
    }

    // 0x100384400, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::MaskedDashPoseStateRSeven* placement_new<oldscape::dash3d::MaskedDashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&, Array<int, eastl::allocator>&, bool const&>(void*, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&, Array<int, eastl::allocator>&, bool const&)
    MaskedDashPoseStateRSeven*
    jag::placement_new<oldscape::dash3d::MaskedDashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                       int const&, oldscape::dash3d::ResolvedModel_const&, Array<int, eastl::allocator>&, bool const&>(
        void* param_1, shared_ptr* param_2, int* param_3, ResolvedModel* param_4, Array* param_5, bool* param_6) {
        oldscape::dash3d::MaskedDashPoseStateRSeven::MaskedDashPoseStateRSeven(param_1, param_2, *param_3, param_4,
                                                                               param_5, *param_6);
        return param_1;
    }

    // 0x100384420, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>* placement_new<ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>, int, oldscape::dash3d::MaskedDashPoseStateRSeven*&>(void*, int&&, oldscape::dash3d::MaskedDashPoseStateRSeven*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>, int,
                       oldscape::dash3d::MaskedDashPoseStateRSeven*&>(void* param_1, int* param_2,
                                                                      MaskedDashPoseStateRSeven** param_3) {
        ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::ref_counter_shared(param_1, (long)*param_2,
                                                                                            *param_3);
        return param_1;
    }

    // 0x100384850, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::MaskedDashPoseStateRSeven*): jumps straight to the base-object constructor

    // 0x100384860, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::MaskedDashPoseStateRSeven*)
    void ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::ref_counter_shared(
        ulong param_1, MaskedDashPoseStateRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MaskedDashPoseStateRSeven**)(this + 24) = param_2;
    }

    // 0x1003848a0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MaskedDashPoseStateRSeven();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 208;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100384940, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::DashPoseStateRSeven* placement_new<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&>(void*, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&)
    DashPoseStateRSeven*
    jag::placement_new<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                       int const&, oldscape::dash3d::ResolvedModel_const&>(void* param_1, shared_ptr* param_2,
                                                                           int* param_3, ResolvedModel* param_4) {
        oldscape::dash3d::DashPoseStateRSeven::DashPoseStateRSeven(param_1, param_2, *param_3, param_4);
        return param_1;
    }

    // 0x100384960, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>* placement_new<ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>, int, oldscape::dash3d::DashPoseStateRSeven*&>(void*, int&&, oldscape::dash3d::DashPoseStateRSeven*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>, int,
                                           oldscape::dash3d::DashPoseStateRSeven*&>(void* param_1, int* param_2,
                                                                                    DashPoseStateRSeven** param_3) {
        ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x1003849e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::DashPoseStateRSeven*): jumps straight to the base-object constructor

    // 0x1003849f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::DashPoseStateRSeven*)
    void ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::ref_counter_shared(ulong param_1,
                                                                                       DashPoseStateRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7780 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DashPoseStateRSeven**)(this + 24) = param_2;
    }

    // 0x100384a30, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~DashPoseStateRSeven();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 176;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100384aa0, 96 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ChainedPoseStateRSeven* placement_new<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>, shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(void*, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&&, shared_ptr<oldscape::dash3d::PoseStateRSeven>&)
    ChainedPoseStateRSeven* jag::placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
                                               shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>,
                                               shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(void* param_1,
                                                                                               shared_ptr* param_2,
                                                                                               shared_ptr* param_3) {
        shared_ptr local_30;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, param_2);
        oldscape::dash3d::ChainedPoseStateRSeven::ChainedPoseStateRSeven(param_1, &local_30, param_3);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x100387bb0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*,
   unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(
                SafeBucketAllocatorSTL<
                    std::__packaged_task_func<std::__bind<graphicutils::BatchDestroyHelper<
                                                  shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda() _1_>,
                                              SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>* this,
                __packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 24);
    }

    // 0x10038e3b0, 32 bytes, inline, placed by debug map only (low confidence)
    // extract_bits(unsigned int, unsigned int, unsigned int)
    uint extract_bits(uint param_1, uint param_2, uint param_3) {
        return ~(-1 << ((byte)param_3 & 31)) & param_1 >> ((byte)param_2 & 31);
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x100385130, 192 bytes, inline, placed by debug map only (low confidence)
    // void BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::OnDestroy<BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator> > >(BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator> >&)
    /* void BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::OnDestroy<BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator> >
   >(BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator> >&) */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        OnDestroy<BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                          MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                          eastl::allocator>>>(
            BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this,
            BatchDestroy* param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char cVar6;
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 56));
        cVar6 = UseDestroyList();
        if (cVar6 != '\0') {
            this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)(this + 16);
            lVar1 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
            lVar2 = param_1->size();
            this_00->reserve(lVar1 + lVar2);
            uVar3 = param_1->HeapBeginPtr();
            uVar4 = param_1->end();
            uVar5 = std::back_inserter<
                eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                              MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                              eastl::allocator>>((vector*)this_00);
            eastl::move<std::unique_ptr<graphics::GeometryBatchInstance,
                                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*,
                        std::back_insert_iterator<eastl::vector<
                            std::unique_ptr<graphics::GeometryBatchInstance,
                                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                            eastl::allocator>>>(uVar3, uVar4, uVar5);
            param_1->reset_lose_memory();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100385240, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::BatchDestroyHelper(): jumps straight to the base-object constructor

    // 0x100385280, 304 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::BatchDestroyHelper()
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::BatchDestroyHelper() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        BatchDestroyHelper(
            BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this) {
        BatchDestroyManager* pBVar1;
        BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                           MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            this_00;
        function<void()>* this_01;
        function local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) AutoSingleton<BatchDestroyHelper<
            std::unique_ptr<graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>();
        new (this) render::RenderDeviceOnEndFrame(true);
        *(undefined**)this = PTR_vtable_100ee7098 + 16;
        new ((this + 16))
            eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                          MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                          eastl::allocator>();
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>)1;
        new ((this + 56)) std::mutex();
        this_00 = this + 120;
        std::atomic<int>::atomic((int)this_00);
        pBVar1 = (BatchDestroyManager*)this_00->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                               MakeUniquePool<graphics::GeometryBatchInstance, 3072>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _1_,
            void>(local_68, this);
        pBVar1->AddPauseCallback(local_68);
        this_01 = (function<void()>*)local_68;
        std::function<void()>::~function(this_01);
        pBVar1 = (BatchDestroyManager*)this_01->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                               MakeUniquePool<graphics::GeometryBatchInstance, 3072>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _2_,
            void>(local_68, this);
        pBVar1->AddResumeCallback(local_68);
        std::function<void()>::~function((function<void()>*)local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100385450, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyManager::AddPauseCallback(std::function<void ()>&&)
    /* BatchDestroyManager::AddPauseCallback(std::function<void ()>&&) */

    void BatchDestroyManager::AddPauseCallback(function* param_1) {
        eastl::vector<std::function<void()>, eastl::allocator>::emplace_back<std::function<void()>>(
            (vector<std::function<void()>, eastl::allocator>*)this, param_1);
    }

    // 0x100385470, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyManager::AddResumeCallback(std::function<void ()>&&)
    /* BatchDestroyManager::AddResumeCallback(std::function<void ()>&&) */

    void BatchDestroyManager::AddResumeCallback(function* param_1) {
        eastl::vector<std::function<void()>, eastl::allocator>::emplace_back<std::function<void()>>(
            (vector<std::function<void()>, eastl::allocator>*)&field_32, param_1);
    }

    // 0x1003854a0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::~BatchDestroyHelper(): jumps straight to the base-object destructor

    // 0x1003854b0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::~BatchDestroyHelper()
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::~BatchDestroyHelper() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        ~BatchDestroyHelper(
            BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this) {
        ~BatchDestroyHelper(this);
        operator_delete(this);
    }

    // 0x1003854d0, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::OnEndFrame()
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::OnEndFrame() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        OnEndFrame(BatchDestroyHelper<
                   std::unique_ptr<graphics::GeometryBatchInstance,
                                   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this) {
        Flush(this);
    }

    // 0x100385560, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyManager::BatchDestroyManager(): jumps straight to the base-object constructor

    // 0x1003855a0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyManager::BatchDestroyManager()
    void BatchDestroyManager::BatchDestroyManager() {
        new (this) AutoSingleton<BatchDestroyManager>();
        eastl::vector<std::function<void()>, eastl::allocator>::vector(
            (vector<std::function<void()>, eastl::allocator>*)this);
        eastl::vector<std::function<void()>, eastl::allocator>::vector(
            (vector<std::function<void()>, eastl::allocator>*)&field_32);
    }

    // 0x100386360, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::BatchDestroyHelper()::{lambda()#1}::operator()() const
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::BatchDestroyHelper()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance,
        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::BatchDestroyHelper()::{
        lambda() #1
    }
    ::operator()() {
        OnPause(*(BatchDestroyHelper<
                  std::unique_ptr<graphics::GeometryBatchInstance,
                                  MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>**)this);
    }

    // 0x100386370, 80 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::OnPause()
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::OnPause()
    */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        OnPause(BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this) {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)(this + 56));
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>)0;
        ((this + 16))->clear();
        WaitDestroyList(this);
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x1003863c0, 208 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::WaitDestroyList()
    /* WARNING: Removing unreachable block (ram,4298663049) */
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::WaitDestroyList() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        WaitDestroyList(
            BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this) {
        int iVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        int iVar4;
        type* in_RSI;
        __atomic_base* this_00;
        duration local_28[8];

        this_00 = (__atomic_base*)(this + 120);
        iVar1 = std::__atomic_base::operator_cast_to_int(this_00);
        iVar4 = 0;
        if (iVar1 != 0) {
            do {
                if (iVar4 == 1000)
                    goto LAB_100386423;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_28, in_RSI);
                std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_28);
                iVar1 = std::__atomic_base::operator_cast_to_int(this_00);
                iVar4 = iVar4 + 1;
            } while (iVar1 != 0);
        }
        if (iVar4 < 1000) {
            return;
        }
    LAB_100386423:
        uVar3 = logger::default_logger();
        uVar2 = std::__atomic_base<int, false>::load(this_00);
        logger::Logger::Log(uVar3, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                            "graphicutils/BatchDestroy.h",
                            220, "BatchDestroy took too long, %d entries remaining", uVar2);
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "BatchDestroy.h",
                        221, (char*)0);
    }

    // 0x100387100, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::BatchDestroyHelper()::{lambda()#2}::operator()() const
    /* BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::BatchDestroyHelper()::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE() const */

    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper()::{
        lambda() #2
    }
    ::operator()() {
        OnResume(*(BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>**)this);
    }

    // 0x100387110, 64 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::OnResume()
    /* BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::OnResume() */

    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnResume() {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 56));
        this[48] = (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)1;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100387160, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::~BatchDestroyHelper()
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::~BatchDestroyHelper() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        ~BatchDestroyHelper(
            BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this) {
        *(undefined**)this = PTR_vtable_100ee7098 + 16;
        ((this + 56))->~mutex();
        ((this + 16))->~vector();
        ~RenderDeviceOnEndFrame();
        ~AutoSingleton();
    }

    // 0x1003871a0, 80 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
        Flush(BatchDestroyHelper<
              std::unique_ptr<graphics::GeometryBatchInstance,
                              MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this) {
        Layout* this_00;
        vector* pvVar1;
        type* in_RSI;
        undefined1 local_20[8];
        BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                           MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            local_18;

        this_00 = (Layout*)Instance();
        pvVar1 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        local_18 = this;
        ThreadPool::AddTask<BatchDestroyHelper<std::unique_ptr<
            graphics::GeometryBatchInstance,
            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
            (ThreadPool*)local_20, (char*)pvVar1, (_lambda___1_*)"Flush");
        local_20->~future();
    }

    // 0x100387c10, 256 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}::operator()() const
    /* BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    ::operator()() {
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;
        long lVar1;
        int iVar2;
        ulong uVar3;
        unique_ptr* puVar4;
        unique_ptr* puVar5;
        unique_ptr* puVar6;
        Array<std::unique_ptr<graphics::GeometryBatchInstance,
                              MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
              BucketAllocatorEASTL>
            local_48[24];
        scoped_lock<std::mutex> local_30[8];

        lVar1 = *(long*)this;
        Array<std::unique_ptr<graphics::GeometryBatchInstance,
                              MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
              BucketAllocatorEASTL>::Array(local_48);
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(lVar1 + 56));
        this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)(lVar1 + 16);
        iVar2 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        std::__atomic_base<int, true>::operator+=((__atomic_base<int, true>*)(lVar1 + 120), iVar2);
        uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        local_48->set_max_size(uVar3, 0);
        puVar4 = (unique_ptr*)this_00->HeapBeginPtr();
        puVar5 = (unique_ptr*)this_00->end();
        puVar6 = (unique_ptr*)local_48->data();
        eastl::move<std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*,
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*>(
            puVar4, puVar5, puVar6);
        this_00->reset_lose_memory();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        iVar2 = local_48->end();
        local_48->clear();
        std::__atomic_base<int, true>::operator-=((__atomic_base<int, true>*)(lVar1 + 120), iVar2);
        local_48->~Array();
    }

    // 0x10038a470, 96 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::UseDestroyList() const
    /* BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::UseDestroyList() const */

    ulong BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::UseDestroyList() {
        long lVar2;
        RenderDevice* pRVar3;
        MapArea* this_00;
        RenderContext* this_01;

        if (this[48] != (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)0) {
            lVar2 = Singleton<render::RenderDevice>::InstancePtr();
            if (lVar2 != 0) {
                pRVar3 = (RenderDevice*)Instance();
                if (pRVar3->GetReadyState() == 0) {
                    this_00 = (MapArea*)pRVar3->Instance();
                    lVar2 = this_00->GetOrigin();
                    if (*(char*)(lVar2 + 227) != '\0') {
                        pRVar3 = (RenderDevice*)this_00->Instance();
                        this_01 = (RenderContext*)pRVar3->GetPrimaryRenderContext();
                        return this_01->IsDeviceResetInProgress() ^ 1;
                    }
                }
            }
        }
        return 0;
    }

} // namespace jag::graphicutils

namespace jag::math {
    // 0x1003846a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T(): jumps straight to the base-object constructor

    // 0x100384710, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T()
    void Matrix43T<float>::Matrix43T() {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
    }

    // 0x10038e2c0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::Matrix33T(Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&)
    /* Matrix33T<float>::Matrix33T(Vector3T<float>&&,
   Vector3T<float>&&, Vector3T<float>&&) */

    void Matrix33T<float>::Matrix33T(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        SetXYZ(param_1);
        ((this + 12))->SetXYZ(param_2);
        ((this + 24))->SetXYZ(param_3);
    }

    // 0x10038e330, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(unsigned int)
    void ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(uint param_1) {
        Set(this, param_1);
    }

    // 0x10038e340, 112 bytes, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::Set(unsigned int)
    void ColourStorage8888<ARGB8StorageLayout>::Set(uint param_1) {
        ColourStorage8888<ARGB8StorageLayout> CVar1;

        CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(param_1, 16, 8);
        this[2] = CVar1;
        CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(param_1, 8, 8);
        this[1] = CVar1;
        CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(param_1, 0, 8);
        *this = CVar1;
        CVar1 = (ColourStorage8888<ARGB8StorageLayout>)extract_bits(param_1, 24, 8);
        this[3] = CVar1;
    }

    // 0x10038e3d0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T<signed char>(Vector3T<signed char> const&)
    void Vector3T<float>::Vector3T<signed char>(Vector3T* param_1) {
        vector* pvVar1;
        char* pcVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(float*)this = (float)(int)(char)*pvVar1;
        pcVar2 = (char*)param_1->y();
        *(float*)(this + 4) = (float)(int)*pcVar2;
        pcVar2 = (char*)param_1->z();
        *(float*)(this + 8) = (float)(int)*pcVar2;
    }

    // 0x10038e430, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<int>::Vector3T<float>(Vector3T<float> const&)
    void Vector3T<int>::Vector3T<float>(Vector3T* param_1) {
        vector* pvVar1;
        float* pfVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(int*)this = (int)*(float*)pvVar1;
        pfVar2 = (float*)param_1->y();
        *(int*)(this + 4) = (int)*pfVar2;
        pfVar2 = (float*)param_1->second();
        *(int*)(this + 8) = (int)*pfVar2;
    }

    // 0x10038e480, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<int>::Vector3T(int)
    void Vector3T<int>::Vector3T(int param_1) {
        *(int*)this = param_1;
        *(int*)(this + 4) = param_1;
        *(int*)(this + 8) = param_1;
    }

    // 0x10038e490, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<signed char>::Vector3T<int>(Vector3T<int> const&)
    void Vector3T<signed char>::Vector3T<int>(Vector3T* param_1) {
        vector* pvVar1;
        Vector3T<signed char>* pVVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *this = (Vector3T<signed char>)*pvVar1;
        pVVar2 = (Vector3T<signed char>*)param_1->y();
        this[1] = *pVVar2;
        pVVar2 = (Vector3T<signed char>*)param_1->second();
        this[2] = *pVVar2;
    }

    // 0x10038e4d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<int>::Vector3T<signed char>(Vector3T<signed char> const&)
    void Vector3T<int>::Vector3T<signed char>(Vector3T* param_1) {
        vector* pvVar1;
        char* pcVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(int*)this = (int)(char)*pvVar1;
        pcVar2 = (char*)param_1->y();
        *(int*)(this + 4) = (int)*pcVar2;
        pcVar2 = (char*)param_1->z();
        *(int*)(this + 8) = (int)*pcVar2;
    }

} // namespace jag::math

// 0x10038cfa0, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
