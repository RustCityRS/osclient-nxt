// projects/osclient/bgsound.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class bgsound {
    public:
        void Reset();
        void RecalculateMultilocs();
        void RecalcSound();
        void AddSound(int, int, int, shared_ptr<configdecoder::LocType> const&, int);
        void DoMix(int, int, int, int);
        ~bgsound();
        bgsound();
        bgsound(bgsound&&);
        static /* 28 bytes */ m_verbose;                // = { 0, 16776960, 16711680, 65280, 65535, 16711935, 16777215 }
        static eastl::vector<bgsound, eastl::allocator> /* 32 bytes */
            m_soundlist;                                // = vector<bgsound,eastl::allocator>()

        // data members, from how the methods use this: 112 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[4];
        undefined8 field_12; // offset 12
        int field_20;        // offset 20
        int field_24;        // offset 24
        char _unknown_28[4];
        shared_ptr field_32; // offset 32
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        char _unknown_56[24];
        undefined4 field_80; // offset 80
        char _unknown_84[28];
    };

    // 0x1001377e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // bgsound::~bgsound(): jumps straight to the base-object destructor

    // 0x1001377f0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // bgsound::~bgsound()
    void bgsound::~bgsound() {
        (&field_104)->~shared_ptr();
        (&field_88)->~shared_ptr();
        (&field_56)->~Array();
        field_32->~shared_ptr();
    }

    // 0x1001378b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // bgsound::bgsound(): jumps straight to the base-object constructor

    // 0x1001379c0, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // bgsound::bgsound()
    void bgsound::bgsound() {
        _func_decltype_nullptr* in_RSI;

        field_12 = 0;
        field_20 = 0;
        field_24 = 0;
        field_0 = 0;
        *(undefined8*)&field_8 = 0;
        new (field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_48 = 0;
        field_52 = 0;
        new (&field_56) Array<int, eastl::allocator>();
        field_80 = 0;
        new (&field_88, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_104, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100137c10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // bgsound::bgsound(bgsound&&): jumps straight to the base-object constructor

    // 0x100137c30, 176 bytes, base-object constructor, inline, placed by class name and debug map
    // bgsound::bgsound(bgsound&&)
    void bgsound::bgsound(bgsound* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;

        uVar1 = param_1->field_0;
        uVar2 = *(undefined8*)&param_1->field_8;
        iVar3 = param_1->field_20;
        iVar4 = param_1->field_24;
        field_12 = param_1->field_12;
        field_20 = iVar3;
        field_24 = iVar4;
        field_0 = uVar1;
        *(undefined8*)&field_8 = uVar2;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)field_32, (shared_ptr*)param_1->field_32);
        uVar5 = param_1->field_52;
        field_48 = param_1->field_48;
        field_52 = uVar5;
        new (&field_56, (Array*)&param_1->field_56) Array<int, eastl::allocator>();
        field_80 = param_1->field_80;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_88, (shared_ptr*)&param_1->field_88);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_104, (shared_ptr*)&param_1->field_104);
    }

} // namespace jag::oldscape
