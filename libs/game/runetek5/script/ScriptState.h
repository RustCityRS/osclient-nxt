// libs/game/runetek5/script/ScriptState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        ScriptState(const shared_ptr<ClientScript>& clientScript);

    private:
        uint8_t _unknown_8[16];
        uint64_t field_24;
        uint8_t field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        uint8_t _unknown_40[44240];
        uint32_t field_44280;
        uint8_t _unknown_44284[4804];
        ActiveComponent field_49088;
        uint8_t _unknown_49112[8];
        ActiveComponent field_49120;
        uint8_t _unknown_49144[8];
        uint32_t field_49152;
        uint8_t _unknown_49156[956];
        uint64_t field_50112;
        uint32_t field_50120;
        uint8_t _unknown_50124[4];
        uint64_t field_50128;
        uint64_t field_50136;
        uint8_t _unknown_50144[16];
        uint64_t field_50160;
    };

    template <typename...> // 3 instantiations, e.g. <int, 1000ul>, <VarValue, 1000ul>, <long long, 1000ul>
    class ScriptState::Stack {
    public:
        Stack();
        ~Stack();
    };

    // 0x1003b6c50
    ScriptState::ScriptState(const shared_ptr<ClientScript>& clientScript)
        : field_8(clientScript), field_24(0), field_32(0), field_36(4294967295) {
        hash<unsigned int> local_68;
        equal_to<unsigned int> local_60;
        hash<unsigned int> local_58;
        equal_to<unsigned int> local_50;
        eastl local_48;
        eastl local_40;
        eastl local_38;

        auto pCVar2 = clientScript.operator->();
        unsigned int uVar1 = pCVar2->GetLocalIntCount();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_48);
        new (&field_40) eastl::vector<int, BucketAllocatorEASTL>((unsigned long)uVar1, local_48);
        pCVar2 = (ClientScript*)clientScript.operator->();
        uVar1 = pCVar2->GetLocalObjCount();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_40);
        new (&field_64) eastl::vector<VarValue, BucketAllocatorEASTL>((unsigned long)uVar1, local_40);
        pCVar2 = (ClientScript*)clientScript.operator->();
        uVar1 = pCVar2->GetLocalLongCount();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (&field_88) eastl::vector<long long, BucketAllocatorEASTL>((unsigned long)uVar1, local_38);
        new (&field_136) std::array<Array<int>, 5ul>();
        new (&field_256) Stack<int, 1000ul>();
        new (&field_4264) Stack<VarValue, 1000ul>();
        new (&field_36272) Stack<long long, 1000ul>();
        field_44280 = 0;
        new (&field_44288) std::array<GoSubFrame, 50ul>();
        new (field_49088) ActiveComponent();
        new (field_49120) ActiveComponent();
        field_49152 = 0;
        new (&field_49160) eastl::fixed_hash_map<unsigned int, VarDomain*, 10ul, 11ul, true, eastl::hash<unsigned int>,
                                                 eastl::equal_to<unsigned int>, false>(local_68, local_60);
        new (&field_49632) eastl::fixed_hash_map<unsigned int, VarDomain*, 10ul, 11ul, true, eastl::hash<unsigned int>,
                                                 eastl::equal_to<unsigned int>, false>(local_58, local_50);
        field_50104.unique_ptr<true, void>();
        field_50112 = 0;
        field_50120 = 0;
        field_50160 = 0;
        field_50128 = 0;
        field_50136 = 0;
    }

    // 0x1003b7040
    void ScriptState::Reset() {
        QuickChatPhrase* in_RSI;

        field_8.reset();
        field_49088->Reset();
        field_49120->Reset();
        field_49160.clear();
        field_49632.clear();
        field_50104.reset(in_RSI);
    }

    // 0x1003b7730
    ScriptState::Stack<int, 1000ul>::Stack() {
        ___bzero(this, 4004);
    }

    // 0x1003b7740
    ScriptState::Stack<VarValue, 1000ul>::Stack() {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) VarValue();
            lVar1 = lVar1 + 32;
        } while (lVar1 != 32000);
        *(uint32_t*)(this + 32000) = 0;
    }

    // 0x1003b7ad0
    ScriptState::Stack<long long, 1000ul>::Stack() {
        ___bzero(this, 8004);
    }

    // 0x1003b7db0
    ScriptState::Stack<VarValue, 1000ul>::~Stack() {}

    // 0x1003b7ee0
    ScriptState::~ScriptState() {
        field_50104.~unique_ptr();
        field_49632.~fixed_hash_map();
        field_49160.~fixed_hash_map();
        field_49120->~ActiveComponent();
        field_49088->~ActiveComponent();
        field_44288.~array();
        field_4264.~Stack();
        field_136.~array();
        field_88.~vector();
        field_64.~vector();
        field_40.~vector_set();
        field_8.~shared_ptr();
    }

} // namespace jag::game
