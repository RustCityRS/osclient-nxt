// libs/oldscape/rs2lib/configdecoder/SpotType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "SpotType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016747c0
    int64_t SpotType::m_pConfigClient;

    // 0x1016747c8
    int64_t SpotType::m_pModels;

    // 0x1016747d0
    LRUHashCache<SpotType, 64ul, 65ul, false, unsigned long long> SpotType::m_recentUse;

    // 0x101675cd0
    LRUHashCache<dash3d::ModelLit, 30ul, 31ul, false, unsigned long long> SpotType::m_modelCache;

    // 0x1002360a0
    void SpotType::Init(jagex3::Js5* js51, jagex3::Js5* js52) {
        m_pConfigClient = js51;
        m_pModels = js52;
    }

    // 0x1002360c0
    auto SpotType::List(int arg1) {
        int* piVar2;
        SpotType* spotType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 13, arg1, nullptr);
            make_shared<SpotType>(&local_40);
            result = local_40;
            piVar2 = (int*)(result).operator->();
            *piVar2 = arg1;
            if (local_30 != nullptr) {
                spotType = (SpotType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(spotType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100236360
    void SpotType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100236490
    void SpotType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        uint16_t uVar3;
        uint16_t* puVar4;
        unsigned long uVar5;
        unsigned long uVar6;

        switch (arg2) {
        case 1:
            uVar2 = packetJ.g2();
            field_4 = (unsigned int)uVar2;
            break;
        case 2:
            uVar2 = packetJ.g2();
            field_8 = (unsigned int)uVar2;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/SpotType.cpp",
                      108, "Error unrecognised .spotanim config code: %i", arg2);
            break;
        case 4:
            uVar2 = packetJ.g2();
            field_112 = (unsigned int)uVar2;
            break;
        case 5:
            uVar2 = packetJ.g2();
            field_116 = (unsigned int)uVar2;
            break;
        case 6:
            uVar2 = packetJ.g2();
            field_120 = (unsigned int)uVar2;
            break;
        case 7:
            bVar1 = packetJ.g1();
            field_124 = (unsigned int)bVar1;
            break;
        case 8:
            bVar1 = packetJ.g1();
            field_128 = (unsigned int)bVar1;
            break;
        case 40:
            bVar1 = packetJ.g1();
            uVar6 = (unsigned long)bVar1;
            field_16.set_max_size(uVar6, 5);
            field_40.set_max_size(uVar6, 5);
            if (bVar1 != 0) {
                uVar5 = 0;
                do {
                    uVar3 = packetJ.g2();
                    puVar4 = &field_16[uVar5];
                    *puVar4 = uVar3;
                    uVar3 = packetJ.g2();
                    puVar4 = &field_40[uVar5];
                    *puVar4 = uVar3;
                    uVar5 = uVar5 + 1;
                } while (uVar6 != uVar5);
            }
            break;
        case 41:
            bVar1 = packetJ.g1();
            uVar6 = (unsigned long)bVar1;
            field_64.set_max_size(uVar6, 5);
            field_88.set_max_size(uVar6, 5);
            if (bVar1 != 0) {
                uVar5 = 0;
                do {
                    uVar3 = packetJ.g2();
                    puVar4 = &field_64[uVar5];
                    *puVar4 = uVar3;
                    uVar3 = packetJ.g2();
                    puVar4 = &field_88[uVar5];
                    *puVar4 = uVar3;
                    uVar5 = uVar5 + 1;
                } while (uVar6 != uVar5);
            }
        }
    }

    // 0x100236750
    auto SpotType::GetTempModel2(int arg1) {
        SeqType* this_00;
        ModelLit* modelLit;
        long* plVar2;
        ReturnValue local_70;
        ReturnValue local_60;
        ReturnValue local_50;

        GetBaseModel(&local_60, this);
        if (local_60 == nullptr) {
            auto result;
            goto LAB_10023692f;
        }
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        if ((field_8 == 4294967295) || (arg1 == -1)) {
            plVar2 = (long*)local_60.operator->();
            (**(void (**)(...))(*plVar2 + 80))(&local_50, plVar2, 1, 2);
            local_40 = local_50;
            if (field_112 == 128)
                goto LAB_10023684e;
        LAB_100236858:
            plVar2 = (long*)local_40.operator->();
            (**(void (**)(...))(*plVar2 + 168))(plVar2, field_112, field_116);
        } else {
            local_70 = SeqType::List(field_8);
            this_00 = (SeqType*)local_70.operator->();
            modelLit = (ModelLit*)*local_60;
            local_50 = this_00->AnimateModel(*modelLit, arg1, 2);
            local_40 = local_50;
            if (field_112 != 128)
                goto LAB_100236858;
        LAB_10023684e:
            if (field_116 != 128)
                goto LAB_100236858;
        }
        if (field_120 != 0) {
            if (field_120 == 90) {
                plVar2 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar2 + 128))(plVar2);
            }
            if (field_120 == 180) {
                plVar2 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar2 + 128))(plVar2);
                plVar2 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar2 + 128))(plVar2);
            }
            if (field_120 == 270) {
                plVar2 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar2 + 128))(plVar2);
                plVar2 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar2 + 128))(plVar2);
                plVar2 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar2 + 128))(plVar2);
            }
        }
        result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
    LAB_10023692f:
        return result;
    }

    // 0x1002369a0
    auto SpotType::GetBaseModel() {
        uint8_t* puVar1;
        uint8_t* puVar2;
        short sVar3;
        long lVar6;
        long* plVar7;
        short* psVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        shared_ptr<dash3d::ModelLit> local_78;
        ReturnValue* local_68;
        uint8_t local_50[32];

        local_50._16_8_ = (int64_t)field_0;
        if (dash3d::g_usingRSeven != '\0') {
            local_50._16_8_ = local_50._16_8_ | 4294967296;
        }
        auto groundDecor = m_modelCache.Find(*((local_50 + 16)));
        shared_ptr<dash3d::Decor> local_60(groundDecor);
        if (local_60 != nullptr) {
            result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
        } else {
            local_50->Load(*m_pModels, field_4, 0, false);
            if (*local_50 == nullptr) {
                auto result;
            } else {
                puVar1 = &field_16;
                local_68 = &result;
                local_50._24_8_ = this;
                if (!(puVar1->empty())) {
                    lVar6 = puVar1->end();
                    if (lVar6 != 0) {
                        puVar2 = (uint8_t*)(local_50._24_8_ + 40);
                        uVar10 = 0;
                        do {
                            plVar7 = (long*)(*local_50).operator->();
                            psVar8 = (short*)(*puVar1)[uVar10];
                            sVar3 = *psVar8;
                            psVar8 = (short*)(*puVar2)[uVar10];
                            (**(void (**)(...))(*plVar7 + 160))(plVar7, (int)sVar3, (int)*psVar8);
                            uVar10 = uVar10 + 1;
                            uVar9 = puVar1->end();
                        } while (uVar10 < uVar9);
                    }
                }
                puVar1 = (uint8_t*)(local_50._24_8_ + 64);
                if (!(puVar1->empty())) {
                    lVar6 = puVar1->end();
                    if (lVar6 != 0) {
                        puVar2 = (uint8_t*)(local_50._24_8_ + 88);
                        uVar10 = 0;
                        do {
                            plVar7 = (long*)(*local_50).operator->();
                            psVar8 = (short*)(*puVar1)[uVar10];
                            sVar3 = *psVar8;
                            psVar8 = (short*)(*puVar2)[uVar10];
                            (**(void (**)(...))(*plVar7 + 168))(plVar7, (int)sVar3, (int)*psVar8);
                            uVar10 = uVar10 + 1;
                            uVar9 = puVar1->end();
                        } while (uVar10 < uVar9);
                    }
                }
                plVar7 = (long*)(*local_50).operator->();
                (**(void (**)(...))(*plVar7 + 72))(&local_78, plVar7, *(unsigned int*)(local_50._24_8_ + 124) + 64,
                                                   *(unsigned int*)(local_50._24_8_ + 128) + 850, 4294967266,
                                                   4294967246, 4294967266);
                local_60 = local_78;
                &result = local_68;
                m_modelCache.Put(local_60, 1, *((local_50 + 16)));
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
            }
        }
        return result;
    }

    // 0x100236dc0
    void SpotType::ResetCache() {
        m_recentUse.Reset();
        m_modelCache.Reset();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100236290
    shared_ptr_if_not_array<oldscape::configdecoder::SpotType>::type make_shared<oldscape::configdecoder::SpotType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SpotType* local_28[2];

        auto arg1 = aligned_alloc(168, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::SpotType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::SpotType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::SpotType>, int,
                              oldscape::configdecoder::SpotType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
