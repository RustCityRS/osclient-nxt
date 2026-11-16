// libs/graphics/runetek7/fonts/FontManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ConfigDecoderInfo {
    public:
        ConfigDecoderInfo* operator=(ConfigDecoderInfo&&);
        ConfigDecoderInfo();
        ~ConfigDecoderInfo();

        // data members, from how the methods use this: 48 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[47];
    };

    // 0x1008e59f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ConfigDecoderInfo::ConfigDecoderInfo(): jumps straight to the base-object constructor

    // 0x1008e5a10, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ConfigDecoderInfo::~ConfigDecoderInfo(): jumps straight to the base-object destructor

    // 0x1008e5ed0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::Font>::type make_shared<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(shared_ptr<graphics::FontMetrics> const&, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&)
    jag* jag::make_shared<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::SpriteAtlasManager*&,
                          shared_ptr<graphics::SpriteAtlas> const&>(shared_ptr* param_1, SpriteAtlasManager** param_2,
                                                                    shared_ptr* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Font* local_40[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&,
                                        graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
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

namespace jag::graphics {
    class FontManager {
    public:
        FontManager(SpriteAtlasManager*, Js5ResourceProvider*, IConfigProvider*, Js5ArchiveSettings*);
        ~FontManager();
        void Flush();
        void MainLogic();
        Js5ResourceProvider* GetFont(int, shared_ptr<SpriteAtlas> const&);
        void GetFontMetricsFromID(int);

        // data members, from how the methods use this: 5408 bytes
        SpriteAtlasManager* field_0;  // offset 0
        Js5ResourceProvider* field_8; // offset 8
        IConfigProvider* field_16;    // offset 16
        char _unknown_24[5384];
    };

    // 0x1008e5e90, 48 bytes, inline, placed by class name and debug map
    // FontManager::GetFontMetricsFromID(int)
    void FontManager::GetFontMetricsFromID(int param_1) {
        int local_c;

        local_c = param_1;
        eastl::vector_map<int, shared_ptr<FontMetrics>, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, shared_ptr<FontMetrics>>, eastl::allocator>>::
        operator[]((vector_map<int, shared_ptr<FontMetrics>, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, shared_ptr<FontMetrics>>, eastl::allocator>>*)&field_5400,
                   &local_c);
    }

    // 0x1009073f0, 448 bytes, inline, placed by class name
    // FontManager::FontManager(SpriteAtlasManager*, Js5ResourceProvider*, IConfigProvider*, Js5ArchiveSettings*)::$_0::operator()(unsigned int, unsigned int, unsigned int, unsigned int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&, Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >, eastl::allocator> const*) const
    /* FontManager::FontManager(SpriteAtlasManager*,
   Js5ResourceProvider*, IConfigProvider*,
   Js5ArchiveSettings*)::$_0::TEMPNAMEPLACEHOLDERVALUE(unsigned int, unsigned int, unsigned
   int, unsigned int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >
   const&, Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >,
   eastl::allocator> const*) const */

    void FontManager::FontManager(SpriteAtlasManager*, Js5ResourceProvider*, IConfigProvider*,
                                  Js5ArchiveSettings*)::$_0::operator()(uint param_1, uint param_2, uint param_3,
                                                                        uint param_4, shared_ptr* param_5,
                                                                        Array* param_6) {
        long lVar1;
        uchar uVar3;
        uint uVar5;
        int iVar6;
        FontMetrics* pFVar7;
        PacketT* pPVar8;
        undefined8 uVar9;
        shared_ptr<FontMetrics>* this;
        undefined4 in_register_0000000c;
        undefined4 in_register_00000014;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        VectorFontLoader local_70[3];
        shared_ptr local_40;

        lVar1 = *(long*)CONCAT44(in_register_0000003c, param_1);
        if ((Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)CONCAT44(
                in_register_0000000c, param_4) ==
            (Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("sourceData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontManager.cpp",
                      30, (char*)0);
        }
        MakeSharedPool<FontMetrics, 64>::MakeShared<>(
            &local_40, (MakeSharedPool<FontMetrics, 64>*)CONCAT44(in_register_00000034, param_2));
        pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)&local_40);
        pPVar8 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000014, param_3));
        pFVar7->LoadFromPacket(param_2, pPVar8);
        pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)&local_40);
        if (pFVar7->IsVectorFont() != '\0') {
            local_70[2].field_8 = pFVar7->Instance();
            pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)&local_40);
            uVar5 = pFVar7->GetSourcePackID();
            pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)&local_40);
            iVar6 = pFVar7->GetSourcePackID();
            uVar3 = Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::operator[](
                (Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)CONCAT44(
                    in_register_0000000c, param_4),
                (long)iVar6);
            pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)&local_40);
            pFVar7->GetPixelSize();
            local_70->CreateFontSource((int)local_70[2].field_8, (shared_ptr*)(ulong)uVar5, uVar3);
            if (!local_70->operator_cast_to_bool()) {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/fonts/FontManager.cpp",
                                    51, "Could not load font %u due to missing TTF data", param_2);
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/FontManager.cpp",
                                52, (char*)0);
            }
            pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)&local_40);
            pFVar7->UpdateFromVectorFontSource(local_70);
            local_70->~VectorFontSource();
        }
        local_70[0]._0_4_ = param_2;
        this = (shared_ptr<FontMetrics>*)
            eastl::vector_map<int, shared_ptr<FontMetrics>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<FontMetrics>>, eastl::allocator>>::
            operator[](
                (vector_map<int, shared_ptr<FontMetrics>, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, shared_ptr<FontMetrics>>, eastl::allocator>>*)(lVar1 + 5400),
                (int*)local_70);
        shared_ptr<FontMetrics>::operator=(this, &local_40);
        local_40.~shared_ptr();
    }

} // namespace jag::graphics
