// libs/graphics/runetek7/gui/debug/sections/DebugOverlayMemoryCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayMemoryCache {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayMemoryCache();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint8_t UpdateImpl(unsigned long long arg1);
        DebugOverlayMemoryCache(DebugOverlay& debugOverlay, bool arg2);

    private:
        uint8_t _unknown_8[104];
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t _unknown_121[98535];
        Js5ResourceProvider* field_98656;
        float field_98664;
        unsigned int field_98668;
        uint8_t _unknown_98672[4];
    };

    // 0x1008a6a50
    DebugOverlayMemoryCache::DebugOverlayMemoryCache(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 9, arg2, 0, 1.0) {
        auto this_00 = debugOverlay.end();
        field_98656 = (Js5ResourceProvider*)this_00->capacity();
        field_98664 = 1.0;
        field_98668 = 1;
    }

    // 0x1008a6ac0
    void DebugOverlayMemoryCache::DrawImpl(int arg1, int arg2) {
        uint32_t extraout_var;
        FontAlign FVar4;

        unsigned int uVar2 = ((CoordMapSquare*)field_98656->GetMemoryCache())->GetX();
        field_98668 = uVar2 >> 20;
        uVar2 = ((Js5MemoryCache*)field_98656->GetMemoryCache())->GetCacheUsageBytes();
        field_98664 = (float)uVar2 * 9.536743e-07;
        Callstack local_260;
        new (&local_260[0].field_8) eastl::fixed_string<char, 512>();
        local_260 =
            math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((int)field_98664, field_98668, 0);
        local_260[0].field_8.sprintf("Memory Cache: %.3fMb / %uMb", (double)field_98664, (unsigned long)field_98668);
        int iVar3 = local_260.GetX();
        DrawTextString((int)&local_260 + 8, arg1, arg2, iVar3, 255);
        uint8_t uVar1 = CalculateLineAlpha((int)this);
        FontAlign fontAlign = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
        if (fontAlign != 0) {
            iVar3 = field_128.GetMax();
            local_260[0].field_8.sprintf("Peak Usage : %.3fMb", (double)iVar3 * 9.5367431640625e-07);
            iVar3 = field_112;
            FVar4 = local_260.GetX();
            DrawTextString((int)&local_260 + 8, arg1, arg2 - iVar3, fontAlign | FVar4 & 4294967040, fontAlign);
        }
        local_260[0].field_8.~fixed_string();
    }

    // 0x1008a6cb0
    uint8_t DebugOverlayMemoryCache::UpdateImpl(unsigned long long arg1) {
        field_128.RecordValue(arg1, (int)field_98664);
        field_128.SetMaximum(field_98668);
        return 1;
    }

    // 0x1008a6cf0
    void DebugOverlayMemoryCache::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Memory Cache Usage", field_120);
    }

    // 0x1008cfe90: DebugOverlayMemoryCache::~DebugOverlayMemoryCache() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

} // namespace jag
