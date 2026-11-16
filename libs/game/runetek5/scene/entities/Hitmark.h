// libs/game/runetek5/scene/entities/Hitmark.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class Hitmark {
    public:
        int GetExpiryTime() const;
        int GetParam() const;
        Hitmark(int arg1, int arg2, unsigned int arg3, int arg4, int arg5, int arg6);
        bool IsValid() const;
        Hitmark();

    private:
        int field_0;
        int m_param;
        int m_expiryTime;
        int field_12;
        int field_16;
        int field_20;
        uint8_t _unknown_24[4];
    };

    // 0x100024170: Hitmark::GetExpiryTime() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100073980: Hitmark::GetParam() const has the same machine code as math::Rect<int>::MinY() const

    // 0x10012dc10: Hitmark::Hitmark(int, int, unsigned int, int, int, int) has the same machine code as RenderState::CameraPos::Set(int, int, int, int, int, int)

    // 0x100183570: Hitmark::IsValid() const has the same machine code as File::isopen() const

    // 0x100433330
    Hitmark::Hitmark() : field_0(-1), m_param(-1), m_expiryTime(0), field_12(-1), field_16(-1), field_20(0) {}

} // namespace jag
