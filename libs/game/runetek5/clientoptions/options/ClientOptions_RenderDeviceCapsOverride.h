// libs/game/runetek5/clientoptions/options/ClientOptions_RenderDeviceCapsOverride.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game::option {
    class RenderDeviceCapsOverride {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceCapsOverride();
        virtual uint64_t GetDefault();
        RenderDeviceCapsOverride(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        Option<unsigned char> field_24;
        uint8_t field_25[2];
        Option<unsigned char> field_27;
        uint8_t _unknown_28[149];
    };

    // 0x100029ea0: RenderDeviceCapsOverride::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1006106e0
    RenderDeviceCapsOverride::RenderDeviceCapsOverride(graphics::RT7Core& rt7Core, Settings& settings,
                                                       const char* str) {
        unsigned short local_2a;

        new (&local_2a) math::Vector2T('\0', 255);
        new (this) Option<unsigned char>(rt7Core, settings, str, (Range<unsigned char>*)(unsigned long)local_2a);
    }

    // 0x100610950: RenderDeviceCapsOverride::~RenderDeviceCapsOverride() has the same machine code as Option<unsigned char>::~Option()

} // namespace jag::game::option
