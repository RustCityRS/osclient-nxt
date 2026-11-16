// projects/osclient/social/FriendList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    class FriendList {
    public:
        class FriendEvent;
        // virtual methods in vtable order
        virtual FriendList* CreatePlayerData() const;
        FriendList(rs2lib::social::NameSpace);
        void ProcessUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, int, ErrorCapture&);
        ~FriendList();
        IsFriend(rs2lib::social::DisplayName const&, bool) const;

        // data members, from how the methods use this: 176 bytes
        undefined* field_0; // offset 0, vtable pointer
        int field_8;        // offset 8
        int field_12;       // offset 12
        char _unknown_16[144];
        undefined4 field_160; // offset 160
        int field_164;        // offset 164
        char _unknown_168[8];
    };

    class FriendList::FriendEvent {
    public:
        FriendEvent(rs2lib::social::DisplayName const&, int);
        FriendEvent(FriendEvent&&);
        ~FriendEvent();
        FriendEvent* operator=(FriendEvent&&);

        // data members, from how the methods use this: 76 bytes
        char _unknown_0[64];
        int field_64;        // offset 64
        short field_68;      // offset 68
        undefined1 field_70; // offset 70
        char _unknown_71[5];
    };

    // 0x100056910, 16 bytes, complete-object constructor, inline, placed by class name
    // FriendList::FriendEvent::FriendEvent(FriendList::FriendEvent&&): jumps straight to the base-object constructor

    // 0x100056a00, 48 bytes, base-object constructor, inline, placed by class name
    // FriendList::FriendEvent::FriendEvent(FriendList::FriendEvent&&)
    void FriendList::FriendEvent::FriendEvent(FriendEvent* param_1) {
        int iVar1;

        new (this) ConsoleCommandHelp(param_1);
        iVar1 = param_1->field_64;
        *(undefined4*)((long)&field_64 + 3) = *(undefined4*)((long)&param_1->field_64 + 3);
        field_64 = iVar1;
    }

    // 0x10013a040, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FriendList::~FriendList(): jumps straight to the base-object destructor

    // 0x10013aa30, 64 bytes, base-object destructor, inline, placed by class name
    // FriendList::~FriendList()
    void FriendList::~FriendList() {
        field_0 = PTR_vtable_100ee8ae8 + 16;
        (&field_168)->~vector();
        ~PlayerRegistry();
    }

    // 0x10013aad0, 32 bytes, inline, placed by class name
    // FriendList::CreatePlayerData() const
    FriendList* FriendList::CreatePlayerData() {
        std::make_unique<FriendData>();
        return this;
    }

    // 0x100185bc0, 48 bytes, inline, placed by class name
    // FriendList::IsFriend(rs2lib::social::DisplayName const&, bool) const
    undefined8 FriendList::IsFriend(DisplayName* param_1, bool param_2) {
        long lVar1;
        undefined8 uVar2;

        lVar1 = GetPlayer(param_1);
        if ((lVar1 == 0) || ((param_2 && (*(int*)(lVar1 + 136) == 0)))) {
            uVar2 = 0;
        } else {
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x1001af6d0, 48 bytes, inline, placed by class name
    // FriendList::FriendEvent::operator=(FriendList::FriendEvent&&)
    /* FriendList::FriendEvent::TEMPNAMEPLACEHOLDERVALUE(FriendList::FriendEvent&&)
    */

    FriendEvent* FriendList::FriendEvent::operator=(FriendEvent* param_1) {
        undefined4 uVar1;

        rs2lib::social::DisplayName::operator=((DisplayName*)this, (DisplayName*)param_1);
        uVar1 = *(undefined4*)((long)&param_1->field_64 + 3);
        field_64 = param_1->field_64;
        *(undefined4*)((long)&field_64 + 3) = uVar1;
        return this;
    }

} // namespace jag::oldscape::social
