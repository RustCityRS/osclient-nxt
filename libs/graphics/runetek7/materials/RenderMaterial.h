// libs/graphics/runetek7/materials/RenderMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class RenderMaterial : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RenderMaterial();
        virtual void DestroyRenderingResources();
        virtual void Activate(render::RenderContext& arg1);
        void GetOptions();
        void GetOptions() const;
        void GetBlendMode() const;
        uint64_t GetAlphaMode() const;
        uint32_t GetEnvironmentMaterialID() const;
        void SetViewportMapID(int arg1);
        void SetAlphaTestThreshold(unsigned char arg1);
        void SetOption(unsigned int arg1, bool arg2);
        int GetViewportMapID() const;
        void SetEnvironmentMaterialID(int enumOptionToggle);
        void CanRenderInPasses(const RenderPassBitSet& renderPassBitSet) const;
        void GetOption(unsigned int arg1) const;
        unsigned char GetAlphaTestThreshold() const;
        void SetAlphaMode(const AlphaMode* alphaMode);
        bool IsAlpha() const;
        void SetBlendMode(const BlendMode* blendMode);
        RenderMaterial(RenderMaterial&& renderMaterial);
        RenderMaterial(const RenderMaterial& renderMaterial);
        RenderMaterial* operator=(const RenderMaterial& renderMaterial);
        void GetRenderPassEffect(RenderPassType renderPassType);
        RenderMaterial();
        void GetRenderPassEffect(RenderPassType renderPassType) const;

    private:
        uint8_t _unknown_9[7];
        uint8_t* m_alphaMode;
        uint8_t* m_pBlendMode;
        unsigned char m_alphaTestThreshold;
        uint8_t _unknown_33[3];
        uint32_t m_environmentMaterialID;
        int m_viewportMapID;
        uint8_t _unknown_44[484];
        Callstack field_528;
    };

    // 0x1001cc190
    void RenderMaterial::SetOption(unsigned int arg1, bool arg2) {
        field_8 = eastl::bitset<32ul, unsigned long long>::set((unsigned long)arg1, arg2);
    }

    // 0x1007b7240
    void RenderMaterial::CanRenderInPasses(const RenderPassBitSet& renderPassBitSet) const {
        operator&(renderPassBitSet, (RenderPassBitSet*)field_528);
    }

    // 0x1007b81b0
    void RenderMaterial::GetOption(unsigned int arg1) const {
        field_8.test((unsigned long)arg1);
    }

    // 0x10080ea00
    void RenderMaterial::SetAlphaMode(const AlphaMode* alphaMode) {
        m_rasteriserState = alphaMode;
    }

    // 0x10080ef40
    bool RenderMaterial::IsAlpha() const {
        uint8_t* puVar1 = m_alphaMode;
        return puVar1 == AlphaMode::ALPHA_BLENDED || puVar1 == AlphaMode::ALPHA_TESTED;
    }

    // 0x1008219d0
    void RenderMaterial::SetBlendMode(const BlendMode* blendMode) {
        m_pShaderProgram = blendMode;
    }

    // 0x10092f850
    void RenderMaterial::GetRenderPassEffect(RenderPassType renderPassType) {
        if (9 < renderPassType) {
            LogAssert("renderPass < SCENE_RENDER_PASS_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RenderMaterial.h",
                      78, nullptr);
        }
        unsigned int uVar1 =
            oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(renderPassType);
        field_48[(unsigned long)uVar1];
    }

    // 0x10092fd50
    RenderMaterial::RenderMaterial() {
        new (&field_8) eastl::bitset();
        m_alphaMode = AlphaMode::ALPHA_OPAQUE;
        m_pBlendMode = BlendMode::NORMAL;
        m_alphaTestThreshold = '\0';
        m_environmentMaterialID = 4294967295;
        m_viewportMapID = -1;
        new (&field_48) std::array<RenderPassEffect, 10ul>();
        new (field_528) callstack::Callstack();
    }

    // 0x10092fdc0
    RenderMaterial::~RenderMaterial() {
        field_48.~array();
    }

    // 0x100931280
    void RenderMaterial::GetRenderPassEffect(RenderPassType renderPassType) const {
        if (9 < renderPassType) {
            LogAssert("renderPass < SCENE_RENDER_PASS_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RenderMaterial.h",
                      79, nullptr);
        }
        unsigned int uVar1 =
            oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(renderPassType);
        field_48[(unsigned long)uVar1];
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001cc1c0
    SamplerOverride::SamplerOverride(jag::graphics::RT7Core& rt7Core, const render::SamplerState* samplerState) {
        function<bool(shared_ptr<jag::graphics::TextureAtlas>&)> local_68[56];
        long local_30;

        field_0 = rt7Core;
        field_8 = samplerState;
        new (&field_16) eastl::hash_map<jag::graphics::TextureAtlas*, render::SamplerState>(local_70);
        auto this_00 = field_0->GetTextureManager();
        auto this_01 = this_00->GetTextureAtlasManager();
        std::function<bool(shared_ptr<jag::graphics::TextureAtlas>&)>::function<
            SamplerOverride::SamplerOverride(jag::graphics::RT7Core&, render::SamplerState const*)::__1, void>(
            local_68, (__1*)this);
        this_01->IterateAtlases(local_68);
    }

    // 0x1001cc2c0
    SamplerOverride::~SamplerOverride() {
        function<bool(shared_ptr<jag::graphics::TextureAtlas>&)> local_58[48];
        long local_28;

        auto this_00 = field_0->GetTextureManager();
        auto this_01 = this_00->GetTextureAtlasManager();
        std::function<bool(shared_ptr<jag::graphics::TextureAtlas>&)>::function<
            SamplerOverride::~SamplerOverride()::__2, void>(local_58, (__2*)this);
        this_01->IterateAtlases(local_58);
        field_16.~hash_map();
    }

} // namespace jag::oldscape::rseven
