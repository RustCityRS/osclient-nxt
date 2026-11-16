// libs/graphics/runetek7/gui/GUIManagerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class GUIManagerState
        : public game::PlayerGroupDelta::PlayerGroupDeltaEntry // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GUIManagerState();
        GUIManagerState(GUIManager&);

        // data members, from how the methods use this: 16 bytes, the first 8 are PlayerGroupDeltaEntry
        GUIManager* field_8; // offset 8
    };

    class GUIProjectionSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~GUIProjectionSaveRestore();
        GUIProjectionSaveRestore(GUIManager&);

        // data members, from how the methods use this: 36 bytes
        undefined** field_0; // offset 0, vtable pointer
        GUIManager* field_8; // offset 8
        uint field_16;       // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        char _unknown_28[8];
    };

    // 0x1008f3570, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // GUIManagerState::GUIManagerState(GUIManager&)
    void GUIManagerState::GUIManagerState(GUIManager* param_1) {
        field_0 = PTR_vtable_100ee8778 + 16;
        field_8 = param_1;
    }

    // 0x1008f35d0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // GUIProjectionSaveRestore::GUIProjectionSaveRestore(GUIManager&): jumps straight to the base-object constructor

    // 0x1008f35e0, 176 bytes, base-object destructor, placed by debug map only (low confidence)
    // GUIProjectionSaveRestore::~GUIProjectionSaveRestore()
    void GUIProjectionSaveRestore::~GUIProjectionSaveRestore() {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        uint uVar3;
        GUIManager* this_01;
        vector* pvVar4;
        int* piVar5;
        uint* puVar6;
        type* ptVar7;

        field_0 = &PTR__GUIProjectionSaveRestore_100f186a8;
        ptVar7 = (type*)(ulong)field_16;
        (field_8, ptVar7, field_20, field_24)->SetProjection();
        this_01 = field_8;
        this_00 = &field_28;
        pvVar4 = this_00->SSOBeginPtr(ptVar7);
        iVar1 = *(int*)pvVar4;
        piVar5 = (int*)this_00->y();
        iVar2 = *piVar5;
        puVar6 = (uint*)this_00->second();
        uVar3 = *puVar6;
        puVar6 = (uint*)this_00->qw();
        this_01->SetProjectionOverride(iVar1, iVar2, uVar3, *puVar6);
        ~AutoSingleton();
    }

    // 0x1008f3690, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // GUIProjectionSaveRestore::~GUIProjectionSaveRestore(): jumps straight to the base-object destructor

    // 0x1008f36a0, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // GUIProjectionSaveRestore::~GUIProjectionSaveRestore()
    void GUIProjectionSaveRestore::~GUIProjectionSaveRestore() {
        ~GUIProjectionSaveRestore(this);
        operator_delete(this);
    }

} // namespace jag::graphics
