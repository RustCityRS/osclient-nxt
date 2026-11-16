// libs/ui/components/Panel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Panel : public Grid // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Panel();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void FlagLayoutDirty();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual IsLayoutDirty() const;
        virtual UpdateLayout(bool);
        GetTotalRequiredSize() const;
        void UpdateComponentListLayout(eastl::vector<ComponentContainer, eastl::allocator> const&, int, int, int,
                                       UIPoint const&, int&);
        GetRequiredSize(eastl::vector<ComponentContainer, eastl::allocator> const&) const;

        // data members, from how the methods use this: 580 bytes
        long field_0;    // offset 0, vtable pointer
        ushort field_8;  // offset 8
        ushort field_10; // offset 10
        char _unknown_12[60];
        int field_72; // offset 72
        int field_76; // offset 76
        char _unknown_80[8];
        int field_88; // offset 88
        int field_92; // offset 92
        char _unknown_96[336];
        uint field_432; // offset 432
        uint field_436; // offset 436
        char _unknown_440[128];
        undefined1 m_layoutDirty; // offset 568
        bool field_569;           // offset 569
        char _unknown_570[2];
        uint field_572; // offset 572
        char _unknown_576[4];
    };

    // 0x1006adfe0, 16 bytes, inline, placed by class name and debug map
    // Panel::GetType() const
    undefined8 Panel::GetType() {
        return 20;
    }

    // 0x1006adff0, 16 bytes, inline, placed by class name and debug map
    // Panel::FlagLayoutDirty()
    void Panel::FlagLayoutDirty() {
        m_layoutDirty = 1;
    }

    // 0x1006ae000, 16 bytes, inline, placed by class name and debug map
    // Panel::IsLayoutDirty() const
    undefined1 Panel::IsLayoutDirty() {
        return m_layoutDirty;
    }

} // namespace jag::ui
