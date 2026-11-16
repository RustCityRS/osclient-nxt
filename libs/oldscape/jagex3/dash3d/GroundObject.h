// libs/oldscape/jagex3/dash3d/GroundObject.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class GroundObject {
    public:
        GroundObject();
        ~GroundObject();

        // data members, from how the methods use this: 92 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[52];
        undefined8 field_64;      // offset 64
        undefined4 field_72;      // offset 72
        EntityHighlight field_76; // offset 76
    };

    // 0x100333560, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // GroundObject::GroundObject(): jumps straight to the base-object constructor

    // 0x100333570, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // GroundObject::GroundObject()
    void GroundObject::GroundObject() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_8 = 0;
        new (&field_16, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_64 = 0;
        field_72 = 0;
        new (field_76) EntityHighlight();
    }

    // 0x1003336a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GroundObject::~GroundObject(): jumps straight to the base-object destructor

    // 0x1003336b0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // GroundObject::~GroundObject()
    void GroundObject::~GroundObject() {
        (&field_48)->~shared_ptr();
        (&field_32)->~shared_ptr();
        (&field_16)->~shared_ptr();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100333600, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundObject>::ref_counter_shared(unsigned long, oldscape::dash3d::GroundObject*): jumps straight to the base-object constructor

    // 0x100333610, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundObject>::ref_counter_shared(unsigned long, oldscape::dash3d::GroundObject*)
    void ref_counter_shared<oldscape::dash3d::GroundObject>::ref_counter_shared(ulong param_1, GroundObject* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7720 + 16;
        *(ulong*)(this + 16) = param_1;
        *(GroundObject**)(this + 24) = param_2;
    }

    // 0x100333650, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundObject>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::GroundObject>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~GroundObject();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 88;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100333760, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::Wall* placement_new<oldscape::dash3d::Wall>(void*)
    Wall* placement_new<oldscape::dash3d::Wall>(void* param_1) {
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
        oldscape::dash3d::Wall::Wall(param_1);
        return param_1;
    }

    // 0x100333790, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Wall>* placement_new<ref_counter_shared<oldscape::dash3d::Wall>, int, oldscape::dash3d::Wall*&>(void*, int&&, oldscape::dash3d::Wall*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::Wall>, int, oldscape::dash3d::Wall*&>(
        void* param_1, int* param_2, Wall** param_3) {
        ref_counter_shared<oldscape::dash3d::Wall>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
