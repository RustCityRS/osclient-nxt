// libs/oldscape/rs2lib/configdecoder/StructType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "StructType.h"

namespace jag::oldscape::configdecoder {
    // 0x101676730, 8 bytes, __common; zero-initialised
    StructType::m_pConfigClient;

    // 0x101676738, 5376 bytes, __common; zero-initialised
    StructType::m_recentUse;

    // 0x100236e20, 16 bytes, placed by class name and debug map
    // StructType::Init(jagex3::Js5*)
    void StructType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x100236e30, 320 bytes, placed by class name and debug map
    // StructType::List(int)
    StructType* StructType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        int* piVar3;
        StructType* this_00;
        PacketJ* pPVar4;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<StructType, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 34, (array*)(ulong)(uint)param_1);
            make_shared<StructType>((jag*)&local_40);
            shared_ptr<StructType>::operator=((shared_ptr<StructType>*)this, &local_40);
            local_40.~shared_ptr();
            piVar3 = (int*)shared_ptr<StructType>::operator->((shared_ptr<StructType>*)this);
            *piVar3 = param_1;
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (StructType*)shared_ptr<StructType>::operator->((shared_ptr<StructType>*)this);
                pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(this_00, pPVar4);
            }
            shared_ptr<StructType>::operator->((shared_ptr<StructType>*)this);
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100237120, 64 bytes, placed by class name and debug map
    // StructType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void StructType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100237160, 16 bytes, placed by class name and debug map
    // StructType::PostDecode()
    void StructType::PostDecode() {}

    // 0x100237260, 16 bytes, placed by class name and debug map
    // StructType::GetParam(int, int)
    void StructType::GetParam(int param_1, int param_2) {
        ParamTypeHelper::GetParam((hash_map*)&field_8, param_1, param_2);
    }

    // 0x100237270, 48 bytes, placed by class name and debug map
    // StructType::GetParam(int, eastl::string const&)
    StructType* StructType::GetParam(int param_1, basic_string* param_2) {
        basic_string* pbVar1;
        basic_string* in_RCX;
        undefined4 in_register_00000034;

        pbVar1 = (basic_string*)ParamTypeHelper::GetParam((hash_map*)(CONCAT44(in_register_00000034, param_1) + 8),
                                                          (int)param_2, in_RCX);
        new (this) eastl::string(pbVar1);
        return this;
    }

    // 0x1002372a0, 32 bytes, placed by class name and debug map
    // StructType::ResetCache()
    void StructType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x1002372c0, 96 bytes, placed by class name and debug map
    // StructType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void StructType::Decode(PacketJ* param_1, int param_2) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 == 249) {
            ParamTypeHelper::UnpackClientParams(param_1, (hash_map*)&field_8);
        } else {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/StructType.cpp",
                                93, "Error unrecognised .struct config code: %i", CONCAT44(uVar2, param_2));
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100237010, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::StructType>::type make_shared<oldscape::configdecoder::StructType>()
    jag* make_shared<oldscape::configdecoder::StructType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        StructType* local_28[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::StructType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::StructType>, int,
                                   oldscape::configdecoder::StructType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
