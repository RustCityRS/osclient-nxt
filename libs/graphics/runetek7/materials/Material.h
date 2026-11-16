// libs/graphics/runetek7/materials/Material.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Material {
    public:
        uint32_t GetEnvironmentMaterialID() const;
        bool IsValid() const;
        unsigned int GetSize() const;
        uint32_t GetMetalnessRoughnessMapSize() const;
        float GetSpecularExponent() const;
        unsigned int GetID() const;
        uint32_t GetMetalnessRoughnessMapID() const;
        uint8_t* GetWrapV() const;
        unsigned int GetDiffuseMapID() const;
        int GetAlphaTestThreshold() const;
        uint32_t GetViewportMapID() const;
        uint8_t* GetHideFacesMode() const;
        uint32_t GetNormalEmissiveMapSize() const;
        bool HasCubemap() const;
        bool HasHighlighting() const;
        uint8_t* GetViewportMapUVScaleAndAnim() const;
        int GetDiffuseAlphaMapID() const;
        uint32_t GetHDRNormalMapID() const;
        uint32_t GetDiffuseAlphaMapSize() const;
        int GetEmissiveSourceColourARGB() const;
        uint32_t GetMaterialAnimationH() const;
        bool IsRT7() const;
        bool HasDiffuseMap() const;
        float GetFresnelExponent() const;
        uint32_t GetDefaultNonMetalSpecular() const;
        bool IsLegacyMaterial() const;
        uint8_t* GetWrapU() const;
        unsigned int GetVertexColourStrengthAsWhiteness() const;
        uint8_t GetLegacyWhiteness() const;
        uint8_t GetLegacyBrightness() const;
        unsigned long HasTextures() const;
        bool HasSpecularMap() const;
        bool HasEmissiveMap() const;
        bool IsGlobalEnvironmentMapped() const;
        bool IsUnlit() const;
        bool IsShadowCaster() const;
        bool IsShadowReceiver() const;
        bool HasTransparencyCutout() const;
        uint32_t GetRefractionIndex() const;
        uint32_t GetRefractionDepthBias() const;
        uint32_t GetEmissiveScale() const;
        uint32_t GetNormalEmissiveMapID() const;
        uint32_t GetMaterialAnimationV() const;
        uint32_t GetRefractionAmount() const;
        uint32_t GetSpecularScale() const;
        uint32_t GetNormalScale() const;
        bool HasEmissiveSourceColour() const;
        long GetAlphaMode() const;
        unsigned long GetBlendMode() const;
        bool HasForcedTextures() const;
        bool HasNormalMap() const;
        bool HasHDRMap() const;
        Material();
        void Initialise(int arg1, const MaterialRaw& materialRaw);
        void InitialiseDummy(bool arg1);
        void InitialiseLoading(bool arg1);

    private:
        uint8_t m_valid;
        char field_1;
        uint8_t _unknown_2[2];
        unsigned int m_iD;
        unsigned int m_size;
        char m_hasDiffuseMap;
        uint8_t m_hasNormalMap;
        uint8_t field_14;
        uint8_t m_hasHDRMap;
        char field_16;
        bool m_hasEmissiveMap;
        bool m_hasSpecularMap;
        uint8_t _unknown_19[1];
        uint32_t m_diffuseMapID;
        uint32_t m_hDRNormalMapID;
        uint8_t m_globalEnvironmentMapped;
        uint8_t field_29;
        uint8_t _unknown_30[2];
        float m_specularExponent;
        uint8_t m_legacyMaterial;
        uint8_t m_legacyWhiteness;
        uint8_t m_legacyBrightness;
        char field_39;
        int m_diffuseAlphaMapID;
        uint32_t m_normalEmissiveMapID;
        uint32_t m_metalnessRoughnessMapID;
        uint32_t m_diffuseAlphaMapSize;
        uint32_t m_normalEmissiveMapSize;
        uint32_t m_metalnessRoughnessMapSize;
        int m_emissiveSourceColourARGB;
        uint32_t m_emissiveScale;
        float m_fresnelExponent;
        uint32_t m_defaultNonMetalSpecular;
        float field_80;
        uint8_t _unknown_84[4];
        uint8_t* m_pHideFacesMode;
        uint32_t m_environmentMaterialID;
        uint32_t m_viewportMapID;
        uint8_t _unknown_104[24];
        uint32_t m_materialAnimationH;
        uint32_t m_materialAnimationV;
        uint8_t m_unlit;
        uint8_t m_shadowCaster;
        uint8_t m_shadowReceiver;
        uint8_t m_hasForcedTextures;
        uint8_t m_hasHighlighting;
        uint8_t m_hasTransparencyCutout;
        uint8_t _unknown_142[2];
        uint32_t m_specularScale;
        uint32_t m_normalScale;
        uint32_t m_refractionAmount;
        uint32_t m_refractionIndex;
        uint32_t m_refractionDepthBias;
        uint8_t _unknown_164[4];
        uint8_t* m_blendMode;
        uint8_t* m_alphaMode;
        int m_alphaTestThreshold;
        uint8_t _unknown_188[4];
        uint8_t* m_pWrapU;
        uint8_t* m_pWrapV;
        uint32_t field_208;
        uint8_t _unknown_212[4];
    };

    class MaterialInfo {
    public:
        MaterialInfo(int arg1, const std::array<int, 3ul>& arg2, const std::array<unsigned int, 3ul>& arg3);

    private:
        int field_0;
        uint64_t field_4;
        uint32_t field_12;
        uint64_t field_16;
        uint32_t field_24;
        uint8_t _unknown_28[4];
    };

    // 0x10062b9b0
    bool Material::IsLegacyMaterial() const {
        return m_hasFaceTransparency;
    }

    // 0x10080ecf0
    unsigned int Material::GetVertexColourStrengthAsWhiteness() const {
        return (int)(255.0 - field_80 * 255.0) & 255;
    }

    // 0x10080ed20
    uint8_t Material::GetLegacyWhiteness() const {
        return m_legacyWhiteness;
    }

    // 0x10080ed30
    uint8_t Material::GetLegacyBrightness() const {
        return m_legacyBrightness;
    }

    // 0x10081c0f0
    unsigned long Material::HasTextures() const {
        int iVar2;
        unsigned int uVar3;
        uint64_t unaff_R14;
        unsigned long uVar4;

        bool cVar1 = IsRT7();
        uint64_t uVar5 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        if (!cVar1) {
            cVar1 = Ready();
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
            if (!cVar1) {
                cVar1 = IsWeighted();
                if (!cVar1) {
                    uVar3 = HasHDRMap();
                    uVar4 = (unsigned long)uVar3;
                }
            }
        } else {
            iVar2 = GetEndPosition();
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
            if (iVar2 == -1) {
                iVar2 = GetNormalEmissiveMapID();
                if (iVar2 == -1) {
                    iVar2 = AlreadyWritten();
                    uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(iVar2 != -1));
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1008219e0
    bool Material::HasSpecularMap() const {
        return m_hasSpecularMap;
    }

    // 0x1008219f0
    bool Material::HasEmissiveMap() const {
        return m_hasEmissiveMap;
    }

    // 0x100821a00
    bool Material::IsGlobalEnvironmentMapped() const {
        return m_globalEnvironmentMapped;
    }

    // 0x100821a10
    bool Material::IsUnlit() const {
        return m_unlit;
    }

    // 0x100821a20
    bool Material::IsShadowCaster() const {
        return m_shadowCaster;
    }

    // 0x100821a30
    bool Material::IsShadowReceiver() const {
        return m_shadowReceiver;
    }

    // 0x100821a40
    bool Material::HasTransparencyCutout() const {
        return m_hasTransparencyCutout;
    }

    // 0x100821a50
    uint32_t Material::GetRefractionIndex() const {
        return m_refractionIndex;
    }

    // 0x100821a60
    uint32_t Material::GetRefractionDepthBias() const {
        return m_refractionDepthBias;
    }

    // 0x10085f8f0
    uint32_t Material::GetMaterialAnimationV() const {
        return m_materialAnimationV;
    }

    // 0x10085f920
    uint32_t Material::GetRefractionAmount() const {
        return m_refractionAmount;
    }

    // 0x10085f940
    uint32_t Material::GetSpecularScale() const {
        return m_specularScale;
    }

    // 0x10085f950
    uint32_t Material::GetNormalScale() const {
        return m_normalScale;
    }

    // 0x10085f960
    bool Material::HasEmissiveSourceColour() const {
        return m_emissiveSourceColourARGB != 0;
    }

    // 0x100869a60
    long Material::GetAlphaMode() const {
        return m_lastUpdateTimeNS;
    }

    // 0x100869a70
    unsigned long Material::GetBlendMode() const {
        return m_startTimeNS;
    }

    // 0x10086aac0
    MaterialInfo::MaterialInfo(int arg1, const std::array<int, 3ul>& arg2, const std::array<unsigned int, 3ul>& arg3)
        : field_0(arg1) {
        field_4 = *(uint64_t*)arg2;
        field_12 = *(uint32_t*)(arg2 + 8);
        field_16 = *(uint64_t*)arg3;
        field_24 = *(uint32_t*)(arg3 + 8);
    }

    // 0x1008731f0
    bool Material::HasForcedTextures() const {
        return m_hasForcedTextures;
    }

    // 0x100873200
    bool Material::HasNormalMap() const {
        return m_weighted;
    }

    // 0x100873210
    bool Material::HasHDRMap() const {
        return m_hasHDRMap;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10062d570
    shared_ptr_if_not_array<eastl::vector<eastl::vector<graphics::GridGroup>>>::type
    make_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>() {
        ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup>> _>* ref_counter_shared;
        int local_2c;
        vector<eastl::vector<graphics::GridGroup>>* local_28[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::vector<eastl::vector<graphics::GridGroup>>>::type result;
        } else {
            local_28[0] = placement_new<eastl::vector<eastl::vector<graphics::GridGroup>>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>, int,
                              eastl::vector<eastl::vector<graphics::GridGroup>>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10062d690
    shared_ptr_if_not_array<eastl::vector<eastl::vector<unsigned char>>>::type
    make_shared<eastl::vector<eastl::vector<unsigned char>>, int>(int&& arg1) {
        ref_counter_shared<eastl::vector<eastl::vector<unsigned char>> _>* ref_counter_shared;
        int local_34;
        vector<eastl::vector<unsigned char>>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<eastl::vector<eastl::vector<unsigned char>>>::type result;
        } else {
            local_30[0] =
                placement_new<eastl::vector<eastl::vector<unsigned char>>, int>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::vector<eastl::vector<unsigned char>>>, int,
                              eastl::vector<eastl::vector<unsigned char>>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10062dc00
    bool ArrayValidPosition<eastl::vector<game::DecodedTerrainTile>, int>(
        const eastl::vector<game::DecodedTerrainTile>& decodedTerrainTiles, const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = decodedTerrainTiles.size();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

} // namespace jag
