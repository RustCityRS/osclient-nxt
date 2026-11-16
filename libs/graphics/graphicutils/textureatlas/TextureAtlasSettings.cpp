// libs/graphics/graphicutils/textureatlas/TextureAtlasSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class TextureAtlasSettings {
    public:
        TextureAtlasSettings();
        void Initialise();
        static /* 8 bytes */ m_atlasQualityOverride;         // = 4
        static /* 80 bytes */ m_atlasQualityOverrideNames__; // initialised in its definition
        static StringEnum                                    /* 16 bytes */
            m_atlasQualityOverrideNames; // = StringEnum((StringEnumEntry *) &m_atlasQualityOverrideNames__, 5)

        // data members, from how the methods use this: 184 bytes
        char _unknown_0[144];
        int field_144;        // offset 144
        int field_148;        // offset 148
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined1 field_176; // offset 176
        char _unknown_177[7];
    };

    // 0x100f48578, 8 bytes, __data
    TextureAtlasSettings::m_atlasQualityOverride = 4;

    // 0x100f48580, 80 bytes, __data
    TextureAtlasSettings::m_atlasQualityOverrideNames__ = {
        0, 0, 14954817, 1, 1, 0, 14954820, 1, 2, 0, 14954823, 1, 3, 0, 14954826, 1, 4, 0, 14954829, 1,
    };

    // 0x103bd9a28, 16 bytes, __common; set at startup by ___cxx_global_var_init
    StringEnum TextureAtlasSettings::m_atlasQualityOverrideNames =
        StringEnum((StringEnumEntry*)&TextureAtlasSettings::m_atlasQualityOverrideNames__, 5);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TextureAtlasSettings::TextureAtlasSettings();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TextureAtlasSettings::TextureAtlasSettings();

    // 0x100bbc430, 656 bytes, placed by class name and debug map
    // TextureAtlasSettings::Initialise()
    void TextureAtlasSettings::Initialise() {
        char cVar1;
        byte bVar2;
        undefined4 uVar4;
        uint uVar5;
        MapArea* this_00;
        RenderDeviceCaps* this_01;
        undefined8* puVar6;
        NXTPixScreen* this_02;
        RenderDevice* this_03;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        uint uVar10;
        ulong uVar11;
        uint uVar12;
        uint uVar13;

        this_00 = (MapArea*)Instance();
        this_01 = (RenderDeviceCaps*)this_00->GetOrigin();
        puVar6 =
            (undefined8*)std::array<TextureAtlasQuality, 4ul>::operator[]((array<TextureAtlasQuality, 4ul>*)this, 3);
        *puVar6 = 2199023255568;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(undefined4*)(puVar6 + 4) = 0;
        puVar6 =
            (undefined8*)std::array<TextureAtlasQuality, 4ul>::operator[]((array<TextureAtlasQuality, 4ul>*)this, 2);
        *puVar6 = 1099511627792;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(undefined4*)(puVar6 + 4) = 0;
        puVar6 =
            (undefined8*)std::array<TextureAtlasQuality, 4ul>::operator[]((array<TextureAtlasQuality, 4ul>*)this, 1);
        *puVar6 = 1099511627792;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(undefined4*)(puVar6 + 4) = 1;
        puVar6 =
            (undefined8*)std::array<TextureAtlasQuality, 4ul>::operator[]((array<TextureAtlasQuality, 4ul>*)this, 0);
        *puVar6 = 1099511627792;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(undefined4*)(puVar6 + 4) = 2;
        this_02 = (NXTPixScreen*)((TextureAtlasSettings*)this)->Instance();
        if (this_02->GetUIHeight() != 1) {
            this_02 = (NXTPixScreen*)this_02->Instance();
            this_02->GetUIHeight();
        }
        this_03 = (RenderDevice*)this_02->Instance();
        uVar4 = this_03->GetGpuMemoryProfile();
        cVar1 = render::operator<(uVar4, 1);
        uVar10 = 2;
        if (cVar1 != '\0') {
            bVar2 = this_01->GetCompressedTextures();
            uVar10 = (uint)bVar2;
        }
        uVar12 = (uint)(cVar1 != '\0');
        if (m_atlasQualityOverride != 4) {
            uVar7 = logger::default_logger();
            uVar8 = m_atlasQualityOverrideNames.GetName(uVar10);
            uVar9 = m_atlasQualityOverrideNames.GetName(m_atlasQualityOverride);
            logger::Logger::Log(uVar7, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "graphicutils/textureatlas/TextureAtlasSettings.cpp",
                                65, "Requested texture atlas quality overridden from %s to %s", uVar8, uVar9);
            uVar12 = 4294967295;
            uVar10 = m_atlasQualityOverride;
        }
        uVar11 = (ulong)uVar10;
        uVar5 = 0;
        if ((int)uVar10 < 0) {
            uVar5 = uVar10;
        }
        do {
            uVar13 = uVar12;
            puVar6 = (undefined8*)std::array<TextureAtlasQuality, 4ul>::operator[](
                (array<TextureAtlasQuality, 4ul>*)this, uVar11);
            *(undefined4*)&field_176 = *(undefined4*)(puVar6 + 4);
            uVar7 = *puVar6;
            uVar8 = puVar6[1];
            uVar9 = puVar6[3];
            field_160 = puVar6[2];
            field_168 = uVar9;
            field_144 = (int)uVar7;
            field_148 = (int)((ulong)uVar7 >> 32);
            field_152 = uVar8;
            uVar10 = (uint)(field_148 * field_144) >> (field_176 & 31);
            if (uVar5 == (uint)uVar11)
                break;
            uVar11 = uVar11 - 1;
            uVar12 = uVar13 + 1;
        } while (this_01->field_52 < (int)uVar10);
        if (-1 < (int)uVar13) {
            uVar7 = logger::default_logger();
            logger::Logger::Log(
                uVar7, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                "textureatlas/TextureAtlasSettings.cpp",
                85,
                "Texture atlas quality automatically reduced due to GPU limitations. Selected texture resolution: %d",
                uVar10);
        }
        if (this_01->field_52 < (int)uVar10) {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "graphicutils/textureatlas/TextureAtlasSettings.cpp",
                                86,
                                "No texture atlas quality setting is low enough to fit within GPU max texture size.");
        }
    }

    // 0x100bc0a30, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&TextureAtlasSettings::m_atlasQualityOverrideNames)
            StringEnum((StringEnumEntry*)&TextureAtlasSettings::m_atlasQualityOverrideNames__, 5);
        ___cxa_atexit(StringEnum::~StringEnum, &TextureAtlasSettings::m_atlasQualityOverrideNames, 4294967296);
    }

} // namespace jag::graphicutils
