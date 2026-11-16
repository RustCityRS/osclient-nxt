// libs/oldscape/osrendercore/VBOMapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    class VBOMapper {
    public:
        ~VBOMapper();
        void SetMappingSupport(bool arg1);
        uint64_t Unmap(render::VertexBuffer& vertexBuffer);
        ReturnValue Map(render::VertexBuffer& vertexBuffer, render::LockType lockType, unsigned int arg3,
                        unsigned int arg4, unsigned int arg5);
        VBOMapper();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        bool* field_16;
        uint8_t field_24;
        char m_mappingSupport;
        uint8_t _unknown_26[6];
    };

    // 0x1001bc270
    void VBOMapper::SetMappingSupport(bool arg1) {
        m_lightLevelsAbove = arg1;
    }

    // 0x1001bc280
    void OSRenderCore_RenderThread_RSeven::InitRSeven(int arg1) {
        void result;
        ReturnValue result;
        RT7GraphicsArchiveBundle* rt7GraphicsArchiveBundle;
        int* in_stack_ffffffffffffff78;
        ReturnValue aRStack_78;
        ReturnValue local_48;
        uint64_t local_3c;

        &result = &aRStack_78 - 2;
        result = std::make_unique<NoJs5ResourceProvider>();
        field_24 = result;
        result.~unique_ptr();
        new ((&aRStack_78 - 2)) jag::graphics::RT7GraphicsArchiveBundle(
            *(Js5Archive::JS5_TEXTURES_DXT), *(Js5Archive::JS5_TEXTURES_ETC), *(Js5Archive::JS5_TEXTURES_PNG_MIPPED),
            *(Js5Archive::JS5_SPRITES), *(Js5Archive::JS5_MATERIALS), *(Js5Archive::JS5_CONFIG_BILLBOARD),
            *(Js5Archive::JS5_CONFIG_PARTICLE), *(Js5Archive::JS5_VFX));
        rt7GraphicsArchiveBundle = (RT7GraphicsArchiveBundle*)*field_24;
        auto local_30 = field_96.get();
        local_3c._0_4_ = 0;
        local_3c._4_4_ = 0;
        std::make_unique<jag::graphics::RT7Core, NoJs5ResourceProvider&, jag::graphics::RT7GraphicsArchiveBundle&,
                         rseven::OSRenderCore_MaterialRawProvider&, rseven::OSRenderCore_TextureDataProvider&,
                         game::ConfigProvider*, int, int, int&, int>(
            local_48, *rt7GraphicsArchiveBundle, *((&aRStack_78 - 2)), local_30, local_3c,
            *((int*)((long)&local_3c + 4)), arg1, 2, *in_stack_ffffffffffffff78);
        uint8_t* this_00 = &field_8;
        *this_00 = local_48;
        RT7Core* pRVar1 = (RT7Core*)(*this_00).operator->();
        pRVar1->Initialise(&bogusSystemSettings);
        jag::graphics::TextureAtlasManager::SetTargetTextureMode(2);
        pRVar1 = (RT7Core*)(*this_00).operator->();
        pRVar1->GetScaleManager()->SetGameScale(1.0);
        InitialiseEffects();
        pRVar1 = (RT7Core*)(*this_00).operator->();
        auto pNVar2 = pRVar1->GetGeometryPass();
        auto pOVar3 = pNVar2->GetScreen();
        pOVar3->SetMinimumDepthVariation(0.0);
        pRVar1 = (RT7Core*)(*this_00).operator->();
        pNVar2 = (NXTPixToolkit*)pRVar1->GetForwardLightingPass();
        pOVar3 = (OcclusionManager*)pNVar2->GetScreen();
        pOVar3->SetMinimumDepthVariation(0.0);
        local_30 = (RT7Core*)this_00->get();
        local_48 = std::make_unique<rseven::Scene, jag::graphics::RT7Core*>(local_30);
        field_16 = local_48;
        jag::graphics::AnimationStateProvider::m_useAsyncAnimUpdate = 0;
    }

    // 0x1001bc470
    void OSRenderCore_RenderThread::MainLogic() {
        ((RT7Core*)field_8.operator->())->MainLogic();
    }

    // 0x1001d86d0
    VBOMapper::VBOMapper() : Array<unsigned char>(), field_24(0) {
        m_mappingSupport = '\0';
    }

    // 0x1001d9030
    VBOMapper::~VBOMapper() {}

} // namespace jag::oldscape
