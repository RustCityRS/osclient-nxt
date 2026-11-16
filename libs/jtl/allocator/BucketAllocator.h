// libs/jtl/allocator/BucketAllocator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    class BucketAllocatorEASTL {
    public:
        void operator=(const BucketAllocatorEASTL& arg1);
        void set_name(const char* arg1);
        BucketAllocatorEASTL(const char* arg1);
        uint8_t operator==(const BucketAllocatorEASTL& arg1);
        void deallocate(void* arg1, unsigned long arg2);
        void allocate(unsigned long arg1);
        void allocate(unsigned long arg1, int arg2);
        void allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3);
        void allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3, int arg4);

        uint8_t _unknown_0[1];
    };

    template <typename...> // 1 instantiations, e.g. <char>
    class BucketAllocatorSTL {
    public:
        bool operator!= <char>(const BucketAllocatorSTL<char>& bucketAllocatorSTL);
        uint64_t max_size() const;
        void allocate(unsigned long arg1, char* str);
    };

    // 0x1001e4410
    bool BucketAllocatorSTL<char>::operator!= <char>(const BucketAllocatorSTL<char>& bucketAllocatorSTL) {
        uint8_t bVar1 = IsValidValue();
        return (bool)(bVar1 ^ 1);
    }

    // 0x1001e50e0
    oldscape::rseven::BuildTerrainResultLevel* placement_new<oldscape::rseven::BuildTerrainResultLevel>(void* arg1) {
        ___bzero(arg1, 12608);
        new (arg1) oldscape::rseven::BuildTerrainResultLevel();
        return arg1;
    }

    // 0x1001e5110
    MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                             MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>*
    placement_new<MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                           MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>,
                  MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData*&,
                  oldscape::rseven::BuildTerrainResultLevel*>(
        void* arg1, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData*& arg2,
        oldscape::rseven::BuildTerrainResultLevel*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                            MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x1001e6ad0
    MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                             MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>::
        MakeSharedPoolRefCounter(void* arg1, oldscape::rseven::BuildTerrainResultLevel* buildTerrainResultLevel)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c38 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildTerrainResultLevel**)(this + 24) = buildTerrainResultLevel;
    }

    // 0x1001e6b10
    void MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                  MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>::DeleteData() {
        if (*(BuildTerrainResultLevel**)(this + 24) != nullptr) {
            (*(BuildTerrainResultLevel**)(this + 24))->~BuildTerrainResultLevel();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1001e6b40
    void MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                  MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::deallocate(arg1);
    }

} // namespace jag

namespace jag::oldscape::rseven {
    class BuildTerrainResultLevel {
    public:
        ~BuildTerrainResultLevel();
        BuildTerrainResultLevel();

    private:
        uint8_t _unknown_0[12528];
        AABB field_12528;
        uint8_t _unknown_12564[36];
    };

    class MapRebuildSquare {
    public:
        ~MapRebuildSquare();
        MapRebuildSquare(MapRebuildSquare&& mapRebuildSquare);
        MapRebuildSquare();

    private:
        uint8_t _unknown_0[80];
        CoordGrid field_80;
        uint8_t _unknown_96[4];
    };

    // 0x1001dc8c0
    MapRebuildSquare::~MapRebuildSquare() {
        field_64.~shared_ptr();
    }

    // 0x1001e4d30
    MapRebuildSquare::MapRebuildSquare(MapRebuildSquare&& mapRebuildSquare)
        : std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>(mapRebuildSquare) {
        field_64.shared_ptr<FileRSevenDebugPresetProvider, void>(mapRebuildSquare.field_64);
        new (field_80) rs2lib::CoordGrid(mapRebuildSquare.field_80);
        *(uint64_t*)(field_80 + 12) = *(uint64_t*)(mapRebuildSquare.field_80 + 12);
    }

    // 0x1001e4ea0
    MapRebuildSquare::MapRebuildSquare() : std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>() {
        new (&field_64) shared_ptr();
        new (field_80) rs2lib::CoordGrid();
    }

    // 0x1001e55f0
    BuildTerrainResultLevel::~BuildTerrainResultLevel() {
        field_12592.~shared_ptr();
        ((field_12528 + 32))->~vector();
        field_64.~fixed_hash_map();
        field_32.~vector();
    }

    // 0x1001e5a30
    BuildTerrainResultLevel::BuildTerrainResultLevel()
        : MakeSharedPool<BuildTerrainResultLevel, 64>(), eastl::vector<jag::graphics::TerrainPatchVertex>(),
          field_64(local_40, local_38) {
        hash<int> local_40;
        equal_to<int> local_38;

        new ((field_12528 + 32)) eastl::vector<TerrainFace>();
        new (&field_12592) shared_ptr();
    }

    // 0x1001e83b0
    TerrainFace::TerrainFace() : std::array<TerrainVertex, 3ul>(), field_84(4294967295) {}

} // namespace jag::oldscape::rseven

namespace jag::math {
    // 0x1001e8710
    Vector2T<int>::Vector2T(int arg1) {
        *(int*)this = arg1;
        *(int*)(this + 4) = arg1;
    }

    // 0x1001e8720
    ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                                             unsigned int arg4) {
        Set(this, arg1, arg2, arg3, arg4);
    }

    // 0x1001e8730
    void ColourStorage8888<RGBA8StorageLayout>::Set(unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                                    unsigned int arg4) {
        unsigned int local_18[2];

        local_18[1] = 255;
        local_18[0] = arg4;
        auto pCVar1 = std::min<unsigned int>(arg1, *(local_18 + 1));
        this[3] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<RGBA8StorageLayout>*)std::min<unsigned int>(arg2, *(local_18 + 1));
        this[2] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<RGBA8StorageLayout>*)std::min<unsigned int>(arg3, *(local_18 + 1));
        this[1] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<RGBA8StorageLayout>*)std::min<unsigned int>(*local_18, *(local_18 + 1));
        *this = *pCVar1;
    }

    // 0x1001e9420
    Vector3T<float>::Vector3T<int>(const Vector3T<int>& vector3) {
        int* piVar1 = (int*)vector3.SSOBeginPtr();
        *(float*)this = (float)*piVar1;
        piVar1 = (int*)vector3.y();
        *(float*)(this + 4) = (float)*piVar1;
        piVar1 = (int*)vector3.second();
        *(float*)(this + 8) = (float)*piVar1;
    }

    // 0x1001e9470
    Vector3T<short>::Vector3T(short arg1, short arg2, short arg3) : field_0(arg1), field_2(arg2), field_4(arg3) {}

} // namespace jag::math

namespace jag::graphicutils {
    // 0x1001e9470: TextureAtlasSlot2D::TextureAtlasSlot2D(unsigned short, unsigned short, unsigned short) has the same machine code as math::Vector3T<short>::Vector3T(short, short, short)

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x1001e9470: GUIAnimationRGB::GUIAnimationRGB(int, int, int) has the same machine code as math::Vector3T<short>::Vector3T(short, short, short)

} // namespace jag::graphics
