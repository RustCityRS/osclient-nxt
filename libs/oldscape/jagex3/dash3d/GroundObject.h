// libs/oldscape/jagex3/dash3d/GroundObject.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100333610
    ref_counter_shared<oldscape::dash3d::GroundObject>::ref_counter_shared(unsigned long arg1,
                                                                           oldscape::dash3d::GroundObject* groundObject)
        : ref_counter_base() {}

    // 0x100333650
    void ref_counter_shared<oldscape::dash3d::GroundObject>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::GroundObject> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((GroundObject*)((long)&(this[3]._vptr)->_dtor + lVar2))->~GroundObject();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::GroundObject> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 88;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100333760
    oldscape::dash3d::Wall* placement_new<oldscape::dash3d::Wall>(void* arg1) {
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
        new (arg1) oldscape::dash3d::Wall();
        return arg1;
    }

    // 0x100333790
    ref_counter_shared<oldscape::dash3d::Wall>*
    placement_new<ref_counter_shared<oldscape::dash3d::Wall>, int, oldscape::dash3d::Wall*&>(
        void* arg1, int&& arg2, oldscape::dash3d::Wall*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::Wall>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class GroundObject {
    public:
        GroundObject();
        ~GroundObject();

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint8_t _unknown_12[52];
        uint64_t field_64;
        uint32_t field_72;
        EntityHighlight field_76;
    };

    // 0x100333570
    GroundObject::GroundObject() : field_0(0), field_8(0) {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        field_64 = 0;
        field_72 = 0;
        new (field_76) EntityHighlight();
    }

    // 0x1003336b0
    GroundObject::~GroundObject() {
        field_48.~shared_ptr();
        field_32.~shared_ptr();
        field_16.~shared_ptr();
    }

} // namespace jag::oldscape::dash3d
