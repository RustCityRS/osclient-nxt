// libs/game/runetek5/config/vartype/PlayerVarDomain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class PlayerVarDomain {
    public:
        // virtual methods in vtable order
        virtual ~PlayerVarDomain();
        virtual long GetVarValue(const shared_ptr<VarType>& varType) const;
        virtual void SetVarValue(const shared_ptr<VarType>& varType, const VarValue& varValue);
        virtual void GetVarBitValue(const shared_ptr<VarBitType>& varBitType) const;
        virtual void SetVarBitValue(const shared_ptr<VarBitType>& varBitType, int arg2, bool* arg3);
        PlayerVarDomain();
        unsigned int Service();
        void Reset();
        void SetVarValueFromServer(const shared_ptr<VarType>& varType, const VarValue& varValue);
        void SetVarBitValueFromServer(const shared_ptr<VarBitType>& varBitType, int arg2);
        int GetTotalQuestPoints();

    private:
        uint64_t field_8;
        uint64_t field_16;
        ConfigProvider* field_24;
        uint8_t _unknown_32[235008];
        int field_235040;
        uint8_t _unknown_235044[4];
    };

    // 0x1004cdd70
    PlayerVarDomain::PlayerVarDomain()
        : VarDomain(), field_8(1), field_16(500), field_32(local_58, local_50), field_114896(local_48, local_40),
          field_229760(local_38, local_30), field_235040(-1) {
        hash<int> local_58;
        equal_to<int> local_50;
        hash<int> local_48;
        equal_to<int> local_40;
        hash<int> local_38;
        equal_to<int> local_30;
    }

    // 0x1004cde70
    unsigned int PlayerVarDomain::Service() {
        uint8_t bVar1;
        unsigned long uVar2;
        bool cVar3;
        unsigned int* puVar4;
        long lVar5;
        VarValue* varValue;
        VarValue* this_01;
        unsigned int uVar6;
        int iVar7;
        obj_iterator local_198;
        unsigned int local_170;
        unsigned int local_16c;

        unsigned long local_188 = FrameTime::GetCurrentTimeMS();
        uint8_t* fixed_hash_map = &field_229760;
        ScopedContainerElementEraser<eastl::fixed_hash_map<int, DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                                           eastl::equal_to<int>, false>,
                                     unsigned int>
            local_168(*fixed_hash_map);
        &local_198 = (obj_iterator[16])fixed_hash_map->end();
        auto local_1a8 = fixed_hash_map->begin();
        hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true>>* local_180 =
            (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                      eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true>>*)&field_32;
        hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true>>* local_178 =
            (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                      eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true>>*)&field_114896;
        do {
            cVar3 = local_1a8 != local_198;
            if (!cVar3) {
                iVar7 = 2;
            LAB_1004ce015:
                uVar6 = 4294967295;
                if (iVar7 != 2) {
                    uVar6 = local_170;
                }
                return uVar6;
            }
            puVar4 = (unsigned int*)local_1a8.HeapBeginPtr();
            local_16c = *puVar4;
            lVar5 = local_1a8.HeapBeginPtr();
            uVar2 = *(unsigned long*)(lVar5 + 8);
            bVar1 = *(uint8_t*)(lVar5 + 16);
            cVar3 = (field_24->GetVarType(VarDomainType::PLAYER, local_16c))->operator_cast_to_bool();
            if ((cVar3) && (uVar2 < local_188)) {
                if ((bVar1 & 1) != 0) {
                    varValue = (VarValue*)(*local_180)[local_16c];
                    this_01 = (VarValue*)(*local_178)[local_16c];
                    *this_01 = varValue;
                    local_168.erase(local_16c);
                    field_235040 = -1;
                    iVar7 = 1;
                    local_170 = local_16c;
                    goto LAB_1004ce015;
                }
                local_168.erase(local_16c);
            }
            ++local_1a8;
        } while (true);
    }

    // 0x1004ce110
    void PlayerVarDomain::Reset() {
        field_32.clear();
        field_114896.clear();
        field_235040 = -1;
        field_229760.clear();
    }

    // 0x1004ce1b0
    long PlayerVarDomain::GetVarValue(const shared_ptr<VarType>& varType) const {
        long lVar2;
        eastl local_38;
        uint8_t local_28[16];

        local_28._0_4_ = ((GameToken*)varType.operator->())->GetStatus();
        &local_38 = (eastl[16])field_114896.find(*local_28);
        local_28 = field_114896.end();
        if (local_38 != *local_28 == '\0') {
            lVar2 = ((VarType*)varType.operator->())->GetDefaultValue();
        } else {
            lVar2 = local_38.HeapBeginPtr();
            lVar2 = lVar2 + 8;
        }
        return lVar2;
    }

    // 0x1004ce330
    void PlayerVarDomain::SetVarValue(const shared_ptr<VarType>& varType, const VarValue& varValue) {
        long lVar2;
        long lVar3;
        unsigned long long* puVar4;
        uint8_t local_40[16];

        int local_2c = ((GameToken*)varType.operator->())->GetStatus();
        VarValue* this_02 = &field_114896[local_2c];
        *this_02 = varValue;
        field_235040 = -1;
        uint8_t* this_00 = &field_229760;
        auto local_50 = this_00->find(local_2c);
        local_40 = this_00->end();
        if (local_50 != *local_40 == '\0') {
            lVar2 = FrameTime::GetCurrentTimeMS();
            new (local_40) DelayedVariable(lVar2 + field_16, false);
            puVar4 = (unsigned long long*)(*this_00)[local_2c];
            *puVar4 = local_40._0_8_;
            *(bool*)(puVar4 + 1) = local_40[8];
        } else {
            lVar2 = local_50.HeapBeginPtr();
            lVar3 = FrameTime::GetCurrentTimeMS();
            *(long*)(lVar2 + 8) = lVar3 + field_16;
            *(uint8_t*)(lVar2 + 16) = 0;
        }
    }

    // 0x1004ce460
    void PlayerVarDomain::SetVarValueFromServer(const shared_ptr<VarType>& varType, const VarValue& varValue) {
        long lVar2;
        long lVar3;
        unsigned long long* puVar4;
        uint8_t local_40[16];

        int local_2c = ((GameToken*)varType.operator->())->GetStatus();
        VarValue* this_02 = &field_32[local_2c];
        *this_02 = varValue;
        uint8_t* this_00 = &field_229760;
        auto local_50 = this_00->find(local_2c);
        local_40 = this_00->end();
        if (local_50 != *local_40 == '\0') {
            new (local_40) DelayedVariable(field_8, true);
            puVar4 = (unsigned long long*)(*this_00)[local_2c];
            *puVar4 = local_40._0_8_;
            *(bool*)(puVar4 + 1) = local_40[8];
        } else {
            lVar2 = local_50.HeapBeginPtr();
            if ((*(long*)(lVar2 + 8) != field_8) && (*(char*)(lVar2 + 16) == '\0')) {
                lVar3 = FrameTime::GetCurrentTimeMS();
                *(long*)(lVar2 + 8) = lVar3 + field_16;
                *(uint8_t*)(lVar2 + 16) = 1;
            }
        }
    }

    // 0x1004ce550
    void PlayerVarDomain::GetVarBitValue(const shared_ptr<VarBitType>& varBitType) const {
        auto this_00 = varBitType.operator->();
        ((Logger*)varBitType.operator->())->GetLogStreams();
        this_00->GetVarBitValue(((VarValue*)GetVarValue())->GetInt());
    }

    // 0x1004ce610
    void PlayerVarDomain::SetVarBitValue(const shared_ptr<VarBitType>& varBitType, int arg2, bool* arg3) {
        uint64_t extraout_var;

        auto this_00 = varBitType.operator->();
        auto varValue = this_00->GetLogStreams();
        auto this_01 = varBitType.operator->();
        uint8_t uVar1 = GetVarValue();
        int iVar2 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetInt();
        iVar2 = this_01->SetVarBitValue(iVar2, arg2, arg3);
        VarValue local_50(iVar2);
        SetVarValue(varValue);
    }

    // 0x1004ce6d0
    void PlayerVarDomain::SetVarBitValueFromServer(const shared_ptr<VarBitType>& varBitType, int arg2) {
        VarType* this_02;
        VarValue* this_03;
        int local_58[8];

        auto this_01 = varBitType.operator->();
        auto this_05 = this_01->GetLogStreams();
        uint8_t* this_00 = &field_32;
        GameToken* pGVar1 = (GameToken*)(*this_05).operator->();
        local_58[0] = pGVar1->GetStatus();
        VarValue* pVVar2 = (VarValue*)(*this_00)[*local_58];
        if (pVVar2->IsUndefined() != '\0') {
            this_02 = (VarType*)(*this_05).operator->();
            pVVar2 = (VarValue*)this_02->GetDefaultValue();
            pGVar1 = (GameToken*)(*this_05).operator->();
            local_58[0] = pGVar1->GetStatus();
            this_03 = (VarValue*)(*this_00)[*local_58];
            *this_03 = pVVar2;
        }
        auto this_04 = varBitType.operator->();
        pGVar1 = (GameToken*)(*this_05).operator->();
        int local_38 = pGVar1->GetStatus();
        pVVar2 = (VarValue*)(*this_00)[local_38];
        int iVar4 = pVVar2->GetInt();
        iVar4 = this_04->SetVarBitValue(iVar4, arg2, nullptr);
        new (local_58) VarValue(iVar4);
        SetVarValueFromServer(*this_05, *local_58);
    }

    // 0x1004ce840
    int PlayerVarDomain::GetTotalQuestPoints() {
        int iVar2;
        shared_ptr<QuestType>* this_00;
        unsigned int arg1;

        int iVar3 = field_235040;
        if (iVar3 == -1) {
            field_24->GetConfigSize<QuestType>(0);
            if (0 == 0) {
                iVar3 = 0;
            } else {
                arg1 = 0;
                iVar3 = 0;
                do {
                    this_00 = field_24->GetConfig<QuestType>(arg1, nullptr);
                    if (((QuestType*)(*this_00).operator->())->FinishedQuest(*this) != '\0') {
                        iVar2 = ((PackableArea*)(*this_00).operator->())->GetMaxLevels();
                        iVar3 = iVar3 + iVar2;
                    }
                    arg1 = arg1 + 1;
                } while (arg1 < 0);
            }
            field_235040 = iVar3;
        }
        return iVar3;
    }

    // 0x1004d40a0
    PlayerVarDomain::~PlayerVarDomain() {
        field_229760.~fixed_hash_map();
        field_114896.~fixed_hash_map();
        field_32.~fixed_hash_map();
    }

} // namespace jag::game
