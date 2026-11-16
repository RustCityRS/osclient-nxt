// libs/graphics/runetek7/gui/debug/sections/DebugOverlayDiskCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayDiskCache {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayDiskCache();
        virtual void UpdateOnMainLogic(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint32_t UpdateImpl(unsigned long long arg1);
        DebugOverlayDiskCache(DebugOverlay& debugOverlay, bool arg2);

    private:
        uint8_t _unknown_8[104];
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t _unknown_121[7];
        TimedGraph field_128;
        uint8_t _unknown_98600[56];
        LayeredAnimationStateMachineLayerDescriptor* field_98656;
        unsigned int field_98664;
        unsigned int field_98668;
        float field_98672;
        uint8_t _unknown_98676[4];
    };

    // 0x1008cfe90: DebugOverlayDiskCache::~DebugOverlayDiskCache() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1008fc4f0
    DebugOverlayDiskCache::DebugOverlayDiskCache(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 10, arg2, 0, 1.0) {
        auto this_00 = debugOverlay.end();
        field_98656 = (LayeredAnimationStateMachineLayerDescriptor*)this_00->capacity();
        field_98664 = 0;
    }

    // 0x1008fc560
    void DebugOverlayDiskCache::DrawImpl(int arg1, int arg2) {
        uint32_t extraout_var;
        FontAlign FVar4;
        uint32_t extraout_var_00;

        auto this_00 = field_98656->GetTransitionOutTime();
        if (this_00 == nullptr) {
            local_260 = eastl::fixed_string<char, 512>("Disk Cache Not Available");
            DrawTextString((int)&local_260, arg1, arg2, -16776961, 255);
        }
        Callstack local_2b0;
        fixed_string<char, 512> local_260;
        new (&local_2b0[0].field_8) eastl::fixed_string<char, 32>();
        unsigned long long arg1_00 = this_00->GetUsageBytes();
        unsigned long long arg1_01 = this_00->GetQuotaBytes();
        float fVar6 = Bytes2Megabytes<unsigned long long>(arg1_00);
        float fVar7 = Bytes2Megabytes<unsigned long long>(arg1_01);
        auto pcVar5 = DataSizeString<eastl::fixed_string<char, 32>>(&local_2b0[0].field_8, arg1_00);
        local_260.sprintf("Disk Cache : %s", pcVar5);
        local_2b0 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((int)fVar6, 0, (int)fVar7);
        int iVar2 = local_2b0.GetX();
        DrawTextString((int)&local_260, arg1, arg2, iVar2, 255);
        uint8_t uVar1 = CalculateLineAlpha((int)this);
        FontAlign FVar3 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
        if (FVar3 != 0) {
            local_2b0 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(field_98668, 1000, 0);
            local_260.sprintf("Queue : %u", (unsigned long)field_98668);
            iVar2 = field_112;
            FVar4 = local_2b0.GetX();
            DrawTextString((int)&local_260, arg1, arg2 - iVar2, FVar3 | FVar4 & 4294967040, FVar3);
            uVar1 = CalculateLineAlpha((int)this);
            FVar3 = (((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar1);
            if (FVar3 != 0) {
                local_2b0 =
                    math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((int)field_98672, 1000, 0);
                local_260.sprintf("Activity/Tick : %.3f", (double)field_98672);
                iVar2 = field_112;
                FVar4 = local_2b0.GetX();
                DrawTextString((int)&local_260, arg1, arg2 + iVar2 * -2, FVar3 | FVar4 & 4294967040, FVar3);
            }
        }
        local_2b0[0].field_8.~fixed_string();
    }

    // 0x1008fc910
    void DebugOverlayDiskCache::UpdateOnMainLogic(unsigned long long arg1) {
        int arg2;

        auto this_00 = field_98656->GetTransitionOutTime();
        unsigned int uVar1 = field_98664 + 1;
        field_98664 = uVar1;
        if ((9 < uVar1) && (this_00 != nullptr)) {
            field_98664 = 0;
            arg2 = this_00->GetActivity();
            field_128->RecordValue(arg1, arg2);
            field_128->SetMaximum(1000);
            field_98672 = (float)arg2 * 0.1;
        }
    }

    // 0x1008fc9c0
    uint32_t DebugOverlayDiskCache::UpdateImpl(unsigned long long arg1) {
        auto this_00 = field_98656->GetTransitionOutTime();
        if (this_00 != nullptr) {
            field_98668 = this_00->GetQueueSize();
        }
        return 1;
    }

    // 0x1008fca20
    void DebugOverlayDiskCache::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Disk Cache", field_120);
    }

} // namespace jag
