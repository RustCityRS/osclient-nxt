// libs/graphics/runetek7/effects/irradiance/IrradianceUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100422cc0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::LightSource* placement_new<game::LightSource, graphics::GraphNode*&, shared_ptr<game::World> const&, game::ConfigProvider*&, shared_ptr<game::StaticPointLight> const&, unsigned int&>(void*, graphics::GraphNode*&, shared_ptr<game::World> const&, game::ConfigProvider*&, shared_ptr<game::StaticPointLight> const&, unsigned int&)
    LightSource* jag::placement_new<game::LightSource, graphics::GraphNode*&, shared_ptr<game::World> const&,
                                    game::ConfigProvider*&, shared_ptr<game::StaticPointLight> const&, unsigned int&>(
        void* param_1, GraphNode** param_2, shared_ptr* param_3, ConfigProvider** param_4, shared_ptr* param_5,
        uint* param_6) {
        game::LightSource::LightSource(param_1, *param_2, param_3, *param_4, param_5, *param_6);
        return param_1;
    }

    // 0x100422cf0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024> >* placement_new<MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024> >, MakeSharedPool<game::LightSource, 1024>::RefCounterAndData*&, game::LightSource*>(void*, MakeSharedPool<game::LightSource, 1024>::RefCounterAndData*&, game::LightSource*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>,
                       MakeSharedPool<game::LightSource, 1024>::RefCounterAndData*&, game::LightSource*>(
        void* param_1, RefCounterAndData** param_2, LightSource** param_3) {
        MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100422ee0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024> >::MakeSharedPoolRefCounter(void*, game::LightSource*): jumps straight to the base-object constructor

    // 0x100422ef0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024> >::MakeSharedPoolRefCounter(void*, game::LightSource*)
    void
    jag::MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>* this, void* param_1,
        LightSource* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a10 + 16;
        *(void**)(this + 16) = param_1;
        *(LightSource**)(this + 24) = param_2;
    }

    // 0x100422f30, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::LightSource, MakeSharedPool<game::LightSource, 1024>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::LightSource, 1024>::deallocate(pvVar1);
    }

    // 0x100423d70, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::PointLightGridTextureData* placement_new<graphics::PointLightGridTextureData>(void*)
    PointLightGridTextureData* placement_new<graphics::PointLightGridTextureData>(void* param_1) {
        ___bzero(param_1, 131080);
        graphics::PointLightGridTextureData::PointLightGridTextureData(param_1);
        return param_1;
    }

    // 0x100423da0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<graphics::PointLightGridTextureData>* placement_new<ref_counter_shared_trivial<graphics::PointLightGridTextureData>, int, graphics::PointLightGridTextureData*&>(void*, int&&, graphics::PointLightGridTextureData*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<graphics::PointLightGridTextureData>, int,
                       graphics::PointLightGridTextureData*&>(void* param_1, int* param_2,
                                                              PointLightGridTextureData** param_3) {
        ref_counter_shared_trivial<graphics::PointLightGridTextureData>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100423de0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<graphics::PointLightGridTextureData>::ref_counter_shared_trivial(unsigned long, graphics::PointLightGridTextureData*): jumps straight to the base-object constructor

    // 0x100423df0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<graphics::PointLightGridTextureData>::ref_counter_shared_trivial(unsigned long, graphics::PointLightGridTextureData*)
    void ref_counter_shared_trivial<graphics::PointLightGridTextureData>::ref_counter_shared_trivial(
        ulong param_1, PointLightGridTextureData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c68 + 16;
    }

    // 0x100425650, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketDeleter<game::NPCTypeCustomisation>::operator()(game::NPCTypeCustomisation*) const
    /* BucketDeleter<game::NPCTypeCustomisation>::TEMPNAMEPLACEHOLDERVALUE(game::NPCTypeCustomisation*)
   const */

    void BucketDeleter<game::NPCTypeCustomisation>::operator()(NPCTypeCustomisation* param_1) {
        param_1->~NPCTypeCustomisation();
        BucketManager::DeAllocate(param_1, 280);
    }

} // namespace jag

namespace jag::graphics {
    class IrradianceSHCoefConsts {
    public:
        IrradianceSHCoefConsts* operator=(IrradianceSHCoefConsts&&);
        IrradianceSHCoefConsts* operator=(IrradianceSHCoefConsts const&);
        IrradianceSHCoefConsts();

        // data members, from how the methods use this: 104 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[88];
    };

    // 0x100422b90, 112 bytes, inline, placed by debug map only (low confidence)
    // IrradianceSHCoefConsts::operator=(IrradianceSHCoefConsts&&)
    /* IrradianceSHCoefConsts::TEMPNAMEPLACEHOLDERVALUE(IrradianceSHCoefConsts
   const&) */

    IrradianceSHCoefConsts* IrradianceSHCoefConsts::operator=(IrradianceSHCoefConsts* param_1) {
        math::Rect<float>::operator=((Rect<float>*)this, (Rect*)param_1);
        math::Rect<float>::operator=((Rect<float>*)&field_16, (Rect*)&param_1->field_16);
        math::Rect<float>::operator=((Rect<float>*)&field_32, (Rect*)&param_1->field_32);
        math::Rect<float>::operator=((Rect<float>*)&field_48, (Rect*)&param_1->field_48);
        math::Rect<float>::operator=((Rect<float>*)&field_64, (Rect*)&param_1->field_64);
        math::Rect<float>::operator=((Rect<float>*)&field_80, (Rect*)&param_1->field_80);
        math::Rect<float>::operator=((Rect<float>*)&field_96, (Rect*)&param_1->field_96);
        return this;
    }

    // 0x100422b90: the linker folded this into IrradianceSHCoefConsts::operator=(IrradianceSHCoefConsts&&), which has identical code
    IrradianceSHCoefConsts::operator=(IrradianceSHCoefConsts const&);

    // 0x1004239e0, 32 bytes, inline, placed by debug map only (low confidence)
    // ScriptedPointLight::HasRGBChanged()
    undefined4 ScriptedPointLight::HasRGBChanged() {
        uint uVar1;

        uVar1 = field_64;
        if (uVar1 != 0) {
            field_60 = 1;
        }
        return CONCAT31((int3)(uVar1 >> 8), uVar1 != 0);
    }

    // 0x100423dc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTextureData::PointLightGridTextureData(): jumps straight to the base-object constructor

    // 0x100423dd0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTextureData::PointLightGridTextureData()
    void PointLightGridTextureData::PointLightGridTextureData() {
        ___bzero(this, 131080);
    }

} // namespace jag::graphics
