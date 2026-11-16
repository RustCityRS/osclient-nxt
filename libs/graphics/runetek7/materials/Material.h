// libs/graphics/runetek7/materials/Material.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Material {
    public:
        GetEnvironmentMaterialID() const;
        IsValid() const;
        uint GetSize() const;
        GetMetalnessRoughnessMapSize() const;
        float GetSpecularExponent() const;
        uint GetID() const;
        GetMetalnessRoughnessMapID() const;
        GetWrapV() const;
        GetDiffuseMapID() const;
        int GetAlphaTestThreshold() const;
        GetViewportMapID() const;
        GetHideFacesMode() const;
        GetNormalEmissiveMapSize() const;
        HasCubemap() const;
        HasHighlighting() const;
        GetViewportMapUVScaleAndAnim() const;
        int GetDiffuseAlphaMapID() const;
        GetHDRNormalMapID() const;
        GetDiffuseAlphaMapSize() const;
        int GetEmissiveSourceColourARGB() const;
        GetMaterialAnimationH() const;
        bool IsRT7() const;
        char HasDiffuseMap() const;
        float GetFresnelExponent() const;
        GetDefaultNonMetalSpecular() const;
        byte IsLegacyMaterial() const;
        GetWrapU() const;
        uint GetVertexColourStrengthAsWhiteness() const;
        GetLegacyWhiteness() const;
        GetLegacyBrightness() const;
        ulong HasTextures() const;
        bool HasSpecularMap() const;
        bool HasEmissiveMap() const;
        IsGlobalEnvironmentMapped() const;
        IsUnlit() const;
        IsShadowCaster() const;
        IsShadowReceiver() const;
        HasTransparencyCutout() const;
        GetRefractionIndex() const;
        GetRefractionDepthBias() const;
        GetEmissiveScale() const;
        GetNormalEmissiveMapID() const;
        GetMaterialAnimationV() const;
        GetRefractionAmount() const;
        GetSpecularScale() const;
        GetNormalScale() const;
        bool HasEmissiveSourceColour() const;
        GetAlphaMode() const;
        GetBlendMode() const;
        byte HasForcedTextures() const;
        HasNormalMap() const;
        HasHDRMap() const;
        Material();
        void Initialise(int, MaterialRaw const&);
        void InitialiseDummy(bool);
        void InitialiseLoading(bool);

        // data members, from how the methods use this: 216 bytes
        undefined1 m_valid; // offset 0
        char field_1;       // offset 1
        char _unknown_2[2];
        uint m_iD;                 // offset 4
        uint m_size;               // offset 8
        char m_hasDiffuseMap;      // offset 12
        undefined1 m_hasNormalMap; // offset 13
        undefined1 field_14;       // offset 14
        undefined1 m_hasHDRMap;    // offset 15
        char field_16;             // offset 16
        bool m_hasEmissiveMap;     // offset 17
        bool m_hasSpecularMap;     // offset 18
        char _unknown_19[1];
        undefined4 m_diffuseMapID;            // offset 20
        undefined4 m_hDRNormalMapID;          // offset 24
        undefined1 m_globalEnvironmentMapped; // offset 28
        undefined1 field_29;                  // offset 29
        char _unknown_30[2];
        float m_specularExponent;               // offset 32
        byte m_legacyMaterial;                  // offset 36
        undefined1 m_legacyWhiteness;           // offset 37
        undefined1 m_legacyBrightness;          // offset 38
        char field_39;                          // offset 39
        int m_diffuseAlphaMapID;                // offset 40
        undefined4 m_normalEmissiveMapID;       // offset 44
        undefined4 m_metalnessRoughnessMapID;   // offset 48
        undefined4 m_diffuseAlphaMapSize;       // offset 52
        undefined4 m_normalEmissiveMapSize;     // offset 56
        undefined4 m_metalnessRoughnessMapSize; // offset 60
        int m_emissiveSourceColourARGB;         // offset 64
        undefined4 m_emissiveScale;             // offset 68
        float m_fresnelExponent;                // offset 72
        undefined4 m_defaultNonMetalSpecular;   // offset 76
        float field_80;                         // offset 80
        char _unknown_84[4];
        undefined* m_pHideFacesMode;        // offset 88
        undefined4 m_environmentMaterialID; // offset 96
        undefined4 m_viewportMapID;         // offset 100
        char _unknown_104[24];
        undefined4 m_materialAnimationH;    // offset 128
        undefined4 m_materialAnimationV;    // offset 132
        undefined1 m_unlit;                 // offset 136
        undefined1 m_shadowCaster;          // offset 137
        undefined1 m_shadowReceiver;        // offset 138
        byte m_hasForcedTextures;           // offset 139
        undefined1 m_hasHighlighting;       // offset 140
        undefined1 m_hasTransparencyCutout; // offset 141
        char _unknown_142[2];
        undefined4 m_specularScale;       // offset 144
        undefined4 m_normalScale;         // offset 148
        undefined4 m_refractionAmount;    // offset 152
        undefined4 m_refractionIndex;     // offset 156
        undefined4 m_refractionDepthBias; // offset 160
        char _unknown_164[4];
        undefined* m_blendMode;   // offset 168
        undefined* m_alphaMode;   // offset 176
        int m_alphaTestThreshold; // offset 184
        char _unknown_188[4];
        undefined* m_pWrapU;  // offset 192
        undefined* m_pWrapV;  // offset 200
        undefined4 field_208; // offset 208
        char _unknown_212[4];
    };

    class MaterialInfo {
    public:
        MaterialInfo(int, std::array<int, 3ul> const&, std::array<unsigned int, 3ul> const&);

        // data members, from how the methods use this: 32 bytes
        int field_0;         // offset 0
        undefined8 field_4;  // offset 4
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    // 0x10062b9b0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Material::IsLegacyMaterial() const
    /* GeometryBatch::HasFaceTransparency() const */

    byte GeometryBatch::HasFaceTransparency() {
        return m_hasFaceTransparency;
    }

    // 0x10080ecf0, 48 bytes, inline, placed by class name
    // Material::GetVertexColourStrengthAsWhiteness() const
    uint Material::GetVertexColourStrengthAsWhiteness() {
        return (int)(255.0 - field_80 * 255.0) & 255;
    }

    // 0x10080ed20, 16 bytes, inline, placed by class name
    // Material::GetLegacyWhiteness() const
    undefined1 Material::GetLegacyWhiteness() {
        return m_legacyWhiteness;
    }

    // 0x10080ed30, 16 bytes, inline, placed by class name
    // Material::GetLegacyBrightness() const
    undefined1 Material::GetLegacyBrightness() {
        return m_legacyBrightness;
    }

    // 0x10081c0f0, 112 bytes, inline, placed by class name
    // Material::HasTextures() const
    ulong Material::HasTextures() {
        char cVar1;
        int iVar2;
        uint uVar3;
        undefined8 unaff_R14;
        undefined7 uVar5;
        ulong uVar4;

        cVar1 = IsRT7(this);
        uVar5 = (undefined7)((ulong)unaff_R14 >> 8);
        if (cVar1 == '\0') {
            cVar1 = Ready();
            uVar4 = CONCAT71(uVar5, 1);
            if (cVar1 == '\0') {
                cVar1 = IsWeighted();
                if (cVar1 == '\0') {
                    uVar3 = HasHDRMap(this);
                    uVar4 = (ulong)uVar3;
                }
            }
        } else {
            iVar2 = GetEndPosition();
            uVar4 = CONCAT71(uVar5, 1);
            if (iVar2 == -1) {
                iVar2 = GetNormalEmissiveMapID(this);
                if (iVar2 == -1) {
                    iVar2 = AlreadyWritten();
                    uVar4 = CONCAT71(uVar5, iVar2 != -1);
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1008219e0, 16 bytes, inline, placed by class name
    // Material::HasSpecularMap() const
    undefined1 Material::HasSpecularMap() {
        return m_hasSpecularMap;
    }

    // 0x1008219f0, 16 bytes, inline, placed by class name
    // Material::HasEmissiveMap() const
    undefined1 Material::HasEmissiveMap() {
        return m_hasEmissiveMap;
    }

    // 0x100821a00, 16 bytes, inline, placed by class name
    // Material::IsGlobalEnvironmentMapped() const
    undefined1 Material::IsGlobalEnvironmentMapped() {
        return m_globalEnvironmentMapped;
    }

    // 0x100821a10, 16 bytes, inline, placed by class name
    // Material::IsUnlit() const
    undefined1 Material::IsUnlit() {
        return m_unlit;
    }

    // 0x100821a20, 16 bytes, inline, placed by class name
    // Material::IsShadowCaster() const
    undefined1 Material::IsShadowCaster() {
        return m_shadowCaster;
    }

    // 0x100821a30, 16 bytes, inline, placed by class name
    // Material::IsShadowReceiver() const
    undefined1 Material::IsShadowReceiver() {
        return m_shadowReceiver;
    }

    // 0x100821a40, 16 bytes, inline, placed by class name
    // Material::HasTransparencyCutout() const
    undefined1 Material::HasTransparencyCutout() {
        return m_hasTransparencyCutout;
    }

    // 0x100821a50, 16 bytes, inline, placed by class name
    // Material::GetRefractionIndex() const
    undefined4 Material::GetRefractionIndex() {
        return m_refractionIndex;
    }

    // 0x100821a60, 16 bytes, inline, placed by class name
    // Material::GetRefractionDepthBias() const
    undefined4 Material::GetRefractionDepthBias() {
        return m_refractionDepthBias;
    }

    // 0x10085f8f0, 16 bytes, inline, placed by class name
    // Material::GetMaterialAnimationV() const
    undefined4 Material::GetMaterialAnimationV() {
        return m_materialAnimationV;
    }

    // 0x10085f920, 16 bytes, inline, placed by class name
    // Material::GetRefractionAmount() const
    undefined4 Material::GetRefractionAmount() {
        return m_refractionAmount;
    }

    // 0x10085f940, 16 bytes, inline, placed by class name
    // Material::GetSpecularScale() const
    undefined4 Material::GetSpecularScale() {
        return m_specularScale;
    }

    // 0x10085f950, 16 bytes, inline, placed by class name
    // Material::GetNormalScale() const
    undefined4 Material::GetNormalScale() {
        return m_normalScale;
    }

    // 0x10085f960, 16 bytes, inline, placed by class name
    // Material::HasEmissiveSourceColour() const
    bool Material::HasEmissiveSourceColour() {
        return m_emissiveSourceColourARGB != 0;
    }

    // 0x100869a60, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Material::GetAlphaMode() const
    /* AnimationParameters::GetLastUpdateTimeNS() const */

    long AnimationParameters::GetLastUpdateTimeNS() {
        return m_lastUpdateTimeNS;
    }

    // 0x100869a70, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Material::GetBlendMode() const
    /* AnimationParameters::GetStartTimeNS() const */

    ulong AnimationParameters::GetStartTimeNS() {
        return m_startTimeNS;
    }

    // 0x10086aac0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // MaterialInfo::MaterialInfo(int, std::array<int, 3ul> const&, std::array<unsigned int, 3ul> const&)
    /* MaterialInfo::MaterialInfo(int, std::array<int, 3ul> const&, std::array<unsigned
   int, 3ul> const&) */

    void MaterialInfo::MaterialInfo(int param_1, array* param_2, array* param_3) {
        field_0 = param_1;
        field_4 = *(undefined8*)param_2;
        field_12 = *(undefined4*)(param_2 + 8);
        field_16 = *(undefined8*)param_3;
        field_24 = *(undefined4*)(param_3 + 8);
    }

    // 0x1008731f0, 16 bytes, inline, placed by class name
    // Material::HasForcedTextures() const
    byte Material::HasForcedTextures() {
        return m_hasForcedTextures;
    }

    // 0x100873200, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Material::HasNormalMap() const
    /* AnimCurve::IsWeighted() const */

    undefined1 AnimCurve::IsWeighted() {
        return m_weighted;
    }

    // 0x100873210, 16 bytes, inline, placed by class name
    // Material::HasHDRMap() const
    undefined1 Material::HasHDRMap() {
        return m_hasHDRMap;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10062d570, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> >::type make_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>()
    jag* jag::make_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        vector* local_28[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>(
                    (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<
                    eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>,
                int, eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10062d690, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >::type make_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(int&&)
    jag*
    make_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        vector* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(
                    (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<
                ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                int, eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10062dc00, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<eastl::vector<game::DecodedTerrainTile, eastl::allocator>, int>(eastl::vector<game::DecodedTerrainTile, eastl::allocator> const&, int const&)
    bool ArrayValidPosition<eastl::vector<game::DecodedTerrainTile, eastl::allocator>, int>(vector* param_1,
                                                                                            int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->size();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

} // namespace jag
