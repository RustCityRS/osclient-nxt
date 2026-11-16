// libs/oldscape/rs2lib/configdecoder/VarConType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class VarConType {
    public:
        void Init(jagex3::Js5*);
        VarConType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void ResetCache();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        long field_8; // offset 8
    };

    // 0x10167a6c8, 8 bytes, __common; zero-initialised
    VarConType::m_pConfigClient;

    // 0x10167a6d0, 5376 bytes, __common; zero-initialised
    VarConType::m_recentUse;

    // 0x100237d20, 16 bytes, placed by class name and debug map
    // VarConType::Init(jagex3::Js5*)
    void VarConType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x100237d30, 288 bytes, placed by class name and debug map
    // VarConType::List(int)
    VarConType* VarConType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        VarConType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<VarConType, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 29, (array*)(ulong)(uint)param_1);
            make_shared<VarConType>((jag*)&local_40);
            shared_ptr<VarConType>::operator=((shared_ptr<VarConType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (VarConType*)shared_ptr<VarConType>::operator->((shared_ptr<VarConType>*)this);
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

    // 0x100238000, 48 bytes, placed by class name and debug map
    // VarConType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void VarConType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode((VarConType*)param_1, param_1, (uint)bVar1);
        }
    }

    // 0x100238120, 64 bytes, placed by class name and debug map
    // VarConType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void VarConType::Decode(PacketJ* param_1, int param_2) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "configdecoder/VarConType.cpp",
                            47, "Error unrecognised .varcon config code: %i", CONCAT44(uVar2, param_2));
    }

    // 0x100238160, 32 bytes, placed by class name and debug map
    // VarConType::ResetCache()
    void VarConType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100237ef0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::VarConType>::type make_shared<oldscape::configdecoder::VarConType>()
    jag* make_shared<oldscape::configdecoder::VarConType>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        VarConType* local_28[2];

        pvVar1 = (void*)aligned_alloc(24, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr*)(type*)8);
        } else {
            local_28[0] = (VarConType*)(((long)pvVar1 + 16))->SSOBeginPtr(8);
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarConType>, int,
                                   oldscape::configdecoder::VarConType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
