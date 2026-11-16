// libs/graphics/runetek7/effects/irradiance/IrradianceUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100422cc0
    game::LightSource* placement_new<game::LightSource, graphics::GraphNode*&, shared_ptr<game::World> const&,
                                     game::ConfigProvider*&, shared_ptr<game::StaticPointLight> const&, unsigned int&>(
        void* arg1, graphics::GraphNode*& arg2, const shared_ptr<game::World>& world, game::ConfigProvider*& arg4,
        const shared_ptr<game::StaticPointLight>& staticPointLight, unsigned int& arg6) {
        new (arg1) game::LightSource(arg2, world, arg4, staticPointLight, arg6);
        return arg1;
    }

    // 0x100422cf0
    MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>*
    placement_new<MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>,
                  MakeSharedPool<game::LightSource, 1024>::RefCounterAndData*&, game::LightSource*>(
        void* arg1, MakeSharedPool<game::LightSource, 1024>::RefCounterAndData*& arg2, game::LightSource*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>(arg2, arg3);
        return arg1;
    }

    // 0x100422ef0
    MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>::MakeSharedPoolRefCounter(
        void* arg1, game::LightSource* lightSource)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a10 + 16;
        *(void**)(this + 16) = arg1;
        *(LightSource**)(this + 24) = lightSource;
    }

    // 0x100422f30
    void MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::LightSource, 1024>::deallocate(arg1);
    }

    // 0x100423d70
    graphics::PointLightGridTextureData* placement_new<graphics::PointLightGridTextureData>(void* arg1) {
        ___bzero(arg1, 131080);
        new (arg1) graphics::PointLightGridTextureData();
        return arg1;
    }

    // 0x100423da0
    ref_counter_shared_trivial<graphics::PointLightGridTextureData>*
    placement_new<ref_counter_shared_trivial<graphics::PointLightGridTextureData>, int,
                  graphics::PointLightGridTextureData*&>(void* arg1, int&& arg2,
                                                         graphics::PointLightGridTextureData*& arg3) {
        new (arg1) ref_counter_shared_trivial<graphics::PointLightGridTextureData>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100423df0
    ref_counter_shared_trivial<graphics::PointLightGridTextureData>::ref_counter_shared_trivial(
        unsigned long arg1, graphics::PointLightGridTextureData* pointLightGridTextureData)
        : ref_counter_base() {}

    // 0x100425650
    void BucketDeleter<game::NPCTypeCustomisation>::operator()(game::NPCTypeCustomisation* npcTypeCustomisation) const {
        unsigned long arg2;

        npcTypeCustomisation->~NPCTypeCustomisation();
        npcTypeCustomisation->DeAllocate(280, arg2);
    }

} // namespace jag

namespace jag::graphics {
    class IrradianceSHCoefConsts {
    public:
        IrradianceSHCoefConsts* operator=(IrradianceSHCoefConsts&& irradianceSHCoefConsts);
        IrradianceSHCoefConsts* operator=(const IrradianceSHCoefConsts& irradianceSHCoefConsts);
        IrradianceSHCoefConsts();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[88];
    };

    // 0x100422b90
    IrradianceSHCoefConsts* IrradianceSHCoefConsts::operator=(IrradianceSHCoefConsts&& irradianceSHCoefConsts) {
        *this = irradianceSHCoefConsts;
        field_16 = irradianceSHCoefConsts.field_16;
        field_32 = irradianceSHCoefConsts.field_32;
        field_48 = irradianceSHCoefConsts.field_48;
        field_64 = irradianceSHCoefConsts.field_64;
        field_80 = irradianceSHCoefConsts.field_80;
        field_96 = irradianceSHCoefConsts.field_96;
        return this;
    }

    // 0x100422b90: IrradianceSHCoefConsts::operator=(IrradianceSHCoefConsts const&) has the same machine code as IrradianceSHCoefConsts::operator=(IrradianceSHCoefConsts&&)

    // 0x1004239e0
    bool ScriptedPointLight::HasRGBChanged() {
        unsigned int uVar1 = field_64;
        if (uVar1 != 0) {
            field_60 = 1;
        }
        return uVar1 != 0;
    }

    // 0x100423dd0
    PointLightGridTextureData::PointLightGridTextureData() {
        ___bzero(this, 131080);
    }

} // namespace jag::graphics
