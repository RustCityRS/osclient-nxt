// libs/oldscape/jagex3/dash3d/RSevenModelLitRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class RSevenModelLitRenderer {
    public:
        class ActiveModel;
        class ActiveOverlay;
        class ActiveStaticBatch;
        class StaticBatchAppendList;
        jag::math::Matrix44T<float> CreateViewMatrix(jag::math::Vector3T<int> vector3,
                                                     jag::math::Vector2T<int> vector2);
        RSevenModelLitRenderer* CreateProjectionMatrix(double arg1, double arg2);
        RSevenModelLitRenderer();
        ~RSevenModelLitRenderer();
        void SetSpritesJs5(jagex3::Js5* js5);
        void ResetMap();
        void OnFinishRebuild();
        void OnBeginWorldRender(world* world);
        void SubmitModel(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                         long long arg8, ModelTypecodeType modelTypecodeType, const EntityHighlight& entityHighlight,
                         int arg11);
        void ResolveAndSendToRenderThread(const ModelRSevenLit& modelRSevenLit,
                                          shared_ptr<RenderState::ModelSubmissionRSeven>& modelSubmissionRSeven,
                                          int arg3, int arg4, int arg5, int arg6, int arg7, long long arg8,
                                          long long arg9, const EntityHighlight& entityHighlight);
        void TestModelMouseIntersection(const ActiveModel& activeModel);
        void SubmitTileHighlight(int arg1, int arg2, int arg3, const EntityHighlight& entityHighlight);
        void SubmitLightSource(PointLightSource& pointLightSource, int arg2, int arg3, int arg4, long long arg5,
                               int arg6);
        void ResolveAndUpdateSubmission(const ModelRSevenLit& modelRSevenLit,
                                        shared_ptr<RenderState::ModelSubmissionRSeven>& modelSubmissionRSeven, int arg3,
                                        int arg4, int arg5, int arg6, int arg7, long long arg8, long long arg9,
                                        const EntityHighlight& entityHighlight);
        void UploadModelTextures(const jag::graphics::Model& model);
        void OnEndWorldRender();
        void DeleteUnusedOverlays();
        void TestStaticAabbMouseIntersection(const jag::math::AABB& aabb, bool arg2);
        void DestroyResources();
        void TestModelMouseIntersectionFine(const ResolvedModel& resolvedModel,
                                            const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven);
        void SubmitOverlayModel(ModelLit& modelLit, int arg2, int arg3, jag::math::Vector3T<int> vector3,
                                RenderState::OverlayViewportState& overlayViewportState);
        void GetNextOverlay();
        void UploadTextures(Array<short>& arg1);

    private:
        Js5* m_pSpritesJs5;
        world* field_8;
        uint8_t _unknown_16[184];
        unsigned long long field_200;
        int field_208;
        uint8_t _unknown_212[20];
    };

    class RSevenModelLitRenderer::ActiveModel {
    public:
        ~ActiveModel();
        ActiveModel();
        ActiveModel(ActiveModel&& activeModel);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[16];
        uint32_t field_24;
        uint8_t field_28;
        uint8_t _unknown_29[3];
    };

    class RSevenModelLitRenderer::ActiveOverlay {
    public:
        ~ActiveOverlay();
        ActiveOverlay(ActiveOverlay&& activeOverlay);
        ActiveOverlay();

    private:
        uint8_t _unknown_0[48];
        uint32_t field_48;
        uint8_t _unknown_52[4];
    };

    class RSevenModelLitRenderer::ActiveStaticBatch {
    public:
        ~ActiveStaticBatch();
        ActiveStaticBatch();
        ActiveStaticBatch(ActiveStaticBatch&& activeStaticBatch);

    private:
        uint8_t _unknown_0[88];
        uint64_t field_88;
        uint8_t field_96;
    };

    class RSevenModelLitRenderer::StaticBatchAppendList {
    public:
        // virtual methods in vtable order
        virtual void Count() const;
        virtual uint64_t GetBaseModel(unsigned long arg1) const;
        virtual uint64_t GetTempModel(unsigned long arg1);
        StaticBatchAppendList(const eastl::hash_map<long long, shared_ptr<ModelLit>>& arg1, bool arg2);
        ~StaticBatchAppendList();

    private:
        uint8_t _unknown_8[1];
    };

    // 0x1001c4650
    jag::math::Matrix44T<float> RSevenModelLitRenderer::CreateViewMatrix(jag::math::Vector3T<int> vector3,
                                                                         jag::math::Vector2T<int> vector2) {
        Matrix33T<float> local_80;

        uint32_t local_40 = (uint32_t)vector3;
        int* piVar2 = (int*)(vector2).y();
        float local_2c = (float)*piVar2;
        piVar2 = (int*)(vector2).SSOBeginPtr();
        float local_28 = (float)*piVar2;
        piVar2 = (int*)(this).SSOBeginPtr();
        float local_30 = (float)*piVar2;
        piVar2 = (int*)(this).y();
        int iVar1 = *piVar2;
        piVar2 = (int*)(this).second();
        float local_24 = (float)*piVar2;
        jag::math::Matrix33RotationYawPitchRoll<float>(local_2c * -0.0030679617, local_28 * 0.0030679617f, 0.0);
        ColourHSL local_58(local_30, (float)-iVar1, local_24);
        jag::math::Matrix44T<float> result;
        jag::math::Matrix44View<float>(result, local_80, local_58);
        return result;
    }

    // 0x1001c4750
    RSevenModelLitRenderer* RSevenModelLitRenderer::CreateProjectionMatrix(double arg1, double arg2) {
        new (this) jag::math::Matrix44T<float>();
        float fVar1 = (float)::sqrt(2.0);
        jag::math::Matrix44PerspectiveFovLH<float>(
            *this, (float)(3.1415927f / (((arg1 - 181.0) * 6.103515625e-07 + 0.0083984375) * (arg1 - 181.0) + 2.111)),
            (float)arg2, 64.0, fVar1 * 13312.0, 0);
        return this;
    }

    // 0x1001d22f0
    RSevenModelLitRenderer::RSevenModelLitRenderer() : m_pSpritesJs5(nullptr), field_8(nullptr) {

        new (&field_16) eastl::hash_map<long long, RSevenModelLitRenderer::ActiveModel>(local_38);
        new (&field_72) eastl::hash_map<long long, RSevenModelLitRenderer::ActiveStaticBatch>(local_38);
        new (&field_128) eastl::vector<RSevenModelLitRenderer::ActiveOverlay>();
        new (&field_160) eastl::vector<RenderState::LightSubmissionRSeven>();
        field_208 = 1;
        new (&field_224) jag::graphics::PickingHelper(false);
    }

    // 0x1001d2880
    RSevenModelLitRenderer::ActiveOverlay::~ActiveOverlay() {}

    // 0x1001d2a30
    RSevenModelLitRenderer::ActiveStaticBatch::~ActiveStaticBatch() {
        field_32.~hash_map();
        field_16.~shared_ptr();
    }

    // 0x1001d58c0
    RSevenModelLitRenderer::~RSevenModelLitRenderer() {
        field_224.~PickingHelper();
        field_160.~vector();
        field_128.~vector();
        field_72.~hash_map();
        field_16.~hash_map();
    }

    // 0x100325750
    RSevenModelLitRenderer::ActiveModel::ActiveModel() {
        new ((this + 8)) shared_ptr();
    }

    // 0x100325760
    RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch() : shared_ptr() {

        new (&field_16) shared_ptr();
        new (&field_32) eastl::hash_map(local_28);
    }

    // 0x100325ab0
    RSevenModelLitRenderer::StaticBatchAppendList::StaticBatchAppendList(
        const eastl::hash_map<long long, shared_ptr<ModelLit>>& arg1, bool arg2)
        : ModelAppendList() {
        pair<long long const, shared_ptr<ModelLit> _>* arg1_00;
        pair<long long const, shared_ptr<ModelLit> _>* arg2_00;
        long* plVar3;
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;
        uint32_t extraout_EDX_01;
        uint32_t extraout_var;
        uint32_t extraout_var_00;
        uint32_t extraout_var_01;
        uint64_t local_48;
        uint64_t local_40;

        uint64_t local_68 = arg1.begin();
        uint64_t local_60 = (((uint64_t)extraout_var << 32) | (uint32_t)extraout_EDX);
        uint64_t local_58 = arg1.end();
        uint64_t local_50 = (((uint64_t)extraout_var_00 << 32) | (uint32_t)extraout_EDX_00);
        do {
            if (local_68 != local_58 == '\0') {
                return;
            }
            arg1_00 = (pair<long long const, shared_ptr<ModelLit> _>*)local_68.HeapBeginPtr();
            if (arg2) {
                local_48 = arg1.begin();
                local_40 = (((uint64_t)extraout_var_01 << 32) | (uint32_t)extraout_EDX_01);
                arg2_00 = (pair<long long const, shared_ptr<ModelLit> _>*)local_48.HeapBeginPtr();
                if (*arg1_00 != *arg2_00)
                    goto LAB_100325b70;
            } else {
            LAB_100325b70:
                local_48 = ((arg1_00 + 8))->end();
                field_8.push_back(local_48);
                plVar3 = (long*)(*((arg1_00 + 8))).operator->();
                (**(void (**)(...))(*plVar3 + 64))(plVar3);
            }
            ++local_68;
        } while (true);
    }

    // 0x100325c30
    void RSevenModelLitRenderer::StaticBatchAppendList::Count() const {
        field_8.size();
    }

    // 0x100325c40
    uint64_t RSevenModelLitRenderer::StaticBatchAppendList::GetBaseModel(unsigned long arg1) const {
        uint64_t* puVar1 = &field_8[arg1];
        return *puVar1;
    }

    // 0x100325c60
    uint64_t RSevenModelLitRenderer::StaticBatchAppendList::GetTempModel(unsigned long arg1) {
        uint64_t* puVar1 = &field_8[arg1];
        return *puVar1;
    }

    // 0x100326120
    RSevenModelLitRenderer::StaticBatchAppendList::~StaticBatchAppendList() {
        field_8.~fixed_vector();
    }

    // 0x10032cb60
    RSevenModelLitRenderer::ActiveModel::ActiveModel(RSevenModelLitRenderer::ActiveModel&& activeModel)
        : field_0(activeModel.field_0) {
        field_8.shared_ptr<FileRSevenDebugPresetProvider, void>(activeModel.field_8);
        field_28 = activeModel.field_28;
        field_24 = activeModel.field_24;
    }

    // 0x10032cf00
    RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch(
        RSevenModelLitRenderer::ActiveStaticBatch&& activeStaticBatch) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(activeStaticBatch);
        field_16.shared_ptr<FileRSevenDebugPresetProvider, void>(activeStaticBatch.field_16);
        new (&field_32) eastl::hash_map(activeStaticBatch.field_32);
        field_96 = activeStaticBatch.field_96;
        field_88 = activeStaticBatch.field_88;
    }

    // 0x10032d920
    RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay(RSevenModelLitRenderer::ActiveOverlay&& activeOverlay)
        : RenderState::OverlayRSeven(activeOverlay), field_48(activeOverlay.field_48) {}

    // 0x10032d9b0
    RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay() : RenderState::OverlayRSeven() {}

} // namespace jag::oldscape::dash3d
