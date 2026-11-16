// libs/ui/console/ConsoleSnow.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ConsoleSnow {
    public:
        class SnowFlake;
        ConsoleSnow(graphics::RT7Core& rt7Core);
        void MainDraw(int arg1, int arg2, int arg3, int arg4);
        void MoveSnowFlakes(int arg1, int arg2, int arg3, int arg4);
        void GenerateSnowFlakes(int arg1, int arg2, int arg3, int arg4);
        void DrawSnowFlakes(int arg1, int arg2, int arg3, int arg4);
        void DrawSnowPiles(int arg1, int arg2, int arg3, int arg4);
        void AddToPile(int arg1);
        ~ConsoleSnow();

    private:
        RT7Core* field_0;
        uint8_t _unknown_8[32];
        long field_40;
        uint8_t _unknown_48[32];
        long field_80;
        uint32_t field_88;
        uint8_t field_92;
        uint8_t _unknown_93[3];
        uint32_t field_96;
        uint8_t _unknown_100[4];
        uint64_t field_104;
    };

    class ConsoleSnow::SnowFlake {
    public:
        SnowFlake(int arg1, int arg2, float arg3);

    private:
        float field_0;
        float field_4;
        float field_8;
        float field_12;
        uint32_t field_16;
        float field_20;
        uint8_t field_24;
        uint8_t _unknown_25[3];
    };

    // 0x1006bc930
    ConsoleSnow::~ConsoleSnow() {
        field_48.~FastPool();
        field_8.~vector();
    }

} // namespace jag::ui
