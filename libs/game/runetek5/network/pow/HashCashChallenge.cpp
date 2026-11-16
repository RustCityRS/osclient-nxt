// libs/game/runetek5/network/pow/HashCashChallenge.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class HashCashChallenge {
    public:
        ~HashCashChallenge();
        GetBits() const;
        HashCashChallenge(PacketT<Array<unsigned char, eastl::allocator>>&);
        GetFullyQualifiedHeader() const;
        void Out(PacketT<Array<unsigned char, eastl::allocator>>&) const;

        // data members, from how the methods use this: 16 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        char _unknown_8[8];
    };

    // 0x100059090: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    HashCashChallenge::~HashCashChallenge();

    // 0x1000590a0: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    HashCashChallenge::~HashCashChallenge();

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    HashCashChallenge::GetBits() const;

    // 0x10049fb40, 144 bytes, base-object constructor, placed by class name and debug map
    // HashCashChallenge::HashCashChallenge(PacketT<Array<unsigned char, eastl::allocator> >&)
    void HashCashChallenge::HashCashChallenge(PacketT* param_1) {
        byte bVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_40[32];

        new (&field_8) eastl::string();
        bVar1 = param_1->g1();
        field_0 = (uint)bVar1;
        bVar1 = param_1->g1();
        field_4 = (uint)bVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_40, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x10049fbd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HashCashChallenge::HashCashChallenge(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10049fbe0, 112 bytes, placed by class name and debug map
    // HashCashChallenge::GetFullyQualifiedHeader() const
    HashCashChallenge* HashCashChallenge::GetFullyQualifiedHeader() {
        uint uVar1;
        uint uVar2;
        undefined8 uVar3;
        uint* in_RSI;

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        uVar1 = *in_RSI;
        uVar2 = in_RSI[1];
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, BucketAllocatorEASTL>::sprintf((char*)this, "%x%x%s", (ulong)uVar1, (ulong)uVar2,
                                                                 uVar3);
        return this;
    }

    // 0x10049fd20, 64 bytes, placed by class name and debug map
    // HashCashChallenge::Out(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void HashCashChallenge::Out(PacketT* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_4);
        PacketT<Array<unsigned char, eastl::allocator>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, eastl::allocator>>*)param_1,
                                                             (basic_string*)&field_8, false);
    }

} // namespace jag::game
