// libs/graphics/runetek7/materials/textures/TextureDataProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class TextureDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~TextureDataProvider();
        TextureDataProvider();
        void GetTextureData(TextureData&, TextureType const*, unsigned int, render::TextureFormatBitSet);
        void AllocateImageData(unsigned int);

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    // 0x1001d91f0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // TextureDataProvider::TextureDataProvider()
    void TextureDataProvider::TextureDataProvider() {
        field_0 = &PTR__OptionStore_100f161e0;
    }

    // 0x1001d9390, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RT7GraphicsArchiveBundle::RT7GraphicsArchiveBundle(Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&)
    void RT7GraphicsArchiveBundle::RT7GraphicsArchiveBundle(Js5ArchiveSettings* param_1, Js5ArchiveSettings* param_2,
                                                            Js5ArchiveSettings* param_3, Js5ArchiveSettings* param_4,
                                                            Js5ArchiveSettings* param_5, Js5ArchiveSettings* param_6,
                                                            Js5ArchiveSettings* param_7, Js5ArchiveSettings* param_8) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        field_24 = param_4;
        field_32 = param_5;
        field_40 = param_6;
        field_48 = param_7;
        field_56 = param_8;
    }

    // 0x1001d99b0, 80 bytes, inline, placed by debug map only (low confidence)
    // VolumetricScatteringParams::operator=(VolumetricScatteringParams&&)
    /* VolumetricScatteringParams::TEMPNAMEPLACEHOLDERVALUE(VolumetricScatteringParams
   const&) */

    VolumetricScatteringParams* VolumetricScatteringParams::operator=(VolumetricScatteringParams* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = uVar3;
        field_0 = uVar1;
        field_8 = uVar2;
        (field_32, (Vector3T*)param_1->field_32)->SetXYZ();
        (field_48, (Vector3T*)param_1->field_48)->SetXYZ();
        *(undefined8*)(field_48 + 12) = *(undefined8*)(param_1->field_48 + 12);
        return this;
    }

    // 0x1001d99b0: the linker folded this into VolumetricScatteringParams::operator=(VolumetricScatteringParams&&), which has identical code
    VolumetricScatteringParams::operator=(VolumetricScatteringParams const&);

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001d9360, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::~OSRenderCore_TextureDataProvider()
    void OSRenderCore_TextureDataProvider::~OSRenderCore_TextureDataProvider() {
        field_0 = &PTR__OSRenderCore_TextureDataProvider_100ef6b48;
        field_16->~hash_map();
        ~AutoSingleton();
    }

} // namespace jag::oldscape::rseven

namespace jag::postprocess {
    // 0x1001d9b70, 80 bytes, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::operator=(ColourGradingBloomEffectConfig const&)
    /* ColourGradingBloomEffectConfig::TEMPNAMEPLACEHOLDERVALUE(ColourGradingBloomEffectConfig
   const&) */

    ColourGradingBloomEffectConfig* ColourGradingBloomEffectConfig::operator=(ColourGradingBloomEffectConfig* param_1) {
        undefined4 uVar1;
        uint uVar2;

        uVar1 = *(undefined4*)&param_1->field_0;
        uVar2 = param_1->field_4;
        *(undefined8*)((long)&field_4 + 1) = *(undefined8*)((long)&param_1->field_4 + 1);
        *(undefined4*)&field_0 = uVar1;
        field_4 = uVar2;
        ColourCorrectionConfig::operator=((ColourCorrectionConfig*)field_16,
                                          (ColourCorrectionConfig*)param_1->field_16);
        _memcpy(&field_168, &param_1->field_168, 152);
        return this;
    }

} // namespace jag::postprocess
