// libs/game/shared/framework/input/Mouse.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Mouse {
    public:
        GetScaledMousePosition() const;
        GetOldestClick() const;
        Mouse(input::InputHandler&, graphics::ScaleManager&);
        void Init(input::InputHandler&, graphics::ScaleManager&);
        ~Mouse();
        void SetPosition(float, float, graphics::ScaleManager const&);
        void OnMove(float, float, graphics::ScaleManager const&);
        GetAndRemoveOldestMove();
        void OnScroll(float, float, float, float);
        void DoClick(float, float, MouseEventType, MouseButton, graphics::ScaleManager const&);
        void Reset();

        // data members, from how the methods use this: 10452 bytes
        InputHandler* field_0; // offset 0
        char _unknown_8[420];
        float field_428; // offset 428
        char _unknown_432[2000];
        uint field_2432; // offset 2432
        uint field_2436; // offset 2436
        char _unknown_2440[8000];
        uint field_10440; // offset 10440
        uint field_10444; // offset 10444
        char _unknown_10448[4];
    };

    class MouseEvent {
    public:
        MouseEvent();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[32];
        undefined4 field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x1004282f0, 48 bytes, inline, placed by class name and debug map
    // Mouse::GetOldestClick() const
    undefined8 Mouse::GetOldestClick() {
        undefined8 uVar1;

        if (field_2436 == field_2432) {
            return 0;
        }
        uVar1 = std::array<MouseEvent, 50ul>::operator[]((array<MouseEvent, 50ul>*)&field_432, (ulong)field_2436);
        return uVar1;
    }

} // namespace jag::game
