// libs/graphics/runetek7/gui/GUIManagerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class GUIManagerState
        : public game::PlayerGroupDelta::PlayerGroupDeltaEntry // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GUIManagerState();
        GUIManagerState(GUIManager& guiManager);

    private:
        GUIManager* field_8;
    };

    class GUIProjectionSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~GUIProjectionSaveRestore();
        GUIProjectionSaveRestore(GUIManager& guiManager);

    private:
        GUIManager* field_8;
        uint32_t field_16;
        uint32_t field_20;
        uint32_t field_24;
        uint8_t _unknown_28[8];
    };

    // 0x1008f3570
    GUIManagerState::GUIManagerState(GUIManager& guiManager) : field_8(guiManager) {}

    // 0x1008f35e0
    GUIProjectionSaveRestore::~GUIProjectionSaveRestore() {
        field_8->SetProjection(field_16, field_20, field_24);
        GUIManager* this_01 = field_8;
        uint8_t* this_00 = &field_28;
        int* piVar1 = (int*)this_00->SSOBeginPtr();
        int arg1 = *piVar1;
        piVar1 = (int*)this_00->y();
        int arg2 = *piVar1;
        auto puVar2 = this_00->second();
        unsigned int arg3 = *puVar2;
        puVar2 = (unsigned int*)this_00->qw();
        this_01->SetProjectionOverride(arg1, arg2, arg3, *puVar2);
    }

} // namespace jag::graphics
