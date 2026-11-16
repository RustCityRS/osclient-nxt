// libs/console/Snow.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::console {
    class Snow : public PlayerGroupDelta::PlayerGroupDeltaEntry // base inferred from shared vtable slots
    {
    public:
        class SnowFlake;
        // virtual methods in vtable order
        virtual ~Snow();
        GetSnowFlakes() const;
        GetSnowPiles() const;
        Snow();
        void MainDraw(int, int, int, int);
        void MoveSnowFlakes(int, int, int, int);
        void GenerateSnowFlakes(int, int, int, int);
        void AddToPile(int);
        static /* 8 bytes */ ENABLE_SNOW;

        // data members, from how the methods use this: 112 bytes, the first 8 are PlayerGroupDeltaEntry
        char _unknown_8[32];
        undefined1 field_40; // offset 40
        char _unknown_41[31];
        long field_72; // offset 72
        long field_80; // offset 80
        char _unknown_88[8];
        undefined4 field_96; // offset 96
        char _unknown_100[4];
        undefined8 field_104; // offset 104
    };

    class Snow::SnowFlake {
    public:
        SnowFlake(int, int, float);

        // data members, from how the methods use this: 28 bytes
        float field_0;       // offset 0
        float field_4;       // offset 4
        float field_8;       // offset 8
        float field_12;      // offset 12
        undefined4 field_16; // offset 16
        float field_20;      // offset 20
        undefined1 field_24; // offset 24
        char _unknown_25[3];
    };

    // 0x100067280, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Snow::GetSnowPiles() const
    /* eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
   eastl::allocator>::get_overflow_allocator() */

    fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*
    eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>::get_overflow_allocator(
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this) {
        return this + 40;
    }

    // 0x1000797f0, 64 bytes, base-object destructor, inline, placed by class name
    // Snow::~Snow()
    void Snow::~Snow() {
        field_0 = PTR_vtable_100ee85e8 + 16;
        (&field_40)->~vector();
        (&field_8)->~FastPool();
    }

} // namespace jag::game::console

namespace jag::oldscape::widgets {
    class BorderStyle {
    public:
        BorderStyle(bool, bool, bool, bool);
    };

    // 0x100067290, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BorderStyle::BorderStyle(bool, bool, bool, bool): jumps straight to the base-object constructor

} // namespace jag::oldscape::widgets
