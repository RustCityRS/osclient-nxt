// libs/ui/utils/PinchState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class PinchState {
    public:
        void SetVerticallyPinched(bool arg1);
        void Init(const shared_ptr<Component>& component, const std::pair<PinchPoint, PinchPoint>& arg2);
        void SetComponent(const shared_ptr<Component>& component);
        void SetStartPinchPair(const std::pair<PinchPoint, PinchPoint>& arg1);
        void SetCurrentPinchPair(const std::pair<PinchPoint, PinchPoint>& arg1);
        void SetLastTriggeredPinchPair(const std::pair<PinchPoint, PinchPoint>& arg1);
        void SetHorizontallyPinched(bool arg1);
        void Clear();
        void SetComponent(decltype(nullptr) arg1);
        char GetPinchPointCount() const;
        int GetDisplacementX(const std::pair<PinchPoint, PinchPoint>& arg1) const;
        int GetDisplacementY(const std::pair<PinchPoint, PinchPoint>& arg1) const;
        uint64_t InterpolateX(unsigned char arg1);
        uint64_t InterpolateY(unsigned char arg1);

    private:
        uint8_t _unknown_0[16];
        long field_16;
        uint8_t _unknown_24[8];
        long field_32;
        uint8_t _unknown_40[16];
        int field_56;
        int field_60;
        uint8_t _unknown_64[8];
        int field_72;
        int field_76;
        uint8_t _unknown_80[8];
        int field_88;
        int field_92;
        uint8_t _unknown_96[8];
        int field_104;
        int field_108;
        bool m_verticallyPinched;
        bool m_horizontallyPinched;
        uint8_t _unknown_114[2];
    };

    // 0x100677290
    void PinchState::SetComponent(const shared_ptr<Component>& component) {
        *this = component;
    }

    // 0x1006772a0
    void PinchState::SetStartPinchPair(const std::pair<PinchPoint, PinchPoint>& arg1) {
        field_16 = arg1;
    }

    // 0x1006772b0
    void PinchState::SetCurrentPinchPair(const std::pair<PinchPoint, PinchPoint>& arg1) {
        field_48 = arg1;
    }

    // 0x1006772c0
    void PinchState::SetLastTriggeredPinchPair(const std::pair<PinchPoint, PinchPoint>& arg1) {
        field_80 = arg1;
    }

    // 0x1006772d0
    void PinchState::SetHorizontallyPinched(bool arg1) {
        m_horizontallyPinched = arg1;
    }

    // 0x100677360
    void PinchState::SetComponent(decltype(nullptr) arg1) {
        reset();
    }

} // namespace jag::ui
