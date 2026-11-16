// libs/graphics/runetek7/fonts/VectorFontLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class VectorFontLoader {
    public:
        void GetLibrary() const;
        VectorFontSource CreateFontSource(int arg1, const shared_ptr<PacketT<Array<unsigned char>>>& arg2,
                                          unsigned char arg3);
        ~VectorFontLoader();
        bool Initialise();

    private:
        uint8_t _unknown_0[8];
        uint64_t field_8;
    };

    // 0x10000b2a0: VectorFontLoader::GetLibrary() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x1008e6000
    VectorFontSource VectorFontLoader::CreateFontSource(int arg1, const shared_ptr<PacketT<Array<unsigned char>>>& arg2,
                                                        unsigned char arg3) {
        uint64_t in_register_00000081;
        FT_FaceRec_* local_40;

        uint32_t local_38 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg3);
        if (!arg2 != nullptr) {
            LogAssert("ttfData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "VectorFontLoader.cpp",
                      44, nullptr);
        }
        uint64_t uVar1 = field_8;
        uint64_t uVar4 = ((PacketT<Array<unsigned char>>*)arg2.operator->())->GetDataPtr();
        uint64_t uVar5 = ((TextureAtlasReference*)arg2.operator->())->GetTextureAtlas();
        if (_FT_New_Memory_Face(uVar1, uVar4, uVar5, 0, &local_40) == 0) {
            VectorFontSource result(local_40, arg1, (unsigned char)local_38, this, arg2);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "VectorFontLoader.cpp",
                      53, "Could not create a font source from TTF data (pack id=%d).", arg1);
            new (&result) VectorFontSource();
        }
        return result;
    }

    // 0x1008ea410
    VectorFontLoader::~VectorFontLoader() {
        if (field_8 != 0) {
            _FT_Done_FreeType();
        }
    }

    // 0x1008ea460
    bool VectorFontLoader::Initialise() {
        if (field_8 != 0) {
            LogAssert("!m_library",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "VectorFontLoader.cpp",
                      27, nullptr);
        }
        int iVar1 = _FT_Init_FreeType(&field_8);
        if (iVar1 != 0) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "VectorFontLoader.cpp",
                      37, "Could not initialise freetype");
        }
        return iVar1 == 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008e6110
    shared_ptr_if_not_array<graphics::Font>::type
    make_shared<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*,
                graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
        const shared_ptr<graphics::FontMetrics>& fontMetrics, graphics::VectorFontSource*&& arg2,
        graphics::SpriteAtlasManager*& arg3, const shared_ptr<graphics::SpriteAtlas>& spriteAtlas) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        Font* local_40[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::Font>::type result;
        } else {
            local_40[0] =
                placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*,
                              graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
                    (void*)((long)arg1 + 32), fontMetrics, arg2, arg3, spriteAtlas);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::Font>, int, graphics::Font*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
