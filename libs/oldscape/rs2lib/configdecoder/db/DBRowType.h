// libs/oldscape/rs2lib/configdecoder/db/DBRowType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class DBRowType {
    public:
        GetDbTableId() const;
        void Init(jagex3::Js5*);
        DBRowType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void GetColumnVarValue(unsigned int, unsigned int, unsigned int) const;
        HasColumnVarValues(unsigned int) const;
        void GetColumnVarValues(unsigned int) const;
        void GetColumnVarType(unsigned int) const;
        DBRowType();
        ~DBRowType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[8];
        ulong field_8;   // offset 8
        Array* field_16; // offset 16
        char _unknown_24[24];
        undefined4 field_48; // offset 48
        char _unknown_52[4];
    };

    // 0x1000b9a40, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DBRowType::GetDbTableId() const
    /* sound::PCMPlayer::AlreadyWritten() */

    undefined4 sound::PCMPlayer::AlreadyWritten() {
        return field_48;
    }

    // 0x100253d00, 16 bytes, complete-object constructor, inline, placed by class name
    // DBRowType::DBRowType(): jumps straight to the base-object constructor

    // 0x100253d10, 48 bytes, base-object constructor, inline, placed by class name
    // DBRowType::DBRowType()
    void DBRowType::DBRowType() {
        new (this) Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>();
        new (&field_24) Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>();
    }

    // 0x100253f30, 16 bytes, complete-object destructor, inline, placed by class name
    // DBRowType::~DBRowType(): jumps straight to the base-object destructor

    // 0x100253f40, 48 bytes, base-object destructor, inline, placed by class name
    // DBRowType::~DBRowType()
    void DBRowType::~DBRowType() {
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag::oldscape::configdecoder
