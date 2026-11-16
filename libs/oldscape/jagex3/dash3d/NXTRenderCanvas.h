// libs/oldscape/jagex3/dash3d/NXTRenderCanvas.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class CombineOperation {
    public:
        // virtual methods in vtable order
        virtual ResolvedModel Apply(const ResolvedModel& resolvedModel,
                                    const OperationRecordEntry* operationRecordEntry) const;
        virtual bool CanAppend() const;
        virtual void Append(Operation&& operation);
        virtual jag::math::AABB ApplyAABB(const jag::math::AABB& aabb) const;
        virtual unsigned long IsEqual(const Operation& operation) const;
        uint64_t TryReuseModelCombination(const ResolvedModel& resolvedModel1,
                                          const OperationRecordEntry* operationRecordEntry,
                                          ResolvedModel& resolvedModel2) const;
        ResolvedModel* ApplyFresh(const ResolvedModel& resolvedModel,
                                  const OperationRecordEntry* operationRecordEntry) const;
        void UpdateTransformAndAnimationState(jag::graphics::Model& model,
                                              shared_ptr<PoseStateRSeven>& poseStateRSeven1,
                                              const shared_ptr<PoseStateRSeven>& poseStateRSeven2,
                                              jag::math::Matrix44T<float> matrix44, unsigned short& arg5,
                                              unsigned short& arg6, unsigned short& arg7) const;
        auto GetTextureAtlasQuality();
        uint64_t GetPreviousBuffer(const OperationRecordEntry* operationRecordEntry, unsigned long arg2) const;
        bool OnlyAnimationsChanged(const ResolvedModel& resolvedModel1, const ResolvedModel& resolvedModel2) const;
        unsigned long OnlyAnimationsChangedBetweenModelSets(eastl::vector<OperationBuffer>& operationBuffers1,
                                                            eastl::vector<OperationBuffer>& operationBuffers2) const;
        void RelabelAnimationsForModelSet(shared_ptr<PoseStateRSeven>& poseStateRSeven,
                                          const ResolvedModel& resolvedModel) const;
        void ShiftLabelsAndCombineAnimation(shared_ptr<PoseStateRSeven>& poseStateRSeven1,
                                            const shared_ptr<PoseStateRSeven>& poseStateRSeven2,
                                            const LabelShiftRange& labelShiftRange) const;
        CombineOperation* TransformAnimationState(const shared_ptr<PoseStateRSeven>& poseStateRSeven,
                                                  jag::math::Matrix44T<float> matrix44) const;
        void RelabelModelForAnimation(jag::graphics::Model& model, unsigned short& arg2, unsigned short& arg3,
                                      unsigned short& arg4) const;
        void IncrementModelLabelsForAnimation(jag::graphics::Model& model, unsigned short arg2, unsigned short arg3,
                                              unsigned short arg4) const;
        void IncrementLabelOffsets(const jag::graphics::Model& model, unsigned short& arg2, unsigned short& arg3,
                                   unsigned short& arg4) const;
        void UpdateLabelOffset(
            const jag::graphics::Model& model, unsigned short& arg2,
            std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>
                callback) const;
        CombineOperation(eastl::vector<OperationBuffer>&& operationBuffers);
        ~CombineOperation();
        CombineOperation(const OperationBuffer& operationBuffer);

    private:
        Type field_8;
        uint8_t _unknown_12[44];
    };

    class NXTRenderCanvas {
    public:
        uint32_t GetLastNumVerts();
        uint8_t Get2DOnlyFrame() const;
        uint8_t* GetPixelBuffer();
        void SetDepthBufferEnabled(bool arg1);
        void Set2DOnlyFrame();
        void SetRenderRect(int arg1, int arg2, int arg3, int arg4);
        NXTRenderCanvas();
        void SetScreenSize(int arg1, int arg2);
        void SetUIRect(int arg1, int arg2, CoordType<UICoordSpecializer> coordType1,
                       CoordType<UICoordSpecializer> coordType2);
        void SetSkyboxColour(jag::math::Vector4T<float> vector4);
        void ShowSkybox(bool arg1);
        void SetFogParams(float arg1, float arg2);
        void ShowUI(bool arg1);
        void SetScaledUIQuality(ScaledUIQuality scaledUIQuality);
        void RenderThread_PrepareRender();
        void RenderThread_Render(bool arg1);
        ~NXTRenderCanvas();

    private:
        unsigned long long field_0;
        unsigned long long field_8;
        uint8_t _unknown_16[8];
        int field_24;
        int field_28;
        int m_screenSize;
        int field_36;
        unsigned int field_40;
        uint32_t field_44;
        int field_48;
        int field_52;
        int field_56;
        int field_60;
        bool field_64;
        uint8_t _unknown_65[3];
        ScaledUIQuality m_scaledUIQuality;
        bool field_72;
        uint8_t _unknown_73[23];
        float m_fogParams;
        float field_100;
        bool m_depthBufferEnabled;
        uint8_t _unknown_105[31];
        uint32_t m_lastNumVerts;
        uint8_t field_140;
        uint8_t _unknown_141[3];
    };

    class OperationRecordEntry {
    public:
        OperationRecordEntry(const shared_ptr<Operation>& operation, const ResolvedModel& resolvedModel1,
                             const ResolvedModel& resolvedModel2);
        ~OperationRecordEntry();
        shared_ptr<Operation>* GetOperation() const;
        ResolvedModel* GetOutputModel() const;
        ResolvedModel* GetInputModel() const;
        OperationRecordEntry* operator=(const OperationRecordEntry& operationRecordEntry);
        OperationRecordEntry(const OperationRecordEntry& operationRecordEntry);
        OperationRecordEntry(OperationRecordEntry&& operationRecordEntry);

    private:
        uint8_t _unknown_0[8];
        long field_8;
        ResolvedModel m_inputModel;
        ResolvedModel m_outputModel;
    };

    // 0x1001c4630
    uint8_t NXTRenderCanvas::Get2DOnlyFrame() const {
        return m_hasHighlighting;
    }

    // 0x10031b610
    void NXTRenderCanvas::SetDepthBufferEnabled(bool arg1) {
        m_depthBufferEnabled = arg1;
    }

    // 0x10031b940
    void NXTRenderCanvas::Set2DOnlyFrame() {
        field_140 = 1;
    }

    // 0x100372520
    NXTRenderCanvas::~NXTRenderCanvas() {
        field_112.~SharedArray();
    }

} // namespace jag::oldscape::dash3d
