// libs/graphics/runetek7/materials/shaders/shared/TextureAtlasLookup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TextureAtlasLookup {
    public:
        TextureAtlasLookup();
        BuildFSFragment(EffectList const&, TextureAtlasLookupMode) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100855a70, 16 bytes, base-object constructor, placed by class name and debug map
    // TextureAtlasLookup::TextureAtlasLookup()
    void TextureAtlasLookup::TextureAtlasLookup() {}

    // 0x100855a80, 16 bytes, complete-object constructor, placed by class name and debug map
    // TextureAtlasLookup::TextureAtlasLookup(): jumps straight to the base-object constructor

    // 0x100855a90, 448 bytes, placed by class name and debug map
    // TextureAtlasLookup::BuildFSFragment(EffectList const&, TextureAtlasLookupMode) const
    TextureAtlasLookup* TextureAtlasLookup::BuildFSFragment(undefined8 param_2, undefined8 param_3, int param_4) {
        MapArea* pMVar1;
        long lVar2;
        char* pcVar3;
        ostream* this_00;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_138[16];
        ostream local_128[264];

        pMVar1 = (MapArea*)Instance();
        lVar2 = pMVar1->GetOrigin();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_138);
        if (*(char*)(lVar2 + 147) != '\0') {
            std::operator<<(local_128, "#define SRGB_TEXTURES\n");
        }
        if (*(char*)(lVar2 + 173) != '\0') {
            std::operator<<(local_128, "#define STANDARD_DERIVATIVES\n");
        }
        if (*(char*)(lVar2 + 174) != '\0') {
            std::operator<<(local_128, "#define TEXTURE_LOD\n");
        }
        if ((*(char*)(lVar2 + 174) != '\0') && (*(char*)(lVar2 + 175) != '\0')) {
            std::operator<<(local_128, "#define TEXTURE_GRAD\n");
        }
        if (*(char*)(lVar2 + 177) != '\0') {
            std::operator<<(local_128, "#define TEXTURE_MIP_LIMIT\n");
        }
        if (param_4 == 2) {
            this_00 = local_128;
            std::operator<<(this_00, "#define LOOKUP_MODE_DYNAMIC\n");
        } else if (param_4 == 1) {
            this_00 = local_128;
            std::operator<<(this_00, "#define LOOKUP_MODE_REPEAT\n");
        } else {
            if (param_4 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/shared/TextureAtlasLookup.cpp",
                                67, "We have an unknown texture atlas loopup mode!");
            }
            this_00 = local_128;
            std::operator<<(this_00, "#define LOOKUP_MODE_CLAMP\n");
        }
        pMVar1 = (MapArea*)this_00->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (1 < *(int*)(lVar2 + 84)) {
            std::operator<<(local_128, "\n#define TEXTURE_SETTINGS_USE_TEXEL_OFFSETS\n");
        }
        pcVar3 = (char*)shadersourceprovider::GetShaderString(89);
        std::operator<<(local_128, pcVar3);
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_138);
        return this;
    }

} // namespace jag::graphics
