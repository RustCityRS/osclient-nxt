// libs/game/runetek5/script/ScriptState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class ScriptState : public PlayerGroupDelta::PlayerGroupDeltaEntry // base inferred from shared vtable slots
    {
    public:
        class Stack;
        // virtual methods in vtable order
        virtual ~ScriptState();
        virtual void Reset();
        ScriptState(shared_ptr<ClientScript> const&);

        // data members, from how the methods use this: 50168 bytes, the first 8 are PlayerGroupDeltaEntry
        char _unknown_8[16];
        undefined8 field_24; // offset 24
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        char _unknown_40[44240];
        undefined4 field_44280; // offset 44280
        char _unknown_44284[4804];
        ActiveComponent field_49088; // offset 49088
        char _unknown_49112[8];
        ActiveComponent field_49120; // offset 49120
        char _unknown_49144[8];
        undefined4 field_49152; // offset 49152
        char _unknown_49156[956];
        undefined8 field_50112; // offset 50112
        undefined4 field_50120; // offset 50120
        char _unknown_50124[4];
        undefined8 field_50128; // offset 50128
        undefined8 field_50136; // offset 50136
        char _unknown_50144[16];
        undefined8 field_50160; // offset 50160
    };

    template <typename...> // 3 instantiations, e.g. <int, 1000ul>, <VarValue, 1000ul>, <long long, 1000ul>
    class ScriptState::Stack {
    public:
        Stack();
        ~Stack();
    };

    // 0x1003b6c50, 640 bytes, base-object constructor, placed by class name
    // ScriptState::ScriptState(shared_ptr<ClientScript> const&)
    void ScriptState::ScriptState(shared_ptr* param_1) {
        uint uVar1;
        ClientScript* pCVar2;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        NpcUID* extraout_RDX_01;
        hash local_68[8];
        equal_to local_60[8];
        hash local_58[8];
        equal_to local_50[8];
        eastl local_48[8];
        eastl local_40[8];
        eastl local_38[8];

        field_0 = &PTR__ScriptState_100efe460;
        new (&field_8, param_1) shared_ptr<oldscape::dash3d::Decor>();
        field_24 = 0;
        field_32 = 0;
        field_36 = 4294967295;
        pCVar2 = (ClientScript*)shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)param_1);
        uVar1 = pCVar2->GetLocalIntCount();
        eastl::destruct<oldscape::highlight::NpcUID*>(local_48, (NpcUID*)"EASTL vector", extraout_RDX);
        new (&field_40, (ulong)uVar1, (BucketAllocatorEASTL*)local_48) eastl::vector<int, BucketAllocatorEASTL>();
        pCVar2 = (ClientScript*)shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)param_1);
        uVar1 = pCVar2->GetLocalObjCount();
        eastl::destruct<oldscape::highlight::NpcUID*>(local_40, (NpcUID*)"EASTL vector", extraout_RDX_00);
        new (&field_64, (ulong)uVar1, (BucketAllocatorEASTL*)local_40) eastl::vector<VarValue, BucketAllocatorEASTL>();
        pCVar2 = (ClientScript*)shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)param_1);
        uVar1 = pCVar2->GetLocalLongCount();
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL vector", extraout_RDX_01);
        new (&field_88, (ulong)uVar1, (BucketAllocatorEASTL*)local_38) eastl::vector<long long, BucketAllocatorEASTL>();
        new (&field_136) std::array<Array<int, eastl::allocator>, 5ul>();
        new (&field_256) Stack<int, 1000ul>();
        new (&field_4264) Stack<VarValue, 1000ul>();
        new (&field_36272) Stack<long long, 1000ul>();
        field_44280 = 0;
        new (&field_44288) std::array<GoSubFrame, 50ul>();
        new (field_49088) ActiveComponent();
        new (field_49120) ActiveComponent();
        field_49152 = 0;
        new (&field_49160, local_68, local_60)
            eastl::fixed_hash_map<unsigned int, VarDomain*, 10ul, 11ul, true, eastl::hash<unsigned int>,
                                  eastl::equal_to<unsigned int>, false, eastl::allocator>();
        new (&field_49632, local_58, local_50)
            eastl::fixed_hash_map<unsigned int, VarDomain*, 10ul, 11ul, true, eastl::hash<unsigned int>,
                                  eastl::equal_to<unsigned int>, false, eastl::allocator>();
        std::unique_ptr<QuickChatPhrase, std::default_delete<QuickChatPhrase>>::unique_ptr<true, void>(
            (unique_ptr<QuickChatPhrase, std::default_delete<QuickChatPhrase>>*)&field_50104);
        field_50112 = 0;
        field_50120 = 0;
        field_50160 = 0;
        field_50128 = 0;
        field_50136 = 0;
    }

    // 0x1003b6f70, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptState::Stack<int, 1000ul>::Stack(): jumps straight to the base-object constructor

    // 0x1003b6f80, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptState::Stack<VarValue, 1000ul>::Stack(): jumps straight to the base-object constructor

    // 0x1003b6f90, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptState::Stack<long long, 1000ul>::Stack(): jumps straight to the base-object constructor

    // 0x1003b6ff0, 16 bytes, complete-object destructor, inline, placed by class name
    // ScriptState::Stack<VarValue, 1000ul>::~Stack(): jumps straight to the base-object destructor

    // 0x1003b7030, 16 bytes, complete-object constructor, placed by class name
    // ScriptState::ScriptState(shared_ptr<ClientScript> const&): jumps straight to the base-object constructor

    // 0x1003b7040, 96 bytes, placed by class name
    // ScriptState::Reset()
    void ScriptState::Reset() {
        QuickChatPhrase* in_RSI;

        shared_ptr<ClientScript>::reset();
        field_49088->Reset();
        field_49120->Reset();
        (&field_49160)->clear();
        (&field_49632)->clear();
        (&field_50104, in_RSI)->reset();
    }

    // 0x1003b7550, 16 bytes, complete-object destructor, inline, placed by class name
    // ScriptState::~ScriptState(): jumps straight to the base-object destructor

    // 0x1003b7560, 32 bytes, deleting destructor, inline, placed by class name
    // ScriptState::~ScriptState()
    void ScriptState::~ScriptState() {
        ~ScriptState(this);
        operator_delete(this);
    }

    // 0x1003b7730, 16 bytes, base-object constructor, inline, placed by class name
    // ScriptState::Stack<int, 1000ul>::Stack()
    void ScriptState::Stack<int, 1000ul>::Stack(Stack<int, 1000ul>* this) {
        ___bzero(this, 4004);
    }

    // 0x1003b7740, 112 bytes, base-object constructor, inline, placed by class name
    // ScriptState::Stack<VarValue, 1000ul>::Stack()
    void ScriptState::Stack<VarValue, 1000ul>::Stack(Stack<VarValue, 1000ul>* this) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) VarValue();
            lVar1 = lVar1 + 32;
        } while (lVar1 != 32000);
        *(undefined4*)(this + 32000) = 0;
    }

    // 0x1003b7ad0, 16 bytes, base-object constructor, inline, placed by class name
    // ScriptState::Stack<long long, 1000ul>::Stack()
    void ScriptState::Stack<long long, 1000ul>::Stack(Stack<long long, 1000ul>* this) {
        ___bzero(this, 8004);
    }

    // 0x1003b7db0, 16 bytes, base-object destructor, inline, placed by class name
    // ScriptState::Stack<VarValue, 1000ul>::~Stack()
    void ScriptState::Stack<VarValue, 1000ul>::~Stack(Stack<VarValue, 1000ul>* this) {
        ~array();
    }

    // 0x1003b7ee0, 176 bytes, base-object destructor, inline, placed by class name
    // ScriptState::~ScriptState()
    void ScriptState::~ScriptState() {
        field_0 = &PTR__ScriptState_100efe460;
        (&field_50104)->~unique_ptr();
        (&field_49632)->~fixed_hash_map();
        (&field_49160)->~fixed_hash_map();
        field_49120->~ActiveComponent();
        field_49088->~ActiveComponent();
        (&field_44288)->~array();
        (&field_4264)->~Stack();
        (&field_136)->~array();
        (&field_88)->~vector();
        (&field_64)->~vector();
        (&field_40)->~vector_set();
        (&field_8)->~shared_ptr();
    }

} // namespace jag::game
