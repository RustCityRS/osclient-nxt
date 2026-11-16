// libs/game/shared/framework/logging/HostPlatformStats.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class HostPlatformStats {
    public:
        HostPlatformStats();
        ~HostPlatformStats();
        void Init(graphics::RT7Core&);
        void Init();
        Serialise() const;
        int GetSerialisedSize() const;
        void Reset();

        // data members, from how the methods use this: 288 bytes
        OperatingSystem field_0[4]; // offset 0
        uint field_4;               // offset 4
        undefined4 field_8;         // offset 8
        char _unknown_12[12];
        ulong field_24; // offset 24
        char _unknown_32[16];
        undefined1 field_48; // offset 48
        char _unknown_49[63];
        undefined1 field_112; // offset 112
        char _unknown_113[95];
        undefined4 field_208; // offset 208
        undefined4 field_212; // offset 212
        undefined4 field_216; // offset 216
        undefined8 field_220; // offset 220
        undefined4 field_228; // offset 228
        undefined4 field_232; // offset 232
        char _unknown_236[36];
        int field_272; // offset 272
        int field_276; // offset 276
        char _unknown_280[8];
    };

    // 0x1000c45b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HostPlatformStats::HostPlatformStats(): jumps straight to the base-object constructor

    // 0x1000c48e0, 16 bytes, complete-object destructor, inline, placed by class name
    // HostPlatformStats::~HostPlatformStats(): jumps straight to the base-object destructor

    // 0x100128fb0, 320 bytes, base-object constructor, inline, placed by class name
    // HostPlatformStats::HostPlatformStats()
    void HostPlatformStats::HostPlatformStats() {
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

    // 0x10012a1b0, 112 bytes, base-object destructor, inline, placed by class name
    // HostPlatformStats::~HostPlatformStats()
    void HostPlatformStats::~HostPlatformStats() {
        (&field_280)->~basic_string();
        (&field_240)->~basic_string();
        (&field_176)->~basic_string();
        (&field_144)->~basic_string();
        (&field_112)->~basic_string();
        (&field_80)->~basic_string();
        (&field_48)->~basic_string();
        (&field_16)->~basic_string();
    }

} // namespace jag::game
