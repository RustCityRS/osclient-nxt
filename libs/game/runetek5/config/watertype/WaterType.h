// libs/game/runetek5/config/watertype/WaterType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class WaterType {
    public:
        // virtual methods in vtable order
        virtual ~WaterType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetEmissiveMapMaterialID() const;
        ColourHSL GetExtinctionRGBDepthMetres() const;
        unsigned int GetFoamMaterialID() const;
        unsigned char OverrideDefaultWaterType() const;
        unsigned int GetDepthFoam() const;
        uint32_t* GetEmissiveUVScale() const;
        WaterType(BaseTemplateConfigTypeList<WaterType>* baseTemplateConfigTypeList, int arg2);
        void ApplyToWaterPatchConfig(graphics::WaterPatchConfig& waterPatchConfig) const;
        uint32_t GetFlowNoise() const;
        float GetFoamMaterialScale() const;
        uint32_t GetNormalMapMaterialID(unsigned long arg1) const;
        uint32_t GetNormalMapMaterialScale(unsigned long arg1) const;
        void GetNormalMapParams(unsigned long arg1) const;
        void GetNormalMapMacroParams(unsigned long arg1) const;
        uint32_t GetStillWaterNormalStrength() const;
        float GetSpecularShininess() const;
        unsigned int GetSpecularFactor() const;
        uint32_t GetFresnelBias() const;
        float GetReflectionStrength() const;
        float GetEmissiveMapMaterialScale() const;
        uint32_t GetEmissiveRGB() const;
        uint32_t GetEmissiveSource() const;
        uint32_t GetEmissiveScale() const;
        uint32_t GetEmissiveMapRefractionDepth() const;
        uint8_t GetEmissiveMapMode() const;
        uint32_t GetEmissiveFlowSpeed() const;
        float GetEmissiveFlowRotationDegrees() const;
        uint8_t GetEmissiveUVMode() const;
        uint32_t GetEmissiveBlend() const;
        uint32_t GetExtinctionOpaqueWaterColour() const;
        uint32_t GetExtinctionVisibilityMetres() const;
        uint32_t GetCausticsScale() const;
        uint32_t GetCausticsRefractionScale() const;
        uint32_t GetCausticsDepthFadeCutoff() const;
        uint32_t GetCausticsDepthFadeScale() const;
        float GetCausticsEdgeFadeStart() const;
        uint32_t GetCausticsEdgeFadeEnd() const;
        uint32_t GetCausticsOverWaterFadeStart() const;
        uint32_t GetCausticsOverWaterFadeEnd() const;
        uint32_t GetBaseRGBA() const;
        uint64_t DecodeUnusedParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        bool DecodeLegacyParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        uint64_t DecodeFoamParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        uint64_t DecodeLightingReflectionParams(PacketT<Array<unsigned char>>& arg1,
                                                WaterTypeEncoding waterTypeEncoding);
        uint64_t DecodeMaterialScaleParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        uint64_t DecodeNormalParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        uint64_t DecodeEmissiveParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        uint64_t DecodeExtinctionParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        uint64_t DecodeCausticsParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        bool DecodeNormalMapMaterials(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding);
        uint8_t[16] GetNormalParamsTarget(WaterTypeEncoding waterTypeEncoding) const;
        operator graphics::WaterPatchConfig() const;

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<WaterType>* field_24;
        AuthSDKTokenResponse field_32;
        uint8_t _unknown_36[12];
        uint32_t field_48;
        uint32_t field_52;
        bool field_56;
        uint8_t _unknown_57[3];
        uint32_t m_flowNoise;
        unsigned int m_depthFoam;
        unsigned int m_foamMaterialID;
        float m_foamMaterialScale;
        uint64_t field_76;
        uint32_t field_84;
        uint32_t field_88;
        uint32_t field_92;
        uint32_t field_96;
        uint8_t _unknown_100[16];
        uint32_t field_116;
        uint32_t field_120;
        uint32_t field_124;
        uint8_t field_128;
        uint8_t field_129;
        uint8_t _unknown_130[2];
        uint32_t field_132;
        uint32_t field_136;
        uint32_t field_140;
        uint32_t field_144;
        uint8_t _unknown_148[192];
        uint32_t m_stillWaterNormalStrength;
        unsigned int m_emissiveMapMaterialID;
        float m_emissiveMapMaterialScale;
        uint32_t m_emissiveUVScale;
        uint32_t field_356;
        uint32_t m_emissiveRGB;
        uint32_t m_emissiveSource;
        uint32_t m_emissiveScale;
        uint32_t m_emissiveMapRefractionDepth;
        uint8_t m_emissiveMapMode;
        uint8_t m_emissiveUVMode;
        uint8_t _unknown_378[2];
        uint32_t m_emissiveFlowSpeed;
        float m_emissiveFlowRotationDegrees;
        uint32_t m_emissiveBlend;
        float m_specularShininess;
        unsigned int m_specularFactor;
        uint32_t m_fresnelBias;
        float m_reflectionStrength;
        ColourHSL m_extinctionRGBDepthMetres;
        uint32_t m_extinctionVisibilityMetres;
        uint32_t m_causticsScale;
        uint32_t m_causticsRefractionScale;
        uint32_t m_causticsDepthFadeCutoff;
        uint32_t m_causticsDepthFadeScale;
        float m_causticsEdgeFadeStart;
        uint32_t m_causticsEdgeFadeEnd;
        uint32_t m_causticsOverWaterFadeStart;
        uint32_t m_causticsOverWaterFadeEnd;
        uint32_t m_baseRGBA;
        unsigned int field_464;
        unsigned int field_468;
        unsigned int field_472;
        unsigned int field_476;
        float field_480;
        float field_484;
        float field_488;
        float field_492;
        float field_496;
        uint32_t field_500;
        unsigned int field_504;
        unsigned int field_508;
        unsigned int field_512;
        unsigned int field_516;
        unsigned int field_520;
        unsigned int field_524;
        unsigned int field_528;
        uint32_t field_532;
        int field_536;
        ColourHSL field_540;
    };

    // 0x1003fab80
    unsigned char WaterType::OverrideDefaultWaterType() const {
        return m_readyAnim;
    }

    // 0x1004c6790
    uint32_t WaterType::GetFlowNoise() const {
        return m_flowNoise;
    }

    // 0x1004c67a0
    float WaterType::GetFoamMaterialScale() const {
        return m_playbackStart;
    }

    // 0x1004c67b0
    uint32_t WaterType::GetNormalMapMaterialID(unsigned long arg1) const {
        uint32_t* puVar1 = (uint32_t*)field_76[arg1];
        return *puVar1;
    }

    // 0x1004c67e0
    uint32_t WaterType::GetNormalMapMaterialScale(unsigned long arg1) const {
        uint32_t* puVar1 = &field_88[arg1];
        return *puVar1;
    }

    // 0x1004c6810
    void WaterType::GetNormalMapParams(unsigned long arg1) const {
        field_100[arg1];
    }

    // 0x1004c6860
    void WaterType::GetNormalMapMacroParams(unsigned long arg1) const {
        field_220[arg1];
    }

    // 0x1004c6880
    uint32_t WaterType::GetStillWaterNormalStrength() const {
        return m_stillWaterNormalStrength;
    }

    // 0x1004c6890
    float WaterType::GetSpecularShininess() const {
        return m_specularShininess;
    }

    // 0x1004c68a0
    unsigned int WaterType::GetSpecularFactor() const {
        return m_specularFactor;
    }

    // 0x1004c68b0
    uint32_t WaterType::GetFresnelBias() const {
        return m_fresnelBias;
    }

    // 0x1004c68c0
    float WaterType::GetReflectionStrength() const {
        return m_reflectionStrength;
    }

    // 0x1004c68d0
    float WaterType::GetEmissiveMapMaterialScale() const {
        return m_emissiveMapMaterialScale;
    }

    // 0x1004c6940
    uint32_t WaterType::GetEmissiveRGB() const {
        return m_emissiveRGB;
    }

    // 0x1004c6950
    uint32_t WaterType::GetEmissiveSource() const {
        return m_emissiveSource;
    }

    // 0x1004c6960
    uint32_t WaterType::GetEmissiveScale() const {
        return m_emissiveScale;
    }

    // 0x1004c6970
    uint32_t WaterType::GetEmissiveMapRefractionDepth() const {
        return m_emissiveMapRefractionDepth;
    }

    // 0x1004c6980
    uint8_t WaterType::GetEmissiveMapMode() const {
        return m_emissiveMapMode;
    }

    // 0x1004c6990
    uint32_t WaterType::GetEmissiveFlowSpeed() const {
        return m_emissiveFlowSpeed;
    }

    // 0x1004c69a0
    float WaterType::GetEmissiveFlowRotationDegrees() const {
        return m_emissiveMapMaterialScale;
    }

    // 0x1004c69b0
    uint8_t WaterType::GetEmissiveUVMode() const {
        return m_emissiveUVMode;
    }

    // 0x1004c69c0
    uint32_t WaterType::GetEmissiveBlend() const {
        return m_emissiveBlend;
    }

    // 0x1004c69d0
    uint32_t WaterType::GetExtinctionOpaqueWaterColour() const {
        return *(uint32_t*)(m_extinctionRGBDepthMetres + 12);
    }

    // 0x1004c69e0
    uint32_t WaterType::GetExtinctionVisibilityMetres() const {
        return m_extinctionVisibilityMetres;
    }

    // 0x1004c69f0
    uint32_t WaterType::GetCausticsScale() const {
        return m_causticsScale;
    }

    // 0x1004c6a00
    uint32_t WaterType::GetCausticsRefractionScale() const {
        return m_causticsRefractionScale;
    }

    // 0x1004c6a10
    uint32_t WaterType::GetCausticsDepthFadeCutoff() const {
        return m_causticsDepthFadeCutoff;
    }

    // 0x1004c6a20
    uint32_t WaterType::GetCausticsDepthFadeScale() const {
        return m_causticsDepthFadeScale;
    }

    // 0x1004c6a30
    float WaterType::GetCausticsEdgeFadeStart() const {
        return m_intensity;
    }

    // 0x1004c6a40
    uint32_t WaterType::GetCausticsEdgeFadeEnd() const {
        return m_causticsEdgeFadeEnd;
    }

    // 0x1004c6a50
    uint32_t WaterType::GetCausticsOverWaterFadeStart() const {
        return m_causticsOverWaterFadeStart;
    }

    // 0x1004c6a60
    uint32_t WaterType::GetCausticsOverWaterFadeEnd() const {
        return m_causticsOverWaterFadeEnd;
    }

    // 0x1004c6a70
    uint32_t WaterType::GetBaseRGBA() const {
        return m_hTTPImage;
    }

    // 0x1004c92e0
    WaterType::~WaterType() {}

} // namespace jag::game
