// libs/graphics/runetek7/postprocess/EquirectangularRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "EquirectangularRenderer.h"

namespace jag::graphics {
    // 0x1003fab80: EquirectangularRenderer::GetEnabled() has the same machine code as game::WaterType::OverrideDefaultWaterType() const

    // 0x1007de850
    EquirectangularRenderer::EquirectangularRenderer(RT7Core* rt7Core)
        : render::RenderDeviceCallback(true, 1), field_16(rt7Core) {
        auto groundDecor = rt7Core->GetEquirectangularEffect();
        new (&field_24) shared_ptr(groundDecor);
        new (field_40) shared_ptr();
        m_enabled = false;
        *(uint64_t*)&field_60 = 72340172821234688;
        field_68 = 257;
        field_72.unique_ptr<true, void>();
        if (rt7Core == nullptr) {
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/EquirectangularRenderer.cpp",
                      17, nullptr);
        }
    }

    // 0x1007de970
    EquirectangularRenderer::~EquirectangularRenderer() {
        DestroyRenderingResources();
        field_72.~unique_ptr();
        field_40->~shared_ptr();
        field_24.~shared_ptr();
    }

    // 0x1007de9e0
    void EquirectangularRenderer::DestroyRenderingResources() {
        auto this_00 = field_24.operator->();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        this_00->SetEnvMapRT(local_30);
        ((RenderTargetsManager*)field_16->GetRenderTargetsManager())->Unregister(*field_40);
    }

    // 0x1007dea90
    uint64_t EquirectangularRenderer::CreateRenderingResources() {
        uint8_t* this_00;
        int iVar1;
        int* piVar3;
        char* str;
        RenderTargets* this_01;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_02;
        long* plVar4;
        unsigned long in_RSI;
        array<render::Texture::Desc, 2ul> local_f8;
        uint8_t local_78[80];

        if (m_enabled != false) {
            CalculateCubeMapRes();
            local_f8 = std::array<render::Texture::Desc, 2ul>();
            iVar1 = field_60;
            piVar3 = &local_f8[in_RSI];
            *piVar3 = iVar1;
            piVar3[1] = iVar1;
            piVar3[3] = 6;
            *(uint8_t*)(piVar3 + 8) = 0;
            *(uint8_t*)((long)piVar3 + 57) = 1;
            new (local_78) render::Texture::Desc();
            local_78._0_4_ = field_60;
            local_78._12_4_ = 12;
            local_78[32] = 0;
            local_78[57] = 0;
            local_78._4_4_ = local_78._0_4_;
            str = (char*)field_16->GetRenderTargetsManager();
            ((local_78 + 64))
                ->Register(str, 14649434, *34067, (int)&local_f8, DAT_00000001, (unsigned int)(Desc*)local_78, false);
            this_00 = field_40;
            *this_00 = (*((local_78 + 64)));
            ((local_78 + 64))->~shared_ptr();
            if (this_00->operator_cast_to_bool() != '\0') {
                this_01 = (RenderTargets*)(*this_00).operator->();
                this_02 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              this_01->GetColourTargetTextures();
                plVar4 = (long*)(*this_02)[0];
                if (*plVar4 != 0) {
                    ((EquirectangularEffect*)field_24.operator->())->SetEnvMapRT(*this_00);
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1007debe0
    void EquirectangularRenderer::CalculateCubeMapRes() {
        int iVar1 = field_16->GetBackBufferWidth();
        int iVar2 = field_16->GetBackBufferHeight();
        if (iVar2 < iVar1) {
            iVar2 = iVar1;
        }
        field_60 = iVar2 / 2;
    }

    // 0x1007dec30
    void EquirectangularRenderer::SetEnabled(bool arg1, EffectManager& effectManager) {
        uint8_t* puVar3;
        ReturnValue local_1378;
        fixed_map<EffectType, bool, 121ul> local_1370;

        m_enabled = arg1;
        long lVar2 = field_16->GetPostProcessController()->GetCurrentConfig();
        *(bool*)(lVar2 + 552) = arg1;
        bool bVar1 = m_enabled;
        ((NXTPixToolkit*)field_16->GetForwardOcclusionRenderPass())->GetScreen();
        OcclusionManager::m_OcclusionEnabled = bVar1 ^ 1;
        auto this_02 = effectManager.GetEffect<SunlightDirectLighting>(30);
        ((DirLightCsmManager*)this_02->GetSunlightCsmManager())
            ->SetCascadeFarClip(*(float*)(&DAT_100d4aba8 + (unsigned long)(m_enabled == false) * 4));
        if (m_enabled == false) {
            lVar2 = field_72.get();
            if (lVar2 != 0) {
                field_72.reset(nullptr);
            }
            DestroyRenderingResources();
        } else {
            local_1370 = eastl::fixed_map<EffectType, bool, 121ul>();
            local_1378._0_1_ = 108;
            puVar3 = &local_1370[local_1378];
            *puVar3 = 0;
            local_1378._0_1_ = 28;
            puVar3 = &local_1370[local_1378];
            *puVar3 = 0;
            local_1378._0_1_ = 110;
            puVar3 = &local_1370[local_1378];
            *puVar3 = 0;
            local_1378._0_1_ = 50;
            puVar3 = &local_1370[local_1378];
            *puVar3 = 0;
            bucket_make_unique<EffectStateSaveRestore, EffectManager&, eastl::fixed_map<EffectType, bool, 121ul>&>(
                &local_1378, effectManager, &local_1370);
            field_72 = local_1378;
            CreateRenderingResources();
        }
    }

    // 0x1007deef0
    void EquirectangularRenderer::OnWindowResize(const math::Rect<unsigned int>& rect) {
        DestroyRenderingResources();
        CreateRenderingResources();
    }

    // 0x1007def10
    void EquirectangularRenderer::RegisterTweakVars(tweak::Container& container, EffectManager& effectManager) {
        char* str;
        shared_ptr<tweak::Container> local_138;
        function<void(tweak::Event const&)> local_f8[32];
        long local_38;

        local_138.AddGroup(container);
        auto pCVar1 = local_138.operator->();
        std::function<void(tweak::Event const&)>::function<
            EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::__14, void>(local_f8,
                                                                                                       (__14*)this);
        pCVar1->AddCheckBox("Enable Spherical Camera", *local_f8, false);
        pCVar1 = (Container*)local_138.operator->();
        std::function<void(tweak::Event const&)>::function<
            EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::__15, void>(local_f8,
                                                                                                       (__15*)this);
        pCVar1->AddSlider("Cubemap resolution", 256.0, 4096.0, 256.0, *local_f8);
        new (local_f8) eastl::string("left");
        eastl::string local_d8("right");
        eastl::string local_b8("top");
        eastl::string local_98("bottom");
        eastl::string local_78("front");
        EquirectangularRenderer* local_140 = this;
        eastl::string local_58("back");
        unsigned long arg1 = 0;
        do {
            (*local_f8)[arg1];
            local_128 + (*((eastl::string*)"Show "));
            local_180 + local_128;
            pCVar1 = (Container*)local_138.operator->();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::function<void(tweak::Event const&)>::function<
                EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::__16, void>(
                (function<void(tweak::Event const&)>*)&local_128, (__16*)local_140);
            pCVar1->AddCheckBox(str, local_128, false);
            arg1 = arg1 + 1;
        } while (arg1 != 6);
    }

    // 0x1007fc860
    void EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
                                                    EffectManager&)::$_14::operator()(const tweak::Event& event) const {
        bool arg1;
        long* plVar1;

        EquirectangularRenderer* this_00 = *(EquirectangularRenderer**)this;
        if (event.field_16 == 1) {
            plVar1 = (long*)event.operator->();
            (**(void (**)(...))(*plVar1 + 128))(plVar1, this_00->m_enabled);
        }
        if (event.field_16 == 3) {
            plVar1 = (long*)event.operator->();
            arg1 = (bool)(**(void (**)(...))(*plVar1 + 120))(plVar1);
            SetEnabled(this_00, arg1, *(EffectManager**)(this + 8));
        }
    }

    // 0x1007fd1c0
    void EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
                                                    EffectManager&)::$_15::operator()(const tweak::Event& event) const {
        float fVar1;

        EquirectangularRenderer* this_00 = *(EquirectangularRenderer**)this;
        auto this_01 = event.end();
        if (event.field_16 == 1) {
            this_01->SetSlider<unsigned int>(this_00->field_60);
        }
        if (event.field_16 == 3) {
            fVar1 = (float)this_01->GetCurrentValue();
            this_00->field_60 = (int)fVar1;
            this_00->DestroyRenderingResources();
            this_00->CreateRenderingResources();
        }
    }

    // 0x1007fdbe0
    void EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
                                                    EffectManager&)::$_16::operator()(const tweak::Event& event) const {
        uint8_t uVar2;
        long* plVar3;
        uint8_t* puVar4;

        long lVar1 = *(long*)this;
        if (event.field_16 == 1) {
            plVar3 = (long*)event.operator->();
            puVar4 = (uint8_t*)(*((lVar1 + 64)))[(long)*(int*)(this + 8)];
            (**(void (**)(...))(*plVar3 + 128))(plVar3, *puVar4);
        }
        if (event.field_16 == 3) {
            plVar3 = (long*)event.operator->();
            uVar2 = (**(void (**)(...))(*plVar3 + 120))(plVar3);
            puVar4 = (uint8_t*)(*((lVar1 + 64)))[(long)*(int*)(this + 8)];
            *puVar4 = uVar2;
        }
    }

} // namespace jag::graphics
