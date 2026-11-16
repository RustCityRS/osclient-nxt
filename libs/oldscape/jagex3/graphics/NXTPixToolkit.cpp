// libs/oldscape/jagex3/graphics/NXTPixToolkit.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "NXTPixToolkit.h"

namespace jag::oldscape::graphics {
    // 0x1000b9950: NXTPixToolkit::GetScreen() const has the same machine code as ScriptVarType::GetDefaultValue() const

    // 0x10031b650
    NXTPixToolkit::NXTPixToolkit(int arg1, int arg2, int arg3, int arg4) : PixToolkit<NXTPix2D, dash3d::NXTPix3D>() {
        field_8 = dash3d::NXTRenderer::GetInstancePtr();
        new ((m_screen + 160)) NXTPix2D(*((m_screen + 8)), arg2, arg3);
        new ((m_screen + 216)) dash3d::NXTPix3D(*((m_screen + 48)));
        new (&field_424) dash3d::NXTWorldRenderer((m_screen + 216));
    }

    // 0x10031b770
    void NXTPixToolkit::SetViewportRect(int arg1, int arg2, int arg3, int arg4) {
        CoordMapSquare local_38;

        uint8_t* this_00 = m_screen;
        this_00->SetViewportPosition(arg1, arg2);
        this_00->Resize(arg3, arg4);
        local_38.m_x = this_00->GetMinMapX();
        int arg2_00 = local_38.GetX();
        local_38._8_4_ = this_00->GetUIHeight();
        int arg3_00 = local_38.field_8.GetX();
        ((m_screen + 160))->SetPixels(*((m_screen + 8)), arg2_00, arg3_00);
    }

    // 0x10031b840
    void NXTPixToolkit::SetScreenSize(int arg1, int arg2) {
        m_screen->SetClientWindowSize(arg1, arg2);
    }

    // 0x10031b850
    void NXTPixToolkit::SetMinSize(int arg1, int arg2) {
        m_screen->SetMinSize(arg1, arg2);
    }

    // 0x10031b860
    void NXTPixToolkit::ZoomUI(float arg1) {
        m_screen->ZoomUI(arg1);
    }

    // 0x10031b870
    void NXTPixToolkit::Render(int arg1, int arg2, int arg3, int arg4) {
        m_screen->~AutoSingleton();
    }

    // 0x10031b880
    void NXTPixToolkit::Render(int arg1, int arg2) {
        CoordMapSquare local_38;

        uint8_t* this_00 = m_screen;
        this_00->Render(arg1, arg2);
        local_38.m_x = this_00->GetMinMapX();
        int arg2_00 = local_38.GetX();
        local_38._8_4_ = this_00->GetUIHeight();
        int arg3 = local_38.field_8.GetX();
        ((m_screen + 160))->SetPixels(*((m_screen + 8)), arg2_00, arg3);
    }

    // 0x10031b900
    void NXTPixToolkit::SetSkyboxColour(jag::math::Vector4T<float> vector4) {
        NXTPixScreen::SetSkyboxColour(vector4 + 16);
    }

    // 0x10031b910
    void NXTPixToolkit::SetFogParams(float arg1, float arg2) {
        m_screen->SetFogParams(arg1, arg2);
    }

    // 0x10031b920
    void NXTPixToolkit::Set2DOnlyFrame() {
        ((NXTRenderCanvas*)m_screen->GetCurrentRenderCanvas())->Set2DOnlyFrame();
    }

    // 0x10031b950
    void NXTPixToolkit::SetFrameRate(int arg1) {
        OSRenderCore_AnyThread::Instance()->SetFpsLimit(arg1);
    }

    // 0x10031b970
    void NXTPixToolkit::SetGamma(float arg1) {
        field_8->SetGamma(arg1);
    }

    // 0x10031b980
    void NXTPixToolkit::GetGamma() {
        field_8->GetGamma();
    }

    // 0x10031b990
    void NXTPixToolkit::ShowUI(bool arg1) {
        m_screen[40] = arg1;
    }

    // 0x10031b9a0
    void NXTPixToolkit::ShowSkybox(bool arg1) {
        m_screen[41] = arg1;
    }

    // 0x10031b9b0
    void NXTPixToolkit::SetScaledUIQuality(ScaledUIQuality scaledUIQuality) {
        m_screen->SetScaledUIQuality(scaledUIQuality);
    }

    // 0x10031b9c0
    uint8_t NXTPixToolkit::GetUIVisible() {
        return m_screen[40];
    }

} // namespace jag::oldscape::graphics
