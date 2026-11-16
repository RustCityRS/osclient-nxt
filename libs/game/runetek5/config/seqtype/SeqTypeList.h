// libs/game/runetek5/config/seqtype/SeqTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PhraseType {
    public:
        ~PhraseType();
        PhraseType(int arg1, const char* str, bool arg3);
        PhraseType* operator=(PhraseType&& phraseType);
        PhraseType(PhraseType&& phraseType);
        PhraseType();

    private:
        int field_0;
        uint8_t _unknown_4[36];
        bool field_40;
    };

    class SeqTypeList {
    public:
        // virtual methods in vtable order
        virtual ~SeqTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        SeqGroupTypeList* GetSeqGroupTypeList() const;
        auto GetKeyFrameset(int arg1);
        auto GetFrame(unsigned int arg1);
        auto GetFrameset(int arg1);
        SeqTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider,
                    SeqGroupTypeList& seqGroupTypeList);

    private:
        uint8_t _unknown_8[56];
        Js5ArchiveSettings* field_64;
        uint8_t _unknown_72[40];
        SeqGroupTypeList* m_seqGroupTypeList;
        uint8_t _unknown_120[20744];
    };

    // 0x1004dd3c0
    PhraseType* PhraseType::operator=(PhraseType&& phraseType) {
        field_0 = phraseType.field_0;
        field_8 = &phraseType.field_8;
        field_40 = phraseType.field_40;
        return this;
    }

    // 0x1004e1570
    void SeqTypeList::CacheReset() {
        CacheReset();
        field_20856.Reset();
        field_120.Reset();
    }

    // 0x1004e15a0
    void SeqTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_20856.Clean((unsigned long)arg1);
        field_120.Clean((unsigned long)arg1);
    }

    // 0x1004e1620
    PhraseType::PhraseType(int arg1, const char* str, bool arg3) : field_0(arg1) {

        new (&field_8) eastl::string(str);
        field_40 = arg3;
    }

    // 0x1004e18f0
    SeqTypeSounds::SeqTypeSounds() : Array<Array<unsigned int>>(), field_96(4294967295) {}

    // 0x1004e1b90
    SeqTypeSounds::~SeqTypeSounds() {
        field_72.~Array();
        field_48.~Array();
        field_24.~Array();
    }

    // 0x1004e28f0
    PhraseType::PhraseType(PhraseType&& phraseType)
        : field_0(phraseType.field_0), field_8(phraseType.field_8), field_40(phraseType.field_40) {}

    // 0x1004e2970
    PhraseType::PhraseType() : field_0(-1), field_40(false) {}

    // 0x1004f1f10
    SeqTypeList::~SeqTypeList() {
        field_20856.~LRUHashCache();
        field_120.~LRUHashCache();
    }

} // namespace jag::game

namespace jag {
    // 0x1004e1760
    shared_ptr_if_not_array<game::SeqTypeSounds>::type make_shared<game::SeqTypeSounds>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SeqTypeSounds* local_28[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::SeqTypeSounds>::type result;
        } else {
            local_28[0] = placement_new<game::SeqTypeSounds>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::SeqTypeSounds>, int, game::SeqTypeSounds*&>(arg1, &local_2c,
                                                                                                   local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1004e1880
    game::SeqTypeSounds* placement_new<game::SeqTypeSounds>(void* arg1) {
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 96) = 0;
        new (arg1) game::SeqTypeSounds();
        return arg1;
    }

    // 0x1004e18c0
    ref_counter_shared<game::SeqTypeSounds>*
    placement_new<ref_counter_shared<game::SeqTypeSounds>, int, game::SeqTypeSounds*&>(void* arg1, int&& arg2,
                                                                                       game::SeqTypeSounds*& arg3) {
        new (arg1) ref_counter_shared<game::SeqTypeSounds>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1004e1a90
    ref_counter_shared<game::SeqTypeSounds>::ref_counter_shared(unsigned long arg1, game::SeqTypeSounds* seqTypeSounds)
        : ref_counter_base() {}

    // 0x1004e1ad0
    void ref_counter_shared<game::SeqTypeSounds>::DeleteData() {
        ref_counter_shared<game::SeqTypeSounds> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((SeqTypeSounds*)((long)&(this[3]._vptr)->_dtor + lVar2))->~SeqTypeSounds();
                    prVar1 = (ref_counter_shared<game::SeqTypeSounds> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 104;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1004e2a80
    game::QuickChatPhraseType* placement_new<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(
        void* arg1, unsigned int& arg2, game::QuickChatPhraseTypeList& quickChatPhraseTypeList) {
        new (arg1) game::QuickChatPhraseType(arg2, quickChatPhraseTypeList);
        return arg1;
    }

    // 0x1004e2aa0
    ref_counter_shared<game::QuickChatPhraseType>*
    placement_new<ref_counter_shared<game::QuickChatPhraseType>, int, game::QuickChatPhraseType*&>(
        void* arg1, int&& arg2, game::QuickChatPhraseType*& arg3) {
        new (arg1) ref_counter_shared<game::QuickChatPhraseType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1004e3f80
    ref_counter_shared<game::QuickChatPhraseType>::ref_counter_shared(unsigned long arg1,
                                                                      game::QuickChatPhraseType* quickChatPhraseType)
        : ref_counter_base() {}

    // 0x1004e3fc0
    void ref_counter_shared<game::QuickChatPhraseType>::DeleteData() {
        ref_counter_shared<game::QuickChatPhraseType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((QuickChatPhraseType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~QuickChatPhraseType();
                    prVar1 = (ref_counter_shared<game::QuickChatPhraseType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 144;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
