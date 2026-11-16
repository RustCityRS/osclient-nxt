// libs/graphics/runetek7/gui/debug/sections/DebugOverlayLPS.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayLPS {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayLPS();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint8_t UpdateImpl(unsigned long long arg1);
        DebugOverlayLPS(DebugOverlay& debugOverlay, bool arg2);

    private:
        uint8_t _unknown_8[104];
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t _unknown_121[98535];
        unsigned long field_98656;
        uint64_t field_98664;
        float field_98672;
        uint8_t _unknown_98676[4];
    };

    // 0x1008a6390
    DebugOverlayLPS::DebugOverlayLPS(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 2, arg2, 0, 1.0), field_98656(0), field_98664(250000000),
          field_98672(0.0) {
        field_128.SetHighIsGood();
    }

    // 0x1008a6400
    void DebugOverlayLPS::DrawImpl(int arg1, int arg2) {
        uint32_t extraout_var;
        FontAlign FVar8;
        uint32_t extraout_var_00;
        float fVar9;
        uint8_t local_270[8];
        Callstack local_268;

        local_270._4_4_ = arg1;
        auto this_01 = GraphicsApp::Instance();
        auto this_02 = this_01->GetFPSCounter();
        unsigned int uVar4 = this_02->GetLastFrameDurationNS();
        unsigned long* puVar1 = &field_98656;
        unsigned long uVar2 = *puVar1;
        *puVar1 = *puVar1 - (unsigned long)uVar4;
        if (*puVar1 == 0 || SBORROW8(uVar2, (unsigned long)uVar4) != (long)*puVar1 < 0) {
            fVar9 = (float)this_02->GetAlpha();
            field_98672 = fVar9;
            field_98656 = field_98664;
        }
        new ((local_270 + 8)) callstack::Callstack();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512>();
        uint8_t* this_00 = &field_128;
        uVar4 = this_00->GetMean();
        new (local_270) callstack::Callstack();
        int iVar5 = this_00->GetMean();
        *local_270 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, 0, 50);
        fVar9 = field_98672;
        unsigned int uVar6 = local_270->GetX();
        local_268[0].field_8.sprintf("LPS : %.1f <col=%X>[Mean : %d]", (double)fVar9, (unsigned long)uVar6,
                                     (unsigned long)uVar4);
        *((local_270 + 8)) =
            math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((int)(long)field_98672, 0, 50);
        iVar5 = ((local_270 + 8))->GetX();
        DrawTextString((int)&local_268 + 8, local_270._4_4_, arg2, iVar5, 255);
        uint8_t uVar3 = CalculateLineAlpha((int)this);
        FontAlign FVar7 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar3);
        if (FVar7 != 0) {
            iVar5 = this_00->GetMin();
            if (48 < iVar5) {
                iVar5 = this_00->GetMax();
                if (iVar5 < 52)
                    goto LAB_1008a66bd;
            }
            iVar5 = this_00->GetMax();
            *((local_270 + 8)) = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, 0, 50);
            FVar8 = ((local_270 + 8))->GetX();
            uVar4 = this_00->GetMax();
            local_268[0].field_8.sprintf("Peak LPS: %d", (unsigned long)uVar4);
            DrawTextString((int)&local_268 + 8, local_270._4_4_, arg2 - field_112, FVar8 & 4294967040 | FVar7, FVar7);
            uVar3 = CalculateLineAlpha((int)this);
            FVar7 = (((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar3);
            if (FVar7 != 0) {
                iVar5 = this_00->GetMin();
                *((local_270 + 8)) =
                    math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, 0, 50);
                FVar8 = ((local_270 + 8))->GetX();
                uVar4 = this_00->GetMin();
                local_268[0].field_8.sprintf("Lowest LPS: %d", (unsigned long)uVar4);
                DrawTextString((int)&local_268 + 8, local_270._4_4_, arg2 + field_112 * -2, FVar8 & 4294967040 | FVar7,
                               FVar7);
            }
        }
    LAB_1008a66bd:
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a6710
    uint8_t DebugOverlayLPS::UpdateImpl(unsigned long long arg1) {
        auto this_00 = GraphicsApp::Instance();
        auto this_01 = this_00->GetFPSCounter();
        float fVar1 = (float)this_01->GetAlpha();
        field_128.RecordValue(arg1, (int)(long)fVar1);
        field_128.SetMaximum(60);
        return 1;
    }

    // 0x1008a6760
    void DebugOverlayLPS::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Logic-Loops-Per-Second", field_120);
    }

    // 0x1008cc420: DebugOverlayMainFPS::~DebugOverlayMainFPS() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1008cc420: DebugOverlayRenderFPS::~DebugOverlayRenderFPS() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1008cfe90
    DebugOverlayLPS::~DebugOverlayLPS() {}

    // 0x1008cfe90: DebugOverlayParticlesRender::~DebugOverlayParticlesRender() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1008cfe90: DebugOverlayParticlesSimulation::~DebugOverlayParticlesSimulation() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

} // namespace jag
