// libs/ui/components/Grid.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Grid {
    public:
        // virtual methods in vtable order
        virtual ~Grid();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void FlagLayoutDirty();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual IsLayoutDirty() const;
        virtual UpdateLayout(bool);
        void SetGridParams(bool, int, int);
        void UpdateComponentListLayout(eastl::vector<ComponentContainer, eastl::allocator> const&, int&, int&, int, int,
                                       int, int, int, int);
        ulong GetCellWidth() const;
        ulong GetCellHeight() const;
        ulong GetNumRows() const;
        ulong GetNumColumns() const;
        SeparatedIndexCount GetSizeEstimate(unsigned short, unsigned short, unsigned char, unsigned char,
                                            unsigned char);
        GetCellEstimate(unsigned short, unsigned short, unsigned short, unsigned short, unsigned char);

        // data members, from how the methods use this: 584 bytes
        long field_0;    // offset 0, vtable pointer
        ushort field_8;  // offset 8
        ushort field_10; // offset 10
        char _unknown_12[76];
        int field_88; // offset 88
        int field_92; // offset 92
        char _unknown_96[336];
        uint field_432; // offset 432
        uint field_436; // offset 436
        char _unknown_440[128];
        uint field_568;           // offset 568
        uint field_572;           // offset 572
        uint field_576;           // offset 576
        bool field_580;           // offset 580
        undefined1 m_layoutDirty; // offset 581
        char _unknown_582[2];
    };

    // 0x1006ad6e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Grid::~Grid(): jumps straight to the base-object destructor

    // 0x1006ad6f0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Grid::~Grid()
    /* Layer::~Layer() */

    void Layer::~Layer() {
        ~Layer(this);
        operator_delete(this);
    }

    // 0x1006ad710, 16 bytes, inline, placed by class name and debug map
    // Grid::GetType() const
    undefined8 Grid::GetType() {
        return 21;
    }

    // 0x1006ad720, 16 bytes, inline, placed by class name and debug map
    // Grid::FlagLayoutDirty()
    void Grid::FlagLayoutDirty() {
        m_layoutDirty = 1;
    }

    // 0x1006ad730, 16 bytes, inline, placed by class name and debug map
    // Grid::IsLayoutDirty() const
    undefined1 Grid::IsLayoutDirty() {
        return m_layoutDirty;
    }

    // 0x1006b2db0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Grid::~Grid()
    /* Layer::~Layer() */

    void Layer::~Layer() {
        ~ComponentCollection();
    }

} // namespace jag::ui

namespace jag::oldscape::dash3d {
    class GridRect {
    public:
        GridRect(int, int, int, int);
        GridRect();

        // data members, from how the methods use this: 20 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100326f10, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // GridRect::GridRect()
    void GridRect::GridRect() {
        field_0 = -1;
        field_4 = -1;
        field_8 = 0;
        field_12 = 0;
    }

} // namespace jag::oldscape::dash3d
