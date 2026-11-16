// libs/graphics/graphicutils/textureatlas/TextureAtlasUsage.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class TextureAtlasUsage {
    public:
        TextureAtlasUsage(unsigned int, char const*);
        void GetByID(unsigned int);
        static TextureAtlasUsage const* /* 8 bytes */ USAGE_COMPRESSED; // = &enumArray
        static TextureAtlasUsage const*                                 /* 8 bytes */
            USAGE_UNCOMPRESSED; // = &enumArray[1] /* TextureAtlasUsage(1, "uncompressed") */
        static TextureAtlasUsage /* 32 bytes */ enumArray[2]; // initialised in its definition
    };

    // 0x100f485d0, 8 bytes, __data
    TextureAtlasUsage const* TextureAtlasUsage::USAGE_COMPRESSED = &enumArray;

    // 0x100f485d8, 8 bytes, __data
    TextureAtlasUsage const* TextureAtlasUsage::USAGE_UNCOMPRESSED =
        &enumArray[1] /* TextureAtlasUsage(1, "uncompressed") */;

    // 0x103bd9a38, 32 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.58
    TextureAtlasUsage TextureAtlasUsage::enumArray[2] = {
        /* [0] */ TextureAtlasUsage(0, "compressed"),
        /* [1] */ TextureAtlasUsage(1, "uncompressed"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureAtlasUsage::TextureAtlasUsage(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureAtlasUsage::TextureAtlasUsage(unsigned int, char const*);

    // 0x100bbd8a0, 64 bytes, placed by class name and debug map
    // TextureAtlasUsage::GetByID(unsigned int)
    void TextureAtlasUsage::GetByID(uint param_1) {
        if (1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < TextureAtlasUsage::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasUsage.cpp",
                      31, "TextureAtlasUsage: Invalid TextureAtlasUsage ID requested");
        }
        std::array<TextureAtlasUsage, 2ul>::operator[]((ulong)param_1);
    }

    // 0x100bc0a70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        new (&TextureAtlasUsage::enumArray) game::VarLifetime(0, "compressed");
        new (&DAT_103bd9a48) game::VarLifetime(1, "uncompressed");
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    class TextureAtlasUsageMap {
    public:
        GetUsed();
        GetLoading();
        GetMaterialUsageSlots();
        TextureAtlasUsageMap();
        ~TextureAtlasUsageMap();

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[56];
    };

    // 0x10087e210, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TextureAtlasUsageMap::TextureAtlasUsageMap(): jumps straight to the base-object constructor

    // 0x10087e320, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // TextureAtlasUsageMap::~TextureAtlasUsageMap(): jumps straight to the base-object destructor

    // 0x10087e330, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // TextureAtlasUsageMap::TextureAtlasUsageMap()
    void TextureAtlasUsageMap::TextureAtlasUsageMap() {
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::vector();
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::vector();
        eastl::vector<eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>>, BucketAllocatorEASTL>::vector();
    }

    // 0x10087e450, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // TextureAtlasUsageMap::~TextureAtlasUsageMap()
    void TextureAtlasUsageMap::~TextureAtlasUsageMap() {
        (&field_48)->~vector();
        (&field_24)->~vector();
        ~vector();
    }

} // namespace jag::graphics
