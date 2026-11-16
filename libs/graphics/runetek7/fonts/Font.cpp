// libs/graphics/runetek7/fonts/Font.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Font.h"

namespace jag::graphics {
    // 0x103bc0400, set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Font::NullFont =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009ca0: Font::GetFontMetrics() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1008deeb0
    Font::Font(const shared_ptr<FontMetrics>& fontMetrics, SpriteAtlasManager* spriteAtlasManager,
               const shared_ptr<SpriteAtlas>& spriteAtlas)
        : shared_ptr(fontMetrics) {
        new (field_16) shared_ptr();
        new (m_charactersTexture) shared_ptr();
        new (&field_48) eastl::vector<math::Rect<float>>();
        LoadSpriteGlyphs(spriteAtlasManager, spriteAtlas);
        UpdateUVs();
    }

    // 0x1008def70
    void Font::LoadSpriteGlyphs(SpriteAtlasManager* spriteAtlasManager, const shared_ptr<SpriteAtlas>& spriteAtlas) {
        int iVar1 = ((FontMetrics*)(*this).operator->())->GetSourcePackID();
        auto local_38 = spriteAtlasManager->GetSpriteReference((long)iVar1, spriteAtlas, 2);
        *field_16 = local_38;
    }

    // 0x1008deff0
    void Font::UpdateUVs() {
        unsigned short uVar2;
        unsigned short uVar3;
        unsigned short uVar4;
        unsigned short uVar5;
        unsigned short uVar6;
        unsigned short uVar8;
        MapArea* this_02;
        shared_ptr<render::Texture2D>* texture2D;
        long lVar9;
        FontMetrics* pFVar10;
        unsigned short* puVar11;
        EntityHighlightState* this_06;
        unsigned long arg1_00;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        ReturnValue local_68;

        uint8_t* puVar1 = field_16;
        if (!(puVar1->operator_cast_to_bool())) {
            LogAssert("m_spriteReference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      61, nullptr);
        }
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*puVar1).operator->();
        auto this_01 = this_00->second();
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_02 = (MapArea*)(*this_01).operator->();
            texture2D = (shared_ptr<render::Texture2D>*)this_02->GetOrigin();
            *m_charactersTexture = *texture2D;
            lVar9 = ((SpriteAtlas*)(*this_01).operator->())
                        ->GetSpriteRenderMapping(
                            ((FastPool<audio::SoundInstance, int>*)(*puVar1).operator->())->capacity());
            this_06 = (EntityHighlightState*)(lVar9 + 88);
            fVar12 = (float)this_06->GetOverbright();
            fVar13 = (float)this_06->GetAlpha();
            fVar14 = (float)this_06->MaxU();
            fVar15 = (float)this_06->MaxV();
            puVar1 = &field_48;
            puVar1->clear();
            puVar1->resize(256);
            pFVar10 = (FontMetrics*)(*this).operator->();
            uVar8 = pFVar10->GetFontSheetWidth();
            fVar14 = (fVar14 - fVar12) / (float)uVar8;
            pFVar10 = (FontMetrics*)(*this).operator->();
            uVar8 = pFVar10->GetFontSheetHeight();
            fVar15 = (fVar15 - fVar13) / (float)uVar8;
            arg1_00 = 0;
            do {
                pFVar10 = (FontMetrics*)(*this).operator->();
                local_68 = pFVar10->GetFontSheetPosition((int)arg1_00);
                puVar11 = &local_68[0];
                uVar8 = *puVar11;
                puVar11 = &local_68[1];
                uVar2 = *puVar11;
                puVar11 = &local_68[0];
                uVar3 = *puVar11;
                puVar11 = &local_68[2];
                uVar4 = *puVar11;
                puVar11 = &local_68[1];
                uVar5 = *puVar11;
                puVar11 = &local_68[3];
                uVar6 = *puVar11;
                ((Rect<float>*)(*puVar1)[arg1_00])
                    ->SetUV((float)uVar8 * fVar14 + fVar12,
                            (float)((unsigned int)uVar4 + (unsigned int)uVar3) * fVar14 + fVar12,
                            (float)uVar2 * fVar15 + fVar13,
                            (float)((unsigned int)uVar6 + (unsigned int)uVar5) * fVar15 + fVar13);
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 256);
        }
    }

    // 0x1008df2f0
    Font::Font(const shared_ptr<FontMetrics>& fontMetrics, VectorFontSource* vectorFontSource,
               SpriteAtlasManager* spriteAtlasManager, const shared_ptr<SpriteAtlas>& spriteAtlas)
        : shared_ptr(fontMetrics) {
        new (field_16) shared_ptr();
        new (m_charactersTexture) shared_ptr();
        new (&field_48) eastl::vector<math::Rect<float>>();
        LoadVectorGlyphs(vectorFontSource, spriteAtlasManager, spriteAtlas);
        UpdateUVs();
    }

    // 0x1008df3b0
    void Font::LoadVectorGlyphs(VectorFontSource* vectorFontSource, SpriteAtlasManager* spriteAtlasManager,
                                const shared_ptr<SpriteAtlas>& spriteAtlas) {
        shared_ptr<SpriteAtlasReference> local_b0;

        shared_ptr<SpriteAtlas>* local_a0 = spriteAtlas;
        if (vectorFontSource == nullptr) {
            LogAssert("source",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      39, nullptr);
        }
        FontMetrics* pFVar3 = (FontMetrics*)(*this).operator->();
        if (!(pFVar3->IsVectorFont())) {
            LogAssert("m_fontMetrics->IsVectorFont()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      40, nullptr);
        }
        RGBAImage local_90;
        pFVar3 = (FontMetrics*)(*this).operator->();
        unsigned short arg2 = pFVar3->GetFontSheetWidth();
        pFVar3 = (FontMetrics*)(*this).operator->();
        unsigned short arg3 = pFVar3->GetFontSheetHeight();
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_00 =
            (compressed_pair_imp<
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this)
                .operator->();
        auto arg4_00 = this_00->second();
        if (!(vectorFontSource->RenderGlyphs(&local_90, arg2, arg3, *arg4_00))) {
            LogAssert("glyphRenderOk",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "Font.cpp",
                      47, nullptr);
        }
        unsigned int arg3_00 =
            ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)local_90.GetDevCredentialsOutputDirectory())
                ->data();
        unsigned int arg4 = local_90.GetX();
        unsigned int uVar2 = local_90.GetZ();
        local_90.second();
        SpriteAtlasManager::AddRuntimeSprite(&local_b0, (unsigned int)spriteAtlasManager, arg3_00, arg4,
                                             *((fixed_vector<int, _4ul>*)(unsigned long)uVar2), nullptr);
        *field_16 = local_b0;
    }

    // 0x1008df5b0
    void Font::GetUV(unsigned int arg1) const {
        if (field_48.size() <= arg1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/Font.cpp",
                            31, nullptr);
        }
        field_48[(unsigned long)arg1];
    }

} // namespace jag::graphics
