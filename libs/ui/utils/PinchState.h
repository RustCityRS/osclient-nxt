// libs/ui/utils/PinchState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class PinchState {
    public:
        SetVerticallyPinched(bool);
        void Init(shared_ptr<Component> const&, std::pair<PinchPoint, PinchPoint> const&);
        void SetComponent(shared_ptr<Component> const&);
        void SetStartPinchPair(std::pair<PinchPoint, PinchPoint> const&);
        void SetCurrentPinchPair(std::pair<PinchPoint, PinchPoint> const&);
        void SetLastTriggeredPinchPair(std::pair<PinchPoint, PinchPoint> const&);
        void SetHorizontallyPinched(bool);
        void Clear();
        void SetComponent(decltype(nullptr));
        char GetPinchPointCount() const;
        int GetDisplacementX(std::pair<PinchPoint, PinchPoint> const&) const;
        int GetDisplacementY(std::pair<PinchPoint, PinchPoint> const&) const;
        InterpolateX(unsigned char);
        InterpolateY(unsigned char);

        // data members, from how the methods use this: 116 bytes
        char _unknown_0[16];
        long field_16; // offset 16
        char _unknown_24[8];
        long field_32; // offset 32
        char _unknown_40[16];
        int field_56; // offset 56
        int field_60; // offset 60
        char _unknown_64[8];
        int field_72; // offset 72
        int field_76; // offset 76
        char _unknown_80[8];
        int field_88; // offset 88
        int field_92; // offset 92
        char _unknown_96[8];
        int field_104;              // offset 104
        int field_108;              // offset 108
        bool m_verticallyPinched;   // offset 112
        bool m_horizontallyPinched; // offset 113
        char _unknown_114[2];
    };

    // 0x100677290, 16 bytes, inline, placed by class name and debug map
    // PinchState::SetComponent(shared_ptr<Component> const&)
    /* SwipeState::SetComponent(shared_ptr<Component> const&) */

    void SwipeState::SetComponent(shared_ptr* param_1) {
        weak_ptr<Component>::operator=((weak_ptr<Component>*)this, param_1);
    }

    // 0x1006772a0, 16 bytes, inline, placed by class name and debug map
    // PinchState::SetStartPinchPair(std::pair<PinchPoint, PinchPoint> const&)
    /* PinchState::SetStartPinchPair(std::pair<PinchPoint, PinchPoint>
   const&) */

    void PinchState::SetStartPinchPair(pair* param_1) {
        std::pair<PinchPoint, PinchPoint>::operator=((pair<PinchPoint, PinchPoint>*)&field_16, param_1);
    }

    // 0x1006772b0, 16 bytes, inline, placed by class name and debug map
    // PinchState::SetCurrentPinchPair(std::pair<PinchPoint, PinchPoint> const&)
    /* PinchState::SetCurrentPinchPair(std::pair<PinchPoint, PinchPoint>
   const&) */

    void PinchState::SetCurrentPinchPair(pair* param_1) {
        std::pair<PinchPoint, PinchPoint>::operator=((pair<PinchPoint, PinchPoint>*)&field_48, param_1);
    }

    // 0x1006772c0, 16 bytes, inline, placed by class name and debug map
    // PinchState::SetLastTriggeredPinchPair(std::pair<PinchPoint, PinchPoint> const&)
    /* PinchState::SetLastTriggeredPinchPair(std::pair<PinchPoint,
   PinchPoint> const&) */

    void PinchState::SetLastTriggeredPinchPair(pair* param_1) {
        std::pair<PinchPoint, PinchPoint>::operator=((pair<PinchPoint, PinchPoint>*)&field_80, param_1);
    }

    // 0x1006772d0, 16 bytes, inline, placed by class name and debug map
    // PinchState::SetHorizontallyPinched(bool)
    void PinchState::SetHorizontallyPinched(bool param_1) {
        m_horizontallyPinched = param_1;
    }

    // 0x100677360, 16 bytes, inline, placed by class name and debug map
    // PinchState::SetComponent(decltype(nullptr))
    /* SwipeState::SetComponent(decltype(nullptr)) */

    void SwipeState::SetComponent(_func_decltype_nullptr* param_1) {
        weak_ptr<Component>::reset();
    }

} // namespace jag::ui
