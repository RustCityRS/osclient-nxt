// libs/math/MathAliases.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    // 0x1002edaa0
    uint32_t MayaPoseStateRSeven::GetLabelTransparencyDelta(unsigned long arg1) const {
        uint32_t uVar3;

        long lVar1 = eastl::vector_map<int, int>::find(field_72);
        long lVar2 = field_72.end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = *(uint32_t*)(lVar1 + 4);
        }
        return uVar3;
    }

    // 0x1002edaf0
    bool MayaPoseStateRSeven::IsEqual(const PoseStateRSeven& poseStateRSeven) const {
        bool bVar1;

        if ((poseStateRSeven.GetPos() == 3) && (bVar1 = *field_16 == poseStateRSeven.field_16, bVar1)) {
            return field_32 == *(int*)&poseStateRSeven.field_32;
        }
        return 0;
    }

    // 0x1002edbe0
    void operator==(const PoseStateRSeven& poseStateRSeven1, const PoseStateRSeven& poseStateRSeven2) {
        (poseStateRSeven1._vptr->IsEqual)(poseStateRSeven1);
    }

    // 0x1002edbf0
    uint8_t operator!=(const PoseStateRSeven& poseStateRSeven1, const PoseStateRSeven& poseStateRSeven2) {
        return poseStateRSeven1 == poseStateRSeven2 ^ 1;
    }

    // 0x1002ee570
    void DashBasePoseStateRSeven::UpdateAnimationOrigin(const eastl::vector<int>& arg1,
                                                        jag::math::Vector3T<float>& vector3, int arg3, int arg4,
                                                        int arg5) const {
        float arg2 = -(float)arg4;
        ColourHSL local_58((float)arg3, arg2, (float)arg5);
        uint64_t local_38 = (uint64_t)CalculateMappedCentreOfLabels();
        float local_30 = arg2;
        uint64_t local_48 = local_38 + local_58;
        float local_40 = arg2;
        vector3.SetXYZ(local_48);
    }

    // 0x1002ee5f0
    void DashBasePoseStateRSeven::UpdateFaceTransparency(const eastl::vector<int>& arg1, int arg2) const {
        int iVar1;
        int* piVar3;
        unsigned long uVar4;
        Array<float>* this_01;
        float* pfVar5;
        unsigned long arg1_00;

        if (arg1.size() != 0) {
            arg1_00 = 0;
            do {
                piVar3 = &arg1[arg1_00];
                iVar1 = *piVar3;
                uVar4 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)GetFaceTransparencyDeltas())->end();
                if ((unsigned long)(long)iVar1 < uVar4) {
                    this_01 = (Array<float>*)GetFaceTransparencyDeltas();
                    pfVar5 = (float*)(*this_01)[(long)iVar1];
                    *pfVar5 = *pfVar5 - (float)(arg2 << 3) * 0.003921569f;
                }
                arg1_00 = arg1_00 + 1;
                uVar4 = arg1.size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1002ee6a0
    uint64_t DashBasePoseStateRSeven::CalculateMappedCentreOfLabels(const eastl::vector<int>& arg1) const {
        Vector3T<float>* vector3;
        unsigned long uVar4;
        unsigned long arg1_00;
        Matrix43T<float> local_d8;
        ReturnValue local_a8;
        uint64_t local_70[2];
        uint64_t* local_58;
        uint8_t* local_50;
        Array<jag::graphics::LabelData>* local_48;
        unsigned int local_34;

        uint32_t local_38 = *(uint32_t*)(PTR_ZERO_100ee66e8 + 8);
        return local_40 = *(uint64_t*)PTR_ZERO_100ee66e8;
        auto puVar1 = field_128.end();
        auto piVar2 = arg1.HeapBeginPtr();
        auto piVar3 = arg1.end();
        if (piVar2 == piVar3) {
            local_34 = 0;
        } else {
            local_48 = (Array<jag::graphics::LabelData>*)&field_144;
            local_50 = &field_80;
            local_34 = 0;
            local_58 = puVar1;
            do {
                arg1_00 = (unsigned long)*piVar2;
                uVar4 = local_48->end();
                if (arg1_00 < uVar4) {
                    uVar4 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)GetBonePositions())->end();
                    if (arg1_00 < uVar4) {
                        GetBoneTransform(&local_a8, this, arg1_00);
                        local_d8* local_a8;
                        if (local_58 != nullptr) {
                            (**(void (**)(...))*local_58)(&local_a8, local_58, arg1_00);
                            local_d8 *= local_a8;
                        }
                        vector3 = (Vector3T<float>*)(*local_48)[arg1_00];
                        local_70[0] = *vector3 * local_d8;
                        local_a8[0] = (ReturnValue)(*((float)*(int*)(vector3 + 12))) * *local_70;
                        local_40 += local_a8;
                        local_34 = local_34 + *(int*)(vector3 + 12);
                    }
                }
                piVar2 = piVar2 + 1;
            } while (piVar2 != piVar3);
        }
        if (local_34 != 0) {
            local_40 /= ((float)local_34);
        }
        return local_40;
    }

    // 0x1002eeb70
    void DashBasePoseStateRSeven::LoadFromLabeledModel(const ResolvedModel& resolvedModel) {
        shared_ptr<PoseStateRSeven>* poseStateRSeven;
        function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>
            local_98[48];
        function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>
            local_68[56];
        long local_30;

        auto local_e8 = resolvedModel.GetLocalTransform();
        field_80 = local_e8;
        auto this_00 = resolvedModel.GetModel();
        TextureManager* this_01 = (TextureManager*)**this_00;
        auto labelDatas = this_01->GetTextureAtlasManager();
        field_144 = *labelDatas;
        (&field_56)->operator=(this_00);
        poseStateRSeven = (shared_ptr<PoseStateRSeven>*)resolvedModel.GetAnimationState();
        field_128 = *poseStateRSeven;
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>::
            function<DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel const&)::__1, void>(
                local_68, (__1*)poseStateRSeven);
        int iVar1 = GetMaximumLabel((Model*)this_01, (function<eastl::vector_map<unsigned short, unsigned short> const *
                                                               _(jag::graphics::GeometryBatch const&)>*)local_68);
        int local_a4 = iVar1 + 1;
        std::make_unique<Array<jag::math::Matrix43T<float>>, int&, jag::math::Matrix43T<float> const&>(local_e8,
                                                                                                       local_a4);
        ReturnValue* arg1 = &local_e8;
        field_40 = local_e8;
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>::
            function<DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel const&)::__2, void>(local_98,
                                                                                                     (__2*)arg1);
        iVar1 = GetMaximumLabel((Model*)this_01, (function<eastl::vector_map<unsigned short, unsigned short> const *
                                                           _(jag::graphics::GeometryBatch const&)>*)local_98);
        float local_9c = 0.0;
        int local_a0 = iVar1 + 1;
        local_e8 = std::make_unique<Array<float>, int&, float>(local_a0, local_9c);
        field_48 = local_e8;
    }

    // 0x1002eef20
    void GetMaximumLabel(
        const jag::graphics::Model& model,
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>
            callback) {
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance1;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance2;
        __8* in_RCX;

        auto layout = model.GetBatchList();
        geometryBatchInstance1 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                layout->HeapBeginPtr();
        auto this_00 = model.GetBatchList();
        geometryBatchInstance2 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)this_00->end();
        eastl::accumulate<
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const*,
            int,
            GetMaximumLabel(*(jag::graphics::Model const&),
                            std::function<eastl::vector_map<unsigned short, unsigned short> const*(
                                jag::graphics::GeometryBatch const&)>)::__8>(
            geometryBatchInstance1, geometryBatchInstance2, (int)callback, in_RCX);
    }

    // 0x1002ef090
    auto ChainedPoseStateRSeven::GetBoneTransform(unsigned long arg1) const {
        auto result;
        Matrix43T<float> local_88;
        uint8_t local_58[48];

        uint64_t* puVar1 = (uint64_t*)(*field_16).operator->();
        (**(void (**)(...))*puVar1)(&local_88, puVar1, arg1);
        puVar1 = (uint64_t*)(*field_32).operator->();
        (**(void (**)(...))*puVar1)(local_58, puVar1, arg1);
        result* local_88;
        return result;
    }

    // 0x1002ef140
    auto ChainedPoseStateRSeven::GetJointTransform(unsigned long arg1) const {
        auto result;
        Matrix43T<float> local_88;
        uint8_t local_58[48];

        long* plVar1 = (long*)(*field_16).operator->();
        (**(void (**)(...))(*plVar1 + 8))(&local_88, plVar1, arg1);
        plVar1 = (long*)(*field_32).operator->();
        (**(void (**)(...))(*plVar1 + 8))(local_58, plVar1, arg1);
        result* local_88;
        return result;
    }

    // 0x1002ef1c0
    float ChainedPoseStateRSeven::GetLabelTransparencyDelta(unsigned long arg1) const {
        long* plVar1 = (long*)(*field_16).operator->();
        float fVar2 = (float)(**(void (**)(...))(*plVar1 + 16))(plVar1, arg1);
        plVar1 = (long*)(*field_32).operator->();
        return (float)(**(void (**)(...))(*plVar1 + 16))(plVar1, arg1) + fVar2;
    }

    // 0x1002ef220
    bool ChainedPoseStateRSeven::IsEqual(const PoseStateRSeven& poseStateRSeven) const {
        PoseStateRSeven* pPVar3;
        PoseStateRSeven* pPVar4;

        if (poseStateRSeven.GetPos() == 0) {
            pPVar3 = (PoseStateRSeven*)**field_16;
            pPVar4 = (PoseStateRSeven*)poseStateRSeven.field_16;
            if (*pPVar3 == *pPVar4 != '\0') {
                pPVar3 = (PoseStateRSeven*)**field_32;
                pPVar4 = (PoseStateRSeven*)poseStateRSeven.field_32;
                return *pPVar3 == *pPVar4;
            }
        }
        return 0;
    }

    // 0x1002ef2a0
    void PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float>>& wrapArray,
                                                    const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                    const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                    const jag::math::Matrix44T<float>& matrix44) const {
        PoseStateProviderRSeven local_98;
        PoseStateProviderRSeven local_68;

        PoseStateProviderRSeven* pPVar1 = &local_68;
        std::function<jag::math::Matrix43T<float>(unsigned long)>::function<
            PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float>>&,
                                                       eastl::vector_map<unsigned short, unsigned short> const&,
                                                       eastl::vector_map<unsigned short, unsigned short> const&,
                                                       jag::math::Matrix44T<float> const&) const ::__3,
            void>((function<jag::math::Matrix43T<float>(unsigned long)>*)&local_68, (__3*)this);
        GetTransforms(pPVar1, wrapArray, arg2, (function<jag::math::Matrix43T<float> _(unsigned long)>*)&local_68);
        pPVar1 = &local_98;
        std::function<jag::math::Matrix43T<float>(unsigned long)>::function<
            PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float>>&,
                                                       eastl::vector_map<unsigned short, unsigned short> const&,
                                                       eastl::vector_map<unsigned short, unsigned short> const&,
                                                       jag::math::Matrix44T<float> const&) const ::__4,
            void>((function<jag::math::Matrix43T<float>(unsigned long)>*)&local_98, (__4*)this);
        GetTransforms(pPVar1, wrapArray, arg3, (function<jag::math::Matrix43T<float> _(unsigned long)>*)&local_98);
    }

    // 0x1002ef360
    void
    PoseStateProviderRSeven::GetTransforms(WrapArray<jag::math::Matrix43T<float>>& wrapArray,
                                           const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                           std::function<jag::math::Matrix43T<float>(unsigned long)> callback) const {
        unsigned short uVar1;
        unsigned long uVar4;
        Vector4T<float>* this_00;
        ReturnValue local_68;
        Vector3T<float> local_5c;
        Vector3T<float> local_50;
        Vector3T<float> local_44;
        function<jag::math::Matrix43T<float> _(unsigned long)>* local_38;

        local_38 = callback;
        auto puVar2 = arg2.HeapBeginPtr();
        auto puVar3 = arg2.end();
        if (puVar2 != puVar3) {
            do {
                uVar1 = puVar2[1];
                uVar4 = wrapArray.HeapBeginPtr();
                if (uVar1 < uVar4) {
                    std::function<jag::math::Matrix43T<float>(unsigned long)>::operator()(
                        &local_68, (function<jag::math::Matrix43T<float>(unsigned long)>*)local_38,
                        (unsigned long)*puVar2);
                    this_00 = (Vector4T<float>*)wrapArray[(unsigned long)puVar2[1]];
                    this_00->SetXYZ(local_68);
                    (this_00 + 12)->SetXYZ(local_5c);
                    (this_00 + 24)->SetXYZ(local_50);
                    (this_00 + 36)->SetXYZ(local_44);
                }
                puVar2 = puVar2 + 2;
            } while (puVar2 != puVar3);
        }
    }

    // 0x1002ef6e0
    void PoseStateProviderRSeven::UpdateFromCurrentTime(const Array<jag::graphics::LabelData>& labelDatas,
                                                        const jag::math::Matrix44T<float>& matrix44) {}

    // 0x1002ef6f0
    uint8_t PoseStateProviderRSeven::GetAnimatesTransparency() const {
        return 1;
    }

    // 0x1002ef700
    uint64_t PoseStateProviderRSeven::GetAnimatedColourType() const {
        return 2;
    }

    // 0x1002ef7b0
    auto ShiftedLabelRangePoseStateRSeven::GetBoneTransform(unsigned long arg1) const {
        auto result;
        ReturnValue RVar1;
        ReturnValue RVar2;
        ReturnValue RVar3;
        ReturnValue RVar4;
        ReturnValue RVar5;
        uint64_t* puVar6;

        if ((arg1 < field_32) || (field_34 <= arg1)) {
            RVar1 = *(ReturnValue*)PTR_IDENTITY_100ee6720;
            RVar2 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 8);
            RVar3 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 16);
            RVar4 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 24);
            RVar5 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 40);
            &result[4] = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 32);
            &result[5] = RVar5;
            &result[2] = RVar3;
            &result[3] = RVar4;
            result = RVar1;
            &result[1] = RVar2;
        } else {
            puVar6 = (uint64_t*)(*field_16).operator->();
            (**(void (**)(...))*puVar6)(&result, puVar6, arg1 - field_32);
        }
        return result;
    }

    // 0x1002ef830
    auto ShiftedLabelRangePoseStateRSeven::GetJointTransform(unsigned long arg1) const {
        auto result;
        ReturnValue RVar1;
        ReturnValue RVar2;
        ReturnValue RVar3;
        ReturnValue RVar4;
        ReturnValue RVar5;
        long* plVar6;

        if ((arg1 < field_36) || (field_38 <= arg1)) {
            RVar1 = *(ReturnValue*)PTR_IDENTITY_100ee6720;
            RVar2 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 8);
            RVar3 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 16);
            RVar4 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 24);
            RVar5 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 40);
            &result[4] = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 32);
            &result[5] = RVar5;
            &result[2] = RVar3;
            &result[3] = RVar4;
            result = RVar1;
            &result[1] = RVar2;
        } else {
            plVar6 = (long*)(*field_16).operator->();
            (**(void (**)(...))(*plVar6 + 8))(&result, plVar6, arg1 - field_36);
        }
        return result;
    }

    // 0x1002ef8b0
    uint64_t ShiftedLabelRangePoseStateRSeven::GetLabelTransparencyDelta(unsigned long arg1) const {
        long* plVar1;

        uint64_t uVar2 = 0;
        if ((field_40 <= arg1) && (uVar2 = 0, arg1 < field_42)) {
            plVar1 = (long*)(*field_16).operator->();
            uVar2 = (**(void (**)(...))(*plVar1 + 16))(plVar1, arg1 - field_40);
        }
        return uVar2;
    }

    // 0x1002ef900
    uint16_t ShiftedLabelRangePoseStateRSeven::IsEqual(const PoseStateRSeven& poseStateRSeven) const {
        PoseStateRSeven* poseStateRSeven1;
        PoseStateRSeven* poseStateRSeven2;

        if (poseStateRSeven.GetPos() == 4) {
            poseStateRSeven1 = (PoseStateRSeven*)**field_16;
            poseStateRSeven2 = (PoseStateRSeven*)poseStateRSeven.field_16;
            if ((((*poseStateRSeven1 == *poseStateRSeven2 != '\0') &&
                  (field_32 == *(unsigned short*)&poseStateRSeven.field_32)) &&
                 (field_34 == *(unsigned short*)((long)&poseStateRSeven.field_32 + 2))) &&
                (field_36 == *(unsigned short*)((long)&poseStateRSeven.field_32 + 4))) {
                return field_38 == *(unsigned short*)((long)&poseStateRSeven.field_32 + 6);
            }
        }
        return 0;
    }

    // 0x1002ef980
    void MaskedDashPoseStateRSeven::InitializeFrameData() {
        vector<int>* this_00;
        uint32_t uVar1;
        int arg5;
        int iVar2;
        bool cVar3;
        int arg3;
        uint32_t* puVar7;
        unsigned long arg1;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned long arg1_01;

        auto this_01 = GetFrameSet();
        int iVar4 = GetFrame();
        shared_ptr<AnimBase>* this_02 = (shared_ptr<AnimBase>*)(*this_01)[(long)iVar4];
        long lVar5 = **this_02;
        auto this_03 = GetMask();
        int* piVar6 = (int*)(*this_03)[0];
        if (0 < *(int*)(this_02 + 16)) {
            this_00 = (vector<int>*)(lVar5 + 8);
            iVar4 = *piVar6;
            uVar8 = 1;
            arg1_01 = 0;
            do {
                piVar6 = (int*)(*((this_02 + 24)))[arg1_01];
                iVar2 = *piVar6;
                arg1 = (unsigned long)iVar2;
                if (iVar4 < iVar2) {
                    arg1_00 = (long)(int)uVar8;
                    do {
                        uVar8 = arg1_00 + 1;
                        piVar6 = &field_168[arg1_00];
                        iVar4 = *piVar6;
                        arg1_00 = uVar8;
                    } while (iVar4 < iVar2);
                }
                cVar3 = GetInvertMask();
                if (((cVar3) && ((iVar2 == iVar4 || (piVar6 = (int*)(*this_00)[arg1], *piVar6 == 0)))) ||
                    ((cVar3 = GetInvertMask(),
                      !cVar3 && ((iVar2 != iVar4 || (piVar6 = (int*)(*this_00)[arg1], *piVar6 == 0)))))) {
                    puVar7 = (uint32_t*)(*this_00)[arg1];
                    uVar1 = *puVar7;
                    arg3 = (*((lVar5 + 40)))[arg1];
                    piVar6 = (int*)(*((this_02 + 48)))[arg1_01];
                    iVar2 = *piVar6;
                    piVar6 = (int*)(*((this_02 + 72)))[arg1_01];
                    arg5 = *piVar6;
                    puVar7 = (uint32_t*)(*((this_02 + 96)))[arg1_01];
                    ApplyAnimationTransform((int)this, (vector<int>*)uVar1, arg3, iVar2, arg5,
                                            (Vector3T<float>*)*puVar7);
                }
                arg1_01 = arg1_01 + 1;
            } while ((long)arg1_01 < (long)*(int*)(this_02 + 16));
        }
    }

    // 0x1002efb80
    uint8_t* MaskedDashPoseStateRSeven::GetMask() const {
        return &field_168;
    }

    // 0x1002efb90
    bool MaskedDashPoseStateRSeven::GetInvertMask() const {
        return m_invertMask;
    }

    // 0x1002efba0
    bool MaskedDashPoseStateRSeven::IsEqual(const PoseStateRSeven& poseStateRSeven) const {
        bool cVar1;

        if (((poseStateRSeven.GetPos() == 2) && (cVar1 = IsBaseEqual(poseStateRSeven), cVar1)) &&
            (m_invertMask == (bool)*(char*)&poseStateRSeven[4]._vptr)) {
            return field_168 == poseStateRSeven[3].field_24;
        }
        return 0;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1002ed8d0
    ParticleVertexDataProxy<Vector3T<float>>* Matrix43T<float>::operator=(const Matrix43T<float>& matrix43) {
        long lVar1 = 0;
        do {
            ((this + lVar1))->SetXYZ(*((matrix43 + lVar1)));
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        return this;
    }

    // 0x1002ee190
    Matrix43T<float>* operator*(const Matrix43T<float>& matrix431, const Matrix43T<float>& matrix432) {
        internal::MatrixMultSSE(matrix431, matrix432);
        return matrix431;
    }

    // 0x1002ee1c0
    void Matrix43T<float>::operator*=(const Matrix43T<float>& matrix43) {
        internal::MatrixMultSSEInPlace(*this, matrix43);
    }

    // 0x1002ee3f0
    Matrix33T<float> Matrix33RotationZ<float>(float arg1) {
        Matrix33T<float>* in_RDI;
        uint64_t local_48;

        local_48._0_4_ = arg1;
        float local_2c = (float)::cos(arg1);
        local_48 = ::sin((float)local_48);
        ColourHSL local_78(local_2c, (float)local_48, 0.0);
        ColourHSL local_68(-(float)local_48, local_2c, 0.0);
        ColourHSL local_58(0.0, 0.0, 1.0);
        new (in_RDI) Matrix33T<float>(local_78, local_68, local_58);
    }

    // 0x1002ee490
    Matrix33T<float>* Matrix33T<float>::operator=(Matrix33T<float>&& matrix33) {
        long lVar1 = 0;
        do {
            ((this + lVar1))->SetXYZ(*((matrix33 + lVar1)));
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        return this;
    }

    // 0x1002ee4e0
    void Matrix33T<float>::operator*=(const Matrix33T<float>& matrix33) {
        Matrix33T<float> local_40;

        local_40** this;
        operator=(this, &local_40);
    }

    // 0x1002ee520
    Vector3T<float> operator/ <float>(const Vector3T<float>& vector3, double arg2) {
        uint64_t uVar1;

        float fVar2 = 1.0 / (float)arg2;
        ColourHSL local_18(*(float*)vector3 * fVar2, *(float*)(vector3 + 4) * fVar2, fVar2 * *(float*)(vector3 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x1002ee8e0
    Vector3T<float> operator* <float>(const Vector3T<float>& vector3, const Matrix43T<float>& matrix43) {
        uint64_t uVar5;

        auto pfVar1 = vector3.SSOBeginPtr();
        float local_24 = *pfVar1;
        Layout* pLVar2 = &matrix43[0];
        pfVar1 = (float*)pLVar2->SSOBeginPtr();
        local_24 = local_24 * *pfVar1;
        pfVar1 = (float*)vector3.y();
        float local_1c = *pfVar1;
        pLVar2 = &matrix43[1];
        pfVar1 = (float*)pLVar2->SSOBeginPtr();
        local_1c = local_1c * *pfVar1 + local_24;
        pfVar1 = (float*)vector3.second();
        local_24 = *pfVar1;
        pLVar2 = &matrix43[2];
        pfVar1 = (float*)pLVar2->SSOBeginPtr();
        local_24 = local_24 * *pfVar1 + local_1c;
        pLVar2 = &matrix43[3];
        pfVar1 = (float*)pLVar2->SSOBeginPtr();
        local_24 = local_24 + *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_1c = *pfVar1;
        Vector2T<int>* pVVar3 = &matrix43[0];
        pfVar1 = (float*)pVVar3->y();
        local_1c = local_1c * *pfVar1;
        pfVar1 = (float*)vector3.y();
        float local_20 = *pfVar1;
        pVVar3 = &matrix43[1];
        pfVar1 = (float*)pVVar3->y();
        local_20 = local_20 * *pfVar1 + local_1c;
        pfVar1 = (float*)vector3.second();
        local_1c = *pfVar1;
        pVVar3 = &matrix43[2];
        pfVar1 = (float*)pVVar3->y();
        local_1c = local_1c * *pfVar1 + local_20;
        pVVar3 = &matrix43[3];
        pfVar1 = (float*)pVVar3->y();
        local_1c = local_1c + *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_20 = *pfVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar4 = &matrix43[0];
        pfVar1 = (float*)pcVar4->second();
        local_20 = local_20 * *pfVar1;
        pfVar1 = (float*)vector3.y();
        float local_28 = *pfVar1;
        pcVar4 = &matrix43[1];
        pfVar1 = (float*)pcVar4->second();
        local_28 = local_28 * *pfVar1 + local_20;
        pfVar1 = (float*)vector3.second();
        local_20 = *pfVar1;
        pcVar4 = &matrix43[2];
        pfVar1 = (float*)pcVar4->second();
        local_20 = local_20 * *pfVar1 + local_28;
        pcVar4 = &matrix43[3];
        pfVar1 = (float*)pcVar4->second();
        ColourHSL local_38(local_24, local_1c, local_20 + *pfVar1);
        uVar5._0_4_ = local_38.field_0;
        uVar5._4_4_ = local_38.field_4;
        return uVar5;
    }

    // 0x1002eed10
    Matrix43T<float>* Matrix43T<float>::operator=(const Matrix44T<float>& matrix44) {
        Layout* pLVar3 = &matrix44[0];
        auto pfVar4 = pLVar3->SSOBeginPtr();
        float fVar1 = *pfVar4;
        Vector2T<int>* pVVar5 = &matrix44[0];
        pfVar4 = (float*)pVVar5->y();
        float fVar2 = *pfVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar6 = &matrix44[0];
        pfVar4 = (float*)pcVar6->second();
        Set(fVar1, fVar2, *pfVar4);
        pLVar3 = &matrix44[1];
        pfVar4 = (float*)pLVar3->SSOBeginPtr();
        fVar1 = *pfVar4;
        pVVar5 = &matrix44[1];
        pfVar4 = (float*)pVVar5->y();
        fVar2 = *pfVar4;
        pcVar6 = &matrix44[1];
        pfVar4 = (float*)pcVar6->second();
        ((this + 12))->Set(fVar1, fVar2, *pfVar4);
        pLVar3 = &matrix44[2];
        pfVar4 = (float*)pLVar3->SSOBeginPtr();
        fVar1 = *pfVar4;
        pVVar5 = &matrix44[2];
        pfVar4 = (float*)pVVar5->y();
        fVar2 = *pfVar4;
        pcVar6 = &matrix44[2];
        pfVar4 = (float*)pcVar6->second();
        ((this + 24))->Set(fVar1, fVar2, *pfVar4);
        pLVar3 = &matrix44[3];
        pfVar4 = (float*)pLVar3->SSOBeginPtr();
        fVar1 = *pfVar4;
        pVVar5 = &matrix44[3];
        pfVar4 = (float*)pVVar5->y();
        fVar2 = *pfVar4;
        pcVar6 = &matrix44[3];
        pfVar4 = (float*)pcVar6->second();
        ((this + 36))->Set(fVar1, fVar2, *pfVar4);
        return this;
    }

    // 0x1002ef550
    void Vector3T<float>::operator*=(const Matrix43T<float>& matrix43) {
        uint64_t local_20[2];

        local_20[0] = *this matrix43;
        SetXYZ(*local_20);
    }

} // namespace jag::math
