// libs/console/Line.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.ui

namespace jag::console {
    class Line {
    public:
        GetColour() const;
        Line(Line const&);
        ~Line();
        SupportsTags() const;
        Line(Line&&);
        Line();

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        char _unknown_4[12];
    };

    // 0x100066f90, 16 bytes, inline, placed by class name and debug map
    // Line::GetColour() const
    undefined4 Line::GetColour() {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<unsigned int, 8ul>::operator[]((long)field_0);
        return *puVar1;
    }

    // 0x10007e900, 16 bytes, complete-object constructor, inline, placed by class name
    // Line::Line(Line const&): jumps straight to the base-object constructor

    // 0x10007e910, 32 bytes, base-object constructor, inline, placed by class name
    // Line::Line(Line const&)
    void Line::Line(Line* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_string*)&param_1->field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
    }

    // 0x100683a40: the linker folded this into ui::ConsoleEditLine::~ConsoleEditLine(), which has identical code
    Line::~Line();

    // 0x100685060, 32 bytes, inline, placed by class name
    // Line::SupportsTags() const
    undefined4 Line::SupportsTags() {
        uint uVar1;

        uVar1 = field_0 - 1;
        return CONCAT31((int3)(uVar1 >> 8), (37U >> (uVar1 & 31) & 1) != 0 && uVar1 < 6);
    }

    // 0x1006aeba0: the linker folded this into ui::ConsoleEditLine::~ConsoleEditLine(), which has identical code
    Line::~Line();

    // 0x100c82be0, 16 bytes, complete-object constructor, inline, placed by class name
    // Line::Line(Line&&): jumps straight to the base-object constructor

    // 0x100c82c00, 32 bytes, base-object constructor, inline, placed by class name
    // Line::Line(Line&&)
    void Line::Line(Line* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_string*)&param_1->field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
    }

    // 0x100c82c80, 16 bytes, complete-object constructor, inline, placed by class name
    // Line::Line(): jumps straight to the base-object constructor

    // 0x100c82c90, 16 bytes, base-object constructor, inline, placed by class name
    // Line::Line()
    void Line::Line() {
        new (&field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
    }

} // namespace jag::console
