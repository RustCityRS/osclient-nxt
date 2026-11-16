// libs/graphics/runetek7/materials/sprites/SpriteAtlasReference.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SpriteAtlasReference {
    public:
        void GetSpriteHash() const;
        void GetSpriteAtlas() const;
        ~SpriteAtlasReference();
        int GetSpriteIndex() const;
        uint32_t GetWidth() const;
        uint32_t GetHeight() const;
        void SetDisableCache(bool arg1);
        void GetRenderMapping() const;
        uint8_t GetDisableCache() const;
        SpriteAtlasReference(const shared_ptr<SpriteAtlas>& spriteAtlas, int arg2, long long arg3);
        void SetAtlas(const shared_ptr<SpriteAtlas>& spriteAtlas, int arg2);
        bool IsReady() const;
        void HasChanged(bool arg1);
        void SetLoading();
        void GetTotalWidth() const;
        void GetTotalHeight() const;
        bool ShouldAlwaysBeLoaded();
        void DecrementAlwaysLoaded();
        void IncrementAlwaysLoaded();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullSpriteAtlasReference; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        long long field_0;
        shared_ptr field_8;
        uint32_t field_24;
        int m_spriteIndex;
        int field_32;
        uint8_t field_36;
        uint8_t m_disableCache;
        uint8_t _unknown_38[6];
    };

    // 0x1003c3da0
    uint32_t SpriteAtlasReference::GetWidth() const {
        long lVar1 = ((SpriteAtlas*)(*field_8).operator->())->GetSpriteRenderMapping(m_spriteIndex);
        uint32_t* puVar2 = (uint32_t*)(*((lVar1 + 104)))[0];
        return *puVar2;
    }

    // 0x1003c3de0
    uint32_t SpriteAtlasReference::GetHeight() const {
        long lVar1 = ((SpriteAtlas*)(*field_8).operator->())->GetSpriteRenderMapping(m_spriteIndex);
        uint32_t* puVar2 = (uint32_t*)(*((lVar1 + 104)))[1];
        return *puVar2;
    }

    // 0x100524d00
    void SpriteAtlasReference::SetDisableCache(bool arg1) {
        m_shareLight = arg1;
    }

    // 0x10068f9d0
    void SpriteAtlasReference::GetRenderMapping() const {
        ((SpriteAtlas*)(*field_8).operator->())->GetSpriteRenderMapping(m_spriteIndex);
    }

    // 0x1008c8140
    void SpriteAtlasReference::GetTotalWidth() const {
        SpriteAtlas* this_00 = (SpriteAtlas*)(*field_8).operator->();
        ((SpriteAtlasMapping*)this_00->GetSpriteRenderMapping(m_spriteIndex))->TotalWidth();
    }

    // 0x1008c8170
    void SpriteAtlasReference::GetTotalHeight() const {
        SpriteAtlas* this_00 = (SpriteAtlas*)(*field_8).operator->();
        ((SpriteAtlasMapping*)this_00->GetSpriteRenderMapping(m_spriteIndex))->TotalHeight();
    }

    // 0x1008c98c0
    bool SpriteAtlasReference::ShouldAlwaysBeLoaded() {
        return 0 < field_32;
    }

    // 0x1008c9d00
    void SpriteAtlasReference::DecrementAlwaysLoaded() {
        if (field_32 < 1) {
            LogAssert("m_alwaysLoadedReferenceCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasReference.h",
                      35, nullptr);
        }
        field_32 = field_32 - 1;
    }

    // 0x1008c9dc0
    void SpriteAtlasReference::IncrementAlwaysLoaded() {
        field_32 = field_32 + 1;
    }

} // namespace jag::graphics
