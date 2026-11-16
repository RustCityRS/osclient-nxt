// libs/oldscape/jagex3/midi2/envelopeset.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class EnvelopeSet {
    public:
        EnvelopeSet();
        EnvelopeSet(EnvelopeSet const&);
        EnvelopeSet* Blank();
        ~EnvelopeSet();

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[48];
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        undefined4 field_56; // offset 56
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        undefined4 field_68; // offset 68
        undefined4 field_72; // offset 72
        char _unknown_76[4];
    };

    // 0x1002c9950, 64 bytes, base-object constructor, placed by class name
    // EnvelopeSet::EnvelopeSet()
    void EnvelopeSet::EnvelopeSet() {
        new (this) Array<signed char, eastl::allocator>();
        new (&field_24) Array<signed char, eastl::allocator>();
        field_60 = 0;
        field_64 = 0;
        field_68 = 0;
        field_72 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = 0;
        field_60 = 0;
    }

    // 0x1002c9990, 16 bytes, complete-object constructor, placed by class name
    // EnvelopeSet::EnvelopeSet(): jumps straight to the base-object constructor

    // 0x1002c99a0, 128 bytes, base-object constructor, placed by class name
    // EnvelopeSet::EnvelopeSet(EnvelopeSet const&)
    void EnvelopeSet::EnvelopeSet(EnvelopeSet* param_1) {
        new (this) Array<signed char, eastl::allocator>(param_1);
        new (&field_24, (Array*)&param_1->field_24) Array<signed char, eastl::allocator>();
        field_60 = 0;
        field_64 = 0;
        field_68 = 0;
        field_72 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = 0;
        field_60 = 0;
        field_48 = param_1->field_48;
        field_52 = param_1->field_52;
        field_56 = param_1->field_56;
        field_60 = param_1->field_60;
        field_64 = param_1->field_64;
        field_68 = param_1->field_68;
        field_72 = param_1->field_72;
    }

    // 0x1002c9a20, 16 bytes, complete-object constructor, placed by class name
    // EnvelopeSet::EnvelopeSet(EnvelopeSet const&): jumps straight to the base-object constructor

    // 0x1002c9a30, 48 bytes, placed by class name
    // EnvelopeSet::Blank()
    EnvelopeSet* EnvelopeSet::Blank() {
        long lVar1;

        std::make_unique<EnvelopeSet>();
        lVar1 = std::unique_ptr<EnvelopeSet, std::default_delete<EnvelopeSet>>::operator->(
            (unique_ptr<EnvelopeSet, std::default_delete<EnvelopeSet>>*)this);
        *(undefined4*)(lVar1 + 68) = 24;
        return this;
    }

    // 0x1002e3d90, 16 bytes, complete-object destructor, inline, placed by class name
    // EnvelopeSet::~EnvelopeSet(): jumps straight to the base-object destructor

    // 0x1002e3da0, 48 bytes, base-object destructor, inline, placed by class name
    // EnvelopeSet::~EnvelopeSet()
    void EnvelopeSet::~EnvelopeSet() {
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag::oldscape::midi2
