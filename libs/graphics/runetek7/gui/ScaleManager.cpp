// libs/graphics/runetek7/gui/ScaleManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ScaleManager.h"

namespace jag::graphics {
    // 0x100d4b8c8
    int32_t ScaleManager::OVERRIDE_INTERFACE_WIDTH_MIN = 100;

    // 0x100d4b8cc
    int32_t ScaleManager::OVERRIDE_INTERFACE_WIDTH_MAX = 16000;

    // 0x100d4b8d0
    int32_t ScaleManager::OVERRIDE_INTERFACE_HEIGHT_MIN = 100;

    // 0x100d4b8d4
    int32_t ScaleManager::OVERRIDE_INTERFACE_HEIGHT_MAX = 12000;

    // 0x100d4b8d8
    int32_t ScaleManager::OVERRIDE_INTERFACE_SCALE_MIN = 10;

    // 0x100d4b8dc
    int32_t ScaleManager::OVERRIDE_INTERFACE_SCALE_MAX = 400;

    // 0x100d4b8e0
    int32_t ScaleManager::OVERRIDE_INTERFACE_SCALE_DEFAULT = 100;

    // 0x100d4b8e4
    int32_t ScaleManager::OVERRIDE_INTERFACE_SCALE_LIMIT_WIDTH = 800;

    // 0x100d4b8e8
    int32_t ScaleManager::OVERRIDE_INTERFACE_SCALE_LIMIT_HEIGHT[74] = {
        600,         1052389004,  1060777612, 1063828015, 8364,       63,         8218,        402,         8222,
        8230,        8224,        8225,       710,        8240,       352,        8249,        338,         63,
        381,         63,          63,         8216,       8217,       8220,       8221,        8226,        8211,
        8212,        732,         8482,       353,        8250,       339,        63,          382,         376,
        0,           0,           1,          1,          2,          3,          139,         150,         161,
        989888641,   -1096367111, 1051116537, 1049652309, 1033992275, 1049351759, -1098131889, 1047671932,  1040963151,
        1093664768,  1094713344,  1096810496, 1011666125, 1174274048, 1074580685, 0,           0,           1084227584,
        1043878380,  1159069696,  1077936128, 1120403456, 1128792064, 1143930880, 1158660096,  -1608482816, 1625309376,
        -1877954512, 1355837680,
    };

    // 0x100009720: ScaleManager::GetTmpDPI() const has the same machine code as BaseApp::GetExitCode()

    // 0x1000fa820: ScaleManager::GetSubScaleFactor() const has the same machine code as oldscape::graphics::NXTPixScreen::GetClampedZoomValue() const

    // 0x10048fca0: ScaleManager::GetGameScale() has the same machine code as game::EnvLightingSettings::GetSunlightShadowStrength() const

    // 0x1008f36c0
    ScaleManager::ScaleManager(RT7Core& rt7Core)
        : render::RenderDeviceCallback(true, 1), field_16(1.0), field_24(rt7Core), field_32(1), m_gameScale(1.0),
          field_40(0.0), field_44(0) {
        new (&field_48) shared_ptr();
        field_64 = 1.0;
        field_68 = 1.0;
        field_72 = 1.0;
        field_76 = 1.0;
        field_80 = 1.0;
        field_84 = 1.0;
        m_subScaleFactor = field_16;
        m_interfaceDPIOverride = 0;
        m_tmpDPI = 0;
        UpdateInterfaceScaleFactors();
    }

    // 0x1008f3760
    void ScaleManager::UpdateInterfaceScaleFactors() {
        int iVar2;
        int iVar7;
        int iVar8;
        bool bVar10;
        float fVar11;
        float fVar12;

        unsigned int uVar3 = field_24->GetBackBufferWidth();
        unsigned int uVar4 = field_24->GetBackBufferHeight();
        unsigned int uVar5 = uVar3;
        unsigned int uVar6 = uVar4;
        if (0.0 < field_40) {
            fVar11 = (float)(int)uVar3;
            uVar5 = math::RoundFloatToInt(field_40 * fVar11);
            fVar12 = (float)(int)uVar4;
            uVar6 = math::RoundFloatToInt(field_40 * fVar12);
            bVar10 = uVar5 < 800;
            if ((bVar10) || (uVar6 < 600)) {
                do {
                    if (bVar10) {
                        uVar6 = math::RoundFloatToInt((fVar12 * 800.0) / fVar11);
                        uVar5 = 800;
                    } else {
                        uVar5 = math::RoundFloatToInt((fVar11 * 600.0) / fVar12);
                        uVar6 = 600;
                    }
                    bVar10 = uVar5 < 800;
                } while ((bVar10) || (uVar6 < 600));
            }
        }
        fVar12 = (float)eastl::max_alt((float)(int)uVar5 / (float)(int)uVar3, (float)(int)uVar6 / (float)(int)uVar4);
        fVar11 = field_16;
        if (fVar11 < fVar12) {
            fVar11 = fVar12 / fVar11;
        }
        float fVar1 = m_subScaleFactor;
        m_subScaleFactor = fVar11;
        uint8_t* this_00 = &field_48;
        auto piVar9 = this_00->second();
        if (*piVar9 == 0) {
            fVar11 = 1.0;
        } else {
            iVar7 = math::RoundFloatToInt((float)(int)uVar3 * fVar12);
            iVar8 = math::RoundFloatToInt((float)(int)uVar4 * fVar12);
            piVar9 = (int*)this_00->second();
            iVar2 = *piVar9;
            piVar9 = (int*)this_00->qw();
            fVar11 = (float)eastl::min<float>((float)iVar7 / (float)iVar2, (float)iVar8 / (float)*piVar9);
        }
        if ((fVar12 != field_72) || (fVar11 != field_64)) {
            field_64 = fVar11;
            field_68 = 1.0 / fVar11;
            field_72 = fVar12;
            field_80 = 1.0 / fVar12;
            fVar12 = (1.0 / fVar11) * fVar12;
            field_76 = fVar12;
            field_84 = 1.0 / fVar12;
            field_32 = 1;
        }
        if (fVar1 != m_subScaleFactor) {
            field_32 = 1;
        }
    }

    // 0x1008f3a00
    void ScaleManager::MainLogic() {
        if (field_44 != 0) {
            SetInterfaceScaleOverride(field_44);
            field_44 = 0;
        }
    }

    // 0x1008f3a30
    void ScaleManager::SetInterfaceScaleOverride(unsigned int arg1) {
        unsigned int uVar1 = eastl::min<unsigned int>(400, arg1);
        uVar1 = eastl::max<unsigned int>(10, uVar1);
        if (uVar1 == 100) {
            ResetInterfaceScaleOverride();
        } else if (100.0 / (float)uVar1 != field_40) {
            field_40 = 100.0 / (float)uVar1;
            UpdateInterfaceScaleFactors();
        }
    }

    // 0x1008f3a90
    void ScaleManager::MainDraw() {
        int arg2;
        unsigned int arg3;
        int iVar1;
        RenderDevice* this_01;
        unsigned int* puVar3;

        if (field_32 != '\0') {
            this_01 = (RenderDevice*)Instance();
            iVar1 = this_01->GetReadyState();
            if (iVar1 == 0) {
                ((RenderContext*)this_01->GetRenderContext())->UpdateBackBufferSize(true);
                field_32 = 0;
            }
        }
        uint8_t* this_00 = &field_48;
        auto piVar2 = this_00->second();
        iVar1 = *piVar2;
        auto this_03 = field_24->GetGUIManager();
        if (iVar1 < 1) {
            this_03->ResetProjectionOverride();
        } else {
            piVar2 = (int*)this_00->SSOBeginPtr();
            iVar1 = *piVar2;
            piVar2 = (int*)this_00->y();
            arg2 = *piVar2;
            puVar3 = (unsigned int*)this_00->second();
            arg3 = *puVar3;
            puVar3 = (unsigned int*)this_00->qw();
            this_03->SetProjectionOverride(iVar1, arg2, arg3, *puVar3);
        }
    }

    // 0x1008f3ba0
    void ScaleManager::SetGameScale(float arg1) {
        long* plVar1;

        if (arg1 <= 0.0) {
            LogAssert("scale > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "ScaleManager.cpp",
                      164, nullptr);
        }
        if (arg1 != m_gameScale) {
            m_gameScale = arg1;
            plVar1 = (long*)GraphicsApp::Instance();
            ((OpenGLView*)(**(void (**)(...))(*plVar1 + 112))(plVar1))->SetMainRenderTargetScaleFactor(arg1);
            field_32 = 1;
        }
    }

    // 0x1008f3c10
    void ScaleManager::SetInterfaceResolutionOverride(int arg1, int arg2) {
        if ((arg1 < 1) || (arg2 < 1)) {
            LogAssert("width > 0 && height > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "ScaleManager.cpp",
                      175, nullptr);
        }
        float local_24 = (float)arg1;
        int iVar1 = field_24->GetBackBufferWidth();
        float local_2c = local_24 / (float)iVar1;
        local_24 = (float)arg2;
        iVar1 = field_24->GetBackBufferHeight();
        float local_28 = local_24 / (float)iVar1;
        auto pfVar2 = std::min<float>(local_2c, local_28);
        if (*pfVar2 != field_40) {
            field_40 = *pfVar2;
            UpdateInterfaceScaleFactors();
        }
    }

    // 0x1008f3ce0
    void ScaleManager::ResetInterfaceResolutionOverride() {
        ResetInterfaceScaleOverride();
    }

    // 0x1008f3cf0
    void ScaleManager::ResetInterfaceScaleOverride() {
        if (0.0 < field_40 || field_40 == 0.0) {
            field_40 = 0.0;
            UpdateInterfaceScaleFactors();
        }
    }

    // 0x1008f3d20
    void ScaleManager::SetInterfaceDPIOverride(int arg1, bool arg2) {
        m_interfaceDPIOverride = arg1;
        SetInterfaceDPIOverrideInternal(arg1, arg2);
    }

    // 0x1008f3d30
    void ScaleManager::SetInterfaceDPIOverrideInternal(int arg1, bool arg2) {
        unsigned int uVar1;
        HardwareInfo* pHVar2;
        float* pfVar3;
        Logger* pLVar4;
        unsigned long uVar5;
        float fVar6;
        ReturnValue local_38;

        if (arg1 < 1) {
            ResetInterfaceDPIOverride();
        } else {
            uVar5 = (unsigned long)(unsigned int)arg1;
            pHVar2 = (HardwareInfo*)Instance();
            uVar1 = pHVar2->GetDPI();
            if (0 < (int)uVar1) {
                pHVar2 = (HardwareInfo*)pHVar2->Instance();
                local_38 = pHVar2->GetPhysicalScreenSize();
                if (arg2) {
                    pfVar3 = (float*)local_38.y();
                    if (1.0 < *pfVar3 * 0.2857143f) {
                        fVar6 = (float)ceil((float)arg1 / (*pfVar3 * 0.2857143f));
                        pLVar4 = logger::default_logger();
                        pfVar3 = (float*)local_38.y();
                        pLVar4->Log(
                            false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/ScaleManager.cpp",
                            249,
                            "DPI value %d too large for this display, value clamped to %d (physical height %f inches)",
                            (double)*pfVar3, uVar5, (unsigned long)(unsigned int)(int)fVar6);
                        uVar5 = (unsigned long)(unsigned int)(int)fVar6;
                    }
                }
                field_40 = (float)(int)uVar5 / (float)(int)uVar1;
                pLVar4 = logger::default_logger();
                fVar6 = field_40;
                pfVar3 = (float*)local_38.y();
                pLVar4->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/ScaleManager.cpp",
                            253,
                            "Overriding default interface DPI: %d (display) -> %d (override) = %f interface scale "
                            "(physical height %f inches)",
                            (double)fVar6, (double)*pfVar3, (unsigned long)uVar1, uVar5);
                UpdateInterfaceScaleFactors();
            }
        }
    }

    // 0x1008f3f20
    void ScaleManager::ResetInterfaceDPIOverride() {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        long* plVar6;
        Window* this_01;
        float fVar7;
        uint8_t local_48[16];
        float local_34;

        m_interfaceDPIOverride = 0;
        int local_38 = ((HardwareInfo*)Instance())->GetDPI();
        if (0 < local_38) {
            plVar6 = (long*)GraphicsApp::Instance();
            this_01 = (Window*)(**(void (**)(...))(*plVar6 + 96))(plVar6);
            *local_48 = this_01->GetSafeAreaInsets();
            iVar1 = local_48->GetX();
            iVar2 = local_48->GetPos();
            iVar3 = local_48->GetZ();
            iVar4 = local_48->GetLevel();
            iVar5 = field_24->GetBackBufferWidth();
            local_34 = (float)(iVar5 - (iVar2 + iVar1));
            iVar1 = field_24->GetBackBufferHeight();
            iVar1 = (int)((local_34 * 600.0) / (float)(iVar1 - (iVar4 + iVar3)));
            iVar2 = 600;
            if (iVar1 < 1066) {
                iVar2 = (int)(639600.0 / (float)iVar1);
            }
            field_24->GetBackBufferWidth();
            local_34 = (float)(iVar4 + iVar3);
            iVar1 = field_24->GetBackBufferHeight();
            fVar7 = (float)ceil(((float)iVar2 * local_34) / (float)iVar1);
            iVar1 = field_24->GetBackBufferHeight();
            fVar7 = (float)ceil((float)(((int)fVar7 + iVar2) * local_38) / (float)iVar1);
            iVar1 = (int)fVar7;
            if (iVar1 < 1) {
                LogAssert("targetDPI > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "ScaleManager.cpp",
                          306, nullptr);
            }
            m_tmpDPI = iVar1;
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "ScaleManager.cpp",
                      310, "Resetting DPI to default %d", iVar1);
            SetInterfaceDPIOverrideInternal(iVar1, false);
        }
    }

    // 0x1008f40e0
    void ScaleManager::OnWindowResize(const math::Rect<unsigned int>& rect) {
        SetInterfaceDPIOverrideInternal(m_interfaceDPIOverride, false);
        UpdateInterfaceScaleFactors();
    }

    // 0x1008f4110
    void ScaleManager::SetZoomRect(int arg1, int arg2, int arg3, int arg4) {
        new (&field_48) oldscape::dash3d::GridRect(arg1, arg2, arg3, arg4);
        UpdateInterfaceScaleFactors();
        field_24->GetGUIManager()->SetProjectionOverride(arg1, arg2, arg3, arg4);
    }

    // 0x1008f4170
    void ScaleManager::ResetZoomRect() {
        new (&field_48) oldscape::dash3d::GridRect(0, 0, 0, 0);
        UpdateInterfaceScaleFactors();
        field_24->GetGUIManager()->ResetProjectionOverride();
    }

    // 0x1008f41b0
    void ScaleManager::ScreenToInterfaceSize(int arg1, bool arg2) const {
        math::RoundFloatToInt((float)ScreenToInterfaceSize((float)arg1, arg2));
    }

    // 0x1008f41d0
    float ScaleManager::ScreenToInterfaceSize(float arg1, bool arg2) const {
        uint32_t in_register_00000031;
        float fVar1;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2) == 0) {
            fVar1 = 1.0;
        } else {
            fVar1 = field_68;
        }
        return arg1 / (fVar1 * field_80);
    }

    // 0x1008f4200
    void ScaleManager::ScreenToInterfacePosition(int& arg1, int& arg2, bool arg3) const {
        float local_20 = (float)*arg1;
        float local_1c = (float)*arg2;
        ScreenToInterfacePosition(local_20, local_1c, arg3);
        int iVar1 = math::RoundFloatToInt(local_20);
        arg1 = iVar1;
        iVar1 = math::RoundFloatToInt(local_1c);
        arg2 = iVar1;
    }

    // 0x1008f4260
    void ScaleManager::ScreenToInterfacePosition(float& arg1, float& arg2, bool arg3) const {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        uint32_t in_register_00000009;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            this_00 = &field_48;
            iVar1 = this_00->GetPos();
            if (0 < iVar1) {
                iVar1 = field_24->GetBackBufferWidth();
                fVar3 = (float)iVar1;
                iVar1 = field_24->GetBackBufferHeight();
                fVar4 = (float)iVar1;
                iVar1 = this_00->GetPos();
                iVar2 = this_00->GetLevel();
                fVar6 = ((float)iVar1 / (float)iVar2) * fVar4;
                fVar5 = (float)(~-(unsigned int)(fVar3 < fVar6) & (unsigned int)fVar4 |
                                (unsigned int)(fVar3 / ((float)iVar1 / (float)iVar2)) & -(unsigned int)(fVar3 < fVar6));
                if (fVar3 <= fVar6) {
                    fVar6 = fVar3;
                }
                arg1 = (fVar6 - fVar3) * 0.5 + arg1;
                arg2 = (fVar5 - fVar4) * 0.5 + arg2;
                arg1 = arg1 / fVar6;
                arg2 = arg2 / fVar5;
                iVar1 = this_00->GetPos();
                arg1 = (float)iVar1 * arg1;
                iVar1 = this_00->GetLevel();
                arg2 = (float)iVar1 * arg2;
                iVar1 = this_00->GetX();
                arg1 = (float)iVar1 + arg1;
                iVar1 = this_00->GetZ();
                fVar6 = (float)iVar1 + arg2;
                goto LAB_1008f43ea;
            }
        }
        arg1 = arg1 * field_72;
        fVar6 = arg2 * field_72;
    LAB_1008f43ea:
        arg2 = fVar6;
    }

    // 0x1008f4400
    void ScaleManager::ScreenToInterfaceRect(math::Rect<int>& rect, bool arg2) const {
        float in_register_00000004;
        float local_38;

        float local_34 = in_register_00000004;
        auto piVar2 = rect.SSOBeginPtr();
        int iVar1 = *piVar2;
        piVar2 = (int*)rect.second();
        _local_38 = (((uint64_t)local_34 << 32) | (uint32_t)((float)(iVar1 + *piVar2)));
        piVar2 = (int*)rect.y();
        iVar1 = *piVar2;
        piVar2 = (int*)rect.qw();
        local_34 = (float)(iVar1 + *piVar2);
        ScreenToInterfacePosition(local_38, local_34, arg2);
        piVar2 = (int*)rect.SSOBeginPtr();
        auto arg2_00 = rect.y();
        ScreenToInterfacePosition(*piVar2, *arg2_00, arg2);
        int iVar3 = math::RoundFloatToInt(local_38);
        piVar2 = (int*)rect.SSOBeginPtr();
        iVar1 = *piVar2;
        piVar2 = (int*)rect.second();
        *piVar2 = iVar3 - iVar1;
        iVar3 = math::RoundFloatToInt(local_34);
        piVar2 = (int*)rect.y();
        iVar1 = *piVar2;
        piVar2 = (int*)rect.qw();
        *piVar2 = iVar3 - iVar1;
    }

    // 0x1008f44e0
    void ScaleManager::ScreenToInterfaceRect(math::Rect<float>& rect, bool arg2) const {
        auto pfVar1 = rect.SSOBeginPtr();
        float local_2c = *pfVar1;
        pfVar1 = (float*)rect.second();
        float local_34 = local_2c + *pfVar1;
        pfVar1 = (float*)rect.y();
        local_2c = *pfVar1;
        pfVar1 = (float*)rect.qw();
        float local_30 = local_2c + *pfVar1;
        ScreenToInterfacePosition(local_34, local_30, arg2);
        pfVar1 = (float*)rect.SSOBeginPtr();
        auto arg2_00 = rect.y();
        ScreenToInterfacePosition(*pfVar1, *arg2_00, arg2);
        local_2c = local_34;
        pfVar1 = (float*)rect.SSOBeginPtr();
        local_2c = local_2c - *pfVar1;
        pfVar1 = (float*)rect.second();
        *pfVar1 = local_2c;
        local_2c = local_30;
        pfVar1 = (float*)rect.y();
        local_2c = local_2c - *pfVar1;
        pfVar1 = (float*)rect.qw();
        *pfVar1 = local_2c;
    }

    // 0x1008f45f0
    void ScaleManager::ScreenToInterfaceInsets(math::Rect<int>& rect, bool arg2) const {
        int iVar4 = field_24->GetBackBufferWidth();
        auto piVar3 = rect.SSOBeginPtr();
        int iVar1 = *piVar3;
        piVar3 = (int*)rect.second();
        int iVar2 = *piVar3;
        piVar3 = (int*)rect.second();
        *piVar3 = iVar4 - (iVar1 + iVar2);
        iVar4 = field_24->GetBackBufferHeight();
        piVar3 = (int*)rect.y();
        iVar1 = *piVar3;
        piVar3 = (int*)rect.qw();
        iVar2 = *piVar3;
        piVar3 = (int*)rect.qw();
        *piVar3 = iVar4 - (iVar1 + iVar2);
        ScreenToInterfaceRect(rect, arg2);
        iVar4 = field_24->GetInterfaceWidth();
        piVar3 = (int*)rect.SSOBeginPtr();
        iVar1 = *piVar3;
        piVar3 = (int*)rect.second();
        iVar2 = *piVar3;
        piVar3 = (int*)rect.second();
        *piVar3 = iVar4 - (iVar1 + iVar2);
        iVar4 = field_24->GetInterfaceHeight();
        piVar3 = (int*)rect.y();
        iVar1 = *piVar3;
        piVar3 = (int*)rect.qw();
        iVar2 = *piVar3;
        piVar3 = (int*)rect.qw();
        *piVar3 = iVar4 - (iVar1 + iVar2);
    }

    // 0x1008f46e0
    void ScaleManager::InterfaceToScreenSize(int arg1, bool arg2) const {
        math::RoundFloatToInt((float)InterfaceToScreenSize((float)arg1, arg2));
    }

    // 0x1008f4700
    float ScaleManager::InterfaceToScreenSize(float arg1, bool arg2) const {
        uint32_t in_register_00000031;
        float fVar1;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2) == 0) {
            fVar1 = 1.0;
        } else {
            fVar1 = field_64;
        }
        return field_80 * arg1 * fVar1;
    }

    // 0x1008f4730
    void ScaleManager::InterfaceToScreenPosition(int& arg1, int& arg2, bool arg3) const {
        float local_20 = (float)*arg1;
        float local_1c = (float)*arg2;
        InterfaceToScreenPosition(local_20, local_1c, arg3);
        int iVar1 = math::RoundFloatToInt(local_20);
        arg1 = iVar1;
        iVar1 = math::RoundFloatToInt(local_1c);
        arg2 = iVar1;
    }

    // 0x1008f4790
    void ScaleManager::InterfaceToScreenPosition(float& arg1, float& arg2, bool arg3) const {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        uint32_t in_register_00000009;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            this_00 = &field_48;
            iVar1 = this_00->GetPos();
            if (0 < iVar1) {
                iVar1 = this_00->GetX();
                arg1 = arg1 - (float)iVar1;
                iVar1 = this_00->GetZ();
                arg2 = arg2 - (float)iVar1;
                arg1 = arg1 * field_64;
                arg2 = arg2 * field_64;
                arg1 = arg1 * field_80;
                arg2 = arg2 * field_80;
                iVar1 = field_24->GetBackBufferWidth();
                fVar3 = (float)iVar1;
                iVar1 = field_24->GetBackBufferHeight();
                fVar4 = (float)iVar1;
                iVar1 = this_00->GetPos();
                iVar2 = this_00->GetLevel();
                fVar6 = ((float)iVar1 / (float)iVar2) * fVar4;
                fVar5 = fVar6;
                if (fVar3 <= fVar6) {
                    fVar5 = fVar3;
                }
                arg1 = (fVar3 - fVar5) * 0.5 + arg1;
                fVar5 = (fVar4 - (float)(~-(unsigned int)(fVar3 < fVar6) & (unsigned int)fVar4 |
                                         (unsigned int)(fVar3 / ((float)iVar1 / (float)iVar2)) &
                                             -(unsigned int)(fVar3 < fVar6))) *
                            0.5 +
                        arg2;
                goto LAB_1008f4907;
            }
        }
        arg1 = arg1 * field_80;
        fVar5 = arg2 * field_80;
    LAB_1008f4907:
        arg2 = fVar5;
    }

    // 0x1008f4920
    void ScaleManager::InterfaceToScreenRect(math::Rect<int>& rect, bool arg2) const {
        float in_register_00000004;
        float local_38;

        float local_34 = in_register_00000004;
        auto piVar2 = rect.SSOBeginPtr();
        int iVar1 = *piVar2;
        piVar2 = (int*)rect.second();
        _local_38 = (((uint64_t)local_34 << 32) | (uint32_t)((float)(iVar1 + *piVar2)));
        piVar2 = (int*)rect.y();
        iVar1 = *piVar2;
        piVar2 = (int*)rect.qw();
        local_34 = (float)(iVar1 + *piVar2);
        InterfaceToScreenPosition(local_38, local_34, arg2);
        piVar2 = (int*)rect.SSOBeginPtr();
        auto arg2_00 = rect.y();
        InterfaceToScreenPosition(*piVar2, *arg2_00, arg2);
        int iVar3 = math::RoundFloatToInt(local_38);
        piVar2 = (int*)rect.SSOBeginPtr();
        iVar1 = *piVar2;
        piVar2 = (int*)rect.second();
        *piVar2 = iVar3 - iVar1;
        iVar3 = math::RoundFloatToInt(local_34);
        piVar2 = (int*)rect.y();
        iVar1 = *piVar2;
        piVar2 = (int*)rect.qw();
        *piVar2 = iVar3 - iVar1;
    }

    // 0x1008f4a00
    void ScaleManager::InterfaceToScreenRect(math::Rect<float>& rect, bool arg2) const {
        auto pfVar1 = rect.SSOBeginPtr();
        float local_2c = *pfVar1;
        pfVar1 = (float*)rect.second();
        float local_34 = local_2c + *pfVar1;
        pfVar1 = (float*)rect.y();
        local_2c = *pfVar1;
        pfVar1 = (float*)rect.qw();
        float local_30 = local_2c + *pfVar1;
        InterfaceToScreenPosition(local_34, local_30, arg2);
        pfVar1 = (float*)rect.SSOBeginPtr();
        auto arg2_00 = rect.y();
        InterfaceToScreenPosition(*pfVar1, *arg2_00, arg2);
        local_2c = local_34;
        pfVar1 = (float*)rect.SSOBeginPtr();
        local_2c = local_2c - *pfVar1;
        pfVar1 = (float*)rect.second();
        *pfVar1 = local_2c;
        local_2c = local_30;
        pfVar1 = (float*)rect.y();
        local_2c = local_2c - *pfVar1;
        pfVar1 = (float*)rect.qw();
        *pfVar1 = local_2c;
    }

    // 0x1008f4b10
    void ScaleManager::SetTmpDPI(int arg1, bool arg2) {
        m_tmpDPI = arg1;
        SetInterfaceDPIOverride(arg1, arg2);
    }

} // namespace jag::graphics
