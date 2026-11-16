// libs/oldscape/jagex3/jstring/OldscapeFontMetricConverter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape {
    class OldScapeFontMetricConverter {
    public:
        OldScapeFontMetricConverter* Convert(unsigned int, jstring::PixfontGeneric const&);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        long field_8; // offset 8
    };

    // 0x1002bdc00, 400 bytes, placed by class name and debug map
    // OldScapeFontMetricConverter::Convert(unsigned int, jstring::PixfontGeneric const&)
    OldScapeFontMetricConverter* OldScapeFontMetricConverter::Convert(uint param_1, PixfontGeneric* param_2) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        undefined1 uVar6;
        undefined1* puVar7;
        FontMetrics* this_00;
        wchar16 wVar8;
        ulong uVar9;
        fixed_vector<jag::graphics::FontGlyphInfo, 256ul, true, eastl::allocator> local_560[1320];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        make_shared<jag::graphics::FontMetrics>((jag*)this);
        eastl::fixed_vector<jag::graphics::FontGlyphInfo, 256ul, true, eastl::allocator>::fixed_vector(local_560);
        local_560->resize(256);
        uVar9 = 0;
        do {
            puVar7 = (undefined1*)
                eastl::vector<jag::graphics::FontGlyphInfo,
                              eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<jag::graphics::FontGlyphInfo,
                            eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)local_560,
                    uVar9);
            wVar8 = (wchar16)uVar9;
            uVar6 = param_2->CharWid(wVar8);
            *puVar7 = uVar6;
            uVar6 = param_2->CharHei(wVar8);
            puVar7[1] = uVar6;
            uVar6 = param_2->CharBearingX(wVar8);
            puVar7[3] = uVar6;
            uVar6 = param_2->CharBearingY(wVar8);
            puVar7[4] = uVar6;
            puVar7[2] = *puVar7;
            uVar9 = uVar9 + 1;
        } while (uVar9 != 256);
        uVar1 = param_2->field_0;
        iVar2 = param_2->field_4;
        iVar3 = param_2->field_12;
        iVar4 = param_2->field_16;
        iVar5 = param_2->field_8;
        this_00 = (FontMetrics*)shared_ptr<jag::graphics::FontMetrics>::operator->(
            (shared_ptr<jag::graphics::FontMetrics>*)this);
        this_00->SetCoreMetricData(param_1, local_560, uVar1, (uchar)iVar3, (uchar)iVar4, (uchar)iVar2, (uchar)iVar5);
        eastl::fixed_vector<jag::graphics::FontGlyphInfo, 256ul, true, eastl::allocator>::~fixed_vector(local_560);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1002bdd90, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::FontMetrics>::type make_shared<graphics::FontMetrics>()
    jag* make_shared<graphics::FontMetrics>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        FontMetrics* local_28[2];

        pvVar1 = (void*)aligned_alloc(13728, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<graphics::FontMetrics>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::FontMetrics>, int, graphics::FontMetrics*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
