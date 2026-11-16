// libs/oldscape/jagex3/dash3d/QuickGround.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100332f90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::QuickGround>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::QuickGround*): jumps straight to the base-object constructor

    // 0x100332fa0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::QuickGround>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::QuickGround*)
    void ref_counter_shared_trivial<oldscape::dash3d::QuickGround>::ref_counter_shared_trivial(ulong param_1,
                                                                                               QuickGround* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d08 + 16;
    }

    // 0x100333050, 240 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::Ground* placement_new<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&>(void*, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&)
    Ground* jag::placement_new<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&,
                               int&, int&, int&, int&, int&, int&, int&, int&, int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        int* param_9, int* param_10, int* param_11, int* param_12, int* param_13, int* param_14, int* param_15,
        int* param_16, int* param_17, int* param_18, int* param_19, int* param_20) {
        oldscape::dash3d::Ground::Ground(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, *param_7, *param_8,
                                         *param_9, *param_10, *param_11, *param_12, *param_13, *param_14, *param_15,
                                         *param_16, *param_17, *param_18, *param_19, *param_20);
        return param_1;
    }

    // 0x100333140, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Ground>* placement_new<ref_counter_shared<oldscape::dash3d::Ground>, int, oldscape::dash3d::Ground*&>(void*, int&&, oldscape::dash3d::Ground*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::Ground>, int, oldscape::dash3d::Ground*&>(
        void* param_1, int* param_2, Ground** param_3) {
        ref_counter_shared<oldscape::dash3d::Ground>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100333160, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Ground>::ref_counter_shared(unsigned long, oldscape::dash3d::Ground*): jumps straight to the base-object constructor

    // 0x100333170, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Ground>::ref_counter_shared(unsigned long, oldscape::dash3d::Ground*)
    void ref_counter_shared<oldscape::dash3d::Ground>::ref_counter_shared(ulong param_1, Ground* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Ground**)(this + 24) = param_2;
    }

    // 0x1003331b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Ground>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::Ground>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Ground();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 360;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class QuickGround {
    public:
        QuickGround(int, int, int, int, int, int, bool, bool);

        // data members, from how the methods use this: 28 bytes
        int field_0;   // offset 0
        int field_4;   // offset 4
        int field_8;   // offset 8
        int field_12;  // offset 12
        int field_16;  // offset 16
        int field_20;  // offset 20
        bool field_24; // offset 24
        bool field_25; // offset 25
        char _unknown_26[2];
    };

    // 0x100332f30, 48 bytes, complete-object constructor, inline, placed by class name and debug map
    // QuickGround::QuickGround(int, int, int, int, int, int, bool, bool)
    void QuickGround::QuickGround(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  bool param_7, bool param_8) {
        QuickGround(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x100332f60, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // QuickGround::QuickGround(int, int, int, int, int, int, bool, bool)
    void QuickGround::QuickGround(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  bool param_7, bool param_8) {
        field_4 = param_1;
        field_8 = param_2;
        field_12 = param_3;
        field_16 = param_4;
        field_20 = param_5;
        field_0 = param_6;
        field_24 = param_7;
        field_25 = param_8;
    }

} // namespace jag::oldscape::dash3d
