// libs/oldscape/jagex3/graphics/NXTPixScreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "NXTPixScreen.h"

namespace jag::oldscape::graphics {
    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    NXTPixScreen::GetUIHeight() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    NXTPixScreen::Render(int, int, int, int);

    // 0x10031ae00, 224 bytes, base-object constructor, placed by class name and debug map
    // NXTPixScreen::NXTPixScreen(int, int, int, int)
    void NXTPixScreen::NXTPixScreen(int param_1, int param_2, int param_3, int param_4) {
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        undefined4 in_register_00000034;
        NpcUID* pNVar2;

        pNVar2 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        new (this) PixScreen();
        new (&field_48) dash3d::NXTRenderable();
        field_0 = &PTR_Resize_100efad28;
        field_48 = &PTR_GetCurrentRenderCanvas_100efad68;
        m_pCurrentRenderCanvas = (NXTRenderCanvas*)0;
        m_viewportPosition = 0;
        field_76 = 0;
        m_clientWindowSize = 0;
        field_84 = 0;
        m_clampedZoomValue = 1.0;
        eastl::destruct<highlight::NpcUID*>((eastl*)&m_uIWidth, pNVar2, extraout_RDX);
        eastl::destruct<highlight::NpcUID*>((eastl*)&m_uIHeight, pNVar2, extraout_RDX_00);
        new (&field_100, (_func_decltype_nullptr*)pNVar2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        m_zoomValue = 1.0;
        new (&field_128) jag::math::Vector4T<float>();
        m_minSize = param_3;
        field_156 = param_4;
        field_56 = (ObjType*)dash3d::NXTRenderer::GetInstancePtr();
        m_clientWindowSize = param_1;
        field_84 = param_2;
        Resize(this, param_3, param_4);
    }

    // 0x10031af40, 208 bytes, placed by class name
    // NXTPixScreen::Resize(int, int)
    void NXTPixScreen::Resize(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        NXTRenderCanvas* pNVar3;
        SharedArray* pSVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined1 local_40[16];

        m_width = param_1;
        m_height = param_2;
        new (local_40) dash3d::GridRect(0, 0, param_1, param_2);
        SetSafeArea(this, (Rect*)local_40);
        if (m_pCurrentRenderCanvas == (NXTRenderCanvas*)0) {
            pNVar3 = (NXTRenderCanvas*)field_56->GetCost();
            m_pCurrentRenderCanvas = pNVar3;
        }
        (m_pCurrentRenderCanvas, m_viewportPosition, field_76, m_width, m_height)->SetRenderRect();
        pNVar3 = m_pCurrentRenderCanvas;
        iVar1 = m_viewportPosition;
        iVar2 = field_76;
        uVar5 = GetMinMapX();
        uVar6 = GetUIHeight(this);
        pNVar3->SetUIRect(iVar1, iVar2, uVar5, uVar6);
        (m_pCurrentRenderCanvas, m_width, m_height)->SetScreenSize();
        pSVar4 = (SharedArray*)m_pCurrentRenderCanvas->GetPixelBuffer();
        (&field_8, pSVar4)->ref_assign();
    }

    // 0x10031b030, 16 bytes, complete-object constructor, placed by class name
    // NXTPixScreen::NXTPixScreen(int, int, int, int): jumps straight to the base-object constructor

    // 0x10031b040, 16 bytes, placed by class name
    // NXTPixScreen::SetViewportPosition(int, int)
    void NXTPixScreen::SetViewportPosition(int param_1, int param_2) {
        m_viewportPosition = param_1;
        field_76 = param_2;
    }

    // 0x10031b050, 16 bytes, placed by class name
    // NXTPixScreen::SetClientWindowSize(int, int)
    void NXTPixScreen::SetClientWindowSize(int param_1, int param_2) {
        m_clientWindowSize = param_1;
        field_84 = param_2;
    }

    // 0x10031b060, 32 bytes, placed by class name
    // NXTPixScreen::SetMinSize(int, int)
    void NXTPixScreen::SetMinSize(int param_1, int param_2) {
        m_minSize = param_1;
        field_156 = param_2;
    }

    // 0x10031b080, 48 bytes, placed by class name
    // NXTPixScreen::SetSafeArea(jag::math::Rect<int> const&)
    void NXTPixScreen::SetSafeArea(Rect* param_1) {
        jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_100, param_1);
        CalculateUIRect(this);
    }

    // 0x10031b0c0, 80 bytes, placed by class name
    // NXTPixScreen::ZoomUI(float)
    void NXTPixScreen::ZoomUI(float param_1) {
        float local_1c;
        float local_18;
        float local_14;

        local_18 = 1.0;
        local_14 = 5.0;
        local_1c = param_1;
        m_zoomValue = jag::math::Clamp<float>(&local_1c, &local_18, &local_14);
        CalculateUIRect(this);
    }

    // 0x10031b110, 368 bytes, placed by class name
    // NXTPixScreen::CalculateUIRect()
    void NXTPixScreen::CalculateUIRect() {
        int iVar1;
        int iVar2;
        int* piVar3;
        int iVar4;
        int iVar5;
        float fVar6;
        float fVar7;
        int local_40[2];
        undefined4 local_38;
        float local_34;

        local_34 = (float)m_width * (float)m_minSize;
        piVar3 = (int*)(&field_100)->second();
        fVar6 = (float)floor(local_34 / (float)*piVar3);
        iVar5 = (int)fVar6;
        local_34 = (float)m_height * (float)field_156;
        piVar3 = (int*)(&field_100)->qw();
        fVar6 = (float)floor(local_34 / (float)*piVar3);
        local_34 = (float)(int)fVar6;
        iVar1 = m_width;
        fVar7 = 1.0 / m_zoomValue;
        fVar6 = (float)floor((float)iVar1 * fVar7);
        iVar4 = (int)fVar6;
        iVar2 = m_height;
        fVar6 = (float)floor((float)iVar2 * fVar7);
        if (iVar4 < iVar5) {
            fVar6 = (float)((iVar1 / 2 + iVar2 * iVar5) / iVar1);
            iVar4 = iVar5;
        } else {
            fVar6 = (float)(int)fVar6;
        }
        if ((int)fVar6 < (int)local_34) {
            iVar4 = (iVar2 / 2 + iVar1 * (int)local_34) / iVar2;
            fVar6 = local_34;
        }
        XPlotBlender<XPlot_NormalAlpha>::XPlotBlender<int>((XPlotBlender<XPlot_NormalAlpha>*)local_40, iVar4);
        m_uIWidth = local_40[0];
        XPlotBlender<XPlot_NormalAlpha>::XPlotBlender<int>((XPlotBlender<XPlot_NormalAlpha>*)&local_38, (int)fVar6);
        m_uIHeight = local_38;
        m_clampedZoomValue = (float)m_width / (float)iVar4;
    }

    // 0x10031b280, 160 bytes, placed by class name
    // NXTPixScreen::UICoordFromViewportCoord(int, int, int&, int&) const
    void NXTPixScreen::UICoordFromViewportCoord(int param_1, int param_2, int* param_3, int* param_4) {
        int iVar1;
        CoordMapSquare local_38;
        float local_2c;

        local_2c = (float)param_1;
        local_38.m_x = GetMinMapX();
        iVar1 = local_38.GetX();
        iVar1 = jag::math::RoundFloatToInt(((float)iVar1 * local_2c) / (float)m_width);
        *param_3 = iVar1;
        local_2c = (float)param_2;
        local_38._8_4_ = GetUIHeight(this);
        iVar1 = local_38.field_8.GetX();
        iVar1 = jag::math::RoundFloatToInt(((float)iVar1 * local_2c) / (float)m_height);
        *param_4 = iVar1;
    }

    // 0x10031b320, 208 bytes, placed by class name
    // NXTPixScreen::UICoordFromWindowCoord(int, int, CoordType<UICoordSpecializer>&, CoordType<UICoordSpecializer>&) const
    void NXTPixScreen::UICoordFromWindowCoord(int param_1, int param_2, CoordType* param_3, CoordType* param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined4 local_38[2];
        uint local_30[2];

        iVar3 = m_viewportPosition;
        iVar1 = field_76;
        local_30[0] = GetMinMapX();
        iVar2 = local_30->GetX();
        iVar3 = jag::math::RoundFloatToInt(((float)iVar2 * (float)(param_1 - iVar3)) / (float)m_width);
        XPlotBlender<XPlot_NormalAlpha>::XPlotBlender<int>((XPlotBlender<XPlot_NormalAlpha>*)local_38, iVar3);
        *(undefined4*)param_3 = local_38[0];
        local_30[0] = GetUIHeight(this);
        iVar3 = local_30->GetX();
        iVar3 = jag::math::RoundFloatToInt(((float)iVar3 * (float)(param_2 - iVar1)) / (float)m_height);
        XPlotBlender<XPlot_NormalAlpha>::XPlotBlender<int>((XPlotBlender<XPlot_NormalAlpha>*)local_38, iVar3);
        *(undefined4*)param_4 = local_38[0];
    }

    // 0x10031b3f0, 192 bytes, placed by class name
    // NXTPixScreen::CalculateCanvasCoords(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, int&, int&) const
    void NXTPixScreen::CalculateCanvasCoords(uint param_2, undefined4 param_3, undefined4* param_4,
                                             undefined4* param_5) {
        int iVar1;
        undefined4 uVar2;
        undefined1 local_38[12];
        float local_2c;
        uint local_28[2];

        local_38._0_4_ = param_2;
        local_38._8_4_ = param_3;
        iVar1 = local_38->GetX();
        local_2c = (float)m_width * (float)iVar1;
        local_28[0] = GetMinMapX();
        iVar1 = local_28->GetX();
        uVar2 = jag::math::RoundFloatToInt(local_2c / (float)iVar1);
        *param_4 = uVar2;
        iVar1 = ((local_38 + 8))->GetX();
        local_2c = (float)m_height * (float)iVar1;
        local_28[0] = GetUIHeight(this);
        iVar1 = local_28->GetX();
        uVar2 = jag::math::RoundFloatToInt(local_2c / (float)iVar1);
        *param_5 = uVar2;
    }

    // 0x10031b4b0, 48 bytes, placed by class name
    // NXTPixScreen::SetSkyboxColour(jag::math::Vector4T<float>)
    void NXTPixScreen::SetSkyboxColour(undefined8 param_1, undefined8 param_2, long param_3) {
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = param_1;
        uStack_10 = param_2;
        jag::math::Rect<float>::operator=((Rect<float>*)(param_3 + 128), (Rect*)&local_18);
    }

    // 0x10031b4e0, 32 bytes, placed by class name
    // NXTPixScreen::SetFogParams(float, float)
    void NXTPixScreen::SetFogParams(float param_1, float param_2) {
        m_fogParams = param_1;
        field_148 = param_2;
    }

    // 0x10031b500, 16 bytes, placed by class name
    // NXTPixScreen::SetScaledUIQuality(ScaledUIQuality)
    void NXTPixScreen::SetScaledUIQuality(undefined4 param_2) {
        m_scaledUIQuality = param_2;
    }

    // 0x10031b510, 16 bytes, placed by class name
    // NXTPixScreen::GetCurrentRenderCanvas()
    NXTRenderCanvas* NXTPixScreen::GetCurrentRenderCanvas() {
        return m_pCurrentRenderCanvas;
    }

    // 0x10031b530, 224 bytes, placed by class name
    // NXTPixScreen::UpdateCurrentRenderCanvas(dash3d::NXTRenderCanvas*)
    void NXTPixScreen::UpdateCurrentRenderCanvas(NXTRenderCanvas* param_1) {
        int iVar1;
        int iVar2;
        SharedArray* pSVar3;
        undefined4 uVar4;
        undefined4 uVar5;

        m_pCurrentRenderCanvas = param_1;
        iVar1 = m_viewportPosition;
        iVar2 = field_76;
        uVar4 = GetMinMapX();
        uVar5 = GetUIHeight(this);
        param_1->SetUIRect(iVar1, iVar2, uVar4, uVar5);
        (m_pCurrentRenderCanvas, m_width, m_height)->SetScreenSize();
        (m_pCurrentRenderCanvas, field_40)->ShowUI();
        (m_pCurrentRenderCanvas, m_scaledUIQuality)->SetScaledUIQuality();
        (m_pCurrentRenderCanvas, field_41)->ShowSkybox();
        dash3d::NXTRenderCanvas::SetSkyboxColour(field_128, field_136, m_pCurrentRenderCanvas);
        (m_pCurrentRenderCanvas, m_fogParams, field_148)->SetFogParams();
        (m_pCurrentRenderCanvas, field_42)->SetDepthBufferEnabled();
        pSVar3 = (SharedArray*)m_pCurrentRenderCanvas->GetPixelBuffer();
        (&field_8, pSVar3)->ref_assign();
    }

    // 0x10031b620, 48 bytes, placed by class name
    // NXTPixScreen::Render(int, int)
    void NXTPixScreen::Render(int param_1, int param_2) {
        NXTRenderCanvas* pNVar1;

        pNVar1 = (NXTRenderCanvas*)dash3d::NXTRenderer::PresentFrontBuffer((NXTRenderCanvas*)field_56);
        UpdateCurrentRenderCanvas(this, pNVar1);
    }

} // namespace jag::oldscape::graphics
