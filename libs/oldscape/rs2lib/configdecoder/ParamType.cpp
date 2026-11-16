// libs/oldscape/rs2lib/configdecoder/ParamType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ParamType.h"

namespace jag::oldscape::configdecoder {
    // 0x10166dd20, 8 bytes, __common; zero-initialised
    ParamType::m_pConfigClient;

    // 0x10166dd28, 5376 bytes, __common; zero-initialised
    ParamType::m_recentUse;

    // 0x100059090: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    ParamType::~ParamType();

    // 0x1000590a0: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    ParamType::~ParamType();

    // 0x100234190, 16 bytes, placed by class name and debug map
    // ParamType::Init(jagex3::Js5*)
    void ParamType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x1002341a0, 304 bytes, placed by class name and debug map
    // ParamType::List(int)
    ParamType* ParamType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        ParamType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<ParamType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 11, (array*)(ulong)(uint)param_1);
            make_shared<ParamType>((jag*)&local_40);
            shared_ptr<ParamType>::operator=((shared_ptr<ParamType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (ParamType*)shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)this);
                pPVar3 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(this_00, pPVar3);
            }
            shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)this);
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100234480, 64 bytes, placed by class name and debug map
    // ParamType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void ParamType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x1002344c0, 16 bytes, placed by class name and debug map
    // ParamType::PostDecode()
    void ParamType::PostDecode() {}

    // 0x1002345c0, 16 bytes, placed by class name and debug map
    // ParamType::IsStringType()
    bool ParamType::IsStringType() {
        return field_0 == 115;
    }

    // 0x1002345d0, 32 bytes, placed by class name and debug map
    // ParamType::ResetCache()
    void ParamType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x1002345f0, 224 bytes, placed by class name and debug map
    // ParamType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void ParamType::Decode(PacketJ* param_1, int param_2) {
        uchar uVar1;
        undefined4 uVar3;
        undefined8 uVar4;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_38[32];

        switch (param_2) {
        case 1:
            uVar1 = param_1->g1();
            field_0 = stringtools::CP1252ToWide(uVar1);
            break;
        case 2:
            uVar3 = param_1->g4();
            field_4 = uVar3;
            break;
        default:
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/ParamType.cpp",
                                97, "Error unrecognised .param config code: %i", param_2);
            break;
        case 4:
            field_40 = 0;
            break;
        case 5:
            local_38->gStringNoConversion(SUB81(param_1, 0));
            eastl::string::operator=((eastl::string*)&field_8, (basic_string*)local_38);
            local_38->~basic_string();
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100234370, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::ParamType>::type make_shared<oldscape::configdecoder::ParamType>()
    jag* make_shared<oldscape::configdecoder::ParamType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ParamType* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::ParamType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::ParamType>, int,
                                   oldscape::configdecoder::ParamType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100234a60, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::SeqType>::type make_shared<oldscape::configdecoder::SeqType>()
    jag* make_shared<oldscape::configdecoder::SeqType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SeqType* local_28[2];

        pvVar1 = (void*)aligned_alloc(296, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::SeqType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::SeqType>, int,
                                   oldscape::configdecoder::SeqType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
