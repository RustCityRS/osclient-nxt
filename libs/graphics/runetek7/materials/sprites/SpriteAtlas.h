// libs/graphics/runetek7/materials/sprites/SpriteAtlas.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SpriteAtlas {
    public:
        GetID() const;
        GetHALTexture() const;
        GetUsageType() const;
        SpriteAtlas(TextureManager*, unsigned int, unsigned int, SpriteAtlasUsageType, int);
        void SizeAtlasArrays(unsigned int);
        void CreateRenderingResources();
        void
        Destroy(eastl::vector_map<
                int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>, eastl::less<int>,
                BucketAllocatorEASTL,
                eastl::vector<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>>,
                              BucketAllocatorEASTL>>*);
        GetAvailableIndex();
        void MakeIndexAvailable(int);
        void AddSpriteReference(shared_ptr<SpriteAtlasReference> const&);
        FindSpriteIndexFromHash(long long) const;
        GetSpriteReferenceFromIndex(int) const;
        bool CheckHasSprite(shared_ptr<SpriteAtlasReference>&, long long) const;
        GetSpritePackMapping(int&, unsigned long&, long long, math::Rect<int>&, unsigned int, unsigned int);
        void GetSpriteRenderMapping(int) const;
        GetAllSpriteMappings() const;
        void AddSpriteData(unsigned long, math::Rect<int> const&, int, RGBAImage const&, int, int, int);
        void AddSpriteMapping(unsigned long, math::Rect<int> const&, int,
                              eastl::fixed_vector<int, 4ul, true, eastl::allocator> const&, int, int, int);
        void RemoveSpriteByIndex(int);
        void GetUsageMap(SpriteAtlasUsageMap&) const;
        void MainLogic();
        void DecrementAlwaysLoaded(long long);
        void IncrementAlwaysLoaded(long long);
        FindSpriteHashFromIndex(int) const;
        bool GetDetailsAtPosition(int&, SpriteAtlasUsageType&, math::Rect<int>&, int, int) const;
        void IsEmpty() const;
        ~SpriteAtlas();

        // data members, from how the methods use this: 304 bytes
        long field_0;                        // offset 0
        SpriteAtlasMappingExtended* field_8; // offset 8
        char _unknown_16[80];
        undefined4 m_iD; // offset 96
        char _unknown_100[148];
        graphicutils* field_248; // offset 248
        int field_256;           // offset 256
        char _unknown_260[4];
        undefined1 field_264; // offset 264
        char _unknown_265[31];
        int field_296; // offset 296
        char _unknown_300[4];
    };

    class SpriteAtlasMapping {
    public:
        SpriteAtlasMapping();
        ~SpriteAtlasMapping();
        SpriteAtlasMapping* operator=(SpriteAtlasMapping const&);
        int TotalWidth() const;
        int TotalHeight() const;
        SpriteAtlasMapping(SpriteAtlasMapping&&);
        SpriteAtlasMapping(SpriteAtlasMapping const&);

        // data members, from how the methods use this: 112 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[60];
        undefined8 field_64; // offset 64
        char _unknown_72[32];
        undefined8 field_104; // offset 104
    };

    class SpriteAtlasMappingExtended {
    public:
        ~SpriteAtlasMappingExtended();
        SpriteAtlasMappingExtended(SpriteAtlasMappingExtended&&);
        SpriteAtlasMappingExtended();

        // data members, from how the methods use this: 136 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[60];
        undefined8 field_64; // offset 64
        char _unknown_72[32];
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        char _unknown_128[8];
    };

    class SpriteAtlasUsageMap {
    public:
        GetFilled() const;
        GetPermanent() const;
        GetPending() const;
        SpriteAtlasUsageMap();
        ~SpriteAtlasUsageMap();
        void AddPermanentRectIDs(unsigned long);
        void AddFilledRectIDs(unsigned long);
        void AddPendingRectIDs(unsigned long);
        void UpdateUsageMap<BucketAllocatorEASTL>(math::RectanglePacker<int, BucketAllocatorEASTL> const&);

        // data members, from how the methods use this: 152 bytes
        char _unknown_0[8];
        ulong* field_8; // offset 8
        char _unknown_16[136];
    };

    // 0x100861430, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasUsageMap::SpriteAtlasUsageMap(): jumps straight to the base-object constructor

    // 0x100861440, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasUsageMap::~SpriteAtlasUsageMap(): jumps straight to the base-object destructor

    // 0x10086ac20, 208 bytes, base-object constructor, inline, placed by class header (inline)
    // SpriteAtlasUsageMap::SpriteAtlasUsageMap()
    void SpriteAtlasUsageMap::SpriteAtlasUsageMap() {
        eastl::vector<unsigned long, BucketAllocatorEASTL>::vector();
        eastl::vector<unsigned long, BucketAllocatorEASTL>::vector();
        eastl::vector<unsigned long, BucketAllocatorEASTL>::vector();
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::vector();
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::vector();
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::vector();
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::vector();
    }

    // 0x10086ad60, 96 bytes, base-object destructor, inline, placed by class header (inline)
    // SpriteAtlasUsageMap::~SpriteAtlasUsageMap()
    void SpriteAtlasUsageMap::~SpriteAtlasUsageMap() {
        (&field_144)->~vector();
        (&field_120)->~vector();
        (&field_96)->~vector();
        (&field_72)->~vector();
        (&field_48)->~vector();
        (&field_24)->~vector();
        ~vector();
    }

    // 0x1008cc280, 16 bytes, inline, placed by class name
    // SpriteAtlas::IsEmpty() const
    void SpriteAtlas::IsEmpty() {
        (&field_120)->empty();
    }

    // 0x1008d7e40, 16 bytes, complete-object destructor, inline, placed by class name
    // SpriteAtlas::~SpriteAtlas(): jumps straight to the base-object destructor

    // 0x1008d7e50, 96 bytes, base-object destructor, inline, placed by class name
    // SpriteAtlas::~SpriteAtlas()
    void SpriteAtlas::~SpriteAtlas() {
        (&field_264)->~vector();
        (&field_216)->~vector();
        (&field_184)->~vector();
        (&field_152)->~vector();
        (&field_120)->~vector();
        (&field_104)->~shared_ptr();
        (&field_8)->~RectanglePacker();
    }

} // namespace jag::graphics
