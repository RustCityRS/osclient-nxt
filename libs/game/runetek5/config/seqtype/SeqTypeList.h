// libs/game/runetek5/config/seqtype/SeqTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PhraseType {
    public:
        ~PhraseType();
        PhraseType(int, char const*, bool);
        PhraseType* operator=(PhraseType&&);
        PhraseType(PhraseType&&);
        PhraseType();

        // data members, from how the methods use this: 41 bytes
        int field_0; // offset 0
        char _unknown_4[36];
        bool field_40; // offset 40
    };

    class SeqTypeList {
    public:
        // virtual methods in vtable order
        virtual ~SeqTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        GetSeqGroupTypeList() const;
        GetKeyFrameset(int);
        GetFrame(unsigned int);
        GetFrameset(int);
        SeqTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&,
                    SeqGroupTypeList&);

        // data members, from how the methods use this: 20864 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        undefined8 m_seqGroupTypeList; // offset 112
        char _unknown_120[20744];
    };

    // 0x1004dd360, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PhraseType::PhraseType(int, char const*, bool): jumps straight to the base-object constructor

    // 0x1004dd3c0, 48 bytes, inline, placed by class header (inline)
    // PhraseType::operator=(PhraseType&&)
    /* PhraseType::TEMPNAMEPLACEHOLDERVALUE(PhraseType&&) */

    PhraseType* PhraseType::operator=(PhraseType* param_1) {
        field_0 = param_1->field_0;
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)&param_1->field_8);
        field_40 = param_1->field_40;
        return this;
    }

    // 0x1004e14f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SeqTypeList::~SeqTypeList(): jumps straight to the base-object destructor

    // 0x1004e1500, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // SeqTypeList::~SeqTypeList()
    void SeqTypeList::~SeqTypeList() {
        ~SeqTypeList(this);
        operator_delete(this);
    }

    // 0x1004e1570, 48 bytes, inline, placed by class name and debug map
    // SeqTypeList::CacheReset()
    void SeqTypeList::CacheReset() {
        CacheReset();
        (&field_20856)->Reset();
        (&field_120)->Reset();
    }

    // 0x1004e15a0, 64 bytes, inline, placed by class name and debug map
    // SeqTypeList::CacheClean(unsigned int)
    void SeqTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_20856, (ulong)param_1)->Clean();
        (&field_120, (ulong)param_1)->Clean();
    }

    // 0x1004e1620, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PhraseType::PhraseType(int, char const*, bool)
    void PhraseType::PhraseType(int param_1, char* param_2, bool param_3) {
        allocator local_38[8];

        field_0 = param_1;
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_8, param_2, local_38) eastl::string();
        field_40 = param_3;
    }

    // 0x1004e18e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SeqTypeSounds::SeqTypeSounds(): jumps straight to the base-object constructor

    // 0x1004e18f0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SeqTypeSounds::SeqTypeSounds()
    void SeqTypeSounds::SeqTypeSounds() {
        new (this) Array<Array<unsigned int, eastl::allocator>, eastl::allocator>();
        new (&field_24) Array<unsigned char, eastl::allocator>();
        new (&field_48) Array<unsigned short, eastl::allocator>();
        new (&field_72) Array<unsigned short, eastl::allocator>();
        field_96 = 4294967295;
    }

    // 0x1004e1b80, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SeqTypeSounds::~SeqTypeSounds(): jumps straight to the base-object destructor

    // 0x1004e1b90, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // SeqTypeSounds::~SeqTypeSounds()
    void SeqTypeSounds::~SeqTypeSounds() {
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_24)->~Array();
        ~Array();
    }

    // 0x1004e28e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PhraseType::PhraseType(PhraseType&&): jumps straight to the base-object constructor

    // 0x1004e28f0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PhraseType::PhraseType(PhraseType&&)
    void PhraseType::PhraseType(PhraseType* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        field_40 = param_1->field_40;
    }

    // 0x1004e2960, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PhraseType::PhraseType(): jumps straight to the base-object constructor

    // 0x1004e2970, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PhraseType::PhraseType()
    void PhraseType::PhraseType() {
        field_0 = -1;
        new (&field_8) eastl::string();
        field_40 = false;
    }

    // 0x1004f1f10, 64 bytes, base-object destructor, inline, placed by class name
    // SeqTypeList::~SeqTypeList()
    void SeqTypeList::~SeqTypeList() {
        field_0 = PTR_vtable_100ee7ef8 + 16;
        (&field_20856)->~LRUHashCache();
        (&field_120)->~LRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game

namespace jag {
    // 0x1004e1760, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::SeqTypeSounds>::type make_shared<game::SeqTypeSounds>()
    jag* make_shared<game::SeqTypeSounds>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SeqTypeSounds* local_28[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::SeqTypeSounds>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::SeqTypeSounds>, int, game::SeqTypeSounds*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1004e1880, 64 bytes, inline, placed by debug map only (low confidence)
    // game::SeqTypeSounds* placement_new<game::SeqTypeSounds>(void*)
    SeqTypeSounds* placement_new<game::SeqTypeSounds>(void* param_1) {
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        game::SeqTypeSounds::SeqTypeSounds(param_1);
        return param_1;
    }

    // 0x1004e18c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::SeqTypeSounds>* placement_new<ref_counter_shared<game::SeqTypeSounds>, int, game::SeqTypeSounds*&>(void*, int&&, game::SeqTypeSounds*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::SeqTypeSounds>, int, game::SeqTypeSounds*&>(void* param_1, int* param_2,
                                                                                       SeqTypeSounds** param_3) {
        ref_counter_shared<game::SeqTypeSounds>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1004e1a80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::SeqTypeSounds>::ref_counter_shared(unsigned long, game::SeqTypeSounds*): jumps straight to the base-object constructor

    // 0x1004e1a90, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::SeqTypeSounds>::ref_counter_shared(unsigned long, game::SeqTypeSounds*)
    void ref_counter_shared<game::SeqTypeSounds>::ref_counter_shared(ulong param_1, SeqTypeSounds* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7318 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SeqTypeSounds**)(this + 24) = param_2;
    }

    // 0x1004e1ad0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::SeqTypeSounds>::DeleteData()
    void ref_counter_shared<game::SeqTypeSounds>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~SeqTypeSounds();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 104;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004e2a80, 32 bytes, inline, placed by debug map only (low confidence)
    // game::QuickChatPhraseType* placement_new<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(void*, unsigned int&, game::QuickChatPhraseTypeList&)
    QuickChatPhraseType* placement_new<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(
        void* param_1, uint* param_2, QuickChatPhraseTypeList* param_3) {
        game::QuickChatPhraseType::QuickChatPhraseType(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x1004e2aa0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatPhraseType>* placement_new<ref_counter_shared<game::QuickChatPhraseType>, int, game::QuickChatPhraseType*&>(void*, int&&, game::QuickChatPhraseType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::QuickChatPhraseType>, int, game::QuickChatPhraseType*&>(
        void* param_1, int* param_2, QuickChatPhraseType** param_3) {
        ref_counter_shared<game::QuickChatPhraseType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1004e3f70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatPhraseType>::ref_counter_shared(unsigned long, game::QuickChatPhraseType*): jumps straight to the base-object constructor

    // 0x1004e3f80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatPhraseType>::ref_counter_shared(unsigned long, game::QuickChatPhraseType*)
    void ref_counter_shared<game::QuickChatPhraseType>::ref_counter_shared(ulong param_1,
                                                                           QuickChatPhraseType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7360 + 16;
        *(ulong*)(this + 16) = param_1;
        *(QuickChatPhraseType**)(this + 24) = param_2;
    }

    // 0x1004e3fc0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatPhraseType>::DeleteData()
    void ref_counter_shared<game::QuickChatPhraseType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~QuickChatPhraseType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 144;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
