// libs/oldscape/jagex3/dash3d/ModelRSeven.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ModelRSeven.h"
#include "Operation.h"

namespace jag::oldscape::dash3d {
    // 0x100350570, 400 bytes, placed by debug map only (low confidence)
    // ModelRSevenUnlit::Load(jagex3::Js5&, int, int, bool)
    ModelRSevenUnlit* ModelRSevenUnlit::Load(Js5* param_1, int param_2, int param_3, bool param_4) {
        undefined4 uVar1;
        ModelUnlitImpl* pMVar4;
        Model* pMVar5;
        PacketT* pPVar6;
        Array* pAVar7;
        long lVar8;
        PacketView aPStackY_10b0[128];
        PacketView in_stack_ffffffffffffff68;
        undefined1 local_68[24];
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> local_50[16];
        shared_ptr<ModelUnlitImpl> local_40[16];
        shared_ptr local_30;

        local_40->Load(param_1, param_2, param_3);
        if (operator!=((shared_ptr*)local_40, (_func_decltype_nullptr*)0)) {
            pMVar4 = (ModelUnlitImpl*)shared_ptr<ModelUnlitImpl>::operator->(local_40);
            pMVar4->CalculateNormals();
            pMVar4 = (ModelUnlitImpl*)shared_ptr<ModelUnlitImpl>::operator*(local_40);
            local_68->Export(pMVar4, param_4);
            make_shared<jag::graphics::Model>((jag*)&local_30);
            pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_30);
            pPVar6 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(local_50);
            PacketView::PacketView<Array<unsigned char, eastl::allocator>>(aPStackY_10b0 + 129, pPVar6);
            pMVar5->LoadDataFromModelRawRT7(in_stack_ffffffffffffff68);
            (aPStackY_10b0 + 129)->~PacketView();
            pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_30);
            pAVar7 = (Array*)shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>::operator*(
                (shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>*)(local_68 + 8));
            pMVar5->SetLabelCentres(pAVar7);
            make_shared<ModelRSevenUnlit, shared_ptr<jag::graphics::Model>>((jag*)this, &local_30);
            lVar8 = shared_ptr<ModelUnlitImpl>::operator->(local_40);
            uVar1 = *(undefined4*)(lVar8 + 12);
            lVar8 = shared_ptr<ModelRSevenUnlit>::operator->((shared_ptr<ModelRSevenUnlit>*)this);
            *(undefined4*)(lVar8 + 12) = uVar1;
            if (local_68[0] != 0) {
                if (BakedVertexLighting((ModelRSevenUnlit*)this) == '\0') {
                    lVar8 = shared_ptr<ModelRSevenUnlit>::operator->((shared_ptr<ModelRSevenUnlit>*)this);
                    ModelRSevenCommon::AddOperation<FixNormalsOperation>((ModelRSevenCommon*)(lVar8 + 24));
                }
            }
            local_30.~shared_ptr();
            local_68->~DashExportResult();
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        local_40->~shared_ptr();
        return this;
    }

    // 0x100350f10, 416 bytes, placed by __FILE__ string
    // ModelRSevenUnlit::Combine(eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&)
    ModelRSevenUnlit* ModelRSevenUnlit::Combine(vector* param_1) {
        bool bVar1;
        shared_ptr* this_00;
        shared_ptr* psVar3;
        long* plVar4;
        ModelRSevenUnlit* pMVar5;
        long lVar6;
        OperationBuffer* pOVar7;
        shared_ptr local_70;
        shared_ptr local_60;
        vector<OperationBuffer, eastl::allocator> local_50[32];

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        eastl::vector<OperationBuffer, eastl::allocator>::vector(local_50);
        this_00 = (shared_ptr*)param_1->HeapBeginPtr();
        psVar3 = (shared_ptr*)param_1->end();
        if (this_00 != psVar3) {
            do {
                bVar1 = operator!=(this_00, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    plVar4 = (long*)shared_ptr<ModelUnlit>::operator->((shared_ptr<ModelUnlit>*)this_00);
                    if ((**(code**)(*plVar4 + 56))(plVar4) == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("spUnlit->IsForRSeven()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "jagex3/dash3d/ModelRSeven.cpp",
                                  57, (char*)0);
                    }
                    pMVar5 = (ModelRSevenUnlit*)this_00->end();
                    make_shared<ModelRSevenUnlit, ModelRSevenUnlit_const&>((jag*)&local_60, pMVar5);
                    shared_ptr<ModelRSevenUnlit>::operator=((shared_ptr<ModelRSevenUnlit>*)&local_70, &local_60);
                    local_60.~shared_ptr();
                    bVar1 = operator_cast_to_bool();
                    if (bVar1) {
                        lVar6 = shared_ptr<ModelRSevenUnlit>::operator->((shared_ptr<ModelRSevenUnlit>*)&local_70);
                        pOVar7 = (OperationBuffer*)((lVar6 + 24))->GetOperationBuffer();
                        eastl::vector<OperationBuffer, eastl::allocator>::push_back(local_50, pOVar7);
                    } else {
                        shared_ptr<ModelRSevenUnlit>::operator=((shared_ptr<ModelRSevenUnlit>*)this, &local_70);
                    }
                    local_70.~shared_ptr();
                }
                this_00 = this_00 + 1;
            } while (this_00 != psVar3);
        }
        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            lVar6 = shared_ptr<ModelRSevenUnlit>::operator->((shared_ptr<ModelRSevenUnlit>*)this);
            ModelRSevenCommon::AddOperation<CombineOperation, eastl::vector<OperationBuffer, eastl::allocator>>(
                (ModelRSevenCommon*)(lVar6 + 24), (vector*)local_50);
        }
        eastl::vector<OperationBuffer, eastl::allocator>::~vector(local_50);
        return this;
    }

    // 0x1003512f0, 80 bytes, placed by __FILE__ string
    // ModelRSevenUnlit::Copy(ModelUnlit const&)
    ModelRSevenUnlit* ModelRSevenUnlit::Copy(ModelUnlit* param_1) {
        if ((**(code**)(param_1->field_0 + 56))(param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m.IsForRSeven()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelRSeven.cpp",
                      83, (char*)0);
        }
        make_shared<ModelRSevenUnlit, ModelRSevenUnlit_const&>((jag*)this, (ModelRSevenUnlit*)param_1);
        return this;
    }

    // 0x100351340, 32 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::Copy() const
    ModelRSevenUnlit* ModelRSevenUnlit::Copy() {
        ModelRSevenUnlit* in_RSI;

        make_shared<ModelRSevenUnlit, ModelRSevenUnlit_const&>((jag*)this, in_RSI);
        return this;
    }

    // 0x100351360, 32 bytes, placed by neighbouring functions
    // ModelRSevenLit::Copy() const
    ModelRSevenLit* ModelRSevenLit::Copy() {
        ModelRSevenLit* in_RSI;

        make_shared<ModelRSevenLit, ModelRSevenLit&>((jag*)this, in_RSI);
        return this;
    }

    // 0x100351420, 16 bytes, placed by neighbouring functions
    // ModelRSevenLit::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)
    void ModelRSevenLit::PrepareForAppend(shared_ptr* param_1, ModelAppendList* param_2) {}

    // 0x100351430, 96 bytes, placed by __FILE__ string
    // ModelRSevenLit::AppendModel(ModelLit const*)
    void ModelRSevenLit::AppendModel(ModelLit* param_1) {
        OperationBuffer* pOVar2;

        if ((**(code**)(param_1->field_0 + 56))(param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("model->IsForRSeven()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelRSeven.cpp",
                      109, (char*)0);
        }
        pOVar2 = (OperationBuffer*)(((long)&param_1[1].field_0 + 7))->GetOperationBuffer();
        ModelRSevenCommon::AddOperation<CombineOperation, OperationBuffer_const&>((ModelRSevenCommon*)field_24, pOVar2);
    }

    // 0x100351520, 320 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::ShareLight(ModelRSevenUnlit&, ModelRSevenUnlit&, int, int, int, bool)
    void ModelRSevenUnlit::ShareLight(ModelRSevenUnlit* param_1, ModelRSevenUnlit* param_2, int param_3, int param_4,
                                      int param_5, bool param_6) {
        shared_ptr* psVar1;
        Vector3T* pVVar2;
        undefined3 in_register_00000089;
        math amStackY_3098[128];
        ShareLightRequest in_stack_ffffffffffffff68;
        LocationData local_78;
        shared_ptr<Decor> local_68[16];
        undefined1 local_58[12];
        undefined1 local_4c;
        ShareLightBuffer* local_48;
        undefined4 local_34;

        local_34 = CONCAT31(in_register_00000089, param_6);
        local_48 = (ShareLightBuffer*)param_2->field_40;
        psVar1 = (shared_ptr*)local_48->GetCache((OperationBuffer*)&param_2->field_24);
        new (&amStackY_3098[128].field_16) shared_ptr<Decor>(psVar1);
        new (&local_78) rs2lib::worldmap::LocationData(param_3, -param_4, param_5);
        local_78._12_1_ = SUB41(local_34, 0);
        (param_1->field_40, (OperationBuffer*)&param_1->field_24, in_stack_ffffffffffffff68)->AddRequest();
        amStackY_3098[128].field_16.~LRUHashCacheWrapper();
        psVar1 = (shared_ptr*)(param_1->field_40, (OperationBuffer*)&param_1->field_24)->GetCache();
        shared_ptr<Decor>::shared_ptr(local_68, psVar1);
        pVVar2 = (Vector3T*)(ulong)(uint)param_3;
        new ((amStackY_3098 + 128)) rs2lib::worldmap::LocationData((uint)param_3, -param_4, param_5);
        local_58 = jag::math::operator-(amStackY_3098 + 128, pVVar2);
        local_4c = (undefined1)local_34;
        local_48->AddRequest((OperationBuffer*)&param_2->field_24, in_stack_ffffffffffffff68);
        local_68->~LRUHashCacheWrapper();
    }

    // 0x100351690, 192 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::HillSkewCopy(int, int, int, int, int)
    ModelRSevenUnlit* ModelRSevenUnlit::HillSkewCopy(int param_1, int param_2, int param_3, int param_4, int param_5) {
        long lVar2;
        shared_ptr* extraout_RDX;
        int in_stack_00000008;
        jag local_58[16];
        shared_ptr local_48;

        Copy((ModelRSevenUnlit*)local_58);
        lVar2 = shared_ptr<ModelRSevenUnlit>::operator->((shared_ptr<ModelRSevenUnlit>*)local_58);
        ((lVar2 + 24))->HillSkew(param_2, param_3, param_4, param_5, in_stack_00000008);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_48, local_58, extraout_RDX);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)(ModelRSevenUnlit*)this, &local_48);
        local_48.~shared_ptr();
        local_58->~shared_ptr();
        return (ModelRSevenUnlit*)this;
    }

    // 0x100351750, 96 bytes, placed by neighbouring functions
    // ModelRSevenCommon::HillSkew(int, int, int, int, int)
    void ModelRSevenCommon::HillSkew(int param_1, int param_2, int param_3, int param_4, int param_5) {
        LocationData local_30;
        int local_20;
        bool local_19;

        local_30._12_4_ = param_1;
        local_20 = param_5;
        new (&local_30) rs2lib::worldmap::LocationData(param_2, param_3, param_4);
        local_19 = (bool)field_16->IsPrepared();
        AddOperation<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(
            this, (Vector3T*)&local_30, (int*)&local_30.field_12, &local_20, &local_19);
    }

    // 0x1003517b0, 176 bytes, placed by neighbouring functions
    // ModelRSevenLit::HillSkewCopy(int, int, int, int, int)
    ModelRSevenLit* ModelRSevenLit::HillSkewCopy(int param_1, int param_2, int param_3, int param_4, int param_5) {
        ModelRSevenLit* pMVar1;
        shared_ptr* extraout_RDX;
        int in_stack_00000008;
        jag local_58[16];
        shared_ptr local_48;

        Copy((ModelRSevenLit*)local_58);
        pMVar1 = (ModelRSevenLit*)shared_ptr<ModelRSevenLit>::operator->((shared_ptr<ModelRSevenLit>*)local_58);
        HillSkew(pMVar1, param_2, param_3, param_4, param_5, in_stack_00000008);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_48, local_58, extraout_RDX);
        pMVar1 = (ModelRSevenLit*)this;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)(ModelRSevenLit*)this, &local_48);
        local_48.~shared_ptr();
        local_58->~shared_ptr();
        return pMVar1;
    }

    // 0x100351950, 80 bytes, base-object constructor, placed by neighbouring functions
    // ModelRSevenLit::ModelRSevenLit(ModelRSevenLit::LightCall, ModelRSevenUnlit const&)
    void ModelRSevenLit::ModelRSevenLit(undefined8 param_2, long param_3) {
        new (this) ModelLit();
        new (field_24, (ModelRSevenCommon*)(param_3 + 24)) ModelRSevenCommon();
        field_0 = &PTR__ModelRSevenLit_100efbce8;
        m_radiusCylinder = 0;
    }

    // 0x100351a10, 16 bytes, complete-object constructor, placed by neighbouring functions
    // ModelRSevenLit::ModelRSevenLit(ModelRSevenLit::LightCall, ModelRSevenUnlit const&): jumps straight to the base-object constructor

    // 0x100351a20, 160 bytes, base-object constructor, placed by neighbouring functions
    // ModelRSevenLit::ModelRSevenLit(ModelRSevenLit::LightCall, ModelRSevenUnlit const&, int, int, int, int, int)
    void ModelRSevenLit::ModelRSevenLit(undefined8 param_2, long param_3, int param_4, int param_5, int param_6,
                                        int param_7, int param_8) {
        LocationData local_40;
        int local_30;
        int local_2c;

        local_30 = param_4;
        local_2c = param_5;
        new (this) ModelLit();
        new (field_24, (ModelRSevenCommon*)(param_3 + 24)) ModelRSevenCommon();
        field_0 = &PTR__ModelRSevenLit_100efbce8;
        m_radiusCylinder = 0;
        new (&local_40) rs2lib::worldmap::LocationData(param_6, param_7, param_8);
        ModelRSevenCommon::AddOperation<LightOperation, int&, int&, jag::math::Vector3T<int>>(
            (ModelRSevenCommon*)field_24, &local_30, &local_2c, (Vector3T*)&local_40);
    }

    // 0x100351b90, 32 bytes, complete-object constructor, placed by neighbouring functions
    // ModelRSevenLit::ModelRSevenLit(ModelRSevenLit::LightCall, ModelRSevenUnlit const&, int, int, int, int, int)
    void ModelRSevenLit::ModelRSevenLit() {
        ModelRSevenLit();
    }

    // 0x100351bb0, 192 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::Light(int, int, int, int, int)
    ModelRSevenUnlit* ModelRSevenUnlit::Light(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined4 in_register_00000034;
        int iStack0000000000000008;
        shared_ptr local_48;
        int local_34;
        int local_30;
        int local_2c;
        int local_28[2];

        local_34 = param_2;
        local_30 = param_3;
        local_2c = param_4;
        local_28[0] = param_5;
        if (BakedVertexLighting(this) == '\0') {
            local_28[1] = 0;
            make_shared<ModelRSevenLit, ModelRSevenLit::LightCall, ModelRSevenUnlit&>(
                (jag*)&local_48, (LightCall*)(local_28 + 1),
                (ModelRSevenUnlit*)CONCAT44(in_register_00000034, param_1));
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_48);
        } else {
            local_28[1] = 0;
            make_shared<ModelRSevenLit, ModelRSevenLit::LightCall, ModelRSevenUnlit&, int&, int&, int&, int&, int&>(
                (jag*)&local_48, (LightCall*)(local_28 + 1), (ModelRSevenUnlit*)CONCAT44(in_register_00000034, param_1),
                &local_34, &local_30, &local_2c, local_28, &iStack0000000000000008);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_48);
        }
        local_48.~shared_ptr();
        return this;
    }

    // 0x100351df0, 48 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::PrepareForShareLight(short, short)
    void ModelRSevenUnlit::PrepareForShareLight(short param_1, short param_2) {
        PrepareForShareLight(param_1, param_2);
        field_40->Prepare();
    }

    // 0x100351e30, 160 bytes, placed by __FILE__ string
    // ModelRSevenUnlit::CopyForShareLight()
    ModelRSevenUnlit* ModelRSevenUnlit::CopyForShareLight() {
        char cVar1;
        char cVar2;
        long lVar3;
        ModelUnlit* in_RSI;
        shared_ptr local_30;

        Copy((ModelRSevenUnlit*)&local_30, in_RSI);
        cVar1 = (((long)&in_RSI[1].field_8 + 6))->IsPrepared();
        lVar3 = shared_ptr<ModelRSevenUnlit>::operator->((shared_ptr<ModelRSevenUnlit>*)&local_30);
        cVar2 = ((lVar3 + 40))->IsPrepared();
        if (cVar1 != cVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shareLightBuffer.IsPrepared() == ret->m_shareLightBuffer.IsPrepared()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelRSeven.cpp",
                      177, (char*)0);
        }
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_30);
        local_30.~shared_ptr();
        return this;
    }

    // 0x100351ed0, 16 bytes, placed by neighbouring functions
    // ModelRSevenCommon::Rotate90()
    void ModelRSevenCommon::Rotate90() {
        RotateYAxis(this, 512);
    }

    // 0x100351ee0, 96 bytes, placed by neighbouring functions
    // ModelRSevenCommon::RotateYAxis(int)
    void ModelRSevenCommon::RotateYAxis(int param_1) {
        Matrix44T local_88;
        undefined1 local_48[40];

        if (param_1 != 0) {
            jag::math::Matrix33RotationY<float>((math*)local_48, (float)param_1 * 0.0030679617);
            new (&local_88) jag::math::Matrix44T<float>(local_48, PTR_ZERO_100ee66e8);
            AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_88);
        }
    }

    // 0x100351f40, 16 bytes, placed by neighbouring functions
    // ModelRSevenCommon::Rotate180()
    void ModelRSevenCommon::Rotate180() {
        RotateYAxis(this, 1024);
    }

    // 0x100351f50, 16 bytes, placed by neighbouring functions
    // ModelRSevenCommon::Rotate270()
    void ModelRSevenCommon::Rotate270() {
        RotateYAxis(this, 1536);
    }

    // 0x100351ff0, 96 bytes, placed by neighbouring functions
    // ModelRSevenCommon::RotateXAxis(int)
    void ModelRSevenCommon::RotateXAxis(int param_1) {
        Matrix44T local_88;
        undefined1 local_48[40];

        if (param_1 != 0) {
            jag::math::Matrix33RotationX<float>((math*)local_48, (float)-param_1 * 0.0030679647);
            new (&local_88) jag::math::Matrix44T<float>(local_48, PTR_ZERO_100ee66e8);
            AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_88);
        }
    }

    // 0x100352100, 112 bytes, placed by neighbouring functions
    // ModelRSevenCommon::Translate(int, int, int)
    void ModelRSevenCommon::Translate(int param_1, int param_2, int param_3) {
        Matrix44T local_78;
        ColourHSL local_30;

        if (((param_1 != 0) || (param_2 != 0)) || (param_3 != 0)) {
            new (&local_30) jag::math::ColourHSL((float)param_1, (float)-param_2, (float)param_3);
            new (&local_78) jag::math::Matrix44T<float>(PTR_IDENTITY_100ee6718, (Vector3T*)&local_30);
            AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_78);
        }
    }

    // 0x100352170, 48 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::Recolour(short, short)
    void ModelRSevenUnlit::Recolour(short param_1, short param_2) {
        ushort local_c;
        ushort local_a;

        local_c = param_1;
        local_a = param_2;
        ModelRSevenCommon::AddOperation<RecolourOperation, unsigned short, unsigned short>(
            (ModelRSevenCommon*)&field_24, &local_c, &local_a);
    }

    // 0x100352230, 48 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::Retexture(short, short)
    void ModelRSevenUnlit::Retexture(short param_1, short param_2) {
        ushort local_c;
        ushort local_a;

        local_c = param_1;
        local_a = param_2;
        ModelRSevenCommon::AddOperation<RetextureOperation, unsigned short, unsigned short>(
            (ModelRSevenCommon*)&field_24, &local_c, &local_a);
    }

    // 0x1003522f0, 16 bytes, placed by neighbouring functions
    // ModelRSevenUnlit::Mirror()
    void ModelRSevenUnlit::Mirror() {
        ModelRSevenCommon::AddOperation<MirrorOperation>((ModelRSevenCommon*)&field_24);
    }

    // 0x100352380, 32 bytes, placed by neighbouring functions
    // ModelRSevenCommon::Resize(int, int, int)
    void ModelRSevenCommon::Resize(int param_1, int param_2, int param_3) {
        ResizePrecise(this, param_1, param_2, param_3, 128);
    }

    // 0x1003523a0, 208 bytes, placed by neighbouring functions
    // ModelRSevenCommon::ResizePrecise(int, int, int, int)
    void ModelRSevenCommon::ResizePrecise(int param_1, int param_2, int param_3, int param_4) {
        vector* pvVar1;
        float* pfVar2;
        undefined4 in_register_00000034;
        type* ptVar3;
        Matrix44T local_a8;
        Matrix33T<float> local_60[40];
        ColourHSL local_38;
        float local_28;
        float local_24;

        ptVar3 = (type*)CONCAT44(in_register_00000034, param_1);
        new (&local_38) jag::math::ColourHSL((float)param_1, (float)param_2, (float)param_3);
        jag::math::Vector3T<float>::operator/=((Vector3T<float>*)&local_38, (float)param_4);
        pvVar1 = local_38.SSOBeginPtr(ptVar3);
        local_28 = *(float*)pvVar1;
        pfVar2 = (float*)local_38.y();
        local_24 = *pfVar2;
        pfVar2 = (float*)local_38.second();
        jag::math::Matrix33T<float>::Matrix33T(local_60, local_28, 0.0, 0.0, 0.0, local_24, 0.0, 0.0, 0.0, *pfVar2);
        new (&local_a8) jag::math::Matrix44T<float>(local_60, PTR_ZERO_100ee66e8);
        AddOperation<TransformOperation, jag::math::Matrix44T<float>>(this, &local_a8);
    }

    // 0x100352470, 224 bytes, placed by neighbouring functions
    // ModelRSevenLit::CalcBoundingCylinder()
    void ModelRSevenLit::CalcBoundingCylinder() {
        float fVar1;
        undefined8 uVar2;
        undefined4 extraout_XMM0_Dc;
        undefined4 extraout_XMM0_Dd;
        undefined8 extraout_XMM1_Qa;
        undefined8 extraout_XMM1_Qb;
        undefined1 auVar3[16];
        undefined1 auVar4[16];
        float fVar5;
        AABB local_48;
        float local_20;
        float local_1c;

        field_24->GetOperationBuffer();
        local_48.ResolveAABB();
        local_1c = (float)local_48.GetWidth();
        fVar1 = (float)local_48.GetWidth();
        local_1c = fVar1 * local_1c;
        local_20 = (float)local_48.GetLength();
        uVar2 = local_48.GetLength();
        auVar3._8_8_ = extraout_XMM1_Qb;
        auVar3._0_8_ = extraout_XMM1_Qa;
        fVar1 = (float)uVar2 * local_20 + local_1c;
        auVar4._4_4_ = (int)((ulong)uVar2 >> 32);
        auVar4._0_4_ = fVar1;
        auVar4._8_4_ = extraout_XMM0_Dc;
        auVar4._12_4_ = extraout_XMM0_Dd;
        auVar4 = rsqrtss(auVar3, auVar4);
        fVar5 = fVar1 * auVar4._0_4_;
        m_radiusCylinder =
            (int)((float)(~-(uint)(ABS(fVar1) < 1.1754944e-38) & (uint)((fVar5 * auVar4._0_4_ + -3.0) * fVar5 * -0.5)) *
                      0.5 +
                  0.0009765625);
        fVar1 = (float)local_48.GetMaxY();
        field_8 = (int)(fVar1 + 0.0009765625);
    }

    // 0x100352550, 480 bytes, placed by neighbouring functions
    // OperationBuffer::ResolveAABB() const
    AABB* OperationBuffer::ResolveAABB() {
        char cVar1;
        long lVar2;
        shared_ptr<jag::graphics::Model>* psVar3;
        NXTPixToolkit* pNVar4;
        AABB* pAVar5;
        Model* this_00;
        Layout* this_01;
        shared_ptr<Operation>* this_02;
        shared_ptr<Operation>* psVar6;
        long* plVar7;
        shared_ptr<OperationBuffer::OperationImpl_const>* in_RSI;
        undefined1 local_98[96];

        lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
        cVar1 = *(char*)(lVar2 + 208);
        lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
        if (cVar1 == '\0') {
            if (*(char*)(lVar2 + 209) == '\0') {
                new ((local_98 + 32)) jag::math::AABB();
                this_01 = (Layout*)shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
                this_02 = (shared_ptr<Operation>*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                psVar6 = (shared_ptr<Operation>*)this_01->end();
                if (this_02 != psVar6) {
                    do {
                        plVar7 = (long*)shared_ptr<Operation>::operator->(this_02);
                        (**(code**)(*plVar7 + 24))((AABB*)local_98, plVar7, (AABB*)(local_98 + 32));
                        jag::math::AABB::operator=((AABB*)(local_98 + 32), (AABB*)local_98);
                        this_02 = this_02 + 16;
                    } while (this_02 != psVar6);
                }
                lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
                jag::math::AABB::operator=((AABB*)(lVar2 + 176), (AABB*)(local_98 + 32));
                lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
                *(undefined1*)(lVar2 + 209) = 1;
                this = (OperationBuffer*)(AABB*)this;
            }
        } else if (*(char*)(lVar2 + 209) == '\0') {
            lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
            psVar3 = (shared_ptr<jag::graphics::Model>*)((lVar2 + 64))->GetModel();
            pNVar4 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->(psVar3);
            pAVar5 = (AABB*)pNVar4->GetScreen();
            cVar1 = pAVar5->IsValid();
            if (cVar1 == '\0') {
                lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
                psVar3 = (shared_ptr<jag::graphics::Model>*)((lVar2 + 64))->GetModel();
                this_00 = (Model*)shared_ptr<jag::graphics::Model>::operator->(psVar3);
                this_00->UpdateAABB();
            }
            lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
            psVar3 = (shared_ptr<jag::graphics::Model>*)((lVar2 + 64))->GetModel();
            pNVar4 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->(psVar3);
            pAVar5 = (AABB*)pNVar4->GetScreen();
            lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
            jag::math::AABB::operator=((AABB*)(lVar2 + 176), pAVar5);
            lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
            shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
            ((local_98 + 32))->GetLocalTransform();
            ((lVar2 + 176))->Transform((Matrix44T*)(local_98 + 32));
            lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
            *(undefined1*)(lVar2 + 209) = 1;
        }
        lVar2 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(in_RSI);
        new (this) jag::math::AABB((AABB*)(lVar2 + 176));
        return (AABB*)this;
    }

    // 0x100352750, 32 bytes, placed by neighbouring functions
    // ModelRSevenLit::GetRadiusCylinder()
    int ModelRSevenLit::GetRadiusCylinder() {
        CalcBoundingCylinder(this);
        return m_radiusCylinder;
    }

    // 0x100352770, 144 bytes, placed by __FILE__ string
    // ModelRSevenLit::CopyForAnim(bool, int)
    ModelRSevenLit* ModelRSevenLit::CopyForAnim(bool param_1, int param_2) {
        bool bVar1;
        long lVar2;
        undefined7 in_register_00000031;
        shared_ptr local_30;

        bVar1 = (CONCAT71(in_register_00000031, param_1))
                    ->IsValidValue((BucketAllocatorSTL*)CONCAT71(in_register_00000031, param_1));
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("IsLit()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelRSeven.cpp",
                      267, (char*)0);
        }
        Copy((ModelRSevenLit*)&local_30);
        lVar2 = shared_ptr<ModelRSevenLit>::operator->((shared_ptr<ModelRSevenLit>*)&local_30);
        *(undefined1*)(lVar2 + 96) = 1;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_30);
        local_30.~shared_ptr();
        return this;
    }

} // namespace jag::oldscape::dash3d
