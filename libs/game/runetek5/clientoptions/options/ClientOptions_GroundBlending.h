// libs/game/runetek5/clientoptions/options/ClientOptions_GroundBlending.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class GroundBlending {
    public:
        // virtual methods in vtable order
        virtual ~GroundBlending();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        virtual bool IsSafeToSet();
        GroundBlending(graphics::RT7Core& rt7Core, Settings& settings, const char* str, Textures* textures);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumOptionToggle>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[216];
        Textures* field_256;
    };

    // 0x100600240
    bool GroundBlending::IsSafeToSet() {
        uint64_t uVar2;

        bool cVar1 = IsSafeToSet();
        if (!cVar1) {
            uVar2 = 0;
        } else {
            cVar1 = (&field_208)->operator_cast_to_bool();
            uVar2 = 1;
            if (cVar1) {
                uVar2 = std::function<bool()>::operator()((function<bool()>*)&field_208);
            }
        }
        return uVar2;
    }

    // 0x1006114b0
    GroundBlending::~GroundBlending() {
        field_208.~function();
    }

} // namespace jag::game::option
