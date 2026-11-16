// libs/graphics/runetek7/materials/RenderMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class RenderMaterial : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RenderMaterial();
        virtual void DestroyRenderingResources();
        virtual Activate(render::RenderContext&);
        GetOptions();
        GetOptions() const;
        GetBlendMode() const;
        GetAlphaMode() const;
        GetEnvironmentMaterialID() const;
        SetViewportMapID(int);
        void SetAlphaTestThreshold(unsigned char);
        void SetOption(unsigned int, bool);
        GetViewportMapID() const;
        SetEnvironmentMaterialID(int);
        void CanRenderInPasses(RenderPassBitSet const&) const;
        void GetOption(unsigned int) const;
        uchar GetAlphaTestThreshold() const;
        SetAlphaMode(AlphaMode const*);
        IsAlpha() const;
        SetBlendMode(BlendMode const*);
        RenderMaterial(RenderMaterial&&);
        RenderMaterial(RenderMaterial const&);
        RenderMaterial* operator=(RenderMaterial const&);
        void GetRenderPassEffect(RenderPassType);
        RenderMaterial();
        void GetRenderPassEffect(RenderPassType) const;

        // data members, from how the methods use this: 544 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[7];
        undefined* field_16;        // offset 16
        undefined* field_24;        // offset 24
        uchar m_alphaTestThreshold; // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        char _unknown_44[484];
        Callstack field_528; // offset 528
    };

    // 0x1001cc190, 32 bytes, inline, placed by class name and debug map
    // RenderMaterial::SetOption(unsigned int, bool)
    void RenderMaterial::SetOption(uint param_1, bool param_2) {
        (&field_8, (ulong)param_1, param_2)->set();
    }

    // 0x1007b7240, 32 bytes, inline, placed by class name
    // RenderMaterial::CanRenderInPasses(RenderPassBitSet const&) const
    void RenderMaterial::CanRenderInPasses(RenderPassBitSet* param_1) {
        operator&(param_1, (RenderPassBitSet*)field_528);
    }

    // 0x1007b81b0, 32 bytes, inline, placed by class name
    // RenderMaterial::GetOption(unsigned int) const
    void RenderMaterial::GetOption(uint param_1) {
        (&field_8, (ulong)param_1)->test();
    }

    // 0x10080ea00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RenderMaterial::SetAlphaMode(AlphaMode const*)
    /* render::RenderPipelineState::SetRasteriserState(render::RasteriserState const*) */

    void render::RenderPipelineState::SetRasteriserState(RasteriserState* param_1) {
        m_pRasteriserState = param_1;
    }

    // 0x10080ef40, 48 bytes, inline, placed by class name
    // RenderMaterial::IsAlpha() const
    undefined8 RenderMaterial::IsAlpha() {
        undefined* puVar1;

        puVar1 = field_16;
        return CONCAT71((int7)((ulong)puVar1 >> 8),
                        puVar1 == AlphaMode::ALPHA_BLENDED || puVar1 == AlphaMode::ALPHA_TESTED);
    }

    // 0x1008219d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RenderMaterial::SetBlendMode(BlendMode const*)
    /* render::RenderPipelineState::SetShaderProgram(render::ShaderProgram const*) */

    void render::RenderPipelineState::SetShaderProgram(ShaderProgram* param_1) {
        m_pShaderProgram = param_1;
    }

    // 0x1008cc3f0, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderMaterial::~RenderMaterial(): jumps straight to the base-object destructor

    // 0x1008cc400, 32 bytes, deleting destructor, inline, placed by class name
    // RenderMaterial::~RenderMaterial()
    void RenderMaterial::~RenderMaterial() {
        ~SkyBoxMaterial();
        operator_delete(this);
    }

    // 0x10092f850, 80 bytes, inline, placed by class name
    // RenderMaterial::GetRenderPassEffect(RenderPassType)
    void RenderMaterial::GetRenderPassEffect(uint param_2) {
        uint uVar1;

        if (9 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPass < SCENE_RENDER_PASS_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RenderMaterial.h",
                      78, (char*)0);
        }
        uVar1 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_2);
        std::array<RenderPassEffect, 10ul>::operator[]((array<RenderPassEffect, 10ul>*)&field_48, (ulong)uVar1);
    }

    // 0x10092fd50, 112 bytes, base-object constructor, inline, placed by class name
    // RenderMaterial::RenderMaterial()
    void RenderMaterial::RenderMaterial() {
        field_0 = &PTR__SkyBoxMaterial_100f184f0;
        new (&field_8) eastl::bitset<56ul, unsigned long long>();
        field_16 = AlphaMode::ALPHA_OPAQUE;
        field_24 = BlendMode::NORMAL;
        m_alphaTestThreshold = '\0';
        field_36 = 4294967295;
        field_40 = 4294967295;
        new (&field_48) std::array<RenderPassEffect, 10ul>();
        new (field_528) callstack::Callstack();
    }

    // 0x10092fdc0, 32 bytes, base-object destructor, inline, placed by class name
    // RenderMaterial::~RenderMaterial()
    void RenderMaterial::~RenderMaterial() {
        field_0 = &PTR__SkyBoxMaterial_100f184f0;
        (&field_48)->~array();
    }

    // 0x100931280, 80 bytes, inline, placed by class name
    // RenderMaterial::GetRenderPassEffect(RenderPassType) const
    void RenderMaterial::GetRenderPassEffect(uint param_2) {
        uint uVar1;

        if (9 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPass < SCENE_RENDER_PASS_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RenderMaterial.h",
                      79, (char*)0);
        }
        uVar1 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_2);
        std::array<RenderPassEffect, 10ul>::operator[]((array<RenderPassEffect, 10ul>*)&field_48, (ulong)uVar1);
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001cc1c0, 192 bytes, base-object constructor, placed by debug map only (low confidence)
    // SamplerOverride::SamplerOverride(jag::graphics::RT7Core&, render::SamplerState const*)
    void SamplerOverride::SamplerOverride(RT7Core* param_1, SamplerState* param_2) {
        TextureManager* this_00;
        TextureAtlasManager* pTVar1;
        allocator local_70[8];
        function<bool(shared_ptr<jag::graphics::TextureAtlas>&)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = param_1;
        field_8 = param_2;
        eastl::allocator::allocator(local_70, "EASTL hash_map");
        new (&field_16, local_70)
            eastl::hash_map<jag::graphics::TextureAtlas*, render::SamplerState,
                            eastl::hash<jag::graphics::TextureAtlas*>, eastl::equal_to<jag::graphics::TextureAtlas*>,
                            eastl::allocator, false>();
        this_00 = (TextureManager*)field_0->GetTextureManager();
        pTVar1 = (TextureAtlasManager*)this_00->GetTextureAtlasManager();
        std::function<bool(shared_ptr<jag::graphics::TextureAtlas>&)>::function<
            SamplerOverride::SamplerOverride(jag::graphics::RT7Core&, render::SamplerState_const*)::__1, void>(local_68,
                                                                                                               this);
        pTVar1->IterateAtlases(local_68);
        std::function<bool(shared_ptr<jag::graphics::TextureAtlas>&)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001cc2c0, 160 bytes, base-object destructor, placed by debug map only (low confidence)
    // SamplerOverride::~SamplerOverride()
    void SamplerOverride::~SamplerOverride() {
        TextureManager* this_00;
        TextureAtlasManager* pTVar1;
        function<bool(shared_ptr<jag::graphics::TextureAtlas>&)> local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (TextureManager*)field_0->GetTextureManager();
        pTVar1 = (TextureAtlasManager*)this_00->GetTextureAtlasManager();
        std::function<bool(shared_ptr<jag::graphics::TextureAtlas>&)>::function<
            SamplerOverride::~SamplerOverride()::__2, void>(local_58, this);
        pTVar1->IterateAtlases(local_58);
        std::function<bool(shared_ptr<jag::graphics::TextureAtlas>&)>::~function(local_58);
        (&field_16)->~hash_map();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::rseven

namespace jag::math {
    // 0x1001cc1b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(Vector4T<float>&&, Vector4T<float>&&, Vector4T<float>&&, Vector4T<float>&&): jumps straight to the base-object constructor

} // namespace jag::math
