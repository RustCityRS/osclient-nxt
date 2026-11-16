// libs/oldscape/rs2lib/configdecoder/StructType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "StructType.h"

namespace jag::oldscape::configdecoder {
    // 0x101676730
    int64_t StructType::m_pConfigClient;

    // 0x101676738
    LRUHashCache<StructType, 64ul, 65ul, false, unsigned long long> StructType::m_recentUse;

    // 0x100236e20
    void StructType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100236e30
    auto StructType::List(int arg1) {
        int* piVar2;
        StructType* structType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 34, arg1, nullptr);
            make_shared<StructType>(&local_40);
            result = local_40;
            piVar2 = (int*)(result).operator->();
            *piVar2 = arg1;
            if (local_30 != nullptr) {
                structType = (StructType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(structType, packetJ);
            }
            (result).operator->();
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100237120
    void StructType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100237160
    void StructType::PostDecode() {}

    // 0x100237260
    void StructType::GetParam(int arg1, int arg2) {
        ParamTypeHelper::GetParam(&field_8, arg1, arg2);
    }

    // 0x100237270
    auto StructType::GetParam(int arg1, const eastl::string& str) {
        auto str_00 = ParamTypeHelper::GetParam(&field_8, arg1, str);
        return auto(*str_00);
    }

    // 0x1002372a0
    void StructType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x1002372c0
    void StructType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 249) {
            ParamTypeHelper::UnpackClientParams(packetJ, field_8);
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/StructType.cpp",
                      93, "Error unrecognised .struct config code: %i", (((uint64_t)uVar1 << 32) | (uint32_t)arg2));
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100237010
    shared_ptr_if_not_array<oldscape::configdecoder::StructType>::type
    make_shared<oldscape::configdecoder::StructType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        StructType* local_28[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::StructType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::StructType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::StructType>, int,
                              oldscape::configdecoder::StructType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
