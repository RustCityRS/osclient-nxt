// libs/oldscape/rs2lib/configdecoder/db/DBTableType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class DBTableType {
    public:
        void Init(jagex3::Js5*);
        DBTableType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void GetColumnDefaultValue(unsigned int, unsigned int, unsigned int) const;
        HasColumnDefaultValues(unsigned int) const;
        void GetColumnDefaultValues(unsigned int) const;
        void GetColumnVarType(unsigned int) const;
        DBTableType();
        ~DBTableType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        ulong field_8;   // offset 8
        Array* field_16; // offset 16
        char _unknown_24[8];
    };

    // 0x1002575b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DBTableType::DBTableType(): jumps straight to the base-object constructor

    // 0x1002575c0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // DBTableType::DBTableType()
    void DBTableType::DBTableType() {
        new (this) Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>();
        new (&field_24) Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>();
    }

    // 0x100257690, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DBTableType::~DBTableType(): jumps straight to the base-object destructor

    // 0x1002576a0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // DBTableType::~DBTableType()
    void DBTableType::~DBTableType() {
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002575f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::DBTableType>::ref_counter_shared(unsigned long, oldscape::configdecoder::DBTableType*): jumps straight to the base-object constructor

    // 0x100257600, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::DBTableType>::ref_counter_shared(unsigned long, oldscape::configdecoder::DBTableType*)
    void ref_counter_shared<oldscape::configdecoder::DBTableType>::ref_counter_shared(ulong param_1,
                                                                                      DBTableType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DBTableType**)(this + 24) = param_2;
    }

    // 0x100257640, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::DBTableType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::DBTableType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~DBTableType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
