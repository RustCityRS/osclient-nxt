// libs/hal/render/state/ComputePipelineState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ComputePipelineState {
    public:
        GetCSConstBuffers() const;
        GetCSTextureSamplerPairs() const;
        GetCSTextureImages() const;
        void SetShaderProgram(ShaderProgram const*);
        void Clear();
        void SetCSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool);
        void SetCSTextureImage(unsigned int, Texture const*, Access);
        void SetCSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void ClearCSTextureSamplerPairs();
        void ClearCSTextureImages();
        bool operator==(ComputePipelineState const&) const;
        ShaderProgram* GetShaderProgram() const;
        ComputePipelineState();
        ~ComputePipelineState();
        ComputePipelineState(ComputePipelineState const&);

        // data members, from how the methods use this: 640 bytes
        undefined8 field_0;                                // offset 0
        pair<unsigned int, game::VarDomainType*>* field_8; // offset 8
        char _unknown_16[616];
        ShaderProgram* m_pShaderProgram; // offset 632
    };

    // 0x1009b68d0, 16 bytes, inline, placed by class name and debug map
    // ComputePipelineState::SetShaderProgram(ShaderProgram const*)
    void ComputePipelineState::SetShaderProgram(ShaderProgram* param_1) {
        m_pShaderProgram = param_1;
    }

    // 0x100c1e530, 16 bytes, inline, placed by class name
    // ComputePipelineState::GetShaderProgram() const
    ShaderProgram* ComputePipelineState::GetShaderProgram() {
        return m_pShaderProgram;
    }

    // 0x100c28590, 16 bytes, complete-object constructor, inline, placed by class name
    // ComputePipelineState::ComputePipelineState(): jumps straight to the base-object constructor

    // 0x100c285a0, 16 bytes, complete-object destructor, inline, placed by class name
    // ComputePipelineState::~ComputePipelineState(): jumps straight to the base-object destructor

    // 0x100c35970, 128 bytes, base-object constructor, inline, placed by class name
    // ComputePipelineState::ComputePipelineState()
    void ComputePipelineState::ComputePipelineState() {
        new (this)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>, 8ul, true, eastl::allocator>();
        new (&field_168) eastl::fixed_vector<ShaderTextureSamplerData, 8ul, true, eastl::allocator>();
        new (&field_464) eastl::fixed_vector<ShaderTextureImageData, 8ul, true, eastl::allocator>();
        m_pShaderProgram = (ShaderProgram*)0;
        Clear(this);
    }

    // 0x100c35c50, 48 bytes, base-object destructor, inline, placed by class name
    // ComputePipelineState::~ComputePipelineState()
    void ComputePipelineState::~ComputePipelineState() {
        (&field_464)->~fixed_vector();
        (&field_168)->~fixed_vector();
        ~fixed_vector();
    }

    // 0x100c45510, 16 bytes, complete-object constructor, inline, placed by class name
    // ComputePipelineState::ComputePipelineState(ComputePipelineState const&): jumps straight to the base-object constructor

    // 0x100c45520, 128 bytes, base-object constructor, inline, placed by class name
    // ComputePipelineState::ComputePipelineState(ComputePipelineState const&)
    void ComputePipelineState::ComputePipelineState(ComputePipelineState* param_1) {
        new (this)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>, 8ul, true, eastl::allocator>(
                param_1);
        new (&field_168, (fixed_vector*)&param_1->field_168)
            eastl::fixed_vector<ShaderTextureSamplerData, 8ul, true, eastl::allocator>();
        new (&field_464, (fixed_vector*)&param_1->field_464)
            eastl::fixed_vector<ShaderTextureImageData, 8ul, true, eastl::allocator>();
        m_pShaderProgram = param_1->m_pShaderProgram;
    }

} // namespace jag::render
