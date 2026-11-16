// libs/oldscape/rs2lib/configdecoder/VarcType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "VarcType.h"

namespace jag::oldscape::configdecoder {
    // 0x10167e5e0
    int64_t VarcType::m_pConfigClient;

    // 0x10167e5e8
    LRUHashCache<VarcType, 64ul, 65ul, false, unsigned long long> VarcType::m_recentUse;

    // 0x100238aa0
    void VarcType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100238ab0
    shared_ptr<midi2::MidiPlayerMainThread>* VarcType::List(int arg1) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        VarcType* varcType;
        PacketJ<Array<unsigned char> _>* packetJ;
        unsigned long long local_50[2];
        unsigned long long local_40;
        ReturnValue local_38;

        local_50[0] = (unsigned long long)arg1;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Find(*local_50);
        if (*midiPlayerMainThread != nullptr) {
            return midiPlayerMainThread;
        }
        new (local_50) shared_ptr();
        auto puVar2 = m_pConfigClient->GetFile(*local_50, 19, arg1, nullptr);
        if (puVar2 == DataStatus::READY) {
            make_shared<VarcType>(&local_38);
            varcType = (VarcType*)local_38.operator->();
            packetJ = (PacketJ<Array<unsigned char> _>*)**local_50;
            Decode(varcType, packetJ);
            local_40 = (unsigned long long)arg1;
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Put(local_38, 1, local_40);
        } else {
            if (puVar2 != DataStatus::MISSING)
                goto LAB_100238ba4;
            make_shared<VarcType>(&local_38);
            local_40 = (unsigned long long)arg1;
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Put(local_38, 1, local_40);
        }
    LAB_100238ba4:
        return midiPlayerMainThread;
    }

    // 0x100238d20
    void VarcType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100238e40
    void VarcType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 2) {
            *this = (VarcType)1;
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/VarcType.cpp",
                      69, "Error unrecognised .varc config code: %d", (((uint64_t)uVar1 << 32) | (uint32_t)arg2));
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100238c90
    shared_ptr_if_not_array<oldscape::configdecoder::VarcType>::type make_shared<oldscape::configdecoder::VarcType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        VarcType* local_28[2];

        auto arg1 = aligned_alloc(24, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::VarcType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VeccType>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarcType>, int,
                              oldscape::configdecoder::VarcType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
