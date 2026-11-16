// projects/osclient/OldscapeVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100140250, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarType>::type bucket_make_shared<oldscape::configdecoder::OldscapeVarType, game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, int&>(game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, int&)
    /* shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarType>::type
   bucket_make_shared<oldscape::configdecoder::OldscapeVarType,
   game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned
   int&>(game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
   unsigned int&) */

    jag* jag::bucket_make_shared<oldscape::configdecoder::OldscapeVarType,
                                 game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
                                 unsigned int&>(BaseTemplateConfigTypeList** param_1, uint* param_2) {
        ref_counter_base* prVar1;
        managed_ptr_counter_and_data* local_38;
        OldscapeVarType* local_30[2];

        local_38 = (managed_ptr_counter_and_data*)BucketManager::Allocate(184, 0, 16);
        if (local_38 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_30[0] = placement_new<oldscape::configdecoder::OldscapeVarType,
                                        game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
                                        unsigned int&>(local_38 + 48, param_1, param_2);
            prVar1 = (ref_counter_base*)
                placement_new<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                              managed_ptr_counter_and_data<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                                                           oldscape::configdecoder::OldscapeVarType>*&,
                              oldscape::configdecoder::OldscapeVarType*&>(local_38, &local_38, local_30);
            shared_ptr_do_enable_shared_from_this<oldscape::configdecoder::OldscapeVarType>(prVar1, local_30[0],
                                                                                            (enable_shared_type*)0);
            prVar1->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar1, local_30[0]);
        }
        return this;
    }

    // 0x1001402f0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::OldscapeVarType* placement_new<oldscape::configdecoder::OldscapeVarType, game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, int&>(void*, game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, int&)
    /* oldscape::configdecoder::OldscapeVarType*
   placement_new<oldscape::configdecoder::OldscapeVarType,
   game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned
   int&>(void*,
   game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned
   int&) */

    OldscapeVarType*
    jag::placement_new<oldscape::configdecoder::OldscapeVarType,
                       game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        oldscape::configdecoder::OldscapeVarType::OldscapeVarType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100140310, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<oldscape::configdecoder::OldscapeVarType>* placement_new<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>, managed_ptr_counter_and_data<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>, oldscape::configdecoder::OldscapeVarType>*&, oldscape::configdecoder::OldscapeVarType*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>, oldscape::configdecoder::OldscapeVarType>*&, oldscape::configdecoder::OldscapeVarType*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                       managed_ptr_counter_and_data<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                                                    oldscape::configdecoder::OldscapeVarType>*&,
                       oldscape::configdecoder::OldscapeVarType*&>(void* param_1,
                                                                   managed_ptr_counter_and_data** param_2,
                                                                   OldscapeVarType** param_3) {
        BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100140330, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::BucketRefCounter(void*, oldscape::configdecoder::OldscapeVarType*, unsigned int): jumps straight to the base-object constructor

    // 0x100140340, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::BucketRefCounter(void*, oldscape::configdecoder::OldscapeVarType*, unsigned int)
    void BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::BucketRefCounter(void* param_1,
                                                                                      OldscapeVarType* param_2,
                                                                                      uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7158 + 16;
        *(void**)(this + 16) = param_1;
        *(OldscapeVarType**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x1001403a0, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::DeleteData()
    /* MakeSharedPoolRefCounter<oldscape::rseven::Terrain,
   MakeSharedPool<oldscape::rseven::Terrain, 32> >::DeleteData() */

    void
    jag::MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>::DeleteData(
        MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>* this) {
        if (*(undefined8**)(this + 24) != (undefined8*)0) {
            (**(code**)**(undefined8**)(this + 24))();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001403d0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::DeleteSelf()
    void BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::DeleteSelf() {
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

    // 0x100140570, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::LRUCacheWrapper(shared_ptr<oldscape::configdecoder::OldscapeVarType> const&, unsigned long long, unsigned long long, unsigned int): jumps straight to the base-object constructor

    // 0x100140bb0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::LRUCacheWrapper(shared_ptr<oldscape::configdecoder::OldscapeVarType> const&, unsigned long long, unsigned long long, unsigned int)
    /* LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(shared_ptr<oldscape::graphics::Pix32>
   const&, unsigned long long, unsigned long long, unsigned int) */

    void LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(shared_ptr* param_1, ulonglong param_2,
                                                                     ulonglong param_3, uint param_4) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        *(ulonglong*)(this + 16) = param_2;
        *(uint*)(this + 24) = param_4;
        *(ulonglong*)(this + 32) = param_3;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 48) = 0;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class OldscapeVarType : public game::VarType // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OldscapeVarType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        GetDataType() const;
        shared_ptr<OldscapeVarType> MakeShared<game::BaseTemplateConfigTypeList<OldscapeVarType>*&, int&>(
            game::BaseTemplateConfigTypeList<OldscapeVarType>*&, int&);
        OldscapeVarType(game::BaseTemplateConfigTypeList<OldscapeVarType>*, int);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ WeakNullConfigType;

        // data members, from how the methods use this: 112 bytes, the first 96 are VarType
        undefined8 m_dataType; // offset 96
        char _unknown_104[8];
    };

    // 0x100140130, 32 bytes, inline, placed by class name and debug map
    // shared_ptr<OldscapeVarType> OldscapeVarType::MakeShared<game::BaseTemplateConfigTypeList<OldscapeVarType>*&, int&>(game::BaseTemplateConfigTypeList<OldscapeVarType>*&, int&)
    /* shared_ptr<OldscapeVarType>
   OldscapeVarType::MakeShared<game::BaseTemplateConfigTypeList<OldscapeVarType>*&,
   unsigned
   int&>(game::BaseTemplateConfigTypeList<OldscapeVarType>*&,
   unsigned int&) */

    shared_ptr* OldscapeVarType::MakeShared<game::BaseTemplateConfigTypeList<OldscapeVarType>*&, unsigned int&>(
        shared_ptr* __return_storage_ptr__, OldscapeVarType* this, BaseTemplateConfigTypeList** param_1,
        uint* param_2) {
        bucket_make_shared<OldscapeVarType, game::BaseTemplateConfigTypeList<OldscapeVarType>*&, unsigned int&>(
            (jag*)__return_storage_ptr__, (BaseTemplateConfigTypeList**)this, (uint*)param_1);
        return __return_storage_ptr__;
    }

    // 0x100196090, 16 bytes, complete-object destructor, inline, placed by class name
    // OldscapeVarType::~OldscapeVarType(): jumps straight to the base-object destructor

    // 0x1001960a0, 32 bytes, deleting destructor, inline, placed by class name
    // OldscapeVarType::~OldscapeVarType()
    void OldscapeVarType::~OldscapeVarType() {
        ~OldscapeVarType(this);
        operator_delete(this);
    }

    // 0x1001a3d40, 48 bytes, base-object destructor, inline, placed by class name
    // OldscapeVarType::~OldscapeVarType()
    void OldscapeVarType::~OldscapeVarType() {
        field_0 = &PTR__OldscapeVarType_100ef5db8;
        (&field_104)->~basic_string();
        ~VarType();
    }

    // 0x1001b2b70, 16 bytes, complete-object constructor, inline, placed by class name
    // OldscapeVarType::OldscapeVarType(game::BaseTemplateConfigTypeList<OldscapeVarType>*, int): jumps straight to the base-object constructor

    // 0x1001b2b80, 80 bytes, base-object constructor, inline, placed by class name
    // OldscapeVarType::OldscapeVarType(game::BaseTemplateConfigTypeList<OldscapeVarType>*, int)
    void OldscapeVarType::OldscapeVarType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) game::VarType(param_1, param_2);
        field_0 = &PTR__OldscapeVarType_100ef5db8;
        m_dataType = 0;
        new (&field_104) eastl::string();
    }

} // namespace jag::oldscape::configdecoder
