// libs/hal/render/state/ComputePipelineState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "ComputePipelineState.h"

namespace jag::render {
    // 0x100009ca0: ComputePipelineState::GetCSConstBuffers() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10036bfe0: ComputePipelineState::GetCSTextureSamplerPairs() const has the same machine code as graphics::GeometryBatch::GetJointIDMap()

    // 0x100441a50: ComputePipelineState::GetCSTextureImages() const has the same machine code as game::MapEnvironmentSettings::GetSkySettings() const

    // 0x100bf3a60
    void ComputePipelineState::Clear() {
        m_pShaderProgram = nullptr;
        clear();
        field_168.clear();
        field_464.clear();
    }

    // 0x100bf3aa0
    void ComputePipelineState::SetCSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                                       const SamplerState* samplerState, bool arg5) {
        uint8_t* this_00 = &field_168;
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
                            "ComputePipelineState.cpp",
                            33, "Attempting to add duplicate entry to ComputePipelineState");
        }
        eastl::vector<ShaderTextureSamplerData, eastl::fixed_vector_allocator<32ul, 8ul, 8ul, 0ul, true>>::emplace_back<
            unsigned int&, Texture const*&, unsigned int&, SamplerState const*&, bool&>(
            (vector<ShaderTextureSamplerData, eastl::fixed_vector_allocator<32ul, 8ul, 8ul, 0ul, true>>*)this_00,
            &local_34, &local_48, &local_30, &local_40, &local_29);
    }

    // 0x100bf3cd0
    void ComputePipelineState::SetCSTextureImage(unsigned int arg1, const Texture* texture, Access access) {
        uint8_t local_48[16];

        uint8_t* this_00 = &field_464;
        auto pSVar1 = this_00->HeapBeginPtr();
        auto pSVar2 = this_00->end();
        new (local_48) ShaderTextureImageData(arg1, texture, access);
        pSVar1 = std::find<ShaderTextureImageData const*, ShaderTextureImageData>(pSVar1, pSVar2, *local_48);
        pSVar2 = (ShaderTextureImageData*)this_00->end();
        if (pSVar1 != pSVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "ComputePipelineState.cpp",
                            45, "Attempting to add duplicate entry to ComputePipelineState");
        }
        this_00->emplace_back<unsigned int&, Texture const*&, Access&>(arg1, texture, access);
    }

    // 0x100bf3e90
    void ComputePipelineState::SetCSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        pair<unsigned int, game::VarDomainType*> local_50[16];

        auto ppVar1 = HeapBeginPtr();
        auto ppVar2 = end();
        local_50->pair<unsigned int&, game::VarDomainType*, void>(arg1, shaderConstBuffer);
        ppVar1 = std::find<eastl::pair<unsigned int, ShaderConstBuffer const*> const*,
                           eastl::pair<unsigned int, ShaderConstBuffer const*>>(ppVar1, ppVar2, *local_50);
        ppVar2 = (pair<unsigned int, ShaderConstBuffer const*>*)end();
        if (ppVar1 != ppVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                            "ComputePipelineState.cpp",
                            57, "Attempting to add duplicate entry to ComputePipelineState");
        }
        emplace_back<unsigned int&, ShaderConstBuffer const*&>(arg1, shaderConstBuffer);
    }

    // 0x100bf4000
    void ComputePipelineState::ClearCSTextureSamplerPairs() {
        field_168.clear();
    }

    // 0x100bf4020
    void ComputePipelineState::ClearCSTextureImages() {
        field_464.clear();
    }

    // 0x100bf4040
    bool ComputePipelineState::operator==(const ComputePipelineState& computePipelineState) const {
        bool bVar1;

        if (((m_pShaderProgram == computePipelineState.m_pShaderProgram) &&
             (bVar1 = *this == computePipelineState, bVar1)) &&
            (bVar1 = field_168 == computePipelineState.field_168, bVar1)) {
            bVar1 = field_464 == computePipelineState.field_464;
            return bVar1;
        }
        return false;
    }

} // namespace jag::render
