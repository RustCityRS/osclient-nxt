// libs/hal/render/state/RenderPipelineState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::render {
    class RenderPipelineState {
    public:
        GetBlendState() const;
        GetDepthStencilState() const;
        SetDepthStencilState(DepthStencilState const*);
        SetBlendState(BlendState const*);
        GetShaderProgram() const;
        GetRasteriserState() const;
        GetVSConstBuffers() const;
        GetPSConstBuffers() const;
        GetVSStorageBuffers() const;
        GetVSTextureSamplerPairs() const;
        void SetRasteriserState(RasteriserState const*);
        GetPSTextureSamplerPairs() const;
        void SetShaderProgram(ShaderProgram const*);
        GetPSStorageBuffers() const;
        void Clear();
        void SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool);
        void SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void SetVSShaderStorageBuffer(unsigned int, ShaderStorageBuffer const*);
        void ClearVSTextureSamplerPairs();
        void SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool);
        void SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void SetPSShaderStorageBuffer(unsigned int, ShaderStorageBuffer const*);
        void ClearPSTextureSamplerPairs();
        bool operator==(RenderPipelineState const&) const;
        RenderPipelineState();
        ~RenderPipelineState();
        RenderPipelineState(RenderPipelineState const&);

        // data members, from how the methods use this: 560 bytes
        long field_0;                        // offset 0
        long field_8;                        // offset 8
        RasteriserState* m_pRasteriserState; // offset 16
        ShaderProgram* m_pShaderProgram;     // offset 24
        char _unknown_32[528];
    };

    class Viewport {
    public:
        Contains(int, int) const;
        float GetViewAspectRatio() const;
        GetScreenRect() const;
        bool IsValid() const;
        Viewport(int, int, int, int, float, float);
        Set(int, int, int, int, float, float);
        operator==(Viewport const&) const;

        // data members, from how the methods use this: 28 bytes
        int field_0;    // offset 0
        int field_4;    // offset 4
        int field_8;    // offset 8
        int field_12;   // offset 12
        float field_16; // offset 16
        float field_20; // offset 20
        char _unknown_24[4];
    };

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    RenderPipelineState::GetBlendState() const;

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    RenderPipelineState::GetDepthStencilState() const;

    // 0x10000b300: the linker folded this into eastl::string::Layout::SetHeapSize(unsigned long), which has identical code
    RenderPipelineState::SetDepthStencilState(DepthStencilState const*);

    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    RenderPipelineState::SetBlendState(BlendState const*);

    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    RenderPipelineState::GetShaderProgram() const;

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    RenderPipelineState::GetRasteriserState() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    RenderPipelineState::GetVSConstBuffers() const;

    // 0x100049090: the linker folded this into oldscape::option::Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::GetDefaultValue() const, which has identical code
    RenderPipelineState::GetPSConstBuffers() const;

    // 0x100414eb0: the linker folded this into game::MapSquare::GetClientCompositeData() const, which has identical code
    RenderPipelineState::GetVSStorageBuffers() const;

    // 0x100431760: the linker folded this into game::Location::GetLocationType() const, which has identical code
    RenderPipelineState::GetVSTextureSamplerPairs() const;

    // 0x10080ea00: the linker folded this into graphics::RenderMaterial::SetAlphaMode(graphics::AlphaMode const*), which has identical code
    RenderPipelineState::SetRasteriserState(RasteriserState const*);

    // 0x100814930: the linker folded this into graphics::ModelMaterial::GetEnvironmentMap() const, which has identical code
    RenderPipelineState::GetPSTextureSamplerPairs() const;

    // 0x1008219d0: the linker folded this into graphics::RenderMaterial::SetBlendMode(graphics::BlendMode const*), which has identical code
    RenderPipelineState::SetShaderProgram(ShaderProgram const*);

    // 0x1009ad260, 96 bytes, inline, placed by class header (inline)
    // Viewport::GetScreenRect() const
    Viewport* Viewport::GetScreenRect() {
        Viewport* in_RSI;

        if (IsValid(in_RSI) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "IsValid()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/RenderTypes.h",
                358, (char*)0);
        }
        new (this) oldscape::dash3d::GridRect(in_RSI->field_0, in_RSI->field_4, in_RSI->field_8, in_RSI->field_12);
        return this;
    }

    // 0x1009e2290: the linker folded this into Js5WorkerThread::GetClientStream() const, which has identical code
    RenderPipelineState::GetPSStorageBuffers() const;

    // 0x100c1d2e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Viewport::Viewport(int, int, int, int, float, float): jumps straight to the base-object constructor

    // 0x100c28440, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RenderPipelineState::RenderPipelineState(): jumps straight to the base-object constructor

    // 0x100c28580, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RenderPipelineState::~RenderPipelineState(): jumps straight to the base-object destructor

    // 0x100c28770, 32 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Viewport::Set(int, int, int, int, float, float)
    /* Viewport::Viewport(int, int, int, int, float, float) */

    void Viewport::Viewport(int param_1, int param_2, int param_3, int param_4, float param_5, float param_6) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_12 = param_4;
        field_16 = param_5;
        field_20 = param_6;
    }

    // 0x100c28770: the linker folded this into Viewport::Set(int, int, int, int, float, float), which has identical code
    Viewport::Viewport(int, int, int, int, float, float);

    // 0x100c28790, 64 bytes, inline, placed by debug map only (low confidence)
    // Viewport::operator==(Viewport const&) const
    /* Viewport::TEMPNAMEPLACEHOLDERVALUE(Viewport const&) const */

    undefined4 Viewport::operator==(Viewport* param_1) {
        if ((((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) &&
            ((field_12 == param_1->field_12 && (field_16 == param_1->field_16)))) {
            return CONCAT31((int3)((uint)field_12 >> 8), field_20 == param_1->field_20);
        }
        return 0;
    }

    // 0x100c28cf0, 16 bytes, inline, placed by debug map only (low confidence)
    // TextureRenderBuffer::BindBackColourRenderBuffer()
    void TextureRenderBuffer::BindBackColourRenderBuffer() {
        BindNativeBackBuffer(this, 1029);
    }

    // 0x100c28d00, 16 bytes, inline, placed by debug map only (low confidence)
    // TextureRenderBuffer::BindBackDepthRenderBuffer()
    void TextureRenderBuffer::BindBackDepthRenderBuffer() {
        BindNativeBackBuffer(this, 6145);
    }

    // 0x100c35140, 240 bytes, base-object constructor, inline, placed by class name
    // RenderPipelineState::RenderPipelineState()
    void RenderPipelineState::RenderPipelineState() {
        m_pRasteriserState = (RasteriserState*)0;
        m_pShaderProgram = (ShaderProgram*)0;
        field_0 = 0;
        field_8 = 0;
        new (&field_32)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>, 8ul, true, eastl::allocator>();
        new (&field_200)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>, 1ul, true, eastl::allocator>();
        new (&field_256) eastl::fixed_vector<ShaderTextureSamplerData, 1ul, true, eastl::allocator>();
        new (&field_328)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>, 8ul, true, eastl::allocator>();
        new (&field_496)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>, 1ul, true, eastl::allocator>();
        new (&field_552) eastl::fixed_vector<ShaderTextureSamplerData, 16ul, true, eastl::allocator>();
        Clear(this);
    }

    // 0x100c35910, 96 bytes, base-object destructor, inline, placed by class name
    // RenderPipelineState::~RenderPipelineState()
    void RenderPipelineState::~RenderPipelineState() {
        (&field_552)->~fixed_vector();
        (&field_496)->~fixed_vector();
        (&field_328)->~fixed_vector();
        (&field_256)->~fixed_vector();
        (&field_200)->~fixed_vector();
        (&field_32)->~fixed_vector();
    }

    // 0x100c43040, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderPipelineState::RenderPipelineState(RenderPipelineState const&): jumps straight to the base-object constructor

    // 0x100c43050, 272 bytes, base-object constructor, inline, placed by class name
    // RenderPipelineState::RenderPipelineState(RenderPipelineState const&)
    void RenderPipelineState::RenderPipelineState(RenderPipelineState* param_1) {
        long lVar1;
        long lVar2;
        ShaderProgram* pSVar3;

        lVar1 = param_1->field_0;
        lVar2 = param_1->field_8;
        pSVar3 = param_1->m_pShaderProgram;
        m_pRasteriserState = param_1->m_pRasteriserState;
        m_pShaderProgram = pSVar3;
        field_0 = lVar1;
        field_8 = lVar2;
        new (&field_32, (fixed_vector*)&param_1->field_32)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>, 8ul, true, eastl::allocator>();
        new (&field_200, (fixed_vector*)&param_1->field_200)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>, 1ul, true, eastl::allocator>();
        new (&field_256, (fixed_vector*)&param_1->field_256)
            eastl::fixed_vector<ShaderTextureSamplerData, 1ul, true, eastl::allocator>();
        new (&field_328, (fixed_vector*)&param_1->field_328)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderConstBuffer_const*>, 8ul, true, eastl::allocator>();
        new (&field_496, (fixed_vector*)&param_1->field_496)
            eastl::fixed_vector<eastl::pair<unsigned int, ShaderStorageBuffer_const*>, 1ul, true, eastl::allocator>();
        new (&field_552, (fixed_vector*)&param_1->field_552)
            eastl::fixed_vector<ShaderTextureSamplerData, 16ul, true, eastl::allocator>();
    }

} // namespace jag::render
