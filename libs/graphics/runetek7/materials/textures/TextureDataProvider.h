// libs/graphics/runetek7/materials/textures/TextureDataProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class TextureDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~TextureDataProvider();
        TextureDataProvider();
        void GetTextureData(TextureData& textureData, const TextureType* textureType, unsigned int arg3,
                            render::TextureFormatBitSet textureFormatBitSet);
        void AllocateImageData(unsigned int arg1);
    };

    // 0x1001d91f0
    TextureDataProvider::TextureDataProvider() {}

    // 0x1001d9390
    RT7GraphicsArchiveBundle::RT7GraphicsArchiveBundle(
        const Js5ArchiveSettings& js5ArchiveSettings1, const Js5ArchiveSettings& js5ArchiveSettings2,
        const Js5ArchiveSettings& js5ArchiveSettings3, const Js5ArchiveSettings& js5ArchiveSettings4,
        const Js5ArchiveSettings& js5ArchiveSettings5, const Js5ArchiveSettings& js5ArchiveSettings6,
        const Js5ArchiveSettings& js5ArchiveSettings7, const Js5ArchiveSettings& js5ArchiveSettings8)
        : field_0(js5ArchiveSettings1), field_8(js5ArchiveSettings2), field_16(js5ArchiveSettings3),
          field_24(js5ArchiveSettings4), field_32(js5ArchiveSettings5), field_40(js5ArchiveSettings6),
          field_48(js5ArchiveSettings7), field_56(js5ArchiveSettings8) {}

    // 0x1001d99b0
    VolumetricScatteringParams*
    VolumetricScatteringParams::operator=(VolumetricScatteringParams&& volumetricScatteringParams) {
        uint64_t uVar1 = volumetricScatteringParams.field_0;
        uint64_t uVar2 = volumetricScatteringParams.field_8;
        uint64_t uVar3 = volumetricScatteringParams.field_24;
        field_16 = volumetricScatteringParams.field_16;
        field_24 = uVar3;
        field_0 = uVar1;
        field_8 = uVar2;
        field_32->SetXYZ(volumetricScatteringParams.field_32);
        field_48->SetXYZ(volumetricScatteringParams.field_48);
        *(uint64_t*)(field_48 + 12) = *(uint64_t*)(volumetricScatteringParams.field_48 + 12);
        return this;
    }

    // 0x1001d99b0: VolumetricScatteringParams::operator=(VolumetricScatteringParams const&) has the same machine code as VolumetricScatteringParams::operator=(VolumetricScatteringParams&&)

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001d9360
    OSRenderCore_TextureDataProvider::~OSRenderCore_TextureDataProvider() {
        field_16.~hash_map();
    }

} // namespace jag::oldscape::rseven

namespace jag::postprocess {
    // 0x1001d9b70
    ColourGradingBloomEffectConfig*
    ColourGradingBloomEffectConfig::operator=(const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig) {
        uint32_t uVar1 = *(uint32_t*)&colourGradingBloomEffectConfig.field_0;
        BloomQuality BVar2 = colourGradingBloomEffectConfig.field_4;
        *(uint64_t*)((long)&field_4 + 1) = *(uint64_t*)((long)&colourGradingBloomEffectConfig.field_4 + 1);
        *(uint32_t*)&field_0 = uVar1;
        field_4 = BVar2;
        *field_16 = colourGradingBloomEffectConfig.field_16;
        _memcpy(&field_168, &colourGradingBloomEffectConfig.field_168, 152);
        return this;
    }

} // namespace jag::postprocess
