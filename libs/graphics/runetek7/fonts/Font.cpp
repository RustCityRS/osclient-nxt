// libs/graphics/runetek7/fonts/Font.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Font.h"

namespace jag::graphics {
    // 0x103bc0400, 16 bytes, __common; set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Font::NullFont;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Font::GetFontMetrics() const;

    // 0x1008deeb0, 176 bytes, base-object constructor, placed by class name and debug map
    // Font::Font(shared_ptr<FontMetrics> const&, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&)
    void Font::Font(shared_ptr* param_1, SpriteAtlasManager* param_2, shared_ptr* param_3) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_charactersTexture, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48) eastl::vector<math::Rect<float>, eastl::allocator>();
        LoadSpriteGlyphs(this, param_2, param_3);
        UpdateUVs(this);
    }

    // 0x1008def70, 128 bytes, placed by class name and debug map
    // Font::LoadSpriteGlyphs(SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&)
    void Font::LoadSpriteGlyphs(SpriteAtlasManager* param_1, shared_ptr* param_2) {
        FontMetrics* this_00;
        int iVar1;
        shared_ptr local_38;

        this_00 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
        iVar1 = this_00->GetSourcePackID();
        SpriteAtlasManager::GetSpriteReference(&local_38, param_1, (long)iVar1, param_2, 2);
        shared_ptr<SpriteAtlasReference>::operator=((shared_ptr<SpriteAtlasReference>*)field_16, &local_38);
        local_38.~shared_ptr();
    }

    // 0x1008deff0, 736 bytes, placed by class name and debug map
    // Font::UpdateUVs()
    void Font::UpdateUVs() {
        undefined1* this_00;
        ushort uVar1;
        ushort uVar2;
        ushort uVar3;
        ushort uVar4;
        ushort uVar5;
        bool bVar6;
        ushort uVar7;
        int iVar8;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        shared_ptr* this_02;
        MapArea* this_03;
        shared_ptr* psVar9;
        SpriteAtlas* this_04;
        FastPool<audio::SoundInstance, int>* this_05;
        long lVar10;
        FontMetrics* pFVar11;
        ushort* puVar12;
        Rect<float>* this_06;
        EntityHighlightState* this_07;
        ulong uVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        undefined1 local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_16;
        bVar6 = this_00->operator_cast_to_bool();
        if (!bVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_spriteReference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      61, (char*)0);
        }
        this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)this_00);
        this_02 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_01);
        bVar6 = shared_ptr::operator_cast_to_bool(this_02);
        if (bVar6) {
            this_03 = (MapArea*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_02);
            psVar9 = (shared_ptr*)this_03->GetOrigin();
            shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)m_charactersTexture, psVar9);
            this_04 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_02);
            this_05 = (FastPool<audio::SoundInstance, int>*)shared_ptr<SpriteAtlasReference>::operator->(
                (shared_ptr<SpriteAtlasReference>*)this_00);
            iVar8 = FastPool<audio::SoundInstance, int>::capacity(this_05);
            lVar10 = this_04->GetSpriteRenderMapping(iVar8);
            this_07 = (EntityHighlightState*)(lVar10 + 88);
            fVar14 = (float)this_07->GetOverbright();
            fVar15 = (float)this_07->GetAlpha();
            fVar16 = (float)this_07->MaxU();
            fVar17 = (float)this_07->MaxV();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            eastl::vector<math::Rect<float>, eastl::allocator>::resize((ulong)&field_48);
            pFVar11 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
            uVar7 = pFVar11->GetFontSheetWidth();
            fVar16 = (fVar16 - fVar14) / (float)uVar7;
            pFVar11 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
            uVar7 = pFVar11->GetFontSheetHeight();
            fVar17 = (fVar17 - fVar15) / (float)uVar7;
            uVar13 = 0;
            do {
                iVar8 = shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
                local_68->GetFontSheetPosition(iVar8);
                puVar12 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                        local_68,
                    0);
                uVar7 = *puVar12;
                puVar12 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                        local_68,
                    1);
                uVar1 = *puVar12;
                puVar12 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                        local_68,
                    0);
                uVar2 = *puVar12;
                puVar12 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                        local_68,
                    2);
                uVar3 = *puVar12;
                puVar12 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                        local_68,
                    1);
                uVar4 = *puVar12;
                puVar12 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                        local_68,
                    3);
                uVar5 = *puVar12;
                this_06 = (Rect<float>*)eastl::vector<math::Rect<float>, eastl::allocator>::operator[](
                    (vector<math::Rect<float>, eastl::allocator>*)&field_48, uVar13);
                this_06->SetUV((float)uVar7 * fVar16 + fVar14, (float)((uint)uVar3 + (uint)uVar2) * fVar16 + fVar14,
                               (float)uVar1 * fVar17 + fVar15, (float)((uint)uVar5 + (uint)uVar4) * fVar17 + fVar15);
                local_68->~fixed_vector();
                uVar13 = uVar13 + 1;
            } while (uVar13 != 256);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008df2e0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Font::Font(shared_ptr<FontMetrics> const&, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&): jumps straight to the base-object constructor

    // 0x1008df2f0, 192 bytes, base-object constructor, placed by class name and debug map
    // Font::Font(shared_ptr<FontMetrics> const&, VectorFontSource*, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&)
    void Font::Font(shared_ptr* param_1, VectorFontSource* param_2, SpriteAtlasManager* param_3, shared_ptr* param_4) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_charactersTexture, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48) eastl::vector<math::Rect<float>, eastl::allocator>();
        LoadVectorGlyphs(this, param_2, param_3, param_4);
        UpdateUVs(this);
    }

    // 0x1008df3b0, 496 bytes, placed by class name and debug map
    // Font::LoadVectorGlyphs(VectorFontSource*, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&)
    void Font::LoadVectorGlyphs(VectorFontSource* param_1, SpriteAtlasManager* param_2, shared_ptr* param_3) {
        char cVar1;
        ushort uVar2;
        ushort uVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        FontMetrics* pFVar7;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_00;
        fixed_vector* pfVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        shared_ptr* psVar9;
        shared_ptr local_b0;
        shared_ptr* local_a0;
        SpriteAtlasManager* local_98;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a0 = param_3;
        if (param_1 == (VectorFontSource*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("source",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      39, (char*)0);
        }
        pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
        cVar1 = pFVar7->IsVectorFont();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_fontMetrics->IsVectorFont()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      40, (char*)0);
        }
        new (&local_90) RGBAImage();
        pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
        uVar2 = pFVar7->GetFontSheetWidth();
        pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
        uVar3 = pFVar7->GetFontSheetHeight();
        this_00 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
        pfVar8 = (fixed_vector*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_00);
        cVar1 = param_1->RenderGlyphs(&local_90, uVar2, uVar3, pfVar8);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("glyphRenderOk",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      47, (char*)0);
        }
        local_98 = param_2;
        this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)local_90.GetDevCredentialsOutputDirectory();
        uVar4 = this_01->data();
        uVar5 = local_90.GetX();
        uVar6 = local_90.GetZ();
        psVar9 = (shared_ptr*)local_90.second();
        local_b0.AddRuntimeSprite(local_98, uVar4, uVar5, uVar6, 0, psVar9);
        shared_ptr<SpriteAtlasReference>::operator=((shared_ptr<SpriteAtlasReference>*)field_16, &local_b0);
        local_b0.~shared_ptr();
        local_90.~RGBAImage();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008df5a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Font::Font(shared_ptr<FontMetrics> const&, VectorFontSource*, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&): jumps straight to the base-object constructor

    // 0x1008df5b0, 80 bytes, placed by class name and debug map
    // Font::GetUV(unsigned int) const
    void Font::GetUV(uint param_1) {
        ulong uVar1;

        uVar1 = (&field_48)->size();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/Font.cpp",
                            31, (char*)0);
        }
        eastl::vector<math::Rect<float>, eastl::allocator>::operator[](
            (vector<math::Rect<float>, eastl::allocator>*)&field_48, (ulong)param_1);
    }

    // 0x100916d40, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Font::NullFont) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5390, &Font::NullFont, 4294967296);
    }

} // namespace jag::graphics
