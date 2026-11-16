// libs/jtl/allocator/BucketAllocator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class BuildTerrainResultLevel {
    public:
        ~BuildTerrainResultLevel();
        BuildTerrainResultLevel();

        // data members, from how the methods use this: 12600 bytes
        char _unknown_0[12528];
        AABB field_12528; // offset 12528
        char _unknown_12564[36];
    };

    class MapRebuildSquare {
    public:
        ~MapRebuildSquare();
        MapRebuildSquare(MapRebuildSquare&&);
        MapRebuildSquare();

        // data members, from how the methods use this: 100 bytes
        char _unknown_0[80];
        CoordGrid field_80; // offset 80
        char _unknown_96[4];
    };

    // 0x1001dc8b0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // MapRebuildSquare::~MapRebuildSquare(): jumps straight to the base-object destructor

    // 0x1001dc8c0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // MapRebuildSquare::~MapRebuildSquare()
    void MapRebuildSquare::~MapRebuildSquare() {
        (&field_64)->~shared_ptr();
        ~array();
    }

    // 0x1001e4d10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MapRebuildSquare::MapRebuildSquare(MapRebuildSquare&&): jumps straight to the base-object constructor

    // 0x1001e4d30, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MapRebuildSquare::MapRebuildSquare(MapRebuildSquare&&)
    void MapRebuildSquare::MapRebuildSquare(MapRebuildSquare* param_1) {
        new (this) std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>(param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_64, (shared_ptr*)&param_1->field_64);
        new (field_80, (CoordGrid*)param_1->field_80) rs2lib::CoordGrid();
        *(undefined8*)(field_80 + 12) = *(undefined8*)(param_1->field_80 + 12);
    }

    // 0x1001e4e90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MapRebuildSquare::MapRebuildSquare(): jumps straight to the base-object constructor

    // 0x1001e4ea0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MapRebuildSquare::MapRebuildSquare()
    void MapRebuildSquare::MapRebuildSquare() {
        _func_decltype_nullptr* in_RSI;

        std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>::array();
        new (&field_64, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_80) rs2lib::CoordGrid();
    }

    // 0x1001e55e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevel::~BuildTerrainResultLevel(): jumps straight to the base-object destructor

    // 0x1001e55f0, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevel::~BuildTerrainResultLevel()
    void BuildTerrainResultLevel::~BuildTerrainResultLevel() {
        (&field_12592)->~shared_ptr();
        ((field_12528 + 32))->~vector();
        (&field_64)->~fixed_hash_map();
        (&field_32)->~vector();
        ~vector();
    }

    // 0x1001e5a20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevel::BuildTerrainResultLevel(): jumps straight to the base-object constructor

    // 0x1001e5a30, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevel::BuildTerrainResultLevel()
    void BuildTerrainResultLevel::BuildTerrainResultLevel() {
        hash* phVar1;
        hash local_40[8];
        equal_to local_38[8];

        new (this) MakeSharedPool<BuildTerrainResultLevel, 64>();
        new (this) eastl::vector<jag::graphics::TerrainPatchVertex, eastl::allocator>();
        new (&field_32) eastl::vector<jag::graphics::TerrainPatchVertexPos, eastl::allocator>();
        phVar1 = local_40;
        new (&field_64, phVar1, local_38)
            eastl::fixed_hash_map<int, jag::graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (field_12528) jag::math::AABB();
        new ((field_12528 + 32)) eastl::vector<TerrainFace, eastl::allocator>();
        new (&field_12592, (_func_decltype_nullptr*)phVar1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1001e82a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TerrainFace::TerrainFace(): jumps straight to the base-object constructor

    // 0x1001e83b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TerrainFace::TerrainFace()
    void TerrainFace::TerrainFace() {
        new (this) std::array<TerrainVertex, 3ul>();
        field_84 = 4294967295;
    }

} // namespace jag::oldscape::rseven

namespace jag {
    class BucketAllocatorEASTL {
    public:
        operator=(BucketAllocatorEASTL const&);
        set_name(char const*);
        BucketAllocatorEASTL(char const*);
        operator==(BucketAllocatorEASTL const&);
        void deallocate(void*, unsigned long);
        void allocate(unsigned long);
        void allocate(unsigned long, int);
        void allocate(unsigned long, unsigned long, unsigned long);
        void allocate(unsigned long, unsigned long, unsigned long, int);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    template <typename...> // 1 instantiations, e.g. <char>
    class BucketAllocatorSTL {
    public:
        bool operator!= <char>(BucketAllocatorSTL<char> const&);
        max_size() const;
        void allocate(unsigned long, char*);
    };

    // 0x1001e4410, 16 bytes, inline, placed by debug map only (low confidence)
    // bool BucketAllocatorSTL<char>::operator!=<char>(BucketAllocatorSTL<char> const&)
    /* bool BucketAllocatorSTL<char>::TEMPNAMEPLACEHOLDERVALUE(BucketAllocatorSTL<char>
   const&) */

    bool BucketAllocatorSTL<char>::operator!=(BucketAllocatorSTL* param_1) {
        bool bVar1;

        bVar1 = IsValidValue(param_1);
        return !bVar1;
    }

    // 0x1001e50e0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rseven::BuildTerrainResultLevel* placement_new<oldscape::rseven::BuildTerrainResultLevel>(void*)
    BuildTerrainResultLevel* placement_new<oldscape::rseven::BuildTerrainResultLevel>(void* param_1) {
        ___bzero(param_1, 12608);
        oldscape::rseven::BuildTerrainResultLevel::BuildTerrainResultLevel(param_1);
        return param_1;
    }

    // 0x1001e5110, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64> >* placement_new<MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64> >, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData*&, oldscape::rseven::BuildTerrainResultLevel*>(void*, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData*&, oldscape::rseven::BuildTerrainResultLevel*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                                MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>,
                       MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData*&,
                       oldscape::rseven::BuildTerrainResultLevel*>(void* param_1, RefCounterAndData** param_2,
                                                                   BuildTerrainResultLevel** param_3) {
        MakeSharedPoolRefCounter<
            oldscape::rseven::BuildTerrainResultLevel,
            MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                     *param_3);
        return param_1;
    }

    // 0x1001e6ac0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64> >::MakeSharedPoolRefCounter(void*, oldscape::rseven::BuildTerrainResultLevel*): jumps straight to the base-object constructor

    // 0x1001e6ad0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64> >::MakeSharedPoolRefCounter(void*, oldscape::rseven::BuildTerrainResultLevel*)
    void jag::MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                       MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                     MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>* this,
            void* param_1, BuildTerrainResultLevel* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c38 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildTerrainResultLevel**)(this + 24) = param_2;
    }

    // 0x1001e6b10, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                       MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>::
        DeleteData(MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                            MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>* this) {
        if (*(BuildTerrainResultLevel**)(this + 24) != (BuildTerrainResultLevel*)0) {
            (*(BuildTerrainResultLevel**)(this + 24))->~BuildTerrainResultLevel();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001e6b40, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel, MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                       MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>::
        DeleteSelf(MakeSharedPoolRefCounter<oldscape::rseven::BuildTerrainResultLevel,
                                            MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::math {
    // 0x1001e8710, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<int>::Vector2T(int)
    void Vector2T<int>::Vector2T(int param_1) {
        *(int*)this = param_1;
        *(int*)(this + 4) = param_1;
    }

    // 0x1001e8720, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(unsigned int, unsigned int, unsigned int, unsigned int)
    void ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(uint param_1, uint param_2, uint param_3,
                                                                  uint param_4) {
        Set(this, param_1, param_2, param_3, param_4);
    }

    // 0x1001e8730, 144 bytes, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::Set(unsigned int, unsigned int, unsigned int, unsigned int)
    void ColourStorage8888<RGBA8StorageLayout>::Set(uint param_1, uint param_2, uint param_3, uint param_4) {
        ColourStorage8888<RGBA8StorageLayout>* pCVar1;
        uint local_24;
        uint local_20;
        uint local_1c;
        uint local_18[2];

        local_18[1] = 255;
        local_24 = param_1;
        local_20 = param_2;
        local_1c = param_3;
        local_18[0] = param_4;
        pCVar1 = (ColourStorage8888<RGBA8StorageLayout>*)std::min<unsigned int>(&local_24, local_18 + 1);
        this[3] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<RGBA8StorageLayout>*)std::min<unsigned int>(&local_20, local_18 + 1);
        this[2] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<RGBA8StorageLayout>*)std::min<unsigned int>(&local_1c, local_18 + 1);
        this[1] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<RGBA8StorageLayout>*)std::min<unsigned int>(local_18, local_18 + 1);
        *this = *pCVar1;
    }

    // 0x1001e9420, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T<int>(Vector3T<int> const&)
    void Vector3T<float>::Vector3T<int>(Vector3T* param_1) {
        vector* pvVar1;
        int* piVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(float*)this = (float)*(int*)pvVar1;
        piVar2 = (int*)param_1->y();
        *(float*)(this + 4) = (float)*piVar2;
        piVar2 = (int*)param_1->second();
        *(float*)(this + 8) = (float)*piVar2;
    }

    // 0x1001e9470, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Vector3T<short>::Vector3T(short, short, short)
    /* graphics::GUIAnimationRGB::GUIAnimationRGB(int, int, int) */

    void graphics::GUIAnimationRGB::GUIAnimationRGB(int param_1, int param_2, int param_3) {
        field_0 = (short)param_1;
        field_2 = (ushort)param_2;
        field_4 = (short)param_3;
    }

} // namespace jag::math

namespace jag::graphicutils {
    // 0x1001e9470: the linker folded this into math::Vector3T<short>::Vector3T(short, short, short), which has identical code
    TextureAtlasSlot2D::TextureAtlasSlot2D(unsigned short, unsigned short, unsigned short);

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x1001e9470: the linker folded this into math::Vector3T<short>::Vector3T(short, short, short), which has identical code
    GUIAnimationRGB::GUIAnimationRGB(int, int, int);

} // namespace jag::graphics
