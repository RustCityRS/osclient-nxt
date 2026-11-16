// libs/game/runetek5/clientoptions/options/ClientOptions_Volume.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class Volume {
    public:
        // virtual methods in vtable order
        virtual ~Volume();
        virtual unsigned int GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, int arg3);
        Volume(graphics::RT7Core& rt7Core, Settings& settings, const char* str, SoundVolumeClass soundVolumeClass);

    private:
        Settings* field_8;
        char* field_16;
        unsigned char field_24;
        uint8_t _unknown_25[3];
        Range<int>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[160];
        SoundVolumeClass field_200;
        uint8_t _unknown_204[4];
    };

    // 0x1005f9ec0
    unsigned int Volume::GetDefault() {
        return (unsigned int)(field_200 == 0) << 7 | 127;
    }

    // 0x1005fa6d0
    Volume::~Volume() {
        ~Option(this);
    }

} // namespace jag::game::option
