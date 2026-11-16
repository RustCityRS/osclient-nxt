// libs/console/Snow.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::console {
    class Snow : public PlayerGroupDelta::PlayerGroupDeltaEntry // base inferred from shared vtable slots
    {
    public:
        class SnowFlake;
        // virtual methods in vtable order
        virtual ~Snow();
        void GetSnowFlakes() const;
        void GetSnowPiles() const;
        Snow();
        void MainDraw(int arg1, int arg2, int arg3, int arg4);
        void MoveSnowFlakes(int arg1, int arg2, int arg3, int arg4);
        void GenerateSnowFlakes(int arg1, int arg2, int arg3, int arg4);
        void AddToPile(int arg1);
        static int64_t ENABLE_SNOW;

    private:
        uint8_t _unknown_8[64];
        long field_72;
        long field_80;
        uint8_t _unknown_88[8];
        uint32_t field_96;
        uint8_t _unknown_100[4];
        uint64_t field_104;
    };

    class Snow::SnowFlake {
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

    // 0x100067280
    void Snow::GetSnowPiles() const {
        return this + 40;
    }

    // 0x1000797f0
    Snow::~Snow() {
        field_40.~vector();
        field_8.~FastPool();
    }

} // namespace jag::game::console

namespace jag::oldscape::widgets {
    class BorderStyle {
    public:
        BorderStyle(bool arg1, bool arg2, bool arg3, bool arg4);
    };

} // namespace jag::oldscape::widgets
