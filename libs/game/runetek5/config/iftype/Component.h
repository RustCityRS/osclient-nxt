// libs/game/runetek5/config/iftype/Component.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    // 0x100547960
    void ComponentOpConfig::SetTargetVerb(const char* str) {
        (&field_104)->assign(str);
    }

    // 0x100547970
    void ComponentCursorConfig::SetValidTargetCursor(int arg1) {
        m_validTargetCursor = (short)arg1;
    }

    // 0x100547980
    void ComponentCursorConfig::SetInvalidTargetCursor(int arg1) {
        m_invalidTargetCursor = (short)arg1;
    }

    // 0x100547990
    void ComponentCursorConfig::SetMouseOverCursor(int arg1) {
        m_mouseOverCursor = (short)arg1;
    }

} // namespace jag::ui

namespace jag::game {
    class GameUIHookProperties {
    public:
        // virtual methods in vtable order
        virtual ~GameUIHookProperties();
        virtual uint8_t Decode(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void HasHook(ui::UIHook uiHook) const;
        virtual void HasInputHooks() const;
        bool DecodeComponentHook(HookType hookType, PacketT<Array<unsigned char>>& arg2);
        void DecodeTransmitList(PacketT<Array<unsigned char>>& arg1, eastl::fixed_vector<int, 1ul>& arg2);
        void HasHook(HookType hookType) const;
        GameUIHookProperties();

    private:
        RT7Core field_8;
    };

    // 0x100547250
    void GameUIHookProperties::HasHook(HookType hookType) const {
        field_8->HasHook(hookType);
    }

    // 0x10054d310
    GameUIHookProperties::GameUIHookProperties() : ui::UIHookProperties() {}

} // namespace jag::game
