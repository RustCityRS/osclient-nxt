// libs/game/shared/framework/logging/HostPlatformStats.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class HostPlatformStats {
    public:
        HostPlatformStats();
        ~HostPlatformStats();
        void Init(graphics::RT7Core& rt7Core);
        void Init();
        auto Serialise() const;
        int GetSerialisedSize() const;
        void Reset();

    private:
        OperatingSystem field_0[4];
        unsigned int field_4;
        uint32_t field_8;
        uint8_t _unknown_12[196];
        uint32_t field_208;
        uint32_t field_212;
        uint32_t field_216;
        uint64_t field_220;
        uint32_t field_228;
        unsigned int field_232;
        uint8_t _unknown_236[36];
        int field_272;
        int field_276;
        uint8_t _unknown_280[8];
    };

    // 0x100128fb0
    HostPlatformStats::HostPlatformStats() {
        field_0[0] = 0;
        field_0[1] = 0;
        field_0[2] = 0;
        field_0[3] = 0;
        field_4 = 0;
        field_8 = 0;
        new (&field_16) eastl::string();
        new (&field_48) eastl::string();
        new (&field_80) eastl::string();
        new (&field_112) eastl::string();
        new (&field_144) eastl::string();
        new (&field_176) eastl::string();
        field_208 = 1;
        field_212 = 1;
        field_216 = 0;
        new (&field_240) eastl::string();
        field_272 = 0;
        field_276 = 0;
        new (&field_280) eastl::string();
    }

    // 0x10012a1b0
    HostPlatformStats::~HostPlatformStats() {
        field_280.~basic_string();
        field_240.~basic_string();
        field_176.~basic_string();
        field_144.~basic_string();
        field_112.~basic_string();
        field_80.~basic_string();
        field_48.~basic_string();
        field_16.~basic_string();
    }

} // namespace jag::game
