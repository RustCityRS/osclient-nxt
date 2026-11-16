// libs/graphics/runetek7/postprocess/EquirectangularRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "EquirectangularRenderer.h"

namespace jag::graphics {
    // 0x1003fab80: the linker folded this into game::WaterType::OverrideDefaultWaterType() const, which has identical code
    EquirectangularRenderer::GetEnabled();

    // 0x1007de850, 224 bytes, base-object constructor, placed by class name and debug map
    // EquirectangularRenderer::EquirectangularRenderer(RT7Core*)
    void EquirectangularRenderer::EquirectangularRenderer(RT7Core* param_1) {
        shared_ptr* psVar1;

        new (this) render::RenderDeviceCallback(true, 1);
        field_0 = &PTR__EquirectangularRenderer_100f14d10;
        field_16 = param_1;
        psVar1 = (shared_ptr*)param_1->GetEquirectangularEffect();
        new (&field_24, psVar1) shared_ptr<oldscape::dash3d::Decor>();
        new (field_40, (_func_decltype_nullptr*)psVar1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_56 = false;
        *(undefined8*)&field_60 = 72340172821234688;
        field_68 = 257;
        std::unique_ptr<EffectStateSaveRestore, BucketDeleter<EffectStateSaveRestore>>::unique_ptr<true, void>(
            (unique_ptr<EffectStateSaveRestore, BucketDeleter<EffectStateSaveRestore>>*)&field_72);
        if (param_1 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/EquirectangularRenderer.cpp",
                      17, (char*)0);
        }
    }

    // 0x1007de960, 16 bytes, complete-object constructor, placed by class name and debug map
    // EquirectangularRenderer::EquirectangularRenderer(RT7Core*): jumps straight to the base-object constructor

    // 0x1007de970, 112 bytes, base-object destructor, placed by class name and debug map
    // EquirectangularRenderer::~EquirectangularRenderer()
    void EquirectangularRenderer::~EquirectangularRenderer() {
        field_0 = &PTR__EquirectangularRenderer_100f14d10;
        DestroyRenderingResources(this);
        (&field_72)->~unique_ptr();
        field_40->~shared_ptr();
        (&field_24)->~shared_ptr();
        ~RenderDeviceCallback();
    }

    // 0x1007de9e0, 128 bytes, placed by class name and debug map
    // EquirectangularRenderer::DestroyRenderingResources()
    void EquirectangularRenderer::DestroyRenderingResources() {
        EquirectangularEffect* this_00;
        RenderTargetsManager* this_01;
        shared_ptr local_30;

        this_00 = (EquirectangularEffect*)shared_ptr<postprocess::EquirectangularEffect>::operator->(
            (shared_ptr<postprocess::EquirectangularEffect>*)&field_24);
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_00->SetEnvMapRT(&local_30);
        local_30.~shared_ptr();
        this_01 = (RenderTargetsManager*)field_16->GetRenderTargetsManager();
        this_01->Unregister(field_40);
    }

    // 0x1007dea60, 16 bytes, complete-object destructor, placed by class name and debug map
    // EquirectangularRenderer::~EquirectangularRenderer(): jumps straight to the base-object destructor

    // 0x1007dea70, 32 bytes, deleting destructor, placed by class name and debug map
    // EquirectangularRenderer::~EquirectangularRenderer()
    void EquirectangularRenderer::~EquirectangularRenderer() {
        ~EquirectangularRenderer(this);
        operator_delete(this);
    }

    // 0x1007dea90, 336 bytes, placed by class name and debug map
    // EquirectangularRenderer::CreateRenderingResources()
    undefined8 EquirectangularRenderer::CreateRenderingResources() {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        int* piVar3;
        undefined8 uVar4;
        RenderTargets* this_01;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        long* plVar5;
        EquirectangularEffect* this_03;
        array<render::Texture::Desc, 2ul> local_f8[128];
        undefined1 local_78[80];

        if (field_56 != false) {
            CalculateCubeMapRes(this);
            std::array<render::Texture::Desc, 2ul>::array(local_f8);
            iVar1 = field_60;
            piVar3 = (int*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_f8);
            *piVar3 = iVar1;
            piVar3[1] = iVar1;
            piVar3[3] = 6;
            *(undefined1*)(piVar3 + 8) = 0;
            *(undefined1*)((long)piVar3 + 57) = 1;
            new (local_78) render::Texture::Desc();
            local_78._0_4_ = field_60;
            local_78._12_4_ = 12;
            local_78[32] = 0;
            local_78[57] = 0;
            local_78._4_4_ = local_78._0_4_;
            uVar4 = field_16->GetRenderTargetsManager();
            ((local_78 + 64))->Register(uVar4, "EquirectangularRTs", 34067, local_f8, 1, local_78, 0, 1);
            this_00 = field_40;
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                         (shared_ptr*)(local_78 + 64));
            ((local_78 + 64))->~shared_ptr();
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                this_01 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_00);
                this_02 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              this_01->GetColourTargetTextures();
                plVar5 = (long*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_02, 0);
                if (*plVar5 != 0) {
                    this_03 = (EquirectangularEffect*)shared_ptr<postprocess::EquirectangularEffect>::operator->(
                        (shared_ptr<postprocess::EquirectangularEffect>*)&field_24);
                    this_03->SetEnvMapRT(this_00);
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1007debe0, 64 bytes, placed by class name and debug map
    // EquirectangularRenderer::CalculateCubeMapRes()
    void EquirectangularRenderer::CalculateCubeMapRes() {
        int iVar1;
        int iVar2;

        iVar1 = field_16->GetBackBufferWidth();
        iVar2 = field_16->GetBackBufferHeight();
        if (iVar2 < iVar1) {
            iVar2 = iVar1;
        }
        field_60 = iVar2 / 2;
    }

    // 0x1007dec30, 464 bytes, placed by class name
    // EquirectangularRenderer::SetEnabled(bool, EffectManager&)
    void EquirectangularRenderer::SetEnabled(bool param_1, EffectManager* param_2) {
        bool bVar1;
        PostProcessController* this_00;
        long lVar2;
        NXTPixToolkit* this_01;
        SunlightShadows* this_02;
        DirLightCsmManager* this_03;
        undefined1* puVar3;
        jag local_1378[8];
        fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator> local_1370[4936];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_56 = param_1;
        this_00 = (PostProcessController*)field_16->GetPostProcessController();
        lVar2 = this_00->GetCurrentConfig();
        *(bool*)(lVar2 + 552) = param_1;
        bVar1 = field_56;
        this_01 = (NXTPixToolkit*)field_16->GetForwardOcclusionRenderPass();
        this_01->GetScreen();
        OcclusionManager::m_OcclusionEnabled = bVar1 ^ 1;
        this_02 = (SunlightShadows*)EffectManager::GetEffect<SunlightDirectLighting>(param_2);
        this_03 = (DirLightCsmManager*)this_02->GetSunlightCsmManager();
        this_03->SetCascadeFarClip(*(float*)(&DAT_100d4aba8 + (ulong)(field_56 == false) * 4));
        if (field_56 == false) {
            lVar2 = (&field_72)->get();
            if (lVar2 != 0) {
                (&field_72, (EffectStateSaveRestore*)0)->reset();
            }
            DestroyRenderingResources(this);
        } else {
            eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator>::fixed_map(
                local_1370);
            local_1378[0] = (jag)108;
            puVar3 =
                (undefined1*)eastl::map<EffectType, bool, eastl::less<EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<EffectType, bool, eastl::less<EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1370,
                           local_1378);
            *puVar3 = 0;
            local_1378[0] = (jag)28;
            puVar3 =
                (undefined1*)eastl::map<EffectType, bool, eastl::less<EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<EffectType, bool, eastl::less<EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1370,
                           local_1378);
            *puVar3 = 0;
            local_1378[0] = (jag)110;
            puVar3 =
                (undefined1*)eastl::map<EffectType, bool, eastl::less<EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<EffectType, bool, eastl::less<EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1370,
                           local_1378);
            *puVar3 = 0;
            local_1378[0] = (jag)50;
            puVar3 =
                (undefined1*)eastl::map<EffectType, bool, eastl::less<EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<EffectType, bool, eastl::less<EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1370,
                           local_1378);
            *puVar3 = 0;
            bucket_make_unique<
                EffectStateSaveRestore, EffectManager&,
                eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator>&>(
                local_1378, param_2, (fixed_map*)local_1370);
            std::unique_ptr<EffectStateSaveRestore, BucketDeleter<EffectStateSaveRestore>>::operator=(
                (unique_ptr<EffectStateSaveRestore, BucketDeleter<EffectStateSaveRestore>>*)&field_72,
                (unique_ptr*)local_1378);
            local_1378->~unique_ptr();
            CreateRenderingResources(this);
            eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator>::~fixed_map(
                local_1370);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007deef0, 32 bytes, placed by class name
    // EquirectangularRenderer::OnWindowResize(math::Rect<unsigned int> const&)
    void EquirectangularRenderer::OnWindowResize(Rect* param_1) {
        DestroyRenderingResources(this);
        CreateRenderingResources(this);
    }

    // 0x1007def10, 912 bytes, placed by class name
    // EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)
    void EquirectangularRenderer::RegisterTweakVars(Container* param_1, EffectManager* param_2) {
        Container* pCVar1;
        basic_string* pbVar2;
        char* pcVar3;
        ulong uVar4;
        allocator local_180[32];
        allocator local_160[8];
        allocator local_158[8];
        allocator local_150[8];
        allocator local_148[8];
        shared_ptr<tweak::Container> local_138[16];
        allocator local_128[48];
        function local_f8[32];
        eastl::string local_d8[32];
        eastl::string local_b8[32];
        eastl::string local_98[32];
        eastl::string local_78[32];
        eastl::string local_58[32];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_138->AddGroup(param_1);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_138);
        std::function<void(tweak::Event_const&)>::function<
            EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::__14, void>(local_f8, this,
                                                                                                       param_2);
        pCVar1->AddCheckBox("Enable Spherical Camera", local_f8, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_f8);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_138);
        std::function<void(tweak::Event_const&)>::function<
            EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::__15, void>(local_f8, this);
        pCVar1->AddSlider("Cubemap resolution", 256.0, 4096.0, 256.0, local_f8);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_f8);
        eastl::allocator::allocator(local_128, "EASTL basic_string");
        new (local_f8) eastl::string("left", local_128);
        eastl::allocator::allocator(local_180, "EASTL basic_string");
        eastl::string::basic_string(local_d8, "right", local_180);
        eastl::allocator::allocator(local_160, "EASTL basic_string");
        eastl::string::basic_string(local_b8, "top", local_160);
        eastl::allocator::allocator(local_158, "EASTL basic_string");
        eastl::string::basic_string(local_98, "bottom", local_158);
        eastl::allocator::allocator(local_150, "EASTL basic_string");
        eastl::string::basic_string(local_78, "front", local_150);
        eastl::allocator::allocator(local_148, "EASTL basic_string");
        eastl::string::basic_string(local_58, "back", local_148);
        uVar4 = 0;
        do {
            pbVar2 =
                (basic_string*)std::array<eastl::string, 6ul>::operator[]((array<eastl::string, 6ul>*)local_f8, uVar4);
            eastl::operator+((eastl*)local_128, (value_type*)"Show ", pbVar2);
            eastl::operator+((eastl*)local_180, (basic_string*)local_128, (value_type*)" face");
            local_128->~basic_string();
            pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_138);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::function<void(tweak::Event_const&)>::function<
                EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::__16, void>(
                (eastl*)local_128, (EquirectangularRenderer*)this, uVar4 & 4294967295);
            pCVar1->AddCheckBox(pcVar3, local_128, false);
            std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_128);
            local_180->~basic_string();
            uVar4 = uVar4 + 1;
        } while (uVar4 != 6);
        local_f8->~array();
        local_138->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007fc860, 112 bytes, placed by class name
    // EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::$_14::operator()(tweak::Event const&) const
    /* EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
   EffectManager&)::$_14::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
                                                    EffectManager&)::$_14::operator()(Event* param_1) {
        EquirectangularRenderer* this_00;
        bool bVar1;
        long* plVar2;

        this_00 = *(EquirectangularRenderer**)this;
        if (param_1->field_16 == 1) {
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            (**(code**)(*plVar2 + 128))(plVar2, this_00->field_56);
        }
        if (param_1->field_16 == 3) {
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            bVar1 = (bool)(**(code**)(*plVar2 + 120))(plVar2);
            SetEnabled(this_00, bVar1, *(EffectManager**)(this + 8));
        }
    }

    // 0x1007fd1c0, 96 bytes, placed by class name
    // EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::$_15::operator()(tweak::Event const&) const
    /* EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
   EffectManager&)::$_15::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
                                                    EffectManager&)::$_15::operator()(Event* param_1) {
        EquirectangularRenderer* this_00;
        Slider* this_01;
        float fVar1;

        this_00 = *(EquirectangularRenderer**)this;
        this_01 = (Slider*)param_1->end();
        if (param_1->field_16 == 1) {
            tweak::Slider::SetSlider<unsigned int>(this_01, this_00->field_60);
        }
        if (param_1->field_16 == 3) {
            fVar1 = (float)this_01->GetCurrentValue();
            this_00->field_60 = (int)fVar1;
            this_00->DestroyRenderingResources();
            this_00->CreateRenderingResources();
        }
    }

    // 0x1007fdbe0, 128 bytes, placed by class name
    // EquirectangularRenderer::RegisterTweakVars(tweak::Container&, EffectManager&)::$_16::operator()(tweak::Event const&) const
    /* EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
   EffectManager&)::$_16::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void EquirectangularRenderer::RegisterTweakVars(tweak::Container&,
                                                    EffectManager&)::$_16::operator()(Event* param_1) {
        long lVar1;
        undefined1 uVar2;
        long* plVar3;
        undefined1* puVar4;

        lVar1 = *(long*)this;
        if (param_1->field_16 == 1) {
            plVar3 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            puVar4 = (undefined1*)std::array<bool, 6ul>::operator[]((array<bool, 6ul>*)(lVar1 + 64),
                                                                    (long)*(int*)(this + 8));
            (**(code**)(*plVar3 + 128))(plVar3, *puVar4);
        }
        if (param_1->field_16 == 3) {
            plVar3 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            uVar2 = (**(code**)(*plVar3 + 120))(plVar3);
            puVar4 = (undefined1*)std::array<bool, 6ul>::operator[]((array<bool, 6ul>*)(lVar1 + 64),
                                                                    (long)*(int*)(this + 8));
            *puVar4 = uVar2;
        }
    }

} // namespace jag::graphics
