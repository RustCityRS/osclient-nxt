// libs/game/runetek5/config/iftype/componentproperties/Hook.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game {
    class Hook {
    public:
        void SetScriptID(unsigned int arg1);
        unsigned int GetScriptID() const;
        Hook(const Hook& hook);
        Hook* operator=(const Hook& hook);
        Hook(unsigned int arg1);
        void SetArg(int arg1, const VarValue& varValue);
        Hook();
        ~Hook();
        Hook(Hook&& hook);
        Hook* operator=(Hook&& hook);
        bool IsInit() const;

    private:
        unsigned int m_scriptID;
        uint8_t _unknown_4[12];
    };

    // 0x10000c2f0: Hook::SetScriptID(unsigned int) has the same machine code as math::Rect<int>::SetX(int)

    // 0x1000b9960: Hook::GetScriptID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1003b8770
    Hook::Hook(const Hook& hook) : m_scriptID(hook.m_scriptID), field_8(&hook.field_8) {}

    // 0x100536350
    Hook* Hook::operator=(const Hook& hook) {
        m_scriptID = hook.m_scriptID;
        field_8 = hook.field_8;
        return this;
    }

    // 0x100547280
    void Hook::SetArg(int arg1, const VarValue& varValue) {
        VarValue* this_00 = &field_8[(long)arg1];
        *this_00 = varValue;
    }

    // 0x1005495d0
    Hook::Hook(unsigned int arg1) : m_scriptID(4294967294), field_8((unsigned long)arg1) {}

    // 0x100902ac0
    Hook::Hook() : m_scriptID(4294967294) {}

    // 0x100903240
    Hook::~Hook() {
        field_8.~fixed_vector();
    }

    // 0x100903270
    Hook::Hook(Hook&& hook) : m_scriptID(hook.m_scriptID), field_8(&hook.field_8) {}

    // 0x1009046e0
    Hook* Hook::operator=(Hook&& hook) {
        m_scriptID = hook.m_scriptID;
        field_8 = hook.field_8;
        return this;
    }

    // 0x100904770
    bool Hook::IsInit() const {
        return m_scriptID != 4294967294;
    }

} // namespace jag::game
