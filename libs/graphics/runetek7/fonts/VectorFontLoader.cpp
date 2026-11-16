// libs/graphics/runetek7/fonts/VectorFontLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class VectorFontLoader {
    public:
        GetLibrary() const;
        CreateFontSource(int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&, unsigned char);
        ~VectorFontLoader();
        bool Initialise();

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        long field_8; // offset 8
    };

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    VectorFontLoader::GetLibrary() const;

    // 0x1008e6000, 256 bytes, placed by class name and debug map
    // VectorFontLoader::CreateFontSource(int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&, unsigned char)
    VectorFontLoader* VectorFontLoader::CreateFontSource(int param_1, shared_ptr* param_2, uchar param_3) {
        long lVar1;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        undefined8 uVar4;
        TextureAtlasReference* this_01;
        undefined8 uVar5;
        undefined7 in_register_00000009;
        shared_ptr* this_02;
        undefined4 in_register_00000034;
        uchar in_R8B;
        FT_FaceRec_* local_40;
        uchar local_38;

        this_02 = (shared_ptr*)CONCAT71(in_register_00000009, param_3);
        local_38 = in_R8B;
        if (!operator!=(this_02, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("ttfData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "VectorFontLoader.cpp",
                      44, (char*)0);
        }
        lVar1 = ((VectorFontLoader*)CONCAT44(in_register_00000034, param_1))->field_8;
        this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_02);
        uVar4 = this_00->GetDataPtr();
        this_01 = (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_02);
        uVar5 = this_01->GetTextureAtlas();
        if (_FT_New_Memory_Face(lVar1, uVar4, uVar5, 0, &local_40) == 0) {
            new (this) VectorFontSource(local_40, (int)param_2, local_38,
                                        (VectorFontLoader*)CONCAT44(in_register_00000034, param_1), this_02);
        } else {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/VectorFontLoader.cpp",
                                53, "Could not create a font source from TTF data (pack id=%d).", (int)param_2);
            new (this) VectorFontSource();
        }
        return this;
    }

    // 0x1008ea410, 64 bytes, base-object destructor, placed by class name
    // VectorFontLoader::~VectorFontLoader()
    void VectorFontLoader::~VectorFontLoader() {
        if (field_8 != 0) {
            _FT_Done_FreeType();
        }
        ~AutoSingleton();
    }

    // 0x1008ea450, 16 bytes, complete-object destructor, placed by class name
    // VectorFontLoader::~VectorFontLoader(): jumps straight to the base-object destructor

    // 0x1008ea460, 128 bytes, placed by class name
    // VectorFontLoader::Initialise()
    bool VectorFontLoader::Initialise() {
        int iVar1;
        undefined8 uVar2;

        if (field_8 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_library",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "VectorFontLoader.cpp",
                      27, (char*)0);
        }
        iVar1 = _FT_Init_FreeType(&field_8);
        if (iVar1 != 0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/VectorFontLoader.cpp",
                                37, "Could not initialise freetype");
        }
        return iVar1 == 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008e6110, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::Font>::type make_shared<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*&&, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&)
    jag* jag::make_shared<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*,
                          graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
        shared_ptr* param_1, VectorFontSource** param_2, SpriteAtlasManager** param_3, shared_ptr* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Font* local_40[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*,
                              graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<graphics::Font>, int, graphics::Font*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
