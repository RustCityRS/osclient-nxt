// libs/graphics/runetek7/renderer/RenderPassEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class RenderPassEffect {
    public:
        ~RenderPassEffect();
        RenderPassEffect(RenderPassEffect&& spriteData);
        uint64_t GetConstructedShaderId() const;
        void UpdateShader(const EffectManager& effectManager, ShaderManager& shaderManager, ShaderType shaderType,
                          const render::VertexDeclaration& vertexDeclaration, RenderPassType renderPassType,
                          unsigned char arg6);
        uint8_t* GetShader(const SceneViewData& sceneViewData) const;
        void Clear();
        void HasShader() const;
        bool IsShaderReady() const;
        RenderPassEffect(const RenderPassEffect& renderPassEffect);
        RenderPassEffect* operator=(const RenderPassEffect& renderPassEffect);
        RenderPassEffect();

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned short field_8;
        uint8_t field_10;
        uint8_t field_11;
        unsigned int field_12;
        uint8_t field_16;
        uint8_t field_17;
        uint8_t field_18;
        uint8_t field_19;
        uint8_t field_20;
        uint8_t field_21[3];
        unsigned long field_24;
        shared_ptr field_32;
    };

    // 0x1007b89b0
    uint64_t RenderPassEffect::GetConstructedShaderId() const {
        bool cVar1 = field_32->operator_cast_to_bool();
        uint64_t uVar2 = 0;
        if (cVar1) {
            uVar2 = ((Option<game::option::EnumBrightness>*)(*field_32).operator->())->GetValue();
        }
        return uVar2;
    }

    // 0x10081fb30
    void RenderPassEffect::HasShader() const {
        *field_32 != nullptr;
    }

    // 0x10081fb50
    bool RenderPassEffect::IsShaderReady() const {
        uint64_t uVar2;

        if (field_32->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((Shader*)(*field_32).operator->())->IsReady();
        }
        return uVar2;
    }

    // 0x1008cf660
    RenderPassEffect::RenderPassEffect(const RenderPassEffect& renderPassEffect) {
        unsigned int uVar7 = renderPassEffect.field_0;
        unsigned int uVar8 = renderPassEffect.field_4;
        unsigned short uVar9 = renderPassEffect.field_8;
        uint8_t bVar10 = renderPassEffect.field_10;
        uint8_t uVar11 = renderPassEffect.field_11;
        unsigned int uVar12 = renderPassEffect.field_12;
        uint8_t bVar2 = renderPassEffect.field_17;
        uint8_t bVar3 = renderPassEffect.field_18;
        uint8_t bVar4 = renderPassEffect.field_19;
        uint8_t bVar5 = renderPassEffect.field_20;
        uint32_t uVar6 = renderPassEffect.field_21;
        unsigned long uVar1 = renderPassEffect.field_24;
        field_16 = renderPassEffect.field_16;
        field_17 = bVar2;
        field_18 = bVar3;
        field_19 = bVar4;
        field_20 = bVar5;
        field_21 = uVar6;
        field_24 = uVar1;
        field_0 = uVar7;
        field_4 = uVar8;
        field_8 = uVar9;
        field_10 = bVar10;
        field_11 = uVar11;
        field_12 = uVar12;
        new (field_32) shared_ptr(renderPassEffect.field_32);
    }

    // 0x1008cf6c0
    RenderPassEffect* RenderPassEffect::operator=(const RenderPassEffect& renderPassEffect) {
        unsigned int uVar7 = renderPassEffect.field_0;
        unsigned int uVar8 = renderPassEffect.field_4;
        unsigned short uVar9 = renderPassEffect.field_8;
        uint8_t bVar10 = renderPassEffect.field_10;
        uint8_t uVar11 = renderPassEffect.field_11;
        unsigned int uVar12 = renderPassEffect.field_12;
        uint8_t bVar2 = renderPassEffect.field_17;
        uint8_t bVar3 = renderPassEffect.field_18;
        uint8_t bVar4 = renderPassEffect.field_19;
        uint8_t bVar5 = renderPassEffect.field_20;
        uint32_t uVar6 = renderPassEffect.field_21;
        unsigned long uVar1 = renderPassEffect.field_24;
        field_16 = renderPassEffect.field_16;
        field_17 = bVar2;
        field_18 = bVar3;
        field_19 = bVar4;
        field_20 = bVar5;
        field_21 = uVar6;
        field_24 = uVar1;
        field_0 = uVar7;
        field_4 = uVar8;
        field_8 = uVar9;
        field_10 = bVar10;
        field_11 = uVar11;
        field_12 = uVar12;
        *field_32 = renderPassEffect.field_32;
        return this;
    }

    // 0x1009388d0
    RenderPassEffect::RenderPassEffect() : EffectList() {}

} // namespace jag::graphics
