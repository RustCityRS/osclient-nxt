// libs/oldscape/rs2lib/configdecoder/VeccType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "libs/graphics/runetek7/fonts/FontSystem.h"

namespace jag::oldscape::configdecoder {
    class VeccType {
    public:
        void Init(jagex3::Js5*);
        shared_ptr* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        VeccType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x101683a08, 8 bytes, __common; zero-initialised
    VeccType::m_pConfigClient;

    // 0x101683a10, 5376 bytes, __common; zero-initialised
    VeccType::m_recentUse;

    // 0x100239bb0, 16 bytes, placed by class name and debug map
    // VeccType::Init(jagex3::Js5*)
    void VeccType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x100239bc0, 320 bytes, placed by class name and debug map
    // VeccType::List(int)
    shared_ptr* VeccType::List(int param_1) {
        shared_ptr* psVar2;
        undefined* puVar3;
        VeccType* this;
        PacketJ* pPVar4;
        ulonglong local_50[2];
        ulonglong local_40;
        shared_ptr local_38;

        local_50[0] = (ulonglong)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<VeccType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        if (operator!=(psVar2, (_func_decltype_nullptr*)0)) {
            return psVar2;
        }
        new (local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        puVar3 = (undefined*)m_pConfigClient->GetFile(
            (int)(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50, 37, (array*)(ulong)(uint)param_1);
        if (puVar3 == DataStatus::READY) {
            make_shared<VeccType>((jag*)&local_38);
            this = (VeccType*)shared_ptr<VeccType>::operator->((shared_ptr<VeccType>*)&local_38);
            pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_50);
            Decode(this, pPVar4);
            local_40 = (ulonglong)param_1;
            psVar2 = (shared_ptr*)m_recentUse.Put(&local_38, 1, &local_40);
        } else {
            if (puVar3 != DataStatus::MISSING)
                goto LAB_100239cb4;
            make_shared<VeccType>((jag*)&local_38);
            local_40 = (ulonglong)param_1;
            psVar2 = (shared_ptr*)m_recentUse.Put(&local_38, 1, &local_40);
        }
        local_38.~shared_ptr();
    LAB_100239cb4:
        local_50->~shared_ptr();
        return psVar2;
    }

    // 0x100239e30, 48 bytes, placed by class name and debug map
    // VeccType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void VeccType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100239f50, 80 bytes, placed by class name and debug map
    // VeccType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void VeccType::Decode(PacketJ* param_1, int param_2) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 == 2) {
            *this = (VeccType)1;
        } else {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/VeccType.cpp",
                                69, "Error unrecognised .vecc config code: %d", CONCAT44(uVar2, param_2));
        }
    }

    // 0x100251bd0: the linker folded this into VarcType::VarcType(), which has identical code
    VeccType::VeccType();

    // 0x100251be0: the linker folded this into VarcType::VarcType(), which has identical code
    VeccType::VeccType();

    // 0x100916df0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        new (&jag::graphics::TextFlags::DEFAULT) VeccType();
    }

} // namespace jag::oldscape::configdecoder

namespace jag::graphics {
    // 0x103bc0460, 8 bytes, __common; constructor folded by the linker, Ghidra calls it oldscape::configdecoder::VeccType::VeccType; set at startup by ___cxx_global_var_init.63
    TextFlags TextFlags::DEFAULT = TextFlags();

    // 0x100251be0: the linker folded this into oldscape::configdecoder::VarcType::VarcType(), which has identical code
    TextFlags::TextFlags();

} // namespace jag::graphics

namespace jag {
    // 0x100239da0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::VeccType>::type make_shared<oldscape::configdecoder::VeccType>()
    jag* make_shared<oldscape::configdecoder::VeccType>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        VeccType* local_28[2];

        pvVar1 = (void*)aligned_alloc(24, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VeccType>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VeccType>, int,
                                   oldscape::configdecoder::VeccType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
