// libs/graphics/runetek7/fonts/FontManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class FontManager {
    public:
        FontManager(SpriteAtlasManager* spriteAtlasManager, Js5ResourceProvider* js5ResourceProvider,
                    IConfigProvider* iConfigProvider, Js5ArchiveSettings* js5ArchiveSettings);
        ~FontManager();
        void Flush();
        void MainLogic();
        Js5ResourceProvider* GetFont(int arg1, const shared_ptr<SpriteAtlas>& spriteAtlas);
        void GetFontMetricsFromID(int arg1);

    private:
        SpriteAtlasManager* field_0;
        Js5ResourceProvider* field_8;
        IConfigProvider* field_16;
        uint8_t _unknown_24[5384];
    };

    // 0x1008e5e90
    void FontManager::GetFontMetricsFromID(int arg1) {
        field_5400[arg1];
    }

    // 0x1009073f0
    void FontManager::FontManager(
        SpriteAtlasManager*, Js5ResourceProvider*, IConfigProvider*,
        Js5ArchiveSettings*)::$_0::operator()(unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                              unsigned int arg4, const shared_ptr<PacketT<Array<unsigned char>>>& arg5,
                                              const Array<shared_ptr<PacketT<Array<unsigned char>>>, eastl::allocator>*
                                                  arg6) const {
        unsigned char arg3_00;
        int arg1_00;
        int iVar3;
        shared_ptr<PacketT<Array<unsigned char> _> _>* arg2_01;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        shared_ptr local_70;
        VectorFontLoader* local_48;
        MakeSharedPool<FontMetrics, 64> local_40;

        long lVar1 = field_0;
        if ((Array<shared_ptr<PacketT<Array<unsigned char>>>>*)(((uint64_t)in_register_0000000c << 32) |
                                                                (uint32_t)arg3) == nullptr) {
            LogAssert("sourceData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontManager.cpp",
                      30, nullptr, (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4));
        }
        MakeSharedPool<FontMetrics, 64>::MakeShared<>(&local_40);
        auto pFVar4 = local_40.operator->();
        auto arg2_00 =
            *(*((shared_ptr<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2)));
        pFVar4->LoadFromPacket(arg1, *arg2_00);
        pFVar4 = (FontMetrics*)local_40.operator->();
        if (pFVar4->IsVectorFont()) {
            local_48 = (VectorFontLoader*)pFVar4->Instance();
            pFVar4 = (FontMetrics*)local_40.operator->();
            arg1_00 = pFVar4->GetSourcePackID();
            pFVar4 = (FontMetrics*)local_40.operator->();
            iVar3 = pFVar4->GetSourcePackID();
            arg2_01 = (shared_ptr<PacketT<Array<unsigned char> _> _>*)(*(
                (Array<shared_ptr<PacketT<Array<unsigned char>>>>*)(((uint64_t)in_register_0000000c << 32) |
                                                                    (uint32_t)arg3)))[(long)iVar3];
            pFVar4 = (FontMetrics*)local_40.operator->();
            arg3_00 = pFVar4->GetPixelSize();
            local_70 = local_48->CreateFontSource(arg1_00, *arg2_01, arg3_00);
            if (!(shared_ptr::operator_cast_to_bool(&local_70))) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "fonts/FontManager.cpp",
                          51, "Could not load font %u due to missing TTF data", arg1);
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/FontManager.cpp",
                                52, nullptr);
            }
            pFVar4 = (FontMetrics*)local_40.operator->();
            pFVar4->UpdateFromVectorFontSource(&local_70);
        }
        local_70[0]._0_4_ = arg1;
        shared_ptr<FontMetrics>* this_01 = (shared_ptr<FontMetrics>*)(*((lVar1 + 5400)))[local_70];
        *this_01 = local_40;
    }

} // namespace jag::graphics

namespace jag {
    class ConfigDecoderInfo {
    public:
        ConfigDecoderInfo* operator=(ConfigDecoderInfo&& configDecoderInfo);
        ConfigDecoderInfo();
        ~ConfigDecoderInfo();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[47];
    };

    // 0x1008e5ed0
    shared_ptr_if_not_array<graphics::Font>::type
    make_shared<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::SpriteAtlasManager*&,
                shared_ptr<graphics::SpriteAtlas> const&>(const shared_ptr<graphics::FontMetrics>& fontMetrics,
                                                          graphics::SpriteAtlasManager*& arg2,
                                                          const shared_ptr<graphics::SpriteAtlas>& spriteAtlas) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        Font* local_40[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::Font>::type result;
        } else {
            local_40[0] = placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&,
                                        graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
                (void*)((long)arg1 + 32), fontMetrics, arg2, spriteAtlas);
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
