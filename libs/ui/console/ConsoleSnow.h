// libs/ui/console/ConsoleSnow.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ConsoleSnow {
    public:
        class SnowFlake;
        ConsoleSnow(graphics::RT7Core&);
        void MainDraw(int, int, int, int);
        void MoveSnowFlakes(int, int, int, int);
        void GenerateSnowFlakes(int, int, int, int);
        void DrawSnowFlakes(int, int, int, int);
        void DrawSnowPiles(int, int, int, int);
        void AddToPile(int);
        ~ConsoleSnow();

        // data members, from how the methods use this: 112 bytes
        RT7Core* field_0;   // offset 0
        undefined1 field_8; // offset 8
        char _unknown_9[31];
        long field_40; // offset 40
        char _unknown_48[32];
        long field_80;       // offset 80
        undefined4 field_88; // offset 88
        undefined1 field_92; // offset 92
        char _unknown_93[3];
        undefined4 field_96; // offset 96
        char _unknown_100[4];
        undefined8 field_104; // offset 104
    };

    class ConsoleSnow::SnowFlake {
    public:
        SnowFlake(int, int, float);

        // data members, from how the methods use this: 28 bytes
        float field_0;       // offset 0
        float field_4;       // offset 4
        float field_8;       // offset 8
        float field_12;      // offset 12
        undefined4 field_16; // offset 16
        float field_20;      // offset 20
        undefined1 field_24; // offset 24
        char _unknown_25[3];
    };

    // 0x1006bc920, 16 bytes, complete-object destructor, inline, placed by class name
    // ConsoleSnow::~ConsoleSnow(): jumps straight to the base-object destructor

    // 0x1006bc930, 48 bytes, base-object destructor, inline, placed by class name
    // ConsoleSnow::~ConsoleSnow()
    void ConsoleSnow::~ConsoleSnow() {
        (&field_48)->~FastPool();
        (&field_8)->~vector();
    }

} // namespace jag::ui
