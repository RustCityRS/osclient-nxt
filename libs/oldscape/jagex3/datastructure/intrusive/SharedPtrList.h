// libs/oldscape/jagex3/datastructure/intrusive/SharedPtrList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        void
        push(shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>&& clanChannelDeltaEntry);
        uint64_t begin();
        uint64_t end();
        void
        push(shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&& clanSettingsDeltaEntry);
        void push_back(
            shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&& clanSettingsDeltaEntry);
        void push_front(const shared_ptr<oldscape::sound::PCMStream>& pcmStream);
        void push_back(const shared_ptr<oldscape::sound::MixerController>& mixerController);
        void move(oldscape::sound::MixerController& mixerController,
                  const SharedPtrList<oldscape::sound::MixerController>::obj_iterator& obj_iterator);
        bool empty() const;
        long front();
        void push(const shared_ptr<oldscape::sound::MixerController>& mixerController);
        uint8_t[16] ptrs();
        void push_back(const shared_ptr<oldscape::midi2::MidiNote>& midiNote);
        void push(const shared_ptr<oldscape::midi2::MidiNote>& midiNote);
        void push_front(const shared_ptr<oldscape::dash3d::Texture>& texture);
        auto takeBackAndPop();
        void pop();
        void push(const shared_ptr<oldscape::dash3d::Square>& square);
        auto takeFrontAndPop();
    };

    template <typename...> // 1 instantiations, e.g.
    class SharedPtrList::SharedPointerIteratorHelper {
    public:
        void begin();
        SharedPointerIteratorHelper(SharedPtrList<oldscape::midi2::MidiNote>& sharedPtrList);
    };

    template <typename...> // 1 instantiations, e.g.
    class SharedPtrList::obj_iterator {
    public:
        obj_iterator* operator++();
        long shared() const;
        uint64_t next() const;
    };

    template <typename...> // 1 instantiations, e.g.
    class SharedPtrList::ptr_iterator {
    public:
        void operator*() const;
    };

    // 0x10013d860
    SharedPtrList<oldscape::sound::PCMStream>::SharedPtrList() : shared_ptr() {
        Linkable<oldscape::sound::PCMStream>* this_00 = (Linkable<oldscape::sound::PCMStream>*)operator new(32);
        new (this_00) Linkable<oldscape::sound::PCMStream>();
        reset<Linkable<oldscape::sound::PCMStream>, void>(this_00);
        uint64_t uVar1 = end();
        long lVar2 = (*this).operator->();
        *(uint64_t*)(lVar2 + 24) = uVar1;
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = *this;
    }

    // 0x10013db20
    SharedPtrList<oldscape::sound::MixerController>::SharedPtrList() : shared_ptr() {
        Linkable<oldscape::sound::MixerController>* this_00 =
            (Linkable<oldscape::sound::MixerController>*)operator new(32);
        new (this_00) Linkable<oldscape::sound::MixerController>();
        reset<Linkable<oldscape::sound::MixerController>, void>(this_00);
        uint64_t uVar1 = end();
        long lVar2 = (*this).operator->();
        *(uint64_t*)(lVar2 + 24) = uVar1;
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = *this;
    }

    // 0x10013dec0
    SharedPtrList<oldscape::sound::PCMStream>::~SharedPtrList() {
        clear(this);
        long lVar1 = (*this).operator->();
        ((lVar1 + 8))->reset();
    }

    // 0x10013df10
    void SharedPtrList<oldscape::sound::PCMStream>::clear() {
        long lVar1;

        long lVar2 = end();
        long lVar3 = (*this).operator->();
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            ((lVar3 + 8))->reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(uint64_t*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = (*this).operator->();
        (*((lVar3 + 8))) = *this;
        uint64_t uVar4 = end();
        lVar3 = (*this).operator->();
        *(uint64_t*)(lVar3 + 24) = uVar4;
    }

    // 0x10013e000
    ref_counter_shared<oldscape::sound::Mixer>::ref_counter_shared(unsigned long arg1, oldscape::sound::Mixer* mixer)
        : ref_counter_base() {}

    // 0x10013e040
    void ref_counter_shared<oldscape::sound::Mixer>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::rs2lib::social::ClanChannel> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 =
                        (ref_counter_shared<oldscape::rs2lib::social::ClanChannel> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 152;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10013e0f0
    oldscape::midi2::MidiPlayer* placement_new<oldscape::midi2::MidiPlayer>(void* arg1) {
        new (arg1) oldscape::midi2::MidiPlayer();
        return arg1;
    }

    // 0x10013e110
    ref_counter_shared<oldscape::midi2::MidiPlayer>*
    placement_new<ref_counter_shared<oldscape::midi2::MidiPlayer>, int, oldscape::midi2::MidiPlayer*&>(
        void* arg1, int&& arg2, oldscape::midi2::MidiPlayer*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::MidiPlayer>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10013e140
    ref_counter_shared<oldscape::midi2::MidiPlayer>::ref_counter_shared(unsigned long arg1,
                                                                        oldscape::midi2::MidiPlayer* midiPlayer)
        : ref_counter_base() {}

    // 0x10013e180
    void ref_counter_shared<oldscape::midi2::MidiPlayer>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::midi2::MidiPlayer> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::midi2::MidiPlayer> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 67280;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10013e1e0
    oldscape::sound::Decimator* placement_new<oldscape::sound::Decimator, int, int&>(void* arg1, int&& arg2,
                                                                                     int& arg3) {
        new (arg1) oldscape::sound::Decimator(arg2, arg3);
        return arg1;
    }

    // 0x10013e200
    ref_counter_shared<oldscape::sound::Decimator>*
    placement_new<ref_counter_shared<oldscape::sound::Decimator>, int, oldscape::sound::Decimator*&>(
        void* arg1, int&& arg2, oldscape::sound::Decimator*& arg3) {
        new (arg1) ref_counter_shared<oldscape::sound::Decimator>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10013e230
    ref_counter_shared<oldscape::sound::Decimator>::ref_counter_shared(unsigned long arg1,
                                                                       oldscape::sound::Decimator* decimator)
        : ref_counter_base() {}

    // 0x10013e270
    void ref_counter_shared<oldscape::sound::Decimator>::DeleteData() {
        ref_counter_shared<oldscape::sound::Decimator> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Decimator*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Decimator();
                    prVar1 = (ref_counter_shared<oldscape::sound::Decimator> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100143990
    SharedPtrList<oldscape::dash3d::Texture>::~SharedPtrList() {
        clear(this);
        long lVar1 = (*this).operator->();
        ((lVar1 + 8))->reset();
    }

    // 0x1001439e0
    void SharedPtrList<oldscape::dash3d::Texture>::clear() {
        long lVar1;

        long lVar2 = end();
        long lVar3 = (*this).operator->();
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            ((lVar3 + 8))->reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(uint64_t*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = (*this).operator->();
        (*((lVar3 + 8))) = *this;
        uint64_t uVar4 = end();
        lVar3 = (*this).operator->();
        *(uint64_t*)(lVar3 + 24) = uVar4;
    }

    // 0x100152250
    SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::~SharedPtrList() {
        clear(this);
        long lVar1 = (*this).operator->();
        ((lVar1 + 8))->reset();
    }

    // 0x1001522a0
    void SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::clear() {
        long lVar1;

        long lVar2 = end();
        long lVar3 = (*this).operator->();
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            ((lVar3 + 8))->reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(uint64_t*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = (*this).operator->();
        (*((lVar3 + 8))) = *this;
        uint64_t uVar4 = end();
        lVar3 = (*this).operator->();
        *(uint64_t*)(lVar3 + 24) = uVar4;
    }

    // 0x1001525a0
    SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::~SharedPtrList() {
        clear(this);
        long lVar1 = (*this).operator->();
        ((lVar1 + 8))->reset();
    }

    // 0x1001525f0
    void SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::clear() {
        long lVar1;

        long lVar2 = end();
        long lVar3 = (*this).operator->();
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            ((lVar3 + 8))->reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(uint64_t*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = (*this).operator->();
        (*((lVar3 + 8))) = *this;
        uint64_t uVar4 = end();
        lVar3 = (*this).operator->();
        *(uint64_t*)(lVar3 + 24) = uVar4;
    }

    // 0x10025c3c0
    void SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::push(
        shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>&& clanChannelDeltaEntry) {
        auto this_00 = clanChannelDeltaEntry.end();
        if (this_00 == nullptr) {
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      96, nullptr);
        }
        if (this_00[3]._vptr != nullptr) {
            this_00->Unlink();
        }
        long lVar2 = (*this).operator->();
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _vtbl* pLVar1 =
            *(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _vtbl**)(lVar2 + 24);
        this_00[3]._vptr = pLVar1;
        (*((this_00 + 1))) = pLVar1->_deleting_dtor;
        (*((shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)&(this_00[3]._vptr)
               ->_deleting_dtor)) = clanChannelDeltaEntry;
        lVar2 = (*this).operator->();
        *(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>**)(lVar2 + 24) = this_00;
    }

    // 0x10025cc90
    uint64_t SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::begin() {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;

        long lVar1 = (*this).operator->();
        playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)((lVar1 + 8))->end();
        return local_10(playerDataComparator);
        return local_10;
    }

    // 0x10025ccc0
    uint64_t SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::end() {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;

        playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)end();
        return local_10(playerDataComparator);
        return local_10;
    }

    // 0x10025ccf0
    obj_iterator*
    SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::obj_iterator::operator++() {
        uint64_t uVar1 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(long*)this + 8))->end();
        *(uint64_t*)this = uVar1;
        return this;
    }

    // 0x100262500
    void SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::push(
        shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&& clanSettingsDeltaEntry) {
        auto this_00 = clanSettingsDeltaEntry.end();
        if (this_00 == nullptr) {
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      96, nullptr);
        }
        if (this_00[3]._vptr != nullptr) {
            this_00->Unlink();
        }
        long lVar2 = (*this).operator->();
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _vtbl* pLVar1 =
            *(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _vtbl**)(lVar2 + 24);
        this_00[3]._vptr = pLVar1;
        (*((this_00 + 1))) = pLVar1->_deleting_dtor;
        (*((shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)&(
               this_00[3]._vptr)
               ->_deleting_dtor)) = clanSettingsDeltaEntry;
        lVar2 = (*this).operator->();
        *(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>**)(lVar2 + 24) = this_00;
    }

    // 0x100263df0
    void SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::push_back(
        shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&& clanSettingsDeltaEntry) {
        push(this, clanSettingsDeltaEntry);
    }

    // 0x100263f00
    uint64_t SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::begin() {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;

        long lVar1 = (*this).operator->();
        playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)((lVar1 + 8))->end();
        return local_10(playerDataComparator);
        return local_10;
    }

    // 0x10026b7e0
    SharedPtrList<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::SharedPtrList() : shared_ptr() {
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>* this_00 =
            (Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*)operator new(32);
        new (this_00) Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>();
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::reset<
            Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>, void>(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)this, this_00);
        uint64_t uVar1 = end();
        long lVar2 = (*this).operator->();
        *(uint64_t*)(lVar2 + 24) = uVar1;
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = *this;
    }

    // 0x10027d500
    SharedPtrList<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::SharedPtrList() : shared_ptr() {
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* this_00 =
            (Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)operator new(32);
        new (this_00) Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>();
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::reset<
            Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>, void>(
            (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)this, this_00);
        uint64_t uVar1 = end();
        long lVar2 = (*this).operator->();
        *(uint64_t*)(lVar2 + 24) = uVar1;
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = *this;
    }

    // 0x10029dab0
    void
    SharedPtrList<oldscape::sound::PCMStream>::push_front(const shared_ptr<oldscape::sound::PCMStream>& pcmStream) {
        auto this_00 = pcmStream.end();
        if (this_00 == nullptr) {
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      120, nullptr);
        }
        if (this_00[3]._vptr != nullptr) {
            this_00->Unlink();
        }
        long lVar1 = (*this).operator->();
        lVar1 = ((lVar1 + 8))->end();
        long lVar2 = (*this).operator->();
        (*((this_00 + 1))) = (*((lVar2 + 8)));
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = pcmStream;
        this_00[3]._vptr = *(Linkable<oldscape::sound::PCMStream> _vtbl**)(lVar1 + 24);
        *(Linkable<oldscape::sound::PCMStream>**)(lVar1 + 24) = this_00;
    }

    // 0x10029ea10
    uint64_t SharedPtrList<oldscape::sound::MixerController>::begin() {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;

        long lVar1 = (*this).operator->();
        playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)((lVar1 + 8))->end();
        return local_10(playerDataComparator);
        return local_10;
    }

    // 0x10029eb70
    void SharedPtrList<oldscape::sound::MixerController>::push_back(
        const shared_ptr<oldscape::sound::MixerController>& mixerController) {
        push(this, mixerController);
    }

    // 0x10029ed10
    void SharedPtrList<oldscape::sound::MixerController>::move(
        oldscape::sound::MixerController& mixerController,
        const SharedPtrList<oldscape::sound::MixerController>::obj_iterator& obj_iterator) {
        Linkable<oldscape::sound::MixerController> LVar2;
        shared_ptr<oldscape::dash3d::ModelLit>* modelLit;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_50;
        long local_38;

        if (!(mixerController.IsLinked())) {
            LogAssert("p->IsLinked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      411, nullptr);
        }
        long lVar1 = *(long*)(mixerController + 24);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(mixerController + 8);
        long local_40 = this_00->end();
        MixerController* this_01 = *(MixerController**)obj_iterator;
        if (this_01 == nullptr) {
            LogAssert("pNext != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      415, nullptr);
        }
        if (!(this_01->IsLinked())) {
            LogAssert("pNext->IsLinked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      416, nullptr);
        }
        if ((mixerController != this_01) &&
            (LVar2._vptr = *(Linkable<oldscape::sound::MixerController> _vtbl**)(this_01 + 24),
             (Linkable<oldscape::sound::MixerController> _vtbl*)mixerController != LVar2._vptr)) {
            modelLit = (shared_ptr<oldscape::dash3d::ModelLit>*)(lVar1 + 8);
            local_38 = lVar1;
            local_50.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*modelLit);
            *modelLit = *this_00;
            *this_00 = (*((shared_ptr<Linkable<oldscape::sound::MixerController> _>*)&(LVar2._vptr)->_deleting_dtor));
            (*((shared_ptr<Linkable<oldscape::sound::MixerController>>*)&(LVar2._vptr)->_deleting_dtor)) = local_50;
            *(long*)(local_40 + 24) = local_38;
            *(Linkable<oldscape::sound::MixerController> _vtbl**)(mixerController + 24) = LVar2._vptr;
            *(MixerController**)(this_01 + 24) = mixerController;
        }
    }

    // 0x10029f010
    bool SharedPtrList<oldscape::sound::MixerController>::empty() const {
        long lVar1 = (*this).operator->();
        lVar1 = *(long*)(lVar1 + 24);
        long lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x10029f110
    bool SharedPtrList<oldscape::sound::PCMStream>::empty() const {
        long lVar1 = (*this).operator->();
        lVar1 = *(long*)(lVar1 + 24);
        long lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x10029f140
    uint64_t SharedPtrList<oldscape::sound::PCMStream>::begin() {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;

        long lVar1 = (*this).operator->();
        playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)((lVar1 + 8))->end();
        return local_10(playerDataComparator);
        return local_10;
    }

    // 0x10029f170
    long SharedPtrList<oldscape::sound::PCMStream>::front() {
        return (*this).operator->() + 8;
    }

    // 0x10029f250
    long SharedPtrList<oldscape::sound::PCMStream>::obj_iterator::shared() const {
        return *(long*)(*(long*)this + 24) + 8;
    }

    // 0x10029f660
    uint64_t SharedPtrList<oldscape::sound::MixerController>::obj_iterator::next() const {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;

        playerDataComparator =
            (PlayerDataComparator<oldscape::social::FriendChatUser>*)((vector<oldscape::dash3d::EntityHighlight*,
                                                                              BucketAllocatorEASTL>*)(*(long*)this + 8))
                ->end();
        return local_10(playerDataComparator);
        return local_10;
    }

    // 0x1002ab080
    void SharedPtrList<oldscape::sound::MixerController>::push(
        const shared_ptr<oldscape::sound::MixerController>& mixerController) {
        auto this_00 = mixerController.end();
        if (this_00 == nullptr) {
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      72, nullptr);
        }
        if (this_00[3]._vptr != nullptr) {
            this_00->Unlink();
        }
        long lVar2 = (*this).operator->();
        Linkable<oldscape::sound::MixerController> _vtbl* pLVar1 =
            *(Linkable<oldscape::sound::MixerController> _vtbl**)(lVar2 + 24);
        this_00[3]._vptr = pLVar1;
        (*((this_00 + 1))) = pLVar1->_deleting_dtor;
        (*((shared_ptr<Linkable<oldscape::sound::MixerController>>*)&(this_00[3]._vptr)->_deleting_dtor)) =
            mixerController;
        lVar2 = (*this).operator->();
        *(Linkable<oldscape::sound::MixerController>**)(lVar2 + 24) = this_00;
    }

    // 0x1002ce8f0
    uint64_t SharedPtrList<oldscape::midi2::MidiNote>::begin() {
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;

        long lVar1 = (*this).operator->();
        playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)((lVar1 + 8))->end();
        return local_10(playerDataComparator);
        return local_10;
    }

    // 0x1002d5850
    uint8_t[16] SharedPtrList<oldscape::midi2::MidiNote>::ptrs() {
        uint8_t auVar1[16];

        SharedPointerIteratorHelper local_18(*this);
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

    // 0x1002d5880
    void SharedPtrList<oldscape::midi2::MidiNote>::SharedPointerIteratorHelper::begin() {
        begin_ptrs(*(SharedPtrList<oldscape::midi2::MidiNote>**)this);
    }

    // 0x1002d5890
    void SharedPtrList<oldscape::midi2::MidiNote>::ptr_iterator::operator*() const {
        shared();
    }

    // 0x1002d60e0
    void SharedPtrList<oldscape::midi2::MidiNote>::push_back(const shared_ptr<oldscape::midi2::MidiNote>& midiNote) {
        push(this, midiNote);
    }

    // 0x1002db5e0
    SharedPtrList<oldscape::sound::MixerController>::~SharedPtrList() {
        clear(this);
        long lVar1 = (*this).operator->();
        ((lVar1 + 8))->reset();
    }

    // 0x1002db630
    void SharedPtrList<oldscape::sound::MixerController>::clear() {
        long lVar1;

        long lVar2 = end();
        long lVar3 = (*this).operator->();
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            ((lVar3 + 8))->reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(uint64_t*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = (*this).operator->();
        (*((lVar3 + 8))) = *this;
        uint64_t uVar4 = end();
        lVar3 = (*this).operator->();
        *(uint64_t*)(lVar3 + 24) = uVar4;
    }

    // 0x1002e6060
    SharedPtrList<oldscape::midi2::MidiNote>::SharedPtrList() : shared_ptr() {
        Linkable<oldscape::midi2::MidiNote>* this_00 = (Linkable<oldscape::midi2::MidiNote>*)operator new(32);
        new (this_00) Linkable<oldscape::midi2::MidiNote>();
        reset<Linkable<oldscape::midi2::MidiNote>, void>(this_00);
        uint64_t uVar1 = end();
        long lVar2 = (*this).operator->();
        *(uint64_t*)(lVar2 + 24) = uVar1;
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = *this;
    }

    // 0x1002e6330
    SharedPtrList<oldscape::midi2::MidiNote>::~SharedPtrList() {
        clear(this);
        long lVar1 = (*this).operator->();
        ((lVar1 + 8))->reset();
    }

    // 0x1002e6380
    void SharedPtrList<oldscape::midi2::MidiNote>::clear() {
        long lVar1;

        long lVar2 = end();
        long lVar3 = (*this).operator->();
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            ((lVar3 + 8))->reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(uint64_t*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = (*this).operator->();
        (*((lVar3 + 8))) = *this;
        uint64_t uVar4 = end();
        lVar3 = (*this).operator->();
        *(uint64_t*)(lVar3 + 24) = uVar4;
    }

    // 0x1002ea3e0
    SharedPtrList<oldscape::midi2::MidiNote>::SharedPointerIteratorHelper::SharedPointerIteratorHelper(
        SharedPtrList<oldscape::midi2::MidiNote>& sharedPtrList) {
        *(SharedPtrList<oldscape::midi2::MidiNote>**)this = sharedPtrList;
        uint64_t uVar1 = sharedPtrList.end();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x1002ea750
    void SharedPtrList<oldscape::midi2::MidiNote>::push(const shared_ptr<oldscape::midi2::MidiNote>& midiNote) {
        auto this_00 = midiNote.end();
        if (this_00 == nullptr) {
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      72, nullptr);
        }
        if (this_00[3]._vptr != nullptr) {
            this_00->Unlink();
        }
        long lVar2 = (*this).operator->();
        Linkable<oldscape::midi2::MidiNote> _vtbl* pLVar1 = *(Linkable<oldscape::midi2::MidiNote> _vtbl**)(lVar2 + 24);
        this_00[3]._vptr = pLVar1;
        (*((this_00 + 1))) = pLVar1->_deleting_dtor;
        (*((shared_ptr<Linkable<oldscape::midi2::MidiNote>>*)&(this_00[3]._vptr)->_deleting_dtor)) = midiNote;
        lVar2 = (*this).operator->();
        *(Linkable<oldscape::midi2::MidiNote>**)(lVar2 + 24) = this_00;
    }

    // 0x1003041b0
    void SharedPtrList<oldscape::dash3d::Texture>::push_front(const shared_ptr<oldscape::dash3d::Texture>& texture) {
        auto this_00 = texture.end();
        if (this_00 == nullptr) {
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      120, nullptr);
        }
        if (this_00[3]._vptr != nullptr) {
            this_00->Unlink();
        }
        long lVar1 = (*this).operator->();
        lVar1 = ((lVar1 + 8))->end();
        long lVar2 = (*this).operator->();
        (*((this_00 + 1))) = (*((lVar2 + 8)));
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = texture;
        this_00[3]._vptr = *(Linkable<oldscape::dash3d::Texture> _vtbl**)(lVar1 + 24);
        *(Linkable<oldscape::dash3d::Texture>**)(lVar1 + 24) = this_00;
    }

    // 0x100304270
    auto SharedPtrList<oldscape::dash3d::Texture>::takeBackAndPop() {
        uint64_t uVar1;
        long lVar3;
        long lVar4;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38;

        if (empty(this) == '\0') {
            lVar3 = (*this).operator->();
            lVar3 = *(long*)(lVar3 + 24);
            uVar1 = *(uint64_t*)(lVar3 + 24);
            lVar4 = (*this).operator->();
            *(uint64_t*)(lVar4 + 24) = uVar1;
            local_38.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                *((shared_ptr<oldscape::dash3d::ModelLit>*)(*(long*)(lVar3 + 24) + 8)));
            (*((shared_ptr<Linkable<oldscape::dash3d::Texture>>*)(*(long*)(lVar3 + 24) + 8))) = (*((lVar3 + 8)));
            *(uint64_t*)(lVar3 + 24) = 0;
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_38);
        } else {
            auto result;
        }
        return result;
    }

    // 0x100307430
    bool SharedPtrList<oldscape::dash3d::Square>::empty() const {
        long lVar1 = (*this).operator->();
        lVar1 = *(long*)(lVar1 + 24);
        long lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x100307460
    void SharedPtrList<oldscape::dash3d::Square>::pop() {
        ReturnValue local_20;

        takeFrontAndPop(&local_20, this);
    }

    // 0x1003121d0
    void SharedPtrList<oldscape::dash3d::Square>::push(const shared_ptr<oldscape::dash3d::Square>& square) {
        auto this_00 = square.end();
        if (this_00 == nullptr) {
            LogAssert("p != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                      "datastructure/intrusive/SharedPtrList.h",
                      72, nullptr);
        }
        if (this_00[3]._vptr != nullptr) {
            this_00->Unlink();
        }
        long lVar2 = (*this).operator->();
        Linkable<oldscape::dash3d::Square> _vtbl* pLVar1 = *(Linkable<oldscape::dash3d::Square> _vtbl**)(lVar2 + 24);
        this_00[3]._vptr = pLVar1;
        (*((this_00 + 1))) = pLVar1->_deleting_dtor;
        (*((shared_ptr<Linkable<oldscape::dash3d::Square>>*)&(this_00[3]._vptr)->_deleting_dtor)) = square;
        lVar2 = (*this).operator->();
        *(Linkable<oldscape::dash3d::Square>**)(lVar2 + 24) = this_00;
    }

    // 0x100312270
    auto SharedPtrList<oldscape::dash3d::Square>::takeFrontAndPop() {
        uint64_t uVar1;
        long lVar3;
        long lVar4;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38;

        if (empty(this) == '\0') {
            lVar3 = (*this).operator->();
            lVar3 = ((lVar3 + 8))->end();
            uVar1 = *(uint64_t*)(lVar3 + 24);
            lVar4 = (*((lVar3 + 8))).operator->();
            *(uint64_t*)(lVar4 + 24) = uVar1;
            local_38.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                *((shared_ptr<oldscape::dash3d::ModelLit>*)(*(long*)(lVar3 + 24) + 8)));
            (*((shared_ptr<Linkable<oldscape::dash3d::Square>>*)(*(long*)(lVar3 + 24) + 8))) = (*((lVar3 + 8)));
            *(uint64_t*)(lVar3 + 24) = 0;
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_38);
        } else {
            auto result;
        }
        return result;
    }

    // 0x100330690
    SharedPtrList<oldscape::dash3d::Texture>::SharedPtrList() : shared_ptr() {
        Linkable<oldscape::dash3d::Texture>* this_00 = (Linkable<oldscape::dash3d::Texture>*)operator new(32);
        new (this_00) Linkable<oldscape::dash3d::Texture>();
        reset<Linkable<oldscape::dash3d::Texture>, void>(this_00);
        uint64_t uVar1 = end();
        long lVar2 = (*this).operator->();
        *(uint64_t*)(lVar2 + 24) = uVar1;
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = *this;
    }

    // 0x100330c20
    bool SharedPtrList<oldscape::dash3d::Texture>::empty() const {
        long lVar1 = (*this).operator->();
        lVar1 = *(long*)(lVar1 + 24);
        long lVar2 = end();
        return lVar1 == lVar2;
    }

    // 0x100331dd0
    SharedPtrList<oldscape::dash3d::Square>::SharedPtrList() : shared_ptr() {
        Linkable<oldscape::dash3d::Square>* this_00 = (Linkable<oldscape::dash3d::Square>*)operator new(32);
        new (this_00) Linkable<oldscape::dash3d::Square>();
        reset<Linkable<oldscape::dash3d::Square>, void>(this_00);
        uint64_t uVar1 = end();
        long lVar2 = (*this).operator->();
        *(uint64_t*)(lVar2 + 24) = uVar1;
        lVar2 = (*this).operator->();
        (*((lVar2 + 8))) = *this;
    }

    // 0x1003323c0
    SharedPtrList<oldscape::dash3d::Square>::~SharedPtrList() {
        clear(this);
        long lVar1 = (*this).operator->();
        ((lVar1 + 8))->reset();
    }

    // 0x100332410
    void SharedPtrList<oldscape::dash3d::Square>::clear() {
        long lVar1;

        long lVar2 = end();
        long lVar3 = (*this).operator->();
        lVar3 = *(long*)(lVar3 + 24);
        while (lVar3 != lVar2) {
            ((lVar3 + 8))->reset();
            lVar1 = *(long*)(lVar3 + 24);
            *(uint64_t*)(lVar3 + 24) = 0;
            lVar3 = lVar1;
        }
        lVar3 = (*this).operator->();
        (*((lVar3 + 8))) = *this;
        uint64_t uVar4 = end();
        lVar3 = (*this).operator->();
        *(uint64_t*)(lVar3 + 24) = uVar4;
    }

} // namespace jag
