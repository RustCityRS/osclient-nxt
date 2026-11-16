// libs/graphics/runetek7/gui/GUIManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GUIManager {
    public:
        ProjectionMode GetProjectionMode() const;
        unsigned int GetLastViewportWidth() const;
        unsigned int GetLastViewportHeight() const;
        void AddElement(const math::Rect<int>& rect1, unsigned int arg2, const math::Rect<float>& rect2,
                        const render::Texture* texture, BlendMode blendMode);
        void AddElementIn3DSpace(const math::Vector3T<float>& vector3, int arg2, int arg3,
                                 const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442,
                                 unsigned int arg6, const math::Rect<float>& rect, render::Texture* texture,
                                 BlendMode blendMode, bool arg10);
        void AddElementIn3DSpace(const math::Vector3T<float>& vector3, int arg2, int arg3,
                                 const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442,
                                 unsigned int arg6, const math::Rect<float>& rect, render::Texture* texture,
                                 BlendMode blendMode, bool arg10, int arg11, int arg12);
        void AddElementRotated(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, const math::Rect<float>& rect,
                               const render::Texture* texture, BlendMode blendMode, float arg9, int arg10, int arg11);
        void AddElement(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, const math::Rect<float>& rect,
                        const render::Texture* texture, BlendMode blendMode);
        void AddElementPrecise(float arg1, float arg2, float arg3, float arg4, unsigned int arg5,
                               const math::Rect<float>& rect, const render::Texture* texture, BlendMode blendMode,
                               float arg9, int arg10, int arg11);
        void AddColouredRectangle(const math::Rect<int>& rect, unsigned int arg2, BlendMode blendMode);
        void AddOutline(const math::Rect<int>& rect, int arg2, unsigned int arg3, BlendMode blendMode);
        DrawCallState* GetCurrentState();
        void AddTexturedRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                                  float arg8, float arg9, const render::Texture* texture, BlendMode blendMode);
        void AddTexturedRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                  const math::Rect<float>& rect, const render::Texture* texture, BlendMode blendMode);
        void AddHorizontalLine(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, BlendMode blendMode);
        void AddElement(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7, float arg8,
                        float arg9, const render::Texture* texture, BlendMode blendMode);
        GUIManager();
        ~GUIManager();
        void Destroy();
        uint8_t Initialise(RT7Core* rt7Core);
        unsigned long CreateRenderingResources();
        void DestroyRenderingResources();
        void ResetBatchState();
        void SetProjection(ProjectionMode projectionMode, int arg2, int arg3);
        void UpdateProjection(bool arg1);
        void Begin(const render::DrawCallState& drawCallState);
        void Render(const render::SamplerState* samplerState);
        void End();
        void AddColouredRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, BlendMode blendMode);
        void AddElementInner(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                             float arg8, float arg9, const render::Texture* texture1, const render::Texture* texture2,
                             bool arg12, BlendMode blendMode, unsigned int arg14, unsigned int arg15);
        void AddTexturedRectangleMasked(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6,
                                        float arg7, float arg8, float arg9, const render::Texture* texture1,
                                        const render::Texture* texture2, bool arg12, BlendMode blendMode);
        void AddColouredTriangleList(const eastl::vector<int>& arg1, const eastl::vector<int>& arg2, unsigned int arg3,
                                     BlendMode blendMode, bool arg5);
        void AddTriangleListInner(const eastl::vector<int>& arg1, const eastl::vector<int>& arg2, unsigned int arg3,
                                  unsigned int arg4, float arg5, float arg6, const render::Texture* texture,
                                  BlendMode blendMode, bool arg9);
        void AddHorizontalGradientRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                            unsigned int arg6, BlendMode blendMode, int arg8, bool arg9);
        bool IsStateChangeNeeded(BlendMode& blendMode, BatchMode batchMode, unsigned int arg3,
                                 const render::Texture* texture1, const render::Texture* texture2, bool arg6) const;
        void SetBatchMode(BatchMode batchMode);
        void AddTexturedTriangleList(const eastl::vector<int>& arg1, const eastl::vector<int>& arg2, unsigned int arg3,
                                     render::Texture* texture, BlendMode blendMode, bool arg6);
        void AddOutline(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6, BlendMode blendMode);
        void AddVerticalLine(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, BlendMode blendMode);
        void AddSprite(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                       const shared_ptr<SpriteAtlasReference>& spriteAtlasReference, BlendMode blendMode);
        void AddSpriteTiled(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                            const shared_ptr<SpriteAtlasReference>& spriteAtlasReference, BlendMode blendMode);
        void AddElementTiled(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                             float arg8, float arg9, const render::Texture* texture, BlendMode blendMode,
                             unsigned int arg12, unsigned int arg13, unsigned int arg14, unsigned int arg15, int arg16,
                             int arg17);
        void AddElementRotated(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                               float arg8, float arg9, const render::Texture* texture, BlendMode blendMode, float arg12,
                               int arg13, int arg14);
        void AddElementInnerClipped(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                    float arg8, unsigned int arg9, float arg10, float arg11, float arg12, float arg13,
                                    const render::Texture* texture1, const render::Texture* texture2, bool arg16,
                                    BlendMode blendMode);
        void AddElementPrecise(float arg1, float arg2, float arg3, float arg4, unsigned int arg5, float arg6,
                               float arg7, float arg8, float arg9, const render::Texture* texture, BlendMode blendMode,
                               float arg12, int arg13, int arg14);
        void AddElementPreciseInner(float arg1, float arg2, float arg3, float arg4, unsigned int arg5, float arg6,
                                    float arg7, float arg8, float arg9, const render::Texture* texture1,
                                    const render::Texture* texture2, bool arg12, BlendMode blendMode,
                                    unsigned int arg14, unsigned int arg15);
        void AddElementPreciseInnerClipped(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                           float arg7, float arg8, unsigned int arg9, float arg10, float arg11,
                                           float arg12, float arg13, const render::Texture* texture1,
                                           const render::Texture* texture2, bool arg16, BlendMode blendMode);
        void AddElementRotatedTiled(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                                    float arg8, float arg9, const render::Texture* texture, BlendMode blendMode,
                                    float arg12, int arg13, int arg14);
        void AddElementIn3DSpace(const math::Vector3T<float>& vector3, int arg2, int arg3,
                                 const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442,
                                 unsigned int arg6, float arg7, float arg8, float arg9, float arg10,
                                 render::Texture* texture, BlendMode blendMode, bool arg13, int arg14, int arg15);
        void AddTriangleListInner(const eastl::vector<float>& arg1, const eastl::vector<int>& arg2, unsigned int arg3,
                                  BlendMode blendMode);
        void AddLineIn3DSpace(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32, float arg3,
                              const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442,
                              unsigned int arg6, BlendMode blendMode, bool arg8);
        void AddGeneralLine(float arg1, float arg2, float arg3, float arg4, float arg5, unsigned int arg6,
                            BlendMode blendMode, bool arg8);
        void OnEndFrame();
        void RemoveCurrentTexture(const render::Texture* texture);
        void RemoveCurrentTextureMask(const render::Texture* texture);
        void SetProjectionOverride(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        void ResetProjectionOverride();
        auto GetProjectionOverrideRect() const;
        int RenderCallsThisFrame() const;
        void AddGeneralLine(int arg1, int arg2, int arg3, int arg4, float arg5, unsigned int arg6, BlendMode blendMode,
                            bool arg8);
        static int32_t m_enableRendering[4]; // = { 1, 0, 0, 0 }
        static eastl::vector<int> m_quadIndices;
        static bool m_skipTiledElements;
        static bool m_skipRotatedElements;
        static int16_t m_skipLineElements;

    private:
        RT7Core* field_0;
        ProjectionMode m_projectionMode;
        uint8_t _unknown_12[20];
        unsigned int m_lastViewportWidth;
        unsigned int m_lastViewportHeight;
        uint8_t _unknown_40[32];
        uint8_t field_72;
        uint8_t _unknown_73[3];
        BatchMode field_76;
        unsigned int field_80;
        unsigned int field_84;
        Texture* field_88;
        Texture* field_96;
        bool field_104;
        uint8_t _unknown_105[3];
        BlendMode field_108;
        float field_112;
        uint8_t _unknown_116[140];
        unsigned int field_256;
        uint8_t _unknown_260[180];
        InputAssemblerState field_440;
        uint8_t _unknown_632[136];
        unsigned int field_768;
        uint8_t _unknown_772[180];
        InputAssemblerState field_952;
        uint8_t _unknown_1144[136];
        unsigned int field_1280;
        uint8_t _unknown_1284[180];
        InputAssemblerState field_1464;
        uint8_t _unknown_1656[112];
        InputAssemblerState field_1768;
        uint8_t _unknown_1960[272];
        unsigned int field_2232;
        unsigned int field_2236;
        unsigned int field_2240;
        unsigned int field_2244;
        bool field_2248;
        uint8_t _unknown_2249[3];
        int field_2252;
        int field_2256;
        uint8_t _unknown_2260[4];
    };

    template <typename...> // 1 instantiations, e.g. <float>
    class GUIManagerVertexBase {
    public:
        GUIManagerVertexBase();
    };

    // 0x1003bcf90
    void GUIManager::AddElement(const math::Rect<int>& rect1, unsigned int arg2, const math::Rect<float>& rect2,
                                const render::Texture* texture, GUIManager::BlendMode blendMode) {
        int arg1 = rect1.GetX();
        int arg2_00 = rect1.GetZ();
        int arg3 = rect1.Right();
        int arg4 = rect1.MaxZ();
        float arg6 = (float)rect2.GetOverbright();
        float arg7 = (float)rect2.GetAlpha();
        float arg8 = (float)rect2.MaxU();
        float arg9 = (float)rect2.MaxV();
        AddElement(arg1, arg2_00, arg3, arg4, arg2, arg6, arg7, arg8, arg9, texture, blendMode);
    }

    // 0x1003c41c0
    void GUIManager::AddElementIn3DSpace(const math::Vector3T<float>& vector3, int arg2, int arg3,
                                         const math::Matrix44T<float>& matrix441,
                                         const math::Matrix44T<float>& matrix442, unsigned int arg6,
                                         const math::Rect<float>& rect, render::Texture* texture,
                                         GUIManager::BlendMode blendMode, bool arg10) {
        float arg7 = (float)rect.GetOverbright();
        float arg8 = (float)rect.GetAlpha();
        float arg9 = (float)rect.MaxU();
        float arg10_00 = (float)rect.MaxV();
        AddElementIn3DSpace(vector3, arg2, arg3, matrix441, matrix442, arg6, arg7, arg8, arg9, arg10_00, texture,
                            blendMode, arg10, arg2 / 2, arg3 / 2);
    }

    // 0x1003c4550
    void GUIManager::AddElementIn3DSpace(const math::Vector3T<float>& vector3, int arg2, int arg3,
                                         const math::Matrix44T<float>& matrix441,
                                         const math::Matrix44T<float>& matrix442, unsigned int arg6,
                                         const math::Rect<float>& rect, render::Texture* texture,
                                         GUIManager::BlendMode blendMode, bool arg10, int arg11, int arg12) {
        float arg7 = (float)rect.GetOverbright();
        float arg8 = (float)rect.GetAlpha();
        float arg9 = (float)rect.MaxU();
        float arg10_00 = (float)rect.MaxV();
        AddElementIn3DSpace(vector3, arg2, arg3, matrix441, matrix442, arg6, arg7, arg8, arg9, arg10_00, texture,
                            blendMode, arg10, arg11, arg12);
    }

    // 0x1003c4a30
    void GUIManager::AddElementRotated(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                       const math::Rect<float>& rect, const render::Texture* texture,
                                       GUIManager::BlendMode blendMode, float arg9, int arg10, int arg11) {
        float arg6 = (float)rect.GetOverbright();
        float arg7 = (float)rect.GetAlpha();
        float arg8 = (float)rect.MaxU();
        float arg9_00 = (float)rect.MaxV();
        AddElementRotated(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9_00, texture, blendMode, arg9, arg10,
                          arg11);
    }

    // 0x1004b42e0
    void GUIManager::AddElement(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                const math::Rect<float>& rect, const render::Texture* texture,
                                GUIManager::BlendMode blendMode) {
        float arg6 = (float)rect.GetOverbright();
        float arg7 = (float)rect.GetAlpha();
        float arg8 = (float)rect.MaxU();
        float arg9 = (float)rect.MaxV();
        AddElement(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, texture, blendMode);
    }

    // 0x10053aed0
    void GUIManager::AddElementPrecise(float arg1, float arg2, float arg3, float arg4, unsigned int arg5,
                                       const math::Rect<float>& rect, const render::Texture* texture,
                                       GUIManager::BlendMode blendMode, float arg9, int arg10, int arg11) {
        uint32_t in_register_0000000c;
        uint32_t in_register_0000003c;
        int in_stack_00000008;

        float arg6 = (float)texture->GetOverbright();
        float arg7 = (float)texture->GetAlpha();
        float arg8 = (float)texture->MaxU();
        float arg9_00 = (float)texture->MaxV();
        AddElementPrecise((GUIManager*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg5), arg1, arg2, arg3,
                          arg4, (unsigned int)rect, arg6, arg7, arg8, arg9_00,
                          (Texture*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)blendMode), arg10, arg9, arg11,
                          in_stack_00000008);
    }

    // 0x10053bcf0
    void GUIManager::AddColouredRectangle(const math::Rect<int>& rect, unsigned int arg2,
                                          GUIManager::BlendMode blendMode) {
        int arg1 = rect.GetX();
        int arg2_00 = rect.GetZ();
        int arg3 = rect.GetPos();
        int arg4 = rect.GetLevel();
        AddColouredRectangle(arg1, arg2_00, arg3, arg4, arg2, blendMode);
    }

    // 0x1006a8f10
    void GUIManager::AddOutline(const math::Rect<int>& rect, int arg2, unsigned int arg3,
                                GUIManager::BlendMode blendMode) {
        int arg1 = rect.GetX();
        int arg2_00 = rect.GetZ();
        int arg3_00 = rect.GetPos();
        int arg4 = rect.GetLevel();
        AddOutline(arg1, arg2_00, arg3_00, arg4, arg2, arg3, blendMode);
    }

    // 0x1006ac9c0
    DrawCallState* GUIManager::GetCurrentState() {
        DrawCallState* pDVar2;

        if (field_40.empty() == '\0') {
            pDVar2 = (DrawCallState*)eastl::stack<render::DrawCallState, eastl::vector<render::DrawCallState>>::top();
        } else {
            pDVar2 = nullptr;
        }
        return pDVar2;
    }

    // 0x1008e50a0
    void GUIManager::AddTexturedRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                          const math::Rect<float>& rect, const render::Texture* texture,
                                          GUIManager::BlendMode blendMode) {
        float arg6 = (float)rect.GetOverbright();
        float arg7 = (float)rect.GetAlpha();
        float arg8 = (float)rect.MaxU();
        float arg9 = (float)rect.MaxV();
        AddTexturedRectangle(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, texture, blendMode);
    }

    // 0x1008e5750
    void GUIManager::AddElement(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                                float arg8, float arg9, const render::Texture* texture,
                                GUIManager::BlendMode blendMode) {
        AddElementInner(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, texture, nullptr, false, blendMode, 1, 1);
    }

    // 0x1008f3590
    auto GUIManager::GetProjectionOverrideRect() const {
        return auto(field_2232, field_2236, field_2240, field_2244);
    }

    // 0x1008fde80
    int GUIManager::RenderCallsThisFrame() const {
        return field_2252;
    }

    // 0x100a3d000
    void GUIManager::AddGeneralLine(int arg1, int arg2, int arg3, int arg4, float arg5, unsigned int arg6,
                                    GUIManager::BlendMode blendMode, bool arg8) {
        AddGeneralLine((float)arg1, (float)arg2, (float)arg3, (float)arg4, arg5, arg6, blendMode, arg8);
    }

} // namespace jag::graphics
