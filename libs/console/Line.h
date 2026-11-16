// libs/console/Line.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.ui

namespace jag::console {
    class Line {
    public:
        uint32_t GetColour() const;
        Line(const Line& line);
        ~Line();
        uint32_t SupportsTags() const;
        Line(Line&& line);
        Line();

    private:
        int field_0;
        uint8_t _unknown_4[12];
    };

    // 0x100066f90
    uint32_t Line::GetColour() const {
        unsigned long in_RSI;

        uint32_t* puVar1 = (uint32_t*)(*((array<unsigned int, 8ul>*)(long)field_0))[in_RSI];
        return *puVar1;
    }

    // 0x10007e910
    Line::Line(const Line& line) : field_0(line.field_0), field_8(&line.field_8) {}

    // 0x100685060
    uint32_t Line::SupportsTags() const {
        unsigned int uVar1 = field_0 - 1;
        return (37U >> (uVar1 & 31) & 1) != 0 && uVar1 < 6;
    }

    // 0x1006aeba0: Line::~Line() has the same machine code as ui::ConsoleEditLine::~ConsoleEditLine()

    // 0x100c82c00
    Line::Line(Line&& line) : field_0(line.field_0), field_8(&line.field_8) {}

    // 0x100c82c90
    Line::Line() {
        new (&field_8) eastl::fixed_string<char, 512>();
    }

} // namespace jag::console
