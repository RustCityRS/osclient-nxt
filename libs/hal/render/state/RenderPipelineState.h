// libs/hal/render/state/RenderPipelineState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::render {
    class RenderPipelineState {
    public:
        void GetBlendState() const;
        void GetDepthStencilState() const;
        void SetDepthStencilState(const DepthStencilState* arg1);
        void SetBlendState(const BlendState* arg1);
        void GetShaderProgram() const;
        AlphaMode* GetRasteriserState() const;
        Option<float>* GetVSConstBuffers() const;
        uint8_t* GetPSConstBuffers() const;
        uint8_t* GetVSStorageBuffers() const;
        uint8_t* GetVSTextureSamplerPairs() const;
        void SetRasteriserState(const RasteriserState* alphaMode);
        uint8_t* GetPSTextureSamplerPairs() const;
        void SetShaderProgram(const ShaderProgram* blendMode);
        uint8_t* GetPSStorageBuffers() const;
        void Clear();
        void SetVSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void SetVSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void SetVSShaderStorageBuffer(unsigned int arg1, const ShaderStorageBuffer* shaderStorageBuffer);
        void ClearVSTextureSamplerPairs();
        void SetPSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void SetPSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void SetPSShaderStorageBuffer(unsigned int arg1, const ShaderStorageBuffer* shaderStorageBuffer);
        void ClearPSTextureSamplerPairs();
        bool operator==(const RenderPipelineState& renderPipelineState) const;
        RenderPipelineState();
        ~RenderPipelineState();
        RenderPipelineState(const RenderPipelineState& renderPipelineState);

    private:
        long field_0;
        long field_8;
        AlphaMode* m_rasteriserState;
        BlendMode* m_pShaderProgram;
        uint8_t _unknown_32[528];
    };

    class Viewport {
    public:
        uint32_t Contains(int arg1, int arg2) const;
        float GetViewAspectRatio() const;
        auto GetScreenRect() const;
        bool IsValid() const;
        Viewport(int arg1, int arg2, int arg3, int arg4, float arg5, float arg6);
        void Set(int arg1, int arg2, int arg3, int arg4, float arg5, float arg6);
        uint32_t operator==(const Viewport& viewport) const;

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        float field_16;
        float field_20;
        uint8_t _unknown_24[4];
    };

    // 0x100009d10: RenderPipelineState::GetBlendState() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x10000b2a0: RenderPipelineState::GetDepthStencilState() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x10000b300: RenderPipelineState::SetDepthStencilState(DepthStencilState const*) has the same machine code as eastl::string::Layout::SetHeapSize(unsigned long)

    // 0x10000b400: RenderPipelineState::SetBlendState(BlendState const*) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

    // 0x100016cf0: RenderPipelineState::GetShaderProgram() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x100023f30: RenderPipelineState::GetRasteriserState() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x10002d850: RenderPipelineState::GetVSConstBuffers() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x100049090: RenderPipelineState::GetPSConstBuffers() const has the same machine code as oldscape::option::Option<eastl::fixed_string<char, 256>>::GetDefaultValue() const

    // 0x100414eb0: RenderPipelineState::GetVSStorageBuffers() const has the same machine code as game::MapSquare::GetClientCompositeData() const

    // 0x100431760: RenderPipelineState::GetVSTextureSamplerPairs() const has the same machine code as game::Location::GetLocationType() const

    // 0x10080ea00: RenderPipelineState::SetRasteriserState(RasteriserState const*) has the same machine code as graphics::RenderMaterial::SetAlphaMode(graphics::AlphaMode const*)

    // 0x100814930: RenderPipelineState::GetPSTextureSamplerPairs() const has the same machine code as graphics::ModelMaterial::GetEnvironmentMap() const

    // 0x1008219d0: RenderPipelineState::SetShaderProgram(ShaderProgram const*) has the same machine code as graphics::RenderMaterial::SetBlendMode(graphics::BlendMode const*)

    // 0x1009ad260
    auto Viewport::GetScreenRect() const {
        if (IsValid() == '\0') {
            LogAssert(
                "IsValid()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/RenderTypes.h",
                358, nullptr);
        }
        return auto(field_0, field_4, field_8, field_12);
    }

    // 0x1009e2290: RenderPipelineState::GetPSStorageBuffers() const has the same machine code as Js5WorkerThread::GetClientStream() const

    // 0x100c28770
    void Viewport::Set(int arg1, int arg2, int arg3, int arg4, float arg5, float arg6) {
        field_0 = arg1;
        field_4 = arg2;
        field_8 = arg3;
        field_12 = arg4;
        field_16 = arg5;
        field_20 = arg6;
    }

    // 0x100c28770: Viewport::Viewport(int, int, int, int, float, float) has the same machine code as Viewport::Set(int, int, int, int, float, float)

    // 0x100c28790
    uint32_t Viewport::operator==(const Viewport& viewport) const {
        if ((((field_0 == viewport.field_0) && (field_4 == viewport.field_4)) && (field_8 == viewport.field_8)) &&
            ((field_12 == viewport.field_12 && (field_16 == viewport.field_16)))) {
            return field_20 == viewport.field_20;
        }
        return 0;
    }

    // 0x100c28cf0
    void TextureRenderBuffer::BindBackColourRenderBuffer() {
        BindNativeBackBuffer(1029);
    }

    // 0x100c28d00
    void TextureRenderBuffer::BindBackDepthRenderBuffer() {
        BindNativeBackBuffer(6145);
    }

    // 0x100c35140
    RenderPipelineState::RenderPipelineState()
        : m_rasteriserState(nullptr), m_pShaderProgram(nullptr), field_0(0), field_8(0) {
        Clear();
    }

    // 0x100c35910
    RenderPipelineState::~RenderPipelineState() {
        field_552.~fixed_vector();
        field_496.~fixed_vector();
        field_328.~fixed_vector();
        field_256.~fixed_vector();
        field_200.~fixed_vector();
        field_32.~fixed_vector();
    }

    // 0x100c43050
    RenderPipelineState::RenderPipelineState(const RenderPipelineState& renderPipelineState) {
        long lVar1 = renderPipelineState.field_0;
        long lVar2 = renderPipelineState.field_8;
        BlendMode* pBVar3 = renderPipelineState.m_pShaderProgram;
        m_rasteriserState = renderPipelineState.m_rasteriserState;
        m_pShaderProgram = pBVar3;
        field_0 = lVar1;
        field_8 = lVar2;
        new (&field_32)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer const*>, 8ul>(renderPipelineState.field_32);
        new (&field_200) eastl::fixed_vector<eastl::pair<unsigned int, ShaderStorageBuffer const*>, 1ul>(
            renderPipelineState.field_200);
        new (&field_256) eastl::fixed_vector<ShaderTextureSamplerData, 1ul>(renderPipelineState.field_256);
        new (&field_328) eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer const*>, 8ul>(
            renderPipelineState.field_328);
        new (&field_496) eastl::fixed_vector<eastl::pair<unsigned int, ShaderStorageBuffer const*>, 1ul>(
            renderPipelineState.field_496);
        new (&field_552) eastl::fixed_vector<ShaderTextureSamplerData, 16ul>(renderPipelineState.field_552);
    }

} // namespace jag::render
