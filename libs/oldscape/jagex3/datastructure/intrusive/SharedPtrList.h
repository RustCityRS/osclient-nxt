// libs/oldscape/jagex3/datastructure/intrusive/SharedPtrList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 7 instantiations, e.g. <oldscape::dash3d::Square>, <oldscape::dash3d::Texture>, <oldscape::midi2::MidiNote>
    class SharedPtrList {
    public:
        class SharedPointerIteratorHelper;
        class obj_iterator;
        class ptr_iterator;
        SharedPtrList();
        ~SharedPtrList();
        void clear();
        void push(shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>&&);
        begin();
        end();
        void push(shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&&);
        void push_back(shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&&);
        void push_front(shared_ptr<oldscape::sound::PCMStream> const&);
        void push_back(shared_ptr<oldscape::sound::MixerController> const&);
        void move(oldscape::sound::MixerController&,
                  SharedPtrList<oldscape::sound::MixerController>::obj_iterator const&);
        bool empty() const;
        long front();
        void push(shared_ptr<oldscape::sound::MixerController> const&);
        ptrs();
        void push_back(shared_ptr<oldscape::midi2::MidiNote> const&);
        void push(shared_ptr<oldscape::midi2::MidiNote> const&);
        void push_front(shared_ptr<oldscape::dash3d::Texture> const&);
        SharedPtrList<oldscape::dash3d::Texture>* takeBackAndPop();
        void pop();
        void push(shared_ptr<oldscape::dash3d::Square> const&);
        SharedPtrList<oldscape::dash3d::Square>* takeFrontAndPop();
    };

    template <typename...> // 1 instantiations, e.g.
    class SharedPtrList::SharedPointerIteratorHelper {
    public:
        void begin();
        SharedPointerIteratorHelper(SharedPtrList<oldscape::midi2::MidiNote>&);
    };

    template <typename...> // 1 instantiations, e.g.
    class SharedPtrList::obj_iterator {
    public:
        obj_iterator* operator++();
        long shared() const;
        next() const;
    };

    template <typename...> // 1 instantiations, e.g.
    class SharedPtrList::ptr_iterator {
    public:
        void operator*() const;
    };

    // 0x10013d760, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SharedPtrList<oldscape::sound::PCMStream>::SharedPtrList(): jumps straight to the base-object constructor

    // 0x10013d770, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SharedPtrList<oldscape::sound::MixerController>::SharedPtrList(): jumps straight to the base-object constructor

    // 0x10013d790, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SharedPtrList<oldscape::sound::PCMStream>::~SharedPtrList(): jumps straight to the base-object destructor

    // 0x10013d860, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // SharedPtrList<oldscape::sound::PCMStream>::SharedPtrList()
    void SharedPtrList<oldscape::sound::PCMStream>::SharedPtrList() {
        Linkable<oldscape::sound::PCMStream>* this_00;
        undefined8 uVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        this_00 = operator_new(32);
        Linkable<oldscape::sound::PCMStream>::Linkable(this_00);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::reset<Linkable<oldscape::sound::PCMStream>, void>(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this, (Linkable*)this_00);
        uVar1 = end();
        lVar2 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        *(undefined8*)(lVar2 + 24) = uVar1;
        lVar2 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar2 + 8), (shared_ptr*)this);
    }

    // 0x10013db20, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // SharedPtrList<oldscape::sound::MixerController>::SharedPtrList()
    void SharedPtrList<oldscape::sound::MixerController>::SharedPtrList() {
        Linkable<oldscape::sound::MixerController>* this_00;
        undefined8 uVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        this_00 = operator_new(32);
        Linkable<oldscape::sound::MixerController>::Linkable(this_00);
        shared_ptr<Linkable<oldscape::sound::MixerController>>::reset<Linkable<oldscape::sound::MixerController>, void>(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this, (Linkable*)this_00);
        uVar1 = end();
        lVar2 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        *(undefined8*)(lVar2 + 24) = uVar1;
        lVar2 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)(lVar2 + 8), (shared_ptr*)this);
    }

    // 0x10013dec0, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // SharedPtrList<oldscape::sound::PCMStream>::~SharedPtrList()
    void SharedPtrList<oldscape::sound::PCMStream>::~SharedPtrList() {
        clear(this);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::reset();
        ~shared_ptr();
    }

    // 0x10013df10, 144 bytes, inline, placed by class name and debug map
    // SharedPtrList<oldscape::sound::PCMStream>::clear()
    void SharedPtrList<oldscape::sound::PCMStream>::clear() {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;

        lVar2 = end();
        lVar3 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            shared_ptr<Linkable<oldscape::sound::PCMStream>>::reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(undefined8*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar3 + 8), (shared_ptr*)this);
        uVar4 = end();
        lVar3 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        *(undefined8*)(lVar3 + 24) = uVar4;
    }

    // 0x10013dff0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Mixer>::ref_counter_shared(unsigned long, oldscape::sound::Mixer*): jumps straight to the base-object constructor

    // 0x10013e000, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Mixer>::ref_counter_shared(unsigned long, oldscape::sound::Mixer*)
    void ref_counter_shared<oldscape::sound::Mixer>::ref_counter_shared(ulong param_1, Mixer* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Mixer**)(this + 24) = param_2;
    }

    // 0x10013e040, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Mixer>::DeleteData()
    /* ref_counter_shared<oldscape::rs2lib::social::ClanChannel>::DeleteData() */

    void ref_counter_shared<oldscape::rs2lib::social::ClanChannel>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 152;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10013e0f0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::midi2::MidiPlayer* placement_new<oldscape::midi2::MidiPlayer>(void*)
    MidiPlayer* placement_new<oldscape::midi2::MidiPlayer>(void* param_1) {
        oldscape::midi2::MidiPlayer::MidiPlayer(param_1);
        return param_1;
    }

    // 0x10013e110, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiPlayer>* placement_new<ref_counter_shared<oldscape::midi2::MidiPlayer>, int, oldscape::midi2::MidiPlayer*&>(void*, int&&, oldscape::midi2::MidiPlayer*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::MidiPlayer>, int, oldscape::midi2::MidiPlayer*&>(
        void* param_1, int* param_2, MidiPlayer** param_3) {
        ref_counter_shared<oldscape::midi2::MidiPlayer>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10013e130, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiPlayer>::ref_counter_shared(unsigned long, oldscape::midi2::MidiPlayer*): jumps straight to the base-object constructor

    // 0x10013e140, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiPlayer>::ref_counter_shared(unsigned long, oldscape::midi2::MidiPlayer*)
    void ref_counter_shared<oldscape::midi2::MidiPlayer>::ref_counter_shared(ulong param_1, MidiPlayer* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7678 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MidiPlayer**)(this + 24) = param_2;
    }

    // 0x10013e180, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiPlayer>::DeleteData()
    void ref_counter_shared<oldscape::midi2::MidiPlayer>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 67280;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10013e1e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::sound::Decimator* placement_new<oldscape::sound::Decimator, int, int&>(void*, int&&, int&)
    Decimator* placement_new<oldscape::sound::Decimator, int, int&>(void* param_1, int* param_2, int* param_3) {
        oldscape::sound::Decimator::Decimator(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10013e200, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Decimator>* placement_new<ref_counter_shared<oldscape::sound::Decimator>, int, oldscape::sound::Decimator*&>(void*, int&&, oldscape::sound::Decimator*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::sound::Decimator>, int, oldscape::sound::Decimator*&>(
        void* param_1, int* param_2, Decimator** param_3) {
        ref_counter_shared<oldscape::sound::Decimator>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10013e220, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Decimator>::ref_counter_shared(unsigned long, oldscape::sound::Decimator*): jumps straight to the base-object constructor

    // 0x10013e230, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Decimator>::ref_counter_shared(unsigned long, oldscape::sound::Decimator*)
    void ref_counter_shared<oldscape::sound::Decimator>::ref_counter_shared(ulong param_1, Decimator* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Decimator**)(this + 24) = param_2;
    }

    // 0x10013e270, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Decimator>::DeleteData()
    void ref_counter_shared<oldscape::sound::Decimator>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Decimator();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100143970, 16 bytes, complete-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::~SharedPtrList(): jumps straight to the base-object destructor

    // 0x100143990, 80 bytes, base-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::~SharedPtrList()
    void SharedPtrList<oldscape::dash3d::Texture>::~SharedPtrList() {
        clear(this);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>::reset();
        ~shared_ptr();
    }

    // 0x1001439e0, 144 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::clear()
    void SharedPtrList<oldscape::dash3d::Texture>::clear() {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;

        lVar2 = end();
        lVar3 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            shared_ptr<Linkable<oldscape::dash3d::Texture>>::reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(undefined8*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(lVar3 + 8), (shared_ptr*)this);
        uVar4 = end();
        lVar3 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        *(undefined8*)(lVar3 + 24) = uVar4;
    }

    // 0x100152240, 16 bytes, complete-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~SharedPtrList(): jumps straight to the base-object destructor

    // 0x100152250, 80 bytes, base-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~SharedPtrList()
    void SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~SharedPtrList() {
        clear(this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::reset();
        ~shared_ptr();
    }

    // 0x1001522a0, 144 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::clear()
    void SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::clear() {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;

        lVar2 = end();
        lVar3 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(undefined8*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)(lVar3 + 8),
            (shared_ptr*)this);
        uVar4 = end();
        lVar3 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        *(undefined8*)(lVar3 + 24) = uVar4;
    }

    // 0x100152590, 16 bytes, complete-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~SharedPtrList(): jumps straight to the base-object destructor

    // 0x1001525a0, 80 bytes, base-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~SharedPtrList()
    void SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~SharedPtrList() {
        clear(this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::reset();
        ~shared_ptr();
    }

    // 0x1001525f0, 144 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::clear()
    void SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::clear() {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;

        lVar2 = end();
        lVar3 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(undefined8*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)(lVar3 + 8),
            (shared_ptr*)this);
        uVar4 = end();
        lVar3 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        *(undefined8*)(lVar3 + 24) = uVar4;
    }

    // 0x10025bfd0, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::SharedPtrList(): jumps straight to the base-object constructor

    // 0x10025c3c0, 160 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::push(shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>&&)
    void SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::push(shared_ptr* param_1) {
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>* this_00;
        long lVar1;

        this_00 = (Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*)param_1->end();
        if (this_00 == (Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      96, (char*)0);
        }
        if (*(long*)(this_00 + 24) != 0) {
            this_00->Unlink();
        }
        lVar1 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        *(long*)(this_00 + 24) = lVar1;
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)(this_00 + 8),
            (shared_ptr*)(lVar1 + 8));
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=(
            (shared_ptr<
                Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)(*(long*)(this_00 + 24) +
                                                                                               8),
            param_1);
        lVar1 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        *(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>**)(lVar1 + 24) = this_00;
    }

    // 0x10025cc90, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::begin()
    undefined8 SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::begin() {
        long lVar1;
        undefined1 auVar2[16];
        undefined8 local_10;

        lVar1 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        auVar2 = ((lVar1 + 8))->end();
        new (&local_10) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar2._0_8_,
                                                                                                          auVar2._8_8_);
        return local_10;
    }

    // 0x10025ccc0, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::end()
    /* SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::end()
    */

    undefined8 SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::end() {
        undefined1 auVar1[16];
        undefined8 local_10;

        auVar1 = end();
        new (&local_10) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar1._0_8_,
                                                                                                          auVar1._8_8_);
        return local_10;
    }

    // 0x10025ccf0, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::obj_iterator::operator++()
    /* SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::TEMPNAMEPLACEHOLDERVALUE()
    */

    obj_iterator*
    SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++() {
        undefined8 uVar1;

        uVar1 = ((*(long*)this + 8))->end();
        *(undefined8*)this = uVar1;
        return this;
    }

    // 0x100261ec0, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::SharedPtrList(): jumps straight to the base-object constructor

    // 0x100262500, 160 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::push(shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&&)
    void SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::push(shared_ptr* param_1) {
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* this_00;
        long lVar1;

        this_00 = (Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)param_1->end();
        if (this_00 == (Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      96, (char*)0);
        }
        if (*(long*)(this_00 + 24) != 0) {
            this_00->Unlink();
        }
        lVar1 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        *(long*)(this_00 + 24) = lVar1;
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)(this_00 + 8),
            (shared_ptr*)(lVar1 + 8));
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=(
            (shared_ptr<
                Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)(*(long*)(this_00 +
                                                                                                          24) +
                                                                                                 8),
            param_1);
        lVar1 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        *(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>**)(lVar1 + 24) = this_00;
    }

    // 0x100263df0, 16 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::push_back(shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&&)
    void
    SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::push_back(shared_ptr* param_1) {
        push(this, param_1);
    }

    // 0x100263f00, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::begin()
    undefined8 SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::begin() {
        long lVar1;
        undefined1 auVar2[16];
        undefined8 local_10;

        lVar1 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        auVar2 = ((lVar1 + 8))->end();
        new (&local_10) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar2._0_8_,
                                                                                                          auVar2._8_8_);
        return local_10;
    }

    // 0x10026b7e0, 144 bytes, base-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::SharedPtrList()
    void SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::SharedPtrList() {
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>* this_00;
        undefined8 uVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        this_00 = operator_new(32);
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::Linkable(this_00);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::reset<
            Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>, void>(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this,
            (Linkable*)this_00);
        uVar1 = end();
        lVar2 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        *(undefined8*)(lVar2 + 24) = uVar1;
        lVar2 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)(lVar2 + 8),
            (shared_ptr*)this);
    }

    // 0x10027d500, 144 bytes, base-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::SharedPtrList()
    void SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::SharedPtrList() {
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* this_00;
        undefined8 uVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        this_00 = operator_new(32);
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::Linkable(this_00);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::reset<
            Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>, void>(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this,
            (Linkable*)this_00);
        uVar1 = end();
        lVar2 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        *(undefined8*)(lVar2 + 24) = uVar1;
        lVar2 = shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)(lVar2 + 8),
            (shared_ptr*)this);
    }

    // 0x10029dab0, 192 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::PCMStream>::push_front(shared_ptr<oldscape::sound::PCMStream> const&)
    void SharedPtrList<oldscape::sound::PCMStream>::push_front(shared_ptr* param_1) {
        Linkable<oldscape::sound::PCMStream>* this_00;
        long lVar1;
        long lVar2;

        this_00 = (Linkable<oldscape::sound::PCMStream>*)param_1->end();
        if (this_00 == (Linkable<oldscape::sound::PCMStream>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      120, (char*)0);
        }
        if (*(long*)(this_00 + 24) != 0) {
            this_00->Unlink();
        }
        lVar1 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        lVar1 = ((lVar1 + 8))->end();
        lVar2 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(this_00 + 8), (shared_ptr*)(lVar2 + 8));
        lVar2 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)(lVar2 + 8), param_1);
        *(undefined8*)(this_00 + 24) = *(undefined8*)(lVar1 + 24);
        *(Linkable<oldscape::sound::PCMStream>**)(lVar1 + 24) = this_00;
    }

    // 0x10029ea10, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::begin()
    undefined8 SharedPtrList<oldscape::sound::MixerController>::begin() {
        long lVar1;
        undefined1 auVar2[16];
        undefined8 local_10;

        lVar1 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        auVar2 = ((lVar1 + 8))->end();
        new (&local_10) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar2._0_8_,
                                                                                                          auVar2._8_8_);
        return local_10;
    }

    // 0x10029eb70, 16 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::push_back(shared_ptr<oldscape::sound::MixerController> const&)
    void SharedPtrList<oldscape::sound::MixerController>::push_back(shared_ptr* param_1) {
        push(this, param_1);
    }

    // 0x10029ed10, 304 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::move(oldscape::sound::MixerController&, SharedPtrList<oldscape::sound::MixerController>::obj_iterator const&)
    void SharedPtrList<oldscape::sound::MixerController>::move(MixerController* param_1, obj_iterator* param_2) {
        shared_ptr* this_00;
        long lVar1;
        Linkable<oldscape::sound::MixerController>* this_01;
        MixerController* pMVar2;
        char cVar3;
        shared_ptr* this_02;
        shared_ptr local_50;
        long local_40;
        long local_38;

        cVar3 = param_1->IsLinked();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("p->IsLinked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      411, (char*)0);
        }
        lVar1 = *(long*)(param_1 + 24);
        this_00 = (shared_ptr*)(param_1 + 8);
        local_40 = this_00->end();
        this_01 = *(Linkable<oldscape::sound::MixerController>**)param_2;
        if (this_01 == (Linkable<oldscape::sound::MixerController>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pNext != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      415, (char*)0);
        }
        cVar3 = this_01->IsLinked();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("pNext->IsLinked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      416, (char*)0);
        }
        if ((param_1 != (MixerController*)this_01) &&
            (pMVar2 = *(MixerController**)(this_01 + 24), param_1 != pMVar2)) {
            this_02 = (shared_ptr*)(lVar1 + 8);
            local_38 = lVar1;
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_50, this_02);
            shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
                (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this_02, this_00);
            shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
                (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this_00, (shared_ptr*)(pMVar2 + 8));
            shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
                (shared_ptr<Linkable<oldscape::sound::MixerController>>*)(pMVar2 + 8), &local_50);
            *(long*)(local_40 + 24) = local_38;
            *(MixerController**)(param_1 + 24) = pMVar2;
            *(MixerController**)(this_01 + 24) = param_1;
            local_50.~shared_ptr();
        }
    }

    // 0x10029f010, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::empty() const
    bool SharedPtrList<oldscape::sound::MixerController>::empty() {
        long lVar1;
        long lVar2;

        lVar1 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x10029f110, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::PCMStream>::empty() const
    bool SharedPtrList<oldscape::sound::PCMStream>::empty() {
        long lVar1;
        long lVar2;

        lVar1 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x10029f140, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::PCMStream>::begin()
    undefined8 SharedPtrList<oldscape::sound::PCMStream>::begin() {
        long lVar1;
        undefined1 auVar2[16];
        undefined8 local_10;

        lVar1 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        auVar2 = ((lVar1 + 8))->end();
        new (&local_10) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar2._0_8_,
                                                                                                          auVar2._8_8_);
        return local_10;
    }

    // 0x10029f170, 16 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::PCMStream>::front()
    long SharedPtrList<oldscape::sound::PCMStream>::front() {
        long lVar1;

        lVar1 = shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::PCMStream>>*)this);
        return lVar1 + 8;
    }

    // 0x10029f250, 32 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::PCMStream>::obj_iterator::shared() const
    /* SharedPtrList<oldscape::midi2::MidiNote>::ptr_iterator::shared() const */

    long SharedPtrList<oldscape::midi2::MidiNote>::ptr_iterator::shared() {
        return *(long*)(*(long*)this + 24) + 8;
    }

    // 0x10029f660, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::obj_iterator::next() const
    /* SharedPtrList<oldscape::sound::PCMStream>::obj_iterator::next() const */

    undefined8 SharedPtrList<oldscape::sound::PCMStream>::obj_iterator::next() {
        undefined1 auVar1[16];
        undefined8 local_10;

        auVar1 = ((*(long*)this + 8))->end();
        new (&local_10) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar1._0_8_,
                                                                                                          auVar1._8_8_);
        return local_10;
    }

    // 0x1002ab080, 160 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::push(shared_ptr<oldscape::sound::MixerController> const&)
    void SharedPtrList<oldscape::sound::MixerController>::push(shared_ptr* param_1) {
        Linkable<oldscape::sound::MixerController>* this_00;
        long lVar1;

        this_00 = (Linkable<oldscape::sound::MixerController>*)param_1->end();
        if (this_00 == (Linkable<oldscape::sound::MixerController>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      72, (char*)0);
        }
        if (*(long*)(this_00 + 24) != 0) {
            this_00->Unlink();
        }
        lVar1 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        *(long*)(this_00 + 24) = lVar1;
        shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)(this_00 + 8), (shared_ptr*)(lVar1 + 8));
        shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)(*(long*)(this_00 + 24) + 8), param_1);
        lVar1 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        *(Linkable<oldscape::sound::MixerController>**)(lVar1 + 24) = this_00;
    }

    // 0x1002ce800, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::SharedPtrList(): jumps straight to the base-object constructor

    // 0x1002ce820, 16 bytes, complete-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::~SharedPtrList(): jumps straight to the base-object destructor

    // 0x1002ce8f0, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::begin()
    /* SharedPtrList<oldscape::midi2::MidiNote>::begin_ptrs() */

    undefined8 SharedPtrList<oldscape::midi2::MidiNote>::begin_ptrs() {
        long lVar1;
        undefined1 auVar2[16];
        undefined8 local_10;

        lVar1 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        auVar2 = ((lVar1 + 8))->end();
        new (&local_10) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar2._0_8_,
                                                                                                          auVar2._8_8_);
        return local_10;
    }

    // 0x1002d5850, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::ptrs()
    undefined1[16] SharedPtrList<oldscape::midi2::MidiNote>::ptrs() {
        undefined1 auVar1[16];
        SharedPointerIteratorHelper local_18[16];

        SharedPointerIteratorHelper::SharedPointerIteratorHelper(local_18, (SharedPtrList*)this);
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

    // 0x1002d5880, 16 bytes, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::SharedPointerIteratorHelper::begin()
    void SharedPtrList<oldscape::midi2::MidiNote>::SharedPointerIteratorHelper::begin() {
        begin_ptrs(*(SharedPtrList<oldscape::midi2::MidiNote>**)this);
    }

    // 0x1002d5890, 16 bytes, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::ptr_iterator::operator*() const
    /* SharedPtrList<oldscape::midi2::MidiNote>::ptr_iterator::TEMPNAMEPLACEHOLDERVALUE()
   const */

    void SharedPtrList<oldscape::midi2::MidiNote>::ptr_iterator::operator*() {
        shared(this);
    }

    // 0x1002d60e0, 16 bytes, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::push_back(shared_ptr<oldscape::midi2::MidiNote> const&)
    void SharedPtrList<oldscape::midi2::MidiNote>::push_back(shared_ptr* param_1) {
        push(this, param_1);
    }

    // 0x1002db5d0, 16 bytes, complete-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::~SharedPtrList(): jumps straight to the base-object destructor

    // 0x1002db5e0, 80 bytes, base-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::~SharedPtrList()
    void SharedPtrList<oldscape::sound::MixerController>::~SharedPtrList() {
        clear(this);
        shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        shared_ptr<Linkable<oldscape::sound::MixerController>>::reset();
        ~shared_ptr();
    }

    // 0x1002db630, 144 bytes, inline, placed by class name
    // SharedPtrList<oldscape::sound::MixerController>::clear()
    void SharedPtrList<oldscape::sound::MixerController>::clear() {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;

        lVar2 = end();
        lVar3 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            shared_ptr<Linkable<oldscape::sound::MixerController>>::reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(undefined8*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)(lVar3 + 8), (shared_ptr*)this);
        uVar4 = end();
        lVar3 = shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->(
            (shared_ptr<Linkable<oldscape::sound::MixerController>>*)this);
        *(undefined8*)(lVar3 + 24) = uVar4;
    }

    // 0x1002e6060, 144 bytes, base-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::SharedPtrList()
    void SharedPtrList<oldscape::midi2::MidiNote>::SharedPtrList() {
        Linkable<oldscape::midi2::MidiNote>* this_00;
        undefined8 uVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        this_00 = operator_new(32);
        Linkable<oldscape::midi2::MidiNote>::Linkable(this_00);
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>::reset<Linkable<oldscape::midi2::MidiNote>, void>(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this, (Linkable*)this_00);
        uVar1 = end();
        lVar2 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        *(undefined8*)(lVar2 + 24) = uVar1;
        lVar2 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator=(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)(lVar2 + 8), (shared_ptr*)this);
    }

    // 0x1002e6330, 80 bytes, base-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::~SharedPtrList()
    void SharedPtrList<oldscape::midi2::MidiNote>::~SharedPtrList() {
        clear(this);
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>::reset();
        ~shared_ptr();
    }

    // 0x1002e6380, 144 bytes, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::clear()
    void SharedPtrList<oldscape::midi2::MidiNote>::clear() {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;

        lVar2 = end();
        lVar3 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            shared_ptr<Linkable<oldscape::midi2::MidiNote>>::reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(undefined8*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator=(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)(lVar3 + 8), (shared_ptr*)this);
        uVar4 = end();
        lVar3 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        *(undefined8*)(lVar3 + 24) = uVar4;
    }

    // 0x1002ea3d0, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::SharedPointerIteratorHelper::SharedPointerIteratorHelper(SharedPtrList<oldscape::midi2::MidiNote>&): jumps straight to the base-object constructor

    // 0x1002ea3e0, 32 bytes, base-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::SharedPointerIteratorHelper::SharedPointerIteratorHelper(SharedPtrList<oldscape::midi2::MidiNote>&)
    void SharedPtrList<oldscape::midi2::MidiNote>::SharedPointerIteratorHelper::SharedPointerIteratorHelper(
        SharedPtrList* param_1) {
        undefined8 uVar1;

        *(SharedPtrList**)this = param_1;
        uVar1 = param_1->end();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x1002ea750, 160 bytes, inline, placed by class name
    // SharedPtrList<oldscape::midi2::MidiNote>::push(shared_ptr<oldscape::midi2::MidiNote> const&)
    void SharedPtrList<oldscape::midi2::MidiNote>::push(shared_ptr* param_1) {
        Linkable<oldscape::midi2::MidiNote>* this_00;
        long lVar1;

        this_00 = (Linkable<oldscape::midi2::MidiNote>*)param_1->end();
        if (this_00 == (Linkable<oldscape::midi2::MidiNote>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      72, (char*)0);
        }
        if (*(long*)(this_00 + 24) != 0) {
            this_00->Unlink();
        }
        lVar1 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        *(long*)(this_00 + 24) = lVar1;
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator=(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)(this_00 + 8), (shared_ptr*)(lVar1 + 8));
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator=(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)(*(long*)(this_00 + 24) + 8), param_1);
        lVar1 = shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->(
            (shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)this);
        *(Linkable<oldscape::midi2::MidiNote>**)(lVar1 + 24) = this_00;
    }

    // 0x100303940, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::SharedPtrList(): jumps straight to the base-object constructor

    // 0x1003041b0, 192 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::push_front(shared_ptr<oldscape::dash3d::Texture> const&)
    void SharedPtrList<oldscape::dash3d::Texture>::push_front(shared_ptr* param_1) {
        Linkable<oldscape::dash3d::Texture>* this_00;
        long lVar1;
        long lVar2;

        this_00 = (Linkable<oldscape::dash3d::Texture>*)param_1->end();
        if (this_00 == (Linkable<oldscape::dash3d::Texture>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      120, (char*)0);
        }
        if (*(long*)(this_00 + 24) != 0) {
            this_00->Unlink();
        }
        lVar1 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        lVar1 = ((lVar1 + 8))->end();
        lVar2 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(this_00 + 8), (shared_ptr*)(lVar2 + 8));
        lVar2 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(lVar2 + 8), param_1);
        *(undefined8*)(this_00 + 24) = *(undefined8*)(lVar1 + 24);
        *(Linkable<oldscape::dash3d::Texture>**)(lVar1 + 24) = this_00;
    }

    // 0x100304270, 176 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::takeBackAndPop()
    SharedPtrList<oldscape::dash3d::Texture>* SharedPtrList<oldscape::dash3d::Texture>::takeBackAndPop() {
        undefined8 uVar1;
        long lVar3;
        long lVar4;
        SharedPtrList<oldscape::dash3d::Texture>* in_RSI;
        shared_ptr local_38;

        if (empty(in_RSI) == '\0') {
            lVar3 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
                (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)in_RSI);
            lVar3 = *(long*)(lVar3 + 24);
            uVar1 = *(undefined8*)(lVar3 + 24);
            lVar4 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
                (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)in_RSI);
            *(undefined8*)(lVar4 + 24) = uVar1;
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_38, (shared_ptr*)(*(long*)(lVar3 + 24) + 8));
            shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
                (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(*(long*)(lVar3 + 24) + 8), (shared_ptr*)(lVar3 + 8));
            *(undefined8*)(lVar3 + 24) = 0;
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_38);
            local_38.~shared_ptr();
        } else {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x100306b50, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::SharedPtrList(): jumps straight to the base-object constructor

    // 0x1003070e0, 16 bytes, complete-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::~SharedPtrList(): jumps straight to the base-object destructor

    // 0x100307430, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::empty() const
    bool SharedPtrList<oldscape::dash3d::Square>::empty() {
        long lVar1;
        long lVar2;

        lVar1 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x100307460, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::pop()
    void SharedPtrList<oldscape::dash3d::Square>::pop() {
        SharedPtrList<oldscape::dash3d::Square> local_20[16];

        takeFrontAndPop(local_20);
        local_20->~shared_ptr();
    }

    // 0x1003121d0, 160 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::push(shared_ptr<oldscape::dash3d::Square> const&)
    void SharedPtrList<oldscape::dash3d::Square>::push(shared_ptr* param_1) {
        Linkable<oldscape::dash3d::Square>* this_00;
        long lVar1;

        this_00 = (Linkable<oldscape::dash3d::Square>*)param_1->end();
        if (this_00 == (Linkable<oldscape::dash3d::Square>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      72, (char*)0);
        }
        if (*(long*)(this_00 + 24) != 0) {
            this_00->Unlink();
        }
        lVar1 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        *(long*)(this_00 + 24) = lVar1;
        shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(this_00 + 8), (shared_ptr*)(lVar1 + 8));
        shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(*(long*)(this_00 + 24) + 8), param_1);
        lVar1 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        *(Linkable<oldscape::dash3d::Square>**)(lVar1 + 24) = this_00;
    }

    // 0x100312270, 192 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::takeFrontAndPop()
    SharedPtrList<oldscape::dash3d::Square>* SharedPtrList<oldscape::dash3d::Square>::takeFrontAndPop() {
        undefined8 uVar1;
        long lVar3;
        long lVar4;
        SharedPtrList<oldscape::dash3d::Square>* in_RSI;
        shared_ptr local_38;

        if (empty(in_RSI) == '\0') {
            lVar3 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
                (shared_ptr<Linkable<oldscape::dash3d::Square>>*)in_RSI);
            lVar3 = ((lVar3 + 8))->end();
            uVar1 = *(undefined8*)(lVar3 + 24);
            lVar4 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
                (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(lVar3 + 8));
            *(undefined8*)(lVar4 + 24) = uVar1;
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_38, (shared_ptr*)(*(long*)(lVar3 + 24) + 8));
            shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
                (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(*(long*)(lVar3 + 24) + 8), (shared_ptr*)(lVar3 + 8));
            *(undefined8*)(lVar3 + 24) = 0;
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_38);
            local_38.~shared_ptr();
        } else {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x100330690, 144 bytes, base-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::SharedPtrList()
    void SharedPtrList<oldscape::dash3d::Texture>::SharedPtrList() {
        Linkable<oldscape::dash3d::Texture>* this_00;
        undefined8 uVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        this_00 = operator_new(32);
        Linkable<oldscape::dash3d::Texture>::Linkable(this_00);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>::reset<Linkable<oldscape::dash3d::Texture>, void>(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this, (Linkable*)this_00);
        uVar1 = end();
        lVar2 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        *(undefined8*)(lVar2 + 24) = uVar1;
        lVar2 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(lVar2 + 8), (shared_ptr*)this);
    }

    // 0x100330c20, 48 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Texture>::empty() const
    bool SharedPtrList<oldscape::dash3d::Texture>::empty() {
        long lVar1;
        long lVar2;

        lVar1 = shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Texture>>*)this);
        lVar1 = *(long*)(lVar1 + 24);
        lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x100331dd0, 144 bytes, base-object constructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::SharedPtrList()
    void SharedPtrList<oldscape::dash3d::Square>::SharedPtrList() {
        Linkable<oldscape::dash3d::Square>* this_00;
        undefined8 uVar1;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        this_00 = operator_new(32);
        Linkable<oldscape::dash3d::Square>::Linkable(this_00);
        shared_ptr<Linkable<oldscape::dash3d::Square>>::reset<Linkable<oldscape::dash3d::Square>, void>(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this, (Linkable*)this_00);
        uVar1 = end();
        lVar2 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        *(undefined8*)(lVar2 + 24) = uVar1;
        lVar2 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(lVar2 + 8), (shared_ptr*)this);
    }

    // 0x1003323c0, 80 bytes, base-object destructor, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::~SharedPtrList()
    void SharedPtrList<oldscape::dash3d::Square>::~SharedPtrList() {
        clear(this);
        shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Square>>::reset();
        ~shared_ptr();
    }

    // 0x100332410, 144 bytes, inline, placed by class name
    // SharedPtrList<oldscape::dash3d::Square>::clear()
    void SharedPtrList<oldscape::dash3d::Square>::clear() {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;

        lVar2 = end();
        lVar3 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            shared_ptr<Linkable<oldscape::dash3d::Square>>::reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(undefined8*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)(lVar3 + 8), (shared_ptr*)this);
        uVar4 = end();
        lVar3 = shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->(
            (shared_ptr<Linkable<oldscape::dash3d::Square>>*)this);
        *(undefined8*)(lVar3 + 24) = uVar4;
    }

} // namespace jag
