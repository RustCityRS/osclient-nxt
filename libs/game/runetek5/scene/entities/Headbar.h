// libs/game/runetek5/scene/entities/Headbar.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class Headbar {
    public:
        GetType() const;
        uint GetStartTime() const;
        ~Headbar();
        Headbar(shared_ptr<game::HeadbarType> const&, shared_ptr<game::HeadbarType> const&, unsigned int, unsigned int,
                unsigned int, unsigned int, unsigned int, unsigned int);
        uint GetDuration() const;
        Headbar(Headbar&&);
        Headbar* operator=(Headbar&&);
        Headbar(Headbar const&);
        Headbar* operator=(Headbar const&);

        // data members, from how the methods use this: 60 bytes
        char _unknown_0[32];
        uint m_startTime; // offset 32
        uint field_36;    // offset 36
        uint field_40;    // offset 40
        uint field_44;    // offset 44
        uint field_48;    // offset 48
        uint m_duration;  // offset 52
        char _unknown_56[4];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Headbar::GetType() const;

    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    uint Headbar::GetStartTime() const;

    // 0x1001e0d50: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    Headbar::~Headbar();

    // 0x1001e0d60: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    Headbar::~Headbar();

    // 0x100429510, 48 bytes, complete-object constructor, inline, placed by class name and debug map
    // Headbar::Headbar(shared_ptr<game::HeadbarType> const&, shared_ptr<game::HeadbarType> const&, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    void Headbar::Headbar(shared_ptr* param_1, shared_ptr* param_2, uint param_3, uint param_4, uint param_5,
                          uint param_6, uint param_7, uint param_8) {
        Headbar(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x100429880, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Headbar::GetDuration() const
    /* graphics::Material::GetDiffuseAlphaMapSize() const */

    undefined4 graphics::Material::GetDiffuseAlphaMapSize() {
        return m_diffuseAlphaMapSize;
    }

    // 0x100431930, 112 bytes, base-object constructor, inline, placed by class name
    // Headbar::Headbar(shared_ptr<game::HeadbarType> const&, shared_ptr<game::HeadbarType> const&, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    void Headbar::Headbar(shared_ptr* param_1, shared_ptr* param_2, uint param_3, uint param_4, uint param_5,
                          uint param_6, uint param_7, uint param_8) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, param_2) shared_ptr<oldscape::dash3d::Decor>();
        m_startTime = param_3;
        field_36 = param_4;
        field_40 = param_6;
        field_44 = param_5;
        field_48 = param_7;
        m_duration = param_8;
    }

    // 0x1004333c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Headbar::Headbar(Headbar&&): jumps straight to the base-object constructor

    // 0x1004333d0, 64 bytes, inline, placed by class name
    // Headbar::operator=(Headbar&&)
    /* Headbar::TEMPNAMEPLACEHOLDERVALUE(Headbar&&) */

    Headbar* Headbar::operator=(Headbar* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        shared_ptr<game::HeadbarType>::operator=((shared_ptr<game::HeadbarType>*)this, (shared_ptr*)param_1);
        shared_ptr<game::HeadbarType>::operator=((shared_ptr<game::HeadbarType>*)&field_16,
                                                 (shared_ptr*)&param_1->field_16);
        uVar1 = param_1->field_36;
        uVar2 = param_1->field_40;
        uVar3 = param_1->field_44;
        m_startTime = param_1->m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
        uVar1 = param_1->m_duration;
        field_48 = param_1->field_48;
        m_duration = uVar1;
        return this;
    }

    // 0x100433410, 80 bytes, base-object constructor, inline, placed by class name
    // Headbar::Headbar(Headbar&&)
    void Headbar::Headbar(Headbar* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
        uVar1 = param_1->m_duration;
        field_48 = param_1->field_48;
        m_duration = uVar1;
        uVar1 = param_1->field_36;
        uVar2 = param_1->field_40;
        uVar3 = param_1->field_44;
        m_startTime = param_1->m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
    }

    // 0x1004335f0, 16 bytes, complete-object constructor, inline, placed by class name
    // Headbar::Headbar(Headbar const&): jumps straight to the base-object constructor

    // 0x1004336e0, 80 bytes, base-object constructor, inline, placed by class name
    // Headbar::Headbar(Headbar const&)
    void Headbar::Headbar(Headbar* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, (shared_ptr*)&param_1->field_16) shared_ptr<oldscape::dash3d::Decor>();
        uVar1 = param_1->m_duration;
        field_48 = param_1->field_48;
        m_duration = uVar1;
        uVar1 = param_1->field_36;
        uVar2 = param_1->field_40;
        uVar3 = param_1->field_44;
        m_startTime = param_1->m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
    }

    // 0x100433a20, 64 bytes, inline, placed by class name
    // Headbar::operator=(Headbar const&)
    /* Headbar::TEMPNAMEPLACEHOLDERVALUE(Headbar const&) */

    Headbar* Headbar::operator=(Headbar* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        shared_ptr<game::HeadbarType>::operator=((shared_ptr<game::HeadbarType>*)this, (shared_ptr*)param_1);
        shared_ptr<game::HeadbarType>::operator=((shared_ptr<game::HeadbarType>*)&field_16,
                                                 (shared_ptr*)&param_1->field_16);
        uVar1 = param_1->field_36;
        uVar2 = param_1->field_40;
        uVar3 = param_1->field_44;
        m_startTime = param_1->m_startTime;
        field_36 = uVar1;
        field_40 = uVar2;
        field_44 = uVar3;
        uVar1 = param_1->m_duration;
        field_48 = param_1->field_48;
        m_duration = uVar1;
        return this;
    }

} // namespace jag

namespace jag::oldscape {
    class Headbar {
    public:
        Headbar(int, int, int, int);
        replace(int, int, int, int);
    };

    // 0x10005f250: the linker folded this into widgets::Padding::Padding(int, int, int, int), which has identical code
    Headbar::Headbar(int, int, int, int);

    // 0x100075850: the linker folded this into widgets::Padding::Padding(int, int, int, int), which has identical code
    Headbar::replace(int, int, int, int);

    // 0x100075850: the linker folded this into widgets::Padding::Padding(int, int, int, int), which has identical code
    Headbar::Headbar(int, int, int, int);

} // namespace jag::oldscape
