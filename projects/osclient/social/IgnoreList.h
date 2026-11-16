// projects/osclient/social/IgnoreList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    class IgnoreList {
    public:
        // virtual methods in vtable order
        virtual IgnoreList* CreatePlayerData() const;
        void ProcessUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, int, ErrorCapture&);
        IgnoreList(rs2lib::social::NameSpace);
        ~IgnoreList();

        // data members, from how the methods use this: 168 bytes
        undefined* field_0; // offset 0, vtable pointer
        int field_8;        // offset 8
        int field_12;       // offset 12
        char _unknown_16[144];
        undefined4 field_160; // offset 160
        char _unknown_164[4];
    };

    // 0x10013a030, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // IgnoreList::IgnoreList(rs2lib::social::NameSpace): jumps straight to the base-object constructor

    // 0x10013a050, 64 bytes, base-object constructor, inline, placed by class name
    // IgnoreList::IgnoreList(rs2lib::social::NameSpace)
    void IgnoreList::IgnoreList(undefined4 param_2) {
        new (this) PlayerRegistry<IgnoreData>(400);
        field_0 = PTR_vtable_100ee8af8 + 16;
        field_160 = param_2;
    }

    // 0x10013a1a0, 32 bytes, inline, placed by class name
    // IgnoreList::CreatePlayerData() const
    IgnoreList* IgnoreList::CreatePlayerData() {
        std::make_unique<IgnoreData>();
        return this;
    }

    // 0x10013d000, 16 bytes, complete-object destructor, inline, placed by class name
    // IgnoreList::~IgnoreList(): jumps straight to the base-object destructor

    // 0x10013d010, 16 bytes, base-object destructor, inline, placed by class name
    // IgnoreList::~IgnoreList()
    void IgnoreList::~IgnoreList() {
        ~PlayerRegistry();
    }

} // namespace jag::oldscape::social
