// libs/graphics/runetek7/effects/irradiance/LightProbe.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "LightProbe.h"

namespace jag::graphics {
    // 0x100d4bafc, 4 bytes, __const
    float LightProbe::OVERBRIGHT_DEFAULT = 0.25f;

    // 0x100f44a80, 48 bytes, __data
    LightProbe::m_LightProbeRenderModes__ = {0, 0, 14512292, 1, 1, 0, 14755552, 1, 2, 0, 14755561, 1};

    // 0x103bc07b0, 16 bytes, __common; set at startup by ___cxx_global_var_init.195
    StringEnum LightProbe::m_LightProbeRenderModes =
        StringEnum((StringEnumEntry*)&LightProbe::m_LightProbeRenderModes__, 3);

    // 0x103bc07c0, 8 bytes, __common; zero-initialised
    LightProbe::m_LightProbeRenderMode;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    LightProbe::GetMaterial();

    // 0x10047dbc0: the linker folded this into PointLightShadows::GetPointLightSMManager(), which has identical code
    shared_ptr LightProbe::GetEnvMapRT();

    // 0x10092f1f0, 144 bytes, base-object constructor, placed by class name and debug map
    // LightProbe::LightProbe()
    void LightProbe::LightProbe() {
        new (this) Drawable(4);
        field_0 = &PTR__LightProbe_100f19dc0;
        new (&field_12) math::Vector3T<int>();
        new (field_32) LightProbeMaterial();
        new (m_envMapRT, (_func_decltype_nullptr*)4) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_704) IrradianceEffect();
        field_32->Init();
    }

    // 0x10092f2d0, 16 bytes, complete-object constructor, placed by class name
    // LightProbe::LightProbe(): jumps straight to the base-object constructor

    // 0x10092f2e0, 160 bytes, base-object destructor, placed by class name
    // LightProbe::~LightProbe()
    void LightProbe::~LightProbe() {
        field_0 = &PTR__LightProbe_100f19dc0;
        if (!operator==((shared_ptr*)m_envMapRT, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_worldEnvMapRT == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      30, "Rendering resources should have been recycled back to LightProbeManager!");
        }
        m_envMapRT->~shared_ptr();
        field_32->~LightProbeMaterial();
        ~AutoSingleton();
    }

    // 0x10092f380, 16 bytes, complete-object destructor, placed by class name
    // LightProbe::~LightProbe(): jumps straight to the base-object destructor

    // 0x10092f390, 32 bytes, deleting destructor, placed by class name
    // LightProbe::~LightProbe()
    void LightProbe::~LightProbe() {
        ~LightProbe(this);
        operator_delete(this);
    }

    // 0x10092f3b0, 32 bytes, placed by class name
    // LightProbe::Initialise(LightProbeRenderer&)
    void LightProbe::Initialise(LightProbeRenderer* param_1) {
        param_1->InitialiseLightProbe(this);
    }

    // 0x10092f4e0, 192 bytes, placed by class name
    // LightProbe::SetRenderingResources(shared_ptr<render::BufferedRenderTargets>&)
    void LightProbe::SetRenderingResources(shared_ptr* param_1) {
        bool bVar1;

        bVar1 = operator==((shared_ptr*)m_envMapRT, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_worldEnvMapRT == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      40, "LightProbe has already been initialised");
        }
        bVar1 = operator!=(param_1, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("worldEnvMapRT != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      41, "Cannot initialise LightProbe with null pointers");
        }
        shared_ptr<render::BufferedRenderTargets>::operator=((shared_ptr<render::BufferedRenderTargets>*)m_envMapRT,
                                                             param_1);
        if (IsInit(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsInit()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      45, "Rendering resources not initialised!");
        }
    }

    // 0x10092f5f0, 96 bytes, placed by class name
    // LightProbe::IsInit() const
    uint LightProbe::IsInit() {
        uint uVar2;
        BufferedRenderTargets* this_00;
        RenderTargets* this_01;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;

        uVar2 = 0;
        if (operator!=((shared_ptr*)m_envMapRT, (_func_decltype_nullptr*)0)) {
            this_00 = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator->(
                (shared_ptr<render::BufferedRenderTargets>*)m_envMapRT);
            this_01 = (RenderTargets*)this_00->GetWriteRT();
            this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_01->GetColourTargetTextures();
            uVar2 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_02);
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x10092f690, 448 bytes, placed by class name
    // LightProbe::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void LightProbe::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                            EffectManager* param_4) {
        undefined8 uVar1;
        PointLightShadows* pPVar2;
        char cVar3;
        undefined4 uVar4;
        long* plVar6;
        long* plVar7;
        CommandLine* this_00;
        LightProbe_DE* pLVar8;
        RenderMaterial* pRVar9;
        EffectManager* pEVar10;
        undefined8 local_68;
        unique_ptr<DrawableElement, DrawableElementDeleter> local_60[8];
        EffectManager* local_58;
        RT7Core* local_50;
        RenderMaterial* local_48;
        DrawableQueue* local_40;
        PointLightShadows* local_38;

        if ((m_LightProbeRenderMode != 0) &&
            (local_58 = param_4, local_50 = param_2, local_40 = param_1, local_38 = (PointLightShadows*)this,
             cVar3 = IsInit(this), cVar3 != '\0')) {
            plVar6 = (long*)(&param_3->field_520)->HeapBeginPtr();
            plVar7 = (long*)(&param_3->field_520)->end();
            if (plVar6 != plVar7) {
                pRVar9 = (RenderMaterial*)&local_38->field_32;
                local_48 = pRVar9;
                do {
                    if (*plVar6 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("renderPass",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/effects/irradiance/LightProbe.cpp",
                                  64, (char*)0);
                    }
                    uVar4 = (*plVar6)->GetPos();
                    pRVar9->GetRenderPassEffect(uVar4);
                    new (&local_68) math::Vector2T<int>();
                    if ((*plVar6)->GetPos() - 3U < 2) {
                        this_00 = (CommandLine*)local_40->GetDrawableGroup(uVar4, 0);
                        this_00->GetPos();
                        pEVar10 = local_58;
                        UpdateForwardPassEffect();
                        pLVar8 =
                            DrawableElementPool<LightProbe_DE>::Create<>((DrawableElementPool<LightProbe_DE>*)this_00);
                        uVar1 = local_68;
                        std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                            local_60, (DrawableElement*)pLVar8);
                        uVar4 = (*plVar6)->GetPos();
                        local_40->AddDrawable(uVar1, local_60, local_38, 0, uVar4, pEVar10);
                        std::unique_ptr<DrawableElement, DrawableElementDeleter>::~unique_ptr(local_60);
                        pPVar2 = local_38;
                        pRVar9 = local_48;
                        if (pLVar8 != (LightProbe_DE*)0) {
                            uVar4 = local_38->GetPos();
                            *(undefined4*)&pLVar8->field_96 = uVar4;
                            pLVar8->field_104 = pPVar2;
                        }
                    }
                    plVar6 = plVar6 + 1;
                } while (plVar6 != plVar7);
            }
        }
    }

    // 0x10092f8c0, 336 bytes, placed by class name
    // LightProbe::UpdateForwardPassEffect(DrawableSortKey, DrawableSortKeyType, RenderPassEffect&, RT7Core&, SceneViewData const&, EffectManager const&)
    void LightProbe::UpdateForwardPassEffect(undefined8 param_1_00, undefined8 param_2, undefined4 param_3,
                                             RenderPassEffect* param_4, RT7Core* param_5, undefined8 param_6,
                                             EffectManager* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        EntityHighlight** ppEVar3;
        undefined1 auVar4[16];
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_30[8];

        param_4->Set(38, m_LightProbeRenderMode == 2);
        auVar4 = param_1->BuildShaderEffectList(param_4);
        param_4->field_16 = auVar4._0_8_;
        param_4->field_24 = auVar4._8_8_;
        uVar1 = param_5->GetShaderManager();
        uVar2 = LightProbeRenderer::GetVertexDecl();
        param_4->UpdateShader(param_1, uVar1, 22, uVar2, 4294967295, 1);
        switch (param_3) {
        case 0:
            ppEVar3 = (EntityHighlight**)144115188092567552;
            break;
        case 1:
            ppEVar3 = (EntityHighlight**)216172782097006592;
            break;
        case 2:
            ppEVar3 = (EntityHighlight**)144115188075856127;
            break;
        case 3:
            ppEVar3 = (EntityHighlight**)144116287587483392;
            break;
        case 4:
            ppEVar3 = (EntityHighlight**)50266112;
            break;
        case 5:
            ppEVar3 = (EntityHighlight**)18446744069448138752;
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_30, ppEVar3, extraout_RDX);
    }

    // 0x10094d020, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.195
    void ___cxx_global_var_init_195() {
        new (&LightProbe::m_LightProbeRenderModes)
            StringEnum((StringEnumEntry*)&LightProbe::m_LightProbeRenderModes__, 3);
        ___cxa_atexit(StringEnum::~StringEnum, &LightProbe::m_LightProbeRenderModes, 4294967296);
    }

} // namespace jag::graphics
