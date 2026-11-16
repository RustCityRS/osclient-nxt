// libs/oldscape/jagex3/graphics/NXTPixScreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class NXTPixScreen {
    public:
        // virtual methods in vtable order
        virtual void Resize(int, int);
        virtual void Render(int, int);
        virtual Render(int, int, int, int);
        virtual NXTRenderCanvas* GetCurrentRenderCanvas();
        virtual GetWidth() const;
        virtual GetHeight() const;
        GetUIHeight() const;
        GetUIWidth() const;
        GetZoomValue() const;
        GetClampedZoomValue() const;
        GetViewportX();
        NXTPixScreen(int, int, int, int);
        void SetViewportPosition(int, int);
        void SetClientWindowSize(int, int);
        void SetMinSize(int, int);
        void SetSafeArea(jag::math::Rect<int> const&);
        void ZoomUI(float);
        void CalculateUIRect();
        void UICoordFromViewportCoord(int, int, int&, int&) const;
        void UICoordFromWindowCoord(int, int, CoordType<UICoordSpecializer>&, CoordType<UICoordSpecializer>&) const;
        void CalculateCanvasCoords(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, int&, int&) const;
        void SetSkyboxColour(jag::math::Vector4T<float>);
        void SetFogParams(float, float);
        void SetScaledUIQuality(ScaledUIQuality);
        void UpdateCurrentRenderCanvas(dash3d::NXTRenderCanvas*);
        ~NXTPixScreen();

        // data members, from how the methods use this: 164 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        int field_32;  // offset 32
        int field_36;  // offset 36
        bool field_40; // offset 40
        bool field_41; // offset 41
        bool field_42; // offset 42
        char _unknown_43[5];
        undefined** field_48;                    // offset 48
        ObjType* field_56;                       // offset 56
        NXTRenderCanvas* m_pCurrentRenderCanvas; // offset 64
        int m_viewportPosition;                  // offset 72
        int field_76;                            // offset 76
        int m_clientWindowSize;                  // offset 80
        int field_84;                            // offset 84
        float field_88;                          // offset 88
        undefined4 field_92;                     // offset 92
        undefined4 m_uIHeight;                   // offset 96
        char _unknown_100[16];
        float field_116;      // offset 116
        undefined4 field_120; // offset 120
        char _unknown_124[4];
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        float m_fogParams;    // offset 144
        float field_148;      // offset 148
        int m_minSize;        // offset 152
        int field_156;        // offset 156
        char _unknown_160[4];
    };

    // 0x1000e31a0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixScreen::GetUIWidth() const
    /* rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapX() const */

    int rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapX() {
        return m_minMapX;
    }

    // 0x1000e39e0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixScreen::GetZoomValue() const
    /* game::StaticPointLight::GetAttenuationFalloff() const */

    float game::StaticPointLight::GetAttenuationFalloff() {
        return m_attenuationFalloff;
    }

    // 0x1000fa820, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixScreen::GetClampedZoomValue() const
    /* audio::SoundInstance::GetSoundSpatialSizeMax() const */

    float audio::SoundInstance::GetSoundSpatialSizeMax() {
        return m_soundSpatialSizeMax;
    }

    // 0x1000fa830, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixScreen::GetWidth() const
    /* auth::GameToken::GetStatus() const */

    undefined4 auth::GameToken::GetStatus() {
        return m_status;
    }

    // 0x1000fa840, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixScreen::GetHeight() const
    /* ImPool<ImGuiTabBar>::GetAliveCount() const */

    undefined4 ImPool<ImGuiTabBar>::GetAliveCount() {
        return *(undefined4*)(this + 36);
    }

    // 0x10012dc00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixScreen::GetViewportX()
    /* jag::graphics::TextRun::GetWrapMode() const */

    int jag::graphics::TextRun::GetWrapMode() {
        return m_wrapMode;
    }

    // 0x10031b750, 16 bytes, complete-object destructor, inline, placed by class name
    // NXTPixScreen::~NXTPixScreen(): jumps straight to the base-object destructor

    // 0x100327660, 16 bytes, base-object destructor, inline, placed by class name
    // NXTPixScreen::~NXTPixScreen()
    void NXTPixScreen::~NXTPixScreen() {
        ~PixScreen();
    }

} // namespace jag::oldscape::graphics

namespace jag::game {
    // 0x1000e31a0: the linker folded this into oldscape::graphics::NXTPixScreen::GetUIWidth() const, which has identical code
    BaseConfigTypeList::GetMaxEntryIndex() const;

} // namespace jag::game

namespace jag::render {
    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    VertexElementDesc::hash() const;

} // namespace jag::render
