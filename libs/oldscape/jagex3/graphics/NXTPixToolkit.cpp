// libs/oldscape/jagex3/graphics/NXTPixToolkit.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "NXTPixToolkit.h"

namespace jag::oldscape::graphics {
    // 0x1000b9950: the linker folded this into ScriptVarType::GetDefaultValue() const, which has identical code
    NXTPixToolkit::GetScreen() const;

    // 0x10031b650, 208 bytes, base-object constructor, placed by class name and debug map
    // NXTPixToolkit::NXTPixToolkit(int, int, int, int)
    void NXTPixToolkit::NXTPixToolkit(int param_1, int param_2, int param_3, int param_4) {
        new (this) PixToolkit<NXTPix2D, dash3d::NXTPix3D>();
        field_0 = &PTR_GetWorld_100efad90;
        field_8 = (NXTRenderer*)dash3d::NXTRenderer::GetInstancePtr();
        new (&field_16, param_1, param_2, param_3, param_4) NXTPixScreen();
        new (field_176, (SharedArray*)&field_24, param_3, param_4) NXTPix2D();
        new (&field_232, (NXTRenderable*)&field_64) dash3d::NXTPix3D();
        new (&field_424, (NXTPix3D*)&field_232) dash3d::NXTWorldRenderer();
    }

    // 0x10031b760, 16 bytes, complete-object constructor, placed by class name and debug map
    // NXTPixToolkit::NXTPixToolkit(int, int, int, int): jumps straight to the base-object constructor

    // 0x10031b770, 144 bytes, placed by class name and debug map
    // NXTPixToolkit::SetViewportRect(int, int, int, int)
    void NXTPixToolkit::SetViewportRect(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        CoordMapSquare local_38;

        this_00 = &field_16;
        this_00->SetViewportPosition(param_1, param_2);
        this_00->Resize(param_3, param_4);
        local_38.m_x = this_00->GetMinMapX();
        iVar1 = local_38.GetX();
        local_38._8_4_ = this_00->GetUIHeight();
        iVar2 = local_38.field_8.GetX();
        (field_176, (SharedArray*)&field_24, iVar1, iVar2)->SetPixels();
    }

    // 0x10031b840, 16 bytes, placed by class name
    // NXTPixToolkit::SetScreenSize(int, int)
    void NXTPixToolkit::SetScreenSize(int param_1, int param_2) {
        (&field_16, param_1, param_2)->SetClientWindowSize();
    }

    // 0x10031b850, 16 bytes, placed by class name
    // NXTPixToolkit::SetMinSize(int, int)
    void NXTPixToolkit::SetMinSize(int param_1, int param_2) {
        (&field_16, param_1, param_2)->SetMinSize();
    }

    // 0x10031b860, 16 bytes, placed by class name
    // NXTPixToolkit::ZoomUI(float)
    void NXTPixToolkit::ZoomUI(float param_1) {
        (&field_16, param_1)->ZoomUI();
    }

    // 0x10031b870, 16 bytes, placed by class name
    // NXTPixToolkit::Render(int, int, int, int)
    void NXTPixToolkit::Render(int param_1, int param_2, int param_3, int param_4) {
        (&field_16)->~AutoSingleton();
    }

    // 0x10031b880, 128 bytes, placed by class name
    // NXTPixToolkit::Render(int, int)
    void NXTPixToolkit::Render(int param_1, int param_2) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        CoordMapSquare local_38;

        this_00 = &field_16;
        this_00->Render(param_1, param_2);
        local_38.m_x = this_00->GetMinMapX();
        iVar1 = local_38.GetX();
        local_38._8_4_ = this_00->GetUIHeight();
        iVar2 = local_38.field_8.GetX();
        (field_176, (SharedArray*)&field_24, iVar1, iVar2)->SetPixels();
    }

    // 0x10031b900, 16 bytes, placed by class name
    // NXTPixToolkit::SetSkyboxColour(jag::math::Vector4T<float>)
    void NXTPixToolkit::SetSkyboxColour(long param_1) {
        NXTPixScreen::SetSkyboxColour(param_1 + 16);
    }

    // 0x10031b910, 16 bytes, placed by class name
    // NXTPixToolkit::SetFogParams(float, float)
    void NXTPixToolkit::SetFogParams(float param_1, float param_2) {
        (&field_16, param_1, param_2)->SetFogParams();
    }

    // 0x10031b920, 32 bytes, placed by class name
    // NXTPixToolkit::Set2DOnlyFrame()
    void NXTPixToolkit::Set2DOnlyFrame() {
        NXTRenderCanvas* this_00;

        this_00 = (NXTRenderCanvas*)(&field_16)->GetCurrentRenderCanvas();
        this_00->Set2DOnlyFrame();
    }

    // 0x10031b950, 32 bytes, placed by class name
    // NXTPixToolkit::SetFrameRate(int)
    void NXTPixToolkit::SetFrameRate(int param_1) {
        OSRenderCore_AnyThread* this_00;

        this_00 = (OSRenderCore_AnyThread*)OSRenderCore_AnyThread::Instance();
        this_00->SetFpsLimit(param_1);
    }

    // 0x10031b970, 16 bytes, placed by class name
    // NXTPixToolkit::SetGamma(float)
    void NXTPixToolkit::SetGamma(float param_1) {
        (field_8, param_1)->SetGamma();
    }

    // 0x10031b980, 16 bytes, placed by class name
    // NXTPixToolkit::GetGamma()
    void NXTPixToolkit::GetGamma() {
        field_8->GetGamma();
    }

    // 0x10031b990, 16 bytes, placed by class name
    // NXTPixToolkit::ShowUI(bool)
    void NXTPixToolkit::ShowUI(bool param_1) {
        m_uIVisible = param_1;
    }

    // 0x10031b9a0, 16 bytes, placed by class name
    // NXTPixToolkit::ShowSkybox(bool)
    void NXTPixToolkit::ShowSkybox(bool param_1) {
        field_57 = param_1;
    }

    // 0x10031b9b0, 16 bytes, placed by class name
    // NXTPixToolkit::SetScaledUIQuality(ScaledUIQuality)
    void NXTPixToolkit::SetScaledUIQuality(long param_1) {
        ((param_1 + 16))->SetScaledUIQuality();
    }

    // 0x10031b9c0, 16 bytes, placed by class name
    // NXTPixToolkit::GetUIVisible()
    undefined1 NXTPixToolkit::GetUIVisible() {
        return m_uIVisible;
    }

} // namespace jag::oldscape::graphics
