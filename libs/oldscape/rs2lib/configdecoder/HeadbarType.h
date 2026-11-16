// libs/oldscape/rs2lib/configdecoder/HeadbarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100281ed0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::HeadbarType*): jumps straight to the base-object constructor

    // 0x100281ee0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::HeadbarType*)
    void
    ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                 HeadbarType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c88 + 16;
    }

    // 0x100282770, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::HitmarkType* placement_new<oldscape::configdecoder::HitmarkType>(void*)
    HitmarkType* placement_new<oldscape::configdecoder::HitmarkType>(void* param_1) {
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 112) = 0;
        oldscape::configdecoder::HitmarkType::HitmarkType(param_1);
        return param_1;
    }

    // 0x1002827b0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HitmarkType>* placement_new<ref_counter_shared<oldscape::configdecoder::HitmarkType>, int, oldscape::configdecoder::HitmarkType*&>(void*, int&&, oldscape::configdecoder::HitmarkType*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::configdecoder::HitmarkType>, int,
                                           oldscape::configdecoder::HitmarkType*&>(void* param_1, int* param_2,
                                                                                   HitmarkType** param_3) {
        ref_counter_shared<oldscape::configdecoder::HitmarkType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class HeadbarType {
    public:
        void Init(jagex3::Js5*, jagex3::Js5*);
        HeadbarType* List(long long);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        GetFullSprite();
        GetEmptySprite();
        void ResetCache();
        void PostDecode();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        HeadbarType();
        static /* 8 bytes */ m_dataNotReady;
        static /* 5376 bytes */ m_recentUse;
        static LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long> /* 5376 bytes */
            m_spriteCache; // = LRUHashCache<graphics::Pix32,64ul,65ul,false,unsigned long long>(64, "LRUHashCache")
        static /* 8 bytes */ m_pSprites;
        static /* 8 bytes */ m_pConfigClient;

        // data members, from how the methods use this: 52 bytes
        char _unknown_0[4];
        uint field_4;  // offset 4
        uint field_8;  // offset 8
        uint field_12; // offset 12
        uint field_16; // offset 16
        char _unknown_20[4];
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        uint field_40;       // offset 40
        uint field_44;       // offset 44
        char _unknown_48[4];
    };

    // 0x100281e80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HeadbarType::HeadbarType(): jumps straight to the base-object constructor

    // 0x100281e90, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // HeadbarType::HeadbarType()
    void HeadbarType::HeadbarType() {
        field_4 = 4294967295;
        field_8 = 255;
        field_12 = 255;
        field_16 = 4294967295;
        *(undefined8*)&field_20 = 300647710721;
        field_28 = 4294967295;
        field_32 = 4294967295;
        field_36 = 4294967295;
        field_40 = 30;
        field_44 = 0;
    }

} // namespace jag::oldscape::configdecoder
