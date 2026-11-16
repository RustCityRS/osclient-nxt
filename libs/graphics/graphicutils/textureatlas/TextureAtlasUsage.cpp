// libs/graphics/graphicutils/textureatlas/TextureAtlasUsage.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class TextureAtlasUsage {
    public:
        TextureAtlasUsage(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static TextureAtlasUsage const* USAGE_COMPRESSED; // = &enumArray
        static TextureAtlasUsage const*
            USAGE_UNCOMPRESSED;                // = &enumArray[1] /* TextureAtlasUsage(1, "uncompressed") */
        static TextureAtlasUsage enumArray[2]; // initialised in its definition
    };

    // 0x100f485d0
    TextureAtlasUsage const* TextureAtlasUsage::USAGE_COMPRESSED = &enumArray;

    // 0x100f485d8
    TextureAtlasUsage const* TextureAtlasUsage::USAGE_UNCOMPRESSED =
        &enumArray[1] /* TextureAtlasUsage(1, "uncompressed") */;

    // 0x103bd9a38, set at startup by ___cxx_global_var_init.58
    TextureAtlasUsage TextureAtlasUsage::enumArray[2] = {
        /* [0] */ TextureAtlasUsage(0, "compressed"),
        /* [1] */ TextureAtlasUsage(1, "uncompressed"),
    };

    // 0x1004a2ca0: TextureAtlasUsage::TextureAtlasUsage(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x100bbd8a0
    void TextureAtlasUsage::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (1 < (unsigned int)this) {
            LogAssert("id >= 0 && id < TextureAtlasUsage::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasUsage.cpp",
                      31, "TextureAtlasUsage: Invalid TextureAtlasUsage ID requested");
        }
        (*((array<TextureAtlasUsage, 2ul>*)((unsigned long)this &
                                            4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    class TextureAtlasUsageMap {
    public:
        void GetUsed();
        void GetLoading();
        uint8_t* GetMaterialUsageSlots();
        TextureAtlasUsageMap();
        ~TextureAtlasUsageMap();

        uint8_t _unknown_0[56];
    };

    // 0x10087e330
    TextureAtlasUsageMap::TextureAtlasUsageMap() : eastl::vector<math::Rect<float>, BucketAllocatorEASTL>() {}

    // 0x10087e450
    TextureAtlasUsageMap::~TextureAtlasUsageMap() {
        field_48.~vector();
        field_24.~vector();
    }

} // namespace jag::graphics
