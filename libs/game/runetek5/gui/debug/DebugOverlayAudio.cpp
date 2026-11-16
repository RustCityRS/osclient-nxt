// libs/game/runetek5/gui/debug/DebugOverlayAudio.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayAudio::~DebugOverlayAudio();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DebugOverlayAudio::~DebugOverlayAudio();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayAudio::~DebugOverlayAudio();

    // 0x1004bb3f0, 96 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayAudio::DebugOverlayAudio(DebugOverlay&, bool)
    void DebugOverlayAudio::DebugOverlayAudio(DebugOverlay* param_1, bool param_2) {
        float local_1c;

        new (this) DebugOverlaySection(param_1, 14);
        field_0 = &PTR__ScriptOption_100f016a0;
        local_1c = 128.0;
        (&field_24, &local_1c, 0, 0)->SetValue();
    }

    // 0x1004bb450, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayAudio::DebugOverlayAudio(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1004bb460, 640 bytes, placed by class name and debug map
    // DebugOverlayAudio::Draw(unsigned long long, int, int)
    void DebugOverlayAudio::Draw(ulonglong param_1, int param_2, int param_3) {
        uint uVar1;
        bool bVar2;
        RT7Core* this_00;
        undefined8 uVar3;
        float* pfVar4;
        ulong uVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        float fVar9;
        undefined1 auVar10[16];
        unique_lock<std::mutex> local_90[16];
        undefined8 local_80;
        undefined8 local_78;
        undefined8 local_70;
        ulong local_68;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        int local_48;
        undefined8 local_40;

        fVar9 = (float)(&field_56, param_1)->GetValue();
        field_108 = (int)fVar9;
        fVar9 = (float)(&field_24, param_1)->GetValue();
        field_20 = (int)fVar9;
        iVar7 = field_108;
        iVar6 = ((uint)(iVar7 != m_height) * 5 + 5) * iVar7;
        new (&field_88, param_2 - iVar6, param_3, iVar6, iVar7) oldscape::dash3d::GridRect();
        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        local_70 = this_00->GetGUIManager();
        local_70->AddColouredRectangle(param_2 - iVar6, param_3, iVar6, field_108, 64, 1);
        local_50 = (float)field_108 * 0.5;
        local_4c = (float)param_3 + local_50;
        uVar5 = 0;
        if (iVar6 < 1) {
            iVar6 = 0;
        }
        local_48 = iVar6;
        do {
            uVar8 = 4286611456;
            if (uVar5 == 0) {
                uVar8 = 1090469888;
            }
            uVar1 = ((DebugOverlayAudio*)this)->field_20;
            local_68 = uVar5;
            uVar3 = std::array<eastl::fixed_list<float, 1920ul, true, eastl::allocator>, 2ul>::operator[](uVar5);
            std::unique_lock<std::mutex>::unique_lock((mutex*)local_90);
            local_80 = eastl::list<console::Line, eastl::allocator>::begin();
            local_78 = uVar3;
            auVar10 = eastl::list<console::Line, eastl::allocator>::end();
            local_40 = auVar10._0_8_;
            bVar2 = eastl::operator==((eastl*)&local_80, (hashtable_iterator_base*)&local_40, auVar10._8_8_);
            if (!bVar2) {
                pfVar4 = (float*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_80);
                local_58 = *pfVar4 + *pfVar4;
                iVar7 = param_2;
                iVar6 = local_48;
                while (true) {
                    bVar2 = iVar6 == 0;
                    iVar6 = iVar6 + -1;
                    if (bVar2)
                        break;
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_80);
                    auVar10 = eastl::list<console::Line, eastl::allocator>::end();
                    local_40 = auVar10._0_8_;
                    bVar2 = eastl::operator==((eastl*)&local_80, (hashtable_iterator_base*)&local_40, auVar10._8_8_);
                    if (bVar2)
                        break;
                    pfVar4 = (float*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_80);
                    local_54 = *pfVar4 + *pfVar4;
                    1065353216->AddGeneralLine(local_70, iVar7, (int)(local_58 * local_50 + local_4c), iVar7 + -1,
                                               (int)(local_54 * local_50 + local_4c), uVar8 | uVar1, 1, 0);
                    local_58 = local_54;
                    iVar7 = iVar7 + -1;
                }
            }
            std::unique_lock<std::mutex>::~unique_lock(local_90);
            uVar5 = local_68 + 1;
            if (local_68 != 0) {
                DrawSoundManagerDebugData((DebugOverlayAudio*)this, param_2,
                                          param_3 + ((DebugOverlayAudio*)this)->field_108);
                return;
            }
        } while (true);
    }

    // 0x1004bb720, 864 bytes, placed by class name and debug map
    // DebugOverlayAudio::DrawSoundManagerDebugData(int, int)
    void DebugOverlayAudio::DrawSoundManagerDebugData(int param_1, int param_2) {
        int iVar1;
        undefined4 uVar2;
        SoundManager* this_00;
        int iVar3;
        uint local_278;
        uint local_274;
        uint local_270;
        uint local_26c;
        uint local_268;
        uint local_264;
        Callstack local_260[35];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (hal::audio::AudioRenderer::m_debugShowAudio != '\0') {
            this_00 = (SoundManager*)Singleton<game::SoundManager>::InstancePtr();
            this_00->UpdateDebugData();
            Singleton<game::SoundManager>::InstancePtr();
            local_278.GetDebugData();
            new (&local_260[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
            callstack::Callstack::Callstack(local_260);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_260[0].field_8, "SoundInstances : (%u/%i)", (ulong)local_278);
            local_260->SetRedGreenGradient(local_278, 64, 0);
            uVar2 = local_260->GetX();
            (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, param_2, uVar2, 255, 2);
            iVar3 = param_2 + m_height;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_260[0].field_8, "Unowned SoundInstances : (%u)", (ulong)local_274);
            local_260->SetRedGreenGradient(local_274, 64 - local_278, 0);
            uVar2 = local_260->GetX();
            (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, iVar3, uVar2, 255, 2);
            iVar3 = iVar3 + m_height;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_260[0].field_8, "Playing SoundInstances : (%u/%i)", (ulong)local_270);
            local_260->SetRedGreenGradient(local_270, 56, 0);
            uVar2 = local_260->GetX();
            (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, iVar3, uVar2, 255, 2);
            iVar3 = iVar3 + m_height;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_260[0].field_8, "Active Decoders : (%u/%i)", (ulong)local_26c);
            local_260->SetRedGreenGradient(local_26c, 10, 0);
            uVar2 = local_260->GetX();
            (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, iVar3, uVar2, 255, 2);
            iVar3 = iVar3 + m_height;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_260[0].field_8, "Loading SoundResources : (%u)", (ulong)local_268);
            uVar2 = local_260->GetX();
            (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, iVar3, uVar2, 255, 2);
            iVar1 = m_height;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_260[0].field_8, "SoundResource Cache Size : (%u%%)", (ulong)local_264);
            local_260->SetRedGreenGradient(local_264, 100, 0);
            uVar2 = local_260->GetX();
            (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, iVar3 + iVar1, uVar2, 255, 2);
            field_108 = field_108 + m_height * 6;
            /* WARNING: Subroutine does not return */
            local_260[0].field_8.~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004bba80, 16 bytes, placed by class name and debug map
    // DebugOverlayAudio::Update(unsigned long long)
    undefined8 DebugOverlayAudio::Update(ulonglong param_1) {
        return CONCAT71(17021991, hal::audio::AudioRenderer::m_debugShowAudio);
    }

    // 0x1004bba90, 64 bytes, placed by class name and debug map
    // DebugOverlayAudio::SetHeight(int)
    void DebugOverlayAudio::SetHeight(int param_1) {
        float local_14;

        m_height = param_1;
        (&field_56, &local_14, 0, 0)->SetValue();
        field_116 = m_height * 5;
    }

    // 0x1004bbaf0, 32 bytes, placed by class name
    // DebugOverlayAudio::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayAudio::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Audio", &field_120);
    }

} // namespace jag
