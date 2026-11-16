// libs/oldscape/jagex3/dash3d/QuickGround.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100332fa0
    ref_counter_shared_trivial<oldscape::dash3d::QuickGround>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::QuickGround* quickGround)
        : ref_counter_base() {}

    // 0x100333050
    oldscape::dash3d::Ground* placement_new<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&,
                                            int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&>(
        void* arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6, int& arg7, int& arg8, int& arg9, int& arg10,
        int& arg11, int& arg12, int& arg13, int& arg14, int& arg15, int& arg16, int& arg17, int& arg18, int& arg19,
        int& arg20) {
        new (arg1) oldscape::dash3d::Ground(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13,
                                            arg14, arg15, arg16, arg17, arg18, arg19, arg20);
        return arg1;
    }

    // 0x100333140
    ref_counter_shared<oldscape::dash3d::Ground>*
    placement_new<ref_counter_shared<oldscape::dash3d::Ground>, int, oldscape::dash3d::Ground*&>(
        void* arg1, int&& arg2, oldscape::dash3d::Ground*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::Ground>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100333170
    ref_counter_shared<oldscape::dash3d::Ground>::ref_counter_shared(unsigned long arg1,
                                                                     oldscape::dash3d::Ground* ground)
        : ref_counter_base() {}

    // 0x1003331b0
    void ref_counter_shared<oldscape::dash3d::Ground>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::Ground> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Ground*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Ground();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::Ground> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 360;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class QuickGround {
    public:
        QuickGround(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, bool arg8);

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        bool field_24;
        bool field_25;
        uint8_t _unknown_26[2];
    };

    // 0x100332f60
    QuickGround::QuickGround(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, bool arg8)
        : field_4(arg1), field_8(arg2), field_12(arg3), field_16(arg4), field_20(arg5), field_0(arg6), field_24(arg7),
          field_25(arg8) {}

} // namespace jag::oldscape::dash3d
