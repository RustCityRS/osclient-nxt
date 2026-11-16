// libs/game/runetek5/gui/debug/DebugOverlayAudio.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: DebugOverlayAudio::~DebugOverlayAudio() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DebugOverlayAudio::~DebugOverlayAudio() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1004bb3f0
    DebugOverlayAudio::DebugOverlayAudio(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlaySection(debugOverlay, 14, arg2) {
        field_24.SetValue(128.0, 0, 0);
    }

    // 0x1004bb460
    void DebugOverlayAudio::Draw(unsigned long long arg1, int arg2, int arg3) {
        unsigned int uVar1;
        bool cVar2;
        list<console::Line>* this_01;
        float* pfVar3;
        unsigned int arg1_00;
        bool bVar6;
        unique_lock<std::mutex> local_90;
        uint64_t local_80;
        list<console::Line>* local_78;
        array<eastl::fixed_list<float, 1920ul>, 2ul>* local_68;
        float local_58;
        float local_54;
        uint64_t local_40;

        float fVar7 = (float)field_56.GetValue(arg1);
        field_108 = (int)fVar7;
        fVar7 = (float)field_24.GetValue(arg1);
        field_20 = (int)fVar7;
        int iVar4 = field_108;
        int arg3_00 = ((unsigned int)(iVar4 != field_112) * 5 + 5) * iVar4;
        unsigned int uVar5 = arg2 - arg3_00;
        new (&field_88) oldscape::dash3d::GridRect(uVar5, arg3, arg3_00, iVar4);
        GUIManager* local_70 = ((RT7Core*)field_8->end())->GetGUIManager();
        obj_iterator* mutex = (obj_iterator*)(unsigned long)uVar5;
        local_70->AddColouredRectangle(uVar5, arg3, arg3_00, field_108, 64, 1);
        float local_50 = (float)field_108 * 0.5;
        float local_4c = (float)arg3 + local_50;
        array<eastl::fixed_list<float, 1920ul>, 2ul>* this_02 = nullptr;
        if (arg3_00 < 1) {
            arg3_00 = 0;
        }
        int local_48 = arg3_00;
        do {
            uVar5 = 4286611456;
            if (this_02 == nullptr) {
                uVar5 = 1090469888;
            }
            uVar1 = field_20;
            local_68 = this_02;
            this_01 = (list<console::Line>*)(*this_02)[(unsigned long)mutex];
            local_90 = std::unique_lock<std::mutex>(*mutex);
            local_80 = this_01->begin();
            local_78 = this_01;
            local_40 = this_01->end();
            mutex = (obj_iterator*)&local_40;
            cVar2 = local_80 == *mutex;
            if (!cVar2) {
                pfVar3 = (float*)*local_80;
                local_58 = *pfVar3 + *pfVar3;
                arg1_00 = (unsigned int)arg2;
                iVar4 = local_48;
                while (true) {
                    bVar6 = iVar4 == 0;
                    iVar4 = iVar4 - 1;
                    if (bVar6)
                        break;
                    ++local_80;
                    local_40 = local_78->end();
                    mutex = (obj_iterator*)&local_40;
                    cVar2 = local_80 == *mutex;
                    if (cVar2)
                        break;
                    pfVar3 = (float*)*local_80;
                    local_54 = *pfVar3 + *pfVar3;
                    mutex = (obj_iterator*)(unsigned long)arg1_00;
                    local_70->AddGeneralLine(arg1_00, (int)(local_58 * local_50 + local_4c), arg1_00 - 1,
                                             (int)(local_54 * local_50 + local_4c), 1.0, uVar5 | uVar1, 1, false);
                    local_58 = local_54;
                    arg1_00 = arg1_00 - 1;
                }
            }
            this_02 = local_68 + 1;
            if (local_68 != nullptr) {
                DrawSoundManagerDebugData((unsigned int)arg2, arg3 + field_108);
                return;
            }
        } while (true);
    }

    // 0x1004bb720
    void DebugOverlayAudio::DrawSoundManagerDebugData(int arg1, int arg2) {
        int iVar1;
        int arg5;
        SoundManager* pSVar2;
        unsigned int uVar3;
        ReturnValue local_278;
        unsigned int local_270;
        unsigned int local_26c;
        unsigned int local_268;
        unsigned int local_264;
        Callstack local_260;

        if (hal::audio::AudioRenderer::m_debugShowAudio != '\0') {
            pSVar2 = (SoundManager*)InstancePtr();
            pSVar2->UpdateDebugData();
            pSVar2 = (SoundManager*)pSVar2->InstancePtr();
            local_278 = pSVar2->GetDebugData();
            new (&local_260[0].field_8) eastl::fixed_string<char, 512>();
            local_260 = callstack::Callstack();
            local_260[0].field_8.sprintf("SoundInstances : (%u/%i)", (unsigned long)(unsigned int)local_278._0_4_);
            local_260 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(local_278._0_4_, 64, 0);
            iVar1 = local_260.GetX();
            DrawTextString((int)&local_260 + 8, arg1, arg2, iVar1, 255);
            uVar3 = arg2 + field_112;
            local_260[0].field_8.sprintf("Unowned SoundInstances : (%u)", (unsigned long)(unsigned int)local_278._4_4_);
            local_260 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(local_278._4_4_,
                                                                                               64 - local_278._0_4_, 0);
            iVar1 = local_260.GetX();
            DrawTextString((int)&local_260 + 8, arg1, uVar3, iVar1, 255);
            uVar3 = uVar3 + field_112;
            local_260[0].field_8.sprintf("Playing SoundInstances : (%u/%i)", (unsigned long)local_270);
            local_260 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(local_270, 56, 0);
            iVar1 = local_260.GetX();
            DrawTextString((int)&local_260 + 8, arg1, uVar3, iVar1, 255);
            uVar3 = uVar3 + field_112;
            local_260[0].field_8.sprintf("Active Decoders : (%u/%i)", (unsigned long)local_26c);
            local_260 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(local_26c, 10, 0);
            iVar1 = local_260.GetX();
            DrawTextString((int)&local_260 + 8, arg1, uVar3, iVar1, 255);
            uVar3 = uVar3 + field_112;
            local_260[0].field_8.sprintf("Loading SoundResources : (%u)", (unsigned long)local_268);
            iVar1 = local_260.GetX();
            DrawTextString((int)&local_260 + 8, arg1, uVar3, iVar1, 255);
            iVar1 = field_112;
            local_260[0].field_8.sprintf("SoundResource Cache Size : (%u%%)", (unsigned long)local_264);
            local_260 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(local_264, 100, 0);
            arg5 = local_260.GetX();
            DrawTextString((int)&local_260 + 8, arg1, uVar3 + iVar1, arg5, 255);
            field_108 = field_108 + field_112 * 6;
            local_260[0].field_8.~fixed_string();
        }
    }

    // 0x1004bba80
    uint64_t DebugOverlayAudio::Update(unsigned long long arg1) {
        return hal::audio::AudioRenderer::m_debugShowAudio;
    }

    // 0x1004bba90
    void DebugOverlayAudio::SetHeight(int arg1) {
        float local_14;

        field_112 = arg1;
        field_56.SetValue(local_14, 0, 0);
        field_116 = field_112 * 5;
    }

    // 0x1004bbaf0
    void DebugOverlayAudio::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Audio", field_120);
    }

} // namespace jag
