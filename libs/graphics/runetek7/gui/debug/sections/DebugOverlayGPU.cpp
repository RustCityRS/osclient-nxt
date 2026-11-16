// libs/graphics/runetek7/gui/debug/sections/DebugOverlayGPU.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    class DebugOverlayGPUStats {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGPUStats();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual uint8_t Update(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        DebugOverlayGPUStats(DebugOverlay& debugOverlay, bool arg2);

    private:
        DebugOverlay* field_8;
        uint64_t field_16;
        uint8_t _unknown_24[80];
        uint32_t field_104;
        int field_108;
        int field_112;
        int field_116;
        bool field_120;
        uint8_t field_121;
        uint8_t _unknown_122[2];
        SectionType field_124;
    };

    // 0x1008cfe90: DebugOverlayGPU::~DebugOverlayGPU() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1008fd650
    DebugOverlayGPU::DebugOverlayGPU(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 4, arg2, 0, 1.0) {}

    // 0x1008fd6a0
    void DebugOverlayGPU::DrawImpl(int arg1, int arg2) {
        uint32_t extraout_var;
        uint32_t extraout_var_00;
        FontAlign FVar4;
        unsigned long arg2_01;

        Callstack local_2a0;
        fixed_string<char, 512> local_260;
        auto pRVar5 = &local_260->Instance();
        unsigned long long arg2_00 = pRVar5->GetTotalAllocatedGPUMemory();
        new (&local_2a0[0].field_8) eastl::fixed_string<char, 16>();
        int iVar2 = field_128->GetMax();
        local_2a0 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar2, 512, 0);
        auto pcVar6 = DataSizeString<eastl::fixed_string<char, 16>>(&local_2a0[0].field_8, arg2_00);
        local_260.sprintf("Used GPU: %s", pcVar6);
        iVar2 = local_2a0.GetX();
        DrawTextString((int)&local_260, arg1, arg2, iVar2, 255);
        uint8_t uVar1 = CalculateLineAlpha((int)this);
        FontAlign FVar3 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
        if (FVar3 != 0) {
            pRVar5 = (RenderDevice*)Instance();
            arg2_01 = pRVar5->GetAvailableGPUMemory();
            if (arg2_01 != 0) {
                pcVar6 = DataSizeString<eastl::fixed_string<char, 16>>(&local_2a0[0].field_8, arg2_01);
                local_260.sprintf("Available GPU: %s", pcVar6);
                DrawTextString((int)&local_260, arg1, arg2 - field_112, FVar3 | 2164228096, FVar3);
                uVar1 = CalculateLineAlpha((int)this);
                FVar3 = (((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar1);
                if (FVar3 != 0) {
                    local_2a0 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(
                        (int)(arg2_01 - arg2_00 >> 20), 0, (int)(arg2_01 >> 20));
                    pcVar6 = DataSizeString<eastl::fixed_string<char, 16>>(
                        (fixed_string<char, _16>*)&local_2a0[0].field_8, arg2_01 - arg2_00);
                    local_260.sprintf("Free GPU: %s", pcVar6);
                    iVar2 = field_112;
                    FVar4 = local_2a0.GetX();
                    DrawTextString((int)&local_260, arg1, arg2 + iVar2 * -2, FVar3 | FVar4 & 4294967040, FVar3);
                }
            }
        }
        local_2a0[0].field_8.~fixed_string();
    }

    // 0x1008fd950
    char const* DataSizeString<eastl::fixed_string<char, 16>>(eastl::fixed_string<char, 16>& str,
                                                              unsigned long long arg2) {
        char* pcVar1;
        float fVar2;

        if (arg2 < 1048577) {
            if (arg2 < 1025) {
                str.sprintf("%d bytes");
                goto LAB_1008fd9b3;
            }
            fVar2 = Bytes2Kilobytes<unsigned long long>(arg2);
            pcVar1 = "%.3fKB";
        } else {
            fVar2 = Bytes2Megabytes<unsigned long long>(arg2);
            pcVar1 = "%.3fMB";
        }
        str.sprintf(pcVar1, (double)fVar2);
    LAB_1008fd9b3:
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x1008fd9d0
    uint8_t DebugOverlayGPU::UpdateImpl(unsigned long long arg1) {
        unsigned long long arg1_00 = ((RenderDevice*)Instance())->GetTotalAllocatedGPUMemory();
        float fVar1 = Bytes2Megabytes<unsigned long long>(arg1_00);
        field_128->RecordValue(arg1, (int)fVar1);
        field_128->SetMaximum(512);
        return 1;
    }

    // 0x1008fda20
    void DebugOverlayGPU::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display GPU Usage", field_120);
    }

} // namespace jag
