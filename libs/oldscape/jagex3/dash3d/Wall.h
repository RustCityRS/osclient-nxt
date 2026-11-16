// libs/oldscape/jagex3/dash3d/Wall.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100333830
    ref_counter_shared<oldscape::dash3d::Wall>::ref_counter_shared(unsigned long arg1, oldscape::dash3d::Wall* wall)
        : ref_counter_base() {}

    // 0x100333870
    void ref_counter_shared<oldscape::dash3d::Wall>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::Wall> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Wall*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Wall();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::Wall> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100333980
    oldscape::dash3d::Decor* placement_new<oldscape::dash3d::Decor>(void* arg1) {
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
        *(uint64_t*)((long)arg1 + 80) = 0;
        new (arg1) oldscape::dash3d::Decor();
        return arg1;
    }

    // 0x1003339c0
    ref_counter_shared<oldscape::dash3d::Decor>*
    placement_new<ref_counter_shared<oldscape::dash3d::Decor>, int, oldscape::dash3d::Decor*&>(
        void* arg1, int&& arg2, oldscape::dash3d::Decor*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::Decor>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class Wall {
    public:
        Wall();
        ~Wall();

    private:
        uint8_t _unknown_0[4];
        uint64_t field_4;
        uint64_t field_12;
        uint32_t field_20;
        uint8_t _unknown_24[32];
        uint64_t field_56;
        EntityHighlight field_64;
    };

    // 0x1003337c0
    Wall::Wall() : field_4(0), field_12(0), field_20(0) {
        new (&field_24) shared_ptr();
        new (&field_40) shared_ptr();
        field_56 = 0;
        new (field_64) EntityHighlight();
    }

    // 0x1003338d0
    Wall::~Wall() {
        field_40.~shared_ptr();
        field_24.~shared_ptr();
    }

} // namespace jag::oldscape::dash3d
