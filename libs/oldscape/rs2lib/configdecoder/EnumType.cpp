// libs/oldscape/rs2lib/configdecoder/EnumType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "EnumType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016b7e08
    int64_t EnumType::m_pConfigClient;

    // 0x1016b7e10
    LRUHashCache<EnumType, 64ul, 65ul, false, unsigned long long> EnumType::m_recentUse;

    // 0x100265e00
    void EnumType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100265e10
    auto EnumType::List(int arg1) {
        EnumType* enumType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 8, arg1, nullptr);
            make_shared<EnumType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                enumType = (EnumType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(enumType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100266060
    void EnumType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100266190
    unsigned int EnumType::GetNumOptions() {
        return m_numOptions;
    }

    // 0x1002661a0
    void EnumType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x1002661c0
    void EnumType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t* puVar1;
        uint8_t bVar2;
        unsigned short uVar3;
        uint32_t uVar4;
        eastl::string* this_00;
        uint32_t* puVar5;
        unsigned long uVar6;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_60;
        Array<eastl::string>* local_40;
        Array<int>* local_38;

        switch (arg2) {
        case 1:
            bVar2 = packetJ.g1();
            field_0 = (unsigned short)bVar2;
            break;
        case 2:
            bVar2 = packetJ.g1();
            field_2 = (unsigned short)bVar2;
            break;
        case 3:
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_60,
                                                                                                 (uint8_t)packetJ);
            field_8 = &local_60;
            break;
        case 4:
            uVar4 = packetJ.g4();
            field_40 = uVar4;
            break;
        case 5:
            uVar3 = packetJ.g2();
            m_numOptions = (unsigned int)uVar3;
            puVar1 = &field_48;
            puVar1->clear();
            local_38 = (Array<int>*)puVar1;
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            puVar1 = &field_96;
            puVar1->clear();
            local_40 = (Array<eastl::string>*)puVar1;
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            if (0 < (int)m_numOptions) {
                uVar6 = 0;
                do {
                    uVar4 = packetJ.g4();
                    puVar5 = (uint32_t*)(*local_38)[uVar6];
                    *puVar5 = uVar4;
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                        &local_60, (uint8_t)packetJ);
                    this_00 = (eastl::string*)(*local_40)[uVar6];
                    *this_00 = &local_60;
                    uVar6 = uVar6 + 1;
                } while ((long)uVar6 < (long)(int)m_numOptions);
            }
            break;
        case 6:
            uVar3 = packetJ.g2();
            m_numOptions = (unsigned int)uVar3;
            puVar1 = &field_48;
            puVar1->clear();
            local_38 = (Array<int>*)puVar1;
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            puVar1 = &field_72;
            puVar1->clear();
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            if (0 < (int)m_numOptions) {
                uVar6 = 0;
                do {
                    uVar4 = packetJ.g4();
                    puVar5 = (uint32_t*)(*local_38)[uVar6];
                    *puVar5 = uVar4;
                    uVar4 = packetJ.g4();
                    puVar5 = (uint32_t*)(*puVar1)[uVar6];
                    *puVar5 = uVar4;
                    uVar6 = uVar6 + 1;
                } while ((long)uVar6 < (long)(int)m_numOptions);
            }
            break;
        default:
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/EnumType.cpp",
                      137, "Error unrecognised .enum config code: %i", arg2);
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100265fd0
    shared_ptr_if_not_array<oldscape::configdecoder::EnumType>::type make_shared<oldscape::configdecoder::EnumType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        EnumType* local_28[2];

        auto arg1 = aligned_alloc(152, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::EnumType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::EnumType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::EnumType>, int,
                              oldscape::configdecoder::EnumType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
