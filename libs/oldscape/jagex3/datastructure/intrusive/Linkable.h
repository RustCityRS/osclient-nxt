// libs/oldscape/jagex3/datastructure/intrusive/Linkable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 8 instantiations, e.g. <oldscape::dash3d::Square>, <oldscape::dash3d::Texture>, <oldscape::midi2::MidiNote>
    class Linkable {
    public:
        // virtual methods in vtable order
        virtual ~Linkable();
        bool IsLinked() const;
        Linkable();
        void Unlink();
        shared_ptr<Linkable<oldscape::sound::PCMStream>>* GiveLinkTo(shared_ptr<oldscape::sound::PCMStream> const&);
        Linkable<oldscape::sound::PCMStream>* GetLink() const;
        Linkable<oldscape::sound::PCMStream>* UnlinkKeepAlive();
        Linkable(Linkable<oldscape::midi2::MidiNote> const&);
    };

    // 0x1000c1720, 16 bytes, inline, placed by class name and debug map
    // Linkable<oldscape::sound::PCMStream>::IsLinked() const
    /* Linkable<oldscape::sound::MixerController>::IsLinked() const */

    bool Linkable<oldscape::sound::MixerController>::IsLinked() {
        return *(long*)(this + 24) != 0;
    }

    // 0x10013d7e0, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::Linkable()
    void Linkable<oldscape::sound::PCMStream>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee86f8 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x10013d810, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::~Linkable()
    void Linkable<oldscape::sound::PCMStream>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee86f8 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x10013d830, 16 bytes, complete-object destructor, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::~Linkable(): jumps straight to the base-object destructor

    // 0x10013d840, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::~Linkable()
    void Linkable<oldscape::sound::PCMStream>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x10013d940, 16 bytes, complete-object constructor, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::Linkable(): jumps straight to the base-object constructor

    // 0x10013dc00, 16 bytes, complete-object constructor, inline, placed by class name
    // Linkable<oldscape::sound::MixerController>::Linkable(): jumps straight to the base-object constructor

    // 0x10013dde0, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::sound::MixerController>::Linkable()
    void Linkable<oldscape::sound::MixerController>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee86f0 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x10013de10, 16 bytes, complete-object destructor, inline, placed by class name
    // Linkable<oldscape::sound::MixerController>::~Linkable(): jumps straight to the base-object destructor

    // 0x10013de20, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::sound::MixerController>::~Linkable()
    void Linkable<oldscape::sound::MixerController>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x10013de40, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::sound::MixerController>::~Linkable()
    void Linkable<oldscape::sound::MixerController>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee86f0 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x10025a060, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannel>::Linkable()
    void Linkable<oldscape::rs2lib::social::ClanChannel>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee8710 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x10025a0b0, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannel>::~Linkable()
    void Linkable<oldscape::rs2lib::social::ClanChannel>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee8710 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x100269c90, 16 bytes, complete-object destructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannel>::~Linkable(): jumps straight to the base-object destructor

    // 0x100269ca0, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannel>::~Linkable()
    void Linkable<oldscape::rs2lib::social::ClanChannel>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x100269cf0, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Linkable()
    void Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee8718 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x100269d20, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~Linkable()
    void Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x100269d40, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~Linkable()
    void Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee8718 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x100269ea0, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Linkable()
    void Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee8720 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x100269ed0, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~Linkable()
    void Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x100269ef0, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~Linkable()
    void Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee8720 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x10026b8c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Linkable(): jumps straight to the base-object constructor

    // 0x10026baf0, 64 bytes, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Unlink()
    void Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Unlink() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 24);
        if (lVar1 != 0) {
            *(undefined8*)(this + 24) = 0;
            lVar2 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
                (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)(this + 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=(
                (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)(lVar1 + 8),
                (shared_ptr*)(this + 8));
        }
    }

    // 0x10027d5e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Linkable(): jumps straight to the base-object constructor

    // 0x10027d7b0, 64 bytes, inline, placed by class name
    // Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Unlink()
    void Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Unlink() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 24);
        if (lVar1 != 0) {
            *(undefined8*)(this + 24) = 0;
            lVar2 =
                shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
                    (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)(this +
                                                                                                                 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=(
                (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)(lVar1 + 8),
                (shared_ptr*)(this + 8));
        }
    }

    // 0x100295c80, 112 bytes, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::GiveLinkTo(shared_ptr<oldscape::sound::PCMStream> const&)
    shared_ptr<Linkable<oldscape::sound::PCMStream>>*
    Linkable<oldscape::sound::PCMStream>::GiveLinkTo(shared_ptr* param_1) {
        long lVar1;
        long lVar2;

        lVar1 = param_1->end();
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar1 + 8), (shared_ptr*)(this + 8));
        *(undefined8*)(lVar1 + 24) = *(undefined8*)(this + 24);
        lVar2 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar1 + 8));
        *(long*)(lVar2 + 24) = lVar1;
        lVar1 = *(long*)(this + 24);
        *(undefined8*)(this + 24) = 0;
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar1 + 8), param_1);
        return (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar1 + 8);
    }

    // 0x10029dca0, 64 bytes, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::Unlink()
    void Linkable<oldscape::sound::PCMStream>::Unlink() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 24);
        if (lVar1 != 0) {
            *(undefined8*)(this + 24) = 0;
            lVar2 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
                (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(this + 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
                (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar1 + 8), (shared_ptr*)(this + 8));
        }
    }

    // 0x10029efd0, 64 bytes, inline, placed by class name
    // Linkable<oldscape::sound::MixerController>::Unlink()
    void Linkable<oldscape::sound::MixerController>::Unlink() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 24);
        if (lVar1 != 0) {
            *(undefined8*)(this + 24) = 0;
            lVar2 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
                (shared_ptr<Linkable<oldscape::sound::MixerController>>*)(this + 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
                (shared_ptr<Linkable<oldscape::sound::MixerController>>*)(lVar1 + 8), (shared_ptr*)(this + 8));
        }
    }

    // 0x1002a2d10, 64 bytes, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::GetLink() const
    Linkable<oldscape::sound::PCMStream>* Linkable<oldscape::sound::PCMStream>::GetLink() {
        long in_RSI;

        if (*(long*)(in_RSI + 24) == 0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(*(long*)(in_RSI + 24) + 8));
        }
        return this;
    }

    // 0x1002a38a0, 128 bytes, inline, placed by class name
    // Linkable<oldscape::sound::PCMStream>::UnlinkKeepAlive()
    Linkable<oldscape::sound::PCMStream>* Linkable<oldscape::sound::PCMStream>::UnlinkKeepAlive() {
        long lVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        lVar1 = *(long*)(in_RSI + 24);
        if (lVar1 != 0) {
            *(undefined8*)(in_RSI + 24) = 0;
            shared_ptr<oldscape::sound::PCMStream>::operator=((shared_ptr<oldscape::sound::PCMStream>*)this,
                                                              (shared_ptr*)(lVar1 + 8));
            lVar2 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
                (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(in_RSI + 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
                (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar1 + 8), (shared_ptr*)(in_RSI + 8));
        }
        return this;
    }

    // 0x1002d60f0, 64 bytes, inline, placed by class name
    // Linkable<oldscape::midi2::MidiNote>::Unlink()
    void Linkable<oldscape::midi2::MidiNote>::Unlink() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 24);
        if (lVar1 != 0) {
            *(undefined8*)(this + 24) = 0;
            lVar2 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
                (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)(this + 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator=(
                (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)(lVar1 + 8), (shared_ptr*)(this + 8));
        }
    }

    // 0x1002dbbf0, 64 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::midi2::MidiNote>::Linkable(Linkable<oldscape::midi2::MidiNote> const&)
    void Linkable<oldscape::midi2::MidiNote>::Linkable(Linkable* param_1) {
        *(undefined**)this = PTR_vtable_100ee86e8 + 16;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
    }

    // 0x1002dbc30, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::midi2::MidiNote>::~Linkable()
    void Linkable<oldscape::midi2::MidiNote>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee86e8 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x1002dbc70, 16 bytes, complete-object destructor, inline, placed by class name
    // Linkable<oldscape::midi2::MidiNote>::~Linkable(): jumps straight to the base-object destructor

    // 0x1002dbc80, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::midi2::MidiNote>::~Linkable()
    void Linkable<oldscape::midi2::MidiNote>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x1002e6130, 16 bytes, complete-object constructor, inline, placed by class name
    // Linkable<oldscape::midi2::MidiNote>::Linkable(): jumps straight to the base-object constructor

    // 0x1002e6300, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::midi2::MidiNote>::Linkable()
    void Linkable<oldscape::midi2::MidiNote>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee86e8 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x100302050, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Square>::Linkable()
    void Linkable<oldscape::dash3d::Square>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee8700 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x100302130, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Square>::~Linkable()
    void Linkable<oldscape::dash3d::Square>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee8700 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x100302b80, 48 bytes, base-object constructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Texture>::Linkable()
    void Linkable<oldscape::dash3d::Texture>::Linkable() {
        _func_decltype_nullptr* in_RSI;

        *(undefined**)this = PTR_vtable_100ee8708 + 16;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        *(undefined8*)(this + 24) = 0;
    }

    // 0x100302bb0, 32 bytes, base-object destructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Texture>::~Linkable()
    void Linkable<oldscape::dash3d::Texture>::~Linkable() {
        *(undefined**)this = PTR_vtable_100ee8708 + 16;
        ((this + 8))->~shared_ptr();
    }

    // 0x100326360, 16 bytes, complete-object destructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Square>::~Linkable(): jumps straight to the base-object destructor

    // 0x100326370, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Square>::~Linkable()
    void Linkable<oldscape::dash3d::Square>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x100326940, 16 bytes, complete-object destructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Texture>::~Linkable(): jumps straight to the base-object destructor

    // 0x100326950, 32 bytes, deleting destructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Texture>::~Linkable()
    void Linkable<oldscape::dash3d::Texture>::~Linkable() {
        ~Linkable(this);
        operator_delete(this);
    }

    // 0x100330770, 16 bytes, complete-object constructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Texture>::Linkable(): jumps straight to the base-object constructor

    // 0x100330b40, 64 bytes, inline, placed by class name
    // Linkable<oldscape::dash3d::Texture>::Unlink()
    void Linkable<oldscape::dash3d::Texture>::Unlink() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 24);
        if (lVar1 != 0) {
            *(undefined8*)(this + 24) = 0;
            lVar2 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
                (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(this + 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
                (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(lVar1 + 8), (shared_ptr*)(this + 8));
        }
    }

    // 0x100331eb0, 16 bytes, complete-object constructor, inline, placed by class name
    // Linkable<oldscape::dash3d::Square>::Linkable(): jumps straight to the base-object constructor

    // 0x1003347e0, 64 bytes, inline, placed by class name
    // Linkable<oldscape::dash3d::Square>::Unlink()
    void Linkable<oldscape::dash3d::Square>::Unlink() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 24);
        if (lVar1 != 0) {
            *(undefined8*)(this + 24) = 0;
            lVar2 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
                (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(this + 8));
            *(long*)(lVar2 + 24) = lVar1;
            shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
                (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(lVar1 + 8), (shared_ptr*)(this + 8));
        }
    }

} // namespace jag
