// libs/graphics/runetek7/materials/sprites/SpriteAtlas.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SpriteAtlas {
    public:
        unsigned int GetID() const;
        uint64_t* GetHALTexture() const;
        SpriteAtlasUsageType GetUsageType() const;
        SpriteAtlas(TextureManager* textureManager, unsigned int arg2, unsigned int arg3,
                    SpriteAtlasUsageType spriteAtlasUsageType, int arg5);
        void SizeAtlasArrays(unsigned int arg1);
        void CreateRenderingResources();
        void Destroy(eastl::vector_map<int, eastl::vector<shared_ptr<SpriteAtlasReference>>>* arg1);
        uint32_t GetAvailableIndex();
        void MakeIndexAvailable(int arg1);
        void AddSpriteReference(const shared_ptr<SpriteAtlasReference>& spriteAtlasReference);
        uint32_t FindSpriteIndexFromHash(long long arg1) const;
        auto GetSpriteReferenceFromIndex(int arg1) const;
        bool CheckHasSprite(shared_ptr<SpriteAtlasReference>& spriteAtlasReference, long long arg2) const;
        void GetSpritePackMapping(int& arg1, unsigned long& arg2, long long arg3, math::Rect<int>& rect,
                                  unsigned int arg5, unsigned int arg6);
        void GetSpriteRenderMapping(int arg1) const;
        auto GetAllSpriteMappings() const;
        void AddSpriteData(unsigned long arg1, const math::Rect<int>& rect, int arg3, const RGBAImage& rgbaImage,
                           int arg5, int arg6, int arg7);
        void AddSpriteMapping(unsigned long arg1, const math::Rect<int>& rect, int arg3,
                              const eastl::fixed_vector<int, 4ul>& arg4, int arg5, int arg6, int arg7);
        void RemoveSpriteByIndex(int arg1);
        void GetUsageMap(SpriteAtlasUsageMap& spriteAtlasUsageMap) const;
        void MainLogic();
        void DecrementAlwaysLoaded(long long arg1);
        void IncrementAlwaysLoaded(long long arg1);
        uint64_t FindSpriteHashFromIndex(int arg1) const;
        bool GetDetailsAtPosition(int& arg1, SpriteAtlasUsageType& spriteAtlasUsageType, math::Rect<int>& rect,
                                  int arg4, int arg5) const;
        void IsEmpty() const;
        ~SpriteAtlas();

    private:
        TextureManager* field_0;
        uint8_t _unknown_8[88];
        unsigned int m_iD;
        uint8_t _unknown_100[148];
        unsigned int field_248;
        SpriteAtlasUsageType m_usageType;
        int field_256;
        uint8_t _unknown_260[36];
        int field_296;
        uint8_t _unknown_300[4];
    };

    class SpriteAtlasMapping {
    public:
        SpriteAtlasMapping();
        ~SpriteAtlasMapping();
        SpriteAtlasMapping* operator=(const SpriteAtlasMapping& spriteAtlasMapping);
        int TotalWidth() const;
        int TotalHeight() const;
        SpriteAtlasMapping(SpriteAtlasMapping&& spriteAtlasMapping);
        SpriteAtlasMapping(const SpriteAtlasMapping& spriteAtlasMapping);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[60];
        uint64_t field_64;
        uint8_t _unknown_72[32];
        uint64_t field_104;
    };

    class SpriteAtlasMappingExtended {
    public:
        ~SpriteAtlasMappingExtended();
        SpriteAtlasMappingExtended(SpriteAtlasMappingExtended&& spriteAtlasMappingExtended);
        SpriteAtlasMappingExtended();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[60];
        uint64_t field_64;
        uint8_t _unknown_72[32];
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint8_t _unknown_128[8];
    };

    class SpriteAtlasUsageMap {
    public:
        uint8_t* GetFilled() const;
        uint8_t* GetPermanent() const;
        uint8_t* GetPending() const;
        SpriteAtlasUsageMap();
        ~SpriteAtlasUsageMap();
        void AddPermanentRectIDs(unsigned long arg1);
        void AddFilledRectIDs(unsigned long arg1);
        void AddPendingRectIDs(unsigned long arg1);
        void UpdateUsageMap<BucketAllocatorEASTL>(const math::RectanglePacker<int>& rectanglePacker);

    private:
        uint8_t _unknown_0[8];
        unsigned long* field_8;
        uint8_t _unknown_16[136];
    };

    // 0x10086ac20
    SpriteAtlasUsageMap::SpriteAtlasUsageMap() : eastl::vector<unsigned long, BucketAllocatorEASTL>() {}

    // 0x10086ad60
    SpriteAtlasUsageMap::~SpriteAtlasUsageMap() {
        field_144.~vector();
        field_120.~vector();
        field_96.~vector();
        field_72.~vector();
        field_48.~vector();
        field_24.~vector();
    }

    // 0x1008cc280
    void SpriteAtlas::IsEmpty() const {
        field_120.empty();
    }

    // 0x1008d7e50
    SpriteAtlas::~SpriteAtlas() {
        field_264.~vector();
        field_216.~vector();
        field_184.~vector();
        field_152.~vector();
        field_120.~vector();
        field_104.~shared_ptr();
        field_8.~RectanglePacker();
    }

} // namespace jag::graphics
