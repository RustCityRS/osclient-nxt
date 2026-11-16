// libs/oldscape/rs2lib/configdecoder/VeccType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "libs/graphics/runetek7/fonts/FontSystem.h"

namespace jag::oldscape::configdecoder {
    class VeccType {
    public:
        void Init(jagex3::Js5* js5);
        shared_ptr<midi2::MidiPlayerMainThread>* List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        VeccType();
        static int64_t m_pConfigClient;
        static LRUHashCache<VeccType, 64ul, 65ul, false, unsigned long long> m_recentUse;

        uint8_t _unknown_0[1];
    };

    // 0x101683a08
    int64_t VeccType::m_pConfigClient;

    // 0x101683a10
    LRUHashCache<VeccType, 64ul, 65ul, false, unsigned long long> VeccType::m_recentUse;

    // 0x100239bb0
    void VeccType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100239bc0
    shared_ptr<midi2::MidiPlayerMainThread>* VeccType::List(int arg1) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        VeccType* veccType;
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
        auto puVar2 = m_pConfigClient->GetFile(*local_50, 37, arg1, nullptr);
        if (puVar2 == DataStatus::READY) {
            make_shared<VeccType>(&local_38);
            veccType = (VeccType*)local_38.operator->();
            packetJ = (PacketJ<Array<unsigned char> _>*)**local_50;
            Decode(veccType, packetJ);
            local_40 = (unsigned long long)arg1;
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Put(local_38, 1, local_40);
        } else {
            if (puVar2 != DataStatus::MISSING)
                goto LAB_100239cb4;
            make_shared<VeccType>(&local_38);
            local_40 = (unsigned long long)arg1;
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Put(local_38, 1, local_40);
        }
    LAB_100239cb4:
        return midiPlayerMainThread;
    }

    // 0x100239e30
    void VeccType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100239f50
    void VeccType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 2) {
            *this = (VeccType)1;
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/VeccType.cpp",
                      69, "Error unrecognised .vecc config code: %d", (((uint64_t)uVar1 << 32) | (uint32_t)arg2));
        }
    }

    // 0x100251be0: VeccType::VeccType() has the same machine code as VarcType::VarcType()

} // namespace jag::oldscape::configdecoder

namespace jag::graphics {
    // 0x103bc0460, set at startup by ___cxx_global_var_init.63
    TextFlags TextFlags::DEFAULT = TextFlags();

    // 0x100251be0: TextFlags::TextFlags() has the same machine code as oldscape::configdecoder::VarcType::VarcType()

} // namespace jag::graphics

namespace jag {
    // 0x100239da0
    shared_ptr_if_not_array<oldscape::configdecoder::VeccType>::type make_shared<oldscape::configdecoder::VeccType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        VarcType* local_28[2];

        auto arg1 = aligned_alloc(24, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::VeccType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VeccType>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VeccType>, int,
                              oldscape::configdecoder::VeccType*&>(arg1, &local_2c, (VeccType**)local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
