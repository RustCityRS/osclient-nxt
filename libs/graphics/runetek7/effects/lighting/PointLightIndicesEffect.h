// libs/graphics/runetek7/effects/lighting/PointLightIndicesEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class PointLightIndicesEffect : public Effect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PointLightIndicesEffect();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        GetMapSquareFineCoordBounds();
        GetEffects();
        GetVisiblePointLights();
        void IsReady() const;
        PointLightIndicesEffect(RT7Core&, int);
        void AddEffect(math::Vector3T<float> const&, shared_ptr<PointLightIndicesEffect> const&);
        void SetMapSquareFineCoordBounds(int, int);
        void AddEffect(int, int, shared_ptr<PointLightIndicesEffect> const&);
        void RemoveEffect(int, int);
        void RemoveEffect(math::Vector3T<float> const&);
        GetEffect(int, int);
        GetEffect(math::Vector3T<float> const&);
        ulong TestVisiblePointLightInfluence(math::Sphere const&);
        void SetLevel(int);
        void SetFineCoordBounds(math::Vector4T<float> const&);
        void SetTexture(shared_ptr<render::Texture> const&);
        void SetPointLightIntensities(eastl::vector<float, eastl::allocator> const&);
        static /* 1552 bytes */ s_effectMap;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ s_nullEffect;

        // data members, from how the methods use this: 104 bytes, the first 8 are Effect
        uint field_8; // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
        uint field_32;       // offset 32
        char _unknown_36[4];
        undefined1 field_40; // offset 40
        char _unknown_41[7];
        int field_48;  // offset 48
        uint field_52; // offset 52
        char _unknown_56[48];
    };

    // 0x1001cd940, 16 bytes, inline, placed by class name and debug map
    // PointLightIndicesEffect::GetEffects()
    undefined1* PointLightIndicesEffect::GetEffects() {
        return &s_effectMap;
    }

    // 0x1001cd990, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PointLightIndicesEffect::GetVisiblePointLights()
    /* OpenGLView::GetCursorMutex() const */

    undefined1* OpenGLView::GetCursorMutex() {
        return &field_96;
    }

    // 0x1001cd990: the linker folded this into PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    SpriteAtlasUsageMap::GetFilled() const;

    // 0x1007b94e0, 32 bytes, inline, placed by class name
    // PointLightIndicesEffect::IsReady() const
    void PointLightIndicesEffect::IsReady() {
        operator!=((shared_ptr*)field_16, (_func_decltype_nullptr*)0);
    }

    // 0x100937ec0, 16 bytes, complete-object destructor, inline, placed by class name
    // PointLightIndicesEffect::~PointLightIndicesEffect(): jumps straight to the base-object destructor

    // 0x100937ed0, 32 bytes, deleting destructor, inline, placed by class name
    // PointLightIndicesEffect::~PointLightIndicesEffect()
    void PointLightIndicesEffect::~PointLightIndicesEffect() {
        ~PointLightIndicesEffect(this);
        operator_delete(this);
    }

    // 0x100939740, 64 bytes, base-object destructor, inline, placed by class name
    // PointLightIndicesEffect::~PointLightIndicesEffect()
    void PointLightIndicesEffect::~PointLightIndicesEffect() {
        field_0 = &PTR__PointLightIndicesEffect_100f19ed0;
        (&field_96)->~vector();
        (&field_40)->~unique_ptr();
        field_16->~shared_ptr();
        ~AutoSingleton();
    }

} // namespace jag::graphics
