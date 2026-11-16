// libs/game/runetek5/group/PlayerGroupMember.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerGroupMember.h"

namespace jag::game {
    // 0x10017a5a0: the linker folded this into http::HTTPRequest::GetData() const, which has identical code
    PlayerGroupMember::GetKnownVariablesAtJoin() const;

    // 0x1001cdf70: the linker folded this into StaticPointLight::SetRGB(unsigned int), which has identical code
    PlayerGroupMember::SetStatus(PlayerGroupMemberStatus);

    // 0x100429b10: the linker folded this into StaticPointLight::GetRGB() const, which has identical code
    PlayerGroupMember::GetStatus() const;

    // 0x1004ba220, 304 bytes, placed by class name and debug map
    // PlayerGroupMember::UpdateBase(PlayerGroupMember const&)
    void PlayerGroupMember::UpdateBase(PlayerGroupMember* param_1) {
        long lVar1;
        TextRun* this_00;
        Minimap* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_03;
        bool bVar2;
        uint uVar3;
        int* piVar4;
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar5;
        ulong uVar6;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        hashtable_iterator_base* local_38;

        lVar1 = end();
        if (lVar1 != 0) {
            uVar5 = 0;
            uVar6 = 1;
            do {
                this_00 = (TextRun*)Array<PlayerStat, eastl::allocator>::operator[](
                    (Array<PlayerStat, eastl::allocator>*)this, uVar5);
                this_01 = (Minimap*)Array<PlayerStat, eastl::allocator>::operator[](
                    (Array<PlayerStat, eastl::allocator>*)param_1, uVar5);
                uVar3 = this_01->GetLevel();
                this_00->SetXP(uVar3);
                uVar3 = this_00->GetMaxLineWidth();
                this_00->SetGameplayLevel(uVar3);
                uVar5 = end();
                bVar2 = uVar6 < uVar5;
                uVar5 = uVar6;
                uVar6 = (ulong)((int)uVar6 + 1);
            } while (bVar2);
        }
        field_56 = param_1->field_56;
        field_136->Clear();
        this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)param_1->GetMSAASampleCount();
        this_03 = (hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_02);
        local_50 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                    eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = extraout_RDX;
        local_40 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                    eastl::prime_rehash_policy, false, true, true>::end(this_03);
        local_38 = extraout_RDX_00;
        bVar2 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_40, extraout_RDX_00);
        if (bVar2) {
            do {
                piVar4 = (int*)local_50.HeapBeginPtr();
                (field_136, *piVar4, (VarValue*)(piVar4 + 2))->SetVarValueByID();
                eastl::hashtable_iterator<
                    eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false, false>::
                operator++(
                    (hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                        false, false>*)&local_50);
                bVar2 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_40, extraout_RDX_01);
            } while (bVar2);
        }
    }

    // 0x1004baa70, 16 bytes, complete-object constructor, placed by class name
    // PlayerGroupMember::PlayerGroupMember(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, bool, PlayerGroupResourceProvider&): jumps straight to the base-object constructor

    // 0x1004bb090, 800 bytes, base-object constructor, placed by class name
    // PlayerGroupMember::PlayerGroupMember(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, bool, PlayerGroupResourceProvider&)
    void PlayerGroupMember::PlayerGroupMember(PacketT* param_1, bool param_2, PlayerGroupResourceProvider* param_3) {
        PacketT* pPVar1;
        byte bVar2;
        uchar uVar3;
        ushort uVar4;
        short sVar5;
        uint uVar6;
        undefined4 uVar7;
        uint uVar8;
        TextureAtlasReference* this_00;
        ulong uVar9;
        undefined8 uVar10;
        SkillDefaults* this_01;
        long lVar11;
        ulong uVar12;
        TextRun* this_02;
        PlayerSkill* pPVar13;
        VarTypeList* this_03;
        undefined1 local_98[32];
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined1* local_58;
        basic_string* local_48;
        VarContainerSparse* local_40;

        this_00 = (TextureAtlasReference*)(**(code**)(param_3->field_0 + 24))(param_3);
        uVar6 = this_00->GetTextureAtlas();
        new (this) Array<PlayerStat, eastl::allocator>((ulong)uVar6);
        local_48 = (basic_string*)&field_24;
        new (local_48) eastl::string();
        local_58 = field_72;
        new (local_58) VarContainerSparse();
        local_40 = (VarContainerSparse*)field_136;
        VarContainerSparse::VarContainerSparse(local_40);
        if (param_2) {
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, local_48, false);
        }
        pPVar1 = param_1;
        bVar2 = param_1->g1();
        field_56 = bVar2 & 1;
        m_online = (bool)(bVar2 >> 1 & 1);
        bVar2 = pPVar1->g1();
        uVar9 = end();
        if (uVar9 < bVar2) {
            uVar10 = logger::default_logger();
            uVar7 = end();
            logger::Logger::Log(uVar10, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "group/PlayerGroupMember.cpp",
                                24, "Got too many skills in PlayerGroupMember: %d but expected %u", (uint)bVar2, uVar7);
        } else {
            this_01 = (SkillDefaults*)(**(code**)(param_3->field_0 + 24))();
            lVar11 = end();
            if (lVar11 != 0) {
                uVar9 = 0;
                do {
                    this_02 = (TextRun*)Array<PlayerStat, eastl::allocator>::operator[](
                        (Array<PlayerStat, eastl::allocator>*)this, uVar9);
                    uVar6 = (uint)uVar9;
                    pPVar13 = (PlayerSkill*)this_01->GetSkill(uVar6);
                    new (local_98) PlayerStat(pPVar13, true);
                    this_02->m_maxLineWidth = local_98._16_4_;
                    this_02->m_lineSpacing = local_98._20_4_;
                    *(undefined8*)this_02 = local_98._0_8_;
                    this_02->field_8 = local_98._8_8_;
                    if (uVar6 < bVar2) {
                        uVar8 = param_1->g4();
                        this_02->SetXP(uVar8);
                    } else {
                        this_02->SetXP(0);
                    }
                    uVar8 = this_02->GetMaxLineWidth();
                    this_02->SetGameplayLevel(uVar8);
                    uVar9 = (ulong)(uVar6 + 1);
                    uVar12 = end();
                } while (uVar9 < uVar12);
            }
            uVar4 = param_1->g2();
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_8_ = 0;
            local_98._0_8_ = (PlayerSkill*)0;
            local_98[8] = false;
            local_98._9_3_ = 0;
            local_98._12_4_ = 0;
            new (local_98) VarContainerSparse();
            VarContainerSparse::operator=(local_40, (VarContainerSparse*)local_98);
            local_98->~VarContainerSparse();
            if (uVar4 != 0) {
                uVar6 = (uint)uVar4;
                do {
                    std::pair<unsigned int, VarValue>::pair<true, false>((pair<unsigned int, VarValue>*)local_98);
                    this_03 = (VarTypeList*)(**(code**)param_3->field_0)();
                    VarTypeList::DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
                        this_03, (pair*)local_98, param_1);
                    local_40->SetVarValueByID(local_98._0_4_, (VarValue*)(local_98 + 8));
                    local_98->~pair();
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            pPVar1 = param_1;
            sVar5 = param_1->g2();
            m_lastSeenNodeID = sVar5;
            uVar3 = pPVar1->g1();
            m_rank = uVar3;
            bVar2 = pPVar1->g1();
            field_64 = (uint)bVar2;
            uVar3 = pPVar1->g1();
            m_team = uVar3;
        }
    }

} // namespace jag::game
