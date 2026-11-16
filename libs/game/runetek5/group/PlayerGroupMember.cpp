// libs/game/runetek5/group/PlayerGroupMember.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerGroupMember.h"

namespace jag::game {
    // 0x10017a5a0: PlayerGroupMember::GetKnownVariablesAtJoin() const has the same machine code as http::HTTPRequest::GetData() const

    // 0x1001cdf70: PlayerGroupMember::SetStatus(PlayerGroupMemberStatus) has the same machine code as StaticPointLight::SetRGB(unsigned int)

    // 0x100429b10: PlayerGroupMember::GetStatus() const has the same machine code as StaticPointLight::GetRGB() const

    // 0x1004ba220
    void PlayerGroupMember::UpdateBase(const PlayerGroupMember& playerGroupMember) {
        bool bVar1;
        TextRun* this_00;
        int* piVar4;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;
        unsigned long uVar5;
        unsigned long uVar6;

        if (end() != 0) {
            uVar5 = 0;
            uVar6 = 1;
            do {
                this_00 = (TextRun*)(*this)[uVar5];
                this_00->SetXP(playerGroupMember[uVar5]->GetLevel());
                this_00->SetGameplayLevel(this_00->GetMaxLineWidth());
                uVar5 = end();
                bVar1 = uVar6 < uVar5;
                uVar5 = uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (bVar1);
        }
        field_56 = playerGroupMember.field_56;
        m_pKnownVariablesAtJoin->Clear();
        auto this_02 = playerGroupMember.GetMSAASampleCount();
        auto this_03 = this_02->second();
        uint64_t local_50 = this_03->begin();
        uint64_t local_48 = extraout_RDX;
        uint64_t local_40 = this_03->end();
        uint64_t local_38 = extraout_RDX_00;
        bool cVar3 = local_50 != local_40;
        if (cVar3) {
            do {
                piVar4 = (int*)local_50.HeapBeginPtr();
                m_pKnownVariablesAtJoin->SetVarValueByID(*piVar4, *((piVar4 + 2)));
                ++local_50;
                cVar3 = local_50 != local_40;
            } while (cVar3);
        }
    }

    // 0x1004bb090
    PlayerGroupMember::PlayerGroupMember(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1, bool arg2,
                                         PlayerGroupResourceProvider& playerGroupResourceProvider) {
        unsigned char uVar3;
        unsigned short uVar4;
        uint32_t uVar7;
        Logger* this_01;
        SkillDefaults* this_02;
        unsigned long uVar10;
        TextRun* this_03;
        PlayerSkill* playerSkill;
        uint8_t local_98[32];
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;

        unsigned int uVar6 = ((TextureAtlasReference*)(**(void (**)(...))(playerGroupResourceProvider.field_0 + 24))(
                                  playerGroupResourceProvider))
                                 ->GetTextureAtlas();
        new (this) Array<PlayerStat>((unsigned long)uVar6);
        eastl::string* local_48 = (eastl::string*)&field_24;
        new (local_48) eastl::string();
        uint8_t* local_58 = field_72;
        new (local_58) VarContainerSparse();
        VarContainerSparse* local_40 = (VarContainerSparse*)m_pKnownVariablesAtJoin;
        new (local_40) VarContainerSparse();
        if (arg2) {
            arg1.gStringCP1252ToUTF8<eastl::string>(local_48, false);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL> _>* pPVar1 = arg1;
        uint8_t bVar2 = arg1.g1();
        field_56 = bVar2 & 1;
        m_online = (bool)(bVar2 >> 1 & 1);
        bVar2 = pPVar1->g1();
        unsigned long uVar8 = end();
        if (uVar8 < bVar2) {
            this_01 = logger::default_logger();
            uVar7 = end();
            this_01->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                         "PlayerGroupMember.cpp",
                         24, "Got too many skills in PlayerGroupMember: %d but expected %u", (unsigned int)bVar2,
                         uVar7);
        } else {
            this_02 = (SkillDefaults*)(**(void (**)(...))(playerGroupResourceProvider.field_0 + 24))();
            if (end() != 0) {
                uVar8 = 0;
                do {
                    this_03 = (TextRun*)(*this)[uVar8];
                    uVar6 = (unsigned int)uVar8;
                    playerSkill = this_02->GetSkill(uVar6);
                    new (local_98) PlayerStat(*playerSkill, true);
                    this_03->m_maxLineWidth = local_98._16_4_;
                    this_03->field_20 = local_98._20_4_;
                    *(uint64_t*)this_03 = local_98._0_8_;
                    this_03->field_8 = local_98._8_8_;
                    if (uVar6 < bVar2) {
                        this_03->SetXP(arg1.g4());
                    } else {
                        this_03->SetXP(0);
                    }
                    this_03->SetGameplayLevel(this_03->GetMaxLineWidth());
                    uVar8 = (unsigned long)(uVar6 + 1);
                    uVar10 = end();
                } while (uVar8 < uVar10);
            }
            uVar4 = arg1.g2();
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_8_ = 0;
            local_98._0_8_ = nullptr;
            local_98[8] = false;
            local_98._9_3_ = 0;
            local_98._12_4_ = 0;
            new (local_98) VarContainerSparse();
            *local_40 = *local_98;
            if (uVar4 != 0) {
                uVar6 = (unsigned int)uVar4;
                do {
                    local_98->pair<true, false>();
                    ((VarTypeList*)(**(void (**)(...))playerGroupResourceProvider.field_0)())
                        ->DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(*local_98, arg1);
                    local_40->SetVarValueByID(local_98._0_4_, *((local_98 + 8)));
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            pPVar1 = arg1;
            m_lastSeenNodeID = arg1.g2();
            uVar3 = pPVar1->g1();
            m_rank = uVar3;
            bVar2 = pPVar1->g1();
            m_status = (unsigned int)bVar2;
            uVar3 = pPVar1->g1();
            m_team = uVar3;
        }
    }

} // namespace jag::game
