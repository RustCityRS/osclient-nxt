// libs/graphics/runetek7/gui/GUIManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GUIManager {
    public:
        GetProjectionMode() const;
        GetLastViewportWidth() const;
        GetLastViewportHeight() const;
        void AddElement(math::Rect<int> const&, unsigned int, math::Rect<float> const&, render::Texture const*,
                        BlendMode);
        void AddElementIn3DSpace(math::Vector3T<float> const&, int, int, math::Matrix44T<float> const&,
                                 math::Matrix44T<float> const&, unsigned int, math::Rect<float> const&,
                                 render::Texture*, BlendMode, bool);
        void AddElementIn3DSpace(math::Vector3T<float> const&, int, int, math::Matrix44T<float> const&,
                                 math::Matrix44T<float> const&, unsigned int, math::Rect<float> const&,
                                 render::Texture*, BlendMode, bool, int, int);
        void AddElementRotated(int, int, int, int, unsigned int, math::Rect<float> const&, render::Texture const*,
                               BlendMode, float, int, int);
        void AddElement(int, int, int, int, unsigned int, math::Rect<float> const&, render::Texture const*, BlendMode);
        void AddElementPrecise(float, float, float, float, unsigned int, math::Rect<float> const&,
                               render::Texture const*, BlendMode, float, int, int);
        void AddColouredRectangle(math::Rect<int> const&, unsigned int, BlendMode);
        void AddOutline(math::Rect<int> const&, int, unsigned int, BlendMode);
        GetCurrentState();
        void AddTexturedRectangle(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*,
                                  BlendMode);
        void AddTexturedRectangle(int, int, int, int, unsigned int, math::Rect<float> const&, render::Texture const*,
                                  BlendMode);
        void AddHorizontalLine(int, int, int, int, unsigned int, BlendMode);
        void AddElement(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*,
                        BlendMode);
        GUIManager();
        ~GUIManager();
        void Destroy();
        Initialise(RT7Core*);
        ulong CreateRenderingResources();
        void DestroyRenderingResources();
        void ResetBatchState();
        void SetProjection(ProjectionMode, int, int);
        void UpdateProjection(bool);
        void Begin(render::DrawCallState const&);
        void Render(render::SamplerState const*);
        void End();
        void AddColouredRectangle(int, int, int, int, unsigned int, BlendMode);
        void AddElementInner(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*,
                             render::Texture const*, bool, BlendMode, unsigned int, unsigned int);
        void AddTexturedRectangleMasked(int, int, int, int, unsigned int, float, float, float, float,
                                        render::Texture const*, render::Texture const*, bool, BlendMode);
        void AddColouredTriangleList(eastl::vector<int, eastl::allocator> const&,
                                     eastl::vector<int, eastl::allocator> const&, unsigned int, BlendMode, bool);
        void AddTriangleListInner(eastl::vector<int, eastl::allocator> const&,
                                  eastl::vector<int, eastl::allocator> const&, unsigned int, unsigned int, float, float,
                                  render::Texture const*, BlendMode, bool);
        void AddHorizontalGradientRectangle(int, int, int, int, unsigned int, unsigned int, BlendMode, int, bool);
        bool IsStateChangeNeeded(BlendMode&, BatchMode, unsigned int, render::Texture const*, render::Texture const*,
                                 bool) const;
        void SetBatchMode(BatchMode);
        void AddTexturedTriangleList(eastl::vector<int, eastl::allocator> const&,
                                     eastl::vector<int, eastl::allocator> const&, unsigned int, render::Texture*,
                                     BlendMode, bool);
        void AddOutline(int, int, int, int, int, unsigned int, BlendMode);
        void AddVerticalLine(int, int, int, int, unsigned int, BlendMode);
        void AddSprite(int, int, int, int, unsigned int, shared_ptr<SpriteAtlasReference> const&, BlendMode);
        void AddSpriteTiled(int, int, int, int, unsigned int, shared_ptr<SpriteAtlasReference> const&, BlendMode);
        void AddElementTiled(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*,
                             BlendMode, unsigned int, unsigned int, unsigned int, unsigned int, int, int);
        void AddElementRotated(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*,
                               BlendMode, float, int, int);
        void AddElementInnerClipped(float, float, float, float, float, float, float, float, unsigned int, float, float,
                                    float, float, render::Texture const*, render::Texture const*, bool, BlendMode);
        void AddElementPrecise(float, float, float, float, unsigned int, float, float, float, float,
                               render::Texture const*, BlendMode, float, int, int);
        void AddElementPreciseInner(float, float, float, float, unsigned int, float, float, float, float,
                                    render::Texture const*, render::Texture const*, bool, BlendMode, unsigned int,
                                    unsigned int);
        void AddElementPreciseInnerClipped(float, float, float, float, float, float, float, float, unsigned int, float,
                                           float, float, float, render::Texture const*, render::Texture const*, bool,
                                           BlendMode);
        void AddElementRotatedTiled(int, int, int, int, unsigned int, float, float, float, float,
                                    render::Texture const*, BlendMode, float, int, int);
        void AddElementIn3DSpace(math::Vector3T<float> const&, int, int, math::Matrix44T<float> const&,
                                 math::Matrix44T<float> const&, unsigned int, float, float, float, float,
                                 render::Texture*, BlendMode, bool, int, int);
        void AddTriangleListInner(eastl::vector<float, eastl::allocator> const&,
                                  eastl::vector<int, eastl::allocator> const&, unsigned int, BlendMode);
        void AddLineIn3DSpace(math::Vector3T<float> const&, math::Vector3T<float> const&, float,
                              math::Matrix44T<float> const&, math::Matrix44T<float> const&, unsigned int, BlendMode,
                              bool);
        void AddGeneralLine(float, float, float, float, float, unsigned int, BlendMode, bool);
        void OnEndFrame();
        void RemoveCurrentTexture(render::Texture const*);
        void RemoveCurrentTextureMask(render::Texture const*);
        void SetProjectionOverride(int, int, unsigned int, unsigned int);
        void ResetProjectionOverride();
        GetProjectionOverrideRect() const;
        int RenderCallsThisFrame() const;
        void AddGeneralLine(int, int, int, int, float, unsigned int, BlendMode, bool);
        static /* 16 bytes */ m_enableRendering; // = { 1, 0, 0, 0 }
        static eastl::vector<int, eastl::allocator> /* 32 bytes */ m_quadIndices;
        static /* 1 bytes */ m_skipTiledElements;
        static /* 1 bytes */ m_skipRotatedElements;
        static /* 6 bytes */ m_skipLineElements;

        // data members, from how the methods use this: 2264 bytes
        RT7Core* field_0; // offset 0
        int field_8;      // offset 8
        char _unknown_12[20];
        uint field_32; // offset 32
        uint field_36; // offset 36
        char _unknown_40[32];
        undefined1 field_72; // offset 72
        char _unknown_73[3];
        undefined4 field_76;  // offset 76
        uint field_80;        // offset 80
        uint field_84;        // offset 84
        Mixer* field_88;      // offset 88
        Texture* field_96;    // offset 96
        undefined1 field_104; // offset 104
        char _unknown_105[3];
        int field_108; // offset 108
        char _unknown_112[8];
        shared_ptr field_120; // offset 120
        undefined1 field_136; // offset 136
        char _unknown_137[119];
        uint field_256; // offset 256
        char _unknown_260[180];
        InputAssemblerState field_440; // offset 440
        shared_ptr field_632;          // offset 632
        undefined1 field_648;          // offset 648
        char _unknown_649[119];
        undefined4 field_768; // offset 768
        char _unknown_772[180];
        InputAssemblerState field_952; // offset 952
        shared_ptr field_1144;         // offset 1144
        undefined1 field_1160;         // offset 1160
        char _unknown_1161[119];
        undefined4 field_1280; // offset 1280
        char _unknown_1284[180];
        InputAssemblerState field_1464; // offset 1464
        shared_ptr field_1656;          // offset 1656
        undefined1 field_1672;          // offset 1672
        char _unknown_1673[95];
        InputAssemblerState field_1768; // offset 1768
        char _unknown_1960[240];
        undefined1 field_2200; // offset 2200
        char _unknown_2201[31];
        uint m_projectionOverride; // offset 2232
        uint field_2236;           // offset 2236
        uint field_2240;           // offset 2240
        uint field_2244;           // offset 2244
        bool field_2248;           // offset 2248
        char _unknown_2249[3];
        int field_2252; // offset 2252
        int field_2256; // offset 2256
        char _unknown_2260[4];
    };

    template <typename...> // 1 instantiations, e.g. <float>
    class GUIManagerVertexBase {
    public:
        GUIManagerVertexBase();
    };

    // 0x1003bcf90, 208 bytes, inline, placed by class name and debug map
    // GUIManager::AddElement(math::Rect<int> const&, unsigned int, math::Rect<float> const&, render::Texture const*, GUIManager::BlendMode)
    void GUIManager::AddElement(CoordMapSquare* param_1, undefined4 param_2, EntityHighlightState* param_3,
                                undefined8 param_4, undefined8 param_6) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;

        uVar1 = param_1->GetX();
        uVar2 = param_1->GetZ();
        uVar3 = param_1->Right();
        uVar4 = param_1->MaxZ();
        uVar5 = param_3->GetOverbright();
        uVar6 = param_3->GetAlpha();
        uVar7 = param_3->MaxU();
        uVar8 = param_3->MaxV();
        AddElement(uVar5, uVar6, uVar7, uVar8, this, uVar1, uVar2, uVar3, uVar4, param_2, param_4, param_6);
    }

    // 0x1003c41c0, 192 bytes, inline, placed by class name
    // GUIManager::AddElementIn3DSpace(math::Vector3T<float> const&, int, int, math::Matrix44T<float> const&, math::Matrix44T<float> const&, unsigned int, math::Rect<float> const&, render::Texture*, GUIManager::BlendMode, bool)
    void GUIManager::AddElementIn3DSpace(undefined8 param_1, int param_2, int param_3, undefined8 param_4,
                                         undefined8 param_5, undefined4 param_6, EntityHighlightState* param_7,
                                         undefined8 param_8, undefined4 param_10, undefined1 param_11) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        GUIManager* pGVar4;

        pGVar4._0_4_ = (GUIManager*)param_7->GetOverbright();
        uVar1 = param_7->GetAlpha();
        uVar2 = param_7->MaxU();
        uVar3 = param_7->MaxV();
        AddElementIn3DSpace(pGVar4._0_4_, uVar1, uVar2, uVar3, this, param_1, param_2, param_3, param_4, param_5,
                            param_6, param_8, param_10, param_11, param_2 / 2, param_3 / 2);
    }

    // 0x1003c4550, 176 bytes, inline, placed by class name
    // GUIManager::AddElementIn3DSpace(math::Vector3T<float> const&, int, int, math::Matrix44T<float> const&, math::Matrix44T<float> const&, unsigned int, math::Rect<float> const&, render::Texture*, GUIManager::BlendMode, bool, int, int)
    void GUIManager::AddElementIn3DSpace(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4,
                                         undefined8 param_5, undefined4 param_6, EntityHighlightState* param_7,
                                         undefined8 param_8, undefined4 param_10, undefined1 param_11,
                                         undefined4 param_12, undefined4 param_13) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        GUIManager* pGVar4;

        pGVar4._0_4_ = (GUIManager*)param_7->GetOverbright();
        uVar1 = param_7->GetAlpha();
        uVar2 = param_7->MaxU();
        uVar3 = param_7->MaxV();
        AddElementIn3DSpace(pGVar4._0_4_, uVar1, uVar2, uVar3, this, param_1, param_2, param_3, param_4, param_5,
                            param_6, param_8, param_10, param_11, param_12, param_13);
    }

    // 0x1003c4a30, 176 bytes, inline, placed by class name
    // GUIManager::AddElementRotated(int, int, int, int, unsigned int, math::Rect<float> const&, render::Texture const*, GUIManager::BlendMode, float, int, int)
    void GUIManager::AddElementRotated(undefined4 param_1_00, GUIManager* this, undefined4 param_1, undefined4 param_2,
                                       undefined4 param_3, undefined4 param_4, undefined4 param_5,
                                       EntityHighlightState* param_6, undefined8 param_7, undefined4 param_10,
                                       undefined4 param_11, undefined4 param_12) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        GUIManager* pGVar4;

        pGVar4._0_4_ = (GUIManager*)param_6->GetOverbright();
        uVar1 = param_6->GetAlpha();
        uVar2 = param_6->MaxU();
        uVar3 = param_6->MaxV();
        AddElementRotated(pGVar4._0_4_, uVar1, uVar2, uVar3, param_1_00, this, param_1, param_2, param_3, param_4,
                          param_5, param_7, param_10, param_11, param_12);
    }

    // 0x1004b42e0, 160 bytes, inline, placed by class name
    // GUIManager::AddElement(int, int, int, int, unsigned int, math::Rect<float> const&, render::Texture const*, GUIManager::BlendMode)
    void GUIManager::AddElement(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                undefined4 param_5, EntityHighlightState* param_6, undefined8 param_7,
                                undefined4 param_9) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;

        uVar1 = param_6->GetOverbright();
        uVar2 = param_6->GetAlpha();
        uVar3 = param_6->MaxU();
        uVar4 = param_6->MaxV();
        AddElement(uVar1, uVar2, uVar3, uVar4, this, param_1, param_2, param_3, param_4, param_5, param_7, param_9);
    }

    // 0x10053aed0, 208 bytes, inline, placed by class name
    // GUIManager::AddElementPrecise(float, float, float, float, unsigned int, math::Rect<float> const&, render::Texture const*, GUIManager::BlendMode, float, int, int)
    void GUIManager::AddElementPrecise(GUIManager* param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                       undefined4 param_5_00, GUIManager* this, undefined4 param_5,
                                       EntityHighlightState* param_6, undefined8 param_7, undefined4 param_10,
                                       undefined4 param_11, undefined4 param_12) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;

        uVar1 = param_6->GetOverbright();
        uVar2 = param_6->GetAlpha();
        uVar3 = param_6->MaxU();
        uVar4 = param_6->MaxV();
        AddElementPrecise(param_1._0_4_, param_2, param_3, param_4, uVar1, uVar2, uVar3, uVar4, this, param_5, param_7,
                          param_10, param_11, param_12, param_5_00);
    }

    // 0x10053bcf0, 128 bytes, inline, placed by class name
    // GUIManager::AddColouredRectangle(math::Rect<int> const&, unsigned int, GUIManager::BlendMode)
    void GUIManager::AddColouredRectangle(Minimap* param_1, undefined4 param_2, undefined4 param_4) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;

        uVar1 = param_1->GetX();
        uVar2 = param_1->GetZ();
        uVar3 = param_1->GetPos();
        uVar4 = param_1->GetLevel();
        AddColouredRectangle(this, uVar1, uVar2, uVar3, uVar4, param_2, param_4);
    }

    // 0x1006a8f10, 128 bytes, inline, placed by class name
    // GUIManager::AddOutline(math::Rect<int> const&, int, unsigned int, GUIManager::BlendMode)
    void GUIManager::AddOutline(Minimap* param_1, undefined4 param_2, undefined8 param_4, undefined8 param_5) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;

        uVar1 = param_1->GetX();
        uVar2 = param_1->GetZ();
        uVar3 = param_1->GetPos();
        uVar4 = param_1->GetLevel();
        AddOutline(this, uVar1, uVar2, uVar3, uVar4, param_2, param_4, param_5);
    }

    // 0x1006ac9c0, 48 bytes, inline, placed by class name
    // GUIManager::GetCurrentState()
    undefined8 GUIManager::GetCurrentState() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_40)->empty();
        if (cVar1 == '\0') {
            uVar2 = (&field_40)->top();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1008e50a0, 160 bytes, inline, placed by class name
    // GUIManager::AddTexturedRectangle(int, int, int, int, unsigned int, math::Rect<float> const&, render::Texture const*, GUIManager::BlendMode)
    void GUIManager::AddTexturedRectangle(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                                          undefined4 param_4, undefined4 param_5, EntityHighlightState* param_6,
                                          undefined8 param_7, undefined4 param_9) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;

        uVar1 = param_6->GetOverbright();
        uVar2 = param_6->GetAlpha();
        uVar3 = param_6->MaxU();
        uVar4 = param_6->MaxV();
        AddTexturedRectangle(uVar1, uVar2, uVar3, uVar4, this, param_1, param_2, param_3, param_4, param_5, param_7,
                             param_9);
    }

    // 0x1008e5750, 32 bytes, inline, placed by class name
    // GUIManager::AddElement(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*, GUIManager::BlendMode)
    void GUIManager::AddElement() {
        AddElementInner();
    }

    // 0x1008f3590, 64 bytes, inline, placed by class name
    // GUIManager::GetProjectionOverrideRect() const
    GUIManager* GUIManager::GetProjectionOverrideRect() {
        long in_RSI;

        new (this) oldscape::dash3d::GridRect(*(int*)(in_RSI + 2232), *(int*)(in_RSI + 2236), *(int*)(in_RSI + 2240),
                                              *(int*)(in_RSI + 2244));
        return this;
    }

    // 0x1008fde80, 16 bytes, inline, placed by class name
    // GUIManager::RenderCallsThisFrame() const
    int GUIManager::RenderCallsThisFrame() {
        return field_2252;
    }

    // 0x100a3d000, 48 bytes, inline, placed by class name
    // GUIManager::AddGeneralLine(int, int, int, int, float, unsigned int, GUIManager::BlendMode, bool)
    void GUIManager::AddGeneralLine(undefined4 param_5, GUIManager* this, int param_1, int param_2, int param_3,
                                    int param_4, undefined4 param_6, undefined4 param_8, undefined1 param_9) {
        AddGeneralLine((GUIManager*)(float)param_1, (float)param_2, (float)param_3, (float)param_4, param_5, this,
                       param_6, param_8, param_9);
    }

} // namespace jag::graphics
