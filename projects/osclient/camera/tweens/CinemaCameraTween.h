// projects/osclient/camera/tweens/CinemaCameraTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class CinemaCameraTween {
    public:
        // virtual methods in vtable order
        virtual ~CinemaCameraTween();
        void AdvanceCycle();
        uint64_t GetAlpha() const;
        CinemaCameraTween(int arg1, Easing easing);
        double CalculateEasedAlpha(int arg1, int arg2, Easing easing);

    private:
        int field_8;
        int field_12;
        uint64_t m_alpha;
        Easing field_24;
        uint8_t _unknown_28[4];
    };

} // namespace jag::oldscape
