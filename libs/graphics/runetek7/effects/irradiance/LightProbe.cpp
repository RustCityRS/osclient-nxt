// libs/graphics/runetek7/effects/irradiance/LightProbe.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "LightProbe.h"

namespace jag::graphics {
    // 0x100d4bafc
    float LightProbe::OVERBRIGHT_DEFAULT = 0.25f;

    // 0x100f44a80
    int32_t LightProbe::m_LightProbeRenderModes__[12] = {0, 0, 14512292, 1, 1, 0, 14755552, 1, 2, 0, 14755561, 1};

    // 0x103bc07b0, set at startup by ___cxx_global_var_init.195
    StringEnum LightProbe::m_LightProbeRenderModes =
        StringEnum((StringEnumEntry*)&LightProbe::m_LightProbeRenderModes__, 3);

    // 0x103bc07c0
    int64_t LightProbe::m_LightProbeRenderMode;

    // 0x10002d850: LightProbe::GetMaterial() has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10047dbc0, the same machine code as PointLightShadows::GetPointLightSMManager()
    uint8_t* LightProbe::GetEnvMapRT() {
        return m_envMapRT;
    }

    // 0x10092f1f0
    LightProbe::LightProbe() : Drawable(4) {
        field_32->Init();
    }

    // 0x10092f2e0
    LightProbe::~LightProbe() {
        if (!*m_envMapRT == nullptr) {
            LogAssert("m_worldEnvMapRT == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      30, "Rendering resources should have been recycled back to LightProbeManager!");
        }
        m_envMapRT->~shared_ptr();
        field_32->~LightProbeMaterial();
    }

    // 0x10092f3b0
    void LightProbe::Initialise(LightProbeRenderer& lightProbeRenderer) {
        lightProbeRenderer.InitialiseLightProbe(*this);
    }

    // 0x10092f4e0
    void LightProbe::SetRenderingResources(shared_ptr<render::BufferedRenderTargets>& bufferedRenderTargets) {

        if (!(*m_envMapRT == nullptr)) {
            LogAssert("m_worldEnvMapRT == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      40, "LightProbe has already been initialised");
        }
        if (!(bufferedRenderTargets != nullptr)) {
            LogAssert("worldEnvMapRT != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      41, "Cannot initialise LightProbe with null pointers");
        }
        *m_envMapRT = bufferedRenderTargets;
        if (IsInit() == '\0') {
            LogAssert("IsInit()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbe.cpp",
                      45, "Rendering resources not initialised!");
        }
    }

    // 0x10092f5f0
    bool LightProbe::IsInit() const {
        RenderTargets* this_01;

        unsigned int uVar2 = 0;
        if (*m_envMapRT != nullptr) {
            this_01 = ((BufferedRenderTargets*)(*m_envMapRT).operator->())->GetWriteRT();
            uVar2 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                         this_01->GetColourTargetTextures())
                        ->empty();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x10092f690
    void LightProbe::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager) {
        unique_ptr<DrawableElement, DrawableElementDeleter>* drawableElement;
        PointLightShadows* pPVar1;
        bool cVar2;
        RenderPassType renderPassType;
        unsigned int uVar4;
        uint32_t uVar5;
        long* plVar6;
        long* plVar7;
        SceneViewData* sceneViewData_00;
        CommandLine* this_00;
        LightProbe_DE* drawableElement_00;
        RenderPassEffect* renderPassEffect;
        RenderMaterial* this_01;
        DrawableSortKey drawableSortKey;
        unique_ptr<DrawableElement, DrawableElementDeleter>* local_68;
        uint8_t local_60[16];
        RT7Core* local_50;
        RenderMaterial* local_48;
        DrawableQueue* local_40;
        PointLightShadows* local_38;

        if ((m_LightProbeRenderMode != 0) &&
            (local_60._8_8_ = effectManager, local_50 = rt7Core, local_40 = drawableQueue,
             local_38 = (PointLightShadows*)this, cVar2 = IsInit(), cVar2)) {
            plVar6 = (long*)sceneViewData.field_520.HeapBeginPtr();
            plVar7 = (long*)sceneViewData.field_520.end();
            if (plVar6 != plVar7) {
                this_01 = (RenderMaterial*)&local_38->field_32;
                local_48 = this_01;
                do {
                    if (*plVar6 == 0) {
                        LogAssert("renderPass",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/effects/irradiance/LightProbe.cpp",
                                  64, nullptr);
                    }
                    renderPassType = (*plVar6)->GetPos();
                    sceneViewData_00 = (SceneViewData*)this_01->GetRenderPassEffect(renderPassType);
                    new (&local_68) math::Vector2T();
                    if ((*plVar6)->GetPos() - 3U < 2) {
                        renderPassEffect = (RenderPassEffect*)(unsigned long)renderPassType;
                        this_00 = local_40->GetDrawableGroup(renderPassType, 0);
                        uVar4 = this_00->GetPos();
                        drawableSortKey = (DrawableSortKey)local_60._8_8_;
                        UpdateForwardPassEffect((DrawableSortKey)local_60._8_8_, (DrawableSortKeyType)this_00,
                                                renderPassEffect, (RT7Core*)(unsigned long)uVar4, sceneViewData_00,
                                                (EffectManager*)local_50);
                        drawableElement_00 = DrawableElementPool<LightProbe_DE>::Create<>();
                        drawableElement = local_68;
                        local_60->unique_ptr<true, void>(drawableElement_00);
                        (*plVar6)->GetPos();
                        local_40->AddDrawable(drawableSortKey, *drawableElement, local_60, (DrawableGroupType)local_38,
                                              0);
                        pPVar1 = local_38;
                        this_01 = local_48;
                        if (drawableElement_00 != nullptr) {
                            uVar5 = local_38->GetPos();
                            *(uint32_t*)&drawableElement_00->field_96 = uVar5;
                            drawableElement_00->field_104 = pPVar1;
                        }
                    }
                    plVar6 = plVar6 + 1;
                } while (plVar6 != plVar7);
            }
        }
    }

    // 0x10092f8c0
    void LightProbe::UpdateForwardPassEffect(DrawableSortKey drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                             RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                             const SceneViewData& sceneViewData, const EffectManager& effectManager) {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        uint8_t auVar2[16];
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_30[8];

        sceneViewData.Set(38, m_LightProbeRenderMode == 2);
        auVar2 = drawableSortKey->BuildShaderEffectList(sceneViewData);
        *(uint8_t(*)[16]) & sceneViewData.field_16 = auVar2;
        auto pSVar1 = effectManager.GetShaderManager();
        auto renderPassType = LightProbeRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(sceneViewData, *drawableSortKey, (ShaderType)pSVar1, *22, renderPassType, 255);
        switch ((unsigned long)rt7Core & 4294967295) {
        case 0:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)144115188092567552;
            break;
        case 1:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)216172782097006592;
            break;
        case 2:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)144115188075856127;
            break;
        case 3:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)144116287587483392;
            break;
        case 4:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)50266112;
            break;
        case 5:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)18446744069448138752;
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_30, playerDataComparator);
    }

} // namespace jag::graphics
