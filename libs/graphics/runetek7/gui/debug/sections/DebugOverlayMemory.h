// libs/graphics/runetek7/gui/debug/sections/DebugOverlayMemory.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayMemory {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayMemory();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint32_t UpdateImpl(unsigned long long arg1);
        DebugOverlayMemory(DebugOverlay& debugOverlay, bool arg2);

    private:
        uint8_t _unknown_8[104];
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t _unknown_121[98535];
        unsigned long field_98656;
        unsigned long field_98664;
    };

    // 0x1008a6780
    DebugOverlayMemory::DebugOverlayMemory(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 8, arg2, 0, 1.0), field_98656(0), field_98664(0) {}

    // 0x1008a67d0
    void DebugOverlayMemory::DrawImpl(int arg1, int arg2) {
        uint32_t extraout_var;
        FontAlign FVar3;

        Callstack local_2a0;
        fixed_string<char, 512> local_260;
        new (&local_2a0[0].field_8) eastl::fixed_string<char, 16>();
        local_2a0 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((int)(field_98656 >> 10),
                                                                                           2596864, 0);
        auto pcVar4 = DataSizeString<eastl::fixed_string<char, 16>>(&local_2a0[0].field_8, field_98656);
        local_260.sprintf("Memory: %s", pcVar4);
        int iVar2 = local_2a0.GetX();
        DrawTextString((int)&local_260, arg1, arg2, iVar2, 255);
        uint8_t uVar1 = CalculateLineAlpha((int)this);
        FontAlign fontAlign = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
        if (fontAlign != 0) {
            local_2a0 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((int)(field_98664 >> 10),
                                                                                               2596864, 0);
            pcVar4 = DataSizeString<eastl::fixed_string<char, 16>>(&local_2a0[0].field_8, field_98664);
            local_260.sprintf("Peak Memory: %s", pcVar4);
            iVar2 = field_112;
            FVar3 = local_2a0.GetX();
            DrawTextString((int)&local_260, arg1, arg2 - iVar2, fontAlign | FVar3 & 4294967040, fontAlign);
        }
        local_2a0[0].field_8.~fixed_string();
    }

    // 0x1008a69b0
    uint32_t DebugOverlayMemory::UpdateImpl(unsigned long long arg1) {
        unsigned long local_30;
        unsigned long local_28;

        uint32_t uVar1 = hardware::HardwareInfo::GetProcessMemoryBytes(*((unsigned long long*)Instance()), local_30,
                                                                       (unsigned long long)&local_28);
        if ((char)uVar1 != '\0') {
            field_98656 = local_30;
            field_98664 = local_28;
            field_128.RecordValue(arg1, (int)(local_30 >> 10));
            field_128.SetMaximum(2596864);
        }
        return uVar1;
    }

    // 0x1008a6a30
    void DebugOverlayMemory::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Memory Usage", field_120);
    }

    // 0x1008cfe90: DebugOverlayMemory::~DebugOverlayMemory() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

} // namespace jag
