// libs/game/runetek5/clientoptions/options/ClientOptions_GameRenderScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class GameRenderScale : public InterfaceScale // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GameRenderScale();
        virtual void GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      unsigned int arg3);
        GameRenderScale(graphics::RT7Core& rt7Core, Settings& settings, const char* str);
    };

    // 0x100600200
    GameRenderScale::~GameRenderScale() {
        operator delete(this);
    }

} // namespace jag::game::option
