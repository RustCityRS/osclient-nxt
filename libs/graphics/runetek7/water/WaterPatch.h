// libs/graphics/runetek7/water/WaterPatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterPatch : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~WaterPatch();
        virtual void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager);
        virtual void GetTransformedTriangle(unsigned int arg1, math::Vector4T<float> (&arg2)[3]);
        virtual void RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const;
        uint8_t* GetAABB() const;
        RenderMaterial GetMaterial() const;
        void SetFade(float arg1);
        WaterPatch(RT7Core* rt7Core, const math::AABB& aabb, bool arg3, const WaterPatchConfig& waterPatchConfig,
                   eastl::vector<unsigned short>&& arg5, eastl::vector<WaterPatchVertex>&& waterPatchVertexs,
                   const math::Matrix44T<float>* matrix44);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        unsigned int GetFaceCount() const;
        math::OBB GetWorldOBB() const;
        void UpdateForwardPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const EffectManager& effectManager, float arg6);
        void UpdateMiniMapPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const EffectManager& effectManager, float arg6);
        void GetWorldTransform() const;
        static uint8_t m_showPatches[7]; // = { 1, 0, 0, 0, 0, 0, 0 }
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullWaterPatch; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static int64_t m_showWorldAABB;

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        uint64_t m_aABB;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        RenderMaterial m_material;
        uint8_t _unknown_592[544];
        bool field_1136;
        uint8_t _unknown_1137[19];
        uint64_t field_1156;
        uint32_t field_1164;
        int field_1168;
        int field_1172;
        int field_1176;
        uint8_t _unknown_1180[4];
        uint32_t field_1184;
        uint8_t _unknown_1188[4];
        Matrix44T<float>* field_1192;
        uint8_t _unknown_1200[64];
        unsigned int m_faceCount;
        uint8_t _unknown_1268[172];
        InputAssemblerState field_1440;
    };

    // 0x1003fb020
    void WaterPatch::SetFade(float arg1) {
        m_material->GetWaterParameters()->SetFade(arg1);
    }

    // 0x1007bb4d0
    unsigned int WaterPatch::GetFaceCount() const {
        return m_faceCount;
    }

    // 0x1007c8b00
    void WaterPatch::GetWorldTransform() const {
        long in_RSI;

        uint64_t* puVar8 = *(uint64_t**)(in_RSI + 1192);
        if (*(uint64_t**)(in_RSI + 1192) == nullptr) {
            puVar8 = (uint64_t*)PTR_IDENTITY_100ee6730;
        }
        WaterPatch_vtbl* pWVar1 = (WaterPatch_vtbl*)*puVar8;
        uint64_t uVar2 = puVar8[1];
        uint64_t uVar3 = puVar8[2];
        uint64_t uVar4 = puVar8[3];
        uint64_t uVar5 = puVar8[4];
        uint64_t uVar6 = puVar8[5];
        uint64_t uVar7 = puVar8[7];
        *(uint64_t*)m_material = puVar8[6];
        *(uint64_t*)(m_material + 8) = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        m_aABB = uVar3;
        field_24 = uVar4;
        this->_vptr = pWVar1;
        *(uint64_t*)&field_8 = uVar2;
    }

} // namespace jag::graphics
