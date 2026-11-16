// libs/oldscape/jagex3/dash3d/Wall.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class Wall {
    public:
        Wall();
        ~Wall();

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[4];
        undefined8 field_4;  // offset 4
        undefined8 field_12; // offset 12
        undefined4 field_20; // offset 20
        char _unknown_24[32];
        undefined8 field_56;      // offset 56
        EntityHighlight field_64; // offset 64
    };

    // 0x1003337b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Wall::Wall(): jumps straight to the base-object constructor

    // 0x1003337c0, 96 bytes, base-object constructor, inline, placed by class name and debug map
    // Wall::Wall()
    void Wall::Wall() {
        _func_decltype_nullptr* in_RSI;

        field_4 = 0;
        field_12 = 0;
        field_20 = 0;
        new (&field_24, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_40, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_56 = 0;
        new (field_64) EntityHighlight();
    }

    // 0x1003338c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Wall::~Wall(): jumps straight to the base-object destructor

    // 0x1003338d0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // Wall::~Wall()
    void Wall::~Wall() {
        (&field_40)->~shared_ptr();
        (&field_24)->~shared_ptr();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100333820, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Wall>::ref_counter_shared(unsigned long, oldscape::dash3d::Wall*): jumps straight to the base-object constructor

    // 0x100333830, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Wall>::ref_counter_shared(unsigned long, oldscape::dash3d::Wall*)
    void ref_counter_shared<oldscape::dash3d::Wall>::ref_counter_shared(ulong param_1, Wall* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Wall**)(this + 24) = param_2;
    }

    // 0x100333870, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Wall>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::Wall>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Wall();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100333980, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::Decor* placement_new<oldscape::dash3d::Decor>(void*)
    Decor* placement_new<oldscape::dash3d::Decor>(void* param_1) {
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
        *(undefined8*)((long)param_1 + 80) = 0;
        oldscape::dash3d::Decor::Decor(param_1);
        return param_1;
    }

    // 0x1003339c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Decor>* placement_new<ref_counter_shared<oldscape::dash3d::Decor>, int, oldscape::dash3d::Decor*&>(void*, int&&, oldscape::dash3d::Decor*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::Decor>, int, oldscape::dash3d::Decor*&>(
        void* param_1, int* param_2, Decor** param_3) {
        ref_counter_shared<oldscape::dash3d::Decor>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
