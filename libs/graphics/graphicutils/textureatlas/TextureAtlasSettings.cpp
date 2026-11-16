// libs/graphics/graphicutils/textureatlas/TextureAtlasSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class TextureAtlasSettings {
    public:
        TextureAtlasSettings();
        void Initialise();
        static int64_t m_atlasQualityOverride;            // = 4
        static int32_t m_atlasQualityOverrideNames__[20]; // initialised in its definition
        static StringEnum
            m_atlasQualityOverrideNames; // = StringEnum((StringEnumEntry *) &m_atlasQualityOverrideNames__, 5)

    private:
        uint8_t _unknown_0[144];
        int field_144;
        int field_148;
        uint64_t field_152;
        uint64_t field_160;
        uint64_t field_168;
        uint8_t field_176;
        uint8_t _unknown_177[7];
    };

    // 0x100f48578
    int64_t TextureAtlasSettings::m_atlasQualityOverride = 4;

    // 0x100f48580
    int32_t TextureAtlasSettings::m_atlasQualityOverrideNames__[20] = {
        0, 0, 14954817, 1, 1, 0, 14954820, 1, 2, 0, 14954823, 1, 3, 0, 14954826, 1, 4, 0, 14954829, 1,
    };

    // 0x103bd9a28, set at startup by ___cxx_global_var_init
    StringEnum TextureAtlasSettings::m_atlasQualityOverrideNames =
        StringEnum((StringEnumEntry*)&TextureAtlasSettings::m_atlasQualityOverrideNames__, 5);

    // 0x100009e70: TextureAtlasSettings::TextureAtlasSettings() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100bbc430
    void TextureAtlasSettings::Initialise() {
        uint64_t uVar1;
        uint8_t bVar3;
        Logger* pLVar7;
        uint64_t uVar8;
        uint64_t uVar9;
        unsigned int uVar12;

        auto this_00 = Instance();
        auto this_01 = this_00->GetOrigin();
        uint64_t* puVar6 = (uint64_t*)(*this)[3];
        *puVar6 = 2199023255568;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(uint32_t*)(puVar6 + 4) = 0;
        puVar6 = (uint64_t*)(*this)[2];
        *puVar6 = 1099511627792;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(uint32_t*)(puVar6 + 4) = 0;
        puVar6 = (uint64_t*)(*this)[1];
        *puVar6 = 1099511627792;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(uint32_t*)(puVar6 + 4) = 1;
        puVar6 = (uint64_t*)(*this)[0];
        *puVar6 = 1099511627792;
        puVar6[1] = 8589934594;
        puVar6[2] = 21474836485;
        puVar6[3] = 17179869188;
        *(uint32_t*)(puVar6 + 4) = 2;
        auto this_02 = Instance();
        if (this_02->GetUIHeight() != 1) {
            this_02 = (NXTPixScreen*)this_02->Instance();
            this_02->GetUIHeight();
        }
        GpuMemoryProfile gpuMemoryProfile1 = ((RenderDevice*)this_02->Instance())->GetGpuMemoryProfile();
        bool cVar2 = render::operator<(gpuMemoryProfile1, 1);
        unsigned int uVar10 = 2;
        if (cVar2) {
            bVar3 = this_01->GetCompressedTextures();
            uVar10 = (unsigned int)bVar3;
        }
        unsigned int uVar11 = (unsigned int)(cVar2);
        if (m_atlasQualityOverride != 4) {
            pLVar7 = logger::default_logger();
            uVar8 = m_atlasQualityOverrideNames.GetName(uVar10);
            uVar9 = m_atlasQualityOverrideNames.GetName(m_atlasQualityOverride);
            pLVar7->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "textureatlas/TextureAtlasSettings.cpp",
                        65, "Requested texture atlas quality overridden from %s to %s", uVar8, uVar9);
            uVar11 = 4294967295;
            uVar10 = m_atlasQualityOverride;
        }
        unsigned long arg1 = (unsigned long)uVar10;
        unsigned int uVar5 = 0;
        if ((int)uVar10 < 0) {
            uVar5 = uVar10;
        }
        do {
            uVar12 = uVar11;
            puVar6 = (uint64_t*)(*this)[arg1];
            *(uint32_t*)&field_176 = *(uint32_t*)(puVar6 + 4);
            uVar8 = *puVar6;
            uVar9 = puVar6[1];
            uVar1 = puVar6[3];
            field_160 = puVar6[2];
            field_168 = uVar1;
            field_144 = (int)uVar8;
            field_148 = (int)((unsigned long)uVar8 >> 32);
            field_152 = uVar9;
            uVar10 = (unsigned int)(field_148 * field_144) >> (field_176 & 31);
            if (uVar5 == (unsigned int)arg1)
                break;
            arg1 = arg1 - 1;
            uVar11 = uVar12 + 1;
        } while (this_01->field_52 < (int)uVar10);
        if (-1 < (int)uVar12) {
            pLVar7 = logger::default_logger();
            pLVar7->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                "textureatlas/TextureAtlasSettings.cpp",
                85,
                "Texture atlas quality automatically reduced due to GPU limitations. Selected texture resolution: %d",
                (unsigned long)uVar10);
        }
        if (this_01->field_52 < (int)uVar10) {
            pLVar7 = logger::default_logger();
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "textureatlas/TextureAtlasSettings.cpp",
                        86, "No texture atlas quality setting is low enough to fit within GPU max texture size.");
        }
    }

} // namespace jag::graphicutils
