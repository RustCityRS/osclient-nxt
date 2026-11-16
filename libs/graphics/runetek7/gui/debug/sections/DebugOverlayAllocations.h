// libs/graphics/runetek7/gui/debug/sections/DebugOverlayAllocations.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayAllocations {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayAllocations();
        virtual void UpdateOnMainLogic(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint8_t UpdateImpl(unsigned long long arg1);
        DebugOverlayAllocations(DebugOverlay& debugOverlay, bool arg2);

    private:
        uint8_t _unknown_8[104];
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t _unknown_121[7];
        TimedGraph field_128;
        uint8_t _unknown_98600[56];
        int field_98656;
        uint8_t _unknown_98660[4];
        int field_98664;
        uint8_t _unknown_98668[4];
        unsigned int field_98672;
        unsigned int field_98676;
        int field_98680;
        uint8_t _unknown_98684[12];
    };

    // 0x1008fc0c0
    DebugOverlayAllocations::DebugOverlayAllocations(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 11, arg2, 0, 1.0) {
        *(uint64_t*)&field_98656 = 0;
        *(uint64_t*)&field_98664 = 0;
        *(uint64_t*)&field_98668 = 0;
        field_98676 = 0;
        field_98680 = 0;
        new (&field_98688) DataRecorder<unsigned long long>(60, 5.0);
    }

    // 0x1008fc180
    void DebugOverlayAllocations::DrawImpl(int arg1, int arg2) {
        uint32_t extraout_var;
        FontAlign FVar4;
        uint32_t extraout_var_00;

        Callstack local_268;
        new (&local_268[0].field_8) eastl::fixed_string<char, 512>();
        unsigned int uVar5 = field_98672;
        uint8_t* this_00 = field_128;
        this_00->GetMean();
        local_268[0].field_8.sprintf("Alloc/tick : %d (%d avg)", (unsigned long)uVar5);
        local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(field_98672, 500, 0);
        int iVar2 = local_268.GetX();
        DrawTextString((int)&local_268 + 8, arg1, arg2, iVar2, 255);
        uint8_t uVar1 = CalculateLineAlpha((int)this);
        FontAlign FVar3 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
        if (FVar3 != 0) {
            local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(field_98676, 500, 0);
            local_268[0].field_8.sprintf("Total : Alloc: %llu, Free: %llu", *(uint64_t*)&field_98656,
                                         *(uint64_t*)&field_98664);
            iVar2 = field_112;
            FVar4 = local_268.GetX();
            DrawTextString((int)&local_268 + 8, arg1, arg2 - iVar2, FVar3 | FVar4 & 4294967040, FVar3);
            uVar1 = CalculateLineAlpha((int)this);
            FVar3 = (((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar1);
            if (FVar3 != 0) {
                iVar2 = this_00->GetMax();
                local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar2, 500, 0);
                uVar5 = this_00->GetMax();
                local_268[0].field_8.sprintf("Peak : %d/tick", (unsigned long)uVar5);
                iVar2 = field_112;
                FVar4 = local_268.GetX();
                DrawTextString((int)&local_268 + 8, arg1, arg2 + iVar2 * -2, FVar3 | FVar4 & 4294967040, FVar3);
            }
        }
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008fc3d0
    void DebugOverlayAllocations::UpdateOnMainLogic(unsigned long long arg1) {
        uint64_t uVar1;
        uint64_t uVar2;

        auto pGVar5 = GraphicsApp::Instance();
        unsigned int uVar3 = pGVar5->GetLogicTick();
        if (field_98680 + 5U <= uVar3) {
            pGVar5 = (GraphicsApp*)GraphicsApp::Instance();
            field_98680 = pGVar5->GetLogicTick();
            uVar1 = HeapAllocatorMonitorProxy::m_allocations;
            uVar3 = (unsigned int)((int)HeapAllocatorMonitorProxy::m_allocations - field_98656) / 5;
            field_98672 = uVar3;
            uVar2 = HeapAllocatorMonitorProxy::m_frees;
            field_98676 = (unsigned int)((int)HeapAllocatorMonitorProxy::m_frees - field_98664) / 5;
            *(uint64_t*)&field_98656 = uVar1;
            *(uint64_t*)&field_98664 = uVar2;
            field_128->RecordValue(arg1, uVar3);
            field_128->SetMaximum(500);
        }
    }

    // 0x1008fc4c0
    uint8_t DebugOverlayAllocations::UpdateImpl(unsigned long long arg1) {
        return 1;
    }

    // 0x1008fc4d0
    void DebugOverlayAllocations::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Allocations", field_120);
    }

    // 0x100904f40
    DebugOverlayAllocations::~DebugOverlayAllocations() {
        field_98688.~DataRecorder();
    }

} // namespace jag
