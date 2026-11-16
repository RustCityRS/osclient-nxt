// libs/game/runetek5/scene/entities/Headbar.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class Headbar {
    public:
        void GetType() const;
        unsigned int GetStartTime() const;
        ~Headbar();
        Headbar(const shared_ptr<game::HeadbarType>& headbarType1, const shared_ptr<game::HeadbarType>& headbarType2,
                unsigned int arg3, unsigned int arg4, unsigned int arg5, unsigned int arg6, unsigned int arg7,
                unsigned int arg8);
        unsigned int GetDuration() const;
        Headbar(Headbar&& headbar);
        Headbar* operator=(Headbar&& headbar);
        Headbar(const Headbar& headbar);
        Headbar* operator=(const Headbar& headbar);

    private:
        uint8_t _unknown_0[32];
        unsigned int m_startTime;
        unsigned int field_36;
        unsigned int field_40;
        unsigned int field_44;
        unsigned int field_48;
        unsigned int m_duration;
        uint8_t _unknown_56[4];
    };

    // 0x100009ca0: Headbar::GetType() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000fa830: Headbar::GetStartTime() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

    // 0x1001e0d60: Headbar::~Headbar() has the same machine code as hal::audio::AudioAPI::~AudioAPI()

    // 0x100429880
    unsigned int Headbar::GetDuration() const {
        return m_diffuseAlphaMapSize;
    }

    // 0x100431930
    Headbar::Headbar(const shared_ptr<game::HeadbarType>& headbarType1,
                     const shared_ptr<game::HeadbarType>& headbarType2, unsigned int arg3, unsigned int arg4,
                     unsigned int arg5, unsigned int arg6, unsigned int arg7, unsigned int arg8)
        : shared_ptr(headbarType1), field_16(headbarType2), m_startTime(arg3), field_36(arg4), field_40(arg6),
          field_44(arg5), field_48(arg7), m_duration(arg8) {}

    // 0x1004333d0
    Headbar* Headbar::operator=(Headbar&& headbar) {
        *this = headbar;
        field_16 = headbar.field_16;
        unsigned int uVar1 = headbar.field_36;
        unsigned int uVar2 = headbar.field_40;
        unsigned int uVar3 = headbar.field_44;
        m_startTime = headbar.m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
        uVar1 = headbar.m_duration;
        field_48 = headbar.field_48;
        m_duration = uVar1;
        return this;
    }

    // 0x100433410
    Headbar::Headbar(Headbar&& headbar) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(headbar);
        field_16.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(headbar.field_16);
        unsigned int uVar1 = headbar.m_duration;
        field_48 = headbar.field_48;
        m_duration = uVar1;
        uVar1 = headbar.field_36;
        unsigned int uVar2 = headbar.field_40;
        unsigned int uVar3 = headbar.field_44;
        m_startTime = headbar.m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
    }

    // 0x1004336e0
    Headbar::Headbar(const Headbar& headbar) : shared_ptr(headbar), field_16(&headbar.field_16) {
        unsigned int uVar1 = headbar.m_duration;
        field_48 = headbar.field_48;
        m_duration = uVar1;
        uVar1 = headbar.field_36;
        unsigned int uVar2 = headbar.field_40;
        unsigned int uVar3 = headbar.field_44;
        m_startTime = headbar.m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
    }

    // 0x100433a20
    Headbar* Headbar::operator=(const Headbar& headbar) {
        *this = headbar;
        field_16 = headbar.field_16;
        unsigned int uVar1 = headbar.field_36;
        unsigned int uVar2 = headbar.field_40;
        unsigned int uVar3 = headbar.field_44;
        m_startTime = headbar.m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
        uVar1 = headbar.m_duration;
        field_48 = headbar.field_48;
        m_duration = uVar1;
        return this;
    }

} // namespace jag

namespace jag::oldscape {
    class Headbar {
    public:
        Headbar(int arg1, int arg2, int arg3, int arg4);
        void replace(int arg1, int arg2, int arg3, int arg4);
    };

    // 0x100075850: Headbar::replace(int, int, int, int) has the same machine code as widgets::Padding::Padding(int, int, int, int)

    // 0x100075850: Headbar::Headbar(int, int, int, int) has the same machine code as widgets::Padding::Padding(int, int, int, int)

} // namespace jag::oldscape
