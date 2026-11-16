// libs/oldscape/rs2lib/configdecoder/HitmarkType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100282880, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HitmarkType>::ref_counter_shared(unsigned long, oldscape::configdecoder::HitmarkType*): jumps straight to the base-object constructor

    // 0x100282890, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HitmarkType>::ref_counter_shared(unsigned long, oldscape::configdecoder::HitmarkType*)
    void ref_counter_shared<oldscape::configdecoder::HitmarkType>::ref_counter_shared(ulong param_1,
                                                                                      HitmarkType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(HitmarkType**)(this + 24) = param_2;
    }

    // 0x1002828d0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HitmarkType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::HitmarkType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~HitmarkType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 120;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100282fa0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::HuntType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HuntType>, int, oldscape::configdecoder::HuntType*&>(void*, int&&, oldscape::configdecoder::HuntType*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HuntType>, int,
                                                   oldscape::configdecoder::HuntType*&>(void* param_1, int* param_2,
                                                                                        HuntType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::HuntType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100282fc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::HuntType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::HuntType*): jumps straight to the base-object constructor

    // 0x100282fd0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::HuntType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::HuntType*)
    void ref_counter_shared_trivial<oldscape::configdecoder::HuntType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                   HuntType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7cd0 + 16;
    }

    // 0x100283680, 80 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::IdkType* placement_new<oldscape::configdecoder::IdkType>(void*)
    IdkType* placement_new<oldscape::configdecoder::IdkType>(void* param_1) {
        *(undefined8*)((long)param_1 + 128) = 0;
        *(undefined8*)((long)param_1 + 136) = 0;
        *(undefined8*)((long)param_1 + 112) = 0;
        *(undefined8*)((long)param_1 + 120) = 0;
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
        *(undefined8*)((long)param_1 + 144) = 0;
        oldscape::configdecoder::IdkType::IdkType(param_1);
        return param_1;
    }

    // 0x1002836d0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::IdkType>* placement_new<ref_counter_shared<oldscape::configdecoder::IdkType>, int, oldscape::configdecoder::IdkType*&>(void*, int&&, oldscape::configdecoder::IdkType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::IdkType>, int, oldscape::configdecoder::IdkType*&>(
        void* param_1, int* param_2, IdkType** param_3) {
        ref_counter_shared<oldscape::configdecoder::IdkType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class HitmarkType {
    public:
        void Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*);
        HitmarkType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        GetMultiHitmark();
        GetString(int);
        GetIconSprite();
        GetBackgroundSprite();
        GetBackgroundLeftSprite();
        GetBackgroundRightSprite();
        GetFont();
        void ResetCache();
        HitmarkType();
        ~HitmarkType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pSprites;
        static /* 8 bytes */ m_pFontMetrics;
        static /* 8 bytes */ m_numDefinitions;
        static /* 5376 bytes */ m_recentUse;
        static LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long> /* 5376 bytes */
            m_spriteCache; // = LRUHashCache<graphics::Pix32,64ul,65ul,false,unsigned long long>(64, "LRUHashCache")
        static /* 1856 bytes */ m_fontCache;
        static /* 8 bytes */ m_dataNotReady;

        // data members, from how the methods use this: 124 bytes
        char _unknown_0[4];
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        uint field_12;       // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        int field_32;        // offset 32
        int field_36;        // offset 36
        uint field_40;       // offset 40
        char _unknown_44[36];
        uint field_80; // offset 80
        int field_84;  // offset 84
        char _unknown_88[24];
        uint field_112; // offset 112
        uint field_116; // offset 116
        char _unknown_120[4];
    };

    // 0x1002827d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HitmarkType::HitmarkType(): jumps straight to the base-object constructor

    // 0x1002827e0, 160 bytes, base-object constructor, inline, placed by class name and debug map
    // HitmarkType::HitmarkType()
    void HitmarkType::HitmarkType() {
        allocator local_28[8];

        field_4 = 4294967295;
        field_8 = 16777215;
        field_12 = 70;
        field_16 = 4294967295;
        field_20 = 4294967295;
        field_24 = 4294967295;
        field_28 = 4294967295;
        field_32 = 0;
        field_36 = 0;
        field_40 = 4294967295;
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_48, "", local_28) eastl::string();
        field_80 = 4294967295;
        field_84 = 0;
        new (&field_88) Array<int, eastl::allocator>();
        field_112 = 4294967295;
        field_116 = 4294967295;
    }

    // 0x100282920, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HitmarkType::~HitmarkType(): jumps straight to the base-object destructor

    // 0x100282930, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // HitmarkType::~HitmarkType()
    void HitmarkType::~HitmarkType() {
        (&field_88)->~Array();
        (&field_48)->~basic_string();
    }

} // namespace jag::oldscape::configdecoder
