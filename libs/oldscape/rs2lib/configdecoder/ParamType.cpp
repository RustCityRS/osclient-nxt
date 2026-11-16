// libs/oldscape/rs2lib/configdecoder/ParamType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ParamType.h"

namespace jag::oldscape::configdecoder {
    // 0x10166dd20
    int64_t ParamType::m_pConfigClient;

    // 0x10166dd28
    LRUHashCache<ParamType, 64ul, 65ul, false, unsigned long long> ParamType::m_recentUse;

    // 0x1000590a0: ParamType::~ParamType() has the same machine code as FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

    // 0x100234190
    void ParamType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x1002341a0
    auto ParamType::List(int arg1) {
        ParamType* paramType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 11, arg1, nullptr);
            make_shared<ParamType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                paramType = (ParamType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(paramType, packetJ);
            }
            (result).operator->();
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100234480
    void ParamType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x1002344c0
    void ParamType::PostDecode() {}

    // 0x1002345c0
    bool ParamType::IsStringType() {
        return field_0 == 115;
    }

    // 0x1002345d0
    void ParamType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x1002345f0
    void ParamType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_38;

        switch (arg2) {
        case 1:
            field_0 = stringtools::CP1252ToWide(packetJ.g1());
            break;
        case 2:
            field_4 = packetJ.g4();
            break;
        default:
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/ParamType.cpp",
                      97, "Error unrecognised .param config code: %i", arg2);
            break;
        case 4:
            field_40 = 0;
            break;
        case 5:
            local_38.gStringNoConversion((uint8_t)packetJ);
            field_8 = &local_38;
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100234370
    shared_ptr_if_not_array<oldscape::configdecoder::ParamType>::type
    make_shared<oldscape::configdecoder::ParamType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ParamType* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::ParamType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::ParamType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::ParamType>, int,
                              oldscape::configdecoder::ParamType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100234a60
    shared_ptr_if_not_array<oldscape::configdecoder::SeqType>::type make_shared<oldscape::configdecoder::SeqType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SeqType* local_28[2];

        auto arg1 = aligned_alloc(296, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::SeqType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::SeqType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::SeqType>, int,
                              oldscape::configdecoder::SeqType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
