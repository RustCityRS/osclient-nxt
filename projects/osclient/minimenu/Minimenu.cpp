// projects/osclient/minimenu/Minimenu.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Minimenu.h"
#include "libs/oldscape/clientlib/auth/GameToken.h"
#include "MinimenuEntry.h"

namespace jag::oldscape::minimenu {
    // 0x100f8a658
    vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true>> Minimenu::m_testOps;

    // 0x100f8a720
    unique_ptr<MinimenuEntry> Minimenu::CANCEL_ENTRY;

    // 0x100f8a728
    unique_ptr<MinimenuEntry> Minimenu::m_stashedEntry;

    // 0x10006cab0
    bool Minimenu::IsOpen() {
        return m_open;
    }

    // 0x10006cc70
    Minimenu::Minimenu(jstring::PixfontGeneric& pixfontGeneric, const shared_ptr<Array<graphics::Pix32>>& pix32s,
                       bool arg3, jagex3::Js5& js5) {
        field_0 = '\0';
        field_1 = 0;
        field_2 = 1;
        field_4 = 20;
        new (field_8) MinimenuOps();
        field_96 = pixfontGeneric;
        field_112 = arg3;
        m_simulatedShiftActive = false;
        m_targetMode = false;
        m_targetSubinterfaceId = -1;
        m_targetLinkObject = -1;
        new (&field_144) eastl::string();
        new (&field_176) eastl::string();
        field_224 = 210453397552;
        field_232 = 219043332146;
        field_208 = 193273528364;
        field_216 = 201863462958;
        new (&field_240) std::array<eastl::string, 8ul>();
        field_520 = 13;
        field_504 = 42949672969;
        field_512 = 51539607563;
        field_524 = 81604378642;
        field_532 = 90194313236;
        field_540 = 22;
        field_544 = 17179869187;
        field_552 = 25769803781;
        field_560 = 1001;
        new (&field_568) std::array<eastl::vector_map<int, MinimenuGlobalEntryData>, 5ul>();
        field_768 = 0;
        field_772 = 0;
        field_776 = 0;
        field_780 = 0;
        m_open = 0;
        field_788 = 4294967295;
        m_startHoverIndex = 0;
        m_numEntries = 0;
        new (&field_800) std::array<MinimenuEntry, 500ul>();
        m_followerLowPriority = false;
        m_shiftClickEnabled = false;
        m_attackPriorityPlayer = 0;
        m_attackPriorityNpc = 0;
        (&field_68812)->destruct<highlight::NpcUID*>();
        field_68816->destruct<highlight::NpcUID*>();
        new ((field_68816 + 8)) eastl::string();
        new (&field_68856) eastl::string();
        uint8_t* this_00 = &field_68904;
        new (this_00) shared_ptr();
        field_68924 = -1;
        m_feedbackShowPopupText = false;
        field_68936 = js5;
        field_69064 = 3;
        field_69068 = 4;
        field_69072 = 1;
        *this_00 = pix32s;
        field_108 = field_96->field_8;
        uint8_t* puVar1 = &field_72;
        uint32_t* puVar2 = (uint32_t*)(*puVar1)[0];
        *puVar2 = 6116423;
        puVar2 = (uint32_t*)(*puVar1)[1];
        *puVar2 = 7169111;
        puVar2 = (uint32_t*)(*puVar1)[2];
        *puVar2 = 9274487;
        puVar1 = &field_84;
        puVar2 = (uint32_t*)(*puVar1)[0];
        *puVar2 = 6645125;
        puVar2 = (uint32_t*)(*puVar1)[1];
        *puVar2 = 5724019;
        puVar2 = (uint32_t*)(*puVar1)[2];
        *puVar2 = 8487326;
        field_64 = 72056494543077375;
        field_116 = 300;
        int local_34 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00).operator->())->end();
        auto piVar3 = std::max<int>(local_34, field_4);
        int iVar4 = *piVar3;
        field_68892 = iVar4;
        field_68888 = iVar4;
        iVar4 = field_96->field_4;
        if (field_112 == false) {
            iVar4 = iVar4 + field_96->field_8 - 1;
        } else {
            iVar4 = iVar4 * 2;
        }
        field_104 = iVar4;
        puVar1 = &field_68944;
        puVar2 = (uint32_t*)(*puVar1)[7];
        *puVar2 = 0;
        puVar2 = (uint32_t*)(*puVar1)[1];
        *puVar2 = 0;
        puVar2 = (uint32_t*)(*puVar1)[2];
        *puVar2 = 0;
        puVar2 = (uint32_t*)(*puVar1)[3];
        *puVar2 = 0;
        puVar2 = (uint32_t*)(*puVar1)[4];
        *puVar2 = 0;
        puVar2 = (uint32_t*)(*puVar1)[5];
        *puVar2 = 2;
        puVar2 = (uint32_t*)(*puVar1)[6];
        *puVar2 = 0;
        puVar2 = (uint32_t*)(*puVar1)[8];
        *puVar2 = 0;
        unsigned long arg1 = 0;
        puVar2 = (uint32_t*)(*puVar1)[0];
        *puVar2 = 1;
        puVar2 = (uint32_t*)(*puVar1)[9];
        *puVar2 = 0;
        do {
            puVar2 = &field_68984[arg1];
            *puVar2 = 1;
            puVar2 = &field_69024[arg1];
            *puVar2 = 0;
            arg1 = arg1 + 1;
        } while (arg1 != 10);
    }

    // 0x10006d240
    Minimenu::~Minimenu() {
        field_68904.~shared_ptr();
        field_68856.~basic_string();
        ((field_68816 + 8))->~basic_string();
        field_800.~array();
        field_568.~array();
        field_240.~array();
        field_176.~basic_string();
        field_144.~basic_string();
        field_8->~MinimenuOps();
    }

    // 0x10006d2d0
    void Minimenu::GameLoop() {
        auto this_00 = Client::Instance();
        AdvanceFeedback();
        if (this_00->field_8504 != 0) {
            if (field_0 != '\0') {
                return;
            }
            this_00->field_8496.AdvanceBuildingMinimenuState();
        }
        Sort();
        if (this_00->DraggingInterface() == '\0') {
            if (m_open == '\0') {
                LoopClosedMouseMode();
            } else {
                LoopOpenMouseMode();
            }
        }
    }

    // 0x10006d340
    void Minimenu::AdvanceFeedback() {
        field_68888 = field_68888 + 1;
    }

    // 0x10006d350
    void Minimenu::Sort() {
        unsigned long arg1;
        int iVar1;
        CommandLine* pCVar2;
        unsigned long arg1_00;
        bool bVar3;

        do {
            bVar3 = true;
            if (1 < m_numEntries) {
                bVar3 = true;
                arg1_00 = 0;
                do {
                    pCVar2 = &field_800[arg1_00];
                    arg1 = arg1_00 + 1;
                    iVar1 = pCVar2->GetPos();
                    if (iVar1 < 1000) {
                        pCVar2 = &field_800[arg1];
                        iVar1 = pCVar2->GetPos();
                        if (1000 < iVar1) {
                            SwapEntries((int)arg1_00, (int)arg1);
                            bVar3 = false;
                        }
                    }
                    arg1_00 = arg1;
                } while ((long)arg1 < (long)m_numEntries - 1);
            }
        } while (!bVar3);
    }

    // 0x10006d400
    void Minimenu::LoopOpenMouseMode() {
        unsigned long in_RSI;

        auto pCVar4 = Client::Instance();
        int iVar1 = pCVar4->field_8504;
        unsigned int* puVar5 = &pCVar4->field_8560[in_RSI];
        unsigned int uVar2 = *puVar5;
        puVar5 = &pCVar4->field_8576[in_RSI];
        if (iVar1 == 2) {
            ProcessClick((CoordType<UICoordSpecializer>*)(unsigned long)uVar2,
                         (CoordType<UICoordSpecializer>*)(unsigned long)*puVar5);
        } else {
            if (IsMouseFarFromMenu((CoordType<UICoordSpecializer>*)(unsigned long)uVar2,
                                   (CoordType<UICoordSpecializer>*)(unsigned long)*puVar5) != '\0') {
                Close();
                DirtyArea();
            }
        }
    }

    // 0x10006d480
    void Minimenu::LoopClosedMouseMode() {
        bool cVar1;
        unsigned int arg1;
        int iVar2;
        int arg2;
        unsigned int* puVar3;
        InputAction inputAction;
        unsigned long in_RSI;
        ReturnValue local_48;
        CoordMapSquare local_38;

        auto this_00 = Client::Instance();
        switch (this_00->field_8504) {
        case 0:
        case 17:
            goto switchD_10006d4bb_caseD_0;
        case 2:
            cVar1 = this_00->UsingOneButtonMouse();
            if ((((!cVar1) || (m_numEntries < 3)) || (cVar1 = IsDefaultShiftClickOption(), cVar1)) ||
                (cVar1 = IsDefaultIgnoreSingleClickOption(), cVar1)) {
                arg1 = GetDefaultClickIndex();
                in_RSI = (unsigned long)arg1;
                cVar1 = MenuOnly(arg1);
                if (!cVar1)
                    break;
            }
            in_RSI = 4;
            this_00->field_8496.SetCurrentAction(4);
            break;
        case 3:
            goto switchD_10006d4bb_caseD_3;
        }
        if (this_00->field_8504 - 4U < 2) {
            puVar3 = &this_00->field_8560[in_RSI];
            local_38.m_x = *puVar3;
            puVar3 = &this_00->field_8576[in_RSI];
            local_38._8_4_ = *puVar3;
            if (0 < m_numEntries) {
                local_48 = Client::Instance()->GetUISafeArea();
                iVar2 = local_38.GetX();
                arg2 = local_38.field_8.GetX();
                cVar1 = local_48.IsInside(iVar2, arg2);
                if (cVar1) {
                    Open((CoordType<UICoordSpecializer>*)(unsigned long)local_38.m_x,
                         (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_38._8_4_);
                    return;
                }
            }
        switchD_10006d4bb_caseD_3:
            inputAction = 17;
        } else {
            if (this_00->field_8504 != 2) {
                return;
            }
            if (0 < m_numEntries) {
                iVar2 = GetDefaultClickIndex();
                DoEntry(iVar2);
            }
            inputAction = 3;
        }
        this_00->field_8496.SetCurrentAction(inputAction);
    switchD_10006d4bb_caseD_0:
    }

    // 0x10006d630
    void Minimenu::Open(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2) {
        CalculateMinimenuDimensions(coordType1, coordType2);
        auto this_00 = Client::Instance();
        this_00->RequestGroundCoordsForDeferredMove(
            (CoordType<UICoordSpecializer>*)((unsigned long)coordType1 & 4294967295),
            (CoordType<UICoordSpecializer>*)((unsigned long)coordType2 & 4294967295));
        m_open = 1;
        this_00->field_8496.SetCurrentAction(4);
        ScriptRunner::ExecuteScript(82, -1, -1, 500000);
        if (((GameOptions*)this_00->field_8384.operator->())->GetHapticOnMinimenuOpen() != '\0') {
            this_00->Vibrate(4);
        }
    }

    // 0x10006d6c0
    void Minimenu::CalculateMinimenuDimensions(CoordType<UICoordSpecializer> coordType1,
                                               CoordType<UICoordSpecializer> coordType2) {
        PixfontGeneric* this_00;
        int iVar7;
        uint8_t local_48[16];

        local_48._0_4_ = (uint32_t)coordType1;
        local_48._8_4_ = (uint32_t)coordType2;
        int iVar2 = field_96->StringWid(*((eastl::string*)&constants::text::chooseoption));
        int iVar3 = m_numEntries;
        if (0 < iVar3) {
            iVar7 = 0;
            do {
                this_00 = field_96;
                GetLine(&local_68, this, iVar7);
                iVar3 = this_00->StringWid(local_68);
                if (iVar2 < iVar3) {
                    iVar2 = iVar3;
                }
                iVar7 = iVar7 + 1;
                iVar3 = m_numEntries;
            } while (iVar7 < iVar3);
        }
        iVar7 = field_69072;
        unsigned int uVar8 = iVar2 + field_108 * 2;
        iVar2 = field_104;
        int iVar1 = field_69064;
        int iVar4 = CalculateMouseStartPosition();
        int iVar5 = local_48->GetX();
        iVar5 = iVar5 - (int)uVar8 / 2;
        unsigned long local_38 = (unsigned long)uVar8;
        int iVar6 = ((local_48 + 8))->GetX();
        iVar6 = iVar6 - iVar4;
        CoordMapSquare local_68 = Client::Instance()->GetUISafeArea();
        iVar4 = local_68.GetX();
        if (iVar5 < iVar4) {
            iVar5 = local_68.GetX();
        }
        iVar4 = local_68.GetZ();
        if (iVar6 < iVar4) {
            iVar6 = local_68.GetZ();
        }
        iVar7 = iVar1 + (iVar3 + iVar7) * iVar2 + 4;
        iVar3 = (int)local_38;
        iVar2 = local_68.Right();
        if (iVar2 <= iVar5 + iVar3) {
            iVar5 = local_68.Right();
            iVar5 = iVar5 - (int)local_38;
        }
        iVar3 = local_68.MaxZ();
        if (iVar3 <= iVar6 + iVar7) {
            iVar6 = local_68.MaxZ();
            iVar6 = iVar6 - iVar7;
        }
        iVar3 = local_68.GetZ();
        if (iVar3 <= iVar6) {
            iVar3 = local_68.MaxZ();
            if (iVar6 < iVar3)
                goto LAB_10006d85b;
        }
        iVar6 = local_68.GetZ();
    LAB_10006d85b:
        field_768 = iVar5;
        field_772 = iVar6;
        field_776 = (int)local_38;
        field_780 = iVar7;
    }

    // 0x10006d8f0
    void Minimenu::ProcessClick(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2) {
        int iVar2;
        int iVar3;
        int arg1;
        int iVar4;

        if (m_open != '\0') {
            iVar2 = m_numEntries;
            if (0 < iVar2) {
                iVar3 = 0;
                iVar4 = -1;
                arg1 = -1;
                do {
                    if (IsMouseOverEntry((CoordType<UICoordSpecializer>*)((unsigned long)coordType1 & 4294967295),
                                         (CoordType<UICoordSpecializer>*)((unsigned long)coordType2 & 4294967295),
                                         field_69064 + field_772 + (iVar2 + field_69072 + iVar4) * field_104) != '\0') {
                        arg1 = iVar3;
                        break;
                    }
                    iVar3 = iVar3 + 1;
                    iVar2 = m_numEntries;
                    iVar4 = iVar4 - 1;
                } while (iVar3 < iVar2);
                if (arg1 != -1) {
                    DoEntry(arg1);
                }
            }
            Close();
            DirtyArea();
        }
    }

    // 0x10006d9c0
    bool Minimenu::IsMouseOverEntry(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                                    int arg3) {
        bool bVar1;
        CoordMapSquare local_38;

        local_38.m_x = (unsigned int)coordType1;
        local_38._8_4_ = (uint32_t)coordType2;
        int iVar2 = local_38.GetX();
        int iVar3 = local_38.field_8.GetX();
        if ((Client::Instance()->field_8504 == 4) || (iVar2 <= field_768)) {
            bVar1 = false;
        } else {
            bVar1 = false;
            if ((iVar2 < field_768 + field_776) && (arg3 <= iVar3)) {
                bVar1 = iVar3 < arg3 + field_104;
            }
        }
        return bVar1;
    }

    // 0x10006da40
    void Minimenu::DoEntry(int arg1) {
        unsigned int* puVar3;
        MinimenuEntry* minimenuEntry;
        uint32_t in_register_00000034;
        unsigned int uVar4;
        unsigned int uVar5;

        unsigned long arg1_00 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        auto pCVar1 = Client::Instance();
        if (-1 < arg1) {
            uVar5 = *(unsigned int*)&pCVar1->field_19056;
            uVar4 = *(unsigned int*)&pCVar1->field_19060;
            if (Client::Instance()->field_8425 != false) {
                puVar3 = &pCVar1->field_8528[arg1_00];
                uVar5 = *puVar3;
                puVar3 = &pCVar1->field_8544[arg1_00];
                uVar4 = *puVar3;
            }
            minimenuEntry = (MinimenuEntry*)field_800[(long)arg1];
            DoAction(*minimenuEntry, (CoordType<UICoordSpecializer>*)(unsigned long)uVar5,
                     (CoordType<UICoordSpecializer>*)(unsigned long)uVar4);
        }
    }

    // 0x10006dad0
    void Minimenu::Close() {
        Client* pCVar1;

        if (m_open != '\0') {
            m_open = 0;
            field_788 = 4294967295;
            pCVar1 = Client::Instance();
            if ((pCVar1->field_8504 != 12) || (pCVar1->field_8425 != false)) {
                pCVar1->field_8496.SetCurrentAction(17);
                ScriptRunner::ExecuteScript(83, -1, -1, 500000);
            }
        }
    }

    // 0x10006db40
    void Minimenu::DirtyArea() {
        Client::Instance()->DirtyArea(field_768, field_772, field_776, field_780);
    }

    // 0x10006db80
    void Minimenu::DoAction(MinimenuEntry& minimenuEntry, CoordType<UICoordSpecializer> coordType1,
                            CoordType<UICoordSpecializer> coordType2) {
        uint32_t in_stack_ffffffffffffff64;
        uint32_t in_stack_ffffffffffffff6c;

        auto str = minimenuEntry.second();
        eastl::string local_80(*str);
        auto minimenuSubject = minimenuEntry.GetLogStreams();
        int local_38 = minimenuEntry.GetX();
        int local_34 = minimenuEntry.GetZ();
        int iVar4 = minimenuEntry.GetPos();
        int arg4 = minimenuEntry.GetLevel();
        auto local_60 = minimenuEntry.GetComponent();
        auto pCVar5 = Client::Instance();
        MinimenuSubject* local_48 = minimenuSubject;
        pCVar5->DoAction(local_38, local_34, iVar4, arg4, local_80, *minimenuSubject,
                         (CoordType<UICoordSpecializer>*)(((uint64_t)in_stack_ffffffffffffff64 << 32) |
                                                          (uint32_t)(unsigned int)coordType1),
                         (CoordType<UICoordSpecializer>*)(((uint64_t)in_stack_ffffffffffffff6c << 32) |
                                                          (uint32_t)(unsigned int)coordType2),
                         local_60);
        iVar4 = RemovePriorityModifier(iVar4);
        if (((MinimenuOp*)field_8->GetOp(iVar4))->HasProperty(0) != '\0') {
            StartFeedback((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)coordType1,
                          (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)coordType2, true, *local_48,
                          local_80);
        }
        pCVar5 = Client::Instance();
        pCVar5->field_8496.SetCurrentAction(17);
    }

    // 0x10006dcf0
    bool Minimenu::MenuOnly(int arg1) {
        if (arg1 < 0) {
            return false;
        }
        int iVar1 = ((CommandLine*)field_800[(long)arg1])->GetPos();
        iVar1 = RemovePriorityModifier(iVar1);
        return iVar1 == 1007;
    }

    // 0x10006dd30
    int Minimenu::RemovePriorityModifier(int arg1) {
        int iVar1 = arg1 - 2000;
        if (arg1 < 2000) {
            iVar1 = arg1;
        }
        return iVar1;
    }

    // 0x10006dd50
    bool Minimenu::IsMouseFarFromMenu(CoordType<UICoordSpecializer> coordType1,
                                      CoordType<UICoordSpecializer> coordType2) {
        CoordMapSquare local_28;

        local_28.m_x = (unsigned int)coordType1;
        local_28._8_4_ = (uint32_t)coordType2;
        int iVar1 = local_28.GetX();
        int iVar2 = local_28.field_8.GetX();
        uint32_t uVar3 = 0;
        if ((iVar1 != -1) && (iVar2 != -1)) {
            uVar3 = 1;
            if ((field_768 - 10 <= iVar1) && ((iVar1 <= field_768 + field_776 + 10 && (field_772 - 10 <= iVar2)))) {
                iVar1 = field_780 + field_772 + 10;
                uVar3 = (((uint32_t)((int32_t)((unsigned int)iVar1 >> 8)) << 8) | (uint8_t)(iVar1 < iVar2));
            }
        }
        return uVar3;
    }

    // 0x10006ddd0
    void Minimenu::ResetPlayerOpChoices() {
        eastl::string* this_00;
        uint8_t* puVar1;

        unsigned long arg1 = 0;
        do {
            this_00 = &field_240[arg1];
            eastl::string::assign(this_00, "");
            puVar1 = &field_496[arg1];
            *puVar1 = 0;
            arg1 = arg1 + 1;
        } while (arg1 != 8);
    }

    // 0x10006de60
    void Minimenu::UpdatePlayerOpChoice(int arg1, const eastl::string& str, int arg3) {
        eastl::string* this_00;
        uint64_t uVar1;

        unsigned int uVar3 = arg1 - 1;
        if (uVar3 < 8) {
            if (str.comparei("null") == 0) {
                str = (eastl::string*)&eastl::EMPTY_STRING;
            }
            this_00 = &field_240[(unsigned long)uVar3];
            *this_00 = str;
            uVar1 = field_496[(unsigned long)uVar3];
            *(bool*)uVar1 = arg3 == 0;
        }
    }

    // 0x10006dee0
    void Minimenu::OnMapRebuild(int arg1, int arg2) {
        unsigned int uVar2;
        int iVar3;
        int iVar4;
        int arg1_00;
        Mixer* this_00;
        unsigned long arg1_02;
        CoordGrid local_60;
        long long local_50;
        array<MinimenuEntry, 500ul>* local_48;

        if (0 < m_numEntries) {
            local_48 = (array<MinimenuEntry, 500ul>*)&field_800;
            arg1_02 = 0;
            do {
                this_00 = (Mixer*)(*local_48)[arg1_02];
                uVar2 = this_00->GetStreamCountLastMix();
                if ((uVar2 < 5) && ((26U >> (uVar2 & 31) & 1) != 0)) {
                    iVar3 = this_00->GetX();
                    iVar3 = iVar3 - arg1;
                    iVar4 = this_00->GetZ();
                    iVar4 = iVar4 - arg2;
                    local_50 = this_00->GetDataType();
                    arg1_00 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(local_50);
                    local_60 = rs2lib::CoordGrid(arg1_00, iVar3, iVar4);
                    if (ClientConstants::IsCoordInBuildArea(local_60) != '\0') {
                        this_00->SetSubjectTypecode(dash3d::MousePickingHelper::OverwriteEntityCoordInTypecode(
                            local_50, arg1_00, iVar3, iVar4));
                        new (this_00) std::__cxx_atomic_base_impl(iVar3);
                        this_00->SetZ(iVar4);
                    }
                }
                arg1_02 = arg1_02 + 1;
            } while ((long)arg1_02 < (long)m_numEntries);
        }
    }

    // 0x10006e010
    void Minimenu::EnterTargetMode(int arg1, int arg2, int arg3, int arg4) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar3;
        uint8_t local_b8[132];

        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(arg1, arg2);
        if (*midiPlayerMainThread != nullptr) {
            lVar3 = (*midiPlayerMainThread).operator->();
            if (((lVar3 + 1072))->empty() == '\0') {
                new (local_b8) HookReq();
                (*((local_b8 + 32))) = *midiPlayerMainThread;
                lVar3 = (*midiPlayerMainThread).operator->();
                *local_b8 = (*((lVar3 + 1072)));
                ScriptRunner::ExecuteScript(*local_b8, 500000);
            }
        }
        m_targetLinkObject = arg4;
        m_targetMode = true;
        m_targetComponent = arg1;
        m_targetSubinterfaceId = arg2;
        field_136 = arg3;
        Client::Instance()->ComponentUpdated(*midiPlayerMainThread);
    }

    // 0x10006e120
    void Minimenu::EndTargetMode() {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar3;
        uint8_t local_98[128];

        if (m_targetMode != false) {
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(
                m_targetComponent, m_targetSubinterfaceId);
            if (*midiPlayerMainThread != nullptr) {
                lVar3 = (*midiPlayerMainThread).operator->();
                if (((lVar3 + 1096))->empty() == '\0') {
                    new (local_98) HookReq();
                    (*((local_98 + 32))) = *midiPlayerMainThread;
                    lVar3 = (*midiPlayerMainThread).operator->();
                    *local_98 = (*((lVar3 + 1096)));
                    ScriptRunner::ExecuteScript(*local_98, 500000);
                }
            }
            m_targetLinkObject = -1;
            m_targetMode = false;
            Client::Instance()->ComponentUpdated(*midiPlayerMainThread);
        }
    }

    // 0x10006e210
    void Minimenu::SetTargetStrings(const eastl::string& str1, const eastl::string& str2) {
        field_144 = str1;
        field_176 = str2;
    }

    // 0x10006e240
    uint8_t Minimenu::GetTargetMode() {
        return m_targetMode;
    }

    // 0x10006e250
    void Minimenu::SetTargetMode(bool arg1) {
        m_targetMode = arg1;
    }

    // 0x10006e260
    int Minimenu::GetTargetComponent() {
        return m_targetComponent;
    }

    // 0x10006e270
    int Minimenu::GetTargetSubinterfaceId() {
        return m_targetSubinterfaceId;
    }

    // 0x10006e280
    int Minimenu::GetTargetLinkObject() {
        return m_targetLinkObject;
    }

    // 0x10006e290
    void Minimenu::Draw(graphics::Pix2D& pix2D) {
        unsigned long uVar8;
        array<int, 3ul>* this_01;
        unsigned long arg1_00;
        ReturnValue local_a8;
        PixfontGeneric* local_88;
        array<MinimenuEntry, 500ul>* local_70;
        array<int, 3ul>* local_68;
        unsigned int local_54;
        unsigned int local_3c;
        unsigned int local_38;

        auto local_50 = Client::Instance();
        int local_34 = field_768;
        int iVar5 = field_772;
        int iVar1 = field_776;
        int iVar2 = field_780;
        array<int, 3ul>* local_80 = (array<int, 3ul>*)&field_72;
        int* local_48 = (int*)(*local_80)[0];
        (**(void (**)(...))(pix2D.field_0 + 32))(pix2D, local_34, iVar5, iVar1, iVar2, *local_48);
        iVar5 = field_104 * field_69072;
        unsigned int uVar9 = field_768 + 1;
        uint8_t* arg1 = (uint8_t*)(unsigned long)uVar9;
        pix2D.DrawRect(uVar9, field_69064 + field_772 + iVar5, field_776 - 2, field_780 - (iVar5 + field_69068),
                       4278190080);
        if (field_112 == false) {
            local_3c = 4294967295;
        } else {
            local_3c = ~field_96->field_16;
        }
        unique_ptr<option::GameOptions>* local_60 = (unique_ptr<option::GameOptions>*)&local_50->field_8384;
        GameOptions* pGVar6 = (GameOptions*)(*local_60).operator->();
        bool cVar4 = pGVar6->GetDrawMinimenuHeader();
        if (cVar4) {
            (**(void (**)(...))(pix2D.field_0 + 32))(pix2D, field_768 + 1, field_772 + 1, field_776 - 2, field_104 + 1,
                                                     0);
            arg1 = &constants::text::chooseoption;
            jstring::PixfontGeneric::DrawString(*field_96, 23796688, field_768 + 3, field_772 + local_3c + field_104,
                                                *local_48, *4294967295);
        }
        Client* pCVar3 = local_50;
        unsigned int* puVar7 = &local_50->field_8560[(unsigned long)arg1];
        unsigned int local_58 = *puVar7;
        puVar7 = &pCVar3->field_8576[(unsigned long)arg1];
        if (m_numEntries < 1) {
            local_38 = 0;
        } else {
            local_54 = *puVar7;
            local_70 = (array<MinimenuEntry, 500ul>*)&field_800;
            local_68 = (array<int, 3ul>*)&field_84;
            iVar5 = -1;
            arg1_00 = 0;
            local_38 = 0;
            do {
                cVar4 = ((MinimenuEntry*)(*local_70)[arg1_00])->IsGlobalEntry();
                this_01 = local_80;
                if (cVar4) {
                    this_01 = local_68;
                }
                uVar9 = field_69064 + field_772 + (field_69072 + m_numEntries + iVar5) * field_104;
                uVar8 = (unsigned long)uVar9;
                local_34 = iVar5;
                cVar4 = IsMouseOverEntry((CoordType<UICoordSpecializer>*)(unsigned long)local_58,
                                         (CoordType<UICoordSpecializer>*)(unsigned long)local_54, uVar9);
                local_48 = (int*)(((uint64_t)local_48._1_7_ << 8) | (uint8_t)cVar4);
                if (!cVar4) {
                    (*this_01)[0];
                    uVar8 = 1;
                    if ((arg1_00 & 1) != 0)
                        goto LAB_10006e515;
                } else {
                    local_38 = (unsigned int)(((uint64_t)((int64_t)(uVar8 >> 8)) << 8) | (uint8_t)1);
                    uVar8 = 2;
                    if (arg1_00 != field_788) {
                        field_788 = (unsigned int)arg1_00;
                        pGVar6 = (GameOptions*)(*local_60).operator->();
                        cVar4 = pGVar6->GetHapticOnMinimenuHover();
                        if (cVar4) {
                            local_50->Vibrate(4);
                        }
                    }
                LAB_10006e515:
                    (*this_01)[uVar8];
                }
                if (field_112 != false) {
                    (**(void (**)(...))(pix2D.field_0 + 32))(
                        pix2D, field_768 + 2, field_772 + (field_69072 + m_numEntries + local_34) * field_104 + 3,
                        field_776 - 4);
                }
                local_48 = (int*)(((uint64_t)local_48._4_4_ << 32) |
                                  (uint32_t)(*(uint32_t*)(field_8 + ((unsigned long)local_48 & 255) * 4 + 56)));
                local_88 = field_96;
                GetLine(&local_a8, this, (unsigned int)arg1_00);
                jstring::PixfontGeneric::DrawString(*local_88, (int)&local_a8, field_108 + field_768,
                                                    uVar9 + local_3c + field_104, (int)local_48, nullptr);
                arg1_00 = arg1_00 + 1;
                iVar5 = local_34 - 1;
            } while ((long)arg1_00 < (long)m_numEntries);
        }
        local_50->BlitArea(field_768, field_772, field_776, field_780);
        if ((local_38 & 1) == 0) {
            field_788 = 4294967295;
        }
    }

    // 0x10006e6b0
    auto Minimenu::GetLine(int arg1) {
        Logger* this_00;
        eastl::string* pbVar2;
        eastl::string local_40;

        if (arg1 < 0) {
            auto result("");
        } else {
            this_00 = &field_800[(long)arg1];
            if (((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
                     this_00->GetLogStreams())
                    ->size() == 0) {
                pbVar2 = (eastl::string*)this_00->second();
                new (&result) eastl::string(*pbVar2);
            } else {
                pbVar2 = (eastl::string*)this_00->second();
                local_40 + *pbVar2;
                this_00->GetLogStreams();
                result + local_40;
            }
        }
        return result;
    }

    // 0x10006e790
    void Minimenu::GetNumOps() {
        eastl::max<int>(m_numEntries - 1, 0);
    }

    // 0x10006e7b0
    void Minimenu::StartFeedback(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                                 bool arg3) {

        eastl::string local_88("");
        eastl::string local_60("");
        StartFeedback((CoordType<UICoordSpecializer>*)((unsigned long)coordType1 & 4294967295),
                      (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)coordType2, arg3, local_88,
                      local_60);
    }

    // 0x10006e880
    void Minimenu::StartFeedback(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                                 bool arg3, const eastl::string& str1, const eastl::string& str2) {
        Client* pCVar2;
        uint32_t in_register_00000009;

        field_68812 = (int)coordType1;
        *(int*)field_68816 = (int)coordType2;
        field_68896 = arg3;
        field_68888 = 0;
        (*((field_68816 + 8))) = str1;
        field_68856 = str2;
        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            pCVar2 = Client::Instance();
            if (((GameOptions*)pCVar2->field_8384.operator->())->GetHapticOnOp() != '\0') {
                pCVar2 = Client::Instance();
                pCVar2->Vibrate(4);
            }
        }
    }

    // 0x10006e940
    void Minimenu::DrawFeedback(graphics::Pix2D& pix2D) {
        uint8_t* objType;
        int iVar1;
        int iVar2;
        bool bVar3;
        int iVar4;
        Array<graphics::Pix32>* pAVar6;
        long lVar7;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        uint64_t uVar11;
        int arg2;
        int iVar12;
        int iVar13;
        int iVar14;
        int local_34;

        auto pCVar5 = Client::Instance();
        if (pCVar5->field_52416 != '\0') {
            if (field_68888 < field_68892) {
                if (field_68924 != -1) {
                    LoadPendingFeedback();
                }
                objType = &field_68904;
                arg2 = 0;
                bVar3 = *objType == nullptr;
                if (!bVar3) {
                    pAVar6 = (Array<graphics::Pix32>*)**objType;
                    iVar12 = 0;
                    lVar7 = (*pAVar6)[0];
                    arg2 = *(int*)(lVar7 + 24);
                    pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*objType).operator->();
                    uVar9 = pvVar8->end();
                    if (field_68896 != false) {
                        pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*objType).operator->();
                        uVar10 = pvVar8->end();
                        iVar12 = (int)(uVar10 >> 1);
                    }
                    pCVar5 = Client::Instance();
                    bVar3 = pCVar5->field_8425;
                    local_34 = field_68812.GetX();
                    if (bVar3 == false) {
                        local_34 = local_34 - 8;
                        iVar14 = field_68816->GetX();
                        iVar4 = -8;
                    } else {
                        iVar14 = 8 - (arg2 * 3) / 2;
                        local_34 = local_34 + iVar14;
                        iVar4 = field_68816->GetX();
                    }
                    iVar13 = (int)(uVar9 >> 1);
                    if (field_68920 == false) {
                        pAVar6 = (Array<graphics::Pix32>*)**objType;
                        uVar11 = (*pAVar6)[(long)((iVar13 * field_68888) / field_68892 + iVar12)];
                        (**(void (**)(...))(pix2D.field_0 + 176))(pix2D, uVar11, local_34, iVar4 + iVar14);
                    } else {
                        iVar1 = field_68888;
                        iVar2 = field_68892;
                        pAVar6 = (Array<graphics::Pix32>*)**objType;
                        uVar11 = (*pAVar6)[(long)((iVar13 * field_68888) / field_68892 + iVar12)];
                        (**(void (**)(...))(pix2D.field_0 + 232))(pix2D, uVar11, local_34, iVar4 + iVar14,
                                                                  255 - (iVar1 * 255) / iVar2);
                    }
                }
            } else {
                if (field_68892 * 2 <= field_68888) {
                    return;
                }
                arg2 = 0;
                bVar3 = field_68904 == nullptr;
                if (!bVar3) {
                    pAVar6 = (Array<graphics::Pix32>*)*field_68904;
                    lVar7 = (*pAVar6)[0];
                    arg2 = *(int*)(lVar7 + 24);
                }
            }
            DrawFeedbackText(pix2D, arg2);
        }
    }

    // 0x10006ebd0
    void Minimenu::DrawFeedbackText(graphics::Pix2D& pix2D, int arg2) {
        uint8_t* puVar1;
        PixfontGeneric* pPVar2;
        unsigned int uVar3;
        Pix2D* pPVar4;
        int iVar6;
        int iVar7;
        int iVar8;
        unsigned int arg6;
        uint64_t in_stack_ffffffffffffff78;
        eastl::string local_68;
        unsigned long local_40;
        int local_34;

        uint32_t uVar9 = (uint32_t)((unsigned long)in_stack_ffffffffffffff78 >> 32);
        if (m_feedbackShowPopupText != false) {
            if (!(field_68856.empty())) {
                local_68 = eastl::string("");
                local_68.append(&field_68856);
                if (!(((field_68816 + 8))->empty())) {
                    local_68.append((eastl::string*)&constants::text::miniseperator);
                    local_68.append((field_68816 + 8));
                    local_68.append(StringConstants::TAG_COLOURCLOSE);
                }
                iVar6 = field_68812.GetX();
                iVar7 = field_96->StringWid(local_68);
                pPVar4 = pix2D;
                uVar3 = (iVar6 - 8) - (arg2 + iVar7);
                if (iVar6 <= pix2D.field_8 / 2) {
                    uVar3 = arg2 + iVar6 + 8;
                }
                local_40 = (unsigned long)uVar3;
                if (field_68920 == false) {
                    puVar1 = field_68816;
                    iVar6 = puVar1->GetX();
                    pPVar4->DrawRect(uVar3 - 5, iVar6 - 8, iVar7 + 10, field_96->field_0 + 10, 0);
                    iVar6 = (int)local_40;
                    iVar8 = puVar1->GetX();
                    (**(void (**)(...))(pPVar4->field_0 + 32))(pPVar4, iVar6 - 4, iVar8 - 7, iVar7 + 8,
                                                               field_96->field_0 + 8);
                    pPVar2 = field_96;
                    iVar6 = puVar1->GetX();
                    jstring::PixfontGeneric::DrawString(*pPVar2, (int)&local_68, (int)local_40,
                                                        field_96->field_0 / 2 + iVar6, 16777215, nullptr);
                } else {
                    iVar6 = field_68892;
                    arg6 = 255;
                    iVar8 = field_68888 - iVar6;
                    if (iVar8 != 0 && iVar6 <= field_68888) {
                        arg6 = 255 - (iVar8 * 510) / (iVar6 * 2);
                    }
                    local_34 = uVar3 - 5;
                    puVar1 = field_68816;
                    iVar6 = puVar1->GetX();
                    pPVar4 = pix2D;
                    pix2D.DrawRectTrans(local_34, iVar6 - 8, iVar7 + 10, field_96->field_0 + 10, 0, arg6);
                    local_34 = (int)local_40 - 4;
                    iVar6 = puVar1->GetX();
                    (**(void (**)(...))(pPVar4->field_0 + 24))(pPVar4, local_34, iVar6 - 7, iVar7 + 8,
                                                               field_96->field_0 + 8, 6710886,
                                                               (((uint64_t)uVar9 << 32) | (uint32_t)arg6));
                    pPVar2 = field_96;
                    iVar6 = puVar1->GetX();
                    pPVar2->DrawStringTrans(local_68, (int)local_40, field_96->field_0 / 2 + iVar6, 16777215, 0, arg6,
                                            *pPVar4);
                }
            }
        }
    }

    // 0x10006eeb0
    void Minimenu::LoadPendingFeedback() {
        ReturnValue local_40;
        ReturnValue local_28;

        if (-1 < field_68924) {
            local_40 = graphics::pixloader::Makepix32Array(*field_68936, field_68924);
            if ((local_40.empty() == '\0') || (field_68924 < 0)) {
                make_shared<Array<graphics::Pix32>, Array<graphics::Pix32>>(&local_28, &local_40);
                field_68904 = local_28;
                field_68924 = -1;
            }
        }
    }

    // 0x10006ef60
    void Minimenu::Build(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2, int arg3,
                         int arg4) {
        bool cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint32_t uVar7;
        Layout* pLVar8;
        long lVar9;
        long* plVar10;
        long* plVar11;
        Logger* this_02;
        shared_ptr<dash3d::GroundDecor>* psVar12;
        LocType* this_03;
        shared_ptr<configdecoder::LocType>* locType;
        int* piVar13;
        ClientNpc* clientNpc;
        ClientEntity* pCVar14;
        ClientPlayer* pCVar15;
        list<shared_ptr<ClientObj>>* clientObjs;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ClientObj* this_04;
        eastl::string* pbVar16;
        Value* pVVar17;
        long lVar18;
        long* plVar19;
        unsigned long uVar20;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar21;
        ReturnValue local_238;
        ReturnValue local_230;
        array<MinimenuOps::Value, 5ul>* local_228;
        array<MinimenuOps::Value, 5ul>* local_220;
        LocChange local_218;
        MinimenuSubject local_1d8;
        eastl::string local_188;
        eastl::string local_168;
        ReturnValue local_148;
        value_type* local_128;
        array<eastl::vector_map<int, MinimenuGlobalEntryData>, 5ul>* local_120;
        array<shared_ptr<ClientPlayer>, 2048ul>* local_118;
        value_type* local_110;
        eastl::string* local_108;
        long local_100;
        int local_f8;
        int local_f4;
        eastl::string local_f0;
        ReturnValue local_d0;
        unsigned int local_c8;
        ReturnValue local_a8;
        unsigned int local_a0;
        long local_88;
        int local_7c;
        uint8_t local_78[16];
        ReturnValue local_68;
        int local_54;
        char local_41;
        long local_40;
        int local_34;

        local_78._0_4_ = (uint32_t)coordType1;
        local_78._8_4_ = (uint32_t)coordType2;
        auto local_50 = Client::Instance();
        if ((local_50->field_52352 == 0) && (m_targetMode == false)) {
            local_218 = eastl::string("");
            local_1d8 = MinimenuSubject::CreateSubject(local_218, 1, -1, 0, -1);
            local_54 = arg3;
            local_34 = arg4;
            iVar4 = local_78->GetX();
            iVar5 = ((local_78 + 8))->GetX();
            AddEntry(*((eastl::string*)&constants::text::walkhere), local_1d8, 23, false, 0, iVar4, iVar5, 0);
            pLVar8 = &field_568[4];
            lVar9 = pLVar8->HeapBeginPtr();
            local_40 = pLVar8->end();
            if (lVar9 != local_40) {
                do {
                    iVar4 = *(int*)(lVar9 + 40);
                    iVar5 = local_78->GetX();
                    iVar6 = ((local_78 + 8))->GetX();
                    AddEntry(*((lVar9 + 8)), local_1d8, 1854, false, iVar4, iVar5, iVar6, 4);
                    lVar9 = lVar9 + 48;
                } while (lVar9 != local_40);
            }
            arg4 = local_34;
            arg3 = local_54;
        }
        Client* pCVar1 = local_50;
        auto this_00 = local_50->GetMemoryCache();
        ((NXTPixScreen*)this_00->GetScreen())
            ->CalculateCanvasCoords((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_78._0_4_,
                                    (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_78._8_4_,
                                    local_f8, local_f4);
        if (((pCVar1->field_8425 == false) && (field_1 == '\0')) ||
            (cVar2 = dash3d::MousePickingHelper::HasCheckedScreenCoordLastRender(local_f8 - arg3, local_f4 - arg4),
             cVar2)) {
            field_0 = '\0';
            local_258 = eastl::vector<long long>();
            local_110 = (value_type*)&field_176;
            local_108 = (eastl::string*)&field_144;
            local_220 = (array<MinimenuOps::Value, 5ul>*)&field_544;
            local_120 = (array<eastl::vector_map<int, MinimenuGlobalEntryData>, 5ul>*)&field_568;
            local_128 = (value_type*)&local_50->field_52368;
            local_118 = (array<shared_ptr<ClientPlayer>, 2048ul>*)&local_50->field_19216;
            local_228 = (array<MinimenuOps::Value, 5ul>*)&field_524;
            local_100 = -1;
            local_54 = 0;
            while (iVar4 = dash3d::MousePickingHelper::GetPickedEntityCount(), local_54 < iVar4) {
                local_88 = dash3d::MousePickingHelper::GetPickedEntityTypecode(local_54);
                plVar10 = (long*)local_258.HeapBeginPtr();
                plVar11 = (long*)local_258.end();
                if (plVar10 == plVar11) {
                LAB_10006f29d:
                    local_258.push_back(local_88);
                    iVar4 = local_54;
                    this = this;
                    uVar7 = dash3d::MousePickingHelper::GetPickedEntityX(local_54);
                    local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar7);
                    local_34 = dash3d::MousePickingHelper::GetPickedEntityZ(iVar4);
                    iVar5 = dash3d::MousePickingHelper::GetPickedEntityType(iVar4);
                    iVar4 = dash3d::MousePickingHelper::GetPickedEntityId(iVar4);
                    local_218 = eastl::string("");
                    local_1d8 = MinimenuSubject::CreateSubject(local_218, 0, local_88, 0, -1);
                    if (iVar5 == 0) {
                        psVar12 = (shared_ptr<dash3d::GroundDecor>*)(*local_118)[(long)iVar4];
                        local_218 = shared_ptr(psVar12);
                        bVar3 = local_218 == nullptr;
                        if (!bVar3) {
                            lVar9 = local_218.operator->();
                            if (((*(unsigned int*)(lVar9 + 24) & 127) == 64) &&
                                (lVar9 = local_218.operator->(), (*(unsigned int*)(lVar9 + 28) & 127) == 64)) {
                                pCVar14 = (ClientEntity*)local_218.end();
                                AddNpcOptionsOnSameTile(pCVar14, (int)local_40, local_34);
                                pCVar14 = (ClientEntity*)local_218.end();
                                AddPlayerOptionsOnSameTile(pCVar14, (int)local_40, local_34);
                            }
                            iVar6 = local_50->GetPriorityPlayerId();
                            if (iVar4 == iVar6) {
                                local_100 = local_88;
                            } else {
                                pCVar15 = (ClientPlayer*)local_218.end();
                                AddPlayerOptions(pCVar15, iVar4, (int)local_40, local_34);
                            }
                        }
                        if (bVar3)
                            goto LAB_10006ff8e;
                    LAB_10006f99f:
                        if (iVar5 == 3) {
                            local_1d8.field_32._0_4_ = 4;
                            new (&local_d0) rs2lib::CoordGrid(local_50->field_51984, (int)local_40, local_34);
                            clientObjs = (list<shared_ptr<ClientObj>>*)local_50->GetObjectsOnTile(local_d0);
                            local_218 = eastl::list<shared_ptr<ClientObj>>(*clientObjs);
                            local_238 = local_218.begin();
                            local_230 = local_218.end();
                            while (true) {
                                cVar2 = local_238 != local_230;
                                if (!cVar2)
                                    break;
                                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)*local_238;
                                bVar3 = *midiPlayerMainThread != nullptr;
                                if (bVar3) {
                                    this_04 = (ClientObj*)**midiPlayerMainThread;
                                    local_68 = configdecoder::ObjType::List(*(int*)&this_04->field_24);
                                    local_1d8.field_40 = dash3d::MousePickingHelper::GetPackedTypeCode(
                                        (int)local_40, local_34, local_50->field_51984, 3, false,
                                        *(int*)&this_04->field_24);
                                    local_1d8.field_48._4_4_ = *(uint32_t*)&this_04->field_24;
                                    local_1d8.field_48._0_4_ = *(uint32_t*)&this_04->field_28;
                                    if (local_50->field_52352 == 1) {
                                        local_168 + *local_128;
                                        local_188 + local_168;
                                        local_f0 + local_188;
                                        local_148 = StringConstants::TAG_COLOUR(16748608);
                                        local_a8 + local_f0;
                                        local_68.operator->();
                                        local_d0 + local_a8;
                                        local_1d8 = &local_d0;
                                        AddEntry(*((eastl::string*)&constants::text::use), local_1d8, 16, false,
                                                 *(int*)&this_04->field_24, (int)local_40, local_34, 0);
                                    } else if (m_targetMode == false) {
                                        lVar9 = local_68.operator->();
                                        local_a8 = StringConstants::TAG_COLOUR(16748608);
                                        local_68.operator->();
                                        local_d0 + local_a8;
                                        local_1d8 = &local_d0;
                                        pvVar21 =
                                            (vector<int,
                                                    eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(lVar9 +
                                                                                                               224);
                                        uVar20 = 4;
                                        lVar9 = -5;
                                        do {
                                            cVar2 = this_04->IsOpEnabled((int)uVar20);
                                            if (cVar2) {
                                                cVar2 = pvVar21->empty();
                                                if (!cVar2) {
                                                    pbVar16 = (eastl::string*)(*pvVar21)[uVar20];
                                                    bVar3 = *pbVar16 != (*((value_type*)""));
                                                    if (bVar3) {
                                                        pbVar16 = (eastl::string*)(*pvVar21)[uVar20];
                                                        pVVar17 = (Value*)(*local_228)[uVar20];
                                                        AddEntry(*pbVar16, local_1d8, *pVVar17, false,
                                                                 *(int*)&this_04->field_24, (int)local_40, local_34, 0);
                                                        goto LAB_10006fe10;
                                                    }
                                                }
                                                if (lVar9 == -3) {
                                                    AddEntry(*((eastl::string*)&constants::text::take), local_1d8, 20,
                                                             false, *(int*)&this_04->field_24, (int)local_40, local_34,
                                                             0);
                                                }
                                            }
                                        LAB_10006fe10:
                                            uVar20 = uVar20 - 1;
                                            lVar9 = lVar9 + 1;
                                        } while (lVar9 != 0);
                                        pLVar8 = (Layout*)(*local_120)[2];
                                        lVar9 = pLVar8->HeapBeginPtr();
                                        lVar18 = pLVar8->end();
                                        this = this;
                                        for (; lVar9 != lVar18; lVar9 = lVar9 + 48) {
                                            AddEntry(*((lVar9 + 8)), local_1d8, 1852, false, 0, *(int*)(lVar9 + 40), 0,
                                                     4);
                                        }
                                        AddEntry(*((eastl::string*)&constants::text::examine), local_1d8, 1004, false,
                                                 *(int*)&this_04->field_24, (int)local_40, local_34, 0);
                                    } else if ((field_136 & 1) != 0) {
                                        local_168 + *local_110;
                                        local_188 + local_168;
                                        local_f0 + local_188;
                                        local_148 = StringConstants::TAG_COLOUR(16748608);
                                        local_a8 + local_f0;
                                        local_68.operator->();
                                        local_d0 + local_a8;
                                        local_1d8 = &local_d0;
                                        AddEntry(*local_108, local_1d8, 17, false, *(int*)&this_04->field_24,
                                                 (int)local_40, local_34, 0);
                                    }
                                }
                                ++local_238;
                            }
                        }
                    } else {
                        if (iVar5 == 1) {
                            clientNpc = (ClientNpc*)local_50->GetClientNpc(iVar4);
                            if (clientNpc == nullptr)
                                goto LAB_10006ff8e;
                            lVar9 = clientNpc->field_1024.operator->();
                            if (((*(int*)(lVar9 + 40) == 1) && ((clientNpc->field_24 & 127U) == 64)) &&
                                ((clientNpc->field_28 & 127U) == 64)) {
                                AddNpcOptionsOnSameTile(clientNpc, (int)local_40, local_34);
                                AddPlayerOptionsOnSameTile(clientNpc, (int)local_40, local_34);
                            }
                            AddNpcOptions(clientNpc, iVar4, (int)local_40, local_34);
                            goto LAB_10006f99f;
                        }
                        if (iVar5 != 2)
                            goto LAB_10006f99f;
                        local_1d8.field_32._0_4_ = 3;
                        cVar2 = local_50->IsLocOnPlayersLevel((int)local_40, local_34, local_88);
                        if (!cVar2)
                            goto LAB_10006f99f;
                        psVar12 = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(iVar4);
                        local_68 = shared_ptr(psVar12);
                        lVar9 = local_68.operator->();
                        cVar2 = ((lVar9 + 488))->empty();
                        if (!cVar2) {
                            this_03 = (LocType*)local_68.operator->();
                            locType = (shared_ptr<configdecoder::LocType>*)this_03->GetMultiLoc();
                            local_68 = *locType;
                        }
                        bVar3 = local_68 == nullptr;
                        if (bVar3) {
                        } else {
                            local_41 = bVar3;
                            local_218.FindLocChange((int)local_50, local_50->field_51984, (int)local_40, local_34);
                            if (local_50->field_52352 == 1) {
                                local_168 + *local_128;
                                local_188 + local_168;
                                local_f0 + local_188;
                                local_148 = StringConstants::TAG_COLOUR(65535);
                                local_a8 + local_f0;
                                local_68.operator->();
                                local_d0 + local_a8;
                                local_1d8 = &local_d0;
                                AddEntry(*((eastl::string*)&constants::text::use), local_1d8, 1, false, iVar4,
                                         (int)local_40, local_34, 0);
                            } else if (m_targetMode == false) {
                                lVar9 = local_68.operator->();
                                local_a8 = StringConstants::TAG_COLOUR(65535);
                                local_68.operator->();
                                local_d0 + local_a8;
                                local_7c = iVar4;
                                local_1d8 = &local_d0;
                                pvVar21 =
                                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(lVar9 +
                                                                                                            232);
                                cVar2 = pvVar21->empty();
                                if (!cVar2) {
                                    uVar20 = 4;
                                    do {
                                        if ((local_218.field_56 == '\0') ||
                                            (cVar2 = local_218.IsOpEnabled((int)uVar20), cVar2)) {
                                            cVar2 =
                                                ((basic_string<char,
                                                               eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul,
                                                                                             true>>*)(*pvVar21)[uVar20])
                                                    ->empty();
                                            if (!cVar2) {
                                                pbVar16 = (eastl::string*)(*pvVar21)[uVar20];
                                                pVVar17 = (Value*)(*local_220)[uVar20];
                                                AddEntry(*pbVar16, local_1d8, *pVVar17, false, local_7c, (int)local_40,
                                                         local_34, 0);
                                            }
                                        }
                                        bVar3 = uVar20 != 0;
                                        uVar20 = uVar20 - 1;
                                    } while (bVar3);
                                }
                                pCVar1 = local_50;
                                new (&local_d0) rs2lib::CoordGrid(local_50->field_51984, (int)local_40, local_34);
                                local_a8 = pCVar1->WorldCoordFromBuildCoord(local_d0);
                                local_c8 = local_a0;
                                local_d0 = local_a8;
                                iVar4 = local_d0.ToBitPacked();
                                pLVar8 = (Layout*)(*local_120)[1];
                                lVar9 = pLVar8->HeapBeginPtr();
                                lVar18 = pLVar8->end();
                                for (; lVar9 != lVar18; lVar9 = lVar9 + 48) {
                                    AddEntry(*((lVar9 + 8)), local_1d8, 1851, false, local_7c, *(int*)(lVar9 + 40),
                                             iVar4, 4);
                                }
                                piVar13 = (int*)local_68.operator->();
                                AddEntry(*((eastl::string*)&constants::text::examine), local_1d8, 1002, false, *piVar13,
                                         (int)local_40, local_34, 0);
                            } else if ((field_136 & 4) != 0) {
                                local_168 + *local_110;
                                local_188 + local_168;
                                local_f0 + local_188;
                                local_148 = StringConstants::TAG_COLOUR(65535);
                                local_a8 + local_f0;
                                local_68.operator->();
                                local_d0 + local_a8;
                                local_1d8 = &local_d0;
                                AddEntry(*local_108, local_1d8, 2, false, iVar4, (int)local_40, local_34, 0);
                            }
                            if (local_41 == '\0')
                                goto LAB_10006f99f;
                        }
                    }
                LAB_10006ff8e:
                    local_54 = local_54 + 1;
                } else {
                    bVar3 = false;
                    do {
                        plVar19 = plVar10 + 1;
                        if (*plVar10 == local_88) {
                            this_02 = logger::default_logger();
                            bVar3 = true;
                            this_02->Log(false, 3,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/minimenu/Minimenu.cpp",
                                         643, "Duplicate typecode found during minimenu generation: %lld", local_88);
                            break;
                        }
                        plVar10 = plVar19;
                    } while (plVar19 != plVar11);
                    if (!bVar3)
                        goto LAB_10006f29d;
                    local_54 = local_54 + 1;
                    this = this;
                }
            }
            Sort();
            lVar9 = local_100;
            if (local_100 != -1) {
                iVar4 = dash3d::MousePickingHelper::GetEntityXFromTypecode(local_100);
                iVar5 = dash3d::MousePickingHelper::GetEntityZFromTypecode(lVar9);
                iVar6 = local_50->GetPriorityPlayerId();
                psVar12 = (shared_ptr<dash3d::GroundDecor>*)(*local_118)[(long)iVar6];
                local_1d8 = shared_ptr(psVar12);
                pCVar15 = (ClientPlayer*)local_1d8.end();
                AddPlayerOptions(pCVar15, iVar6, iVar4, iVar5);
            }
        } else {
            field_0 = '\x01';
            field_1 = 0;
        }
    }

    // 0x1000703a0
    auto MinimenuSubject::CreateSubject(const eastl::string& str, MinimenuSubjType minimenuSubjType, long long arg3,
                                        int arg4, int arg5) {
        auto result;
        MinimenuSubject(&result);
        result = str;
        *(MinimenuSubjType*)(&result + 4) = minimenuSubjType;
        &result[5] = (ReturnValue)arg3;
        *(int*)(&result + 6) = arg4;
        *(int*) && result[6].field_4 = arg5;
        return result;
    }

    // 0x100070410
    void Minimenu::AddEntry(const eastl::string& str, const MinimenuSubject& minimenuSubject, MinimenuOps::Value value,
                            bool arg4, int arg5, int arg6, int arg7, int arg8) {
        MinimenuOp local_38;

        bool cVar1 = IsOpen();
        if (cVar1) {
            return;
        }
        auto puVar2 = field_8->GetOp(value);
        local_38[0].field_0 = *puVar2;
        cVar1 = CanAddOp(local_38);
        if (!cVar1) {
            return;
        }
        if ((arg4) || (cVar1 = IsOpDeprioritised(local_38), cVar1)) {
            value = value + 2000;
        }
        if ((long)m_numEntries < 500) {
            ((MinimenuEntry*)field_800[(long)m_numEntries])
                ->SetValues(str, minimenuSubject, arg6, arg7, value, arg5, arg8);
            m_numEntries = m_numEntries + 1;
        }
    }

    // 0x100070520
    void Minimenu::AddNpcOptionsOnSameTile(const ClientEntity* clientEntity, int arg2, int arg3) {
        int iVar2;
        ClientNpc* clientNpc;
        long lVar3;
        int arg1;

        auto this_00 = Client::Instance();
        int iVar1 = this_00->GetLastNpcNum();
        if (0 < iVar1) {
            arg1 = 0;
            do {
                iVar2 = this_00->GetLastNpcId(arg1);
                clientNpc = (ClientNpc*)this_00->GetClientNpc(iVar2);
                if ((clientNpc != nullptr) && (clientNpc != (ClientNpc*)clientEntity)) {
                    lVar3 = clientNpc->field_1024.operator->();
                    if ((*(int*)(lVar3 + 40) == 1) &&
                        ((clientNpc->field_24 == *(int*)&clientEntity->field_24 &&
                          (clientNpc->field_28 == *(int*)((long)&clientEntity->field_24 + 4))))) {
                        iVar2 = this_00->GetLastNpcId(arg1);
                        AddNpcOptions(clientNpc, iVar2, arg2, arg3);
                    }
                }
                arg1 = arg1 + 1;
            } while (iVar1 != arg1);
        }
    }

    // 0x1000705f0
    void Minimenu::AddPlayerOptionsOnSameTile(const ClientEntity* clientEntity, int arg2, int arg3) {
        Client* pCVar2;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        long lVar4;
        unsigned long uVar6;
        shared_ptr<RSevenDebugPresetProvider> local_50;

        unsigned long uVar5 = (unsigned long)ReceivePlayerPositions::m_lastNum;
        if (0 < (int)ReceivePlayerPositions::m_lastNum) {
            uVar6 = 0;
            do {
                pCVar2 = Client::Instance();
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)
                                  pCVar2->field_19216[(long)(int)(&ReceivePlayerPositions::m_lastID)[uVar6]];
                local_50 = shared_ptr(groundDecor);
                if (local_50 != nullptr) {
                    if ((ClientEntity*)local_50.end() != clientEntity) {
                        lVar4 = local_50.operator->();
                        if (*(int*)(lVar4 + 24) == *(int*)&clientEntity->field_24) {
                            lVar4 = local_50.operator->();
                            if (*(int*)(lVar4 + 28) == *(int*)((long)&clientEntity->field_24 + 4)) {
                                AddPlayerOptions((ClientPlayer*)local_50.end(),
                                                 (&ReceivePlayerPositions::m_lastID)[uVar6], arg2, arg3);
                            }
                        }
                    }
                }
                uVar6 = uVar6 + 1;
            } while (uVar5 != uVar6);
        }
    }

    // 0x100070700
    void Minimenu::AddNpcOptions(const ClientNpc* clientNpc, int arg2, int arg3, int arg4) {
        unsigned int uVar2;
        bool bVar6;
        uint32_t uVar7;
        int iVar8;
        Layout* this_00;
        long lVar11;
        eastl::string* pbVar12;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true>>* pbVar13;
        unsigned long uVar14;
        Value* pVVar15;
        unsigned long uVar16;
        eastl::string local_148;
        eastl::string local_128;
        eastl::string local_108;
        ReturnValue local_e8;
        unsigned int local_9c;
        ReturnValue local_98;
        array<MinimenuOps::Value, 5ul>* local_70;

        if (399 < m_numEntries) {
            return;
        }
        uint8_t* puVar1 = &clientNpc->field_1024;
        Minimenu* local_48 = this;
        auto local_40 = Client::Instance();
        auto pNVar9 = puVar1->end();
        long lVar10 = (*puVar1).operator->();
        bool cVar5 = ((lVar10 + 488))->empty();
        if (!cVar5) {
            pNVar9 = (NpcType*)(*puVar1).operator->();
            local_198 = pNVar9->GetMultiNpc();
            pNVar9 = (NpcType*)local_198.end();
        }
        Client* pCVar4 = local_40;
        if (pNVar9 == nullptr) {
            return;
        }
        if (pNVar9->field_520 == '\0') {
            return;
        }
        if ((pNVar9->field_522 != '\0') && (local_40->field_52468 != arg2)) {
            return;
        }
        NpcType* local_78 = pNVar9;
        long long arg3_00 =
            dash3d::MousePickingHelper::GetPackedTypeCode(arg3, arg4, local_40->field_51984, 1, false, arg2);
        eastl::string local_c0("");
        MinimenuSubject local_198 = MinimenuSubject::CreateSubject(local_c0, 2, arg3_00, 0, -1);
        shared_ptr<ClientPlayer>* local_c8 = (shared_ptr<ClientPlayer>*)&pCVar4->field_52016;
        lVar10 = (*local_c8).operator->();
        Minimenu* pMVar3 = local_48;
        pNVar9 = local_78;
        GetNpcOpBase(&local_c0, clientNpc, local_78, *(int*)(lVar10 + 1128));
        if ((pNVar9->field_522 != '\0') && (cVar5 = IsFollowerLowPriority(pMVar3), cVar5)) {
            local_98 = StringConstants::TAG_COLOUR(16776960);
            local_68 + local_98;
            local_198 = &local_68;
            AddEntry(pMVar3, (eastl::string*)&constants::text::examine, &local_198, 1003, false, arg2, arg3, arg4, 0);
        }
        if (local_40->field_52352 == 1) {
            local_108 + local_40->field_52368;
            local_128 + local_108;
            local_148 + local_128;
            local_e8 = StringConstants::TAG_COLOUR(16776960);
            local_98 + local_148;
            local_68 + local_98;
            local_198 = &local_68;
            AddEntry(pMVar3, (eastl::string*)&constants::text::use, &local_198, 7, false, arg2, arg3, arg4, 0);
        } else if (pMVar3->m_targetMode == false) {
            if (pNVar9->field_522 == '\0') {
                local_40 = (Client*)((unsigned long)local_40 & 18446744069414584320);
            } else {
                uVar7 = IsFollowerLowPriority(pMVar3);
                local_40 = (Client*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar7);
            }
            local_98 = StringConstants::TAG_COLOUR(16776960);
            local_68 + local_98;
            local_198 = &local_68;
            puVar1 = &pNVar9->field_256;
            cVar5 = puVar1->empty();
            if (!cVar5) {
                local_70 = (array<MinimenuOps::Value, 5ul>*)&local_48->field_504;
                uVar16 = 4;
                local_9c = (unsigned int)(uint8_t)local_40;
                do {
                    cVar5 = clientNpc->IsOpEnabled((int)uVar16);
                    if (cVar5) {
                        pbVar12 = (eastl::string*)(*puVar1)[uVar16];
                        bVar6 = *pbVar12 != (*((value_type*)""));
                        if (bVar6) {
                            pbVar13 =
                                (basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true>>*)(*puVar1)[uVar16];
                            iVar8 = pbVar13->comparei(*((eastl::string*)&constants::text::attack));
                            if (iVar8 != 0) {
                                pbVar12 = (eastl::string*)(*puVar1)[uVar16];
                                pVVar15 = (Value*)(*local_70)[uVar16];
                                AddEntry(local_48, pbVar12, &local_198, *pVVar15, (uint8_t)local_9c, arg2, arg3, arg4,
                                         0);
                            }
                        }
                    }
                    bVar6 = uVar16 != 0;
                    uVar16 = uVar16 - 1;
                } while (bVar6);
            }
            cVar5 = puVar1->empty();
            if (!cVar5) {
                local_70 = (array<MinimenuOps::Value, 5ul>*)&local_48->field_504;
                uVar16 = 4;
                do {
                    cVar5 = clientNpc->IsOpEnabled((int)uVar16);
                    if (cVar5) {
                        pbVar12 = (eastl::string*)(*puVar1)[uVar16];
                        bVar6 = *pbVar12 != (*((value_type*)""));
                        if (bVar6) {
                            pbVar13 =
                                (basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true>>*)(*puVar1)[uVar16];
                            iVar8 = pbVar13->comparei(*((eastl::string*)&constants::text::attack));
                            if (iVar8 == 0) {
                                uVar2 = local_48->m_attackPriorityNpc;
                                uVar14 = (unsigned long)uVar2;
                                if (uVar2 != 3) {
                                    if ((uVar2 == 1) ||
                                        ((uVar2 == 0 && (uVar2 = local_78->field_460, uVar14 = (*local_c8).operator->(),
                                                         *(int*)(uVar14 + 1128) < (int)uVar2)))) {
                                        local_40 =
                                            (Client*)(((uint64_t)local_40._4_4_ << 32) |
                                                      (uint32_t)((int)(((uint64_t)((int64_t)(uVar14 >> 8)) << 8) |
                                                                       (uint8_t)1)));
                                    }
                                    pbVar12 = (eastl::string*)(*puVar1)[uVar16];
                                    pVVar15 = (Value*)(*local_70)[uVar16];
                                    AddEntry(local_48, pbVar12, &local_198, *pVVar15, (bool)((uint8_t)local_40 & 1),
                                             arg2, arg3, arg4, 0);
                                }
                            }
                        }
                    }
                    bVar6 = uVar16 != 0;
                    uVar16 = uVar16 - 1;
                } while (bVar6);
            }
            pMVar3 = local_48;
            this_00 = &local_48->field_568[0];
            lVar10 = this_00->HeapBeginPtr();
            lVar11 = this_00->end();
            if (lVar10 != lVar11) {
                do {
                    AddEntry(pMVar3, (eastl::string*)(lVar10 + 8), &local_198, 1850, false, arg2, *(int*)(lVar10 + 40),
                             0, 4);
                    lVar10 = lVar10 + 48;
                } while (lVar10 != lVar11);
            }
            if ((local_78->field_522 == '\0') || (cVar5 = IsFollowerLowPriority(pMVar3), !cVar5)) {
                AddEntry(pMVar3, (eastl::string*)&constants::text::examine, &local_198, 1003, false, arg2, arg3, arg4,
                         0);
            }
        } else if ((pMVar3->field_136 & 2) != 0) {
            local_108 + pMVar3->field_176;
            local_128 + local_108;
            local_148 + local_128;
            local_e8 = StringConstants::TAG_COLOUR(16776960);
            local_98 + local_148;
            local_68 + local_98;
            local_198 = &local_68;
            AddEntry(pMVar3, (eastl::string*)&pMVar3->field_144, &local_198, 8, false, arg2, arg3, arg4, 0);
        }
    }

    // 0x100070ff0
    void Minimenu::AddPlayerOptions(ClientPlayer* clientPlayer, int arg2, int arg3, int arg4) {
        uint8_t* this_00;
        bool cVar1;
        int iVar2;
        long long arg3_00;
        DisplayName* pDVar5;
        uint8_t* puVar6;
        Value* pVVar7;
        eastl::string* pbVar8;
        long lVar9;
        Layout* this_01;
        long lVar10;
        unsigned long arg1;
        Minimenu* this_02;
        bool bVar11;
        uint8_t arg4_00;
        MinimenuSubject local_230;
        eastl::string local_1e0;
        ReturnValue local_1c0;
        eastl::string local_1a0;
        eastl::string local_180;
        eastl::string local_160;
        array<MinimenuOps::Value, 8ul>* local_140;
        array<bool, 8ul>* local_138;
        eastl::string local_130;
        eastl::string local_110;
        eastl::string local_f0;
        eastl::string local_d0;
        ReturnValue local_b0;
        ReturnValue local_90;

        auto pCVar3 = Client::Instance();
        shared_ptr<ClientPlayer>* local_70 = (shared_ptr<ClientPlayer>*)&pCVar3->field_52016;
        if ((((ClientPlayer*)local_70->end() != clientPlayer) && (cVar1 = clientPlayer->HasAppearance(), cVar1)) &&
            (m_numEntries < 400)) {
            arg3_00 = dash3d::MousePickingHelper::GetPackedTypeCode(arg3, arg4, pCVar3->field_51984, 0, false, arg2);
            local_130 = eastl::string("");
            local_230 = MinimenuSubject::CreateSubject(local_130, 6, arg3_00, 0, -1);
            local_130 = eastl::string();
            this_02 = this;
            if (*(int*)((long)&clientPlayer->field_1128 + 4) == 0) {
                local_68 = eastl::string();
                local_68.sprintf("%i", (unsigned long)*(unsigned int*)&clientPlayer->field_1128);
                pDVar5 = (DisplayName*)clientPlayer->field_992.operator->();
                pDVar5->GetDisplayName();
                local_1e0 + clientPlayer->field_1032;
                local_160 + local_1e0;
                iVar2 = *(int*)&clientPlayer->field_1128;
                lVar9 = (*local_70).operator->();
                CombatColourCode(&local_1c0, iVar2, *(int*)(lVar9 + 1128));
                local_180 + local_160;
                local_1a0 + local_180;
                local_b0 + local_1a0;
                local_d0 + local_b0;
                local_f0 + local_d0;
                local_110 + local_f0;
                local_90 + local_110;
                local_130 = &local_90;
                pbVar8 = &local_1e0;
            } else {
                local_68 = eastl::string();
                local_68.sprintf("%i", (unsigned long)*(unsigned int*)((long)&clientPlayer->field_1128 + 4));
                pDVar5 = (DisplayName*)clientPlayer->field_992.operator->();
                pDVar5->GetDisplayName();
                local_160 + clientPlayer->field_1032;
                local_180 + local_160;
                local_1a0 + local_180;
                local_b0 + local_1a0;
                local_d0 + local_b0;
                local_f0 + local_d0;
                local_110 + local_f0;
                local_90 + local_110;
                local_130 = &local_90;
                pbVar8 = &local_160;
            }
            pbVar8->~basic_string();
            if (pCVar3->field_52352 == 1) {
                local_d0 + pCVar3->field_52368;
                local_f0 + local_d0;
                local_110 + local_f0;
                local_b0 = StringConstants::TAG_COLOUR(16777215);
                local_90 + local_110;
                local_68 + local_90;
                local_230 = &local_68;
                AddEntry(this_02, (eastl::string*)&constants::text::use, &local_230, 14, false, arg2, arg3, arg4, 0);
            } else if (this_02->m_targetMode == false) {
                local_90 = StringConstants::TAG_COLOUR(16777215);
                local_68 + local_90;
                local_230 = &local_68;
                this_00 = &this_02->field_240;
                local_138 = (array<bool, 8ul>*)&this_02->field_496;
                local_140 = (array<MinimenuOps::Value, 8ul>*)&this_02->field_208;
                arg1 = 7;
                do {
                    pbVar8 = (eastl::string*)(*this_00)[arg1];
                    cVar1 = pbVar8->empty();
                    if (!cVar1) {
                        iVar2 = pbVar8->comparei(*((eastl::string*)&constants::text::attack));
                        if (iVar2 == 0) {
                            iVar2 = m_attackPriorityPlayer;
                            if (iVar2 == 3)
                                goto LAB_100071784;
                            if ((iVar2 == 1) ||
                                ((iVar2 == 0 && (iVar2 = *(int*)&clientPlayer->field_1128,
                                                 lVar9 = (*local_70).operator->(), *(int*)(lVar9 + 1128) < iVar2)))) {
                                arg4_00 = true;
                            } else {
                                arg4_00 = false;
                            }
                            lVar9 = (*local_70).operator->();
                            if ((*(int*)(lVar9 + 1196) == 0) || (clientPlayer->field_1196 == 0)) {
                                if ((m_attackPriorityPlayer == 4) && (cVar1 = clientPlayer->IsGroup(), cVar1)) {
                                    arg4_00 = true;
                                }
                            } else {
                                lVar9 = (*local_70).operator->();
                                arg4_00 = *(int*)(lVar9 + 1196) == clientPlayer->field_1196;
                            }
                        } else {
                            puVar6 = (uint8_t*)(*local_138)[arg1];
                            arg4_00 = *puVar6;
                        }
                        pVVar7 = (Value*)(*local_140)[arg1];
                        AddEntry(this, pbVar8, &local_230, *pVVar7, (bool)arg4_00, arg2, arg3, arg4, 0);
                    }
                LAB_100071784:
                    this_02 = this;
                    bVar11 = arg1 != 0;
                    arg1 = arg1 - 1;
                } while (bVar11);
                this_01 = &field_568[3];
                lVar9 = this_01->HeapBeginPtr();
                lVar10 = this_01->end();
                if (lVar9 != lVar10) {
                    do {
                        AddEntry(this_02, (eastl::string*)(lVar9 + 8), &local_230, 1853, false, arg2,
                                 *(int*)(lVar9 + 40), 0, 4);
                        lVar9 = lVar9 + 48;
                    } while (lVar9 != lVar10);
                }
            } else if ((this_02->field_136 & 8) != 0) {
                local_d0 + this_02->field_176;
                local_f0 + local_d0;
                local_110 + local_f0;
                local_b0 = StringConstants::TAG_COLOUR(16777215);
                local_90 + local_110;
                local_68 + local_90;
                local_230 = &local_68;
                AddEntry(this_02, (eastl::string*)&this_02->field_144, &local_230, 15, false, arg2, arg3, arg4, 0);
            }
            UpdateWalkSubject(this_02, &local_130);
        }
    }

    // 0x100071bb0
    unsigned long Minimenu::IsPropertyAddable(OpProperty opProperty) {
        unsigned int uVar1;
        uint64_t unaff_RBX;

        unsigned int* puVar2 = &field_68944[(long)(int)opProperty];
        if (3 < *puVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "minimenu/Minimenu.cpp",
                            889, nullptr);
        }
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        switch (*puVar2) {
        case 1:
            uVar3 = 0;
            break;
        case 2:
            uVar1 = IsShiftDown();
            uVar3 = (unsigned long)uVar1;
            break;
        case 3:
            uVar1 = IsShiftDown();
            uVar3 = (unsigned long)uVar1 ^ 1;
        }
        return uVar3 & 4294967295;
    }

    // 0x100071c40
    bool Minimenu::IsShiftDown() {
        if (m_simulatedShiftActive == false) {
            return Client::Instance()->field_8496.KeyHeld(81);
        }
        return 1;
    }

    // 0x100071c70
    unsigned long Minimenu::IsPropertyBlocked(OpProperty opProperty) {
        unsigned int uVar1;
        uint64_t unaff_RBX;

        unsigned int* puVar2 = &field_68984[(long)(int)opProperty];
        if (3 < *puVar2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "minimenu/Minimenu.cpp",
                            908, nullptr);
        }
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        switch (*puVar2) {
        case 1:
            uVar3 = 0;
            break;
        case 2:
            uVar1 = IsShiftDown();
            uVar3 = (unsigned long)uVar1;
            break;
        case 3:
            uVar1 = IsShiftDown();
            uVar3 = (unsigned long)uVar1 ^ 1;
        }
        return uVar3 & 4294967295;
    }

    // 0x100071d00
    long Minimenu::CanAddOp(const MinimenuOp& minimenuOp) {
        bool cVar1;

        OpProperty opProperty = 0;
        long lVar2 = 0;
        do {
            cVar1 = minimenuOp.HasProperty(opProperty);
            if (cVar1) {
                cVar1 = IsPropertyBlocked(opProperty);
                if (cVar1) {
                    return 0;
                }
                if ((lVar2 == 0) && (cVar1 = IsPropertyAddable(opProperty), cVar1)) {
                    lVar2 = 1;
                }
            }
            opProperty = opProperty + 1;
        } while (opProperty != 10);
        return lVar2;
    }

    // 0x100071da0
    unsigned long Minimenu::IsOpDeprioritised(const MinimenuOp& minimenuOp) {
        int iVar1;
        bool cVar2;
        int* piVar3;

        bool bVar4 = true;
        unsigned long arg1 = 0;
        do {
            cVar2 = minimenuOp.HasProperty((OpProperty)arg1);
            if (cVar2) {
                piVar3 = &field_69024[arg1];
                iVar1 = *piVar3;
                if (iVar1 == 2) {
                    cVar2 = IsShiftDown();
                    if (cVar2)
                        break;
                } else if (iVar1 == 3) {
                    cVar2 = IsShiftDown();
                    if (!cVar2)
                        break;
                } else if (iVar1 == 1)
                    break;
            }
            bVar4 = arg1 < 9;
            arg1 = arg1 + 1;
        } while (arg1 != 10);
        return bVar4 & 4294967295;
    }

    // 0x100071e60
    void MinimenuEntry::SetValues(const eastl::string& str, const MinimenuSubject& minimenuSubject, int arg3, int arg4,
                                  int arg5, int arg6, int arg7) {
        field_24 = str;
        field_56 = minimenuSubject;
        field_0 = arg3;
        m_z = arg4;
        field_8 = arg5;
        field_12 = arg6;
        field_16 = arg7;
    }

    // 0x100071ec0
    void Minimenu::AddGlobalEntry(int arg1, const eastl::string& str, int arg3,
                                  Minimenu3DSubjectType minimenu3DSubjectType) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 = &field_568[(long)(int)minimenu3DSubjectType];
        long lVar1 = eastl::vector_map<int, MinimenuGlobalEntryData>::find(*this_00);
        long lVar2 = this_00->end();
        if (lVar1 != lVar2) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/minimenu/"
                      "Minimenu.cpp",
                      996, "Global minimenu entry already exists with key %d for type %d", arg1, minimenu3DSubjectType);
        }
        eastl::string local_60(str);
        int local_40 = arg3;
        GameTokenResult* this_02 = (GameTokenResult*)(*this_00)[arg1];
        *this_02 = local_60;
    }

    // 0x1000720d0
    void Minimenu::RemoveGlobalEntry(int arg1, Minimenu3DSubjectType minimenu3DSubjectType) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 = &field_568[(long)(int)minimenu3DSubjectType];
        long lVar1 = eastl::vector_map<int, MinimenuGlobalEntryData>::find(*this_00);
        long lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/minimenu/"
                      "Minimenu.cpp",
                      1004, "Trying to remove non-existant global minimenu entry with key %d for type %d",
                      (unsigned long)(unsigned int)arg1, (unsigned long)minimenu3DSubjectType);
        }
        eastl::vector_map<int, MinimenuGlobalEntryData>::erase(*this_00);
    }

    // 0x1000721a0
    void Minimenu::AddComponent(const shared_ptr<rs2lib::IfType>& ifType) {
        uint8_t bVar1;
        int arg6;
        bool cVar2;
        int iVar4;
        long lVar6;
        unsigned int arg5;
        unsigned int arg2;
        eastl::string local_110;
        ReturnValue local_a0;
        Client* local_60;
        ReturnValue local_58;

        Minimenu* local_38 = this;
        auto this_00 = Client::Instance();
        Client* pCVar8 = &local_58;
        new (pCVar8) eastl::string("");
        MinimenuSubject local_f0 = MinimenuSubject::CreateComponentSubject(*pCVar8, ifType);
        long lVar5 = ifType.operator->();
        if (*(int*)(lVar5 + 16) == 1) {
            lVar5 = ifType.operator->();
            lVar6 = ifType.operator->();
            pCVar8 = (Client*)(lVar5 + 1904);
            AddEntry(local_38, (eastl::string*)pCVar8, &local_f0, 24, false, 0, 0, *(int*)(lVar6 + 4), 0);
        }
        lVar5 = ifType.operator->();
        if ((*(int*)(lVar5 + 16) == 2) && (local_38->m_targetMode == false)) {
            pCVar8 = this_00;
            local_58 = this_00->TargetVerb(ifType);
            cVar2 = local_58.empty();
            if (!cVar2) {
                local_a0 = StringConstants::TAG_COLOUR(65280);
                ifType.operator->();
                local_80 + local_a0;
                local_f0 = &local_80;
                lVar5 = ifType.operator->();
                pCVar8 = &local_58;
                AddEntry(local_38, (eastl::string*)pCVar8, &local_f0, 25, false, 0, -1, *(int*)(lVar5 + 4), 0);
            }
        }
        lVar5 = ifType.operator->();
        if (*(int*)(lVar5 + 16) == 3) {
            lVar5 = ifType.operator->();
            pCVar8 = (Client*)&constants::text::close;
            AddEntry(local_38, (eastl::string*)&constants::text::close, &local_f0, 26, false, 0, 0, *(int*)(lVar5 + 4),
                     0);
        }
        lVar5 = ifType.operator->();
        if (*(int*)(lVar5 + 16) == 4) {
            lVar5 = ifType.operator->();
            lVar6 = ifType.operator->();
            pCVar8 = (Client*)(lVar5 + 1904);
            AddEntry(local_38, (eastl::string*)pCVar8, &local_f0, 28, false, 0, 0, *(int*)(lVar6 + 4), 0);
        }
        lVar5 = ifType.operator->();
        if (*(int*)(lVar5 + 16) == 5) {
            lVar5 = ifType.operator->();
            lVar6 = ifType.operator->();
            pCVar8 = (Client*)(lVar5 + 1904);
            AddEntry(local_38, (eastl::string*)pCVar8, &local_f0, 29, false, 0, 0, *(int*)(lVar6 + 4), 0);
        }
        lVar5 = ifType.operator->();
        if (*(int*)(lVar5 + 16) == 6) {
            pCVar8 = nullptr;
            if (this_00->field_52424 == nullptr) {
                lVar5 = ifType.operator->();
                lVar6 = ifType.operator->();
                pCVar8 = (Client*)(lVar5 + 1904);
                AddEntry(local_38, (eastl::string*)pCVar8, &local_f0, 30, false, 0, -1, *(int*)(lVar6 + 4), 0);
            }
        }
        auto pcVar7 = ifType.operator->();
        if (*pcVar7 != '\0') {
            if (local_38->m_targetMode == false) {
                arg5 = 10;
                local_60 = this_00;
                do {
                    arg2 = arg5 - 1;
                    GetIftypeOpName(&local_58, (Minimenu*)pCVar8, ifType, arg2);
                    cVar2 = local_58.empty();
                    if (!cVar2) {
                        lVar5 = ifType.operator->();
                        local_f0 = ((lVar5 + 704));
                        lVar5 = ifType.operator->();
                        iVar4 = *(int*)(lVar5 + 8);
                        lVar5 = ifType.operator->();
                        pCVar8 = &local_58;
                        AddEntry(local_38, &local_58, &local_f0, 1007, false, arg5, iVar4, *(int*)(lVar5 + 4), 0);
                    }
                    arg5 = arg2;
                } while (5 < arg2);
                pCVar8 = local_60;
                local_58 = local_60->TargetVerb(ifType);
                cVar2 = local_58.empty();
                if (!cVar2) {
                    lVar5 = ifType.operator->();
                    local_f0 = ((lVar5 + 704));
                    lVar5 = ifType.operator->();
                    iVar4 = *(int*)(lVar5 + 8);
                    lVar5 = ifType.operator->();
                    pCVar8 = &local_58;
                    AddEntry(local_38, (eastl::string*)pCVar8, &local_f0, 25, false, 0, iVar4, *(int*)(lVar5 + 4), 0);
                }
                iVar4 = 5;
                do {
                    GetIftypeOpName(&local_80, (Minimenu*)pCVar8, ifType, iVar4 - 1);
                    cVar2 = local_80.empty();
                    if (!cVar2) {
                        lVar5 = ifType.operator->();
                        bVar1 = *(uint8_t*)(lVar5 + 2082);
                        lVar5 = ifType.operator->();
                        local_f0 = ((lVar5 + 704));
                        lVar5 = ifType.operator->();
                        arg6 = *(int*)(lVar5 + 8);
                        lVar5 = ifType.operator->();
                        pCVar8 = &local_80;
                        AddEntry(local_38, &local_80, &local_f0, 57, false, iVar4, arg6, *(int*)(lVar5 + 4),
                                 (unsigned int)bVar1 * 2);
                    }
                    iVar4 = iVar4 - 1;
                } while (iVar4 != 0);
                iVar4 = local_60->GetActive(ifType);
                cVar2 = rs2lib::ServerActive::PauseButton(iVar4);
                if (cVar2) {
                    lVar5 = ifType.operator->();
                    iVar4 = *(int*)(lVar5 + 8);
                    lVar5 = ifType.operator->();
                    AddEntry(local_38, (eastl::string*)&constants::text::continu, &local_f0, 30, false, 0, iVar4,
                             *(int*)(lVar5 + 4), 0);
                }
            } else {
                iVar4 = this_00->GetActive(ifType);
                cVar2 = rs2lib::ServerActive::IsUseTarget(iVar4);
                if ((cVar2) && ((local_38->field_136 & 32) != 0)) {
                    local_110 + local_38->field_176;
                    local_a0 + local_110;
                    local_80 + local_a0;
                    ifType.operator->();
                    local_58 + local_80;
                    local_f0 = &local_58;
                    lVar5 = ifType.operator->();
                    iVar4 = *(int*)(lVar5 + 8);
                    lVar5 = ifType.operator->();
                    AddEntry(local_38, (eastl::string*)&local_38->field_144, &local_f0, 58, false, 0, iVar4,
                             *(int*)(lVar5 + 4), 0);
                }
            }
        }
    }

    // 0x100072920
    auto MinimenuSubject::CreateComponentSubject(const eastl::string& str, const shared_ptr<rs2lib::IfType>& ifType) {
        auto result;
        int arg4;
        long lVar2;
        MinimenuSubject local_78;

        MinimenuSubject(&result);
        if (ifType != nullptr) {
            lVar2 = ifType.operator->();
            arg4 = *(int*)(lVar2 + 1988);
            lVar2 = ifType.operator->();
            CreateSubject((ReturnValue*)&local_78, str, 7, -1, arg4, *(int*)(lVar2 + 1984));
            operator=(&result, &local_78);
        } else {
            CreateSubject((ReturnValue*)&local_78, str, 7, -1, 0, -1);
            operator=(&result, &local_78);
        }
        ~MinimenuSubject(&local_78);
        (*((&result + 7))) = ifType;
        return result;
    }

    // 0x100072a20
    auto Minimenu::GetIftypeOpName(const shared_ptr<rs2lib::IfType>& ifType, int arg2) {
        long lVar3;
        eastl::string* pbVar4;

        int iVar2 = Client::Instance()->GetActive(ifType);
        bool cVar1 = rs2lib::ServerActive::HasOp(iVar2, arg2);
        if (!cVar1) {
            lVar3 = ifType.operator->();
            cVar1 = ((lVar3 + 1312))->empty();
            if (cVar1)
                goto LAB_100072ac5;
        }
        lVar3 = ifType.operator->();
        cVar1 = ((lVar3 + 736))->empty();
        if (!cVar1) {
            lVar3 = ifType.operator->();
            iVar2 = ((lVar3 + 736))->end();
            if (arg2 < iVar2) {
                lVar3 = ifType.operator->();
                cVar1 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*(
                             (lVar3 + 736)))[(unsigned long)arg2])
                            ->empty();
                if (!cVar1) {
                    lVar3 = ifType.operator->();
                    pbVar4 = (eastl::string*)(*((lVar3 + 736)))[(unsigned long)arg2];
                    local_50 = eastl::string(*pbVar4);
                    local_50.trim();
                    cVar1 = local_50.empty();
                    if (!cVar1) {
                        lVar3 = ifType.operator->();
                        pbVar4 = (eastl::string*)(*((lVar3 + 736)))[(unsigned long)arg2];
                        auto result(*pbVar4);
                    } else {
                        new (&result) eastl::string("");
                    }
                    return result;
                }
            }
        }
    LAB_100072ac5:
        new (&result) eastl::string("");
        return result;
    }

    // 0x100072bc0
    int Minimenu::GetNumEntries() {
        return m_numEntries;
    }

    // 0x100072bd0
    void Minimenu::StashEntry(int arg1) {
        MinimenuEntry* minimenuEntry;

        minimenuEntry = (MinimenuEntry*)field_800[(long)arg1];
        auto local_18 = std::make_unique<MinimenuEntry, MinimenuEntry&>(*minimenuEntry);
        m_stashedEntry = local_18;
    }

    // 0x100072cc0
    void Minimenu::ClearStashed() {
        m_stashedEntry.reset(nullptr);
    }

    // 0x100072d10
    void Minimenu::GetStashed() {
        get();
    }

    // 0x100072d40
    auto Minimenu::GetNpcOpBase(const ClientNpc& clientNpc, const configdecoder::NpcType& npcType, int arg3) {
        auto result;

        unsigned int arg2 = *(unsigned int*)&clientNpc.field_544;
        if (arg2 == 4294967295) {
            arg2 = npcType.field_460;
        }
        auto local_48 = clientNpc.GetDisplayName();
        GetNpcOpBase(&result, &local_48, arg2, arg3);
        return result;
    }

    // 0x100072db0
    bool Minimenu::IsFollowerLowPriority() {
        return m_followerLowPriority;
    }

    // 0x100072e60
    auto Minimenu::GetNpcOpBase(const eastl::string& str, int arg2, int arg3) {
        ReturnValue* returnValue;
        eastl::string local_110;
        ReturnValue local_f0;
        eastl::string local_d0;
        eastl::string local_b0;
        eastl::string local_90;
        eastl::string local_70;
        ReturnValue local_50;

        if (arg2 < 1) {
            auto result(str);
        } else {
            local_d0 = eastl::string();
            local_d0.sprintf("%d", (unsigned long)(unsigned int)arg2);
            if (arg3 == -1) {
                local_50 + str;
                local_70 + local_50;
                local_90 + local_70;
                local_b0 + local_90;
                result + local_b0;
                returnValue = &local_50;
            } else {
                CombatColourCode(&local_f0, arg2, arg3);
                local_110 + str;
                local_50 + local_110;
                local_70 + local_50;
                local_90 + local_70;
                local_b0 + local_90;
                result + local_b0;
                returnValue = &local_f0;
            }
            returnValue->~basic_string();
        }
        return result;
    }

    // 0x100073120
    auto Minimenu::GetNpcOpBase(const configdecoder::NpcType& npcType, int arg2) {
        auto result;
        GetNpcOpBase(&result, (eastl::string*)&npcType.field_8, npcType.field_460, arg2);
        return result;
    }

    // 0x100073150
    auto Minimenu::CombatColourCode(int arg1, int arg2) {
        int iVar1 = arg2 - arg1;
        int arg1_00 = 16711680;
        if (((-10 < iVar1) && (arg1_00 = 16723968, -7 < iVar1)) && (arg1_00 = 16740352, -4 < iVar1)) {
            if (iVar1 < 0) {
                arg1_00 = 16756736;
            } else {
                arg1_00 = 65280;
                if (((iVar1 < 10) && (arg1_00 = 4259584, iVar1 < 7)) &&
                    ((arg1_00 = 8453888, iVar1 < 4 && (arg1_00 = 16776960, 0 < iVar1)))) {
                    arg1_00 = 12648192;
                }
            }
        }
        auto result = StringConstants::TAG_COLOUR(arg1_00);
        return result;
    }

    // 0x1000731e0
    void Minimenu::UpdateWalkSubject(const eastl::string& str) {
        CommandLine* this_00;
        unsigned long arg1;
        ReturnValue local_70;
        eastl::string local_50;

        if (0 < m_numEntries) {
            arg1 = 0;
            do {
                this_00 = &field_800[arg1];
                if (this_00->GetPos() == 23) {
                    local_70 = StringConstants::TAG_COLOUR(16777215);
                    local_50 + local_70;
                    this_00->SetSubjectName(local_50);
                    return;
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)m_numEntries);
        }
    }

    // 0x1000732b0
    int Minimenu::GetDefaultClickIndex() const {
        int iVar1 = -1;
        if (0 < m_numEntries) {
            iVar1 = m_numEntries - 1;
        }
        return iVar1;
    }

    // 0x1000732d0
    void Minimenu::GetHoveredIndex() const {
        if (((m_open == '\0') || ((int)field_788 < 0)) || (m_numEntries <= (int)field_788)) {
            GetDefaultClickIndex();
        }
    }

    // 0x100073300
    bool Minimenu::IsDefaultShiftClickOption() {
        bool cVar1;

        if (((0 < m_numEntries) && (m_shiftClickEnabled != false)) && (cVar1 = IsShiftDown(), cVar1)) {
            cVar1 = ((MinimenuEntry*)field_800[(long)m_numEntries - 1])->IsShiftClickable();
            if (cVar1) {
                return 1;
            }
        }
        return 0;
    }

    // 0x100073370
    bool Minimenu::IsDefaultIgnoreSingleClickOption() {
        if (m_numEntries < 1) {
            return 0;
        }
        return ((MinimenuEntry*)field_800[(unsigned long)(m_numEntries - 1)])->IgnoreSingleClickMode();
    }

    // 0x1000733b0
    void Minimenu::SwapEntries(int arg1, int arg2) {
        MinimenuEntry* minimenuEntry;
        MinimenuEntry* minimenuEntry_00;

        MinimenuEntry local_b0;
        minimenuEntry = (MinimenuEntry*)field_800[(long)arg1];
        local_b0.CopyValues(*minimenuEntry);
        minimenuEntry_00 = (MinimenuEntry*)field_800[(long)arg2];
        minimenuEntry->CopyValues(*minimenuEntry_00);
        minimenuEntry_00->CopyValues(local_b0);
    }

    // 0x100073460
    void Minimenu::Reset() {
        m_numEntries = 0;
        field_0 = '\0';
        Client::Instance()->field_8496.ResetDragAction();
        Close();
    }

    // 0x1000734a0
    void Minimenu::ResetMinimenu() {
        MinimenuEntry* this_00;
        MinimenuEntry* minimenuEntry;
        unique_ptr<MinimenuEntry>* this_01;
        MinimenuSubject local_88;
        eastl::string local_38;
        int local_2c[4];

        Reset();
        auto minimenuOp = field_8->GetOp(1006);
        if (CanAddOp(*minimenuOp) != '\0') {
            m_numEntries = 1;
            if (this == minimenuOp) {
                local_88.field_56._8_8_ = 0;
                local_88.field_56._16_8_ = 0;
                local_88.field_48 = 0;
                local_88.field_56._0_8_ = 0;
                local_88.field_32 = 0;
                local_88.field_40 = 0;
                local_88._16_8_ = 0;
                local_88._24_8_ = 0;
                local_88._0_8_ = 0;
                local_88._8_8_ = 0;
                local_88 = MinimenuSubject();
                local_2c[0] = -1;
                local_2c[1] = 4294967295;
                local_2c[2] = 1006;
                local_2c[3] = 4294967295;
                std::make_unique<MinimenuEntry, eastl::stringconst&, MinimenuSubject, int, int, MinimenuOps::Value, int,
                                 MinimenuEntryFlags>(local_38, local_88, *local_2c, *(local_2c + 1), *((local_2c + 2)),
                                                     *(local_2c + 3), 0);
                CANCEL_ENTRY = local_38;
            }
            this_01 = (unique_ptr<MinimenuEntry>*)&field_800;
            this_00 = (MinimenuEntry*)(*this_01)[0];
            minimenuEntry = (MinimenuEntry*)**this_01;
            this_00->CopyValues(*minimenuEntry);
        }
    }

    // 0x100073680
    void MinimenuEntry::CopyValues(const MinimenuEntry& minimenuEntry) {
        field_24 = &minimenuEntry.field_24;
        field_56 = minimenuEntry.field_56;
        field_0 = minimenuEntry.field_0;
        m_z = minimenuEntry.m_z;
        field_8 = minimenuEntry.field_8;
        field_12 = minimenuEntry.field_12;
        field_16 = minimenuEntry.field_16;
    }

    // 0x1000736f0
    void Minimenu::RemoveInterfaceEntries() {
        int iVar2;
        int arg2;
        int iVar3;

        if (0 < m_numEntries) {
            iVar3 = 0;
            do {
                iVar2 = ((CommandLine*)field_800[(long)iVar3])->GetPos();
                if (IsInterfaceEntry(iVar2) != '\0') {
                    iVar2 = iVar3;
                    if (iVar3 < m_numEntries - 1) {
                        do {
                            arg2 = iVar2 + 1;
                            SwapEntries(iVar2, arg2);
                            iVar2 = arg2;
                        } while (arg2 < m_numEntries - 1);
                    }
                    iVar3 = iVar3 - 1;
                    m_numEntries = m_numEntries - 1;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < m_numEntries);
        }
        RecalculateMinimenuDimensions();
    }

    // 0x1000737a0
    void Minimenu::IsInterfaceEntry(int arg1) {
        if ((((unsigned int)arg1 < 59) &&
             ((432345565334863872U >> ((unsigned long)(unsigned int)arg1 & 63) & 1) != 0)) ||
            (arg1 == 1007)) {
            return 1;
        }
        return 0;
    }

    // 0x1000737d0
    void Minimenu::RecalculateMinimenuDimensions() {
        unsigned int local_20[2];
        unsigned int local_18[2];

        local_20->XPlotBlender<int>(field_776 / 2 + field_768);
        local_18->XPlotBlender<int>(field_772);
        CalculateMinimenuDimensions((CoordType<UICoordSpecializer>*)(unsigned long)local_20[0],
                                    (CoordType<UICoordSpecializer>*)(unsigned long)local_18[0]);
    }

    // 0x100073830
    int Minimenu::GetAttackPriorityPlayer() {
        return m_attackPriorityPlayer;
    }

    // 0x100073840
    int Minimenu::GetAttackPriorityNpc() {
        return m_attackPriorityNpc;
    }

    // 0x100073850
    void Minimenu::SetAttackPriorityPlayer(int arg1) {
        m_attackPriorityPlayer = arg1;
    }

    // 0x100073860
    void Minimenu::SetAttackPriorityNpc(int arg1) {
        m_attackPriorityNpc = arg1;
    }

    // 0x100073870
    void Minimenu::SetFollowerLowPriority(bool arg1) {
        m_followerLowPriority = arg1;
    }

    // 0x100073880
    void Minimenu::SetShiftClickEnabled(bool arg1) {
        m_shiftClickEnabled = arg1;
    }

    // 0x100073890
    uint8_t Minimenu::InTouchMode() {
        return field_112;
    }

    // 0x1000738a0
    void Minimenu::SetSimulatedShiftActive(bool arg1) {
        m_simulatedShiftActive = arg1;
    }

    // 0x1000738b0
    bool Minimenu::GetSimulatedShiftActive() {
        return m_simulatedShiftActive;
    }

    // 0x1000738c0
    void Minimenu::SetFeedbackSprite(int arg1, bool arg2) {
        field_68924 = arg1;
        field_68920 = arg2;
        LoadPendingFeedback();
    }

    // 0x1000738e0
    void Minimenu::SetFeedbackShowPopupText(bool arg1) {
        m_feedbackShowPopupText = arg1;
    }

    // 0x1000738f0
    void Minimenu::SetStartHoverIndex(int arg1) {
        m_startHoverIndex = arg1;
    }

    // 0x100073900
    void Minimenu::SetDrawHeader(bool arg1) {
        uint32_t in_register_00000031;

        int iVar1 = (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1);
        field_69072 = iVar1;
        field_69064 = iVar1 * 2 + 1;
        field_69068 = iVar1 * 2 + 2;
    }

    // 0x100073930
    int Minimenu::CalculateMouseStartPosition() {
        unsigned int in_EAX;
        int iVar1;

        uint64_t uStack_18 = (unsigned long)in_EAX;
        auto piVar2 = std::clamp<int>(m_startHoverIndex, *((int*)((long)&uStack_18 + 4)), m_numEntries);
        if (*piVar2 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = *piVar2 * field_104 + field_104 / 2 + 3;
        }
        return iVar1;
    }

    // 0x100073980: MinimenuEntry::Z() const has the same machine code as jag::math::Rect<int>::MinY() const

    // 0x100073a30
    uint8_t* Minimenu::TestOps(const eastl::fixed_vector<eastl::string, 5ul>& strs) {
        eastl::string* pbVar2;
        eastl::string* str2;
        eastl::string local_50;

        unsigned long arg1 = 0;
        do {
            pbVar2 = &m_testOps[arg1];
            pbVar2->sprintf("%i: ", arg1 & 4294967295);
            if (!(strs.empty())) {
                if (!(((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)strs[arg1])
                          ->empty())) {
                    str2 = &m_testOps[arg1];
                    strs[arg1];
                    local_50 + *str2;
                    pbVar2 = &m_testOps[arg1];
                    *pbVar2 = &local_50;
                }
            }
            arg1 = arg1 + 1;
        } while (arg1 != 5);
        return &m_testOps;
    }

} // namespace jag::oldscape::minimenu

namespace jag::auth {
    // 0x1000720a0: GameTokenResult::operator=(GameTokenResult&&) has the same machine code as oldscape::minimenu::MinimenuGlobalEntryData::operator=(oldscape::minimenu::MinimenuGlobalEntryData&&)

} // namespace jag::auth
