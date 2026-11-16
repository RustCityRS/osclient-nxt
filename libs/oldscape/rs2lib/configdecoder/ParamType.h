// libs/oldscape/rs2lib/configdecoder/ParamType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class ParamType {
    public:
        ~ParamType();
        void Init(jagex3::Js5*);
        ParamType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void PostDecode();
        bool IsStringType();
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        ParamType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 41 bytes
        undefined2 field_0; // offset 0
        char _unknown_2[2];
        undefined4 field_4; // offset 4
        long field_8;       // offset 8
        char _unknown_16[24];
        undefined1 field_40; // offset 40
    };

    // 0x10024b970, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ParamType::ParamType(): jumps straight to the base-object constructor

    // 0x10024b980, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ParamType::ParamType()
    void ParamType::ParamType() {
        new (&field_8) eastl::string();
        field_40 = 1;
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10024b9a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ParamType>::ref_counter_shared(unsigned long, oldscape::configdecoder::ParamType*): jumps straight to the base-object constructor

    // 0x10024b9b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ParamType>::ref_counter_shared(unsigned long, oldscape::configdecoder::ParamType*)
    void ref_counter_shared<oldscape::configdecoder::ParamType>::ref_counter_shared(ulong param_1, ParamType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7648 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ParamType**)(this + 24) = param_2;
    }

    // 0x10024b9f0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ParamType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::ParamType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~LanguageMessage();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
