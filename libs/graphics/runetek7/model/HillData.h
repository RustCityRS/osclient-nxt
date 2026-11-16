// libs/graphics/runetek7/model/HillData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10041f170, 160 bytes, inline, placed by debug map only (low confidence)
    // game::Location* placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, signed char&, int&, game::LocData&, bool&, bool, int, int, int, int, signed char&, unsigned short&, bool&>(void*, graphics::GraphNode*&, shared_ptr<game::World> const&, signed char&, int&, game::LocData&, bool&, bool&&, int&&, int&&, int&&, int&&, signed char&, unsigned short&, bool&)
    Location*
    jag::placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, signed char&, int&,
                       game::LocData&, bool&, bool, int, int, int, int, signed char&, unsigned short&, bool&>(
        void* param_1, GraphNode** param_2, shared_ptr* param_3, signed* param_4, int* param_5, LocData* param_6,
        bool* param_7, bool* param_8, int* param_9, int* param_10, int* param_11, int* param_12, signed* param_13,
        ushort* param_14, bool* param_15) {
        game::Location::Location(param_1, *param_2, param_3, (int)(char)*param_4, *param_5, param_6, *param_7, *param_8,
                                 *param_9, *param_10, *param_11, *param_12, (int)(char)*param_13, (uint)*param_14,
                                 *param_15);
        return param_1;
    }

    // 0x10041f210, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256> >* placement_new<MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256> >, MakeSharedPool<game::Location, 256>::RefCounterAndData*&, game::Location*>(void*, MakeSharedPool<game::Location, 256>::RefCounterAndData*&, game::Location*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>,
                       MakeSharedPool<game::Location, 256>::RefCounterAndData*&, game::Location*>(
        void* param_1, RefCounterAndData** param_2, Location** param_3) {
        MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10041f230, 160 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::Location>(ref_counter_base*, game::Location*, game::Location::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::Location>(ref_counter_base* param_1, Location* param_2,
                                                               enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_192, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x10041f510, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256> >::MakeSharedPoolRefCounter(void*, game::Location*): jumps straight to the base-object constructor

    // 0x10041f520, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256> >::MakeSharedPoolRefCounter(void*, game::Location*)
    void MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>* this, void* param_1,
        Location* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b38 + 16;
        *(void**)(this + 16) = param_1;
        *(Location**)(this + 24) = param_2;
    }

    // 0x10041f560, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::Location, MakeSharedPool<game::Location, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::Location, 256>::deallocate(pvVar1);
    }

    // 0x10041faa0, 64 bytes, inline, placed by debug map only (low confidence)
    // game::BuildCombinedLocationMain* placement_new<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*, eastl::vector<game::LocationContainerLocation, eastl::allocator>&, int&, int&, bool>(void*, graphics::RT7Core&, int&&, game::LocationContainer*&&, eastl::vector<game::LocationContainerLocation, eastl::allocator>&, int&, int&, bool&&)
    BuildCombinedLocationMain*
    jag::placement_new<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*,
                       eastl::vector<game::LocationContainerLocation, eastl::allocator>&, int&, int&, bool>(
        void* param_1, RT7Core* param_2, int* param_3, LocationContainer** param_4, vector* param_5, int* param_6,
        int* param_7, bool* param_8) {
        game::BuildCombinedLocationMain::BuildCombinedLocationMain(param_1, param_2, *param_3, *param_4, param_5,
                                                                   *param_6, *param_7, *param_8);
        return param_1;
    }

    // 0x10041fae0, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationMain>* placement_new<BucketRefCounter<game::BuildCombinedLocationMain>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationMain>, game::BuildCombinedLocationMain>*&, game::BuildCombinedLocationMain*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationMain>, game::BuildCombinedLocationMain>*&, game::BuildCombinedLocationMain*&)
    BucketRefCounter* jag::placement_new<BucketRefCounter<game::BuildCombinedLocationMain>,
                                         managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationMain>,
                                                                      game::BuildCombinedLocationMain>*&,
                                         game::BuildCombinedLocationMain*&>(void* param_1,
                                                                            managed_ptr_counter_and_data** param_2,
                                                                            BuildCombinedLocationMain** param_3) {
        BucketRefCounter<game::BuildCombinedLocationMain>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x10041fb00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationMain>::BucketRefCounter(void*, game::BuildCombinedLocationMain*, unsigned int): jumps straight to the base-object constructor

    // 0x10041fb10, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationMain>::BucketRefCounter(void*, game::BuildCombinedLocationMain*, unsigned int)
    void BucketRefCounter<game::BuildCombinedLocationMain>::BucketRefCounter(void* param_1,
                                                                             BuildCombinedLocationMain* param_2,
                                                                             uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7128 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildCombinedLocationMain**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x10041fb70, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationMain>::DeleteSelf()
    void BucketRefCounter<game::BuildCombinedLocationMain>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x10041fda0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::ChangeLocationRequest* placement_new<game::ChangeLocationRequest, game::ChangeLocationRequest const&>(void*, game::ChangeLocationRequest const&)
    ChangeLocationRequest*
    placement_new<game::ChangeLocationRequest, game::ChangeLocationRequest_const&>(void* param_1,
                                                                                   ChangeLocationRequest* param_2) {
        game::ChangeLocationRequest::ChangeLocationRequest(param_1, param_2);
        return param_1;
    }

    // 0x10041fdc0, 144 bytes, inline, placed by debug map only (low confidence)
    // game::Location* placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, int, int&, game::LocData, bool, bool, unsigned int const&, unsigned int const&, int, int, shared_ptr<game::ChangeLocationRequest>&, shared_ptr<game::LocTypeCustomisation> const&>(void*, graphics::GraphNode*&, shared_ptr<game::World> const&, int&&, int&, game::LocData&&, bool&&, bool&&, unsigned int const&, unsigned int const&, int&&, int&&, shared_ptr<game::ChangeLocationRequest>&, shared_ptr<game::LocTypeCustomisation> const&)
    Location*
    jag::placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, int, int&, game::LocData,
                       bool, bool, unsigned int const&, unsigned int const&, int, int,
                       shared_ptr<game::ChangeLocationRequest>&, shared_ptr<game::LocTypeCustomisation> const&>(
        void* param_1, GraphNode** param_2, shared_ptr* param_3, int* param_4, int* param_5, LocData* param_6,
        bool* param_7, bool* param_8, uint* param_9, uint* param_10, int* param_11, int* param_12, shared_ptr* param_13,
        shared_ptr* param_14) {
        game::Location::Location(param_1, *param_2, param_3, *param_4, *param_5, param_6, *param_7, *param_8, *param_9,
                                 *param_10, *param_11, *param_12, param_13, param_14);
        return param_1;
    }

} // namespace jag

namespace jag::graphics {
    class HillData {
    public:
        HillData* operator=(HillData const&);
        HillData(HillData const&);
        HillData();
        ~HillData();
        HillData(HillData&&);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        ulong field_8;   // offset 8
        Array* field_16; // offset 16
        char _unknown_24[8];
    };

    // 0x10041bec0, 48 bytes, inline, placed by class name and debug map
    // HillData::operator=(HillData const&)
    /* HillData::TEMPNAMEPLACEHOLDERVALUE(HillData const&) */

    HillData* HillData::operator=(HillData* param_1) {
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator=(
            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)this, (Array*)param_1);
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator=(
            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)&field_24, (Array*)&param_1->field_24);
        return this;
    }

    // 0x10041c510, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HillData::HillData(HillData const&): jumps straight to the base-object constructor

    // 0x10041c520, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // HillData::HillData(HillData const&)
    void HillData::HillData(HillData* param_1) {
        new (this) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>(param_1);
        new (&field_24, (Array*)&param_1->field_24) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
    }

    // 0x10041c930, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HillData::HillData(): jumps straight to the base-object constructor

    // 0x10041c940, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HillData::~HillData(): jumps straight to the base-object destructor

    // 0x10041c950, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // HillData::HillData()
    void HillData::HillData() {
        new (this) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        new (&field_24) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
    }

    // 0x10041c980, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // HillData::~HillData()
    void HillData::~HillData() {
        (&field_24)->~Array();
        ~Array();
    }

    // 0x10041eec0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HillData::HillData(HillData&&): jumps straight to the base-object constructor

    // 0x10041ef10, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // HillData::HillData(HillData&&)
    void HillData::HillData(HillData* param_1) {
        new (this) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>(param_1);
        new (&field_24, (Array*)&param_1->field_24) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
    }

} // namespace jag::graphics

namespace jag::game {
    // 0x10041c480, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LocationContainerLocation::LocationContainerLocation(LocationContainerLocation const&): jumps straight to the base-object constructor

    // 0x10041c4a0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LocationContainerLocation::LocationContainerLocation(LocationContainerLocation const&)
    void LocationContainerLocation::LocationContainerLocation(LocationContainerLocation* param_1) {
        undefined1 uVar1;

        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (field_16, (BuildRequest*)param_1->field_16) BuildRequest<graphics::Model, BuildModelMain>();
        field_48 = param_1->field_48;
        new (&field_56, (HillData*)&param_1->field_56) graphics::HillData();
        uVar1 = param_1->field_105;
        field_104 = param_1->field_104;
        field_105 = uVar1;
    }

    // 0x10041c7a0, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // StaticLocationLODContainer::~StaticLocationLODContainer()
    void StaticLocationLODContainer::~StaticLocationLODContainer() {
        Destruct(this);
        (&field_48)->~vector();
        field_32->~shared_ptr();
        ~vector();
    }

    // 0x10041c880, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LocationContainerLocation::LocationContainerLocation(shared_ptr<MapSquareLocation> const&, signed char)
    void LocationContainerLocation::LocationContainerLocation(shared_ptr* param_1, undefined1 param_3) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (field_16) BuildRequest<graphics::Model, BuildModelMain>();
        field_48 = 9223372036854775808;
        new (&field_56) graphics::HillData();
        field_104 = param_3;
        field_105 = 255;
        if (!operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_mapSquareLocation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LocationContainer.h",
                      67, (char*)0);
        }
    }

    // 0x10041c9b0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LocationContainerLocation::~LocationContainerLocation()
    void LocationContainerLocation::~LocationContainerLocation() {
        (&field_56)->~HillData();
        field_16->~ActiveComponent();
        ~shared_ptr();
    }

    // 0x10041ee40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LocationContainerLocation::LocationContainerLocation(LocationContainerLocation&&): jumps straight to the base-object constructor

    // 0x10041ee50, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LocationContainerLocation::LocationContainerLocation(LocationContainerLocation&&)
    void LocationContainerLocation::LocationContainerLocation(LocationContainerLocation* param_1) {
        undefined1 uVar1;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        new (field_16, (BuildRequest*)param_1->field_16) BuildRequest<graphics::Model, BuildModelMain>();
        field_48 = param_1->field_48;
        new (&field_56, (HillData*)&param_1->field_56) graphics::HillData();
        uVar1 = param_1->field_105;
        field_104 = param_1->field_104;
        field_105 = uVar1;
    }

} // namespace jag::game

namespace jag::math {
    // 0x10041cda0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::LODLevel Clamp<game::LODLevel>(game::LODLevel const&, game::LODLevel const&, game::LODLevel const&)
    undefined1 Clamp<game::LODLevel>(LODLevel* param_1, LODLevel* param_2, LODLevel* param_3) {
        LODLevel* pLVar1;

        pLVar1 = std::max<game::LODLevel>(param_2, param_1);
        pLVar1 = std::min<game::LODLevel>(param_3, pLVar1);
        return *pLVar1;
    }

} // namespace jag::math
