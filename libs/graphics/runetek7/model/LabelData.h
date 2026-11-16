// libs/graphics/runetek7/model/LabelData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class LabelData {
    public:
        GeometryBatchVertexPos* operator=(LabelData&& labelData);
        GeometryBatchVertexPos* operator=(const LabelData& labelData);
        LabelData();

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

    // 0x1001dd2e0
    GeometryBatchVertexPos* LabelData::operator=(LabelData&& labelData) {
        SetXYZ(labelData);
        field_12 = labelData.field_12;
        return this;
    }

    // 0x1001dd2e0: GeometryBatchVertexPos::operator=(GeometryBatchVertexPos&&) has the same machine code as LabelData::operator=(LabelData&&)

    // 0x1001dd2e0: GeometryBatchVertexPos::operator=(GeometryBatchVertexPos const&) has the same machine code as LabelData::operator=(LabelData&&)

    // 0x1001dd2e0: LabelData::operator=(LabelData const&) has the same machine code as LabelData::operator=(LabelData&&)

    // 0x1001dd670
    LabelData::LabelData() {
        uint8_t* puVar1 = PTR_ZERO_100ee66e8;
        field_8 = *(uint32_t*)(PTR_ZERO_100ee66e8 + 8);
        field_0 = *(uint64_t*)puVar1;
        field_12 = 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001dd310
    shared_ptr_if_not_array<Array<graphics::LabelData>>::type make_shared<Array<graphics::LabelData>>() {
        ref_counter_shared<Array<graphics::LabelData> _>* ref_counter_shared;
        int local_2c;
        Array<graphics::LabelData>* local_28[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<Array<graphics::LabelData>>::type result;
        } else {
            local_28[0] = placement_new<Array<graphics::LabelData>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<graphics::LabelData>>, int, Array<graphics::LabelData>*&>(
                    arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1001dd3a0
    Array<graphics::LabelData>* placement_new<Array<graphics::LabelData>, unsigned long>(void* arg1,
                                                                                         unsigned long&& arg2) {
        new (arg1) Array<graphics::LabelData>(arg2);
        return arg1;
    }

    // 0x1001dd3c0
    ref_counter_shared<Array<graphics::LabelData>>*
    placement_new<ref_counter_shared<Array<graphics::LabelData>>, int, Array<graphics::LabelData>*&>(
        void* arg1, int&& arg2, Array<graphics::LabelData>*& arg3) {
        new (arg1) ref_counter_shared<Array<graphics::LabelData>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001dd6a0
    ref_counter_shared<Array<graphics::LabelData>>::ref_counter_shared(unsigned long arg1,
                                                                       Array<graphics::LabelData>* labelDatas)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee73e0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<graphics::LabelData>**)(this + 24) = labelDatas;
    }

    // 0x1001dd6e0
    void ref_counter_shared<Array<graphics::LabelData>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<graphics::LabelData>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1001dd750
    Array<graphics::LabelData>* placement_new<Array<graphics::LabelData>>(void* arg1) {
        new (arg1) Array<graphics::LabelData>();
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::rseven {
    // 0x1001dd7b0
    DashExportResult::~DashExportResult() {
        field_24.~shared_ptr();
        field_8.~shared_ptr();
    }

    // 0x1001dd9e0
    ModelWrapper::ModelWrapper(dash3d::ModelUnlitImpl& modelUnlitImpl)
        : eastl::vector<Array<int>>(), field_32(modelUnlitImpl), field_40(modelUnlitImpl.field_96), field_44(1) {
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar4;
        DepthBiasComputer local_58;

        uint64_t uVar3 = modelUnlitImpl.field_176.end();
        field_48 = uVar3;
        new (&field_56) SharedArray();
        if (modelUnlitImpl.field_256 == nullptr) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_256.operator->();
            uVar3 = pAVar4->data();
        }
        field_80 = uVar3;
        if (modelUnlitImpl.field_208 == nullptr) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_208.operator->();
            uVar3 = pAVar4->data();
        }
        field_88 = uVar3;
        uVar3 = modelUnlitImpl.field_104.data();
        field_96 = uVar3;
        uVar3 = modelUnlitImpl.field_128.data();
        field_104 = uVar3;
        uVar3 = modelUnlitImpl.field_152.data();
        field_112 = uVar3;
        uVar3 = modelUnlitImpl.field_24.data();
        field_120 = uVar3;
        uVar3 = modelUnlitImpl.field_48.data();
        field_128 = uVar3;
        uVar3 = modelUnlitImpl.field_72.data();
        field_136 = uVar3;
        if (modelUnlitImpl.field_416 == nullptr) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_416.operator->();
            uVar3 = pAVar4->data();
        }
        field_144 = uVar3;
        if (modelUnlitImpl.field_432 == nullptr) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_432.operator->();
            uVar3 = pAVar4->data();
        }
        field_152 = uVar3;
        uVar3 = Widify((Array<short>*)modelUnlitImpl.field_240.end());
        field_160 = uVar3;
        if (modelUnlitImpl.field_224 == nullptr) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_224.operator->();
            uVar3 = pAVar4->data();
        }
        field_168 = uVar3;
        uVar3 = Widify(&modelUnlitImpl.field_344);
        field_176 = uVar3;
        uVar3 = Widify(&modelUnlitImpl.field_368);
        field_184 = uVar3;
        uVar3 = Widify(&modelUnlitImpl.field_392);
        field_192 = uVar3;
        if (!((&modelUnlitImpl.field_480)->operator_cast_to_bool())) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_480.operator->();
            uVar3 = pAVar4->data();
        }
        field_200 = uVar3;
        if (!((&modelUnlitImpl.field_496)->operator_cast_to_bool())) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_496.operator->();
            uVar3 = pAVar4->data();
        }
        field_208 = uVar3;
        if (!((&modelUnlitImpl.field_512)->operator_cast_to_bool())) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_512.operator->();
            uVar3 = pAVar4->data();
        }
        field_216 = uVar3;
        if (!((&modelUnlitImpl.field_528)->operator_cast_to_bool())) {
            uVar3 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_528.operator->();
            uVar3 = pAVar4->data();
        }
        field_224 = uVar3;
        if (modelUnlitImpl.field_288.empty()) {
            if (modelUnlitImpl.field_192 != nullptr) {
                local_58 = dash3d::DepthBiasComputer(modelUnlitImpl);
                local_58.Run();
            }
        }
        field_56.ref_assign(modelUnlitImpl.field_288);
    }

    // 0x1001dde30
    uint64_t ModelWrapper::Widify(const Array<short>* arg1) {
        unsigned long uVar4;

        if (arg1 == nullptr) {
            return 0;
        }
        long lVar1 = arg1->data();
        unsigned long arg1_00 = arg1->end();
        auto this_00 = push_back();
        this_00->set_max_size(arg1_00, 3);
        long lVar2 = this_00->data();
        if (arg1_00 != 0) {
            uVar4 = 0;
            do {
                *(int*)(lVar2 + uVar4 * 4) = (int)*(short*)(lVar1 + uVar4 * 2);
                uVar4 = uVar4 + 1;
            } while (arg1_00 != uVar4);
        }
        return this_00->data();
    }

    // 0x1001de420
    ModelWrapper::~ModelWrapper() {
        field_56.~SharedArray();
    }

} // namespace jag::oldscape::rseven
