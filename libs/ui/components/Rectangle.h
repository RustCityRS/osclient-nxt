// libs/ui/components/Rectangle.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Rectangle {
    public:
        // virtual methods in vtable order
        virtual ~Rectangle();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        bool GetRectangleFill() const;

        // data members, from how the methods use this: 393 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[11];
        ComponentOpConfig field_112; // offset 112
        char _unknown_256[8];
        VisibleShadowCastingLightInfo field_264; // offset 264
        char _unknown_288[104];
        bool m_rectangleFill; // offset 392
    };

    // 0x1006a9040, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rectangle::GetRectangleFill() const
    /* graphics::BillboardBatch::IsLowPrecision() const */

    undefined1 graphics::BillboardBatch::IsLowPrecision() {
        return m_lowPrecision;
    }

} // namespace jag::ui
