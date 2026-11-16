// libs/oldscape/jagex3/graphics/NXTPixScreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "NXTPixScreen.h"

namespace jag::oldscape::graphics {
    // 0x100009720: NXTPixScreen::GetUIHeight() const has the same machine code as BaseApp::GetExitCode()

    // 0x100009e70: NXTPixScreen::Render(int, int, int, int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10031ae00
    NXTPixScreen::NXTPixScreen(int arg1, int arg2, int arg3, int arg4) : PixScreen() {
        field_48 = &PTR_GetCurrentRenderCanvas_100efad68;
        m_pCurrentRenderCanvas = nullptr;
        m_viewportX = 0;
        field_76 = 0;
        m_clientWindowSize = 0;
        field_84 = 0;
        m_clampedZoomValue = 1.0;
        (&m_uIWidth)->destruct<highlight::NpcUID*>();
        (&m_uIHeight)->destruct<highlight::NpcUID*>();
        new (&field_100) shared_ptr();
        m_zoomValue = 1.0;
        new (&field_128) jag::math::Vector4T();
        m_minSize = arg3;
        field_156 = arg4;
        field_56 = (ObjType*)dash3d::NXTRenderer::GetInstancePtr();
        m_clientWindowSize = arg1;
        field_84 = arg2;
        Resize(arg3, arg4);
    }

    // 0x10031af40
    void NXTPixScreen::Resize(int arg1, int arg2) {
        NXTRenderCanvas* pNVar1;
        uint8_t local_40[16];

        m_width = arg1;
        m_height = arg2;
        new (local_40) dash3d::GridRect(0, 0, arg1, arg2);
        SetSafeArea(*local_40);
        if (m_pCurrentRenderCanvas == nullptr) {
            pNVar1 = (NXTRenderCanvas*)field_56->GetCost();
            m_pCurrentRenderCanvas = pNVar1;
        }
        m_pCurrentRenderCanvas->SetRenderRect(m_viewportX, field_76, m_width, m_height);
        pNVar1 = m_pCurrentRenderCanvas;
        int arg1_00 = m_viewportX;
        int arg2_00 = field_76;
        unsigned int uVar2 = GetMinMapX();
        unsigned int uVar3 = GetUIHeight();
        pNVar1->SetUIRect(arg1_00, arg2_00, (CoordType<UICoordSpecializer>*)(unsigned long)uVar2,
                          (CoordType<UICoordSpecializer>*)(unsigned long)uVar3);
        m_pCurrentRenderCanvas->SetScreenSize(m_width, m_height);
        auto sharedArray = m_pCurrentRenderCanvas->GetPixelBuffer();
        field_8.ref_assign(*sharedArray);
    }

    // 0x10031b040
    void NXTPixScreen::SetViewportPosition(int arg1, int arg2) {
        m_viewportX = arg1;
        field_76 = arg2;
    }

    // 0x10031b050
    void NXTPixScreen::SetClientWindowSize(int arg1, int arg2) {
        m_clientWindowSize = arg1;
        field_84 = arg2;
    }

    // 0x10031b060
    void NXTPixScreen::SetMinSize(int arg1, int arg2) {
        m_minSize = arg1;
        field_156 = arg2;
    }

    // 0x10031b080
    void NXTPixScreen::SetSafeArea(const jag::math::Rect<int>& rect) {
        field_100 = rect;
        CalculateUIRect();
    }

    // 0x10031b0c0
    void NXTPixScreen::ZoomUI(float arg1) {
        m_zoomValue = jag::math::Clamp<float>(arg1, 1.0, 5.0);
        CalculateUIRect();
    }

    // 0x10031b110
    void NXTPixScreen::CalculateUIRect() {
        int local_40[2];
        uint32_t local_38;

        float local_34 = (float)m_width * (float)m_minSize;
        auto piVar3 = field_100.second();
        float fVar5 = (float)::floor(local_34 / (float)*piVar3);
        ResultType RVar4 = (ResultType)fVar5;
        local_34 = (float)m_height * (float)field_156;
        piVar3 = (int*)field_100.qw();
        fVar5 = (float)::floor(local_34 / (float)*piVar3);
        local_34 = (float)(int)fVar5;
        int iVar1 = m_width;
        float fVar6 = 1.0 / m_zoomValue;
        fVar5 = (float)::floor((float)iVar1 * fVar6);
        ResultType resultType = (ResultType)fVar5;
        int iVar2 = m_height;
        fVar5 = (float)::floor((float)iVar2 * fVar6);
        if ((int)resultType < (int)RVar4) {
            fVar5 = (float)((int)(iVar1 / 2 + iVar2 * RVar4) / iVar1);
            resultType = RVar4;
        } else {
            fVar5 = (float)(int)fVar5;
        }
        if ((int)fVar5 < (int)local_34) {
            resultType = (iVar2 / 2 + iVar1 * (int)local_34) / iVar2;
            fVar5 = local_34;
        }
        local_40->XPlotBlender<int>(resultType);
        m_uIWidth = local_40[0];
        local_38.XPlotBlender<int>((ResultType)fVar5);
        m_uIHeight = local_38;
        m_clampedZoomValue = (float)m_width / (float)(int)resultType;
    }

    // 0x10031b280
    void NXTPixScreen::UICoordFromViewportCoord(int arg1, int arg2, int& arg3, int& arg4) const {
        CoordMapSquare local_38;

        float local_2c = (float)arg1;
        local_38.m_x = GetMinMapX();
        int iVar1 = local_38.GetX();
        iVar1 = jag::math::RoundFloatToInt(((float)iVar1 * local_2c) / (float)m_width);
        arg3 = iVar1;
        local_2c = (float)arg2;
        local_38._8_4_ = GetUIHeight();
        iVar1 = local_38.field_8.GetX();
        iVar1 = jag::math::RoundFloatToInt(((float)iVar1 * local_2c) / (float)m_height);
        arg4 = iVar1;
    }

    // 0x10031b320
    void NXTPixScreen::UICoordFromWindowCoord(int arg1, int arg2, CoordType<UICoordSpecializer>& coordType1,
                                              CoordType<UICoordSpecializer>& coordType2) const {
        uint32_t local_38[2];
        unsigned int local_30[2];

        int iVar4 = m_viewportX;
        int iVar1 = field_76;
        local_30[0] = GetMinMapX();
        int iVar2 = local_30->GetX();
        auto RVar3 = jag::math::RoundFloatToInt(((float)iVar2 * (float)(arg1 - iVar4)) / (float)m_width);
        local_38->XPlotBlender<int>(RVar3);
        *(uint32_t*)coordType1 = local_38[0];
        local_30[0] = GetUIHeight();
        iVar4 = local_30->GetX();
        RVar3 = jag::math::RoundFloatToInt(((float)iVar4 * (float)(arg2 - iVar1)) / (float)m_height);
        local_38->XPlotBlender<int>(RVar3);
        *(uint32_t*)coordType2 = local_38[0];
    }

    // 0x10031b3f0
    void NXTPixScreen::CalculateCanvasCoords(CoordType<UICoordSpecializer> coordType1,
                                             CoordType<UICoordSpecializer> coordType2, int& arg3, int& arg4) const {
        uint8_t local_38[12];
        unsigned int local_28[2];

        local_38._0_4_ = (uint32_t)coordType1;
        local_38._8_4_ = (uint32_t)coordType2;
        int iVar1 = local_38->GetX();
        float local_2c = (float)m_width * (float)iVar1;
        local_28[0] = GetMinMapX();
        iVar1 = local_28->GetX();
        iVar1 = jag::math::RoundFloatToInt(local_2c / (float)iVar1);
        arg3 = iVar1;
        iVar1 = ((local_38 + 8))->GetX();
        local_2c = (float)m_height * (float)iVar1;
        local_28[0] = GetUIHeight();
        iVar1 = local_28->GetX();
        iVar1 = jag::math::RoundFloatToInt(local_2c / (float)iVar1);
        arg4 = iVar1;
    }

    // 0x10031b4b0
    void NXTPixScreen::SetSkyboxColour(jag::math::Vector4T<float> vector4) {
        QuaternionT<float> local_18;

        (*((vector4 + 128))) = local_18;
    }

    // 0x10031b4e0
    void NXTPixScreen::SetFogParams(float arg1, float arg2) {
        m_fogParams = arg1;
        field_148 = arg2;
    }

    // 0x10031b500
    void NXTPixScreen::SetScaledUIQuality(ScaledUIQuality scaledUIQuality) {
        m_scaledUIQuality = scaledUIQuality;
    }

    // 0x10031b510
    NXTRenderCanvas* NXTPixScreen::GetCurrentRenderCanvas() {
        return m_pCurrentRenderCanvas;
    }

    // 0x10031b530
    void NXTPixScreen::UpdateCurrentRenderCanvas(dash3d::NXTRenderCanvas* nxtRenderCanvas) {
        m_pCurrentRenderCanvas = nxtRenderCanvas;
        int arg1 = m_viewportX;
        int arg2 = field_76;
        unsigned int uVar1 = GetMinMapX();
        unsigned int uVar2 = GetUIHeight();
        nxtRenderCanvas->SetUIRect(arg1, arg2, (CoordType<UICoordSpecializer>*)(unsigned long)uVar1,
                                   (CoordType<UICoordSpecializer>*)(unsigned long)uVar2);
        m_pCurrentRenderCanvas->SetScreenSize(m_width, m_height);
        m_pCurrentRenderCanvas->ShowUI(field_40);
        m_pCurrentRenderCanvas->SetScaledUIQuality(m_scaledUIQuality);
        m_pCurrentRenderCanvas->ShowSkybox(field_41);
        dash3d::NXTRenderCanvas::SetSkyboxColour(m_pCurrentRenderCanvas);
        m_pCurrentRenderCanvas->SetFogParams(m_fogParams, field_148);
        m_pCurrentRenderCanvas->SetDepthBufferEnabled(field_42);
        auto sharedArray = m_pCurrentRenderCanvas->GetPixelBuffer();
        field_8.ref_assign(*sharedArray);
    }

    // 0x10031b620
    void NXTPixScreen::Render(int arg1, int arg2) {
        NXTRenderCanvas* nxtRenderCanvas;

        nxtRenderCanvas = (NXTRenderCanvas*)dash3d::NXTRenderer::PresentFrontBuffer(field_56);
        UpdateCurrentRenderCanvas(nxtRenderCanvas);
    }

} // namespace jag::oldscape::graphics
