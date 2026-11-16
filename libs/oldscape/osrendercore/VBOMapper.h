// libs/oldscape/osrendercore/VBOMapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    class VBOMapper {
    public:
        ~VBOMapper();
        SetMappingSupport(bool);
        Unmap(render::VertexBuffer&);
        Map(render::VertexBuffer&, render::LockType, unsigned int, unsigned int, unsigned int);
        VBOMapper();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined1 field_24; // offset 24
        char field_25;       // offset 25
        char _unknown_26[6];
    };

    // 0x1001bc270, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // VBOMapper::SetMappingSupport(bool)
    /* game::StaticPointLight::SetLightsLevelsAbove(bool) */

    void game::StaticPointLight::SetLightsLevelsAbove(bool param_1) {
        m_lightsLevelsAbove = param_1;
    }

    // 0x1001bc280, 496 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::InitRSeven(int)
    void OSRenderCore_RenderThread_RSeven::InitRSeven(int param_1) {
        undefined1* this_00;
        RT7GraphicsArchiveBundle* pRVar1;
        RT7Core* pRVar2;
        ScaleManager* this_01;
        NXTPixToolkit* pNVar3;
        OcclusionManager* pOVar4;
        int* in_stack_ffffffffffffff78;
        unique_ptr auStack_7e[54];
        unique_ptr local_48[8];
        int local_40;
        undefined8 local_3c;
        int local_34;
        undefined** local_30;

        local_40 = param_1;
        std::make_unique<NoJs5ResourceProvider>();
        std::unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>::operator=(
            (unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>*)&field_24,
            auStack_7e + -10);
        ((auStack_7e + -10))->~unique_ptr();
        new ((auStack_7e + -10)) jag::graphics::RT7GraphicsArchiveBundle(
            Js5Archive::JS5_TEXTURES_DXT, Js5Archive::JS5_TEXTURES_ETC, Js5Archive::JS5_TEXTURES_PNG_MIPPED,
            Js5Archive::JS5_SPRITES, Js5Archive::JS5_MATERIALS, Js5Archive::JS5_CONFIG_BILLBOARD,
            Js5Archive::JS5_CONFIG_PARTICLE, Js5Archive::JS5_VFX);
        pRVar1 = (RT7GraphicsArchiveBundle*)
            std::unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>::operator*(
                (unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>*)&field_24);
        local_30 = (undefined**)(&field_96)->get();
        local_3c._0_4_ = 0;
        local_3c._4_4_ = 0;
        local_34 = 2;
        std::make_unique<jag::graphics::RT7Core, NoJs5ResourceProvider&, jag::graphics::RT7GraphicsArchiveBundle&,
                         rseven::OSRenderCore_MaterialRawProvider&, rseven::OSRenderCore_TextureDataProvider&,
                         game::ConfigProvider*, int, int, int&, int>(
            (NoJs5ResourceProvider*)local_48, pRVar1, (OSRenderCore_MaterialRawProvider*)(auStack_7e + -10),
            (OSRenderCore_TextureDataProvider*)&local_30, (ConfigProvider**)&local_3c, (int*)((long)&local_3c + 4),
            &local_40, &local_34, in_stack_ffffffffffffff78);
        this_00 = &field_8;
        std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator=(
            (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00, local_48);
        local_48->~unique_ptr();
        pRVar2 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
        pRVar2->Initialise((SystemSettings*)&bogusSystemSettings);
        jag::graphics::TextureAtlasManager::SetTargetTextureMode(2);
        pRVar2 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
        this_01 = (ScaleManager*)pRVar2->GetScaleManager();
        this_01->SetGameScale(1.0);
        InitialiseEffects(this);
        pRVar2 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
        pNVar3 = (NXTPixToolkit*)pRVar2->GetGeometryPass();
        pOVar4 = (OcclusionManager*)pNVar3->GetScreen();
        pOVar4->SetMinimumDepthVariation(0.0);
        pRVar2 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
        pNVar3 = (NXTPixToolkit*)pRVar2->GetForwardLightingPass();
        pOVar4 = (OcclusionManager*)pNVar3->GetScreen();
        pOVar4->SetMinimumDepthVariation(0.0);
        local_30 = (undefined**)this_00->get();
        std::make_unique<rseven::Scene, jag::graphics::RT7Core*>((RT7Core**)local_48);
        std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::operator=(
            (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16, local_48);
        local_48->~unique_ptr();
        jag::graphics::AnimationStateProvider::m_useAsyncAnimUpdate = 0;
    }

    // 0x1001bc470, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::MainLogic()
    void OSRenderCore_RenderThread::MainLogic() {
        RT7Core* this_00;

        this_00 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        this_00->MainLogic();
    }

    // 0x1001d8640, 16 bytes, complete-object constructor, inline, placed by class name
    // VBOMapper::VBOMapper(): jumps straight to the base-object constructor

    // 0x1001d86d0, 32 bytes, base-object constructor, inline, placed by class name
    // VBOMapper::VBOMapper()
    void VBOMapper::VBOMapper() {
        new (this) Array<unsigned char, eastl::allocator>();
        field_24 = 0;
        field_25 = '\0';
    }

    // 0x1001d9030, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // VBOMapper::~VBOMapper()
    /* hal::audio::AudioBuffer::AudioDataContainer::~AudioDataContainer() */

    void hal::audio::AudioBuffer::AudioDataContainer::~AudioDataContainer() {
        ~Array();
    }

} // namespace jag::oldscape
