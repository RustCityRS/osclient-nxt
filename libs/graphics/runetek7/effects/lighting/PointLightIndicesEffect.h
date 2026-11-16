// libs/graphics/runetek7/effects/lighting/PointLightIndicesEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class PointLightIndicesEffect : public Effect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PointLightIndicesEffect();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint8_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        uint8_t* GetMapSquareFineCoordBounds();
        void GetEffects();
        uint8_t* GetVisiblePointLights();
        void IsReady() const;
        PointLightIndicesEffect(RT7Core& rt7Core, int arg2);
        void AddEffect(const math::Vector3T<float>& vector3,
                       const shared_ptr<PointLightIndicesEffect>& pointLightIndicesEffect);
        void SetMapSquareFineCoordBounds(int arg1, int arg2);
        void AddEffect(int arg1, int arg2, const shared_ptr<PointLightIndicesEffect>& pointLightIndicesEffect);
        void RemoveEffect(int arg1, int arg2);
        void RemoveEffect(const math::Vector3T<float>& vector3);
        shared_ptr* GetEffect(int arg1, int arg2);
        shared_ptr* GetEffect(const math::Vector3T<float>& vector3);
        unsigned long TestVisiblePointLightInfluence(const math::Sphere& sphere);
        void SetLevel(int arg1);
        void SetFineCoordBounds(const math::Vector4T<float>& vector4);
        void SetTexture(const shared_ptr<render::Texture>& texture);
        void SetPointLightIntensities(const eastl::vector<float>& arg1);
        static map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                   eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true>>
            s_effectMap;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            s_nullEffect; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        shared_ptr field_16;
        unsigned int field_32;
        uint8_t _unknown_36[12];
        int field_48;
        unsigned int field_52;
        uint8_t _unknown_56[48];
    };

    // 0x1001cd940
    void PointLightIndicesEffect::GetEffects() {
        return (
            rbtree<eastl::string, eastl::pair<eastl::string const, bool>, eastl::less<eastl::string_>, eastl::allocator,
                   eastl::use_first<eastl::pair<eastl::string const, bool> _>, true, true>*)&s_effectMap;
    }

    // 0x1001cd990
    uint8_t* PointLightIndicesEffect::GetVisiblePointLights() {
        return &field_96;
    }

    // 0x1001cd990: SpriteAtlasUsageMap::GetFilled() const has the same machine code as PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1007b94e0
    void PointLightIndicesEffect::IsReady() const {
        *field_16 != nullptr;
    }

    // 0x100939740
    PointLightIndicesEffect::~PointLightIndicesEffect() {
        field_96.~vector();
        ((unique_ptr<float[]>*)&field_40)->~unique_ptr();
        field_16->~shared_ptr();
    }

} // namespace jag::graphics
