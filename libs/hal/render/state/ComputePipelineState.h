// libs/hal/render/state/ComputePipelineState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ComputePipelineState {
    public:
        void GetCSConstBuffers() const;
        uint8_t* GetCSTextureSamplerPairs() const;
        uint8_t* GetCSTextureImages() const;
        void SetShaderProgram(const ShaderProgram* shaderProgram);
        void Clear();
        void SetCSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void SetCSTextureImage(unsigned int arg1, const Texture* texture, Access access);
        void SetCSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void ClearCSTextureSamplerPairs();
        void ClearCSTextureImages();
        bool operator==(const ComputePipelineState& computePipelineState) const;
        ShaderProgram* GetShaderProgram() const;
        ComputePipelineState();
        ~ComputePipelineState();
        ComputePipelineState(const ComputePipelineState& computePipelineState);

    private:
        eastl* field_0;
        pair<unsigned int, game::VarDomainType*>* field_8;
        uint8_t _unknown_16[616];
        ShaderProgram* m_pShaderProgram;
    };

    // 0x1009b68d0
    void ComputePipelineState::SetShaderProgram(const ShaderProgram* shaderProgram) {
        m_pShaderProgram = shaderProgram;
    }

    // 0x100c1e530
    ShaderProgram* ComputePipelineState::GetShaderProgram() const {
        return m_pShaderProgram;
    }

    // 0x100c35970
    ComputePipelineState::ComputePipelineState() {
        new (this) eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer const*>, 8ul>();
        new (&field_168) eastl::fixed_vector<ShaderTextureSamplerData, 8ul>();
        new (&field_464) eastl::fixed_vector<ShaderTextureImageData, 8ul>();
        m_pShaderProgram = nullptr;
        Clear();
    }

    // 0x100c35c50
    ComputePipelineState::~ComputePipelineState() {
        field_464.~fixed_vector();
        field_168.~fixed_vector();
    }

    // 0x100c45520
    ComputePipelineState::ComputePipelineState(const ComputePipelineState& computePipelineState) {
        new (this) eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer const*>, 8ul>(computePipelineState);
        new (&field_168) eastl::fixed_vector<ShaderTextureSamplerData, 8ul>(computePipelineState.field_168);
        new (&field_464) eastl::fixed_vector<ShaderTextureImageData, 8ul>(computePipelineState.field_464);
        m_pShaderProgram = computePipelineState.m_pShaderProgram;
    }

} // namespace jag::render
