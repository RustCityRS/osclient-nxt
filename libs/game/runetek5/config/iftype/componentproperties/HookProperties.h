// libs/game/runetek5/config/iftype/componentproperties/HookProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class HookProperties {
    public:
        uint8_t* GetOnVarCStrTransmitVars();
        uint8_t* GetOnVarpTransmitVarps();
        uint8_t* GetOnInvTransmitInvs();
        uint8_t* GetOnVarCTransmitVars();
        uint8_t* GetOnStatTransmitStats();
        Hook* GetHook(HookType hookType) const;
        void AddHook(HookType hookType, const Hook& hook);
        void HasHook(HookType hookType) const;
        ~HookProperties();
        bool HasInputHooks() const;
        HookProperties();

    private:
        uint8_t _unknown_0[8];
        uint64_t field_8;
        uint8_t _unknown_16[320];
        uint64_t field_336;
        uint8_t _unknown_344[4];
        uint64_t field_348;
        uint64_t field_356;
    };

    // 0x100549570
    void HookProperties::HasHook(HookType hookType) const {
        field_40[(unsigned long)hookType];
    }

    // 0x100549fc0
    GameUIHookProperties::~GameUIHookProperties() {
        field_8->~HookProperties();
    }

    // 0x10054a000
    HookProperties::~HookProperties() {
        field_288.~fixed_vector();
        field_240.~fixed_vector();
        field_192.~fixed_vector();
        field_144.~fixed_vector();
        field_96.~fixed_vector();
        field_48.~fixed_vector();
    }

    // 0x10054a190
    bool HookProperties::HasInputHooks() const {
        unsigned int uVar1 = field_40.HeapBeginPtr();
        return (uVar1 & 131071) != 0;
    }

    // 0x10054d380
    HookProperties::HookProperties()
        : eastl::vector_map<unsigned char, Hook>(), field_348(0), field_356(0), field_336(0) {
        *(uint64_t*)&field_344 = 0;
    }

} // namespace jag::game
