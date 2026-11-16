// libs/oldscape/jagex3/dash3d/GroundDecor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1003333d0
    ref_counter_shared<oldscape::dash3d::GroundDecor>::ref_counter_shared(unsigned long arg1,
                                                                          oldscape::dash3d::GroundDecor* groundDecor)
        : ref_counter_base() {}

    // 0x100333410
    void ref_counter_shared<oldscape::dash3d::GroundDecor>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::GroundDecor> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((InterfaceMouseEvent*)((long)&(this[3]._vptr)->_dtor + lVar2))->~InterfaceMouseEvent();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::GroundDecor> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 56;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100333500
    oldscape::dash3d::GroundObject* placement_new<oldscape::dash3d::GroundObject>(void* arg1) {
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
        new (arg1) oldscape::dash3d::GroundObject();
        return arg1;
    }

    // 0x100333540
    ref_counter_shared<oldscape::dash3d::GroundObject>*
    placement_new<ref_counter_shared<oldscape::dash3d::GroundObject>, int, oldscape::dash3d::GroundObject*&>(
        void* arg1, int&& arg2, oldscape::dash3d::GroundObject*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::GroundObject>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class GroundDecor {
    public:
        ~GroundDecor();
        GroundDecor();

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint8_t _unknown_12[20];
        uint64_t field_32;
        uint32_t field_40;
        EntityHighlight field_44;
    };

    // 0x1000782e0: GroundDecor::~GroundDecor() has the same machine code as MinimapElement::~MinimapElement()

    // 0x100333370
    GroundDecor::GroundDecor() : field_0(0), field_8(0) {
        new (&field_16) shared_ptr();
        field_32 = 0;
        field_40 = 0;
        new (field_44) EntityHighlight();
    }

} // namespace jag::oldscape::dash3d

namespace jag::game::option {
    // 0x10060f700: GroundDecor::~GroundDecor() has the same machine code as Option<EnumOptionToggle>::~Option()

    // 0x10060f8b0
    GroundDecor::GroundDecor(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
    }

} // namespace jag::game::option
