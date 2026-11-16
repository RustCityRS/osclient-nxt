// libs/graphics/runetek7/water/WaterPatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterPatch : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~WaterPatch();
        virtual void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        virtual GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);
        virtual void RenderDebug(RenderPassType, DrawableElement&) const;
        GetAABB() const;
        RenderMaterial GetMaterial() const;
        void SetFade(float);
        WaterPatch(RT7Core*, math::AABB const&, bool, WaterPatchConfig const&,
                   eastl::vector<unsigned short, eastl::allocator>&&,
                   eastl::vector<WaterPatchVertex, eastl::allocator>&&, math::Matrix44T<float> const*);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        uint GetFaceCount() const;
        GetWorldOBB() const;
        void UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     EffectManager const&, float);
        void UpdateMiniMapPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     EffectManager const&, float);
        void GetWorldTransform() const;
        static /* 7 bytes */ m_showPatches; // = { 1, 0, 0, 0, 0, 0, 0 }
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullWaterPatch;
        static /* 8 bytes */ m_showWorldAABB;

        // data members, from how the methods use this: 1632 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        undefined8 m_aABB;   // offset 16
        undefined8 field_24; // offset 24
        undefined1 field_32; // offset 32
        char _unknown_33[7];
        undefined8 field_40;       // offset 40
        RenderMaterial m_material; // offset 48
        char _unknown_592[544];
        bool field_1136; // offset 1136
        char _unknown_1137[19];
        undefined8 field_1156; // offset 1156
        undefined4 field_1164; // offset 1164
        int field_1168;        // offset 1168
        int field_1172;        // offset 1172
        int field_1176;        // offset 1176
        char _unknown_1180[4];
        undefined4 field_1184; // offset 1184
        char _unknown_1188[4];
        Matrix44T* field_1192; // offset 1192
        char _unknown_1200[64];
        uint m_faceCount; // offset 1264
        char _unknown_1268[172];
        InputAssemblerState field_1440; // offset 1440
    };

    // 0x1003fb020, 48 bytes, inline, placed by class name and debug map
    // WaterPatch::SetFade(float)
    void WaterPatch::SetFade(float param_1) {
        WaterParameters* this_00;

        this_00 = (WaterParameters*)m_material->GetWaterParameters();
        this_00->SetFade(param_1);
    }

    // 0x1007bb4d0, 16 bytes, inline, placed by class name
    // WaterPatch::GetFaceCount() const
    uint WaterPatch::GetFaceCount() {
        return m_faceCount;
    }

    // 0x1007c8b00, 64 bytes, inline, placed by class name
    // WaterPatch::GetWorldTransform() const
    void WaterPatch::GetWorldTransform() {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8* puVar8;
        long in_RSI;

        puVar8 = *(undefined8**)(in_RSI + 1192);
        if (*(undefined8**)(in_RSI + 1192) == (undefined8*)0) {
            puVar8 = (undefined8*)PTR_IDENTITY_100ee6730;
        }
        ppuVar1 = (undefined**)*puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        uVar5 = puVar8[4];
        uVar6 = puVar8[5];
        uVar7 = puVar8[7];
        *(undefined8*)m_material = puVar8[6];
        *(undefined8*)(m_material + 8) = uVar7;
        *(undefined8*)&field_32 = uVar5;
        field_40 = uVar6;
        m_aABB = uVar3;
        field_24 = uVar4;
        field_0 = ppuVar1;
        *(undefined8*)&field_8 = uVar2;
    }

} // namespace jag::graphics
