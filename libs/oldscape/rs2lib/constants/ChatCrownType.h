// libs/oldscape/rs2lib/constants/ChatCrownType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    class ChatCrownType {
    public:
        FromId(int);
        ChatCrownType(int, int, bool, bool, bool);
        static ChatCrownType const* /* 8 bytes */ NONE; // = &enumArray
        static ChatCrownType const*                     /* 8 bytes */
            PLAYER_MOD;                                 // = &enumArray[1] /* ChatCrownType(1, 0, true, true, true) */
        static ChatCrownType const*                     /* 8 bytes */
            STAFF_MOD;                                  // = &enumArray[2] /* ChatCrownType(2, 1, true, true, false) */
        static ChatCrownType const*                     /* 8 bytes */
            IRONMAN;                                    // = &enumArray[3] /* ChatCrownType(3, 2, false, false, true) */
        static ChatCrownType const*                     /* 8 bytes */
            ULTIMATE;                                   // = &enumArray[4] /* ChatCrownType(4, 3, false, false, true) */
        static ChatCrownType const*                     /* 8 bytes */
            HARDCORE_IRONMAN;               // = &enumArray[5] /* ChatCrownType(5, 10, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SEASONAL;                       // = &enumArray[6] /* ChatCrownType(6, 22, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            GROUP_IRONMAN;                  // = &enumArray[7] /* ChatCrownType(7, 41, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            GROUP_HARDCORE_IRONMAN;         // = &enumArray[8] /* ChatCrownType(8, 42, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            GROUP_IRONMAN_UNRANKED;         // = &enumArray[9] /* ChatCrownType(9, 43, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SKILLER_NORMAL;                 // = &enumArray[10] /* ChatCrownType(10, 44, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SKILLER_IRONMAN;                // = &enumArray[11] /* ChatCrownType(11, 45, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SKILLER_ULTIMATE;               // = &enumArray[12] /* ChatCrownType(12, 46, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SKILLER_HARDCORE_IRONMAN;       // = &enumArray[13] /* ChatCrownType(13, 47, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SKILLER_GROUP_IRONMAN;          // = &enumArray[14] /* ChatCrownType(14, 48, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SKILLER_GROUP_HARDCORE_IRONMAN; // = &enumArray[15] /* ChatCrownType(15, 49, false, false, true) */
        static ChatCrownType const*         /* 8 bytes */
            SPEEDRUN;                       // = &enumArray[16] /* ChatCrownType(16, 52, false, false, true) */
        static ChatCrownType /* 208 bytes */ enumArray[17]; // initialised in its definition

        // data members, from how the methods use this: 16 bytes
        int field_0;  // offset 0
        bool field_4; // offset 4
        bool field_5; // offset 5
        bool field_6; // offset 6
        char _unknown_7[1];
        int field_8; // offset 8
        char _unknown_12[4];
    };

    // 0x100f37a78, 8 bytes, __data
    ChatCrownType const* ChatCrownType::NONE = &enumArray;

    // 0x100f37a80, 8 bytes, __data
    ChatCrownType const* ChatCrownType::PLAYER_MOD = &enumArray[1] /* ChatCrownType(1, 0, true, true, true) */;

    // 0x100f37a88, 8 bytes, __data
    ChatCrownType const* ChatCrownType::STAFF_MOD = &enumArray[2] /* ChatCrownType(2, 1, true, true, false) */;

    // 0x100f37a90, 8 bytes, __data
    ChatCrownType const* ChatCrownType::IRONMAN = &enumArray[3] /* ChatCrownType(3, 2, false, false, true) */;

    // 0x100f37a98, 8 bytes, __data
    ChatCrownType const* ChatCrownType::ULTIMATE = &enumArray[4] /* ChatCrownType(4, 3, false, false, true) */;

    // 0x100f37aa0, 8 bytes, __data
    ChatCrownType const* ChatCrownType::HARDCORE_IRONMAN = &enumArray[5] /* ChatCrownType(5, 10, false, false, true) */;

    // 0x100f37aa8, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SEASONAL = &enumArray[6] /* ChatCrownType(6, 22, false, false, true) */;

    // 0x100f37ab0, 8 bytes, __data
    ChatCrownType const* ChatCrownType::GROUP_IRONMAN = &enumArray[7] /* ChatCrownType(7, 41, false, false, true) */;

    // 0x100f37ab8, 8 bytes, __data
    ChatCrownType const* ChatCrownType::GROUP_HARDCORE_IRONMAN =
        &enumArray[8] /* ChatCrownType(8, 42, false, false, true) */;

    // 0x100f37ac0, 8 bytes, __data
    ChatCrownType const* ChatCrownType::GROUP_IRONMAN_UNRANKED =
        &enumArray[9] /* ChatCrownType(9, 43, false, false, true) */;

    // 0x100f37ac8, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SKILLER_NORMAL = &enumArray[10] /* ChatCrownType(10, 44, false, false, true) */;

    // 0x100f37ad0, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SKILLER_IRONMAN =
        &enumArray[11] /* ChatCrownType(11, 45, false, false, true) */;

    // 0x100f37ad8, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SKILLER_ULTIMATE =
        &enumArray[12] /* ChatCrownType(12, 46, false, false, true) */;

    // 0x100f37ae0, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SKILLER_HARDCORE_IRONMAN =
        &enumArray[13] /* ChatCrownType(13, 47, false, false, true) */;

    // 0x100f37ae8, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SKILLER_GROUP_IRONMAN =
        &enumArray[14] /* ChatCrownType(14, 48, false, false, true) */;

    // 0x100f37af0, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SKILLER_GROUP_HARDCORE_IRONMAN =
        &enumArray[15] /* ChatCrownType(15, 49, false, false, true) */;

    // 0x100f37af8, 8 bytes, __data
    ChatCrownType const* ChatCrownType::SPEEDRUN = &enumArray[16] /* ChatCrownType(16, 52, false, false, true) */;

    // 0x1016af940, 208 bytes, __common; set at startup by ___cxx_global_var_init
    ChatCrownType ChatCrownType::enumArray[17] = {
        /* [0] */ ChatCrownType(0, -1, true, false, true),
        /* [1] */ ChatCrownType(1, 0, true, true, true),
        /* [2] */ ChatCrownType(2, 1, true, true, false),
        /* [3] */ ChatCrownType(3, 2, false, false, true),
        /* [4] */ ChatCrownType(4, 3, false, false, true),
        /* [5] */ ChatCrownType(5, 10, false, false, true),
        /* [6] */ ChatCrownType(6, 22, false, false, true),
        /* [7] */ ChatCrownType(7, 41, false, false, true),
        /* [8] */ ChatCrownType(8, 42, false, false, true),
        /* [9] */ ChatCrownType(9, 43, false, false, true),
        /* [10] */ ChatCrownType(10, 44, false, false, true),
        /* [11] */ ChatCrownType(11, 45, false, false, true),
        /* [12] */ ChatCrownType(12, 46, false, false, true),
        /* [13] */ ChatCrownType(13, 47, false, false, true),
        /* [14] */ ChatCrownType(14, 48, false, false, true),
        /* [15] */ ChatCrownType(15, 49, false, false, true),
        /* [16] */ ChatCrownType(16, 52, false, false, true),
    };

    // 0x10018e610, 80 bytes, inline, placed by class name and debug map
    // ChatCrownType::FromId(int)
    undefined* ChatCrownType::FromId(int param_1) {
        if (16 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < ChatCrownType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "ChatCrownType.h",
                      46, "ChatCrownType: Invalid ChatCrownType ID requested");
        }
        return PTR_enumArray_100ee6b98 + (long)param_1 * 12;
    }

    // 0x100264310, 16 bytes, complete-object constructor, inline, placed by class name
    // ChatCrownType::ChatCrownType(int, int, bool, bool, bool): jumps straight to the base-object constructor

    // 0x100269f10, 32 bytes, base-object constructor, inline, placed by class name
    // ChatCrownType::ChatCrownType(int, int, bool, bool, bool)
    void ChatCrownType::ChatCrownType(int param_1, int param_2, bool param_3, bool param_4, bool param_5) {
        field_0 = param_2;
        field_4 = param_3;
        field_5 = param_4;
        field_6 = param_5;
        field_8 = param_1;
    }

    // 0x100283bc0, 576 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&ChatCrownType::enumArray) ChatCrownType(0, -1, true, false, true);
        new (&DAT_1016af94c) ChatCrownType(1, 0, true, true, true);
        new (&DAT_1016af958) ChatCrownType(2, 1, true, true, false);
        new (&DAT_1016af964) ChatCrownType(3, 2, false, false, true);
        new (&DAT_1016af970) ChatCrownType(4, 3, false, false, true);
        new (&DAT_1016af97c) ChatCrownType(5, 10, false, false, true);
        new (&DAT_1016af988) ChatCrownType(6, 22, false, false, true);
        new (&DAT_1016af994) ChatCrownType(7, 41, false, false, true);
        new (&DAT_1016af9a0) ChatCrownType(8, 42, false, false, true);
        new (&DAT_1016af9ac) ChatCrownType(9, 43, false, false, true);
        new (&DAT_1016af9b8) ChatCrownType(10, 44, false, false, true);
        new (&DAT_1016af9c4) ChatCrownType(11, 45, false, false, true);
        new (&DAT_1016af9d0) ChatCrownType(12, 46, false, false, true);
        new (&DAT_1016af9dc) ChatCrownType(13, 47, false, false, true);
        new (&DAT_1016af9e8) ChatCrownType(14, 48, false, false, true);
        new (&DAT_1016af9f4) ChatCrownType(15, 49, false, false, true);
        new (&DAT_1016afa00) ChatCrownType(16, 52, false, false, true);
    }

} // namespace jag::oldscape::constants

namespace jag {
    // 0x10018e990, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket4::g1()
    undefined1 ShuffledPacket4::g1() {
        undefined1 uVar1;

        uVar1 = g1_alt3();
        return uVar1;
    }

    // 0x10018e9a0, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket4::g1s()
    int ShuffledPacket4::g1s() {
        char cVar1;

        cVar1 = g1s_alt3();
        return (int)cVar1;
    }

    // 0x10018e9b0, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket2::g1s()
    int ShuffledPacket2::g1s() {
        char cVar1;

        cVar1 = g1s_alt1();
        return (int)cVar1;
    }

    // 0x10018e9c0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g1s()
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g1s(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pcVar2 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return (int)*pcVar2;
    }

    // 0x10018e9e0, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket2::g2()
    undefined2 ShuffledPacket2::g2() {
        undefined2 uVar1;

        uVar1 = g2_alt1();
        return uVar1;
    }

    // 0x10018e9f0, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket3::g1s()
    int ShuffledPacket3::g1s() {
        char cVar1;

        cVar1 = g1s_alt2();
        return (int)cVar1;
    }

    // 0x10018ea00, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g4()
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g4(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        gT<unsigned int>(this);
    }

} // namespace jag
