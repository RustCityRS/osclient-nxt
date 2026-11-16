// libs/oldscape/rs2lib/configdecoder/VarpType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "VarpType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016824f8
    int64_t VarpType::m_pConfigClient;

    // 0x101682500
    LRUHashCache<VarpType, 64ul, 65ul, false, unsigned long long> VarpType::m_recentUse;

    // 0x101683a00
    int64_t VarpType::m_numDefinitions;

    // 0x1001981a0: VarpType::VarpType() has the same machine code as Error::Error()

    // 0x1002397b0
    void VarpType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
        m_numDefinitions = js5->GetFileIdLimit(16);
    }

    // 0x1002397d0
    shared_ptr<midi2::MidiPlayerMainThread>* VarpType::List(int arg1) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        VarpType* varpType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_48;
        unsigned long long local_38[2];

        local_38[0] = (long)arg1;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Find(*local_38);
        if (!*midiPlayerMainThread != nullptr) {
            new (local_38) shared_ptr();
            if ((uint8_t*)m_pConfigClient->GetFile(*local_38, 16, arg1, nullptr) == DataStatus::READY) {
                make_shared<VarpType>(&local_48);
                varpType = (VarpType*)local_48.operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)**local_38;
                Decode(varpType, packetJ);
                midiPlayerMainThread =
                    (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Put(local_48, 1, (long)arg1);
            }
        }
        return midiPlayerMainThread;
    }

    // 0x100239a00
    void VarpType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100239b30
    void VarpType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        unsigned short uVar1;

        if (arg2 == 5) {
            uVar1 = packetJ.g2();
            field_0 = (unsigned int)uVar1;
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/VarpType.cpp",
                      66, "Error unrecognised .varp config code: %d", arg2);
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100239970
    shared_ptr_if_not_array<oldscape::configdecoder::VarpType>::type make_shared<oldscape::configdecoder::VarpType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        InvType* local_28[2];

        auto arg1 = aligned_alloc(24, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::VarpType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VarpType>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarpType>, int,
                              oldscape::configdecoder::VarpType*&>(arg1, &local_2c, (VarpType**)local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
