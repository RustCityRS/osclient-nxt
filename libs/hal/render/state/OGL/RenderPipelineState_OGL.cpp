// libs/hal/render/state/OGL/RenderPipelineState_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/state/RenderPipelineState.h"

namespace jag::render {
    // 0x100bc5fd0
    void RenderPipelineState::Clear() {
        long lVar1 = Instance();
        field_0 = lVar1 + 1524;
        lVar1 = Instance();
        field_8 = lVar1 + 720;
        lVar1 = Instance();
        m_rasteriserState = (AlphaMode*)(lVar1 + 1200);
        m_pShaderProgram = nullptr;
        field_32.clear();
        field_200.clear();
        field_256.clear();
        field_328.clear();
        field_496.clear();
        field_552.clear();
    }

    // 0x100bc6060
    void RenderPipelineState::SetVSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                                      const SamplerState* samplerState, bool arg5) {
        uint8_t* this_00 = &field_256;
        Texture* local_48 = texture;
        SamplerState* local_40 = samplerState;
        unsigned int local_34 = arg1;
        unsigned int local_30 = arg3;
        bool local_29 = arg5;
        auto pSVar1 = this_00->HeapBeginPtr();
        auto pSVar2 = this_00->end();
        ShaderTextureSamplerData local_68(local_34, local_48, local_30, local_40, local_29);
        pSVar1 = std::find<ShaderTextureSamplerData const*, ShaderTextureSamplerData>(pSVar1, pSVar2, local_68);
        pSVar2 = (ShaderTextureSamplerData*)this_00->end();
        if (pSVar1 != pSVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            40, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<ShaderTextureSamplerData, eastl::fixed_vector_allocator<32ul, 1ul, 8ul, 0ul, true>>::emplace_back<
            unsigned int&, Texture const*&, unsigned int&, SamplerState const*&, bool&>(
            (vector<ShaderTextureSamplerData, eastl::fixed_vector_allocator<32ul, 1ul, 8ul, 0ul, true>>*)this_00,
            &local_34, &local_48, &local_30, &local_40, &local_29);
    }

    // 0x100bc6280
    void RenderPipelineState::SetVSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        pair<unsigned int, game::VarDomainType*> local_48[16];

        uint8_t* this_00 = &field_32;
        auto ppVar1 = this_00->HeapBeginPtr();
        auto ppVar2 = this_00->end();
        local_48->pair<unsigned int&, game::VarDomainType*, void>(arg1, shaderConstBuffer);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderConstBuffer const*> const*,
                           eastl::pair<unsigned int, ShaderConstBuffer const*>>(ppVar1, ppVar2, *local_48);
        ppVar2 = (pair<unsigned int, ShaderConstBuffer const*>*)this_00->end();
        if (ppVar1 != ppVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            52, "Attempting to add duplicate entry to RenderPipelineState");
        }
        this_00->emplace_back<unsigned int&, ShaderConstBuffer const*&>(arg1, shaderConstBuffer);
    }

    // 0x100bc6370
    void RenderPipelineState::SetVSShaderStorageBuffer(unsigned int arg1,
                                                       const ShaderStorageBuffer* shaderStorageBuffer) {
        pair<unsigned int, game::VarDomainType*> local_48[16];

        uint8_t* this_00 = &field_200;
        auto ppVar1 = this_00->HeapBeginPtr();
        auto ppVar2 = this_00->end();
        local_48->pair<unsigned int&, game::VarDomainType*, void>(arg1, shaderStorageBuffer);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderStorageBuffer const*> const*,
                           eastl::pair<unsigned int, ShaderStorageBuffer const*>>(ppVar1, ppVar2, *local_48);
        ppVar2 = (pair<unsigned int, ShaderStorageBuffer const*>*)this_00->end();
        if (ppVar1 != ppVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            64, "Attempting to add duplicate entry to RenderPipelineState");
        }
        this_00->emplace_back<unsigned int&, ShaderStorageBuffer const*&>(arg1, shaderStorageBuffer);
    }

    // 0x100bc64f0
    void RenderPipelineState::ClearVSTextureSamplerPairs() {
        field_256.clear();
    }

    // 0x100bc6510
    void RenderPipelineState::SetPSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                                      const SamplerState* samplerState, bool arg5) {
        uint8_t* this_00 = &field_552;
        Texture* local_48 = texture;
        SamplerState* local_40 = samplerState;
        unsigned int local_34 = arg1;
        int local_30 = arg3;
        bool local_29 = arg5;
        auto pSVar1 = this_00->HeapBeginPtr();
        auto pSVar2 = this_00->end();
        ShaderTextureSamplerData local_68(local_34, local_48, local_30, local_40, local_29);
        pSVar1 = std::find<ShaderTextureSamplerData const*, ShaderTextureSamplerData>(pSVar1, pSVar2, local_68);
        pSVar2 = (ShaderTextureSamplerData*)this_00->end();
        if (pSVar1 != pSVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            86, "Attempting to add duplicate entry to RenderPipelineState");
        }
        eastl::vector<ShaderTextureSamplerData, eastl::fixed_vector_allocator<32ul, 16ul, 8ul, 0ul, true>>::
            emplace_back<unsigned int&, Texture const*&, int&, SamplerState const*&, bool&>(
                (vector<ShaderTextureSamplerData, eastl::fixed_vector_allocator<32ul, 16ul, 8ul, 0ul, true>>*)this_00,
                &local_34, &local_48, &local_30, &local_40, &local_29);
    }

    // 0x100bc66e0
    void RenderPipelineState::SetPSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        pair<unsigned int, game::VarDomainType*> local_48[16];

        uint8_t* this_00 = &field_328;
        auto ppVar1 = this_00->HeapBeginPtr();
        auto ppVar2 = this_00->end();
        local_48->pair<unsigned int&, game::VarDomainType*, void>(arg1, shaderConstBuffer);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderConstBuffer const*> const*,
                           eastl::pair<unsigned int, ShaderConstBuffer const*>>(ppVar1, ppVar2, *local_48);
        ppVar2 = (pair<unsigned int, ShaderConstBuffer const*>*)this_00->end();
        if (ppVar1 != ppVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            98, "Attempting to add duplicate entry to RenderPipelineState");
        }
        this_00->emplace_back<unsigned int&, ShaderConstBuffer const*&>(arg1, shaderConstBuffer);
    }

    // 0x100bc6790
    void RenderPipelineState::SetPSShaderStorageBuffer(unsigned int arg1,
                                                       const ShaderStorageBuffer* shaderStorageBuffer) {
        pair<unsigned int, game::VarDomainType*> local_48[16];

        uint8_t* this_00 = &field_496;
        auto ppVar1 = this_00->HeapBeginPtr();
        auto ppVar2 = this_00->end();
        local_48->pair<unsigned int&, game::VarDomainType*, void>(arg1, shaderStorageBuffer);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderStorageBuffer const*> const*,
                           eastl::pair<unsigned int, ShaderStorageBuffer const*>>(ppVar1, ppVar2, *local_48);
        ppVar2 = (pair<unsigned int, ShaderStorageBuffer const*>*)this_00->end();
        if (ppVar1 != ppVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "OGL/RenderPipelineState_OGL.cpp",
                            110, "Attempting to add duplicate entry to RenderPipelineState");
        }
        this_00->emplace_back<unsigned int&, ShaderStorageBuffer const*&>(arg1, shaderStorageBuffer);
    }

    // 0x100bc6840
    void RenderPipelineState::ClearPSTextureSamplerPairs() {
        field_552.clear();
    }

    // 0x100bc6860
    bool RenderPipelineState::operator==(const RenderPipelineState& renderPipelineState) const {
        bool bVar1;

        if ((((field_0 == renderPipelineState.field_0) && (field_8 == renderPipelineState.field_8)) &&
             (m_rasteriserState == renderPipelineState.m_rasteriserState)) &&
            (((m_pShaderProgram == renderPipelineState.m_pShaderProgram &&
               (bVar1 = field_32 == renderPipelineState.field_32, bVar1)) &&
              ((bVar1 = field_256 == renderPipelineState.field_256,
                bVar1 && (bVar1 = field_328 == renderPipelineState.field_328, bVar1)))))) {
            bVar1 = field_552 == renderPipelineState.field_552;
            return bVar1;
        }
        return false;
    }

} // namespace jag::render
