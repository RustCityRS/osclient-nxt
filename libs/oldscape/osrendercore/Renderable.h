// libs/oldscape/osrendercore/Renderable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class Renderable {
    public:
        class Storage;
        GetTriangle();
        GetUISceneSettings();
        GetModel();
        Render(TriangleVertexData*, unsigned int, RenderState&,
               eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                                     eastl::allocator>&,
               unsigned int) const;
        Renderable(RenderableType);
        Renderable(Renderable&&);

        // data members, from how the methods use this: 56 bytes
        char field_0; // offset 0
        char _unknown_1[15];
        UISceneSettings field_16; // offset 16
        char _unknown_40[8];
        int field_48; // offset 48
        char _unknown_52[4];
    };

    class Renderable::Storage {
    public:
        Storage();
        Storage(Storage const&);

        // data members, from how the methods use this: 72 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined4 field_64; // offset 64
        char _unknown_68[4];
    };

    class RenderableOutput {
    public:
        RenderableOutput* operator=(RenderableOutput&&);
        int GetTotalVertCount() const;
        RenderableOutput(RenderableMode, unsigned int);
        RenderableOutput(RenderableOutput&&);

        // data members, from how the methods use this: 64 bytes
        undefined1 field_0;       // offset 0
        undefined3 field_1;       // offset 1
        undefined4 field_4;       // offset 4
        int field_8;              // offset 8
        int field_12;             // offset 12
        UISceneSettings field_16; // offset 16
        char _unknown_40[8];
        Callstack field_48; // offset 48
    };

    class RenderableOverlay {
    public:
        RenderableOverlay();
    };

    class TriangleRenderable {
    public:
        Render(TriangleVertexData*, unsigned int, RenderState&,
               eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                                     eastl::allocator>&,
               unsigned int) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100102c80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RenderableOverlay::RenderableOverlay(): jumps straight to the base-object constructor

    // 0x1001c0540, 192 bytes, inline, placed by class name
    // Renderable::Render(TriangleVertexData*, unsigned int, RenderState&, eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, unsigned int) const
    Renderable* Renderable::Render(TriangleVertexData* param_1, uint param_2, RenderState* param_3,
                                   fixed_hash_map* param_4, uint param_5) {
        TriangleVertexData TVar1;
        int local_1c;

        TVar1 = *param_1;
        if (TVar1 == (TriangleVertexData)2) {
            new (this) RenderableOutput(5, 0);
            UISceneSettings::operator=((UISceneSettings*)field_16, (UISceneSettings*)(param_1 + 4));
            local_1c = 0;
            new (&local_1c) callstack::Callstack();
            field_48 = local_1c;
        } else if (TVar1 == (TriangleVertexData)1) {
            Render(param_1 + 4, param_2, param_3, param_4, param_5);
        } else {
            if (TVar1 != (TriangleVertexData)0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "osrendercore/Renderable.h",
                                136, (char*)0);
            }
            Render(param_1 + 4, param_2, param_3, param_4, param_5);
        }
        return this;
    }

    // 0x1001c0720, 48 bytes, inline, placed by class header (inline)
    // RenderableOutput::operator=(RenderableOutput&&)
    /* RenderableOutput::TEMPNAMEPLACEHOLDERVALUE(RenderableOutput&&) */

    RenderableOutput* RenderableOutput::operator=(RenderableOutput* param_1) {
        undefined3 uVar1;
        undefined4 uVar2;
        int iVar3;
        int iVar4;

        uVar1 = param_1->field_1;
        uVar2 = param_1->field_4;
        iVar3 = param_1->field_8;
        iVar4 = param_1->field_12;
        field_0 = param_1->field_0;
        field_1 = uVar1;
        field_4 = uVar2;
        field_8 = iVar3;
        field_12 = iVar4;
        UISceneSettings::operator=((UISceneSettings*)field_16, (UISceneSettings*)param_1->field_16);
        *(undefined4*)field_48 = *(undefined4*)param_1->field_48;
        return this;
    }

    // 0x1001c07d0, 16 bytes, inline, placed by class header (inline)
    // RenderableOutput::GetTotalVertCount() const
    int RenderableOutput::GetTotalVertCount() {
        return field_8 + field_4 + field_12;
    }

    // 0x1001c4c80, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // RenderableOutput::RenderableOutput(RenderableMode, unsigned int): jumps straight to the base-object constructor

    // 0x1001c4d40, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // RenderableOutput::RenderableOutput(RenderableOutput&&): jumps straight to the base-object constructor

    // 0x1001e0410, 16 bytes, complete-object constructor, inline, placed by class name
    // Renderable::Renderable(RenderableType): jumps straight to the base-object constructor

    // 0x1001e0540, 32 bytes, base-object constructor, inline, placed by class name
    // Renderable::Renderable(RenderableType)
    void Renderable::Renderable(NpcUID* param_2, NpcUID* param_3) {
        field_0 = (char)param_2;
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&field_4, param_2, param_3);
    }

    // 0x1001e0790, 16 bytes, complete-object constructor, inline, placed by class name
    // Renderable::Renderable(Renderable&&): jumps straight to the base-object constructor

    // 0x1001e07a0, 32 bytes, base-object constructor, inline, placed by class name
    // Renderable::Renderable(Renderable&&)
    void Renderable::Renderable(Renderable* param_1) {
        field_0 = param_1->field_0;
        new (&field_4, (Storage*)&param_1->field_4) Storage();
    }

    // 0x1001e07c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Renderable::Storage::Storage(Renderable::Storage const&): jumps straight to the base-object constructor

    // 0x1001e07d0, 48 bytes, base-object constructor, inline, placed by class name
    // Renderable::Storage::Storage(Renderable::Storage const&)
    void Renderable::Storage::Storage(Storage* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        field_64 = param_1->field_64;
        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_16;
        uVar4 = param_1->field_24;
        uVar5 = param_1->field_32;
        uVar6 = param_1->field_40;
        uVar7 = param_1->field_56;
        field_48 = param_1->field_48;
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
    }

} // namespace jag

namespace jag::game {
    // 0x100102c80: the linker folded this into RenderableOverlay::RenderableOverlay(), which has identical code
    GamepadEvent::GamepadEvent();

} // namespace jag::game
