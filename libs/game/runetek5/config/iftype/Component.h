// libs/game/runetek5/config/iftype/Component.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class GameUIHookProperties {
    public:
        // virtual methods in vtable order
        virtual ~GameUIHookProperties();
        virtual byte Decode(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void HasHook(ui::UIHook) const;
        virtual void HasInputHooks() const;
        bool DecodeComponentHook(HookType, PacketT<Array<unsigned char, eastl::allocator>>&);
        void DecodeTransmitList(PacketT<Array<unsigned char, eastl::allocator>>&,
                                eastl::fixed_vector<int, 1ul, true, eastl::allocator>&);
        void HasHook(HookType) const;
        GameUIHookProperties();

        // data members, from how the methods use this: 22372 bytes
        undefined** field_0; // offset 0, vtable pointer
        RT7Core field_8;     // offset 8
    };

    // 0x100547250, 16 bytes, inline, placed by debug map only (low confidence)
    // GameUIHookProperties::HasHook(HookType) const
    void GameUIHookProperties::HasHook() {
        field_8->HasHook();
    }

    // 0x10054d2f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // GameUIHookProperties::GameUIHookProperties(): jumps straight to the base-object constructor

    // 0x10054d310, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // GameUIHookProperties::GameUIHookProperties()
    void GameUIHookProperties::GameUIHookProperties() {
        new (this) ui::UIHookProperties();
        field_0 = &PTR__GameUIHookProperties_100f04068;
        new (field_8) HookProperties();
    }

} // namespace jag::game

namespace jag::ui {
    // 0x100547960, 16 bytes, inline, placed by debug map only (low confidence)
    // ComponentOpConfig::SetTargetVerb(char const*)
    void ComponentOpConfig::SetTargetVerb(char* param_1) {
        (&field_104, param_1)->assign();
    }

    // 0x100547970, 16 bytes, inline, placed by debug map only (low confidence)
    // ComponentCursorConfig::SetValidTargetCursor(int)
    void ComponentCursorConfig::SetValidTargetCursor(int param_1) {
        m_validTargetCursor = (short)param_1;
    }

    // 0x100547980, 16 bytes, inline, placed by debug map only (low confidence)
    // ComponentCursorConfig::SetInvalidTargetCursor(int)
    void ComponentCursorConfig::SetInvalidTargetCursor(int param_1) {
        m_invalidTargetCursor = (short)param_1;
    }

    // 0x100547990, 16 bytes, inline, placed by debug map only (low confidence)
    // ComponentCursorConfig::SetMouseOverCursor(int)
    void ComponentCursorConfig::SetMouseOverCursor(int param_1) {
        m_mouseOverCursor = (short)param_1;
    }

} // namespace jag::ui
