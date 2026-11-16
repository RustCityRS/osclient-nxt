// projects/osclient/camera/tweens/CinemaCameraRotationTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class CinemaCameraRotationTween {
    public:
        // virtual methods in vtable order
        virtual ~CinemaCameraRotationTween();
        int GetValue() const;
        CinemaCameraRotationTween(int arg1, int arg2, int arg3, CinemaCameraTween::Easing easing);

    private:
        int field_8;
        int field_12;
        uint64_t field_16;
        Easing field_24;
        int field_28;
        int field_32;
        uint8_t _unknown_36[4];
    };

    // 0x100156b80
    CinemaCameraRotationTween::~CinemaCameraRotationTween() {}

} // namespace jag::oldscape

namespace jag::oldscape::highlight {
    // 0x100124ca0
    unsigned long UniqueNPCKey(int arg1, int arg2) {
        return (long)arg1 | (unsigned long)(unsigned int)arg2 << 32;
    }

} // namespace jag::oldscape::highlight

namespace jag {
    // 0x100156b80: DiscordRichPresence::~DiscordRichPresence() has the same machine code as oldscape::CinemaCameraRotationTween::~CinemaCameraRotationTween()

} // namespace jag
