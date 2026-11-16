// projects/osclient/clientnpc.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "clientnpc.h"

namespace jag::oldscape {
    // 0x100013220: ClientNpc::GetShortIDFromUID(int) has the same machine code as highlight::ShortIDFromNPCKey(long long)

    // 0x10002d860: ClientNpc::IsClientNPC() has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x1000fc640
    bool ClientNpc::Ready() const {
        bool bVar1 = field_1024 == nullptr;
        return !bVar1;
    }

    // 0x1001106d0
    unsigned long ClientNpc::HasAnyOverlays(int arg1, int arg2) const {
        unsigned int uVar2;
        NpcType* pNVar3;
        uint64_t unaff_R14;
        unsigned long uVar4;

        bool cVar1 = Ready();
        if (!cVar1) {
            uVar4 = 0;
        } else {
            pNVar3 = (NpcType*)field_1024.operator->();
            pNVar3 = pNVar3->GetMultiNpcOrThis();
            cVar1 = HasHeadbar();
            uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (!cVar1) {
                cVar1 = HasHitmark(arg1);
                if (!cVar1) {
                    cVar1 = HasScriptedOverlays();
                    if ((!cVar1) && (field_1040 != arg2)) {
                        cVar1 = field_112.empty();
                        if (cVar1) {
                            cVar1 = (&field_1080)->operator_cast_to_bool();
                            if (!cVar1) {
                                uVar2 = pNVar3->HasHeadIcons();
                                uVar4 = (unsigned long)uVar2;
                            }
                        }
                    }
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100110d30
    void ClientNpc::GetHeadIconGraphics() const {
        if ((&field_1080)->operator_cast_to_bool() == '\0') {
            ((Terrain*)field_1024.operator->())->GetWaterHeights();
        } else {
            ((Layout*)field_1080.operator->())->SSOBeginPtr();
        }
    }

    // 0x100110d80
    void ClientNpc::GetHeadIconIndices() const {
        if ((&field_1080)->operator_cast_to_bool() == '\0') {
            ((Model*)field_1024.operator->())->GetBatchList();
        } else {
            ((JagException*)field_1080.operator->())->GetCallstackRaw();
        }
    }

    // 0x100113bb0
    void ClientNpc::SetHeadIcon(int arg1, int arg2, int arg3) {
        ReturnValue local_38;

        uint8_t* this_00 = &field_1080;
        if (this_00->operator_cast_to_bool() == '\0') {
            local_38 = std::make_unique<configdecoder::NPCHeadIconCustomisation, shared_ptr<configdecoder::NpcType>&>(
                field_1024);
            *this_00 = local_38;
        }
        ((NPCHeadIconCustomisation*)(*this_00).operator->())->SetSlot(arg1, arg2, arg3);
    }

    // 0x100119910
    void ClientNpc::MoveCode(int arg1, signed char arg2) {
        uint8_t uVar1;
        uint32_t uVar2;
        array<int, 10ul>* this_00;
        long lVar3;
        uint32_t* puVar4;
        uint64_t in_register_00000011;
        unsigned long arg1_01;
        unsigned long arg1_02;
        bool bVar8;
        ReturnValue local_78;
        array<signed char, 10ul>* local_60;
        uint32_t local_40;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        uint8_t* puVar5 = &field_444;
        int* local_58 = (int*)(*puVar5)[0];
        int iVar6 = *local_58;
        uint8_t* this_01 = &field_484;
        int* local_50 = (int*)(*this_01)[0];
        int local_34 = *local_50;
        switch (arg1) {
        case 0:
            iVar6 = iVar6 - 1;
        case 1:
            local_34 = local_34 + 1;
            break;
        case 2:
            iVar6 = iVar6 + 1;
            local_34 = local_34 + 1;
            break;
        case 3:
            iVar6 = iVar6 - 1;
            break;
        case 4:
            iVar6 = iVar6 + 1;
            break;
        case 5:
            iVar6 = iVar6 - 1;
        case 6:
        switchD_100119973_caseD_6:
            local_34 = local_34 - 1;
            break;
        case 7:
            iVar6 = iVar6 + 1;
            goto switchD_100119973_caseD_6;
        }
        int arg1_00 = field_372;
        array<int, 10ul>* local_48 = (array<int, 10ul>*)puVar5;
        int local_38 = iVar6;
        if (arg1_00 == -1) {
            bVar8 = false;
        } else {
            local_78 = configdecoder::SeqType::List(arg1_00);
            lVar3 = local_78.operator->();
            bVar8 = *(int*)(lVar3 + 252) == 1;
            if (arg1_00 != -1) {
            }
        }
        if (bVar8) {
            field_372 = -1;
        }
        if ((int)field_440 < 9) {
            field_440 = field_440 + 1;
        }
        unsigned int uVar7 = field_440;
        array<signed char, 10ul>* this_02 = (array<signed char, 10ul>*)&field_524;
        array<int, 10ul>* local_68 = (array<int, 10ul>*)this_01;
        if (0 < (int)uVar7) {
            arg1_01 = (unsigned long)uVar7;
            local_60 = this_02;
            do {
                uVar7 = uVar7 - 1;
                arg1_02 = (unsigned long)uVar7;
                puVar4 = (uint32_t*)(*local_48)[arg1_02];
                uVar2 = *puVar4;
                puVar4 = (uint32_t*)(*local_48)[arg1_01];
                this_02 = local_60;
                this_00 = local_68;
                *puVar4 = uVar2;
                puVar4 = (uint32_t*)(*local_68)[arg1_02];
                local_40 = *puVar4;
                puVar4 = (uint32_t*)(*this_00)[arg1_01];
                *puVar4 = local_40;
                puVar5 = (uint8_t*)(*this_02)[arg1_02];
                uVar1 = *puVar5;
                puVar5 = (uint8_t*)(*this_02)[arg1_01];
                *puVar5 = uVar1;
                bVar8 = 1 < (long)arg1_01;
                arg1_01 = arg1_01 - 1;
            } while (bVar8);
        }
        *local_58 = local_38;
        *local_50 = local_34;
        puVar5 = (uint8_t*)(*this_02)[0];
        *puVar5 = (char)local_3c;
    }

    // 0x100119d90
    void ClientNpc::Teleport(int arg1, int arg2, bool arg3) {
        uint32_t uVar1;
        array<int, 10ul>* this_00;
        long lVar2;
        int* piVar3;
        uint32_t* puVar5;
        uint8_t* puVar6;
        unsigned int uVar8;
        unsigned long arg1_00;
        array<signed char, 10ul>* this_01;
        unsigned long arg1_01;
        bool bVar9;
        ReturnValue local_78;
        array<int, 10ul>* local_68;
        array<signed char, 10ul>* local_60;
        int* local_58;
        int* local_50;
        array<int, 10ul>* local_48;
        uint32_t local_38;

        int iVar7 = field_372;
        if (iVar7 == -1) {
            bVar9 = false;
        } else {
            local_78 = configdecoder::SeqType::List(iVar7);
            lVar2 = local_78.operator->();
            bVar9 = *(int*)(lVar2 + 252) == 1;
            if (iVar7 != -1) {
            }
        }
        if (bVar9) {
            field_372 = -1;
        }
        if (!arg3) {
            local_48 = (array<int, 10ul>*)&field_444;
            piVar3 = (int*)(*local_48)[0];
            local_68 = (array<int, 10ul>*)&field_484;
            iVar7 = arg1 - *piVar3;
            local_50 = (int*)(*local_68)[0];
            this_00 = local_68;
            if (((iVar7 + 8U < 17) && (-9 < arg2 - *local_50)) && (arg2 - *local_50 < 9)) {
                if ((int)field_440 < 9) {
                    field_440 = field_440 + 1;
                }
                uVar8 = field_440;
                this_01 = (array<signed char, 10ul>*)&field_524;
                local_58 = piVar3;
                if (0 < (int)uVar8) {
                    arg1_01 = (unsigned long)uVar8;
                    local_60 = this_01;
                    do {
                        uVar8 = uVar8 - 1;
                        arg1_00 = (unsigned long)uVar8;
                        puVar5 = (uint32_t*)(*local_48)[arg1_00];
                        uVar1 = *puVar5;
                        puVar5 = (uint32_t*)(*local_48)[arg1_01];
                        this_01 = local_60;
                        *puVar5 = uVar1;
                        puVar5 = (uint32_t*)(*this_00)[arg1_00];
                        local_38 = *puVar5;
                        puVar5 = (uint32_t*)(*this_00)[arg1_01];
                        *puVar5 = local_38;
                        puVar6 = (uint8_t*)(*this_01)[arg1_00];
                        local_38 = (((uint32_t)local_38._1_3_ << 8) | (uint8_t)(*puVar6));
                        puVar6 = (uint8_t*)(*this_01)[arg1_01];
                        *puVar6 = (uint8_t)local_38;
                        bVar9 = 1 < (long)arg1_01;
                        arg1_01 = arg1_01 - 1;
                    } while (bVar9);
                }
                *local_58 = arg1;
                *local_50 = arg2;
                puVar6 = (uint8_t*)(*this_01)[0];
                *puVar6 = 1;
                return;
            }
        }
        field_440 = 0;
        field_536 = 0;
        piVar3 = &field_444[0];
        *piVar3 = arg1;
        int* piVar4 = &field_484[0];
        *piVar4 = arg2;
        iVar7 = field_40 * 64;
        field_24 = *piVar3 * 128 + iVar7;
        field_28 = *piVar4 * 128 + iVar7;
    }

    // 0x10011a550
    void ClientNpc::ClearHeadIconCustomisation() {
        if ((&field_1080)->operator_cast_to_bool() != '\0') {
            field_1080.reset(nullptr);
        }
    }

    // 0x10011a830
    void ClientNpc::SetHeadIcons(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2) {
        ReturnValue local_38;

        uint8_t* this_00 = &field_1080;
        if (this_00->operator_cast_to_bool() == '\0') {
            local_38 = std::make_unique<configdecoder::NPCHeadIconCustomisation, shared_ptr<configdecoder::NpcType>&>(
                field_1024);
            *this_00 = local_38;
        }
        ((NPCHeadIconCustomisation*)(*this_00).operator->())->SetSlots(arg1, arg2);
    }

    // 0x10011c9e0
    auto ClientNpc::GetTempModel(int arg1) {
        unsigned int uVar1;
        int iVar5;
        long lVar7;
        SeqType* seqType1;
        SeqType* seqType2;
        long* plVar8;
        ReturnValue local_80;
        ReturnValue local_70;
        PlayerModel* local_50;

        uint8_t* objType = &field_1024;
        bool bVar3 = *objType == nullptr;
        if (bVar3) {
            return auto();
        }
        if ((field_372 == -1) || (field_384 != 0)) {
            local_70 = shared_ptr();
        } else {
            local_70 = configdecoder::SeqType::List(field_372);
        }
        if ((field_356 == -1) || ((field_356 == field_48 && (bVar3 = local_70 == nullptr, !bVar3)))) {
            local_80 = shared_ptr();
        } else {
            local_80 = configdecoder::SeqType::List(field_356);
        }
        void* arg2 = nullptr;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        uint8_t* npcTypeCustomisation = &field_1072;
        bVar3 = npcTypeCustomisation != arg2;
        if (bVar3) {
            if (((MidiTask*)(*npcTypeCustomisation).operator->())->HasError() != '\0') {
                lVar7 = Client::Instance()->field_52016.operator->();
                local_50 = (PlayerModel*)(*((lVar7 + 1008))).operator->();
                seqType1 = (SeqType*)local_70.end();
                uVar1 = field_376;
                seqType2 = (SeqType*)local_80.end();
                local_60 = local_50->GetTempModel(seqType1, uVar1, seqType2, field_360);
                local_40 = local_60;
                iVar5 = arg1;
                goto LAB_10011cbca;
            }
        }
        local_50 = (PlayerModel*)(*objType).operator->();
        iVar5 = local_70.end();
        uVar1 = field_376;
        int arg4 = local_80.end();
        unsigned int uVar2 = field_360;
        npcTypeCustomisation->get();
        auto local_60 = configdecoder::NpcType::GetTempModel(local_50, iVar5, (SeqType*)(unsigned long)uVar1, arg4,
                                                             (NPCTypeCustomisation*)(unsigned long)uVar2);
        local_40 = local_60;
        iVar5 = arg1;
    LAB_10011cbca:
        bVar3 = local_40 == nullptr;
        if (bVar3) {
            new (&result) shared_ptr();
        } else {
            plVar8 = (long*)local_40.operator->();
            (**(void (**)(...))(*plVar8 + 64))(plVar8);
            lVar7 = local_40.operator->();
            field_424 = *(uint32_t*)(lVar7 + 8);
            if (((field_559 != '\0') && (field_548 <= iVar5)) && (iVar5 < field_552)) {
                plVar8 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar8 + 176))(plVar8, (int)field_556, (int)field_557, (int)field_558, field_559);
            }
            CombineWithSpotAnim(local_40);
            lVar7 = (*objType).operator->();
            if (*(int*)(lVar7 + 40) == 1) {
                lVar7 = local_40.operator->();
                *(uint8_t*)(lVar7 + 16) = 1;
            }
            result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        }
        return result;
    }

    // 0x10011cde0
    auto ClientNpc::GetDisplayName() const {
        ReturnValue local_38;

        eastl::string* this_01 = (eastl::string*)&field_992;
        bool cVar1 = this_01->empty();
        if (!cVar1)
            goto LAB_10011ce77;
        uint8_t* this_02 = &field_1024;
        long lVar2 = (*this_02).operator->();
        cVar1 = ((lVar2 + 488))->empty();
        if (!cVar1) {
            local_38 = ((NpcType*)(*this_02).operator->())->GetMultiNpc();
            lVar2 = local_38.end();
        LAB_10011ce5a:
        } else {
            lVar2 = 0;
            if (!cVar1)
                goto LAB_10011ce5a;
        }
        if (lVar2 == 0) {
            lVar2 = (*this_02).operator->();
        }
        this_01 = (eastl::string*)(lVar2 + 8);
    LAB_10011ce77:
        return auto(*this_01);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1000fcd80
    shared_ptr_if_not_array<oldscape::DesktopApplicationContext>::type
    make_shared<oldscape::DesktopApplicationContext, std::unique_ptr<Steam>&>(std::unique_ptr<Steam>& steam) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DesktopApplicationContext* local_30[2];

        auto arg1 = aligned_alloc(128, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::DesktopApplicationContext>::type result;
        } else {
            local_30[0] = placement_new<oldscape::DesktopApplicationContext, std::unique_ptr<Steam>&>(
                (void*)((long)arg1 + 32), steam);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::DesktopApplicationContext>, int,
                              oldscape::DesktopApplicationContext*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
