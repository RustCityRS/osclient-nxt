// libs/oldscape/rs2lib/constants/ChatCrownType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    class ChatCrownType {
    public:
        void FromId(int arg1);
        ChatCrownType(int arg1, int arg2, bool arg3, bool arg4, bool arg5);
        static ChatCrownType const* NONE;             // = &enumArray
        static ChatCrownType const* PLAYER_MOD;       // = &enumArray[1] /* ChatCrownType(1, 0, true, true, true) */
        static ChatCrownType const* STAFF_MOD;        // = &enumArray[2] /* ChatCrownType(2, 1, true, true, false) */
        static ChatCrownType const* IRONMAN;          // = &enumArray[3] /* ChatCrownType(3, 2, false, false, true) */
        static ChatCrownType const* ULTIMATE;         // = &enumArray[4] /* ChatCrownType(4, 3, false, false, true) */
        static ChatCrownType const* HARDCORE_IRONMAN; // = &enumArray[5] /* ChatCrownType(5, 10, false, false, true) */
        static ChatCrownType const* SEASONAL;         // = &enumArray[6] /* ChatCrownType(6, 22, false, false, true) */
        static ChatCrownType const* GROUP_IRONMAN;    // = &enumArray[7] /* ChatCrownType(7, 41, false, false, true) */
        static ChatCrownType const*
            GROUP_HARDCORE_IRONMAN; // = &enumArray[8] /* ChatCrownType(8, 42, false, false, true) */
        static ChatCrownType const*
            GROUP_IRONMAN_UNRANKED;                  // = &enumArray[9] /* ChatCrownType(9, 43, false, false, true) */
        static ChatCrownType const* SKILLER_NORMAL;  // = &enumArray[10] /* ChatCrownType(10, 44, false, false, true) */
        static ChatCrownType const* SKILLER_IRONMAN; // = &enumArray[11] /* ChatCrownType(11, 45, false, false, true) */
        static ChatCrownType const*
            SKILLER_ULTIMATE; // = &enumArray[12] /* ChatCrownType(12, 46, false, false, true) */
        static ChatCrownType const*
            SKILLER_HARDCORE_IRONMAN; // = &enumArray[13] /* ChatCrownType(13, 47, false, false, true) */
        static ChatCrownType const*
            SKILLER_GROUP_IRONMAN; // = &enumArray[14] /* ChatCrownType(14, 48, false, false, true) */
        static ChatCrownType const*
            SKILLER_GROUP_HARDCORE_IRONMAN;   // = &enumArray[15] /* ChatCrownType(15, 49, false, false, true) */
        static ChatCrownType const* SPEEDRUN; // = &enumArray[16] /* ChatCrownType(16, 52, false, false, true) */
        static ChatCrownType enumArray[17];   // initialised in its definition

    private:
        int field_0;
        bool field_4;
        bool field_5;
        bool field_6;
        uint8_t _unknown_7[1];
        int field_8;
        uint8_t _unknown_12[4];
    };

    // 0x100f37a78
    ChatCrownType const* ChatCrownType::NONE = &enumArray;

    // 0x100f37a80
    ChatCrownType const* ChatCrownType::PLAYER_MOD = &enumArray[1] /* ChatCrownType(1, 0, true, true, true) */;

    // 0x100f37a88
    ChatCrownType const* ChatCrownType::STAFF_MOD = &enumArray[2] /* ChatCrownType(2, 1, true, true, false) */;

    // 0x100f37a90
    ChatCrownType const* ChatCrownType::IRONMAN = &enumArray[3] /* ChatCrownType(3, 2, false, false, true) */;

    // 0x100f37a98
    ChatCrownType const* ChatCrownType::ULTIMATE = &enumArray[4] /* ChatCrownType(4, 3, false, false, true) */;

    // 0x100f37aa0
    ChatCrownType const* ChatCrownType::HARDCORE_IRONMAN = &enumArray[5] /* ChatCrownType(5, 10, false, false, true) */;

    // 0x100f37aa8
    ChatCrownType const* ChatCrownType::SEASONAL = &enumArray[6] /* ChatCrownType(6, 22, false, false, true) */;

    // 0x100f37ab0
    ChatCrownType const* ChatCrownType::GROUP_IRONMAN = &enumArray[7] /* ChatCrownType(7, 41, false, false, true) */;

    // 0x100f37ab8
    ChatCrownType const* ChatCrownType::GROUP_HARDCORE_IRONMAN =
        &enumArray[8] /* ChatCrownType(8, 42, false, false, true) */;

    // 0x100f37ac0
    ChatCrownType const* ChatCrownType::GROUP_IRONMAN_UNRANKED =
        &enumArray[9] /* ChatCrownType(9, 43, false, false, true) */;

    // 0x100f37ac8
    ChatCrownType const* ChatCrownType::SKILLER_NORMAL = &enumArray[10] /* ChatCrownType(10, 44, false, false, true) */;

    // 0x100f37ad0
    ChatCrownType const* ChatCrownType::SKILLER_IRONMAN =
        &enumArray[11] /* ChatCrownType(11, 45, false, false, true) */;

    // 0x100f37ad8
    ChatCrownType const* ChatCrownType::SKILLER_ULTIMATE =
        &enumArray[12] /* ChatCrownType(12, 46, false, false, true) */;

    // 0x100f37ae0
    ChatCrownType const* ChatCrownType::SKILLER_HARDCORE_IRONMAN =
        &enumArray[13] /* ChatCrownType(13, 47, false, false, true) */;

    // 0x100f37ae8
    ChatCrownType const* ChatCrownType::SKILLER_GROUP_IRONMAN =
        &enumArray[14] /* ChatCrownType(14, 48, false, false, true) */;

    // 0x100f37af0
    ChatCrownType const* ChatCrownType::SKILLER_GROUP_HARDCORE_IRONMAN =
        &enumArray[15] /* ChatCrownType(15, 49, false, false, true) */;

    // 0x100f37af8
    ChatCrownType const* ChatCrownType::SPEEDRUN = &enumArray[16] /* ChatCrownType(16, 52, false, false, true) */;

    // 0x1016af940, set at startup by ___cxx_global_var_init
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

    // 0x10018e610
    void ChatCrownType::FromId(int arg1) {
        if (16 < (unsigned int)arg1) {
            LogAssert("id >= 0 && id < ChatCrownType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "ChatCrownType.h",
                      46, "ChatCrownType: Invalid ChatCrownType ID requested");
        }
        return PTR_enumArray_100ee6b98 + (long)arg1 * 12;
    }

    // 0x100269f10
    ChatCrownType::ChatCrownType(int arg1, int arg2, bool arg3, bool arg4, bool arg5)
        : field_0(arg2), field_4(arg3), field_5(arg4), field_6(arg5), field_8(arg1) {}

} // namespace jag::oldscape::constants

namespace jag {
    // 0x10018e990
    uint8_t ShuffledPacket4::g1() {
        return g1_alt3();
    }

    // 0x10018e9a0
    int ShuffledPacket4::g1s() {
        bool cVar1 = g1s_alt3();
        return (int)cVar1;
    }

    // 0x10018e9b0
    int ShuffledPacket2::g1s() {
        bool cVar1 = g1s_alt1();
        return (int)cVar1;
    }

    // 0x10018e9c0
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g1s() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return (int)*pcVar1;
    }

    // 0x10018e9e0
    uint16_t ShuffledPacket2::g2() {
        return g2_alt1();
    }

    // 0x10018e9f0
    int ShuffledPacket3::g1s() {
        bool cVar1 = g1s_alt2();
        return (int)cVar1;
    }

    // 0x10018ea00
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g4() {
        gT<unsigned int>(this);
    }

} // namespace jag
