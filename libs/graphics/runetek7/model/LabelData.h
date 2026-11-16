// libs/graphics/runetek7/model/LabelData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class LabelData {
    public:
        GeometryBatchVertexPos* operator=(LabelData&&);
        GeometryBatchVertexPos* operator=(LabelData const&);
        LabelData();

        // data members, from how the methods use this: 20 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x1001dd2e0, 48 bytes, inline, placed by class name and debug map
    // LabelData::operator=(LabelData&&)
    /* GeometryBatchVertexPos::TEMPNAMEPLACEHOLDERVALUE(GeometryBatchVertexPos&&)
    */

    GeometryBatchVertexPos* GeometryBatchVertexPos::operator=(GeometryBatchVertexPos* param_1) {
        SetXYZ(param_1);
        field_12 = param_1->field_12;
        return this;
    }

    // 0x1001dd2e0: the linker folded this into LabelData::operator=(LabelData&&), which has identical code
    GeometryBatchVertexPos::operator=(GeometryBatchVertexPos&&);

    // 0x1001dd2e0: the linker folded this into LabelData::operator=(LabelData&&), which has identical code
    GeometryBatchVertexPos::operator=(GeometryBatchVertexPos const&);

    // 0x1001dd2e0: the linker folded this into LabelData::operator=(LabelData&&), which has identical code
    LabelData::operator=(LabelData const&);

    // 0x1001dd660, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LabelData::LabelData(): jumps straight to the base-object constructor

    // 0x1001dd670, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // LabelData::LabelData()
    void LabelData::LabelData() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee66e8;
        field_8 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        field_0 = *(undefined8*)puVar1;
        field_12 = 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001dd310, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<graphics::LabelData, eastl::allocator> >::type make_shared<Array<graphics::LabelData, eastl::allocator>>()
    jag* make_shared<Array<graphics::LabelData, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Array* local_28[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<Array<graphics::LabelData, eastl::allocator>>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<Array<graphics::LabelData, eastl::allocator>>, int,
                                   Array<graphics::LabelData, eastl::allocator>*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1001dd3a0, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<graphics::LabelData, eastl::allocator>* placement_new<Array<graphics::LabelData, eastl::allocator>, unsigned long>(void*, unsigned long&&)
    Array* placement_new<Array<graphics::LabelData, eastl::allocator>, unsigned long>(void* param_1, ulong* param_2) {
        Array<graphics::LabelData, eastl::allocator>::Array(param_1, *param_2);
        return param_1;
    }

    // 0x1001dd3c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<graphics::LabelData, eastl::allocator> >* placement_new<ref_counter_shared<Array<graphics::LabelData, eastl::allocator> >, int, Array<graphics::LabelData, eastl::allocator>*&>(void*, int&&, Array<graphics::LabelData, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<Array<graphics::LabelData, eastl::allocator>>, int,
                                           Array<graphics::LabelData, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                           Array** param_3) {
        ref_counter_shared<Array<graphics::LabelData, eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x1001dd690, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<graphics::LabelData, eastl::allocator> >::ref_counter_shared(unsigned long, Array<graphics::LabelData, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x1001dd6a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<graphics::LabelData, eastl::allocator> >::ref_counter_shared(unsigned long, Array<graphics::LabelData, eastl::allocator>*)
    void ref_counter_shared<Array<graphics::LabelData, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<graphics::LabelData, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x1001dd6e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<graphics::LabelData, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<graphics::LabelData, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<graphics::LabelData, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001dd750, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<graphics::LabelData, eastl::allocator>* placement_new<Array<graphics::LabelData, eastl::allocator>>(void*)
    Array* placement_new<Array<graphics::LabelData, eastl::allocator>>(void* param_1) {
        Array<graphics::LabelData, eastl::allocator>::Array(param_1);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::rseven {
    // 0x1001dd7b0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DashExportResult::~DashExportResult()
    void DashExportResult::~DashExportResult() {
        (&field_24)->~shared_ptr();
        (&field_8)->~shared_ptr();
    }

    // 0x1001dd9e0, 832 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelWrapper::ModelWrapper(dash3d::ModelUnlitImpl&)
    void ModelWrapper::ModelWrapper(ModelUnlitImpl* param_1) {
        bool bVar1;
        char cVar2;
        undefined8 uVar3;
        Array* pAVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar5;
        DepthBiasComputer local_58[2];

        new (this) eastl::vector<Array<int, eastl::allocator>, eastl::allocator>();
        field_32 = param_1;
        field_40 = param_1->field_96;
        field_44 = 1;
        uVar3 = param_1->field_176->end();
        field_48 = uVar3;
        new (&field_56) SharedArray<unsigned int>();
        bVar1 = operator==((shared_ptr*)param_1->field_256, (_func_decltype_nullptr*)0);
        if (bVar1) {
            uVar3 = 0;
        } else {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<short, eastl::allocator>>::operator->(
                             (shared_ptr<Array<short, eastl::allocator>>*)param_1->field_256);
            uVar3 = pAVar5->data();
        }
        field_80 = uVar3;
        bVar1 = operator==((shared_ptr*)param_1->field_208, (_func_decltype_nullptr*)0);
        if (bVar1) {
            uVar3 = 0;
        } else {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                             (shared_ptr<Array<signed char, eastl::allocator>>*)param_1->field_208);
            uVar3 = pAVar5->data();
        }
        field_88 = uVar3;
        uVar3 = (&param_1->field_104)->data();
        field_96 = uVar3;
        uVar3 = (&param_1->field_128)->data();
        field_104 = uVar3;
        uVar3 = (&param_1->field_152)->data();
        field_112 = uVar3;
        uVar3 = (&param_1->field_24)->data();
        field_120 = uVar3;
        uVar3 = (&param_1->field_48)->data();
        field_128 = uVar3;
        uVar3 = (&param_1->field_72)->data();
        field_136 = uVar3;
        bVar1 = operator==((shared_ptr*)param_1->field_416, (_func_decltype_nullptr*)0);
        if (bVar1) {
            uVar3 = 0;
        } else {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<dash3d::FaceNormal, eastl::allocator>>::operator->(
                             (shared_ptr<Array<dash3d::FaceNormal, eastl::allocator>>*)param_1->field_416);
            uVar3 = pAVar5->data();
        }
        field_144 = uVar3;
        bVar1 = operator==((shared_ptr*)param_1->field_432, (_func_decltype_nullptr*)0);
        if (bVar1) {
            uVar3 = 0;
        } else {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<dash3d::PointNormal, eastl::allocator>>::operator->(
                             (shared_ptr<Array<dash3d::PointNormal, eastl::allocator>>*)param_1->field_432);
            uVar3 = pAVar5->data();
        }
        field_152 = uVar3;
        pAVar4 = (Array*)(&param_1->field_240)->end();
        uVar3 = Widify(this, pAVar4);
        field_160 = uVar3;
        bVar1 = operator==((shared_ptr*)&param_1->field_224, (_func_decltype_nullptr*)0);
        if (bVar1) {
            uVar3 = 0;
        } else {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                             (shared_ptr<Array<signed char, eastl::allocator>>*)&param_1->field_224);
            uVar3 = pAVar5->data();
        }
        field_168 = uVar3;
        uVar3 = Widify(this, (Array*)&param_1->field_344);
        field_176 = uVar3;
        uVar3 = Widify(this, (Array*)&param_1->field_368);
        field_184 = uVar3;
        uVar3 = Widify(this, (Array*)&param_1->field_392);
        field_192 = uVar3;
        bVar1 = param_1->field_480->operator_cast_to_bool();
        if (bVar1) {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<int, eastl::allocator>>::operator->(
                             (shared_ptr<Array<int, eastl::allocator>>*)param_1->field_480);
            uVar3 = pAVar5->data();
        } else {
            uVar3 = 0;
        }
        field_200 = uVar3;
        bVar1 = param_1->field_496->operator_cast_to_bool();
        if (bVar1) {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<int, eastl::allocator>>::operator->(
                             (shared_ptr<Array<int, eastl::allocator>>*)param_1->field_496);
            uVar3 = pAVar5->data();
        } else {
            uVar3 = 0;
        }
        field_208 = uVar3;
        bVar1 = (&param_1->field_512)->operator_cast_to_bool();
        if (bVar1) {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                             (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&param_1->field_512);
            uVar3 = pAVar5->data();
        } else {
            uVar3 = 0;
        }
        field_216 = uVar3;
        bVar1 = (&param_1->field_528)->operator_cast_to_bool();
        if (bVar1) {
            pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)
                         shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                             (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&param_1->field_528);
            uVar3 = pAVar5->data();
        } else {
            uVar3 = 0;
        }
        field_224 = uVar3;
        cVar2 = (&param_1->field_288)->empty();
        if (cVar2 != '\0') {
            bVar1 = operator!=((shared_ptr*)&param_1->field_192, (_func_decltype_nullptr*)0);
            if (bVar1) {
                dash3d::DepthBiasComputer::DepthBiasComputer(local_58, param_1);
                local_58->Run();
                local_58->~DepthBiasComputer();
            }
        }
        (&field_56, (SharedArray*)&param_1->field_288)->ref_assign();
    }

    // 0x1001dde30, 144 bytes, inline, placed by debug map only (low confidence)
    // ModelWrapper::Widify(Array<short, eastl::allocator> const*)
    undefined8 ModelWrapper::Widify(Array* param_1) {
        long lVar1;
        ulong uVar2;
        Array<int, eastl::allocator>* this_00;
        long lVar3;
        undefined8 uVar4;
        ulong uVar5;

        if (param_1 == (Array*)0) {
            return 0;
        }
        lVar1 = param_1->data();
        uVar2 = param_1->end();
        this_00 = (Array<int, eastl::allocator>*)push_back();
        this_00->set_max_size(uVar2, 3);
        lVar3 = this_00->data();
        if (uVar2 != 0) {
            uVar5 = 0;
            do {
                *(int*)(lVar3 + uVar5 * 4) = (int)*(short*)(lVar1 + uVar5 * 2);
                uVar5 = uVar5 + 1;
            } while (uVar2 != uVar5);
        }
        uVar4 = this_00->data();
        return uVar4;
    }

    // 0x1001de420, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ModelWrapper::~ModelWrapper()
    void ModelWrapper::~ModelWrapper() {
        (&field_56)->~SharedArray();
        ~vector();
    }

} // namespace jag::oldscape::rseven
