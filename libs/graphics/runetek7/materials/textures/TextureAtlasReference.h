// libs/graphics/runetek7/materials/textures/TextureAtlasReference.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TextureAtlasReference {
    public:
        void GetTextureAtlas() const;
        unsigned int GetTextureAtlasID() const;
        ~TextureAtlasReference();
        TextureAtlasReference();
        TextureAtlasReference(const shared_ptr<TextureAtlas>& textureAtlas,
                              const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        TextureAtlasReference* operator=(TextureAtlasReference&& textureAtlasReference);
        void AddReferences();
        TextureAtlasReference(const TextureAtlasReference& textureAtlasReference);
        TextureAtlasReference(TextureAtlasReference&& textureAtlasReference);
        uint8_t CheckTexturesLoaded() const;
        void Combine(const TextureAtlasReference& textureAtlasReference);
        void GetIDsFromMaterialInfo(eastl::vector<int>& arg1,
                                    const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) const;
        TextureAtlasReference* operator=(const TextureAtlasReference& textureAtlasReference);
        void ResetTexturesLoaded();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[24];
        unsigned int m_textureAtlasID;
        uint8_t field_44;
        uint8_t _unknown_45[3];
    };

    // 0x10086aaf0
    TextureAtlasReference::TextureAtlasReference() : MakeSharedPool<TextureAtlasReference, 8192>(), shared_ptr() {
        new (&field_16) eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>();
        m_textureAtlasID = 4294967295;
        field_44 = 0;
    }

    // 0x100873170
    void TextureAtlasReference::ResetTexturesLoaded() {
        field_44 = 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10085f210
    shared_ptr_if_not_array<graphics::TextureAtlas>::type
    make_shared<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&, std::recursive_mutex&,
                graphicutils::TextureAtlasUsage const* const&>(graphics::TextureManager& textureManager,
                                                               unsigned int& arg2,
                                                               std::recursive_mutex& recursive_mutex,
                                                               graphicutils::TextureAtlasUsage const* const& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        TextureAtlas* local_40[2];

        auto arg1 = aligned_alloc(191024, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::TextureAtlas>::type result;
        } else {
            local_40[0] = placement_new<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&,
                                        std::recursive_mutex&, graphicutils::TextureAtlasUsage const* const&>(
                (void*)((long)arg1 + 32), textureManager, arg2, recursive_mutex, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::TextureAtlas>, int, graphics::TextureAtlas*&>(
                    arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
