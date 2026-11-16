// libs/oldscape/jagex3/midi2/envelopeset.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class EnvelopeSet {
    public:
        EnvelopeSet();
        EnvelopeSet(const EnvelopeSet& envelopeSet);
        auto Blank();
        ~EnvelopeSet();

    private:
        uint8_t _unknown_0[48];
        uint32_t field_48;
        uint32_t field_52;
        uint32_t field_56;
        uint32_t field_60;
        uint32_t field_64;
        uint32_t field_68;
        uint32_t field_72;
        uint8_t _unknown_76[4];
    };

    // 0x1002c9950
    EnvelopeSet::EnvelopeSet()
        : Array<signed char>(), field_60(0), field_64(0), field_68(0), field_72(0), field_48(0), field_52(0),
          field_56(0), field_60(0) {}

    // 0x1002c99a0
    EnvelopeSet::EnvelopeSet(const EnvelopeSet& envelopeSet)
        : Array<signed char>(envelopeSet), field_24(&envelopeSet.field_24), field_60(0), field_64(0), field_68(0),
          field_72(0), field_48(0), field_52(0), field_56(0), field_60(0), field_48(envelopeSet.field_48),
          field_52(envelopeSet.field_52), field_56(envelopeSet.field_56), field_60(envelopeSet.field_60),
          field_64(envelopeSet.field_64), field_68(envelopeSet.field_68), field_72(envelopeSet.field_72) {}

    // 0x1002c9a30
    auto EnvelopeSet::Blank() {
        auto result = std::make_unique<EnvelopeSet>();
        long lVar1 = (result).operator->();
        *(uint32_t*)(lVar1 + 68) = 24;
        return result;
    }

    // 0x1002e3da0
    EnvelopeSet::~EnvelopeSet() {
        field_24.~Array();
    }

} // namespace jag::oldscape::midi2
