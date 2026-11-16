// libs/oldscape/jagex3/client/clientlocanim.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100151810
    oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                           shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        void* arg1, int& arg2, int&& arg3, int& arg4, int& arg5, int& arg6, int& arg7, int& arg8, bool&& arg9,
        shared_ptr<oldscape::dash3d::ModelSource>& modelSource, int& arg11) {

        shared_ptr<oldscape::dash3d::Decor> local_58(modelSource);
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x1001518d0
    oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                           shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        void* arg1, int&& arg2, int&& arg3, int& arg4, int& arg5, int& arg6, int& arg7, int& arg8, bool&& arg9,
        shared_ptr<oldscape::dash3d::ModelSource>& modelSource, int& arg11) {

        shared_ptr<oldscape::dash3d::Decor> local_58(modelSource);
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x100151990
    oldscape::MapSpotAnim* placement_new<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
        void* arg1, int& arg2, int& arg3, int& arg4, int& arg5, int&& arg6, int& arg7, int& arg8) {
        new (arg1) oldscape::MapSpotAnim(arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        return arg1;
    }

    // 0x1001519d0
    ref_counter_shared<oldscape::MapSpotAnim>*
    placement_new<ref_counter_shared<oldscape::MapSpotAnim>, int, oldscape::MapSpotAnim*&>(
        void* arg1, int&& arg2, oldscape::MapSpotAnim*& arg3) {
        new (arg1) ref_counter_shared<oldscape::MapSpotAnim>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100151a00
    ref_counter_shared<oldscape::MapSpotAnim>::ref_counter_shared(unsigned long arg1,
                                                                  oldscape::MapSpotAnim* mapSpotAnim)
        : ref_counter_base() {}

    // 0x100151a40
    void ref_counter_shared<oldscape::MapSpotAnim>::DeleteData() {
        ref_counter_shared<oldscape::MapSpotAnim> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MapSpotAnim*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MapSpotAnim();
                    prVar1 = (ref_counter_shared<oldscape::MapSpotAnim> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100151b50
    oldscape::ClientProj*
    placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
        void* arg1, int& arg2, int& arg3, int& arg4, int& arg5, int&& arg6, int&& arg7, int&& arg8, int& arg9,
        int& arg10, int& arg11, int& arg12) {
        new (arg1) oldscape::ClientProj(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
        return arg1;
    }

    // 0x100151bd0
    ref_counter_shared<oldscape::ClientProj>*
    placement_new<ref_counter_shared<oldscape::ClientProj>, int, oldscape::ClientProj*&>(void* arg1, int&& arg2,
                                                                                         oldscape::ClientProj*& arg3) {
        new (arg1) ref_counter_shared<oldscape::ClientProj>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100151c00
    ref_counter_shared<oldscape::ClientProj>::ref_counter_shared(unsigned long arg1, oldscape::ClientProj* clientProj)
        : ref_counter_base() {}

    // 0x100151c40
    void ref_counter_shared<oldscape::ClientProj>::DeleteData() {
        ref_counter_shared<oldscape::ClientProj> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClientProj*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClientProj();
                    prVar1 = (ref_counter_shared<oldscape::ClientProj> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 192;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100151d50
    oldscape::rs2lib::social::ClanChannel*
    placement_new<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(
        void* arg1, oldscape::core::SuperPacket& superPacket) {
        new (arg1) oldscape::rs2lib::social::ClanChannel(superPacket);
        return arg1;
    }

    // 0x100151d70
    ref_counter_shared<oldscape::rs2lib::social::ClanChannel>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannel>, int,
                  oldscape::rs2lib::social::ClanChannel*&>(void* arg1, int&& arg2,
                                                           oldscape::rs2lib::social::ClanChannel*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanChannel>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100151da0
    ref_counter_shared<oldscape::rs2lib::social::ClanChannel>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanChannel* clanChannel)
        : ref_counter_base() {}

    // 0x100151de0
    oldscape::rs2lib::social::ClanSettings*
    placement_new<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(
        void* arg1, oldscape::core::SuperPacket& superPacket) {
        new (arg1) oldscape::rs2lib::social::ClanSettings(superPacket);
        return arg1;
    }

    // 0x100151e00
    ref_counter_shared<oldscape::rs2lib::social::ClanSettings>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettings>, int,
                  oldscape::rs2lib::social::ClanSettings*&>(void* arg1, int&& arg2,
                                                            oldscape::rs2lib::social::ClanSettings*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettings>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100151e30
    ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettings* clanSettings)
        : ref_counter_base() {}

    // 0x100151e70
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettings> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClanSettings*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClanSettings();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::social::ClanSettings> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 424;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape {
    class ClientLocAnim : public jag::graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientLocAnim();
        virtual auto GetTempModel(int arg1);
        virtual bool IsLit() const;
        virtual bool IsClientLocAnim() const;
        bool IsUnlit() const;
        ClientLocAnim(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, bool arg8,
                      shared_ptr<dash3d::ModelSource> modelSource, int arg10);
        void Hmap(int arg1, int arg2);

    private:
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        int field_32;
        int field_36;
        uint8_t _unknown_40[16];
        unsigned int field_56;
        int field_60;
        uint8_t _unknown_64[4];
    };

    // 0x100151760
    ClientLocAnim::~ClientLocAnim() {
        field_40.~shared_ptr();
    }

} // namespace jag::oldscape
