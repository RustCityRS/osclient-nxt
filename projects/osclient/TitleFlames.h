// projects/osclient/TitleFlames.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class TitleFlames {
    public:
        void Close();
        void RenderFlames(int, int, graphics::Pix2D&);
        void UpdateFlames(int);
        void DrawFlames(int, graphics::Pix2D&);
        void SetupFire();
        void GenerateFlameCoolingMap(graphics::Pix8*);
        uint Merge(int, int, int);
        void DoBlend(int, std::array<int, 256ul>&);
        void DrawSingleFlame(graphics::Pix2D&, int);
        TitleFlames(Array<graphics::Pix8, eastl::allocator>&&);
        ~TitleFlames();

        // data members, from how the methods use this: 529460 bytes
        char _unknown_0[8];
        ulong field_8; // offset 8
        long field_16; // offset 16
        char _unknown_24[1024];
        int field_1048; // offset 1048
        char _unknown_1052[4096];
        int field_5148; // offset 5148
        int field_5152; // offset 5152
        char _unknown_5156[524288];
        uint field_529444; // offset 529444
        int field_529448;  // offset 529448
        int field_529452;  // offset 529452
        char _unknown_529456[4];
    };

    // 0x10011f810, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TitleFlames::TitleFlames(Array<graphics::Pix8, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x1001316e0, 112 bytes, base-object constructor, inline, placed by class name
    // TitleFlames::TitleFlames(Array<graphics::Pix8, eastl::allocator>&&)
    void TitleFlames::TitleFlames(Array* param_1) {
        new (this) Array<graphics::Pix8, eastl::allocator>();
        field_1048 = 0;
        field_5148 = 0;
        field_5152 = 0;
        field_529444 = 0;
        field_529448 = 0;
        field_529452 = 0;
        Array<graphics::Pix8, eastl::allocator>::operator=((Array<graphics::Pix8, eastl::allocator>*)this, param_1);
        SetupFire(this);
    }

    // 0x1001565d0, 16 bytes, complete-object destructor, inline, placed by class name
    // TitleFlames::~TitleFlames(): jumps straight to the base-object destructor

    // 0x1001565e0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // TitleFlames::~TitleFlames()
    /* graphics::pix8multi::~pix8multi() */

    void graphics::pix8multi::~pix8multi() {
        ~Array();
    }

} // namespace jag::oldscape

namespace jag::oldscape::graphics {
    // 0x1001565d0: the linker folded this into TitleFlames::~TitleFlames(), which has identical code
    pix8multi::~pix8multi();

    // 0x1001565e0: the linker folded this into TitleFlames::~TitleFlames(), which has identical code
    pix8multi::~pix8multi();

} // namespace jag::oldscape::graphics

namespace jag {
    // 0x10011f860, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::MidiRequest>::type make_shared<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const (&) [11], char const (&) [1], int&, bool>(oldscape::jagex3::Js5*&&, char const (&) [11], char const (&) [1], int&, bool&&)
    jag* jag::make_shared<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const (&)[11], char const (&)[1],
                          int&, bool>(Js5** param_1, char* param_2, char* param_3, int* param_4, bool* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        MidiRequest* local_40[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const(&)[11], char const(&)[1],
                              int&, bool>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::midi2::MidiRequest>, int, oldscape::midi2::MidiRequest*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
