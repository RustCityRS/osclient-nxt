// libs/graphics/runetek7/model/HillData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10041f170
    game::Location*
    placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, signed char&, int&,
                  game::LocData&, bool&, bool, int, int, int, int, signed char&, unsigned short&, bool&>(
        void* arg1, graphics::GraphNode*& arg2, const shared_ptr<game::World>& world, signed char& arg4, int& arg5,
        game::LocData& locData, bool& arg7, bool&& arg8, int&& arg9, int&& arg10, int&& arg11, int&& arg12,
        signed char& arg13, unsigned short& arg14, bool& arg15) {
        new (arg1) game::Location(arg2, world, (int)*arg4, arg5, locData, arg7, arg8, arg9, arg10, arg11, arg12,
                                  (int)*arg13, (unsigned int)*arg14, arg15);
        return arg1;
    }

    // 0x10041f210
    MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>*
    placement_new<MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>,
                  MakeSharedPool<game::Location, 256>::RefCounterAndData*&, game::Location*>(
        void* arg1, MakeSharedPool<game::Location, 256>::RefCounterAndData*& arg2, game::Location*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>(arg2, arg3);
        return arg1;
    }

    // 0x10041f230
    void shared_ptr_do_enable_shared_from_this<game::Location>(ref_counter_base* ref_counter_base,
                                                               game::Location* location,
                                                               game::Location::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)location);
            local_38 = weak_ptr(local_48);
            location->field_192.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10041f520
    MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>::MakeSharedPoolRefCounter(
        void* arg1, game::Location* location)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b38 + 16;
        *(void**)(this + 16) = arg1;
        *(Location**)(this + 24) = location;
    }

    // 0x10041f560
    void MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::Location, 256>::deallocate(arg1);
    }

    // 0x10041faa0
    game::BuildCombinedLocationMain*
    placement_new<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*,
                  eastl::vector<game::LocationContainerLocation>&, int&, int&, bool>(
        void* arg1, graphics::RT7Core& rt7Core, int&& arg3, game::LocationContainer*&& arg4,
        eastl::vector<game::LocationContainerLocation>& locationContainerLocations, int& arg6, int& arg7, bool&& arg8) {
        new (arg1) game::BuildCombinedLocationMain(rt7Core, arg3, arg4, locationContainerLocations, arg6, arg7, arg8);
        return arg1;
    }

    // 0x10041fae0
    BucketRefCounter<game::BuildCombinedLocationMain>*
    placement_new<BucketRefCounter<game::BuildCombinedLocationMain>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationMain>,
                                               game::BuildCombinedLocationMain>*&,
                  game::BuildCombinedLocationMain*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationMain>,
                                     game::BuildCombinedLocationMain>*& arg2,
        game::BuildCombinedLocationMain*& arg3) {
        new (arg1) BucketRefCounter<game::BuildCombinedLocationMain>(arg2, arg3, 0);
        return arg1;
    }

    // 0x10041fb10
    BucketRefCounter<game::BuildCombinedLocationMain>::BucketRefCounter(
        void* arg1, game::BuildCombinedLocationMain* buildCombinedLocationMain, unsigned int arg3)
        : ref_counter_base() {}

    // 0x10041fb70
    void BucketRefCounter<game::BuildCombinedLocationMain>::DeleteSelf() {
        BucketRefCounter<game::BuildCombinedLocationMain> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildCombinedLocationMain> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x10041fda0
    game::ChangeLocationRequest* placement_new<game::ChangeLocationRequest, game::ChangeLocationRequest const&>(
        void* arg1, const game::ChangeLocationRequest& changeLocationRequest) {
        new (arg1) game::ChangeLocationRequest(changeLocationRequest);
        return arg1;
    }

    // 0x10041fdc0
    game::Location*
    placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, int, int&, game::LocData, bool,
                  bool, unsigned int const&, unsigned int const&, int, int, shared_ptr<game::ChangeLocationRequest>&,
                  shared_ptr<game::LocTypeCustomisation> const&>(
        void* arg1, graphics::GraphNode*& arg2, const shared_ptr<game::World>& world, int&& arg4, int& arg5,
        game::LocData&& locData, bool&& arg7, bool&& arg8, const unsigned int& arg9, const unsigned int& arg10,
        int&& arg11, int&& arg12, shared_ptr<game::ChangeLocationRequest>& changeLocationRequest,
        const shared_ptr<game::LocTypeCustomisation>& locTypeCustomisation) {
        new (arg1) game::Location(arg2, world, arg4, arg5, locData, arg7, arg8, arg9, arg10, arg11, arg12,
                                  changeLocationRequest, locTypeCustomisation);
        return arg1;
    }

} // namespace jag

namespace jag::graphics {
    class HillData {
    public:
        HillData* operator=(const HillData& hillData);
        HillData(const HillData& hillData);
        HillData();
        ~HillData();
        HillData(HillData&& hillData);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        Array<int>* field_16;
        uint8_t _unknown_24[8];
    };

    // 0x10041bec0
    HillData* HillData::operator=(const HillData& hillData) {
        *this = hillData;
        field_24 = hillData.field_24;
        return this;
    }

    // 0x10041c520
    HillData::HillData(const HillData& hillData)
        : Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>(hillData), field_24(hillData.field_24) {}

    // 0x10041c950
    HillData::HillData() : Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>() {}

    // 0x10041c980
    HillData::~HillData() {
        field_24.~Array();
    }

    // 0x10041ef10
    HillData::HillData(HillData&& hillData)
        : Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>(hillData), field_24(hillData.field_24) {}

} // namespace jag::graphics

namespace jag::game {
    // 0x10041c4a0
    LocationContainerLocation::LocationContainerLocation(const LocationContainerLocation& locationContainerLocation)
        : shared_ptr(locationContainerLocation), field_16(locationContainerLocation.field_16),
          field_48(locationContainerLocation.field_48), field_56(locationContainerLocation.field_56) {
        uint8_t uVar1 = locationContainerLocation.field_105;
        field_104 = locationContainerLocation.field_104;
        field_105 = uVar1;
    }

    // 0x10041c7a0
    StaticLocationLODContainer::~StaticLocationLODContainer() {
        Destruct();
        field_48.~vector();
        field_32->~shared_ptr();
    }

    // 0x10041c880
    LocationContainerLocation::LocationContainerLocation(const shared_ptr<MapSquareLocation>& mapSquareLocation,
                                                         signed char arg2)
        : shared_ptr(mapSquareLocation), field_48(9223372036854775808), field_104(arg2), field_105(255) {
        if (!*this != nullptr) {
            LogAssert("m_mapSquareLocation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LocationContainer.h",
                      67, nullptr);
        }
    }

    // 0x10041c9b0
    LocationContainerLocation::~LocationContainerLocation() {
        field_56.~HillData();
        field_16->~ActiveComponent();
    }

    // 0x10041ee50
    LocationContainerLocation::LocationContainerLocation(LocationContainerLocation&& locationContainerLocation) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(locationContainerLocation);
        new (field_16) BuildRequest<graphics::Model, BuildModelMain>(locationContainerLocation.field_16);
        field_48 = locationContainerLocation.field_48;
        new (&field_56) graphics::HillData(locationContainerLocation.field_56);
        uint8_t uVar1 = locationContainerLocation.field_105;
        field_104 = locationContainerLocation.field_104;
        field_105 = uVar1;
    }

} // namespace jag::game

namespace jag::math {
    // 0x10041cda0
    game::LODLevel Clamp<game::LODLevel>(const game::LODLevel& lodLevel1, const game::LODLevel& lodLevel2,
                                         const game::LODLevel& lodLevel3) {
        auto pLVar1 = std::max<game::LODLevel>(lodLevel2, lodLevel1);
        pLVar1 = std::min<game::LODLevel>(lodLevel3, *pLVar1);
        return (LODLevel)(uint8_t)(char)*pLVar1;
    }

} // namespace jag::math
