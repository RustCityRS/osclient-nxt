// libs/game/runetek5/config/watertype/WaterType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class WaterType {
    public:
        // virtual methods in vtable order
        virtual ~WaterType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        uint GetEmissiveMapMaterialID() const;
        GetExtinctionRGBDepthMetres() const;
        GetFoamMaterialID() const;
        OverrideDefaultWaterType() const;
        GetDepthFoam() const;
        GetEmissiveUVScale() const;
        WaterType(BaseTemplateConfigTypeList<WaterType>*, int);
        void ApplyToWaterPatchConfig(graphics::WaterPatchConfig&) const;
        GetFlowNoise() const;
        GetFoamMaterialScale() const;
        GetNormalMapMaterialID(unsigned long) const;
        GetNormalMapMaterialScale(unsigned long) const;
        void GetNormalMapParams(unsigned long) const;
        void GetNormalMapMacroParams(unsigned long) const;
        GetStillWaterNormalStrength() const;
        float GetSpecularShininess() const;
        uint GetSpecularFactor() const;
        GetFresnelBias() const;
        float GetReflectionStrength() const;
        float GetEmissiveMapMaterialScale() const;
        GetEmissiveRGB() const;
        GetEmissiveSource() const;
        GetEmissiveScale() const;
        GetEmissiveMapRefractionDepth() const;
        GetEmissiveMapMode() const;
        GetEmissiveFlowSpeed() const;
        GetEmissiveFlowRotationDegrees() const;
        GetEmissiveUVMode() const;
        GetEmissiveBlend() const;
        GetExtinctionOpaqueWaterColour() const;
        GetExtinctionVisibilityMetres() const;
        GetCausticsScale() const;
        GetCausticsRefractionScale() const;
        GetCausticsDepthFadeCutoff() const;
        GetCausticsDepthFadeScale() const;
        GetCausticsEdgeFadeStart() const;
        GetCausticsEdgeFadeEnd() const;
        GetCausticsOverWaterFadeStart() const;
        GetCausticsOverWaterFadeEnd() const;
        GetBaseRGBA() const;
        DecodeUnusedParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        bool DecodeLegacyParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        DecodeFoamParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        DecodeLightingReflectionParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        DecodeMaterialScaleParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        DecodeNormalParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        DecodeEmissiveParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        DecodeExtinctionParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        DecodeCausticsParams(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        bool DecodeNormalMapMaterials(PacketT<Array<unsigned char, eastl::allocator>>&, WaterTypeEncoding);
        GetNormalParamsTarget(WaterTypeEncoding) const;
        operator graphics::WaterPatchConfig() const;

        // data members, from how the methods use this: 556 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        bool field_56; // offset 56
        char _unknown_57[3];
        undefined4 m_flowNoise; // offset 60
        uint field_64;          // offset 64
        uint field_68;          // offset 68
        float field_72;         // offset 72
        undefined8 field_76;    // offset 76
        undefined4 field_84;    // offset 84
        undefined8 field_88;    // offset 88
        undefined4 field_96;    // offset 96
        char _unknown_100[240];
        undefined4 m_stillWaterNormalStrength;   // offset 340
        uint m_emissiveMapMaterialID;            // offset 344
        float m_emissiveMapMaterialScale;        // offset 348
        undefined4 m_emissiveUVScale;            // offset 352
        undefined4 field_356;                    // offset 356
        undefined4 m_emissiveRGB;                // offset 360
        undefined4 m_emissiveSource;             // offset 364
        undefined4 m_emissiveScale;              // offset 368
        undefined4 m_emissiveMapRefractionDepth; // offset 372
        undefined1 m_emissiveMapMode;            // offset 376
        undefined1 m_emissiveUVMode;             // offset 377
        char _unknown_378[2];
        undefined4 m_emissiveFlowSpeed;          // offset 380
        undefined4 field_384;                    // offset 384
        undefined4 m_emissiveBlend;              // offset 388
        float m_specularShininess;               // offset 392
        uint m_specularFactor;                   // offset 396
        undefined4 m_fresnelBias;                // offset 400
        float m_reflectionStrength;              // offset 404
        ColourHSL field_408;                     // offset 408
        undefined4 m_extinctionVisibilityMetres; // offset 424
        undefined4 m_causticsScale;              // offset 428
        undefined4 m_causticsRefractionScale;    // offset 432
        undefined4 m_causticsDepthFadeCutoff;    // offset 436
        undefined4 m_causticsDepthFadeScale;     // offset 440
        undefined4 field_444;                    // offset 444
        undefined4 m_causticsEdgeFadeEnd;        // offset 448
        undefined4 m_causticsOverWaterFadeStart; // offset 452
        undefined4 m_causticsOverWaterFadeEnd;   // offset 456
        undefined4 field_460;                    // offset 460
        uint field_464;                          // offset 464
        uint field_468;                          // offset 468
        uint field_472;                          // offset 472
        uint field_476;                          // offset 476
        float field_480;                         // offset 480
        float field_484;                         // offset 484
        float field_488;                         // offset 488
        float field_492;                         // offset 492
        float field_496;                         // offset 496
        undefined4 field_500;                    // offset 500
        uint field_504;                          // offset 504
        uint field_508;                          // offset 508
        uint field_512;                          // offset 512
        uint field_516;                          // offset 516
        uint field_520;                          // offset 520
        uint field_524;                          // offset 524
        uint field_528;                          // offset 528
        undefined4 field_532;                    // offset 532
        int field_536;                           // offset 536
        ColourHSL field_540;                     // offset 540
    };

    // 0x1003fab80, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WaterType::OverrideDefaultWaterType() const
    /* AnimationWrapper::IsReadyAnim() const */

    undefined1 AnimationWrapper::IsReadyAnim() {
        return m_readyAnim;
    }

    // 0x1004c6790, 16 bytes, inline, placed by class name
    // WaterType::GetFlowNoise() const
    undefined4 WaterType::GetFlowNoise() {
        return m_flowNoise;
    }

    // 0x1004c67a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WaterType::GetFoamMaterialScale() const
    /* Cutscene2D::Scene::GetPlaybackStart() const */

    float Cutscene2D::Scene::GetPlaybackStart() {
        return m_playbackStart;
    }

    // 0x1004c67b0, 32 bytes, inline, placed by class name
    // WaterType::GetNormalMapMaterialID(unsigned long) const
    undefined4 WaterType::GetNormalMapMaterialID(ulong param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&field_76, param_1);
        return *puVar1;
    }

    // 0x1004c67e0, 32 bytes, inline, placed by class name
    // WaterType::GetNormalMapMaterialScale(unsigned long) const
    undefined4 WaterType::GetNormalMapMaterialScale(ulong param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&field_88, param_1);
        return *puVar1;
    }

    // 0x1004c6810, 16 bytes, inline, placed by class name
    // WaterType::GetNormalMapParams(unsigned long) const
    void WaterType::GetNormalMapParams(ulong param_1) {
        std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)&field_100, param_1);
    }

    // 0x1004c6860, 32 bytes, inline, placed by class name
    // WaterType::GetNormalMapMacroParams(unsigned long) const
    void WaterType::GetNormalMapMacroParams(ulong param_1) {
        std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)&field_220, param_1);
    }

    // 0x1004c6880, 16 bytes, inline, placed by class name
    // WaterType::GetStillWaterNormalStrength() const
    undefined4 WaterType::GetStillWaterNormalStrength() {
        return m_stillWaterNormalStrength;
    }

    // 0x1004c6890, 16 bytes, inline, placed by class name
    // WaterType::GetSpecularShininess() const
    float WaterType::GetSpecularShininess() {
        return m_specularShininess;
    }

    // 0x1004c68a0, 16 bytes, inline, placed by class name
    // WaterType::GetSpecularFactor() const
    uint WaterType::GetSpecularFactor() {
        return m_specularFactor;
    }

    // 0x1004c68b0, 16 bytes, inline, placed by class name
    // WaterType::GetFresnelBias() const
    undefined4 WaterType::GetFresnelBias() {
        return m_fresnelBias;
    }

    // 0x1004c68c0, 16 bytes, inline, placed by class name
    // WaterType::GetReflectionStrength() const
    float WaterType::GetReflectionStrength() {
        return m_reflectionStrength;
    }

    // 0x1004c68d0, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveMapMaterialScale() const
    float WaterType::GetEmissiveMapMaterialScale() {
        return m_emissiveMapMaterialScale;
    }

    // 0x1004c6940, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveRGB() const
    undefined4 WaterType::GetEmissiveRGB() {
        return m_emissiveRGB;
    }

    // 0x1004c6950, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveSource() const
    undefined4 WaterType::GetEmissiveSource() {
        return m_emissiveSource;
    }

    // 0x1004c6960, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveScale() const
    undefined4 WaterType::GetEmissiveScale() {
        return m_emissiveScale;
    }

    // 0x1004c6970, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveMapRefractionDepth() const
    undefined4 WaterType::GetEmissiveMapRefractionDepth() {
        return m_emissiveMapRefractionDepth;
    }

    // 0x1004c6980, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveMapMode() const
    undefined1 WaterType::GetEmissiveMapMode() {
        return m_emissiveMapMode;
    }

    // 0x1004c6990, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveFlowSpeed() const
    undefined4 WaterType::GetEmissiveFlowSpeed() {
        return m_emissiveFlowSpeed;
    }

    // 0x1004c69a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WaterType::GetEmissiveFlowRotationDegrees() const
    /* graphics::WaterParameters::GetEmissiveMapMaterialScale() const */

    float graphics::WaterParameters::GetEmissiveMapMaterialScale() {
        return m_emissiveMapMaterialScale;
    }

    // 0x1004c69b0, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveUVMode() const
    undefined1 WaterType::GetEmissiveUVMode() {
        return m_emissiveUVMode;
    }

    // 0x1004c69c0, 16 bytes, inline, placed by class name
    // WaterType::GetEmissiveBlend() const
    undefined4 WaterType::GetEmissiveBlend() {
        return m_emissiveBlend;
    }

    // 0x1004c69d0, 16 bytes, inline, placed by class name
    // WaterType::GetExtinctionOpaqueWaterColour() const
    undefined4 WaterType::GetExtinctionOpaqueWaterColour() {
        return *(undefined4*)(field_408 + 12);
    }

    // 0x1004c69e0, 16 bytes, inline, placed by class name
    // WaterType::GetExtinctionVisibilityMetres() const
    undefined4 WaterType::GetExtinctionVisibilityMetres() {
        return m_extinctionVisibilityMetres;
    }

    // 0x1004c69f0, 16 bytes, inline, placed by class name
    // WaterType::GetCausticsScale() const
    undefined4 WaterType::GetCausticsScale() {
        return m_causticsScale;
    }

    // 0x1004c6a00, 16 bytes, inline, placed by class name
    // WaterType::GetCausticsRefractionScale() const
    undefined4 WaterType::GetCausticsRefractionScale() {
        return m_causticsRefractionScale;
    }

    // 0x1004c6a10, 16 bytes, inline, placed by class name
    // WaterType::GetCausticsDepthFadeCutoff() const
    undefined4 WaterType::GetCausticsDepthFadeCutoff() {
        return m_causticsDepthFadeCutoff;
    }

    // 0x1004c6a20, 16 bytes, inline, placed by class name
    // WaterType::GetCausticsDepthFadeScale() const
    undefined4 WaterType::GetCausticsDepthFadeScale() {
        return m_causticsDepthFadeScale;
    }

    // 0x1004c6a30, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WaterType::GetCausticsEdgeFadeStart() const
    /* tweak::ColourPicker::GetIntensity() const */

    float tweak::ColourPicker::GetIntensity() {
        return m_intensity;
    }

    // 0x1004c6a40, 16 bytes, inline, placed by class name
    // WaterType::GetCausticsEdgeFadeEnd() const
    undefined4 WaterType::GetCausticsEdgeFadeEnd() {
        return m_causticsEdgeFadeEnd;
    }

    // 0x1004c6a50, 16 bytes, inline, placed by class name
    // WaterType::GetCausticsOverWaterFadeStart() const
    undefined4 WaterType::GetCausticsOverWaterFadeStart() {
        return m_causticsOverWaterFadeStart;
    }

    // 0x1004c6a60, 16 bytes, inline, placed by class name
    // WaterType::GetCausticsOverWaterFadeEnd() const
    undefined4 WaterType::GetCausticsOverWaterFadeEnd() {
        return m_causticsOverWaterFadeEnd;
    }

    // 0x1004c6a70, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WaterType::GetBaseRGBA() const
    /* ui::Sprite::GetHTTPImage() const */

    undefined4 ui::Sprite::GetHTTPImage() {
        return m_hTTPImage;
    }

    // 0x1004c82d0, 16 bytes, complete-object destructor, inline, placed by class name
    // WaterType::~WaterType(): jumps straight to the base-object destructor

    // 0x1004c82e0, 32 bytes, deleting destructor, inline, placed by class name
    // WaterType::~WaterType()
    void WaterType::~WaterType() {
        ~WaterType(this);
        operator_delete(this);
    }

    // 0x1004c92e0, 16 bytes, base-object destructor, inline, placed by class name
    // WaterType::~WaterType()
    void WaterType::~WaterType() {
        ~ConfigType();
    }

} // namespace jag::game
