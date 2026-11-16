// libs/graphics/runetek7/gui/ScaleManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ScaleManager.h"

namespace jag::graphics {
    // 0x100d4b8c8, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_WIDTH_MIN = 100;

    // 0x100d4b8cc, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_WIDTH_MAX = 16000;

    // 0x100d4b8d0, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_HEIGHT_MIN = 100;

    // 0x100d4b8d4, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_HEIGHT_MAX = 12000;

    // 0x100d4b8d8, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_SCALE_MIN = 10;

    // 0x100d4b8dc, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_SCALE_MAX = 400;

    // 0x100d4b8e0, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_SCALE_DEFAULT = 100;

    // 0x100d4b8e4, 4 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_SCALE_LIMIT_WIDTH = 800;

    // 0x100d4b8e8, 296 bytes, __const
    ScaleManager::OVERRIDE_INTERFACE_SCALE_LIMIT_HEIGHT = {
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

    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    int ScaleManager::GetTmpDPI() const;

    // 0x1000fa820: the linker folded this into oldscape::graphics::NXTPixScreen::GetClampedZoomValue() const, which has identical code
    float ScaleManager::GetSubScaleFactor() const;

    // 0x10048fca0: the linker folded this into game::EnvLightingSettings::GetSunlightShadowStrength() const, which has identical code
    float ScaleManager::GetGameScale();

    // 0x1008f36c0, 160 bytes, base-object constructor, placed by class name and debug map
    // ScaleManager::ScaleManager(RT7Core&)
    void ScaleManager::ScaleManager(RT7Core* param_1) {
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)&DAT_00000001;
        new (this) render::RenderDeviceCallback(true, 1);
        field_0 = &PTR__ScaleManager_100f186c8;
        field_16 = 1.0;
        field_24 = param_1;
        field_32 = 1;
        m_gameScale = 1.0;
        field_40 = 0.0;
        field_44 = 0;
        new (&field_48, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_64 = 1.0;
        field_68 = 1.0;
        field_72 = 1.0;
        field_76 = 1.0;
        field_80 = 1.0;
        field_84 = 1.0;
        m_subScaleFactor = field_16;
        m_interfaceDPIOverride = 0;
        m_tmpDPI = 0;
        UpdateInterfaceScaleFactors(this);
    }

    // 0x1008f3760, 656 bytes, placed by class name and debug map
    // ScaleManager::UpdateInterfaceScaleFactors()
    void ScaleManager::UpdateInterfaceScaleFactors() {
        undefined1* this_00;
        float fVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        int iVar7;
        int iVar8;
        int* piVar9;
        bool bVar10;
        float fVar11;
        float fVar12;

        uVar3 = field_24->GetBackBufferWidth();
        uVar4 = field_24->GetBackBufferHeight();
        uVar5 = uVar3;
        uVar6 = uVar4;
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
        fVar1 = m_subScaleFactor;
        m_subScaleFactor = fVar11;
        this_00 = &field_48;
        piVar9 = (int*)this_00->second();
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

    // 0x1008f39f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ScaleManager::ScaleManager(RT7Core&): jumps straight to the base-object constructor

    // 0x1008f3a00, 48 bytes, placed by class name and debug map
    // ScaleManager::MainLogic()
    void ScaleManager::MainLogic() {
        if (field_44 != 0) {
            SetInterfaceScaleOverride(this, field_44);
            field_44 = 0;
        }
    }

    // 0x1008f3a30, 96 bytes, placed by class name and debug map
    // ScaleManager::SetInterfaceScaleOverride(unsigned int)
    void ScaleManager::SetInterfaceScaleOverride(uint param_1) {
        uint uVar1;

        uVar1 = eastl::min<unsigned int>(400, param_1);
        uVar1 = eastl::max<unsigned int>(10, uVar1);
        if (uVar1 == 100) {
            ResetInterfaceScaleOverride(this);
        } else if (100.0 / (float)uVar1 != field_40) {
            field_40 = 100.0 / (float)uVar1;
            UpdateInterfaceScaleFactors(this);
        }
    }

    // 0x1008f3a90, 192 bytes, placed by class name and debug map
    // ScaleManager::MainDraw()
    void ScaleManager::MainDraw() {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        int iVar3;
        RenderDevice* this_01;
        RenderContext* this_02;
        int* piVar4;
        GUIManager* this_03;
        vector* pvVar5;
        uint* puVar6;
        type* in_RSI;

        if (field_32 != '\0') {
            this_01 = (RenderDevice*)Instance();
            iVar3 = this_01->GetReadyState();
            if (iVar3 == 0) {
                this_02 = (RenderContext*)this_01->GetRenderContext();
                in_RSI = (type*)&DAT_00000001;
                this_02->UpdateBackBufferSize(true);
                field_32 = 0;
            }
        }
        this_00 = &field_48;
        piVar4 = (int*)this_00->second();
        iVar3 = *piVar4;
        this_03 = (GUIManager*)field_24->GetGUIManager();
        if (iVar3 < 1) {
            this_03->ResetProjectionOverride();
        } else {
            pvVar5 = this_00->SSOBeginPtr(in_RSI);
            iVar3 = *(int*)pvVar5;
            piVar4 = (int*)this_00->y();
            iVar1 = *piVar4;
            puVar6 = (uint*)this_00->second();
            uVar2 = *puVar6;
            puVar6 = (uint*)this_00->qw();
            this_03->SetProjectionOverride(iVar3, iVar1, uVar2, *puVar6);
        }
    }

    // 0x1008f3ba0, 112 bytes, placed by class name and debug map
    // ScaleManager::SetGameScale(float)
    void ScaleManager::SetGameScale(float param_1) {
        long* plVar1;
        OpenGLView* this_00;

        if (param_1 <= 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("scale > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "ScaleManager.cpp",
                      164, (char*)0);
        }
        if (param_1 != m_gameScale) {
            m_gameScale = param_1;
            plVar1 = (long*)Instance();
            this_00 = (OpenGLView*)(**(code**)(*plVar1 + 112))(plVar1);
            this_00->SetMainRenderTargetScaleFactor(param_1);
            field_32 = 1;
        }
    }

    // 0x1008f3c10, 192 bytes, placed by class name and debug map
    // ScaleManager::SetInterfaceResolutionOverride(int, int)
    void ScaleManager::SetInterfaceResolutionOverride(int param_1, int param_2) {
        int iVar1;
        float* pfVar2;
        float local_2c;
        float local_28;
        float local_24;

        if ((param_1 < 1) || (param_2 < 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width > 0 && height > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "ScaleManager.cpp",
                      175, (char*)0);
        }
        local_24 = (float)param_1;
        iVar1 = field_24->GetBackBufferWidth();
        local_2c = local_24 / (float)iVar1;
        local_24 = (float)param_2;
        iVar1 = field_24->GetBackBufferHeight();
        local_28 = local_24 / (float)iVar1;
        pfVar2 = std::min<float>(&local_2c, &local_28);
        if (*pfVar2 != field_40) {
            field_40 = *pfVar2;
            UpdateInterfaceScaleFactors(this);
        }
    }

    // 0x1008f3ce0, 16 bytes, placed by class name and debug map
    // ScaleManager::ResetInterfaceResolutionOverride()
    void ScaleManager::ResetInterfaceResolutionOverride() {
        ResetInterfaceScaleOverride(this);
    }

    // 0x1008f3cf0, 32 bytes, placed by class name and debug map
    // ScaleManager::ResetInterfaceScaleOverride()
    void ScaleManager::ResetInterfaceScaleOverride() {
        if (0.0 < field_40 || field_40 == 0.0) {
            field_40 = 0.0;
            UpdateInterfaceScaleFactors(this);
        }
    }

    // 0x1008f3d20, 16 bytes, placed by class name and debug map
    // ScaleManager::SetInterfaceDPIOverride(int, bool)
    void ScaleManager::SetInterfaceDPIOverride(int param_1, bool param_2) {
        m_interfaceDPIOverride = param_1;
        SetInterfaceDPIOverrideInternal(this, param_1, param_2);
    }

    // 0x1008f3d30, 352 bytes, placed by class name and debug map
    // ScaleManager::SetInterfaceDPIOverrideInternal(int, bool)
    void ScaleManager::SetInterfaceDPIOverrideInternal(int param_1, bool param_2) {
        float* pfVar1;
        undefined8 uVar2;
        int iVar3;
        int iVar4;
        HardwareInfo* this_00;
        float fVar5;
        Vector2T<int> local_38[8];

        if (param_1 < 1) {
            ResetInterfaceDPIOverride(this);
        } else {
            this_00 = (HardwareInfo*)Instance();
            iVar3 = this_00->GetDPI();
            if (0 < iVar3) {
                this_00->Instance();
                local_38->GetPhysicalScreenSize();
                iVar4 = param_1;
                if (param_2) {
                    pfVar1 = (float*)local_38->y();
                    if (1.0 < *pfVar1 * 0.2857143) {
                        fVar5 = (float)ceil((float)param_1 / (*pfVar1 * 0.2857143));
                        iVar4 = (int)fVar5;
                        uVar2 = logger::default_logger();
                        pfVar1 = (float*)local_38->y();
                        logger::Logger::Log(
                            (double)*pfVar1, uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/ScaleManager.cpp",
                            249,
                            "DPI value %d too large for this display, value clamped to %d (physical height %f inches)",
                            param_1, iVar4);
                    }
                }
                field_40 = (float)iVar4 / (float)iVar3;
                uVar2 = logger::default_logger();
                fVar5 = field_40;
                pfVar1 = (float*)local_38->y();
                logger::Logger::Log((double)fVar5, (double)*pfVar1, uVar2, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/gui/ScaleManager.cpp",
                                    253,
                                    "Overriding default interface DPI: %d (display) -> %d (override) = %f interface "
                                    "scale (physical height %f inches)",
                                    iVar3, iVar4);
                UpdateInterfaceScaleFactors(this);
            }
        }
    }

    // 0x1008f3f20, 448 bytes, placed by class name and debug map
    // ScaleManager::ResetInterfaceDPIOverride()
    void ScaleManager::ResetInterfaceDPIOverride() {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        GraphicsApp* this_00;
        long* plVar6;
        undefined8 uVar7;
        float fVar8;
        undefined1 local_48[16];
        int local_38;
        float local_34;

        m_interfaceDPIOverride = 0;
        this_00 = (GraphicsApp*)Instance();
        local_38 = this_00->GetDPI();
        if (0 < local_38) {
            plVar6 = (long*)this_00->Instance();
            (**(code**)(*plVar6 + 96))(plVar6);
            local_48->GetSafeAreaInsets();
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
            fVar8 = (float)ceil(((float)iVar2 * local_34) / (float)iVar1);
            iVar1 = field_24->GetBackBufferHeight();
            fVar8 = (float)ceil((float)(((int)fVar8 + iVar2) * local_38) / (float)iVar1);
            iVar1 = (int)fVar8;
            if (iVar1 < 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("targetDPI > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "ScaleManager.cpp",
                          306, (char*)0);
            }
            m_tmpDPI = iVar1;
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/ScaleManager.cpp",
                                310, "Resetting DPI to default %d", iVar1);
            SetInterfaceDPIOverrideInternal(this, iVar1, false);
        }
    }

    // 0x1008f40e0, 48 bytes, placed by class name and debug map
    // ScaleManager::OnWindowResize(math::Rect<unsigned int> const&)
    void ScaleManager::OnWindowResize(Rect* param_1) {
        SetInterfaceDPIOverrideInternal(this, m_interfaceDPIOverride, false);
        UpdateInterfaceScaleFactors(this);
    }

    // 0x1008f4110, 96 bytes, placed by class name and debug map
    // ScaleManager::SetZoomRect(int, int, int, int)
    void ScaleManager::SetZoomRect(int param_1, int param_2, int param_3, int param_4) {
        GUIManager* this_00;

        new (&field_48, param_1, param_2, param_3, param_4) oldscape::dash3d::GridRect();
        UpdateInterfaceScaleFactors(this);
        this_00 = (GUIManager*)field_24->GetGUIManager();
        this_00->SetProjectionOverride(param_1, param_2, param_3, param_4);
    }

    // 0x1008f4170, 64 bytes, placed by class name and debug map
    // ScaleManager::ResetZoomRect()
    void ScaleManager::ResetZoomRect() {
        GUIManager* this_00;

        new (&field_48, 0, 0, 0, 0) oldscape::dash3d::GridRect();
        UpdateInterfaceScaleFactors(this);
        this_00 = (GUIManager*)field_24->GetGUIManager();
        this_00->ResetProjectionOverride();
    }

    // 0x1008f41b0, 32 bytes, placed by class name and debug map
    // ScaleManager::ScreenToInterfaceSize(int, bool) const
    void ScaleManager::ScreenToInterfaceSize(int param_1, bool param_2) {
        float fVar1;

        fVar1 = (float)ScreenToInterfaceSize(this, (float)param_1, param_2);
        math::RoundFloatToInt(fVar1);
    }

    // 0x1008f41d0, 48 bytes, placed by class name and debug map
    // ScaleManager::ScreenToInterfaceSize(float, bool) const
    float ScaleManager::ScreenToInterfaceSize(float param_1, bool param_2) {
        undefined3 in_register_00000031;
        float fVar1;

        if (CONCAT31(in_register_00000031, param_2) == 0) {
            fVar1 = 1.0;
        } else {
            fVar1 = field_68;
        }
        return param_1 / (fVar1 * field_80);
    }

    // 0x1008f4200, 96 bytes, placed by class name and debug map
    // ScaleManager::ScreenToInterfacePosition(int&, int&, bool) const
    void ScaleManager::ScreenToInterfacePosition(int* param_1, int* param_2, bool param_3) {
        int iVar1;
        float local_20;
        float local_1c;

        local_20 = (float)*param_1;
        local_1c = (float)*param_2;
        ScreenToInterfacePosition(this, &local_20, &local_1c, param_3);
        iVar1 = math::RoundFloatToInt(local_20);
        *param_1 = iVar1;
        iVar1 = math::RoundFloatToInt(local_1c);
        *param_2 = iVar1;
    }

    // 0x1008f4260, 416 bytes, placed by class name and debug map
    // ScaleManager::ScreenToInterfacePosition(float&, float&, bool) const
    void ScaleManager::ScreenToInterfacePosition(float* param_1, float* param_2, bool param_3) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        undefined3 in_register_00000009;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        if (CONCAT31(in_register_00000009, param_3) != 0) {
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
                fVar5 = (float)(~-(uint)(fVar3 < fVar6) & (uint)fVar4 |
                                (uint)(fVar3 / ((float)iVar1 / (float)iVar2)) & -(uint)(fVar3 < fVar6));
                if (fVar3 <= fVar6) {
                    fVar6 = fVar3;
                }
                *param_1 = (fVar6 - fVar3) * 0.5 + *param_1;
                *param_2 = (fVar5 - fVar4) * 0.5 + *param_2;
                *param_1 = *param_1 / fVar6;
                *param_2 = *param_2 / fVar5;
                iVar1 = this_00->GetPos();
                *param_1 = (float)iVar1 * *param_1;
                iVar1 = this_00->GetLevel();
                *param_2 = (float)iVar1 * *param_2;
                iVar1 = this_00->GetX();
                *param_1 = (float)iVar1 + *param_1;
                iVar1 = this_00->GetZ();
                fVar6 = (float)iVar1 + *param_2;
                goto LAB_1008f43ea;
            }
        }
        *param_1 = *param_1 * field_72;
        fVar6 = *param_2 * field_72;
    LAB_1008f43ea:
        *param_2 = fVar6;
    }

    // 0x1008f4400, 224 bytes, placed by class name and debug map
    // ScaleManager::ScreenToInterfaceRect(math::Rect<int>&, bool) const
    void ScaleManager::ScreenToInterfaceRect(Rect* param_1, bool param_2) {
        int iVar1;
        int iVar2;
        undefined8 in_RAX;
        vector* pvVar3;
        int* piVar4;
        float local_38;
        float local_34;

        local_34 = (float)((ulong)in_RAX >> 32);
        pvVar3 = param_1->SSOBeginPtr(param_1);
        iVar1 = *(int*)pvVar3;
        piVar4 = (int*)param_1->second();
        _local_38 = CONCAT44(local_34, (float)(iVar1 + *piVar4));
        piVar4 = (int*)param_1->y();
        iVar1 = *piVar4;
        piVar4 = (int*)param_1->qw();
        local_34 = (float)(iVar1 + *piVar4);
        ScreenToInterfacePosition(this, (float*)(type*)&local_38, &local_34, param_2);
        pvVar3 = param_1->SSOBeginPtr((type*)&local_38);
        piVar4 = (int*)param_1->y();
        ScreenToInterfacePosition(this, (int*)pvVar3, piVar4, param_2);
        iVar2 = math::RoundFloatToInt(local_38);
        pvVar3 = param_1->SSOBeginPtr(pvVar3);
        iVar1 = *(int*)pvVar3;
        piVar4 = (int*)param_1->second();
        *piVar4 = iVar2 - iVar1;
        iVar2 = math::RoundFloatToInt(local_34);
        piVar4 = (int*)param_1->y();
        iVar1 = *piVar4;
        piVar4 = (int*)param_1->qw();
        *piVar4 = iVar2 - iVar1;
    }

    // 0x1008f44e0, 272 bytes, placed by class name and debug map
    // ScaleManager::ScreenToInterfaceRect(math::Rect<float>&, bool) const
    void ScaleManager::ScreenToInterfaceRect(Rect* param_1, bool param_2) {
        vector* pvVar1;
        float* pfVar2;
        float local_34;
        float local_30;
        float local_2c;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        local_2c = *(float*)pvVar1;
        pfVar2 = (float*)param_1->second();
        local_34 = local_2c + *pfVar2;
        pfVar2 = (float*)param_1->y();
        local_2c = *pfVar2;
        pfVar2 = (float*)param_1->qw();
        local_30 = local_2c + *pfVar2;
        ScreenToInterfacePosition(this, (float*)(type*)&local_34, &local_30, param_2);
        pvVar1 = param_1->SSOBeginPtr((type*)&local_34);
        pfVar2 = (float*)param_1->y();
        ScreenToInterfacePosition(this, (float*)pvVar1, pfVar2, param_2);
        local_2c = local_34;
        pvVar1 = param_1->SSOBeginPtr(pvVar1);
        local_2c = local_2c - *(float*)pvVar1;
        pfVar2 = (float*)param_1->second();
        *pfVar2 = local_2c;
        local_2c = local_30;
        pfVar2 = (float*)param_1->y();
        local_2c = local_2c - *pfVar2;
        pfVar2 = (float*)param_1->qw();
        *pfVar2 = local_2c;
    }

    // 0x1008f45f0, 240 bytes, placed by class name and debug map
    // ScaleManager::ScreenToInterfaceInsets(math::Rect<int>&, bool) const
    void ScaleManager::ScreenToInterfaceInsets(Rect* param_1, bool param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        vector* pvVar4;
        int* piVar5;
        Rect* pRVar6;

        pRVar6 = param_1;
        iVar3 = field_24->GetBackBufferWidth();
        pvVar4 = param_1->SSOBeginPtr(pRVar6);
        iVar1 = *(int*)pvVar4;
        piVar5 = (int*)param_1->second();
        iVar2 = *piVar5;
        piVar5 = (int*)param_1->second();
        *piVar5 = iVar3 - (iVar1 + iVar2);
        iVar3 = field_24->GetBackBufferHeight();
        piVar5 = (int*)param_1->y();
        iVar1 = *piVar5;
        piVar5 = (int*)param_1->qw();
        iVar2 = *piVar5;
        piVar5 = (int*)param_1->qw();
        *piVar5 = iVar3 - (iVar1 + iVar2);
        pRVar6 = param_1;
        ScreenToInterfaceRect(this, param_1, param_2);
        iVar3 = field_24->GetInterfaceWidth();
        pvVar4 = param_1->SSOBeginPtr(pRVar6);
        iVar1 = *(int*)pvVar4;
        piVar5 = (int*)param_1->second();
        iVar2 = *piVar5;
        piVar5 = (int*)param_1->second();
        *piVar5 = iVar3 - (iVar1 + iVar2);
        iVar3 = field_24->GetInterfaceHeight();
        piVar5 = (int*)param_1->y();
        iVar1 = *piVar5;
        piVar5 = (int*)param_1->qw();
        iVar2 = *piVar5;
        piVar5 = (int*)param_1->qw();
        *piVar5 = iVar3 - (iVar1 + iVar2);
    }

    // 0x1008f46e0, 32 bytes, placed by class name and debug map
    // ScaleManager::InterfaceToScreenSize(int, bool) const
    void ScaleManager::InterfaceToScreenSize(int param_1, bool param_2) {
        float fVar1;

        fVar1 = (float)InterfaceToScreenSize(this, (float)param_1, param_2);
        math::RoundFloatToInt(fVar1);
    }

    // 0x1008f4700, 48 bytes, placed by class name and debug map
    // ScaleManager::InterfaceToScreenSize(float, bool) const
    float ScaleManager::InterfaceToScreenSize(float param_1, bool param_2) {
        undefined3 in_register_00000031;
        float fVar1;

        if (CONCAT31(in_register_00000031, param_2) == 0) {
            fVar1 = 1.0;
        } else {
            fVar1 = field_64;
        }
        return field_80 * param_1 * fVar1;
    }

    // 0x1008f4730, 96 bytes, placed by class name and debug map
    // ScaleManager::InterfaceToScreenPosition(int&, int&, bool) const
    void ScaleManager::InterfaceToScreenPosition(int* param_1, int* param_2, bool param_3) {
        int iVar1;
        float local_20;
        float local_1c;

        local_20 = (float)*param_1;
        local_1c = (float)*param_2;
        InterfaceToScreenPosition(this, &local_20, &local_1c, param_3);
        iVar1 = math::RoundFloatToInt(local_20);
        *param_1 = iVar1;
        iVar1 = math::RoundFloatToInt(local_1c);
        *param_2 = iVar1;
    }

    // 0x1008f4790, 400 bytes, placed by class name and debug map
    // ScaleManager::InterfaceToScreenPosition(float&, float&, bool) const
    void ScaleManager::InterfaceToScreenPosition(float* param_1, float* param_2, bool param_3) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        undefined3 in_register_00000009;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        if (CONCAT31(in_register_00000009, param_3) != 0) {
            this_00 = &field_48;
            iVar1 = this_00->GetPos();
            if (0 < iVar1) {
                iVar1 = this_00->GetX();
                *param_1 = *param_1 - (float)iVar1;
                iVar1 = this_00->GetZ();
                *param_2 = *param_2 - (float)iVar1;
                *param_1 = *param_1 * field_64;
                *param_2 = *param_2 * field_64;
                *param_1 = *param_1 * field_80;
                *param_2 = *param_2 * field_80;
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
                *param_1 = (fVar3 - fVar5) * 0.5 + *param_1;
                fVar5 = (fVar4 - (float)(~-(uint)(fVar3 < fVar6) & (uint)fVar4 |
                                         (uint)(fVar3 / ((float)iVar1 / (float)iVar2)) & -(uint)(fVar3 < fVar6))) *
                            0.5 +
                        *param_2;
                goto LAB_1008f4907;
            }
        }
        *param_1 = *param_1 * field_80;
        fVar5 = *param_2 * field_80;
    LAB_1008f4907:
        *param_2 = fVar5;
    }

    // 0x1008f4920, 224 bytes, placed by class name and debug map
    // ScaleManager::InterfaceToScreenRect(math::Rect<int>&, bool) const
    void ScaleManager::InterfaceToScreenRect(Rect* param_1, bool param_2) {
        int iVar1;
        int iVar2;
        undefined8 in_RAX;
        vector* pvVar3;
        int* piVar4;
        float local_38;
        float local_34;

        local_34 = (float)((ulong)in_RAX >> 32);
        pvVar3 = param_1->SSOBeginPtr(param_1);
        iVar1 = *(int*)pvVar3;
        piVar4 = (int*)param_1->second();
        _local_38 = CONCAT44(local_34, (float)(iVar1 + *piVar4));
        piVar4 = (int*)param_1->y();
        iVar1 = *piVar4;
        piVar4 = (int*)param_1->qw();
        local_34 = (float)(iVar1 + *piVar4);
        InterfaceToScreenPosition(this, (float*)(type*)&local_38, &local_34, param_2);
        pvVar3 = param_1->SSOBeginPtr((type*)&local_38);
        piVar4 = (int*)param_1->y();
        InterfaceToScreenPosition(this, (int*)pvVar3, piVar4, param_2);
        iVar2 = math::RoundFloatToInt(local_38);
        pvVar3 = param_1->SSOBeginPtr(pvVar3);
        iVar1 = *(int*)pvVar3;
        piVar4 = (int*)param_1->second();
        *piVar4 = iVar2 - iVar1;
        iVar2 = math::RoundFloatToInt(local_34);
        piVar4 = (int*)param_1->y();
        iVar1 = *piVar4;
        piVar4 = (int*)param_1->qw();
        *piVar4 = iVar2 - iVar1;
    }

    // 0x1008f4a00, 272 bytes, placed by class name and debug map
    // ScaleManager::InterfaceToScreenRect(math::Rect<float>&, bool) const
    void ScaleManager::InterfaceToScreenRect(Rect* param_1, bool param_2) {
        vector* pvVar1;
        float* pfVar2;
        float local_34;
        float local_30;
        float local_2c;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        local_2c = *(float*)pvVar1;
        pfVar2 = (float*)param_1->second();
        local_34 = local_2c + *pfVar2;
        pfVar2 = (float*)param_1->y();
        local_2c = *pfVar2;
        pfVar2 = (float*)param_1->qw();
        local_30 = local_2c + *pfVar2;
        InterfaceToScreenPosition(this, (float*)(type*)&local_34, &local_30, param_2);
        pvVar1 = param_1->SSOBeginPtr((type*)&local_34);
        pfVar2 = (float*)param_1->y();
        InterfaceToScreenPosition(this, (float*)pvVar1, pfVar2, param_2);
        local_2c = local_34;
        pvVar1 = param_1->SSOBeginPtr(pvVar1);
        local_2c = local_2c - *(float*)pvVar1;
        pfVar2 = (float*)param_1->second();
        *pfVar2 = local_2c;
        local_2c = local_30;
        pfVar2 = (float*)param_1->y();
        local_2c = local_2c - *pfVar2;
        pfVar2 = (float*)param_1->qw();
        *pfVar2 = local_2c;
    }

    // 0x1008f4b10, 16 bytes, placed by class name and debug map
    // ScaleManager::SetTmpDPI(int, bool)
    void ScaleManager::SetTmpDPI(int param_1, bool param_2) {
        m_tmpDPI = param_1;
        SetInterfaceDPIOverride(this, param_1, param_2);
    }

} // namespace jag::graphics
