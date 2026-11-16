// libs/game/runetek5/config/vartype/PlayerVarDomain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class PlayerVarDomain {
    public:
        // virtual methods in vtable order
        virtual ~PlayerVarDomain();
        virtual long GetVarValue(shared_ptr<VarType> const&) const;
        virtual void SetVarValue(shared_ptr<VarType> const&, VarValue const&);
        virtual void GetVarBitValue(shared_ptr<VarBitType> const&) const;
        virtual void SetVarBitValue(shared_ptr<VarBitType> const&, int, bool*);
        PlayerVarDomain();
        int Service();
        void Reset();
        void SetVarValueFromServer(shared_ptr<VarType> const&, VarValue const&);
        void SetVarBitValueFromServer(shared_ptr<VarBitType> const&, int);
        int GetTotalQuestPoints();

        // data members, from how the methods use this: 235048 bytes
        undefined** field_0;      // offset 0, vtable pointer
        undefined8 field_8;       // offset 8
        undefined8 field_16;      // offset 16
        ConfigProvider* field_24; // offset 24
        char _unknown_32[235008];
        int field_235040; // offset 235040
        char _unknown_235044[4];
    };

    // 0x1004cdd70, 192 bytes, base-object constructor, placed by class name
    // PlayerVarDomain::PlayerVarDomain()
    void PlayerVarDomain::PlayerVarDomain() {
        hash local_58[8];
        equal_to local_50[8];
        hash local_48[8];
        equal_to local_40[8];
        hash local_38[8];
        equal_to local_30[8];

        new (this) VarDomain();
        field_0 = &PTR__PlayerVarDomain_100f01ee8;
        field_8 = 1;
        field_16 = 500;
        new (&field_32, local_58, local_50) eastl::fixed_hash_map<int, VarValue, 2048ul, 2049ul, true, eastl::hash<int>,
                                                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_114896, local_48, local_40)
            eastl::fixed_hash_map<int, VarValue, 2048ul, 2049ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                                  eastl::allocator>();
        new (&field_229760, local_38, local_30)
            eastl::fixed_hash_map<int, DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>,
                                  false, eastl::allocator>();
        field_235040 = -1;
    }

    // 0x1004cde60, 16 bytes, complete-object constructor, placed by class name
    // PlayerVarDomain::PlayerVarDomain(): jumps straight to the base-object constructor

    // 0x1004cde70, 528 bytes, placed by class name
    // PlayerVarDomain::Service()
    int PlayerVarDomain::Service() {
        byte bVar1;
        ulong uVar2;
        bool bVar3;
        int* piVar4;
        long lVar5;
        shared_ptr* this_00;
        VarValue* pVVar6;
        VarValue* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar7;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar8;
        int iVar9;
        eastl local_1a8[16];
        hashtable_iterator_base local_198[16];
        ulong local_188;
        hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>*
            local_180;
        hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>*
            local_178;
        int local_170;
        int local_16c;
        ScopedContainerElementEraser<eastl::fixed_hash_map<int, DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                                           eastl::equal_to<int>, false, eastl::allocator>,
                                     unsigned int>
            local_168[304];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_188 = FrameTime::GetCurrentTimeMS();
        ScopedContainerElementEraser<eastl::fixed_hash_map<int, DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                                           eastl::equal_to<int>, false, eastl::allocator>,
                                     unsigned int>::ScopedContainerElementEraser(local_168,
                                                                                 (fixed_hash_map*)&field_229760);
        local_198 = (hashtable_iterator_base[16])(&field_229760)->end();
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_180 = (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                              eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>,
                              false>*)&field_32;
        local_178 = (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                              eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>,
                              false>*)&field_114896;
        phVar7 = extraout_RDX;
        do {
            bVar3 = eastl::operator!=(local_1a8, local_198, phVar7);
            if (!bVar3) {
                iVar9 = 2;
            LAB_1004ce015:
                iVar8 = -1;
                if (iVar9 != 2) {
                    iVar8 = local_170;
                }
                local_168->~ScopedContainerElementEraser();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return iVar8;
            }
            piVar4 = (int*)local_1a8->HeapBeginPtr();
            local_16c = *piVar4;
            lVar5 = local_1a8->HeapBeginPtr();
            uVar2 = *(ulong*)(lVar5 + 8);
            bVar1 = *(byte*)(lVar5 + 16);
            this_00 = (shared_ptr*)(field_24, VarDomainType::PLAYER, local_16c)->GetVarType();
            bVar3 = shared_ptr::operator_cast_to_bool(this_00);
            if ((bVar3) && (uVar2 < local_188)) {
                if ((bVar1 & 1) != 0) {
                    pVVar6 = (VarValue*)eastl::hash_map<
                        int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                        eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>,
                        false>::operator[](local_180, &local_16c);
                    this_01 = (VarValue*)eastl::hash_map<
                        int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                        eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>,
                        false>::operator[](local_178, &local_16c);
                    VarValue::operator=(this_01, pVVar6);
                    ScopedContainerElementEraser<
                        eastl::fixed_hash_map<int, DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                              eastl::equal_to<int>, false, eastl::allocator>,
                        unsigned int>::erase((uint)local_168);
                    field_235040 = -1;
                    iVar9 = 1;
                    local_170 = local_16c;
                    goto LAB_1004ce015;
                }
                ScopedContainerElementEraser<
                    eastl::fixed_hash_map<int, DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                          eastl::equal_to<int>, false, eastl::allocator>,
                    unsigned int>::erase((uint)local_168);
            }
            eastl::hashtable_iterator<
                eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                false>::
            operator++((hashtable_iterator<
                        eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                        true, false>*)local_1a8);
            phVar7 = extraout_RDX_00;
        } while (true);
    }

    // 0x1004ce110, 64 bytes, placed by class name
    // PlayerVarDomain::Reset()
    void PlayerVarDomain::Reset() {
        (&field_32)->clear();
        (&field_114896)->clear();
        field_235040 = -1;
        (&field_229760)->clear();
    }

    // 0x1004ce1b0, 144 bytes, placed by class name
    // PlayerVarDomain::GetVarValue(shared_ptr<VarType> const&) const
    long PlayerVarDomain::GetVarValue(shared_ptr* param_1) {
        GameToken* this_00;
        long lVar2;
        VarType* this_01;
        eastl local_38[16];
        undefined1 local_28[16];

        this_00 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)param_1);
        local_28._0_4_ = this_00->GetStatus();
        local_38 = (eastl[16])(&field_114896, (int*)local_28)->find();
        local_28 = (&field_114896)->end();
        if (eastl::operator!=(local_38, (hashtable_iterator_base*)local_28, local_28._8_8_)) {
            lVar2 = local_38->HeapBeginPtr();
            lVar2 = lVar2 + 8;
        } else {
            this_01 = (VarType*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)param_1);
            lVar2 = this_01->GetDefaultValue();
        }
        return lVar2;
    }

    // 0x1004ce330, 240 bytes, placed by class name
    // PlayerVarDomain::SetVarValue(shared_ptr<VarType> const&, VarValue const&)
    void PlayerVarDomain::SetVarValue(shared_ptr* param_1, VarValue* param_2) {
        GameToken* this_00;
        VarValue* this_01;
        long lVar2;
        long lVar3;
        ulonglong* puVar4;
        eastl local_50[16];
        undefined1 local_40[16];
        int local_2c;

        this_00 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)param_1);
        local_2c = this_00->GetStatus();
        this_01 = (VarValue*)eastl::hash_map<
            int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
            eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[]((hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                             eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>,
                             false>*)&field_114896,
                   &local_2c);
        VarValue::operator=(this_01, param_2);
        field_235040 = -1;
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<oldscape::ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<oldscape::ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_50);
        local_40 = (&field_229760)->end();
        if (eastl::operator!=(local_50, (hashtable_iterator_base*)local_40, local_40._8_8_)) {
            lVar2 = local_50->HeapBeginPtr();
            lVar3 = FrameTime::GetCurrentTimeMS();
            *(long*)(lVar2 + 8) = lVar3 + field_16;
            *(undefined1*)(lVar2 + 16) = 0;
        } else {
            lVar2 = FrameTime::GetCurrentTimeMS();
            new (local_40) DelayedVariable(lVar2 + field_16, false);
            puVar4 = (ulonglong*)eastl::hash_map<
                int, DelayedVariable, eastl::hash<int>, eastl::equal_to<int>,
                eastl::fixed_hashtable_allocator<130ul, 32ul, 128ul, 8ul, 0ul, true, eastl::allocator>, false>::
            operator[]((hash_map<int, DelayedVariable, eastl::hash<int>, eastl::equal_to<int>,
                                 eastl::fixed_hashtable_allocator<130ul, 32ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                                 false>*)&field_229760,
                       &local_2c);
            *puVar4 = local_40._0_8_;
            *(bool*)(puVar4 + 1) = local_40[8];
        }
    }

    // 0x1004ce460, 240 bytes, placed by class name
    // PlayerVarDomain::SetVarValueFromServer(shared_ptr<VarType> const&, VarValue const&)
    void PlayerVarDomain::SetVarValueFromServer(shared_ptr* param_1, VarValue* param_2) {
        GameToken* this_00;
        VarValue* this_01;
        long lVar2;
        long lVar3;
        ulonglong* puVar4;
        eastl local_50[16];
        undefined1 local_40[16];
        int local_2c;

        this_00 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)param_1);
        local_2c = this_00->GetStatus();
        this_01 = (VarValue*)eastl::hash_map<
            int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
            eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[]((hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                             eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>,
                             false>*)&field_32,
                   &local_2c);
        VarValue::operator=(this_01, param_2);
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<oldscape::ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<oldscape::ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_50);
        local_40 = (&field_229760)->end();
        if (eastl::operator!=(local_50, (hashtable_iterator_base*)local_40, local_40._8_8_)) {
            lVar2 = local_50->HeapBeginPtr();
            if ((*(long*)(lVar2 + 8) != field_8) && (*(char*)(lVar2 + 16) == '\0')) {
                lVar3 = FrameTime::GetCurrentTimeMS();
                *(long*)(lVar2 + 8) = lVar3 + field_16;
                *(undefined1*)(lVar2 + 16) = 1;
            }
        } else {
            new (local_40) DelayedVariable(field_8, true);
            puVar4 = (ulonglong*)eastl::hash_map<
                int, DelayedVariable, eastl::hash<int>, eastl::equal_to<int>,
                eastl::fixed_hashtable_allocator<130ul, 32ul, 128ul, 8ul, 0ul, true, eastl::allocator>, false>::
            operator[]((hash_map<int, DelayedVariable, eastl::hash<int>, eastl::equal_to<int>,
                                 eastl::fixed_hashtable_allocator<130ul, 32ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                                 false>*)&field_229760,
                       &local_2c);
            *puVar4 = local_40._0_8_;
            *(bool*)(puVar4 + 1) = local_40[8];
        }
    }

    // 0x1004ce550, 96 bytes, placed by class name
    // PlayerVarDomain::GetVarBitValue(shared_ptr<VarBitType> const&) const
    void PlayerVarDomain::GetVarBitValue(shared_ptr* param_1) {
        VarBitType* this_00;
        Logger* this_01;
        undefined8 uVar1;
        VarValue* this_02;
        int iVar2;

        this_00 = (VarBitType*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        this_01 = (Logger*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        uVar1 = this_01->GetLogStreams();
        this_02 = (VarValue*)(*(code*)field_0[2])(this, uVar1);
        iVar2 = this_02->GetInt();
        this_00->GetVarBitValue(iVar2);
    }

    // 0x1004ce610, 176 bytes, placed by class name
    // PlayerVarDomain::SetVarBitValue(shared_ptr<VarBitType> const&, int, bool*)
    void PlayerVarDomain::SetVarBitValue(shared_ptr* param_1, int param_2, bool* param_3) {
        int iVar1;
        Logger* this_00;
        undefined8 uVar2;
        VarBitType* this_01;
        VarValue* this_02;
        VarValue local_50[32];

        this_00 = (Logger*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        uVar2 = this_00->GetLogStreams();
        this_01 = (VarBitType*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        this_02 = (VarValue*)(*(code*)field_0[2])(this, uVar2);
        iVar1 = this_02->GetInt();
        iVar1 = this_01->SetVarBitValue(iVar1, param_2, param_3);
        VarValue::VarValue(local_50, iVar1);
        (*(code*)field_0[3])(this, uVar2, local_50);
        local_50->~VarValue();
    }

    // 0x1004ce6d0, 304 bytes, placed by class name
    // PlayerVarDomain::SetVarBitValueFromServer(shared_ptr<VarBitType> const&, int)
    void PlayerVarDomain::SetVarBitValueFromServer(shared_ptr* param_1, int param_2) {
        undefined1* this_00;
        Logger* this_01;
        GameToken* pGVar1;
        VarValue* pVVar2;
        VarType* this_02;
        VarValue* this_03;
        VarBitType* this_04;
        int iVar4;
        shared_ptr* this_05;
        int local_58[8];
        int local_38;

        this_01 = (Logger*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        this_05 = (shared_ptr*)this_01->GetLogStreams();
        this_00 = &field_32;
        pGVar1 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)this_05);
        local_58[0] = pGVar1->GetStatus();
        pVVar2 = (VarValue*)eastl::hash_map<
            int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
            eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                      eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>*)
                this_00,
            local_58);
        if (pVVar2->IsUndefined() != '\0') {
            this_02 = (VarType*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)this_05);
            pVVar2 = (VarValue*)this_02->GetDefaultValue();
            pGVar1 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)this_05);
            local_58[0] = pGVar1->GetStatus();
            this_03 = (VarValue*)eastl::hash_map<
                int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>::
            operator[](
                (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                          eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>,
                          false>*)this_00,
                local_58);
            VarValue::operator=(this_03, pVVar2);
        }
        this_04 = (VarBitType*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        pGVar1 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)this_05);
        local_38 = pGVar1->GetStatus();
        pVVar2 = (VarValue*)eastl::hash_map<
            int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
            eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>,
                      eastl::fixed_hashtable_allocator<2050ul, 48ul, 2048ul, 8ul, 0ul, true, eastl::allocator>, false>*)
                this_00,
            &local_38);
        iVar4 = pVVar2->GetInt();
        iVar4 = this_04->SetVarBitValue(iVar4, param_2, 0);
        new (local_58) VarValue(iVar4);
        SetVarValueFromServer(this, this_05, (VarValue*)local_58);
        local_58->~VarValue();
    }

    // 0x1004ce840, 160 bytes, placed by class name
    // PlayerVarDomain::GetTotalQuestPoints()
    int PlayerVarDomain::GetTotalQuestPoints() {
        int iVar2;
        shared_ptr* this_00;
        QuestType* this_01;
        PackableArea* this_02;
        uint uVar3;
        int iVar4;
        uint local_2c;

        iVar4 = field_235040;
        if (iVar4 == -1) {
            local_2c = 0;
            ConfigProvider::GetConfigSize<QuestType>(field_24, &local_2c);
            if (local_2c == 0) {
                iVar4 = 0;
            } else {
                uVar3 = 0;
                iVar4 = 0;
                do {
                    this_00 = ConfigProvider::GetConfig<QuestType>(field_24, uVar3, (DataStatus**)0);
                    this_01 = (QuestType*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)this_00);
                    if (this_01->FinishedQuest(this) != '\0') {
                        this_02 = (PackableArea*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)this_00);
                        iVar2 = this_02->GetMaxLevels();
                        iVar4 = iVar4 + iVar2;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < local_2c);
            }
            field_235040 = iVar4;
        }
        return iVar4;
    }

    // 0x1004d1c60, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerVarDomain::~PlayerVarDomain(): jumps straight to the base-object destructor

    // 0x1004d1c70, 32 bytes, deleting destructor, inline, placed by class name
    // PlayerVarDomain::~PlayerVarDomain()
    void PlayerVarDomain::~PlayerVarDomain() {
        ~PlayerVarDomain(this);
        operator_delete(this);
    }

    // 0x1004d40a0, 80 bytes, base-object destructor, inline, placed by class name
    // PlayerVarDomain::~PlayerVarDomain()
    void PlayerVarDomain::~PlayerVarDomain() {
        field_0 = &PTR__PlayerVarDomain_100f01ee8;
        (&field_229760)->~fixed_hash_map();
        (&field_114896)->~fixed_hash_map();
        (&field_32)->~fixed_hash_map();
        ~AutoSingleton();
    }

} // namespace jag::game
