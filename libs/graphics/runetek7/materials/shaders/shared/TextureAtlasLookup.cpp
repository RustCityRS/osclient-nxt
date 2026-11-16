// libs/graphics/runetek7/materials/shaders/shared/TextureAtlasLookup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TextureAtlasLookup {
    public:
        TextureAtlasLookup();
        auto BuildFSFragment(const EffectList& effectList, TextureAtlasLookupMode textureAtlasLookupMode) const;

        uint8_t _unknown_0[1];
    };

    // 0x100855a70
    TextureAtlasLookup::TextureAtlasLookup() {}

    // 0x100855a90
    auto TextureAtlasLookup::BuildFSFragment(const EffectList& effectList,
                                             TextureAtlasLookupMode textureAtlasLookupMode) const {
        auto result;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _> local_128;

        auto pMVar1 = result.Instance();
        long lVar2 = pMVar1->GetOrigin();
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_138;
        if (*(char*)(lVar2 + 147) != '\0') {
            std::operator<<(&local_128, "#define SRGB_TEXTURES\n");
        }
        if (*(char*)(lVar2 + 173) != '\0') {
            std::operator<<(&local_128, "#define STANDARD_DERIVATIVES\n");
        }
        if (*(char*)(lVar2 + 174) != '\0') {
            std::operator<<(&local_128, "#define TEXTURE_LOD\n");
        }
        if ((*(char*)(lVar2 + 174) != '\0') && (*(char*)(lVar2 + 175) != '\0')) {
            std::operator<<(&local_128, "#define TEXTURE_GRAD\n");
        }
        if (*(char*)(lVar2 + 177) != '\0') {
            std::operator<<(&local_128, "#define TEXTURE_MIP_LIMIT\n");
        }
        if (textureAtlasLookupMode == 2) {
            basic_ostream = &local_128;
            std::operator<<(basic_ostream, "#define LOOKUP_MODE_DYNAMIC\n");
        } else if (textureAtlasLookupMode == 1) {
            basic_ostream = &local_128;
            std::operator<<(basic_ostream, "#define LOOKUP_MODE_REPEAT\n");
        } else {
            if (textureAtlasLookupMode != 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/shared/TextureAtlasLookup.cpp",
                                67, "We have an unknown texture atlas loopup mode!");
            }
            basic_ostream = &local_128;
            std::operator<<(basic_ostream, "#define LOOKUP_MODE_CLAMP\n");
        }
        pMVar1 = (MapArea*)basic_ostream->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (1 < *(int*)(lVar2 + 84)) {
            std::operator<<(&local_128, "\n#define TEXTURE_SETTINGS_USE_TEXEL_OFFSETS\n");
        }
        auto str = shadersourceprovider::GetShaderString(89);
        std::operator<<(&local_128, str);
        result = local_138.str();
        return result;
    }

} // namespace jag::graphics
