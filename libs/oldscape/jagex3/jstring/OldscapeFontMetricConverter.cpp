// libs/oldscape/jagex3/jstring/OldscapeFontMetricConverter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape {
    class OldScapeFontMetricConverter {
    public:
        auto Convert(unsigned int arg1, const jstring::PixfontGeneric& pixfontGeneric);
    };

    // 0x1002bdc00
    auto OldScapeFontMetricConverter::Convert(unsigned int arg1, const jstring::PixfontGeneric& pixfontGeneric) {
        auto result;
        uint8_t uVar5;
        uint8_t* puVar6;
        char16_t arg1_00;

        make_shared<jag::graphics::FontMetrics>(&result);
        fixed_vector<jag::graphics::FontGlyphInfo, 256ul> local_560;
        local_560.resize(256);
        unsigned long arg1_01 = 0;
        do {
            puVar6 = &local_560[arg1_01];
            arg1_00 = (char16_t)arg1_01;
            uVar5 = pixfontGeneric.CharWid(arg1_00);
            *puVar6 = uVar5;
            uVar5 = pixfontGeneric.CharHei(arg1_00);
            puVar6[1] = uVar5;
            uVar5 = pixfontGeneric.CharBearingX(arg1_00);
            puVar6[3] = uVar5;
            uVar5 = pixfontGeneric.CharBearingY(arg1_00);
            puVar6[4] = uVar5;
            puVar6[2] = *puVar6;
            arg1_01 = arg1_01 + 1;
        } while (arg1_01 != 256);
        unsigned int arg3 = pixfontGeneric.field_0;
        int iVar1 = pixfontGeneric.field_4;
        int iVar2 = pixfontGeneric.field_12;
        int iVar3 = pixfontGeneric.field_16;
        int iVar4 = pixfontGeneric.field_8;
        ((FontMetrics*)(result).operator->())
            ->SetCoreMetricData(arg1, local_560, arg3, (unsigned char)iVar2, (unsigned char)iVar3, (unsigned char)iVar1,
                                (unsigned char)iVar4);
        return result;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1002bdd90
    shared_ptr_if_not_array<graphics::FontMetrics>::type make_shared<graphics::FontMetrics>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        FontMetrics* local_28[2];

        auto arg1 = aligned_alloc(13728, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::FontMetrics>::type result;
        } else {
            local_28[0] = placement_new<graphics::FontMetrics>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::FontMetrics>, int, graphics::FontMetrics*&>(arg1, &local_2c,
                                                                                                       local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
