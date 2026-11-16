// projects/osclient/social/PlayerData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerData {
    public:
        // virtual methods in vtable order
        virtual void CompareTo(FriendChatUser const&) const;
        SetDisplayNames(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&);
        void ClearOldDisplayName();
        ~PlayerData();
        PlayerData();
        void GetFormattedCurrentDisplayName() const;
        void GetFormattedOldDisplayName() const;
    };

    // 0x1000564a0, 128 bytes, inline, placed by class name and debug map
    // PlayerData<FriendData>::SetDisplayNames(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    undefined1 PlayerData<FriendData>::SetDisplayNames(DisplayName* param_1, DisplayName* param_2) {
        DisplayName local_60;

        new (&local_60) rs2lib::social::DisplayName(param_1);
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 8), &local_60);
        local_60.~pair();
        new (&local_60) rs2lib::social::DisplayName(param_2);
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 72), &local_60);
        local_60.~pair();
        return 1;
    }

    // 0x1000565c0, 80 bytes, inline, placed by class name and debug map
    // PlayerData<FriendData>::ClearOldDisplayName()
    void PlayerData<FriendData>::ClearOldDisplayName() {
        DisplayName local_58;

        new (&local_58) rs2lib::social::DisplayName();
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 72), &local_58);
        local_58.~pair();
    }

    // 0x100056eb0, 128 bytes, inline, placed by class name
    // PlayerData<IgnoreData>::SetDisplayNames(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    undefined1 PlayerData<IgnoreData>::SetDisplayNames(DisplayName* param_1, DisplayName* param_2) {
        DisplayName local_60;

        new (&local_60) rs2lib::social::DisplayName(param_1);
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 8), &local_60);
        local_60.~pair();
        new (&local_60) rs2lib::social::DisplayName(param_2);
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 72), &local_60);
        local_60.~pair();
        return 1;
    }

    // 0x100057040, 80 bytes, inline, placed by class name
    // PlayerData<IgnoreData>::ClearOldDisplayName()
    void PlayerData<IgnoreData>::ClearOldDisplayName() {
        DisplayName local_58;

        new (&local_58) rs2lib::social::DisplayName();
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 72), &local_58);
        local_58.~pair();
    }

    // 0x10012eac0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // PlayerData<FriendChatUser>::~PlayerData()
    void PlayerData<FriendChatUser>::~PlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b10 + 16;
        ((this + 72))->~pair();
        ((this + 8))->~pair();
    }

    // 0x10012eb00, 32 bytes, inline, placed by class name and debug map
    // PlayerData<FriendChatUser>::CompareTo(FriendChatUser const&) const
    /* PlayerData<FriendData>::CompareTo(FriendData
   const&) const */

    void PlayerData<FriendData>::CompareTo(FriendData* param_1) {
        ((this + 8))->CompareTo((DisplayName*)&param_1->field_8);
    }

    // 0x10012ed70, 128 bytes, inline, placed by class name and debug map
    // PlayerData<FriendChatUser>::SetDisplayNames(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    undefined1 PlayerData<FriendChatUser>::SetDisplayNames(DisplayName* param_1, DisplayName* param_2) {
        DisplayName local_60;

        new (&local_60) rs2lib::social::DisplayName(param_1);
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 8), &local_60);
        local_60.~pair();
        new (&local_60) rs2lib::social::DisplayName(param_2);
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 72), &local_60);
        local_60.~pair();
        return 1;
    }

    // 0x10012ef10, 80 bytes, inline, placed by class name and debug map
    // PlayerData<FriendChatUser>::ClearOldDisplayName()
    void PlayerData<FriendChatUser>::ClearOldDisplayName() {
        DisplayName local_58;

        new (&local_58) rs2lib::social::DisplayName();
        rs2lib::social::DisplayName::operator=((DisplayName*)(this + 72), &local_58);
        local_58.~pair();
    }

    // 0x10013a970, 80 bytes, base-object constructor, inline, placed by class name
    // PlayerData<IgnoreData>::PlayerData()
    void PlayerData<IgnoreData>::PlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b08 + 16;
        new ((this + 8)) rs2lib::social::DisplayName();
        new ((this + 72)) rs2lib::social::DisplayName();
    }

    // 0x10013aec0, 80 bytes, base-object constructor, inline, placed by class name
    // PlayerData<FriendData>::PlayerData()
    void PlayerData<FriendData>::PlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b00 + 16;
        new ((this + 8)) rs2lib::social::DisplayName();
        new ((this + 72)) rs2lib::social::DisplayName();
    }

    // 0x1001513a0, 80 bytes, base-object constructor, inline, placed by class name
    // PlayerData<FriendChatUser>::PlayerData()
    void PlayerData<FriendChatUser>::PlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b10 + 16;
        new ((this + 8)) rs2lib::social::DisplayName();
        new ((this + 72)) rs2lib::social::DisplayName();
    }

    // 0x1001611e0, 16 bytes, inline, placed by class name
    // PlayerData<FriendData>::GetFormattedCurrentDisplayName() const
    /* PlayerData<IgnoreData>::GetFormattedCurrentDisplayName()
   const */

    void PlayerData<IgnoreData>::GetFormattedCurrentDisplayName() {
        ((this + 8))->GetDisplayName();
    }

    // 0x1001611f0, 16 bytes, inline, placed by class name
    // PlayerData<FriendData>::GetFormattedOldDisplayName() const
    /* PlayerData<IgnoreData>::GetFormattedOldDisplayName()
   const */

    void PlayerData<IgnoreData>::GetFormattedOldDisplayName() {
        ((this + 72))->GetDisplayName();
    }

    // 0x1001af890, 64 bytes, base-object destructor, inline, placed by class name
    // PlayerData<FriendData>::~PlayerData()
    void PlayerData<FriendData>::~PlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b00 + 16;
        ((this + 72))->~pair();
        ((this + 8))->~pair();
    }

    // 0x1001afa20, 64 bytes, base-object destructor, inline, placed by class name
    // PlayerData<IgnoreData>::~PlayerData()
    void PlayerData<IgnoreData>::~PlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b08 + 16;
        ((this + 72))->~pair();
        ((this + 8))->~pair();
    }

} // namespace jag::oldscape::social

namespace jag {
    // 0x10012f660, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g4_alt1()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g4_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        long lVar4;
        byte* pbVar5;

        lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar4 + 3);
        bVar1 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        bVar2 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 3);
        bVar3 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 4);
        return (uint)*pbVar5 | (uint)bVar3 << 8 | (uint)bVar2 << 16 | (uint)bVar1 << 24;
    }

    // 0x100130140, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g3_alt3()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        byte bVar2;
        long lVar3;
        byte* pbVar4;

        lVar3 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar3 + 3;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar3 + 1);
        bVar1 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 3);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        return (uint)*pbVar4 | (uint)bVar2 << 8 | (uint)bVar1 << 16;
    }

    // 0x1001301d0, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g3_alt2()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        byte bVar2;
        ulong uVar3;
        byte* pbVar4;

        uVar3 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar3 + 3;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar3);
        bVar1 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        return (uint)*pbVar4 | (uint)bVar2 << 8 | (uint)bVar1 << 16;
    }

    // 0x100130230, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g4_alt2()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g4_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        long lVar4;
        byte* pbVar5;

        lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar4 + 2);
        bVar1 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        bVar2 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 4);
        bVar3 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 3);
        return (uint)*pbVar5 | (uint)bVar3 << 8 | (uint)bVar2 << 16 | (uint)bVar1 << 24;
    }

    // 0x1001302b0, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g2s_alt1()
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2s_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        undefined1 uVar1;
        long lVar2;
        undefined1* puVar3;

        lVar2 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar2 + 2;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar2 + 1);
        uVar1 = *puVar3;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        return (int)CONCAT11(uVar1, *puVar3);
    }

    // 0x100130300, 128 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g4_alt3()
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g4s_alt3() */

    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g4s_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        long lVar4;
        byte* pbVar5;

        lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar4 + 1);
        bVar1 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 4);
        bVar2 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        bVar3 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        return (uint)*pbVar5 | (uint)bVar3 << 8 | (uint)bVar2 << 16 | (uint)bVar1 << 24;
    }

    // 0x100130380, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g2s_alt2()
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2s_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        ulong uVar2;
        byte* pbVar3;

        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 2;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        return (int)(short)(*pbVar3 ^ 128 | (ushort)bVar1 << 8);
    }

    // 0x1001303e0, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g3s_alt2()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3s_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        uint uVar1;
        byte bVar2;
        ulong uVar3;
        byte* pbVar4;
        uint uVar5;

        uVar3 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar3 + 3;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar3);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        uVar5 = (uint)*pbVar4 << 8 | (uint)bVar2 << 16;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        uVar1 = uVar5 + *pbVar4;
        uVar5 = (*pbVar4 - 16777216) + uVar5;
        if (uVar1 < 8388608) {
            uVar5 = uVar1;
        }
        return uVar5;
    }

    // 0x100130450, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g3s_alt1()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3s_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        uint uVar1;
        byte bVar2;
        long lVar3;
        byte* pbVar4;
        uint uVar5;

        lVar3 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar3 + 3;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar3 + 2);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        uVar5 = (uint)*pbVar4 << 8 | (uint)bVar2 << 16;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 3);
        uVar1 = uVar5 + *pbVar4;
        uVar5 = (*pbVar4 - 16777216) + uVar5;
        if (uVar1 < 8388608) {
            uVar5 = uVar1;
        }
        return uVar5;
    }

} // namespace jag
