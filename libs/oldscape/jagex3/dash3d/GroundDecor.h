// libs/oldscape/jagex3/dash3d/GroundDecor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::oldscape::dash3d {
    class GroundDecor {
    public:
        ~GroundDecor();
        GroundDecor();

        // data members, from how the methods use this: 60 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[20];
        undefined8 field_32;      // offset 32
        undefined4 field_40;      // offset 40
        EntityHighlight field_44; // offset 44
    };

    // 0x1000694d0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    GroundDecor::~GroundDecor();

    // 0x1000782e0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    GroundDecor::~GroundDecor();

    // 0x100333360, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // GroundDecor::GroundDecor(): jumps straight to the base-object constructor

    // 0x100333370, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // GroundDecor::GroundDecor()
    void GroundDecor::GroundDecor() {
        field_0 = 0;
        field_8 = 0;
        new (&field_16, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_32 = 0;
        field_40 = 0;
        new (field_44) EntityHighlight();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1003333c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundDecor>::ref_counter_shared(unsigned long, oldscape::dash3d::GroundDecor*): jumps straight to the base-object constructor

    // 0x1003333d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundDecor>::ref_counter_shared(unsigned long, oldscape::dash3d::GroundDecor*)
    void ref_counter_shared<oldscape::dash3d::GroundDecor>::ref_counter_shared(ulong param_1, GroundDecor* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7710 + 16;
        *(ulong*)(this + 16) = param_1;
        *(GroundDecor**)(this + 24) = param_2;
    }

    // 0x100333410, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundDecor>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::GroundDecor>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~InterfaceMouseEvent();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 56;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100333500, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::GroundObject* placement_new<oldscape::dash3d::GroundObject>(void*)
    GroundObject* placement_new<oldscape::dash3d::GroundObject>(void* param_1) {
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
        oldscape::dash3d::GroundObject::GroundObject(param_1);
        return param_1;
    }

    // 0x100333540, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundObject>* placement_new<ref_counter_shared<oldscape::dash3d::GroundObject>, int, oldscape::dash3d::GroundObject*&>(void*, int&&, oldscape::dash3d::GroundObject*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::GroundObject>, int, oldscape::dash3d::GroundObject*&>(
        void* param_1, int* param_2, GroundObject** param_3) {
        ref_counter_shared<oldscape::dash3d::GroundObject>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::game::option {
    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    GroundDecor::~GroundDecor();

    // 0x100608a60, 16 bytes, complete-object constructor, inline, placed by class name
    // GroundDecor::GroundDecor(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    GroundDecor::~GroundDecor();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    GroundDecor::~GroundDecor();

    // 0x10060f8b0, 96 bytes, base-object constructor, inline, placed by class name
    // GroundDecor::GroundDecor(graphics::RT7Core&, Settings&, char const*)
    void GroundDecor::GroundDecor(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee84f8 + 16;
    }

} // namespace jag::game::option
