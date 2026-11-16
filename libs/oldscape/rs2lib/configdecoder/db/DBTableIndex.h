// libs/oldscape/rs2lib/configdecoder/db/DBTableIndex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class DBTableIndex {
    public:
        void GetDBRowsForValue(game::VarValue const&) const;
        DBTableIndex(PacketJ<Array<unsigned char, eastl::allocator>>&);
        ulong Deserialise(PacketJ<Array<unsigned char, eastl::allocator>>&);
        GetDBRowsForValue(game::VarValue const&, int) const;
        ~DBTableIndex();

        // data members, from how the methods use this: 16 bytes
        long field_0;        // offset 0
        vector_map* field_8; // offset 8
    };

    // 0x1000b99f0, 16 bytes, inline, placed by class name and debug map
    // DBTableIndex::GetDBRowsForValue(game::VarValue const&) const
    void DBTableIndex::GetDBRowsForValue(VarValue* param_1) {
        GetDBRowsForValue(this, param_1, 0);
    }

    // 0x100255420, 16 bytes, complete-object destructor, inline, placed by class name
    // DBTableIndex::~DBTableIndex(): jumps straight to the base-object destructor

    // 0x100255430, 16 bytes, base-object destructor, inline, placed by class name
    // DBTableIndex::~DBTableIndex()
    /* game::DBTableIndex::~DBTableIndex() */

    void game::DBTableIndex::~DBTableIndex() {
        ~vector();
    }

} // namespace jag::oldscape

namespace jag::game {
    class DBTableIndex {
    public:
        ~DBTableIndex();
        DBTableIndex(PacketT<Array<unsigned char, eastl::allocator>>&);
        ulong Deserialise(PacketT<Array<unsigned char, eastl::allocator>>&);
        GetDBRowsForValue(VarValue const&, unsigned int) const;

        // data members, from how the methods use this: 16 bytes
        long field_0;        // offset 0
        vector_map* field_8; // offset 8
    };

} // namespace jag::game
