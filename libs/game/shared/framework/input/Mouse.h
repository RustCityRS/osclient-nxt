// libs/game/shared/framework/input/Mouse.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Mouse {
    public:
        uint8_t* GetScaledMousePosition() const;
        uint64_t GetOldestClick() const;
        Mouse(input::InputHandler& inputHandler, graphics::ScaleManager& scaleManager);
        void Init(input::InputHandler& inputHandler, graphics::ScaleManager& scaleManager);
        ~Mouse();
        void SetPosition(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        void OnMove(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint64_t GetAndRemoveOldestMove();
        void OnScroll(float arg1, float arg2, float arg3, float arg4);
        void DoClick(float arg1, float arg2, MouseEventType mouseEventType, MouseButton mouseButton,
                     const graphics::ScaleManager& scaleManager);
        void Reset();

    private:
        InputHandler* field_0;
        uint8_t _unknown_8[420];
        float field_428;
        uint8_t _unknown_432[2000];
        unsigned int field_2432;
        unsigned int field_2436;
        uint8_t _unknown_2440[8000];
        unsigned int field_10440;
        unsigned int field_10444;
        uint8_t _unknown_10448[4];
    };

    class MouseEvent {
    public:
        MouseEvent();

    private:
        uint8_t _unknown_0[32];
        uint32_t field_32;
        uint8_t _unknown_36[4];
    };

    // 0x1004282f0
    uint64_t Mouse::GetOldestClick() const {
        if (field_2436 == field_2432) {
            return 0;
        }
        return field_432[(unsigned long)field_2436];
    }

} // namespace jag::game
