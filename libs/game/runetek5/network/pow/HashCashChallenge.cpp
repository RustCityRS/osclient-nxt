// libs/game/runetek5/network/pow/HashCashChallenge.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class HashCashChallenge {
    public:
        ~HashCashChallenge();
        unsigned int GetBits() const;
        HashCashChallenge(PacketT<Array<unsigned char>>& arg1);
        auto GetFullyQualifiedHeader() const;
        void Out(PacketT<Array<unsigned char>>& arg1) const;

    private:
        unsigned int field_0;
        unsigned int m_bits;
        uint8_t _unknown_8[8];
    };

    // 0x1000590a0: HashCashChallenge::~HashCashChallenge() has the same machine code as oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

    // 0x100073980: HashCashChallenge::GetBits() const has the same machine code as math::Rect<int>::MinY() const

    // 0x10049fb40
    HashCashChallenge::HashCashChallenge(PacketT<Array<unsigned char>>& arg1) {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_40;

        new (&field_8) eastl::string();
        uint8_t bVar1 = arg1.g1();
        field_0 = (unsigned int)bVar1;
        bVar1 = arg1.g1();
        m_bits = (unsigned int)bVar1;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_40, (uint8_t)arg1);
        field_8 = &local_40;
    }

    // 0x10049fbe0
    auto HashCashChallenge::GetFullyQualifiedHeader() const {
        auto result;
        unsigned int uVar1 = field_0;
        unsigned int uVar2 = m_bits;
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        result.sprintf("%x%x%s", (unsigned long)uVar1, (unsigned long)uVar2, uVar3);
        return result;
    }

    // 0x10049fd20
    void HashCashChallenge::Out(PacketT<Array<unsigned char>>& arg1) const {
        arg1.p1<unsigned long>(field_0);
        arg1.p1<unsigned long>(m_bits);
        arg1.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_8, false);
    }

} // namespace jag::game
