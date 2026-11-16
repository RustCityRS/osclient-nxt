// projects/osclient/OldscapeVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100140250
    shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarType>::type
    bucket_make_shared<oldscape::configdecoder::OldscapeVarType,
                       game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, int&>(
        game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*& arg1, int& arg2) {
        ref_counter_base* ref_counter_base;
        OldscapeVarType* local_30[2];

        auto local_38 = BucketManager::Allocate(184, 0, 16);
        if (local_38 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarType>::type result;
        } else {
            local_30[0] = placement_new<oldscape::configdecoder::OldscapeVarType,
                                        game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
                                        unsigned int&>(local_38 + 48, arg1, arg2);
            ref_counter_base = (ref_counter_base*)
                placement_new<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                              managed_ptr_counter_and_data<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                                                           oldscape::configdecoder::OldscapeVarType>*&,
                              oldscape::configdecoder::OldscapeVarType*&>(local_38, &local_38, local_30);
            shared_ptr_do_enable_shared_from_this<oldscape::configdecoder::OldscapeVarType>(ref_counter_base,
                                                                                            local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1001402f0
    oldscape::configdecoder::OldscapeVarType*
    placement_new<oldscape::configdecoder::OldscapeVarType,
                  game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*& arg2, int& arg3) {
        new (arg1) oldscape::configdecoder::OldscapeVarType(arg2, arg3);
        return arg1;
    }

    // 0x100140310
    BucketRefCounter<oldscape::configdecoder::OldscapeVarType>*
    placement_new<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                  managed_ptr_counter_and_data<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                                               oldscape::configdecoder::OldscapeVarType>*&,
                  oldscape::configdecoder::OldscapeVarType*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<oldscape::configdecoder::OldscapeVarType>,
                                     oldscape::configdecoder::OldscapeVarType>*& arg2,
        oldscape::configdecoder::OldscapeVarType*& arg3) {
        new (arg1) BucketRefCounter<oldscape::configdecoder::OldscapeVarType>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100140340
    BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::BucketRefCounter(
        void* arg1, oldscape::configdecoder::OldscapeVarType* oldscapeVarType, unsigned int arg3)
        : ref_counter_base() {}

    // 0x1001403a0
    void BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::DeleteData() {
        if (*(uint64_t**)(this + 24) != nullptr) {
            (**(void (**)(...)) * *(uint64_t**)(this + 24))();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1001403d0
    void BucketRefCounter<oldscape::configdecoder::OldscapeVarType>::DeleteSelf() {
        BucketRefCounter<oldscape::configdecoder::OldscapeVarType> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<oldscape::configdecoder::OldscapeVarType> _vtbl*)this_thread::GetThreadID();
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

    // 0x100140bb0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::LRUCacheWrapper(
        const shared_ptr<oldscape::configdecoder::OldscapeVarType>& quickChatPhraseType, unsigned long long arg2,
        unsigned long long arg3, unsigned int arg4)
        : shared_ptr(quickChatPhraseType) {
        *(unsigned long long*)(this + 16) = arg2;
        *(unsigned int*)(this + 24) = arg4;
        *(unsigned long long*)(this + 32) = arg3;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 48) = 0;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class OldscapeVarType : public game::VarType // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OldscapeVarType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        uint64_t GetDataType() const;
        shared_ptr<OldscapeVarType> MakeShared<game::BaseTemplateConfigTypeList<OldscapeVarType>*&, int&>(
            game::BaseTemplateConfigTypeList<OldscapeVarType>*& arg1, int& arg2);
        OldscapeVarType(game::BaseTemplateConfigTypeList<OldscapeVarType>* baseTemplateConfigTypeList, int arg2);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            WeakNullConfigType; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint64_t m_dataType;
        uint8_t _unknown_104[8];
    };

    // 0x100140130
    shared_ptr<OldscapeVarType> OldscapeVarType::MakeShared<game::BaseTemplateConfigTypeList<OldscapeVarType>*&, int&>(
        game::BaseTemplateConfigTypeList<OldscapeVarType>*& arg1, int& arg2) {
        bucket_make_shared<OldscapeVarType, game::BaseTemplateConfigTypeList<OldscapeVarType>*&, unsigned int&>(
            (ReturnValue*)this, arg1, arg2);
        return this;
    }

    // 0x1001a3d40
    OldscapeVarType::~OldscapeVarType() {
        field_104.~basic_string();
    }

    // 0x1001b2b80
    OldscapeVarType::OldscapeVarType(game::BaseTemplateConfigTypeList<OldscapeVarType>* baseTemplateConfigTypeList,
                                     int arg2)
        : game::VarType(baseTemplateConfigTypeList, arg2), m_dataType(0) {}

} // namespace jag::oldscape::configdecoder
