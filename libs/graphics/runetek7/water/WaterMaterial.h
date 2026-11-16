// libs/graphics/runetek7/water/WaterMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterMaterial {
    public:
        // virtual methods in vtable order
        virtual ~WaterMaterial();
        WaterParameters* GetWaterParameters() const;
        WaterParameters* GetWaterParameters();
        WaterMaterial();
        WaterMaterial(WaterMaterial&& waterMaterial);
        WaterMaterial(const WaterMaterial& waterMaterial);
        void Init(const WaterPatchConfig& waterPatchConfig, MaterialManager& materialManager,
                  TextureManager& textureManager);
        void InitMaterials(const WaterPatchConfig& waterPatchConfig, MaterialManager& materialManager);
        void InitWaterParameters(const WaterPatchConfig& waterPatchConfig);
        uint8_t LoadTextures(TextureManager& textureManager);
        void InitRenderPassEffects();
        float GetNormalMapScale(const WaterPatchConfig& waterPatchConfig, unsigned long arg2);
        unsigned long HasNormalMaps() const;
        void HasFoamMaps() const;

    private:
        uint64_t field_8;
        uint8_t* field_16;
        uint8_t* field_24;
        unsigned char field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        uint32_t field_40;
        uint8_t _unknown_44[484];
        Callstack field_528;
        WaterParameters m_waterParameters;
        uint8_t _unknown_1044[4];
        uint64_t field_1048;
        uint64_t field_1056;
        Material* field_1064;
        Material* field_1072;
        uint8_t _unknown_1080[20];
    };

    // 0x1007a2d90
    WaterParameters* WaterMaterial::GetWaterParameters() const {
        return (WaterParameters*)m_waterParameters;
    }

    // 0x1007bbf20
    void WaterMaterial::HasFoamMaps() const {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        midiPlayerMainThread =
            (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)m_waterParameters->GetEmissiveUVScale();
        *midiPlayerMainThread != nullptr;
    }

    // 0x1007bd3f0
    WaterMaterial::~WaterMaterial() {
        m_waterParameters->~WaterParameters();
    }

} // namespace jag::graphics
