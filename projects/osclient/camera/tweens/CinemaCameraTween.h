// projects/osclient/camera/tweens/CinemaCameraTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class CinemaCameraTween {
    public:
        // virtual methods in vtable order
        virtual ~CinemaCameraTween();
        void AdvanceCycle();
        GetAlpha() const;
        CinemaCameraTween(int, Easing);
        double CalculateEasedAlpha(int, int, Easing);

        // data members, from how the methods use this: 32 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        int field_12;        // offset 12
        undefined8 m_alpha;  // offset 16
        uint field_24;       // offset 24
        char _unknown_28[4];
    };

} // namespace jag::oldscape
