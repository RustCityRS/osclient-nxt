// libs/oldscape/rs2lib/configdecoder/VarBitType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "VarBitType.h"

namespace jag::oldscape::configdecoder {
    // 0x101677c38
    int64_t VarBitType::m_pConfigClient;

    // 0x101677c40
    LRUHashCache<VarBitType, 64ul, 65ul, false, unsigned long long> VarBitType::m_recentUse;

    // 0x101679140
    uint8_t VarBitType::m_maskLookUp[128];

    // 0x100237360
    void VarBitType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100237370
    auto VarBitType::List(int arg1) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        VarBitType* varBitType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_48;
        unsigned long long local_38[2];

        local_38[0] = (long)arg1;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Find(*local_38);
        bool bVar1 = *midiPlayerMainThread != nullptr;
        if (bVar1) {
            return auto(midiPlayerMainThread);
        }
        new (local_38) shared_ptr();
        make_shared<VarBitType>(&local_48);
        if (((uint8_t*)m_pConfigClient->GetFile(*local_38, 14, arg1, nullptr) == DataStatus::READY) ||
            (bVar1 = *local_38 != nullptr, bVar1)) {
            varBitType = (VarBitType*)local_48.operator->();
            packetJ = (PacketJ<Array<unsigned char> _>*)**local_38;
            Decode(varBitType, packetJ);
        }
        m_recentUse.Put(local_48, 1, (long)arg1);
        result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        return result;
    }

    // 0x1002375d0
    void VarBitType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100237700
    unsigned int VarBitType::GetVarbitValue(int arg1) {
        return arg1 >> ((uint8_t)field_4 & 31) & (&m_maskLookUp)[(int)field_8 - (long)(int)field_4];
    }

    // 0x100237720
    unsigned int VarBitType::SetVarbitValue(int arg1, int arg2, bool* arg3) {
        uint8_t bVar2;

        unsigned int uVar1 = field_4;
        unsigned int uVar3 = (&m_maskLookUp)[(int)field_8 - (long)(int)uVar1];
        if ((arg2 < 0) || ((int)uVar3 < arg2)) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/VarBitType.cpp",
                      54, "VarBitType: Varbit setting overflow! %i, %i", (unsigned long)(unsigned int)arg2,
                      (unsigned long)uVar3);
            if (arg3 != nullptr) {
                *arg3 = false;
            }
        } else {
            if (arg3 != nullptr) {
                *arg3 = true;
            }
            bVar2 = (uint8_t)uVar1;
            uVar3 = uVar3 << (bVar2 & 31);
            arg1 = arg2 << (bVar2 & 31) & uVar3 | ~uVar3 & arg1;
        }
        return arg1;
    }

    // 0x1002377c0
    void VarBitType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        uint64_t in_RAX;

        uint32_t uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 1) {
            uVar2 = packetJ.g2();
            field_0 = (unsigned int)uVar2;
            bVar1 = packetJ.g1();
            field_4 = (unsigned int)bVar1;
            bVar1 = packetJ.g1();
            field_8 = (unsigned int)bVar1;
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/VarBitType.cpp",
                      93, "Error unrecognised .varbit config code: %d", (((uint64_t)uVar3 << 32) | (uint32_t)arg2));
        }
    }

    // 0x100237840
    void VarBitType::InitMaskLoopUpTable() {
        int iVar1 = 2;
        long lVar2 = 0;
        do {
            *(int*)((long)&m_maskLookUp + lVar2) = iVar1 - 1;
            iVar1 = iVar1 * 2;
            lVar2 = lVar2 + 4;
        } while (lVar2 != 128);
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100237540
    shared_ptr_if_not_array<oldscape::configdecoder::VarBitType>::type
    make_shared<oldscape::configdecoder::VarBitType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        VarBitType* local_28[2];

        auto arg1 = aligned_alloc(32, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::VarBitType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VarBitType>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>, int,
                              oldscape::configdecoder::VarBitType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
