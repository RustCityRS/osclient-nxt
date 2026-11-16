// libs/graphics/runetek7/gui/debug/sections/DebugOverlayRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    class DebugOverlayRenderFPS : public DebugOverlayMainFPS // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayRenderFPS();
        virtual char* GetTitle() const;
        virtual uint64_t GetFPSCounter() const;
        DebugOverlayRenderFPS(DebugOverlay& debugOverlay, bool arg2);
    };

    // 0x1008a8cd0
    DebugOverlayRender::DebugOverlayRender(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 5, arg2, 0, 1.0) {}

    // 0x1008a8d20
    void DebugOverlayRender::DrawImpl(int arg1, int arg2) {
        uint32_t extraout_var;
        FontAlign FVar5;
        uint32_t extraout_var_00;

        Callstack local_268;
        RT7Core* this_03 = field_8;
        this_03->end();
        auto this_00 = this_03->GetRenderContext();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512>();
        auto pMVar6 = this_00->GetStats();
        unsigned int uVar2 = pMVar6->GetDiffuseAlphaMapSize();
        ((LightType*)this_00->GetStats())->GetAmplitude();
        local_268[0].field_8.sprintf("Avg Draw Calls : %u Avg Triangles: %u", (unsigned long)uVar2);
        pMVar6 = (Material*)this_00->GetStats();
        int iVar3 = pMVar6->GetDiffuseAlphaMapSize();
        local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar3, 2000, 0);
        auto arg5 = local_268.GetX();
        DrawTextString((int)&local_268 + 8, arg1, arg2, arg5, 255);
        uint8_t uVar1 = CalculateLineAlpha((int)this);
        FontAlign FVar4 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
        if (FVar4 != 0) {
            iVar3 = field_128.GetMax();
            local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar3, 2000, 0);
            uVar2 = field_128.GetMax();
            local_268[0].field_8.sprintf("Peak draw calls: %i", (unsigned long)uVar2);
            iVar3 = field_112;
            FVar5 = local_268.GetX();
            DrawTextString((int)&local_268 + 8, arg1, arg2 - iVar3, FVar4 | FVar5 & 4294967040, FVar4);
            uVar1 = CalculateLineAlpha((int)this);
            FVar4 = (((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar1);
            if (FVar4 != 0) {
                uVar2 = ((TextRun*)this_00->GetStats())->GetWrapMode();
                local_268[0].field_8.sprintf("Lines: %u", (unsigned long)uVar2);
                DrawTextString((int)&local_268 + 8, arg1, arg2 + field_112 * -2, arg5 & 4294967040 | FVar4, FVar4);
            }
        }
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a8fa0
    uint32_t DebugOverlayRender::UpdateImpl(unsigned long long arg1) {
        RT7Core* this_02 = field_8;
        this_02->end();
        auto this_00 = this_02->GetRenderContext();
        int arg2 = ((Material*)this_00->GetStats())->GetDiffuseAlphaMapSize();
        field_128.RecordValue(arg1, arg2);
        field_128.SetMaximum(2000);
        return 1;
    }

    // 0x1008a8ff0
    void DebugOverlayRender::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Render info", field_120);
    }

    // 0x1008cfe90: DebugOverlayRender::~DebugOverlayRender() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1009117c0
    DebugOverlayRenderFPS::DebugOverlayRenderFPS(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayFPS(debugOverlay, true, arg2) {}

} // namespace jag
