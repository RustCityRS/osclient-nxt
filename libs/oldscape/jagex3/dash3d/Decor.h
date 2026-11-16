// libs/oldscape/jagex3/dash3d/Decor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100333a50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Decor>::ref_counter_shared(unsigned long, oldscape::dash3d::Decor*): jumps straight to the base-object constructor

    // 0x100333a60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Decor>::ref_counter_shared(unsigned long, oldscape::dash3d::Decor*)
    void ref_counter_shared<oldscape::dash3d::Decor>::ref_counter_shared(ulong param_1, Decor* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Decor**)(this + 24) = param_2;
    }

    // 0x100333aa0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Decor>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::Decor>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Decor();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 88;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100333bb0, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::Sprite* placement_new<oldscape::dash3d::Sprite>(void*)
    Sprite* placement_new<oldscape::dash3d::Sprite>(void* param_1) {
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
        *(undefined8*)((long)param_1 + 96) = 0;
        oldscape::dash3d::Sprite::Sprite(param_1);
        return param_1;
    }

    // 0x100333bf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Sprite>* placement_new<ref_counter_shared<oldscape::dash3d::Sprite>, int, oldscape::dash3d::Sprite*&>(void*, int&&, oldscape::dash3d::Sprite*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::Sprite>, int, oldscape::dash3d::Sprite*&>(
        void* param_1, int* param_2, Sprite** param_3) {
        ref_counter_shared<oldscape::dash3d::Sprite>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100333c60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Sprite>::ref_counter_shared(unsigned long, oldscape::dash3d::Sprite*): jumps straight to the base-object constructor

    // 0x100333c70, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Sprite>::ref_counter_shared(unsigned long, oldscape::dash3d::Sprite*)
    void ref_counter_shared<oldscape::dash3d::Sprite>::ref_counter_shared(ulong param_1, Sprite* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Sprite**)(this + 24) = param_2;
    }

    // 0x100333cb0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Sprite>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::Sprite>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Sprite();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 104;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class Decor {
    public:
        Decor();
        ~Decor();

        // data members, from how the methods use this: 92 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[4];
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        char _unknown_28[36];
        undefined8 field_64;      // offset 64
        undefined4 field_72;      // offset 72
        EntityHighlight field_76; // offset 76
    };

    // 0x1003339e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Decor::Decor(): jumps straight to the base-object constructor

    // 0x1003339f0, 96 bytes, base-object constructor, inline, placed by class name and debug map
    // Decor::Decor()
    void Decor::Decor() {
        _func_decltype_nullptr* in_RSI;

        field_12 = 0;
        field_20 = 0;
        field_0 = 0;
        *(undefined8*)&field_8 = 0;
        new (&field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_64 = 0;
        field_72 = 0;
        new (field_76) EntityHighlight();
    }

    // 0x100333af0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Decor::~Decor(): jumps straight to the base-object destructor

    // 0x100333b00, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // Decor::~Decor()
    void Decor::~Decor() {
        (&field_48)->~shared_ptr();
        (&field_32)->~shared_ptr();
    }

} // namespace jag::oldscape::dash3d
