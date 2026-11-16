// libs/oldscape/jagex3/dash3d/ModelRSeven.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ModelRSeven.h"
#include "Operation.h"

namespace jag::oldscape::dash3d {
    // 0x100350570
    ModelRSevenUnlit* ModelRSevenUnlit::Load(jagex3::Js5& js5, int arg2, int arg3, bool arg4) {
        uint32_t uVar1;
        ModelUnlitImpl* pMVar4;
        Model* pMVar5;
        PacketT<Array<unsigned char> _>* arg1;
        Array<jag::graphics::LabelData>* labelDatas;
        long lVar6;
        PacketView local_90;
        uint8_t local_68[24];
        shared_ptr<PacketT<Array<unsigned char>>> local_50;
        ReturnValue local_30;

        auto local_40 = ModelUnlitImpl::Load(js5, arg2, arg3);
        if (local_40 != nullptr) {
            pMVar4 = (ModelUnlitImpl*)local_40.operator->();
            pMVar4->CalculateNormals();
            pMVar4 = (ModelUnlitImpl*)*local_40;
            *local_68 = rseven::ModelDash3dToRT7Exporter::Export(*pMVar4, arg4);
            make_shared<jag::graphics::Model>(&local_30);
            pMVar5 = (Model*)local_30.operator->();
            arg1 = (PacketT<Array<unsigned char> _>*)*local_50;
            local_90.PacketView<Array<unsigned char>>(*arg1);
            pMVar5->LoadDataFromModelRawRT7(&local_90);
            pMVar5 = (Model*)local_30.operator->();
            labelDatas = (Array<jag::graphics::LabelData>*)*(*((local_68 + 8)));
            pMVar5->SetLabelCentres(*labelDatas);
            make_shared<ModelRSevenUnlit, shared_ptr<jag::graphics::Model>>((ReturnValue*)this, &local_30);
            lVar6 = local_40.operator->();
            uVar1 = *(uint32_t*)(lVar6 + 12);
            lVar6 = (*this).operator->();
            *(uint32_t*)(lVar6 + 12) = uVar1;
            if (local_68[0] != '\0') {
                if (BakedVertexLighting() == '\0') {
                    lVar6 = (*this).operator->();
                    ((lVar6 + 24))->AddOperation<FixNormalsOperation>();
                }
            }
        } else {
            new (this) shared_ptr();
        }
        return this;
    }

    // 0x100350f10
    auto ModelRSevenUnlit::Combine(const eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>& modelUnlits) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long* plVar4;
        ModelRSevenUnlit* modelRSevenUnlit;
        long lVar5;
        OperationBuffer* operationBuffer;
        shared_ptr<ModelRSevenUnlit> local_70;
        ReturnValue local_60;

        auto result;
        vector<OperationBuffer> local_50;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)modelUnlits.HeapBeginPtr();
        auto psVar3 = modelUnlits.end();
        if (midiPlayerMainThread != psVar3) {
            do {
                if (*midiPlayerMainThread != nullptr) {
                    local_70 = shared_ptr();
                    plVar4 = (long*)(*midiPlayerMainThread).operator->();
                    if (!((**(void (**)(...))(*plVar4 + 56))(plVar4))) {
                        LogAssert("spUnlit->IsForRSeven()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "jagex3/dash3d/ModelRSeven.cpp",
                                  57, nullptr);
                    }
                    modelRSevenUnlit = (ModelRSevenUnlit*)midiPlayerMainThread->end();
                    make_shared<ModelRSevenUnlit, ModelRSevenUnlit const&>(&local_60, modelRSevenUnlit);
                    local_70 = local_60;
                    if (!(result.operator_cast_to_bool())) {
                        result = local_70;
                    } else {
                        lVar5 = local_70.operator->();
                        operationBuffer = ((lVar5 + 24))->GetOperationBuffer();
                        local_50.push_back(*operationBuffer);
                    }
                }
                midiPlayerMainThread = midiPlayerMainThread + 16;
            } while (midiPlayerMainThread != psVar3);
        }
        if (result.operator_cast_to_bool()) {
            lVar5 = (result).operator->();
            ((lVar5 + 24))->AddOperation<CombineOperation, eastl::vector<OperationBuffer>>(local_50);
        }
        return result;
    }

    // 0x1003512f0
    auto ModelRSevenUnlit::Copy(const ModelUnlit& modelUnlit) {
        (modelUnlit._vptr[3]._x7e___2)(modelUnlit);
    }

    // 0x100351340
    ModelRSevenUnlit* ModelRSevenUnlit::Copy() const {
        ModelRSevenUnlit* in_RSI;

        make_shared<ModelRSevenUnlit, ModelRSevenUnlit const&>((ReturnValue*)this, in_RSI);
        return this;
    }

    // 0x100351360
    ModelRSevenLit* ModelRSevenLit::Copy() const {
        ModelRSevenLit* in_RSI;

        make_shared<ModelRSevenLit, ModelRSevenLit&>((ReturnValue*)this, in_RSI);
        return this;
    }

    // 0x100351420
    void ModelRSevenLit::PrepareForAppend(shared_ptr<ModelLit>& modelLit, const ModelAppendList& modelAppendList) {}

    // 0x100351430
    void ModelRSevenLit::AppendModel(const ModelLit* modelLit) {
        (*modelLit->_vptr[3]._x7e___2)(modelLit);
    }

    // 0x100351520
    void ModelRSevenUnlit::ShareLight(ModelRSevenUnlit& modelRSevenUnlit1, ModelRSevenUnlit& modelRSevenUnlit2,
                                      int arg3, int arg4, int arg5, bool arg6) {
        uint32_t in_register_00000089;
        uint8_t local_88[28];

        uint32_t local_34 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg6);
        ShareLightBuffer* local_48 = (ShareLightBuffer*)modelRSevenUnlit2.field_40;
        ReturnValue* pRVar1 = *local_48 = ShareLightBuffer::GetCache(modelRSevenUnlit2.field_24);
        new (local_88) shared_ptr(pRVar1);
        new ((local_88 + 16)) rs2lib::worldmap::LocationData(arg3, -arg4, arg5);
        uint8_t local_6c = (uint8_t)local_34;
        modelRSevenUnlit1.field_40->AddRequest(modelRSevenUnlit1.field_24, local_88);
        pRVar1 = modelRSevenUnlit1.field_40 = ShareLightBuffer::GetCache(modelRSevenUnlit1.field_24);
        ShareLightRequest local_68(pRVar1);
        LocationData local_98(arg3, -arg4, (unsigned int)arg5);
        local_68._16_12_ = jag::math::operator-((Vector3T<int>*)&local_98);
        local_68.field_21._7_1_ = (uint8_t)local_34;
        local_48->AddRequest(modelRSevenUnlit2.field_24, &local_68);
    }

    // 0x100351690
    ModelRSevenUnlit* ModelRSevenUnlit::HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5) {
        int in_stack_00000008;
        shared_ptr<RSevenDebugPresetProvider> local_58;
        shared_ptr<ClientNpc> local_48;

        Copy(&local_58);
        long lVar2 = local_58.operator->();
        ((lVar2 + 24))->HillSkew(arg2, arg3, arg4, arg5, in_stack_00000008);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_48);
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        return this;
    }

    // 0x100351750
    void ModelRSevenCommon::HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5) {
        local_30._12_4_ = arg1;
        int local_20 = arg5;
        LocationData local_30(arg2, arg3, arg4);
        bool local_19 = (bool)field_16->IsPrepared();
        AddOperation<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(
            this, (Vector3T<int>*)&local_30, (int*)&local_30.field_12, &local_20, &local_19);
    }

    // 0x1003517b0
    ModelRSevenLit* ModelRSevenLit::HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5) {
        int in_stack_00000008;
        shared_ptr<RSevenDebugPresetProvider> local_58;
        shared_ptr<ClientNpc> local_48;

        Copy(&local_58);
        auto pMVar1 = local_58.operator->();
        HillSkew(pMVar1, arg2, arg3, arg4, arg5, in_stack_00000008);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_48);
        pMVar1 = this;
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        return pMVar1;
    }

    // 0x100351950
    ModelRSevenLit::ModelRSevenLit(ModelRSevenLit::LightCall lightCall, const ModelRSevenUnlit& modelRSevenUnlit)
        : ModelLit(), field_24(modelRSevenUnlit.field_24), m_radiusCylinder(0) {}

    // 0x100351a20
    ModelRSevenLit::ModelRSevenLit(ModelRSevenLit::LightCall lightCall, const ModelRSevenUnlit& modelRSevenUnlit,
                                   int arg3, int arg4, int arg5, int arg6, int arg7)
        : ModelLit(), field_24(modelRSevenUnlit.field_24), m_radiusCylinder(0) {

        LocationData local_40(arg5, arg6, arg7);
        field_24->AddOperation<LightOperation, int&, int&, jag::math::Vector3T<int>>(arg3, arg4, local_40);
    }

    // 0x100351bb0
    ModelRSevenUnlit* ModelRSevenUnlit::Light(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint32_t in_register_00000034;
        ReturnValue local_48;
        LightCall local_24;

        int local_34 = arg2;
        int local_30 = arg3;
        int local_2c = arg4;
        int local_28 = arg5;
        if (BakedVertexLighting() == '\0') {
            local_24 = 0;
            make_shared<ModelRSevenLit, ModelRSevenLit::LightCall, ModelRSevenUnlit&>(
                &local_48, &local_24, (ModelRSevenUnlit*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        } else {
            local_24 = 0;
            make_shared<ModelRSevenLit, ModelRSevenLit::LightCall, ModelRSevenUnlit&, int&, int&, int&, int&, int&>(
                &local_48, (ModelRSevenUnlit*)&local_24,
                (int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1), &local_34, &local_30, &local_2c,
                &local_28);
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        }
        return this;
    }

    // 0x100351df0
    void ModelRSevenUnlit::PrepareForShareLight(short arg1, short arg2) {
        PrepareForShareLight(arg1, arg2);
        field_40->Prepare();
    }

    // 0x100351e30
    auto ModelRSevenUnlit::CopyForShareLight() {
        auto result;
        ReturnValue local_30;

        Copy(&local_30, (ModelUnlit*)this);
        bool cVar1 = field_40->IsPrepared();
        long lVar3 = local_30.operator->();
        char cVar2 = ((lVar3 + 40))->IsPrepared();
        if (cVar1 != cVar2) {
            LogAssert("m_shareLightBuffer.IsPrepared() == ret->m_shareLightBuffer.IsPrepared()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelRSeven.cpp",
                      177, nullptr);
        }
        result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_30);
        return result;
    }

    // 0x100351ed0
    void ModelRSevenCommon::Rotate90() {
        RotateYAxis(512);
    }

    // 0x100351ee0
    void ModelRSevenCommon::RotateYAxis(int arg1) {
        Matrix44T<float> local_88;
        Matrix33T<float> local_48;

        if (arg1 != 0) {
            jag::math::Matrix33RotationY<float>((float)arg1 * 0.0030679617f);
            local_88 = jag::math::Matrix44T<float>(local_48, *PTR_ZERO_100ee66e8);
            AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_88);
        }
    }

    // 0x100351f40
    void ModelRSevenCommon::Rotate180() {
        RotateYAxis(1024);
    }

    // 0x100351f50
    void ModelRSevenCommon::Rotate270() {
        RotateYAxis(1536);
    }

    // 0x100351ff0
    void ModelRSevenCommon::RotateXAxis(int arg1) {
        Matrix44T<float> local_88;
        Matrix33T<float> local_48;

        if (arg1 != 0) {
            jag::math::Matrix33RotationX<float>((float)-arg1 * 0.0030679647f);
            local_88 = jag::math::Matrix44T<float>(local_48, *PTR_ZERO_100ee66e8);
            AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_88);
        }
    }

    // 0x100352100
    void ModelRSevenCommon::Translate(int arg1, int arg2, int arg3) {
        Matrix44T<float> local_78;
        ColourHSL local_30;

        if (((arg1 != 0) || (arg2 != 0)) || (arg3 != 0)) {
            local_30 = jag::math::ColourHSL((float)arg1, (float)-arg2, (float)arg3);
            local_78 = jag::math::Matrix44T<float>(*PTR_IDENTITY_100ee6718, local_30);
            AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_78);
        }
    }

    // 0x100352170
    void ModelRSevenUnlit::Recolour(short arg1, short arg2) {
        field_24.AddOperation<RecolourOperation, unsigned short, unsigned short>((unsigned short)arg1,
                                                                                 (unsigned short)arg2);
    }

    // 0x100352230
    void ModelRSevenUnlit::Retexture(short arg1, short arg2) {
        field_24.AddOperation<RetextureOperation, unsigned short, unsigned short>((unsigned short)arg1,
                                                                                  (unsigned short)arg2);
    }

    // 0x1003522f0
    void ModelRSevenUnlit::Mirror() {
        field_24.AddOperation<MirrorOperation>();
    }

    // 0x100352380
    void ModelRSevenCommon::Resize(int arg1, int arg2, int arg3) {
        ResizePrecise(arg1, arg2, arg3, 128);
    }

    // 0x1003523a0
    void ModelRSevenCommon::ResizePrecise(int arg1, int arg2, int arg3, int arg4) {
        Matrix33T<float> local_60;

        ColourHSL local_38((float)arg1, (float)arg2, (float)arg3);
        local_38 /= ((float)arg4);
        auto pfVar1 = local_38.SSOBeginPtr();
        float local_28 = *pfVar1;
        pfVar1 = (float*)local_38.y();
        float local_24 = *pfVar1;
        pfVar1 = (float*)local_38.second();
        new (&local_60) jag::math::Matrix33T<float>(local_28, 0.0, 0.0, 0.0, local_24, 0.0, 0.0, 0.0, *pfVar1);
        Matrix44T<float> local_a8(local_60, *PTR_ZERO_100ee66e8);
        AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_a8);
    }

    // 0x100352470
    void ModelRSevenLit::CalcBoundingCylinder() {
        uint32_t extraout_XMM0_Dc;
        uint32_t extraout_XMM0_Dd;
        uint64_t extraout_XMM1_Qa;
        uint64_t extraout_XMM1_Qb;
        uint8_t auVar3[16];
        uint8_t auVar4[16];

        AABB local_48 = field_24->GetOperationBuffer()->ResolveAABB();
        float local_1c = (float)local_48.GetWidth();
        float fVar1 = (float)local_48.GetWidth();
        local_1c = fVar1 * local_1c;
        float local_20 = (float)local_48.GetLength();
        uint64_t uVar2 = local_48.GetLength();
        auVar3._8_8_ = extraout_XMM1_Qb;
        auVar3._0_8_ = extraout_XMM1_Qa;
        fVar1 = (float)uVar2 * local_20 + local_1c;
        auVar4._4_4_ = (int)((unsigned long)uVar2 >> 32);
        auVar4._0_4_ = fVar1;
        auVar4._8_4_ = extraout_XMM0_Dc;
        auVar4._12_4_ = extraout_XMM0_Dd;
        auVar4 = rsqrtss(auVar3, auVar4);
        float fVar5 = fVar1 * auVar4._0_4_;
        m_radiusCylinder = (int)((float)(~-(unsigned int)(ABS(fVar1) < 1.1754944e-38) &
                                         (unsigned int)((fVar5 * auVar4._0_4_ - 3.0) * fVar5 * -0.5)) *
                                     0.5 +
                                 0.0009765625f);
        fVar1 = (float)local_48.GetMaxY();
        field_8 = (int)(fVar1 + 0.0009765625f);
    }

    // 0x100352550
    jag::math::AABB OperationBuffer::ResolveAABB() const {
        shared_ptr<jag::graphics::Model>* psVar3;
        NXTPixToolkit* pNVar4;
        AABB* pAVar5;
        long lVar6;
        Layout* this_01;
        shared_ptr<Operation>* this_02;
        shared_ptr<Operation>* psVar7;
        long* plVar8;
        uint8_t local_98[32];
        AABB* local_38;

        long lVar2 = (*this).operator->();
        bool cVar1 = *(char*)(lVar2 + 208);
        lVar2 = (*this).operator->();
        if (!cVar1) {
            if (*(char*)(lVar2 + 209) == '\0') {
                local_38 = &result;
                new ((local_98 + 32)) jag::math::AABB();
                this_01 = (Layout*)(*this).operator->();
                this_02 = (shared_ptr<Operation>*)this_01->HeapBeginPtr();
                psVar7 = (shared_ptr<Operation>*)this_01->end();
                if (this_02 != psVar7) {
                    do {
                        plVar8 = (long*)(*this_02).operator->();
                        (**(void (**)(...))(*plVar8 + 24))((AABB*)local_98, plVar8, (AABB*)(local_98 + 32));
                        (*((local_98 + 32))) = *local_98;
                        this_02 = this_02 + 16;
                    } while (this_02 != psVar7);
                }
                lVar2 = (*this).operator->();
                (*((lVar2 + 176))) = (*((local_98 + 32)));
                lVar2 = (*this).operator->();
                *(uint8_t*)(lVar2 + 209) = 1;
                &result = local_38;
            }
        } else if (*(char*)(lVar2 + 209) == '\0') {
            lVar2 = (*this).operator->();
            psVar3 = (shared_ptr<jag::graphics::Model>*)((lVar2 + 64))->GetModel();
            pNVar4 = (NXTPixToolkit*)(*psVar3).operator->();
            pAVar5 = (AABB*)pNVar4->GetScreen();
            cVar1 = pAVar5->IsValid();
            if (!cVar1) {
                lVar2 = (*this).operator->();
                psVar3 = (shared_ptr<jag::graphics::Model>*)((lVar2 + 64))->GetModel();
                ((Model*)(*psVar3).operator->())->UpdateAABB();
            }
            lVar2 = (*this).operator->();
            psVar3 = (shared_ptr<jag::graphics::Model>*)((lVar2 + 64))->GetModel();
            pNVar4 = (NXTPixToolkit*)(*psVar3).operator->();
            pAVar5 = (AABB*)pNVar4->GetScreen();
            lVar2 = (*this).operator->();
            (*((lVar2 + 176))) = *pAVar5;
            lVar2 = (*this).operator->();
            lVar6 = (*this).operator->();
            *((local_98 + 32)) = ((lVar6 + 64))->GetLocalTransform();
            ((lVar2 + 176))->Transform(*((local_98 + 32)));
            lVar2 = (*this).operator->();
            *(uint8_t*)(lVar2 + 209) = 1;
        }
        lVar2 = (*this).operator->();
        return jag::math::AABB(*((lVar2 + 176)));
    }

    // 0x100352750
    int ModelRSevenLit::GetRadiusCylinder() {
        CalcBoundingCylinder();
        return m_radiusCylinder;
    }

    // 0x100352770
    ModelRSevenLit* ModelRSevenLit::CopyForAnim(bool arg1, int arg2) {
        uint64_t in_register_00000031;
        shared_ptr<ModelLit> local_30;

        if (((((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1))->IsValidValue() == '\0') {
            LogAssert("IsLit()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelRSeven.cpp",
                      267, nullptr);
        }
        Copy(&local_30);
        long lVar2 = local_30.operator->();
        *(uint8_t*)(lVar2 + 96) = 1;
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_30);
        return this;
    }

} // namespace jag::oldscape::dash3d
