// libs/oldscape/jagex3/sound/mapping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class Mapping {
    public:
        Mapping();
        ~Mapping();
        Mapping(Mapping&&);

        // data members, from how the methods use this: 48 bytes
        int field_0;        // offset 0
        int field_4;        // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[36];
    };

    // 0x10029d540, 416 bytes, base-object constructor, placed by class name
    // Mapping::Mapping()
    void Mapping::Mapping() {
        undefined1* this_00;
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        undefined1* this_01;
        ulong uVar4;

        field_0 = 0;
        field_4 = 0;
        field_8 = 0;
        this_01 = &field_16;
        new (this_01) Array<int, eastl::allocator>();
        this_00 = &field_40;
        new (this_00) Array<int, eastl::allocator>();
        (&JagVorbis::m_staticUnpacker)->ReadBits(16);
        iVar1 = (&JagVorbis::m_staticUnpacker)->ReadBit();
        if (iVar1 == 0) {
            iVar1 = 1;
        } else {
            iVar1 = (&JagVorbis::m_staticUnpacker)->ReadBits(4);
            iVar1 = iVar1 + 1;
        }
        field_0 = iVar1;
        iVar1 = (&JagVorbis::m_staticUnpacker)->ReadBit();
        if (iVar1 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = (&JagVorbis::m_staticUnpacker)->ReadBits(8);
            iVar1 = iVar1 + 1;
        }
        field_4 = iVar1;
        (&JagVorbis::m_staticUnpacker)->ReadBits(2);
        if (1 < field_0) {
            uVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(4);
            field_8 = uVar2;
        }
        this_01->set_max_size((long)field_0, 5);
        this_00->set_max_size((long)field_0, 5);
        if (0 < field_0) {
            uVar4 = 0;
            do {
                (&JagVorbis::m_staticUnpacker)->ReadBits(8);
                uVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(8);
                puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01,
                                                                               uVar4);
                *puVar3 = uVar2;
                uVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(8);
                puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                               uVar4);
                *puVar3 = uVar2;
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)field_0);
        }
    }

    // 0x10029d6e0, 16 bytes, complete-object constructor, placed by class name
    // Mapping::Mapping(): jumps straight to the base-object constructor

    // 0x1002aa610, 16 bytes, complete-object destructor, inline, placed by class name
    // Mapping::~Mapping(): jumps straight to the base-object destructor

    // 0x1002aa620, 48 bytes, base-object destructor, inline, placed by class name
    // Mapping::~Mapping()
    void Mapping::~Mapping() {
        (&field_40)->~Array();
        (&field_16)->~Array();
    }

    // 0x1002aaa40, 16 bytes, complete-object constructor, inline, placed by class name
    // Mapping::Mapping(Mapping&&): jumps straight to the base-object constructor

    // 0x1002aaa50, 64 bytes, base-object constructor, inline, placed by class name
    // Mapping::Mapping(Mapping&&)
    void Mapping::Mapping(Mapping* param_1) {
        int iVar1;

        field_8 = param_1->field_8;
        iVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        new (&field_16, (Array*)&param_1->field_16) Array<int, eastl::allocator>();
        new (&field_40, (Array*)&param_1->field_40) Array<int, eastl::allocator>();
    }

} // namespace jag::oldscape::sound
