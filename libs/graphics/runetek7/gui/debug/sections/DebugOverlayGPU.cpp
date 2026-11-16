// libs/graphics/runetek7/gui/debug/sections/DebugOverlayGPU.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    class DebugOverlayGPUStats {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGPUStats();
        virtual void Draw(unsigned long long, int, int);
        virtual Update(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        DebugOverlayGPUStats(DebugOverlay&, bool);

        // data members, from how the methods use this: 128 bytes
        undefined** field_0;   // offset 0, vtable pointer
        DebugOverlay* field_8; // offset 8
        undefined8 field_16;   // offset 16
        char _unknown_24[80];
        undefined4 field_104; // offset 104
        int field_108;        // offset 108
        int field_112;        // offset 112
        int field_116;        // offset 116
        bool field_120;       // offset 120
        undefined1 field_121; // offset 121
        char _unknown_122[2];
        undefined4 field_124; // offset 124
    };

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayGPU::~DebugOverlayGPU();

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayGPU::~DebugOverlayGPU();

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayGPU::~DebugOverlayGPU();

    // 0x1008fd650, 64 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayGPU::DebugOverlayGPU(DebugOverlay&, bool)
    void DebugOverlayGPU::DebugOverlayGPU(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 4, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f18938;
    }

    // 0x1008fd690, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayGPU::DebugOverlayGPU(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008fd6a0, 672 bytes, placed by class name and debug map
    // DebugOverlayGPU::DrawImpl(int, int)
    void DebugOverlayGPU::DrawImpl(int param_1, int param_2) {
        int iVar1;
        undefined4 uVar2;
        uint uVar3;
        uint uVar4;
        RenderDevice* pRVar5;
        ulonglong uVar6;
        char* pcVar7;
        ulong uVar8;
        fixed_string<char, 512, true, eastl::allocator>* this_00;
        Callstack local_2a0[4];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        callstack::Callstack::Callstack(local_2a0);
        this_00 = local_260;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(this_00);
        pRVar5 = (RenderDevice*)this_00->Instance();
        uVar6 = pRVar5->GetTotalAllocatedGPUMemory();
        new (&local_2a0[0].field_8) eastl::fixed_string<char, 16, true, eastl::allocator>();
        iVar1 = field_128->GetMax();
        local_2a0->SetRedGreenGradient(iVar1, 512, 0);
        pcVar7 = DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(
            (fixed_string*)&local_2a0[0].field_8, uVar6);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_260, "Used GPU: %s", pcVar7);
        uVar2 = local_2a0->GetX();
        (*(code*)field_0[7])(this, local_260, param_1, param_2, uVar2, 255, 2);
        uVar3 = (*(code*)field_0[8])(this, 1);
        if (uVar3 != 0) {
            pRVar5 = (RenderDevice*)((DebugOverlayGPU*)this)->Instance();
            uVar8 = pRVar5->GetAvailableGPUMemory();
            if (uVar8 != 0) {
                pcVar7 = DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(
                    (fixed_string*)&local_2a0[0].field_8, uVar8);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_260, "Available GPU: %s", pcVar7);
                (*(code*)field_0[7])(this, local_260, param_1, param_2 - field_112, uVar3 | 2164228096, uVar3, 2);
                uVar3 = (*(code*)field_0[8])(this, 2);
                if (uVar3 != 0) {
                    local_2a0->SetRedGreenGradient((int)(uVar8 - uVar6 >> 20), 0, (int)(uVar8 >> 20));
                    pcVar7 = DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(
                        (fixed_string*)&local_2a0[0].field_8, uVar8 - uVar6);
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::sprintf((char*)
                                                                                                            local_260,
                                                                                                        "Free GPU: %s",
                                                                                                        pcVar7);
                    iVar1 = field_112;
                    uVar4 = local_2a0->GetX();
                    (*(code*)field_0[7])(this, local_260, param_1, param_2 + iVar1 * -2, uVar3 | uVar4 & 4294967040,
                                         uVar3, 2);
                }
            }
        }
        /* WARNING: Subroutine does not return */
        local_2a0[0].field_8.~fixed_string();
    }

    // 0x1008fd950, 128 bytes, inline, placed by debug map only (low confidence)
    // char const* DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator> >(eastl::fixed_string<char, 16, true, eastl::allocator>&, unsigned long long)
    char* DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(fixed_string* param_1,
                                                                                ulonglong param_2) {
        char* pcVar1;
        float fVar2;

        if (param_2 < 1048577) {
            if (param_2 < 1025) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)param_1, "%d bytes");
                goto LAB_1008fd9b3;
            }
            fVar2 = Bytes2Kilobytes<unsigned long long>(param_2);
            pcVar1 = "%.3fKB";
        } else {
            fVar2 = Bytes2Megabytes<unsigned long long>(param_2);
            pcVar1 = "%.3fMB";
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)fVar2, pcVar1);
    LAB_1008fd9b3:
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x1008fd9d0, 80 bytes, placed by class name and debug map
    // DebugOverlayGPU::UpdateImpl(unsigned long long)
    undefined1 DebugOverlayGPU::UpdateImpl(ulonglong param_1) {
        RenderDevice* this_00;
        ulonglong uVar1;
        float fVar2;

        this_00 = (RenderDevice*)Instance();
        uVar1 = this_00->GetTotalAllocatedGPUMemory();
        fVar2 = Bytes2Megabytes<unsigned long long>(uVar1);
        (field_128, param_1, (int)fVar2)->RecordValue();
        (field_128, 512)->SetMaximum();
        return 1;
    }

    // 0x1008fda20, 32 bytes, placed by class name and debug map
    // DebugOverlayGPU::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayGPU::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display GPU Usage", &field_120);
    }

} // namespace jag
