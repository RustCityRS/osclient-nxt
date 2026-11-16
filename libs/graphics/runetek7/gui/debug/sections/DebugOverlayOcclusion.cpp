// libs/graphics/runetek7/gui/debug/sections/DebugOverlayOcclusion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayOcclusion::~DebugOverlayOcclusion();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DebugOverlayOcclusion::~DebugOverlayOcclusion();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayOcclusion::~DebugOverlayOcclusion();

    // 0x1008a6d10, 48 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayOcclusion::DebugOverlayOcclusion(graphics::EffectManager const&, DebugOverlay&, bool)
    void DebugOverlayOcclusion::DebugOverlayOcclusion(EffectManager* param_1, DebugOverlay* param_2, bool param_3) {
        new (this) DebugOverlaySection(param_2, 18);
        field_0 = &PTR__ScriptOption_100f180a0;
        field_128 = param_1;
    }

    // 0x1008a6d40, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayOcclusion::DebugOverlayOcclusion(graphics::EffectManager const&, DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a6d50, 1184 bytes, placed by class name and debug map
    // DebugOverlayOcclusion::Draw(unsigned long long, int, int)
    void DebugOverlayOcclusion::Draw(ulonglong param_1, int param_2, int param_3) {
        char cVar1;
        undefined4 uVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        RT7Core* pRVar9;
        NXTPixToolkit* pNVar10;
        OcclusionManager* pOVar11;
        OcclusionManager* pOVar12;
        SceneRenderPass* this_00;
        SunlightShadows* this_01;
        NPCType* this_02;
        long lVar13;
        char* pcVar14;
        uint local_26c;
        Callstack local_268[35];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        callstack::Callstack::Callstack(local_268);
        new (&local_268[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        pRVar9 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        pNVar10 = (NXTPixToolkit*)pRVar9->GetGeometryPass();
        pOVar11 = (OcclusionManager*)pNVar10->GetScreen();
        pRVar9 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        pNVar10 = (NXTPixToolkit*)pRVar9->GetForwardLightingPass();
        pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
        pRVar9 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_00 = (SceneRenderPass*)pRVar9->GetGeometryPass();
        cVar1 = this_00->GetOcclusionEnabled();
        if (cVar1 != '\0') {
            pOVar12 = pOVar11;
        }
        pcVar14 = "Forward";
        if (cVar1 != '\0') {
            pcVar14 = "Geometry";
        }
        uVar2 = pOVar12->GetCullingStatsAvgTotal();
        uVar3 = pOVar12->GetCullingStatsAvgIn();
        uVar4 = pOVar12->GetCullingStatsAvgPassed();
        iVar5 = pOVar12->GetCullingStatsAvgTotal();
        iVar6 = pOVar12->GetCullingStatsAvgPassed();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, "%s Occlusion: Total %u, In: %u, Passed: %u, Culled: %u", pcVar14, uVar2,
            (ulong)uVar3, (ulong)uVar4, iVar5 - iVar6);
        callstack::Callstack::Callstack(local_268);
        iVar5 = pOVar12->GetCullingStatsAvgPassed();
        iVar6 = pOVar12->GetCullingStatsAvgTotal();
        uVar3 = pOVar12->GetCullingStatsAvgTotal();
        local_268->SetRedGreenGradient(iVar5, iVar6, uVar3 >> 1);
        uVar2 = local_268->GetX();
        (*(code*)field_0[7])(this, &local_268[0].field_8, param_2, param_3, uVar2, 255, 2);
        iVar5 = field_112;
        field_108 = iVar5;
        pRVar9 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        pNVar10 = (NXTPixToolkit*)pRVar9->GetWaterReflectionPass();
        pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
        uVar3 = pOVar12->GetCullingStatsAvgTotal();
        uVar4 = pOVar12->GetCullingStatsAvgIn();
        uVar7 = pOVar12->GetCullingStatsAvgPassed();
        iVar6 = pOVar12->GetCullingStatsAvgTotal();
        iVar8 = pOVar12->GetCullingStatsAvgPassed();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, "Reflection Occlusion: Total %u, In: %u, Passed: %u, Culled: %u", (ulong)uVar3,
            (ulong)uVar4, (ulong)uVar7, (ulong)(uint)(iVar6 - iVar8));
        callstack::Callstack::Callstack(local_268);
        iVar6 = pOVar12->GetCullingStatsAvgPassed();
        iVar8 = pOVar12->GetCullingStatsAvgTotal();
        uVar3 = pOVar12->GetCullingStatsAvgTotal();
        local_268->SetRedGreenGradient(iVar6, iVar8, uVar3 >> 1);
        iVar5 = iVar5 + param_3;
        uVar2 = local_268->GetX();
        (*(code*)field_0[7])(this, &local_268[0].field_8, param_2, iVar5, uVar2, 255, 2);
        iVar6 = field_112;
        field_108 = field_108 + iVar6;
        this_01 = (SunlightShadows*)graphics::EffectManager::GetEffect<graphics::PlanarReflection>(field_128, 30);
        this_02 = (NPCType*)this_01->GetSunlightCsmManager();
        lVar13 = this_02->GetHeadList();
        if (*(int*)(lVar13 + 8) == 0) {
            uVar3 = 0;
            local_26c = 0;
            uVar4 = 0;
        } else {
            uVar7 = 0;
            uVar4 = 0;
            local_26c = 0;
            uVar3 = 0;
            do {
                pNVar10 = (NXTPixToolkit*)this_02->GetShadowMapCascade(uVar7);
                if (pNVar10 == (NXTPixToolkit*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pCascade",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/debug/sections/DebugOverlayOcclusion.cpp",
                              72, (char*)0);
                }
                pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
                iVar8 = pOVar12->GetCullingStatsAvgPassed();
                uVar3 = uVar3 + iVar8;
                pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
                iVar8 = pOVar12->GetCullingStatsAvgIn();
                local_26c = local_26c + iVar8;
                pOVar12 = (OcclusionManager*)pNVar10->GetScreen();
                iVar8 = pOVar12->GetCullingStatsAvgTotal();
                uVar4 = uVar4 + iVar8;
                uVar7 = uVar7 + 1;
                lVar13 = this_02->GetHeadList();
            } while (uVar7 < *(uint*)(lVar13 + 8));
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, "Shadow Occlusion: Total %u, In: %u, Passed: %u, Culled: %u", (ulong)uVar4,
            (ulong)local_26c, (ulong)uVar3, (ulong)(uVar4 - uVar3));
        callstack::Callstack::Callstack(local_268);
        local_268->SetRedGreenGradient(uVar3, local_26c, local_26c >> 1);
        uVar2 = local_268->GetX();
        (*(code*)field_0[7])(this, &local_268[0].field_8, param_2, iVar6 + iVar5, uVar2, 255, 2);
        field_108 = field_108 + field_112;
        /* WARNING: Subroutine does not return */
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a72d0, 16 bytes, placed by class name
    // DebugOverlayOcclusion::Update(unsigned long long)
    undefined1 DebugOverlayOcclusion::Update(ulonglong param_1) {
        return 1;
    }

    // 0x1008a72e0, 32 bytes, placed by class name
    // DebugOverlayOcclusion::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayOcclusion::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Occlusion Info", &field_120);
    }

} // namespace jag
