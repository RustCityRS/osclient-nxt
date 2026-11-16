// libs/graphics/runetek7/renderer/RenderPassEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class RenderPassEffect {
    public:
        ~RenderPassEffect();
        RenderPassEffect(RenderPassEffect&&);
        GetConstructedShaderId() const;
        void UpdateShader(EffectManager const&, ShaderManager&, ShaderType, render::VertexDeclaration const&,
                          RenderPassType, unsigned char);
        GetShader(SceneViewData const&) const;
        void Clear();
        void HasShader() const;
        IsShaderReady() const;
        RenderPassEffect(RenderPassEffect const&);
        RenderPassEffect* operator=(RenderPassEffect const&);
        RenderPassEffect();

        // data members, from how the methods use this: 48 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        shared_ptr field_32; // offset 32
    };

    // 0x1007b89b0, 64 bytes, inline, placed by class name and debug map
    // RenderPassEffect::GetConstructedShaderId() const
    undefined8 RenderPassEffect::GetConstructedShaderId() {
        bool bVar1;
        Option<game::option::EnumBrightness>* this_00;
        undefined8 uVar2;

        bVar1 = field_32->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            this_00 =
                (Option<game::option::EnumBrightness>*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)field_32);
            uVar2 = this_00->GetValue();
        }
        return uVar2;
    }

    // 0x10081fb30, 32 bytes, inline, placed by class name
    // RenderPassEffect::HasShader() const
    void RenderPassEffect::HasShader() {
        operator!=((shared_ptr*)field_32, (_func_decltype_nullptr*)0);
    }

    // 0x10081fb50, 64 bytes, inline, placed by class name
    // RenderPassEffect::IsShaderReady() const
    undefined8 RenderPassEffect::IsShaderReady() {
        Shader* this_00;
        undefined8 uVar2;

        if (field_32->operator_cast_to_bool()) {
            this_00 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)field_32);
            uVar2 = this_00->IsReady();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1008cf650, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderPassEffect::RenderPassEffect(RenderPassEffect const&): jumps straight to the base-object constructor

    // 0x1008cf660, 48 bytes, base-object constructor, inline, placed by class name
    // RenderPassEffect::RenderPassEffect(RenderPassEffect const&)
    void RenderPassEffect::RenderPassEffect(RenderPassEffect* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = uVar3;
        field_0 = uVar1;
        field_8 = uVar2;
        new (field_32, (shared_ptr*)param_1->field_32) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1008cf6c0, 48 bytes, inline, placed by class name
    // RenderPassEffect::operator=(RenderPassEffect const&)
    /* RenderPassEffect::TEMPNAMEPLACEHOLDERVALUE(RenderPassEffect const&)
    */

    RenderPassEffect* RenderPassEffect::operator=(RenderPassEffect* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = uVar3;
        field_0 = uVar1;
        field_8 = uVar2;
        shared_ptr<Shader>::operator=((shared_ptr<Shader>*)field_32, (shared_ptr*)param_1->field_32);
        return this;
    }

    // 0x1009388c0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderPassEffect::RenderPassEffect(): jumps straight to the base-object constructor

    // 0x1009388d0, 48 bytes, base-object constructor, inline, placed by class name
    // RenderPassEffect::RenderPassEffect()
    void RenderPassEffect::RenderPassEffect() {
        _func_decltype_nullptr* in_RSI;

        new (this) EffectList();
        new (&field_16) EffectList();
        new (field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::graphics
