// libs/oldscape/rs2lib/configdecoder/IdkType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "IdkType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016c03f0
    int64_t IdkType::m_pConfigClient;

    // 0x1016c03f8
    int64_t IdkType::m_pModels;

    // 0x1016c0400
    int64_t IdkType::m_numDefinitions;

    // 0x1016c0408
    LRUHashCache<IdkType, 64ul, 65ul, false, unsigned long long> IdkType::m_recentUse;

    // 0x100268ce0
    void IdkType::Init(jagex3::Js5* js51, jagex3::Js5* js52) {
        m_pConfigClient = js51;
        m_pModels = js52;
        m_numDefinitions = js51->GetFileIdLimit(3);
    }

    // 0x100268d10
    auto IdkType::List(int arg1) {
        IdkType* idkType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 3, arg1, nullptr);
            make_shared<IdkType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                idkType = (IdkType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(idkType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100268fa0
    void IdkType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x1002690d0
    void IdkType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        uint16_t uVar3;
        unsigned int* puVar4;
        uint16_t* puVar5;
        unsigned long uVar6;
        unsigned long uVar7;

        switch (arg2) {
        case 1:
            bVar1 = packetJ.g1();
            field_0 = (unsigned int)bVar1;
            break;
        case 2:
            bVar1 = packetJ.g1();
            field_8.set_max_size((unsigned long)bVar1, 5);
            if (bVar1 != 0) {
                uVar6 = 0;
                do {
                    uVar2 = packetJ.g2();
                    puVar4 = &field_8[uVar6];
                    *puVar4 = (unsigned int)uVar2;
                    uVar6 = uVar6 + 1;
                } while (bVar1 != uVar6);
            }
            break;
        case 3:
            field_148 = 1;
            break;
        default:
            if (arg2 - 60U < 10) {
                uVar2 = packetJ.g2();
                (&field_128)[arg2 - 60U] = (unsigned int)uVar2;
            } else {
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                          "configdecoder/IdkType.cpp",
                          104, "Error unrecognised .idk config code: %i", arg2);
            }
            break;
        case 40:
            bVar1 = packetJ.g1();
            uVar6 = (unsigned long)bVar1;
            field_32.set_max_size(uVar6, 5);
            field_56.set_max_size(uVar6, 5);
            if (bVar1 != 0) {
                uVar7 = 0;
                do {
                    uVar3 = packetJ.g2();
                    puVar5 = &field_32[uVar7];
                    *puVar5 = uVar3;
                    uVar3 = packetJ.g2();
                    puVar5 = &field_56[uVar7];
                    *puVar5 = uVar3;
                    uVar7 = uVar7 + 1;
                } while (uVar6 != uVar7);
            }
            break;
        case 41:
            bVar1 = packetJ.g1();
            uVar6 = (unsigned long)bVar1;
            field_80.set_max_size(uVar6, 5);
            field_104.set_max_size(uVar6, 5);
            if (bVar1 != 0) {
                uVar7 = 0;
                do {
                    uVar3 = packetJ.g2();
                    puVar5 = &field_80[uVar7];
                    *puVar5 = uVar3;
                    uVar3 = packetJ.g2();
                    puVar5 = &field_104[uVar7];
                    *puVar5 = uVar3;
                    uVar7 = uVar7 + 1;
                } while (uVar6 != uVar7);
            }
        }
    }

    // 0x100269390
    unsigned long IdkType::CheckModel() {
        int* piVar2;
        int* piVar3;
        uint64_t unaff_RBX;

        uint8_t* this_00 = &field_8;
        bool cVar1 = this_00->empty();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            piVar2 = (int*)this_00->data();
            piVar3 = (int*)this_00->end();
            if (piVar2 != piVar3) {
                uVar4 = 1;
                do {
                    cVar1 = m_pModels->RequestDownload(*piVar2, 0);
                    if (!cVar1) {
                        uVar4 = 0;
                    }
                    piVar2 = piVar2 + 1;
                } while (piVar2 != piVar3);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100269410
    auto IdkType::GetModelNoCheck() {
        uint8_t* this_00;
        short sVar2;
        Js5* js5;
        unsigned long uVar4;
        long lVar5;
        int* piVar6;
        shared_ptr<dash3d::ModelUnlit>* psVar7;
        unsigned long uVar8;
        long* plVar9;
        short* psVar10;
        uint8_t local_78[24];
        vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL> local_60[24];
        eastl local_48;

        uint8_t* puVar1 = &field_8;
        IdkType* local_38 = this;
        if (!(puVar1->empty())) {
            local_78._16_8_ = &result;
            uVar4 = puVar1->end();
            eastl::destruct<highlight::NpcUID*>(&local_48);
            new (local_60) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(uVar4, local_48);
            lVar5 = puVar1->end();
            if (lVar5 != 0) {
                uVar4 = 0;
                do {
                    js5 = m_pModels;
                    piVar6 = (int*)(*puVar1)[uVar4];
                    local_48.Load(*js5, *piVar6, 0, false);
                    psVar7 = (shared_ptr<dash3d::ModelUnlit>*)(*local_60)[uVar4];
                    *psVar7 = local_48;
                    uVar4 = uVar4 + 1;
                    uVar8 = puVar1->end();
                } while (uVar4 < uVar8);
            }
            local_48 = shared_ptr();
            lVar5 = local_60->size();
            if (lVar5 == 1) {
                psVar7 = (shared_ptr<dash3d::ModelUnlit>*)(*local_60)[0];
                local_48 = *psVar7;
            } else {
                local_78->Combine(*local_60);
                local_48 = *local_78;
            }
            puVar1 = &local_38->field_32;
            if (!(puVar1->empty())) {
                lVar5 = puVar1->end();
                if (lVar5 != 0) {
                    this_00 = &local_38->field_56;
                    uVar4 = 0;
                    do {
                        plVar9 = (long*)local_48.operator->();
                        psVar10 = (short*)(*puVar1)[uVar4];
                        sVar2 = *psVar10;
                        psVar10 = (short*)(*this_00)[uVar4];
                        (**(void (**)(...))(*plVar9 + 160))(plVar9, (int)sVar2, (int)*psVar10);
                        uVar4 = uVar4 + 1;
                        uVar8 = puVar1->end();
                    } while (uVar4 < uVar8);
                }
            }
            puVar1 = &local_38->field_80;
            if (!(puVar1->empty())) {
                lVar5 = puVar1->end();
                if (lVar5 != 0) {
                    local_38 = (IdkType*)&local_38->field_104;
                    uVar4 = 0;
                    do {
                        plVar9 = (long*)local_48.operator->();
                        psVar10 = (short*)(*puVar1)[uVar4];
                        sVar2 = *psVar10;
                        psVar10 = (short*)(*local_38)[uVar4];
                        (**(void (**)(...))(*plVar9 + 168))(plVar9, (int)sVar2, (int)*psVar10);
                        uVar4 = uVar4 + 1;
                        uVar8 = puVar1->end();
                    } while (uVar4 < uVar8);
                }
            }
            &result = (ReturnValue*)local_78._16_8_;
            local_78._16_8_->shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        } else {
            auto result;
        }
        return result;
    }

    // 0x1002696b0
    unsigned long IdkType::CheckHead() {
        bool cVar1;
        uint64_t unaff_R12;

        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)1);
        long lVar2 = 0;
        do {
            if ((&field_128)[lVar2] != -1) {
                cVar1 = m_pModels->RequestDownload((&field_128)[lVar2], 0);
                uVar3 = uVar3 & 255;
                if (!cVar1) {
                    uVar3 = 0;
                }
            }
            lVar2 = lVar2 + 1;
        } while (lVar2 != 5);
        return uVar3 & 4294967041;
    }

    // 0x100269720
    IdkType* IdkType::GetHeadNoCheck() {
        short sVar2;
        int arg2;
        shared_ptr<dash3d::ModelUnlit>* this_00;
        long* plVar4;
        short* psVar5;
        unsigned long uVar6;
        unsigned long uVar8;
        long in_RSI;
        uint8_t local_68[40];
        Array<short>* local_40;

        local_68->destruct<highlight::NpcUID*>();
        new ((local_68 + 16)) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(5, *local_68);
        long lVar7 = 0;
        int iVar9 = 0;
        do {
            arg2 = *(int*)(in_RSI + 128 + lVar7 * 4);
            if (arg2 != -1) {
                local_68->Load(*m_pModels, arg2, 0, false);
                this_00 = (shared_ptr<dash3d::ModelUnlit>*)(*((local_68 + 16)))[(long)iVar9];
                *this_00 = *local_68;
                iVar9 = iVar9 + 1;
            }
            lVar7 = lVar7 + 1;
        } while (lVar7 != 5);
        Combine(*((local_68 + 16)));
        Array<game::VarValue>* pAVar1 = (Array<game::VarValue>*)(in_RSI + 32);
        if (!(pAVar1->empty())) {
            lVar7 = pAVar1->end();
            if (lVar7 != 0) {
                local_40 = (Array<short>*)(in_RSI + 56);
                uVar8 = 0;
                do {
                    plVar4 = (long*)(*this).operator->();
                    psVar5 = (short*)(*pAVar1)[uVar8];
                    sVar2 = *psVar5;
                    psVar5 = (short*)(*local_40)[uVar8];
                    (**(void (**)(...))(*plVar4 + 160))(plVar4, (int)sVar2, (int)*psVar5);
                    uVar8 = uVar8 + 1;
                    uVar6 = pAVar1->end();
                } while (uVar8 < uVar6);
            }
        }
        pAVar1 = (Array<game::VarValue>*)(in_RSI + 80);
        if (!(pAVar1->empty())) {
            lVar7 = pAVar1->end();
            if (lVar7 != 0) {
                uVar8 = 0;
                do {
                    plVar4 = (long*)(*this).operator->();
                    psVar5 = (short*)(*pAVar1)[uVar8];
                    sVar2 = *psVar5;
                    psVar5 = (short*)(*((in_RSI + 104)))[uVar8];
                    (**(void (**)(...))(*plVar4 + 168))(plVar4, (int)sVar2, (int)*psVar5);
                    uVar8 = uVar8 + 1;
                    uVar6 = pAVar1->end();
                } while (uVar8 < uVar6);
            }
        }
        ((local_68 + 16))->~vector();
        return this;
    }

    // 0x100269910
    void IdkType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100268ed0
    shared_ptr_if_not_array<oldscape::configdecoder::IdkType>::type make_shared<oldscape::configdecoder::IdkType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        IdkType* local_28[2];

        auto arg1 = aligned_alloc(184, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::IdkType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::IdkType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::IdkType>, int,
                              oldscape::configdecoder::IdkType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10026b540
    oldscape::rs2lib::social::ClanChannelUser* placement_new<oldscape::rs2lib::social::ClanChannelUser>(void* arg1) {
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
        new (arg1) oldscape::rs2lib::social::ClanChannelUser();
        return arg1;
    }

    // 0x10026b580
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>, int,
                  oldscape::rs2lib::social::ClanChannelUser*&>(void* arg1, int&& arg2,
                                                               oldscape::rs2lib::social::ClanChannelUser*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
