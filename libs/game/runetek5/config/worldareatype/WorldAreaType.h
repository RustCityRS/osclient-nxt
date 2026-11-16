// libs/game/runetek5/config/worldareatype/WorldAreaType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100455e30
    game::MapSquare*
    placement_new<game::MapSquare, graphics::GraphNode*&, shared_ptr<game::World>, int&, int&,
                  shared_ptr<game::ClientCompositeData>&>(void* arg1, graphics::GraphNode*& arg2,
                                                          shared_ptr<game::World>&& world, int& arg4, int& arg5,
                                                          shared_ptr<game::ClientCompositeData>& clientCompositeData) {
        new (arg1) game::MapSquare(arg2, world, arg4, arg5, clientCompositeData);
        return arg1;
    }

    // 0x100455e50
    MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>,
                  MakeSharedPool<game::MapSquare, 32>::RefCounterAndData*&, game::MapSquare*>(
        void* arg1, MakeSharedPool<game::MapSquare, 32>::RefCounterAndData*& arg2, game::MapSquare*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x100456500
    MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>::MakeSharedPoolRefCounter(
        void* arg1, game::MapSquare* mapSquare)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b50 + 16;
        *(void**)(this + 16) = arg1;
        *(MapSquare**)(this + 24) = mapSquare;
    }

    // 0x100456540
    void MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::MapSquare, 32>::deallocate(arg1);
    }

    // 0x10045cc10
    game::CombinedLocationSection*
    placement_new<game::CombinedLocationSection, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&,
                  int&, shared_ptr<game::LocType>&, game::LocData&, bool&, short&, short&, math::AABB&, int&>(
        void* arg1, graphics::GraphNode*& arg2, const shared_ptr<game::World>& world, int& arg4, int& arg5, int& arg6,
        shared_ptr<game::LocType>& locType, game::LocData& locData, bool& arg9, short& arg10, short& arg11,
        math::AABB& aabb, int& arg13) {
        new (arg1) game::CombinedLocationSection(arg2, world, arg4, arg5, arg6, locType, locData, arg9, (int)*arg10,
                                                 (int)*arg11, aabb, arg13);
        return arg1;
    }

    // 0x10045cc90
    MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>*
    placement_new<
        MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>,
        MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData*&, game::CombinedLocationSection*>(
        void* arg1, MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData*& arg2,
        game::CombinedLocationSection*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>(
                arg2, arg3);
        return arg1;
    }

    // 0x10045ccb0
    void shared_ptr_do_enable_shared_from_this<game::CombinedLocationSection>(
        ref_counter_base* ref_counter_base, game::CombinedLocationSection* combinedLocationSection,
        game::CombinedLocationSection::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)combinedLocationSection);
            local_38 = weak_ptr(local_48);
            combinedLocationSection->field_192.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10045d3d0
    MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>::
        MakeSharedPoolRefCounter(void* arg1, game::CombinedLocationSection* combinedLocationSection)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ab0 + 16;
        *(void**)(this + 16) = arg1;
        *(CombinedLocationSection**)(this + 24) = combinedLocationSection;
    }

    // 0x10045d410
    void MakeSharedPoolRefCounter<game::CombinedLocationSection,
                                  MakeSharedPool<game::CombinedLocationSection, 512>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::CombinedLocationSection, 512>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class BuildCombinedLocationResult_GroupSection {
    public:
        BuildCombinedLocationResult_GroupSection(
            const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection);
        ~BuildCombinedLocationResult_GroupSection();
        BuildCombinedLocationResult_GroupSection(
            BuildCombinedLocationResult_GroupSection&& buildCombinedLocationResult_GroupSection);
        BuildCombinedLocationResult_GroupSection();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        AABB field_48;
        uint32_t field_84;
        LocData field_88;
        uint8_t _unknown_120[20];
        uint16_t field_140;
        uint8_t _unknown_142[34];
        uint32_t field_176;
        uint8_t field_180;
        uint8_t _unknown_181[3];
        uint32_t field_184;
        uint8_t field_188;
        uint8_t _unknown_189[3];
    };

    class WorldAreaType {
    public:
        // virtual methods in vtable order
        virtual ~WorldAreaType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint32_t GetColour() const;
        void HasImpostorsForMapSquare(int arg1, int arg2);
        unsigned long FillImpostorForCompositeZone(ClientCompositeZone& clientCompositeZone, int arg2, int arg3,
                                                   int arg4);
        WorldAreaType(BaseTemplateConfigTypeList<WorldAreaType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<WorldAreaType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint32_t m_colour;
        uint8_t _unknown_60[108];
    };

    // 0x100456f20
    CoordGridSize::CoordGridSize(const CoordGrid& coordGrid, int arg2, int arg3) : field_8(coordGrid.field_8) {
        unsigned int uVar1 = coordGrid.field_4;
        field_0 = coordGrid.field_0;
        field_4 = uVar1;
        field_12 = arg2;
        field_16 = arg3;
    }

    // 0x10045b580
    BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection) {
        uint32_t uVar5 = buildCombinedLocationResult_GroupSection.field_0;
        uint32_t uVar6 = *(uint32_t*)&buildCombinedLocationResult_GroupSection.field_4;
        uint64_t uVar1 = buildCombinedLocationResult_GroupSection.field_8;
        uint64_t uVar2 = buildCombinedLocationResult_GroupSection.field_16;
        uint64_t uVar3 = buildCombinedLocationResult_GroupSection.field_24;
        uint64_t uVar4 = buildCombinedLocationResult_GroupSection.field_40;
        field_32 = buildCombinedLocationResult_GroupSection.field_32;
        field_40 = uVar4;
        field_16 = uVar2;
        field_24 = uVar3;
        field_0 = uVar5;
        *(uint32_t*)&field_4 = uVar6;
        field_8 = uVar1;
        new (field_48) math::AABB(buildCombinedLocationResult_GroupSection.field_48);
        *(uint64_t*)(field_48 + 32) = *(uint64_t*)(buildCombinedLocationResult_GroupSection.field_48 + 32);
        new (field_88) LocData(buildCombinedLocationResult_GroupSection.field_88);
        field_140 = buildCombinedLocationResult_GroupSection.field_140;
        new (&field_144) shared_ptr(&buildCombinedLocationResult_GroupSection.field_144);
        new (&field_160) shared_ptr(&buildCombinedLocationResult_GroupSection.field_160);
        uVar6 = buildCombinedLocationResult_GroupSection.field_176;
        uint8_t uVar8 = buildCombinedLocationResult_GroupSection.field_180;
        uint32_t uVar9 = *(uint32_t*)&buildCombinedLocationResult_GroupSection.field_181;
        uVar5 = buildCombinedLocationResult_GroupSection.field_184;
        uint8_t uVar7 = buildCombinedLocationResult_GroupSection.field_188;
        *(uint32_t*)&field_181 = *(uint32_t*)&buildCombinedLocationResult_GroupSection.field_181;
        field_184 = uVar5;
        field_188 = uVar7;
        field_176 = uVar6;
        field_180 = uVar8;
        *(uint32_t*)&field_181 = uVar9;
    }

    // 0x10045c8d0
    BuildCombinedLocationResult_GroupSection::~BuildCombinedLocationResult_GroupSection() {
        field_160.~shared_ptr();
        field_144.~shared_ptr();
    }

    // 0x1004c92f0
    WorldAreaType::~WorldAreaType() {
        field_160.~map();
        field_112.~map();
        field_64.~map();
    }

    // 0x1005d9c10
    WorldAreaType::WorldAreaType(BaseTemplateConfigTypeList<WorldAreaType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<WorldAreaType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<WorldAreaType, 1024>(),
          m_colour(0) {

        new (&field_64) eastl::map(local_30);
        new (&field_112) eastl::map(local_30);
        new (&field_160) eastl::map(local_30);
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x10045b180
    FaceGroupRenderMasks::FaceGroupRenderMasks() : field_0(0) {}

    // 0x10045b180: ModelTextureMeta::ModelTextureMeta() has the same machine code as FaceGroupRenderMasks::FaceGroupRenderMasks()

} // namespace jag::graphics

namespace jag::ui {
    // 0x10045ae90: ComponentPinchConfig::ComponentPinchConfig() has the same machine code as graphics::FaceGroupRenderMasks::FaceGroupRenderMasks()

} // namespace jag::ui
