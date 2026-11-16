// libs/tweaky/Tweaky_Button.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class Button : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Button();
        virtual void OnFocusChanged(bool);
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual OnClick(float, float, bool);
        virtual OnMouseMove(float, float);
        virtual OnMouseOver(float, float);
        virtual ResetToDefault();
        Button(char const*);
        Button(char const*, int);

        // data members, from how the methods use this: 224 bytes, the first 220 are Label
        char _unknown_220[4];
    };

} // namespace jag::tweak
