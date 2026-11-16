// libs/graphics/runetek7/materials/textures/TextureAtlasReference.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TextureAtlasReference {
    public:
        void GetTextureAtlas() const;
        GetTextureAtlasID() const;
        ~TextureAtlasReference();
        TextureAtlasReference();
        TextureAtlasReference(shared_ptr<TextureAtlas> const&,
                              eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&);
        TextureAtlasReference* operator=(TextureAtlasReference&&);
        void AddReferences();
        TextureAtlasReference(TextureAtlasReference const&);
        TextureAtlasReference(TextureAtlasReference&&);
        CheckTexturesLoaded() const;
        void Combine(TextureAtlasReference const&);
        void GetIDsFromMaterialInfo(eastl::vector<int, BucketAllocatorEASTL>&,
                                    eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&) const;
        TextureAtlasReference* operator=(TextureAtlasReference const&);
        void ResetTexturesLoaded();

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[24];
        int field_40;        // offset 40
        undefined1 field_44; // offset 44
        char _unknown_45[3];
    };

    // 0x10085f180, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TextureAtlasReference::TextureAtlasReference(): jumps straight to the base-object constructor

    // 0x10086aaf0, 80 bytes, base-object constructor, inline, placed by class name
    // TextureAtlasReference::TextureAtlasReference()
    void TextureAtlasReference::TextureAtlasReference() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<TextureAtlasReference, 8192>();
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        field_40 = -1;
        field_44 = 0;
    }

    // 0x100873170, 16 bytes, inline, placed by class name
    // TextureAtlasReference::ResetTexturesLoaded()
    void TextureAtlasReference::ResetTexturesLoaded() {
        field_44 = 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10085f210, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::TextureAtlas>::type make_shared<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&, std::recursive_mutex&, graphicutils::TextureAtlasUsage const* const&>(graphics::TextureManager&, unsigned int&, std::recursive_mutex&, graphicutils::TextureAtlasUsage const* const&)
    /* shared_ptr_if_not_array<graphics::TextureAtlas>::type
   make_shared<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&,
   std::recursive_mutex&, graphicutils::TextureAtlasUsage const*
   const&>(graphics::TextureManager&, unsigned int&, std::recursive_mutex&,
   graphicutils::TextureAtlasUsage const* const&) */

    jag* jag::make_shared<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&, std::recursive_mutex&,
                          graphicutils::TextureAtlasUsage_const* const&>(TextureManager* param_1, uint* param_2,
                                                                         recursive_mutex* param_3,
                                                                         TextureAtlasUsage** param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        TextureAtlas* local_40[2];

        pvVar1 = (void*)aligned_alloc(191024, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&,
                                        std::recursive_mutex&, graphicutils::TextureAtlasUsage_const* const&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::TextureAtlas>, int, graphics::TextureAtlas*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
