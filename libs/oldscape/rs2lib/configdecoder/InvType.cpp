// libs/oldscape/rs2lib/configdecoder/InvType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "libs/game/runetek5/config/invtype/InvType.h"

namespace jag::oldscape::configdecoder {
    // 0x100fd68a0
    int64_t InvType::m_pConfigClient;

    // 0x100fd68a8
    LRUHashCache<InvType, 64ul, 65ul, false, unsigned long long> InvType::m_recentUse;

    // 0x1001981a0: InvType::InvType() has the same machine code as Error::Error()

    // 0x1002283f0
    void InvType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100228400
    auto InvType::List(int arg1) {
        InvType* invType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 5, arg1, nullptr);
            make_shared<InvType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                invType = (InvType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(invType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x1002286d0
    void InvType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100228800
    void InvType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x100228820
    void InvType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        unsigned short uVar1;

        if (arg2 == 2) {
            uVar1 = packetJ.g2();
            field_0 = (unsigned int)uVar1;
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/InvType.cpp",
                      72, "Error unrecognised .inv config code: %i", arg2);
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002285c0
    shared_ptr_if_not_array<oldscape::configdecoder::InvType>::type make_shared<oldscape::configdecoder::InvType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        InvType* local_28[2];

        auto arg1 = aligned_alloc(24, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::InvType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VarpType>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::configdecoder::InvType>, int,
                              oldscape::configdecoder::InvType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
