// libs/oldscape/jagex3/datastructure/intrusive/Linkable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        _deleting_dtor** GiveLinkTo(const shared_ptr<oldscape::sound::PCMStream>& pcmStream);
        auto GetLink() const;
        auto UnlinkKeepAlive();
        Linkable(const Linkable<oldscape::midi2::MidiNote>& linkable);
    };

    // 0x1000c1720
    bool Linkable<oldscape::sound::PCMStream>::IsLinked() const {
        return this[3]._vptr != nullptr;
    }

    // 0x10013d7e0
    Linkable<oldscape::sound::PCMStream>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x10013d810
    Linkable<oldscape::sound::PCMStream>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x10013dde0
    Linkable<oldscape::sound::MixerController>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x10013de40
    Linkable<oldscape::sound::MixerController>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x10025a060
    Linkable<oldscape::rs2lib::social::ClanChannel>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x10025a0b0
    Linkable<oldscape::rs2lib::social::ClanChannel>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x100269cf0
    Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x100269d40
    Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x100269ea0
    Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x100269ef0
    Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x10026baf0
    void Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Unlink() {
        long lVar2;

        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _vtbl**)(lVar2 + 24) = pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
    }

    // 0x10027d7b0
    void Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Unlink() {
        long lVar2;

        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _vtbl**)(lVar2 + 24) =
                pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
    }

    // 0x100295c80
    _deleting_dtor**
    Linkable<oldscape::sound::PCMStream>::GiveLinkTo(const shared_ptr<oldscape::sound::PCMStream>& pcmStream) {
        long lVar2 = pcmStream.end();
        (*((lVar2 + 8))) = (*((this + 1)));
        *(Linkable<oldscape::sound::PCMStream> _vtbl**)(lVar2 + 24) = this[3]._vptr;
        long lVar3 = (*((lVar2 + 8))).operator->();
        *(long*)(lVar3 + 24) = lVar2;
        Linkable<oldscape::sound::PCMStream> _vtbl* pLVar1 = this[3]._vptr;
        this[3]._vptr = nullptr;
        _deleting_dtor** this_00 = &pLVar1->_deleting_dtor;
        *this_00 = pcmStream;
        return this_00;
    }

    // 0x10029dca0
    void Linkable<oldscape::sound::PCMStream>::Unlink() {
        long lVar2;

        Linkable<oldscape::sound::PCMStream> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::sound::PCMStream> _vtbl**)(lVar2 + 24) = pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
    }

    // 0x10029efd0
    void Linkable<oldscape::sound::MixerController>::Unlink() {
        long lVar2;

        Linkable<oldscape::sound::MixerController> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::sound::MixerController> _vtbl**)(lVar2 + 24) = pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
    }

    // 0x1002a2d10
    auto Linkable<oldscape::sound::PCMStream>::GetLink() const {
        if (this[3]._vptr == nullptr) {
            auto result;
        } else {
            new (&result) shared_ptr((shared_ptr<oldscape::dash3d::GroundDecor>*)&(this[3]._vptr)->_deleting_dtor);
        }
        return result;
    }

    // 0x1002a38a0
    auto Linkable<oldscape::sound::PCMStream>::UnlinkKeepAlive() {
        long lVar2;

        auto result;
        Linkable<oldscape::sound::PCMStream> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            result = pLVar1->_deleting_dtor;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::sound::PCMStream> _vtbl**)(lVar2 + 24) = pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
        return result;
    }

    // 0x1002d60f0
    void Linkable<oldscape::midi2::MidiNote>::Unlink() {
        long lVar2;

        Linkable<oldscape::midi2::MidiNote> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::midi2::MidiNote> _vtbl**)(lVar2 + 24) = pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
    }

    // 0x1002dbbf0
    Linkable<oldscape::midi2::MidiNote>::Linkable(const Linkable<oldscape::midi2::MidiNote>& linkable) {
        new ((this + 1)) shared_ptr((linkable + 1));
    }

    // 0x1002dbc30
    Linkable<oldscape::midi2::MidiNote>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x1002e6300
    Linkable<oldscape::midi2::MidiNote>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x100302050
    Linkable<oldscape::dash3d::Square>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x100302130
    Linkable<oldscape::dash3d::Square>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x100302b80
    Linkable<oldscape::dash3d::Texture>::Linkable() {
        new ((this + 1)) shared_ptr();
    }

    // 0x100302bb0
    Linkable<oldscape::dash3d::Texture>::~Linkable() {
        ((this + 1))->~shared_ptr();
    }

    // 0x100330b40
    void Linkable<oldscape::dash3d::Texture>::Unlink() {
        long lVar2;

        Linkable<oldscape::dash3d::Texture> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::dash3d::Texture> _vtbl**)(lVar2 + 24) = pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
    }

    // 0x1003347e0
    void Linkable<oldscape::dash3d::Square>::Unlink() {
        long lVar2;

        Linkable<oldscape::dash3d::Square> _vtbl* pLVar1 = this[3]._vptr;
        if (pLVar1 != nullptr) {
            this[3]._vptr = nullptr;
            lVar2 = (*((this + 1))).operator->();
            *(Linkable<oldscape::dash3d::Square> _vtbl**)(lVar2 + 24) = pLVar1;
            pLVar1->_deleting_dtor = (*((this + 1)));
        }
    }

} // namespace jag
