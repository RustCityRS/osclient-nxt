// libs/oldscape/rs2lib/configdecoder/EnumType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class EnumType {
    public:
        void Init(jagex3::Js5*);
        EnumType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        uint GetNumOptions();
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        EnumType();
        ~EnumType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 104 bytes
        ushort field_0; // offset 0
        ushort field_2; // offset 2
        char _unknown_4[4];
        long field_8; // offset 8
        char _unknown_16[24];
        undefined4 field_40; // offset 40
        uint m_numOptions;   // offset 44
        char _unknown_48[56];
    };

    // 0x100280200, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EnumType::EnumType(): jumps straight to the base-object constructor

    // 0x100280210, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // EnumType::EnumType()
    void EnumType::EnumType() {
        new (&field_8, (basic_string*)&constants::text::null) eastl::string();
        m_numOptions = 0;
        new (&field_48) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) Array<eastl::string, eastl::allocator>();
    }

    // 0x100280340, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // EnumType::~EnumType(): jumps straight to the base-object destructor

    // 0x100280350, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // EnumType::~EnumType()
    void EnumType::~EnumType() {
        (&field_96)->~Array();
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_8)->~basic_string();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002802a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::EnumType>::ref_counter_shared(unsigned long, oldscape::configdecoder::EnumType*): jumps straight to the base-object constructor

    // 0x1002802b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::EnumType>::ref_counter_shared(unsigned long, oldscape::configdecoder::EnumType*)
    void ref_counter_shared<oldscape::configdecoder::EnumType>::ref_counter_shared(ulong param_1, EnumType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7628 + 16;
        *(ulong*)(this + 16) = param_1;
        *(EnumType**)(this + 24) = param_2;
    }

    // 0x1002802f0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::EnumType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::EnumType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~EnumType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 120;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
