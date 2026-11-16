// libs/oldscape/jagex3/dash3d/NXTRenderCanvas.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class CombineOperation {
    public:
        // virtual methods in vtable order
        virtual Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        virtual CanAppend() const;
        virtual void Append(Operation&&);
        virtual ApplyAABB(jag::math::AABB const&) const;
        virtual ulong IsEqual(Operation const&) const;
        TryReuseModelCombination(ResolvedModel const&, OperationRecordEntry const*, ResolvedModel&) const;
        ResolvedModel* ApplyFresh(ResolvedModel const&, OperationRecordEntry const*) const;
        void UpdateTransformAndAnimationState(jag::graphics::Model&, shared_ptr<PoseStateRSeven>&,
                                              shared_ptr<PoseStateRSeven> const&, jag::math::Matrix44T<float>,
                                              unsigned short&, unsigned short&, unsigned short&) const;
        CombineOperation* GetTextureAtlasQuality();
        GetPreviousBuffer(OperationRecordEntry const*, unsigned long) const;
        bool OnlyAnimationsChanged(ResolvedModel const&, ResolvedModel const&) const;
        ulong OnlyAnimationsChangedBetweenModelSets(eastl::vector<OperationBuffer, eastl::allocator>&,
                                                    eastl::vector<OperationBuffer, eastl::allocator>&) const;
        void RelabelAnimationsForModelSet(shared_ptr<PoseStateRSeven>&, ResolvedModel const&) const;
        void ShiftLabelsAndCombineAnimation(shared_ptr<PoseStateRSeven>&, shared_ptr<PoseStateRSeven> const&,
                                            LabelShiftRange const&) const;
        CombineOperation* TransformAnimationState(shared_ptr<PoseStateRSeven> const&,
                                                  jag::math::Matrix44T<float>) const;
        void RelabelModelForAnimation(jag::graphics::Model&, unsigned short&, unsigned short&, unsigned short&) const;
        void IncrementModelLabelsForAnimation(jag::graphics::Model&, unsigned short, unsigned short,
                                              unsigned short) const;
        void IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&, unsigned short&,
                                   unsigned short&) const;
        void UpdateLabelOffset(
            jag::graphics::Model const&, unsigned short&,
            std::function<
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                eastl::allocator>> const*(jag::graphics::GeometryBatch const&)>) const;
        CombineOperation(eastl::vector<OperationBuffer, eastl::allocator>&&);
        ~CombineOperation();
        CombineOperation(OperationBuffer const&);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined4 field_32; // offset 32
        char _unknown_36[20];
    };

    class NXTRenderCanvas {
    public:
        GetLastNumVerts();
        Get2DOnlyFrame() const;
        GetPixelBuffer();
        void SetDepthBufferEnabled(bool);
        void Set2DOnlyFrame();
        void SetRenderRect(int, int, int, int);
        NXTRenderCanvas();
        void SetScreenSize(int, int);
        void SetUIRect(int, int, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        void SetSkyboxColour(jag::math::Vector4T<float>);
        void ShowSkybox(bool);
        void SetFogParams(float, float);
        void ShowUI(bool);
        void SetScaledUIQuality(ScaledUIQuality);
        void RenderThread_PrepareRender();
        void RenderThread_Render(bool);
        ~NXTRenderCanvas();

        // data members, from how the methods use this: 144 bytes
        ulonglong field_0; // offset 0
        ulonglong field_8; // offset 8
        char _unknown_16[8];
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        int m_screenSize;    // offset 32
        int field_36;        // offset 36
        uint field_40;       // offset 40
        undefined4 field_44; // offset 44
        int m_renderRect;    // offset 48
        int field_52;        // offset 52
        int field_56;        // offset 56
        int field_60;        // offset 60
        bool field_64;       // offset 64
        char _unknown_65[3];
        undefined4 m_scaledUIQuality; // offset 68
        bool field_72;                // offset 72
        char _unknown_73[7];
        undefined8 field_80;       // offset 80
        undefined8 field_88;       // offset 88
        float m_fogParams;         // offset 96
        float field_100;           // offset 100
        bool m_depthBufferEnabled; // offset 104
        char _unknown_105[31];
        undefined4 m_lastNumVerts; // offset 136
        undefined1 field_140;      // offset 140
        char _unknown_141[3];
    };

    class OperationRecordEntry {
    public:
        OperationRecordEntry(shared_ptr<Operation> const&, ResolvedModel const&, ResolvedModel const&);
        ~OperationRecordEntry();
        OperationRecordEntry* GetOperation() const;
        ResolvedModel GetOutputModel() const;
        ResolvedModel GetInputModel() const;
        OperationRecordEntry* operator=(OperationRecordEntry const&);
        OperationRecordEntry(OperationRecordEntry const&);
        OperationRecordEntry(OperationRecordEntry&&);

        // data members, from how the methods use this: 240 bytes
        char _unknown_0[8];
        long field_8;                // offset 8
        ResolvedModel m_inputModel;  // offset 16
        ResolvedModel m_outputModel; // offset 128
    };

    // 0x1001c4630, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTRenderCanvas::Get2DOnlyFrame() const
    /* jag::graphics::Material::HasHighlighting() const */

    undefined1 jag::graphics::Material::HasHighlighting() {
        return m_hasHighlighting;
    }

    // 0x10031b610, 16 bytes, inline, placed by class name and debug map
    // NXTRenderCanvas::SetDepthBufferEnabled(bool)
    void NXTRenderCanvas::SetDepthBufferEnabled(bool param_1) {
        m_depthBufferEnabled = param_1;
    }

    // 0x10031b940, 16 bytes, inline, placed by class name
    // NXTRenderCanvas::Set2DOnlyFrame()
    void NXTRenderCanvas::Set2DOnlyFrame() {
        field_140 = 1;
    }

    // 0x100367980, 16 bytes, complete-object destructor, inline, placed by class name
    // NXTRenderCanvas::~NXTRenderCanvas(): jumps straight to the base-object destructor

    // 0x10036a620, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // OperationRecordEntry::OperationRecordEntry(shared_ptr<Operation> const&, ResolvedModel const&, ResolvedModel const&): jumps straight to the base-object constructor

    // 0x10036a630, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // OperationRecordEntry::~OperationRecordEntry(): jumps straight to the base-object destructor

    // 0x100372520, 16 bytes, base-object destructor, inline, placed by class name
    // NXTRenderCanvas::~NXTRenderCanvas()
    void NXTRenderCanvas::~NXTRenderCanvas() {
        (&field_112)->~SharedArray();
    }

} // namespace jag::oldscape::dash3d
