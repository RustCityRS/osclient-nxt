// libs/graphics/runetek7/gui/debug/sections/DebugOverlayOcclusion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: DebugOverlayOcclusion::~DebugOverlayOcclusion() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DebugOverlayOcclusion::~DebugOverlayOcclusion() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008a6d10
    DebugOverlayOcclusion::DebugOverlayOcclusion(const graphics::EffectManager& effectManager,
                                                 DebugOverlay& debugOverlay, bool arg3)
        : DebugOverlaySection(debugOverlay, 18, arg3), field_128(effectManager) {}

    // 0x1008a6d50
    void DebugOverlayOcclusion::Draw(unsigned long long arg1, int arg2, int arg3) {
        unsigned int arg1_00;
        unsigned int local_26c;

        Callstack local_268;
        new (&local_268[0].field_8) eastl::fixed_string<char, 512>();
        auto pRVar9 = field_8->end();
        auto pNVar10 = pRVar9->GetGeometryPass();
        auto pOVar11 = pNVar10->GetScreen();
        pRVar9 = (RT7Core*)field_8->end();
        pNVar10 = (NXTPixToolkit*)pRVar9->GetForwardLightingPass();
        auto pOVar12 = pNVar10->GetScreen();
        pRVar9 = (RT7Core*)field_8->end();
        bool cVar1 = ((SceneRenderPass*)pRVar9->GetGeometryPass())->GetOcclusionEnabled();
        if (cVar1) {
            pOVar12 = pOVar11;
        }
        char* pcVar14 = "Forward";
        if (cVar1) {
            pcVar14 = "Geometry";
        }
        uint32_t uVar2 = pOVar12->GetCullingStatsAvgTotal();
        unsigned int uVar3 = pOVar12->GetCullingStatsAvgIn();
        unsigned int uVar4 = pOVar12->GetCullingStatsAvgPassed();
        int iVar5 = pOVar12->GetCullingStatsAvgTotal();
        int iVar6 = pOVar12->GetCullingStatsAvgPassed();
        local_268[0].field_8.sprintf("%s Occlusion: Total %u, In: %u, Passed: %u, Culled: %u", pcVar14, uVar2,
                                     (unsigned long)uVar3, (unsigned long)uVar4, iVar5 - iVar6);
        local_268 = callstack::Callstack();
        iVar5 = pOVar12->GetCullingStatsAvgPassed();
        iVar6 = pOVar12->GetCullingStatsAvgTotal();
        uVar3 = pOVar12->GetCullingStatsAvgTotal();
        local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, iVar6, uVar3 >> 1);
        iVar5 = local_268.GetX();
        DrawTextString((int)&local_268 + 8, arg2, arg3, iVar5, 255);
        iVar5 = field_112;
        field_108 = iVar5;
        pRVar9 = (RT7Core*)field_8->end();
        pNVar10 = (NXTPixToolkit*)pRVar9->GetWaterReflectionPass();
        pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
        uVar3 = pOVar12->GetCullingStatsAvgTotal();
        uVar4 = pOVar12->GetCullingStatsAvgIn();
        unsigned int uVar7 = pOVar12->GetCullingStatsAvgPassed();
        iVar6 = pOVar12->GetCullingStatsAvgTotal();
        int iVar8 = pOVar12->GetCullingStatsAvgPassed();
        local_268[0].field_8.sprintf("Reflection Occlusion: Total %u, In: %u, Passed: %u, Culled: %u",
                                     (unsigned long)uVar3, (unsigned long)uVar4, (unsigned long)uVar7,
                                     (unsigned long)(unsigned int)(iVar6 - iVar8));
        local_268 = callstack::Callstack();
        iVar6 = pOVar12->GetCullingStatsAvgPassed();
        iVar8 = pOVar12->GetCullingStatsAvgTotal();
        uVar3 = pOVar12->GetCullingStatsAvgTotal();
        local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar6, iVar8, uVar3 >> 1);
        uVar3 = iVar5 + arg3;
        iVar5 = local_268.GetX();
        DrawTextString((int)&local_268 + 8, arg2, uVar3, iVar5, 255);
        iVar5 = field_112;
        field_108 = field_108 + iVar5;
        auto this_01 = field_128->GetEffect<graphics::PlanarReflection>(30);
        auto this_02 = this_01->GetSunlightCsmManager();
        long lVar13 = this_02->GetHeadList();
        if (*(int*)(lVar13 + 8) == 0) {
            uVar4 = 0;
            local_26c = 0;
            uVar7 = 0;
        } else {
            arg1_00 = 0;
            uVar7 = 0;
            local_26c = 0;
            uVar4 = 0;
            do {
                pNVar10 = (NXTPixToolkit*)this_02->GetShadowMapCascade(arg1_00);
                if (pNVar10 == nullptr) {
                    LogAssert("pCascade",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/debug/sections/DebugOverlayOcclusion.cpp",
                              72, nullptr);
                }
                pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
                iVar6 = pOVar12->GetCullingStatsAvgPassed();
                uVar4 = uVar4 + iVar6;
                pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
                iVar6 = pOVar12->GetCullingStatsAvgIn();
                local_26c = local_26c + iVar6;
                pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
                iVar6 = pOVar12->GetCullingStatsAvgTotal();
                uVar7 = uVar7 + iVar6;
                arg1_00 = arg1_00 + 1;
                lVar13 = this_02->GetHeadList();
            } while (arg1_00 < *(unsigned int*)(lVar13 + 8));
        }
        local_268[0].field_8.sprintf("Shadow Occlusion: Total %u, In: %u, Passed: %u, Culled: %u", (unsigned long)uVar7,
                                     (unsigned long)local_26c, (unsigned long)uVar4, (unsigned long)(uVar7 - uVar4));
        local_268 = callstack::Callstack();
        local_268 =
            math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(uVar4, local_26c, local_26c >> 1);
        iVar6 = local_268.GetX();
        DrawTextString((int)&local_268 + 8, arg2, iVar5 + uVar3, iVar6, 255);
        field_108 = field_108 + field_112;
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a72d0
    uint8_t DebugOverlayOcclusion::Update(unsigned long long arg1) {
        return 1;
    }

    // 0x1008a72e0
    void DebugOverlayOcclusion::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Occlusion Info", field_120);
    }

} // namespace jag
