// libs/graphics/runetek7/gui/animations/GUIAnimationCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GUIAnimationCurve {
    public:
        float Eval(float arg1) const;
        void LoadFromPacket(PacketT<Array<unsigned char>>& arg1);
        ~GUIAnimationCurve();

    private:
        eastl* field_0;
        unsigned long field_8;
    };

    // 0x100916a60
    GUIAnimationCurve::~GUIAnimationCurve() {}

} // namespace jag::graphics
