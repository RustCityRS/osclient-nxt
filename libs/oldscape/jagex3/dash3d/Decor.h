// libs/oldscape/jagex3/dash3d/Decor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100333a60
    ref_counter_shared<oldscape::dash3d::Decor>::ref_counter_shared(unsigned long arg1, oldscape::dash3d::Decor* decor)
        : ref_counter_base() {}

    // 0x100333aa0
    void ref_counter_shared<oldscape::dash3d::Decor>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::Decor> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Decor*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Decor();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::Decor> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 88;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100333bb0
    oldscape::dash3d::Sprite* placement_new<oldscape::dash3d::Sprite>(void* arg1) {
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 96) = 0;
        new (arg1) oldscape::dash3d::Sprite();
        return arg1;
    }

    // 0x100333bf0
    ref_counter_shared<oldscape::dash3d::Sprite>*
    placement_new<ref_counter_shared<oldscape::dash3d::Sprite>, int, oldscape::dash3d::Sprite*&>(
        void* arg1, int&& arg2, oldscape::dash3d::Sprite*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::Sprite>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100333c70
    ref_counter_shared<oldscape::dash3d::Sprite>::ref_counter_shared(unsigned long arg1,
                                                                     oldscape::dash3d::Sprite* sprite)
        : ref_counter_base() {}

    // 0x100333cb0
    void ref_counter_shared<oldscape::dash3d::Sprite>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::Sprite> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Sprite*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Sprite();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::Sprite> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 104;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class Decor {
    public:
        Decor();
        ~Decor();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[4];
        uint64_t field_12;
        uint64_t field_20;
        uint8_t _unknown_28[36];
        uint64_t field_64;
        uint32_t field_72;
        EntityHighlight field_76;
    };

    // 0x1003339f0
    Decor::Decor() : field_12(0), field_20(0), field_0(0) {
        *(uint64_t*)&field_8 = 0;
        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        field_64 = 0;
        field_72 = 0;
        new (field_76) EntityHighlight();
    }

    // 0x100333b00
    Decor::~Decor() {
        field_48.~shared_ptr();
        field_32.~shared_ptr();
    }

} // namespace jag::oldscape::dash3d
