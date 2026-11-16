// libs/oldscape/rs2lib/configdecoder/EnumType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "EnumType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016b7e08, 8 bytes, __common; zero-initialised
    EnumType::m_pConfigClient;

    // 0x1016b7e10, 5376 bytes, __common; zero-initialised
    EnumType::m_recentUse;

    // 0x100265e00, 16 bytes, placed by class name and debug map
    // EnumType::Init(jagex3::Js5*)
    void EnumType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x100265e10, 288 bytes, placed by class name and debug map
    // EnumType::List(int)
    EnumType* EnumType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        EnumType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<EnumType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 8, (array*)(ulong)(uint)param_1);
            make_shared<EnumType>((jag*)&local_40);
            shared_ptr<EnumType>::operator=((shared_ptr<EnumType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (EnumType*)shared_ptr<EnumType>::operator->((shared_ptr<EnumType>*)this);
                pPVar3 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(this_00, pPVar3);
            }
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100266060, 64 bytes, placed by class name and debug map
    // EnumType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void EnumType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100266190, 16 bytes, placed by class name and debug map
    // EnumType::GetNumOptions()
    uint EnumType::GetNumOptions() {
        return m_numOptions;
    }

    // 0x1002661a0, 32 bytes, placed by class name and debug map
    // EnumType::ResetCache()
    void EnumType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x1002661c0, 624 bytes, placed by class name and debug map
    // EnumType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void EnumType::Decode(PacketJ* param_1, int param_2) {
        undefined1* puVar1;
        byte bVar2;
        ushort uVar3;
        undefined4 uVar4;
        eastl::string* this_00;
        undefined8 uVar5;
        undefined4* puVar6;
        ulong uVar7;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_60[32];
        Array<eastl::string, eastl::allocator>* local_40;
        Array<int, eastl::allocator>* local_38;

        switch (param_2) {
        case 1:
            bVar2 = param_1->g1();
            field_0 = (ushort)bVar2;
            break;
        case 2:
            bVar2 = param_1->g1();
            field_2 = (ushort)bVar2;
            break;
        case 3:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_60, SUB81(param_1, 0));
            eastl::string::operator=((eastl::string*)&field_8, (basic_string*)local_60);
            local_60->~basic_string();
            break;
        case 4:
            uVar4 = param_1->g4();
            field_40 = uVar4;
            break;
        case 5:
            uVar3 = param_1->g2();
            m_numOptions = (uint)uVar3;
            puVar1 = &field_48;
            puVar1->clear();
            local_38 = (Array<int, eastl::allocator>*)puVar1;
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            puVar1 = &field_96;
            puVar1->clear();
            local_40 = (Array<eastl::string, eastl::allocator>*)puVar1;
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            if (0 < (int)m_numOptions) {
                uVar7 = 0;
                do {
                    uVar4 = param_1->g4();
                    puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_38, uVar7);
                    *puVar6 = uVar4;
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_60, SUB81(param_1, 0));
                    this_00 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](local_40, uVar7);
                    eastl::string::operator=(this_00, (basic_string*)local_60);
                    local_60->~basic_string();
                    uVar7 = uVar7 + 1;
                } while ((long)uVar7 < (long)(int)m_numOptions);
            }
            break;
        case 6:
            uVar3 = param_1->g2();
            m_numOptions = (uint)uVar3;
            puVar1 = &field_48;
            puVar1->clear();
            local_38 = (Array<int, eastl::allocator>*)puVar1;
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            puVar1 = &field_72;
            puVar1->clear();
            puVar1->set_max_size((long)(int)m_numOptions, 1);
            if (0 < (int)m_numOptions) {
                uVar7 = 0;
                do {
                    uVar4 = param_1->g4();
                    puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_38, uVar7);
                    *puVar6 = uVar4;
                    uVar4 = param_1->g4();
                    puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar1, uVar7);
                    *puVar6 = uVar4;
                    uVar7 = uVar7 + 1;
                } while ((long)uVar7 < (long)(int)m_numOptions);
            }
            break;
        default:
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/EnumType.cpp",
                                137, "Error unrecognised .enum config code: %i", param_2);
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100265fd0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::EnumType>::type make_shared<oldscape::configdecoder::EnumType>()
    jag* make_shared<oldscape::configdecoder::EnumType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        EnumType* local_28[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::EnumType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::EnumType>, int,
                                   oldscape::configdecoder::EnumType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
