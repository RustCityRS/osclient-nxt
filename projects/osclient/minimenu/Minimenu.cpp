// projects/osclient/minimenu/Minimenu.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Minimenu.h"
#include "libs/oldscape/clientlib/auth/GameToken.h"
#include "MinimenuEntry.h"

namespace jag::oldscape::minimenu {
    // 0x100f8a658, 200 bytes, __common; zero-initialised
    Minimenu::m_testOps;

    // 0x100f8a720, 8 bytes, __common; zero-initialised
    Minimenu::CANCEL_ENTRY;

    // 0x100f8a728, 8 bytes, __common; zero-initialised
    Minimenu::m_stashedEntry;

    // 0x10006cab0, 16 bytes, placed by class name and debug map
    // Minimenu::IsOpen()
    undefined1 Minimenu::IsOpen() {
        return m_open;
    }

    // 0x10006cc70, 1136 bytes, base-object constructor, placed by class name
    // Minimenu::Minimenu(jstring::PixfontGeneric&, shared_ptr<Array<graphics::Pix32, eastl::allocator> > const&, bool, jagex3::Js5&)
    void Minimenu::Minimenu(PixfontGeneric* param_1, shared_ptr* param_2, bool param_3, Js5* param_4) {
        undefined1* puVar1;
        undefined1* this_00;
        undefined4* puVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        int* piVar3;
        int iVar4;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        ulong uVar5;
        int local_34;

        field_0 = '\0';
        field_1 = 0;
        field_2 = 1;
        field_4 = 20;
        new (field_8) MinimenuOps();
        field_96 = param_1;
        field_112 = param_3;
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
        new (&field_568)
            std::array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>();
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
        eastl::destruct<highlight::NpcUID*>((eastl*)&field_68812, (NpcUID*)param_1, extraout_RDX);
        eastl::destruct<highlight::NpcUID*>((eastl*)field_68816, (NpcUID*)param_1, extraout_RDX_00);
        new ((field_68816 + 8)) eastl::string();
        new (&field_68856) eastl::string();
        this_00 = field_68904;
        new (this_00) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        m_feedbackSprite = -1;
        m_feedbackShowPopupText = false;
        field_68936 = param_4;
        field_69064 = 3;
        field_69068 = 4;
        field_69072 = 1;
        shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator=(
            (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)this_00, param_2);
        field_108 = field_96->field_8;
        puVar1 = &field_72;
        puVar2 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar1, 0);
        *puVar2 = 6116423;
        puVar2 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar1, 1);
        *puVar2 = 7169111;
        puVar2 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar1, 2);
        *puVar2 = 9274487;
        puVar1 = &field_84;
        puVar2 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar1, 0);
        *puVar2 = 6645125;
        puVar2 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar1, 1);
        *puVar2 = 5724019;
        puVar2 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar1, 2);
        *puVar2 = 8487326;
        field_64 = 72056494543077375;
        field_116 = 300;
        this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                      shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator->(
                          (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)this_00);
        local_34 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        piVar3 = std::max<int>(&local_34, &field_4);
        iVar4 = *piVar3;
        field_68892 = iVar4;
        field_68888 = iVar4;
        iVar4 = field_96->field_4;
        if (field_112 == false) {
            iVar4 = iVar4 + field_96->field_8 + -1;
        } else {
            iVar4 = iVar4 * 2;
        }
        field_104 = iVar4;
        puVar1 = &field_68944;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 7);
        *puVar2 = 0;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 1);
        *puVar2 = 0;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 2);
        *puVar2 = 0;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 3);
        *puVar2 = 0;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 4);
        *puVar2 = 0;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 5);
        *puVar2 = 2;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 6);
        *puVar2 = 0;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 8);
        *puVar2 = 0;
        uVar5 = 0;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 0);
        *puVar2 = 1;
        puVar2 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)puVar1, 9);
        *puVar2 = 0;
        do {
            puVar2 = (undefined4*)std::array<MinimenuEntryBlockMode, 10ul>::operator[](
                (array<MinimenuEntryBlockMode, 10ul>*)&field_68984, uVar5);
            *puVar2 = 1;
            puVar2 = (undefined4*)std::array<MinimenuEntryPriorityMode, 10ul>::operator[](
                (array<MinimenuEntryPriorityMode, 10ul>*)&field_69024, uVar5);
            *puVar2 = 0;
            uVar5 = uVar5 + 1;
        } while (uVar5 != 10);
    }

    // 0x10006d230, 16 bytes, complete-object constructor, placed by class name
    // Minimenu::Minimenu(jstring::PixfontGeneric&, shared_ptr<Array<graphics::Pix32, eastl::allocator> > const&, bool, jagex3::Js5&): jumps straight to the base-object constructor

    // 0x10006d240, 128 bytes, base-object destructor, placed by class name
    // Minimenu::~Minimenu()
    void Minimenu::~Minimenu() {
        field_68904->~shared_ptr();
        (&field_68856)->~basic_string();
        ((field_68816 + 8))->~basic_string();
        (&field_800)->~array();
        (&field_568)->~array();
        (&field_240)->~array();
        (&field_176)->~basic_string();
        (&field_144)->~basic_string();
        field_8->~MinimenuOps();
    }

    // 0x10006d2c0, 16 bytes, complete-object destructor, placed by class name
    // Minimenu::~Minimenu(): jumps straight to the base-object destructor

    // 0x10006d2d0, 112 bytes, placed by class name
    // Minimenu::GameLoop()
    void Minimenu::GameLoop() {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        AdvanceFeedback(this);
        if (this_00->field_8504 != 0) {
            if (field_0 != '\0') {
                return;
            }
            (&this_00->field_8496)->AdvanceBuildingMinimenuState();
        }
        Sort(this);
        if (this_00->DraggingInterface() == '\0') {
            if (m_open == '\0') {
                LoopClosedMouseMode(this);
            } else {
                LoopOpenMouseMode(this);
            }
        }
    }

    // 0x10006d340, 16 bytes, placed by class name
    // Minimenu::AdvanceFeedback()
    void Minimenu::AdvanceFeedback() {
        field_68888 = field_68888 + 1;
    }

    // 0x10006d350, 176 bytes, placed by class name
    // Minimenu::Sort()
    void Minimenu::Sort() {
        ulong uVar1;
        int iVar2;
        CommandLine* pCVar3;
        ulong uVar4;
        bool bVar5;

        do {
            bVar5 = true;
            if (1 < m_numEntries) {
                bVar5 = true;
                uVar4 = 0;
                do {
                    pCVar3 = (CommandLine*)std::array<MinimenuEntry, 500ul>::operator[](
                        (array<MinimenuEntry, 500ul>*)&field_800, uVar4);
                    uVar1 = uVar4 + 1;
                    iVar2 = pCVar3->GetPos();
                    if (iVar2 < 1000) {
                        pCVar3 = (CommandLine*)std::array<MinimenuEntry, 500ul>::operator[](
                            (array<MinimenuEntry, 500ul>*)&field_800, uVar1);
                        iVar2 = pCVar3->GetPos();
                        if (1000 < iVar2) {
                            SwapEntries(this, (int)uVar4, (int)uVar1);
                            bVar5 = false;
                        }
                    }
                    uVar4 = uVar1;
                } while ((long)uVar1 < (long)m_numEntries + -1);
            }
        } while (!bVar5);
    }

    // 0x10006d400, 128 bytes, placed by class name
    // Minimenu::LoopOpenMouseMode()
    void Minimenu::LoopOpenMouseMode() {
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        long lVar5;

        lVar5 = Client::Instance();
        iVar1 = *(int*)(lVar5 + 8504);
        puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](lVar5 + 8560);
        uVar2 = *puVar3;
        puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](lVar5 + 8576);
        if (iVar1 == 2) {
            ProcessClick(this, uVar2);
        } else {
            if (IsMouseFarFromMenu(this, uVar2, *puVar3) != '\0') {
                Close(this);
                DirtyArea(this);
            }
        }
    }

    // 0x10006d480, 432 bytes, placed by class name
    // Minimenu::LoopClosedMouseMode()
    void Minimenu::LoopClosedMouseMode() {
        char cVar1;
        int iVar2;
        int iVar3;
        Client* this_00;
        uint* puVar4;
        undefined4* puVar5;
        undefined8 uVar6;
        undefined1 local_48[16];
        CoordMapSquare local_38;

        this_00 = (Client*)Client::Instance();
        switch (this_00->field_8504) {
        case 0:
        case 17:
            goto switchD_10006d4bb_caseD_0;
        case 2:
            cVar1 = this_00->UsingOneButtonMouse();
            if ((((cVar1 == '\0') || (m_numEntries < 3)) || (cVar1 = IsDefaultShiftClickOption(this), cVar1 != '\0')) ||
                (cVar1 = IsDefaultIgnoreSingleClickOption(this), cVar1 != '\0')) {
                iVar2 = GetDefaultClickIndex(this);
                cVar1 = MenuOnly(this, iVar2);
                if (cVar1 == '\0')
                    break;
            }
            (&this_00->field_8496, 4)->SetCurrentAction();
            break;
        case 3:
            goto switchD_10006d4bb_caseD_3;
        }
        if (this_00->field_8504 - 4U < 2) {
            puVar4 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[]((ulong)&this_00->field_8560);
            local_38.m_x = *puVar4;
            puVar5 =
                (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[]((ulong)&this_00->field_8576);
            local_38._8_4_ = *puVar5;
            if (0 < m_numEntries) {
                Client::Instance();
                local_48->GetUISafeArea();
                iVar2 = local_38.GetX();
                iVar3 = local_38.field_8.GetX();
                cVar1 = local_48->IsInside(iVar2, iVar3);
                if (cVar1 != '\0') {
                    Open(this, local_38.m_x, local_38._8_4_);
                    return;
                }
            }
        switchD_10006d4bb_caseD_3:
            uVar6 = 17;
        } else {
            if (this_00->field_8504 != 2) {
                return;
            }
            if (0 < m_numEntries) {
                iVar2 = GetDefaultClickIndex(this);
                DoEntry(this, iVar2);
            }
            uVar6 = 3;
        }
        (&this_00->field_8496, uVar6)->SetCurrentAction();
    switchD_10006d4bb_caseD_0:
    }

    // 0x10006d630, 144 bytes, placed by class name
    // Minimenu::Open(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void Minimenu::Open(undefined4 param_2, undefined4 param_3) {
        GameOptions* this_00;
        Client* pCVar2;

        CalculateMinimenuDimensions();
        pCVar2 = (Client*)Client::Instance();
        pCVar2->RequestGroundCoordsForDeferredMove(param_2, param_3);
        m_open = 1;
        (&pCVar2->field_8496, 4)->SetCurrentAction();
        ScriptRunner::ExecuteScript(82, 4294967295, 4294967295, 500000);
        this_00 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&pCVar2->field_8384);
        if (this_00->GetHapticOnMinimenuOpen() != '\0') {
            pCVar2->Vibrate(4);
        }
    }

    // 0x10006d6c0, 496 bytes, placed by class name
    // Minimenu::CalculateMinimenuDimensions(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void Minimenu::CalculateMinimenuDimensions(uint param_2, undefined4 param_3) {
        int iVar1;
        PixfontGeneric* this_00;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        CoordMapSquare local_68[2];
        undefined1 local_48[16];
        ulong local_38;

        local_48._0_4_ = param_2;
        local_48._8_4_ = param_3;
        iVar2 = (field_96, (basic_string*)&constants::text::chooseoption)->StringWid();
        iVar3 = m_numEntries;
        if (0 < iVar3) {
            iVar7 = 0;
            do {
                this_00 = field_96;
                GetLine((Minimenu*)local_68, (int)this);
                iVar3 = this_00->StringWid(local_68);
                local_68->~basic_string();
                if (iVar2 < iVar3) {
                    iVar2 = iVar3;
                }
                iVar7 = iVar7 + 1;
                iVar3 = m_numEntries;
            } while (iVar7 < iVar3);
        }
        iVar7 = field_69072;
        uVar8 = iVar2 + field_108 * 2;
        iVar2 = field_104;
        iVar1 = field_69064;
        iVar4 = CalculateMouseStartPosition(this);
        iVar5 = local_48->GetX();
        iVar5 = iVar5 - (int)uVar8 / 2;
        local_38 = (ulong)uVar8;
        iVar6 = ((local_48 + 8))->GetX();
        iVar6 = iVar6 - iVar4;
        Client::Instance();
        local_68->GetUISafeArea();
        iVar4 = local_68->GetX();
        if (iVar5 < iVar4) {
            iVar5 = local_68->GetX();
        }
        iVar4 = local_68->GetZ();
        if (iVar6 < iVar4) {
            iVar6 = local_68->GetZ();
        }
        iVar7 = iVar1 + (iVar3 + iVar7) * iVar2 + 4;
        iVar3 = (int)local_38;
        iVar2 = local_68->Right();
        if (iVar2 <= iVar5 + iVar3) {
            iVar5 = local_68->Right();
            iVar5 = iVar5 - (int)local_38;
        }
        iVar3 = local_68->MaxZ();
        if (iVar3 <= iVar6 + iVar7) {
            iVar6 = local_68->MaxZ();
            iVar6 = iVar6 - iVar7;
        }
        iVar3 = local_68->GetZ();
        if (iVar3 <= iVar6) {
            iVar3 = local_68->MaxZ();
            if (iVar6 < iVar3)
                goto LAB_10006d85b;
        }
        iVar6 = local_68->GetZ();
    LAB_10006d85b:
        field_768 = iVar5;
        field_772 = iVar6;
        field_776 = (int)local_38;
        field_780 = iVar7;
    }

    // 0x10006d8f0, 208 bytes, placed by class name
    // Minimenu::ProcessClick(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void Minimenu::ProcessClick(undefined4 param_2, undefined4 param_3) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        if (m_open != '\0') {
            iVar2 = m_numEntries;
            if (0 < iVar2) {
                iVar3 = 0;
                iVar5 = -1;
                iVar4 = -1;
                do {
                    cVar1 = IsMouseOverEntry(this, param_2, param_3,
                                             field_69064 + field_772 + (iVar2 + field_69072 + iVar5) * field_104);
                    if (cVar1 != '\0') {
                        iVar4 = iVar3;
                        break;
                    }
                    iVar3 = iVar3 + 1;
                    iVar2 = m_numEntries;
                    iVar5 = iVar5 + -1;
                } while (iVar3 < iVar2);
                if (iVar4 != -1) {
                    DoEntry(this, iVar4);
                }
            }
            Close(this);
            DirtyArea(this);
        }
    }

    // 0x10006d9c0, 128 bytes, placed by class name
    // Minimenu::IsMouseOverEntry(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, int)
    bool Minimenu::IsMouseOverEntry(uint param_2, undefined4 param_3, int param_4) {
        bool bVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        CoordMapSquare local_38;

        local_38.m_x = param_2;
        local_38._8_4_ = param_3;
        iVar2 = local_38.GetX();
        iVar3 = local_38.field_8.GetX();
        lVar4 = Client::Instance();
        if ((*(int*)(lVar4 + 8504) == 4) || (iVar2 <= field_768)) {
            bVar1 = false;
        } else {
            bVar1 = false;
            if ((iVar2 < field_768 + field_776) && (param_4 <= iVar3)) {
                bVar1 = iVar3 < param_4 + field_104;
            }
        }
        return bVar1;
    }

    // 0x10006da40, 144 bytes, placed by class name
    // Minimenu::DoEntry(int)
    void Minimenu::DoEntry(int param_1) {
        long lVar1;
        long lVar2;
        undefined4* puVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;

        lVar1 = Client::Instance();
        if (-1 < param_1) {
            uVar6 = *(undefined4*)(lVar1 + 19056);
            uVar5 = *(undefined4*)(lVar1 + 19060);
            lVar2 = Client::Instance();
            if (*(char*)(lVar2 + 8425) != '\0') {
                puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](lVar1 + 8528);
                uVar6 = *puVar3;
                puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](lVar1 + 8544);
                uVar5 = *puVar3;
            }
            uVar4 =
                std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)&field_800, (long)param_1);
            DoAction(this, uVar4, uVar6, uVar5);
        }
    }

    // 0x10006dad0, 112 bytes, placed by class name
    // Minimenu::Close()
    void Minimenu::Close() {
        long lVar1;

        if (m_open != '\0') {
            m_open = 0;
            field_788 = 4294967295;
            lVar1 = Client::Instance();
            if ((*(int*)(lVar1 + 8504) != 12) || (*(char*)(lVar1 + 8425) != '\0')) {
                ((lVar1 + 8496))->SetCurrentAction(17);
                ScriptRunner::ExecuteScript(83, 4294967295, 4294967295, 500000);
            }
        }
    }

    // 0x10006db40, 64 bytes, placed by class name
    // Minimenu::DirtyArea()
    void Minimenu::DirtyArea() {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        this_00->DirtyArea(field_768, field_772, field_776, field_780);
    }

    // 0x10006db80, 336 bytes, placed by class name
    // Minimenu::DoAction(MinimenuEntry&, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void Minimenu::DoAction(Minimap* param_1, undefined4 param_3, undefined4 param_4) {
        basic_string* pbVar1;
        undefined8 uVar2;
        Client* pCVar3;
        MinimenuOp* pMVar4;
        long lVar5;
        int iVar10;
        undefined4 uVar11;
        eastl::string local_80[32];
        shared_ptr<RSevenDebugPresetProvider> local_60[16];
        undefined8 local_48;
        undefined4 local_38;
        undefined4 local_34;

        pbVar1 = (basic_string*)param_1->second();
        eastl::string::basic_string(local_80, pbVar1);
        uVar2 = param_1->GetLogStreams();
        local_38 = param_1->GetX();
        local_34 = param_1->GetZ();
        iVar10 = param_1->GetPos();
        uVar11 = param_1->GetLevel();
        local_60->GetComponent();
        pCVar3 = (Client*)Client::Instance();
        local_48 = uVar2;
        pCVar3->DoAction(local_38, local_34, iVar10, uVar11, local_80, uVar2, param_3, param_4, local_60);
        iVar10 = RemovePriorityModifier(iVar10);
        pMVar4 = (MinimenuOp*)(((Minimenu*)this)->field_8, iVar10)->GetOp();
        if (pMVar4->HasProperty(0) != '\0') {
            StartFeedback((Minimenu*)this, param_3, param_4, 1, local_48, local_80);
        }
        lVar5 = Client::Instance();
        ((lVar5 + 8496))->SetCurrentAction(17);
        local_60->~shared_ptr();
        eastl::string::~basic_string(local_80);
    }

    // 0x10006dcf0, 64 bytes, placed by class name
    // Minimenu::MenuOnly(int)
    bool Minimenu::MenuOnly(int param_1) {
        int iVar1;
        CommandLine* this_00;

        if (param_1 < 0) {
            return false;
        }
        this_00 = (CommandLine*)std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)&field_800,
                                                                             (long)param_1);
        iVar1 = this_00->GetPos();
        iVar1 = RemovePriorityModifier(iVar1);
        return iVar1 == 1007;
    }

    // 0x10006dd30, 32 bytes, placed by class name
    // Minimenu::RemovePriorityModifier(int)
    int Minimenu::RemovePriorityModifier(int param_1) {
        int iVar1;

        iVar1 = param_1 + -2000;
        if (param_1 < 2000) {
            iVar1 = param_1;
        }
        return iVar1;
    }

    // 0x10006dd50, 128 bytes, placed by class name
    // Minimenu::IsMouseFarFromMenu(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    undefined4 Minimenu::IsMouseFarFromMenu(uint param_2, undefined4 param_3) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        CoordMapSquare local_28;

        local_28.m_x = param_2;
        local_28._8_4_ = param_3;
        iVar1 = local_28.GetX();
        iVar2 = local_28.field_8.GetX();
        uVar3 = 0;
        if ((iVar1 != -1) && (iVar2 != -1)) {
            uVar3 = 1;
            if ((field_768 + -10 <= iVar1) && ((iVar1 <= field_768 + field_776 + 10 && (field_772 + -10 <= iVar2)))) {
                iVar1 = field_780 + field_772 + 10;
                uVar3 = CONCAT31((int3)((uint)iVar1 >> 8), iVar1 < iVar2);
            }
        }
        return uVar3;
    }

    // 0x10006ddd0, 112 bytes, placed by class name
    // Minimenu::ResetPlayerOpChoices()
    void Minimenu::ResetPlayerOpChoices() {
        eastl::string* this_00;
        undefined1* puVar1;
        ulong uVar2;

        uVar2 = 0;
        do {
            this_00 = (eastl::string*)std::array<eastl::string, 8ul>::operator[]((array<eastl::string, 8ul>*)&field_240,
                                                                                 uVar2);
            eastl::string::assign(this_00, "");
            puVar1 = (undefined1*)std::array<bool, 8ul>::operator[]((array<bool, 8ul>*)&field_496, uVar2);
            *puVar1 = 0;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
    }

    // 0x10006de60, 128 bytes, placed by class name
    // Minimenu::UpdatePlayerOpChoice(int, eastl::string const&, int)
    void Minimenu::UpdatePlayerOpChoice(int param_1, basic_string* param_2, int param_3) {
        eastl::string* this_00;
        undefined8 uVar1;
        int iVar2;
        uint uVar3;

        uVar3 = param_1 - 1;
        if (uVar3 < 8) {
            iVar2 = param_2->comparei("null");
            if (iVar2 == 0) {
                param_2 = (basic_string*)&eastl::EMPTY_STRING;
            }
            this_00 = (eastl::string*)std::array<eastl::string, 8ul>::operator[]((array<eastl::string, 8ul>*)&field_240,
                                                                                 (ulong)uVar3);
            eastl::string::operator=(this_00, param_2);
            uVar1 = std::array<bool, 8ul>::operator[]((array<bool, 8ul>*)&field_496, (ulong)uVar3);
            *(bool*)uVar1 = param_3 == 0;
        }
    }

    // 0x10006dee0, 288 bytes, placed by class name
    // Minimenu::OnMapRebuild(int, int)
    void Minimenu::OnMapRebuild(int param_1, int param_2) {
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        Mixer* this_00;
        longlong lVar6;
        ulong uVar7;
        CoordGrid local_60;
        longlong local_50;
        array<MinimenuEntry, 500ul>* local_48;

        if (0 < m_numEntries) {
            local_48 = (array<MinimenuEntry, 500ul>*)&field_800;
            uVar7 = 0;
            do {
                this_00 = (Mixer*)std::array<MinimenuEntry, 500ul>::operator[](local_48, uVar7);
                uVar2 = this_00->GetStreamCountLastMix();
                if ((uVar2 < 5) && ((26U >> (uVar2 & 31) & 1) != 0)) {
                    iVar3 = this_00->GetX();
                    iVar3 = iVar3 - param_1;
                    iVar4 = this_00->GetZ();
                    iVar4 = iVar4 - param_2;
                    local_50 = this_00->GetDataType();
                    iVar5 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(local_50);
                    new (&local_60) rs2lib::CoordGrid(iVar5, iVar3, iVar4);
                    if (ClientConstants::IsCoordInBuildArea(&local_60) != '\0') {
                        lVar6 =
                            dash3d::MousePickingHelper::OverwriteEntityCoordInTypecode(local_50, iVar5, iVar3, iVar4);
                        this_00->SetSubjectTypecode(lVar6);
                        new (this_00) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(iVar3);
                        this_00->SetZ(iVar4);
                    }
                }
                uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)((Minimenu*)this)->m_numEntries);
        }
    }

    // 0x10006e010, 272 bytes, placed by class name
    // Minimenu::EnterTargetMode(int, int, int, int)
    void Minimenu::EnterTargetMode(int param_1, int param_2, int param_3, int param_4) {
        char cVar2;
        shared_ptr* this_00;
        long lVar3;
        Client* this_01;
        undefined1 local_b8[132];

        this_00 = (shared_ptr*)rs2lib::IfType::Get(param_1, param_2);
        if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            cVar2 = ((lVar3 + 1072))->empty();
            if (cVar2 == '\0') {
                new (local_b8) HookReq();
                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_b8 + 32), this_00);
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_b8,
                                                            (Array*)(lVar3 + 1072));
                ScriptRunner::ExecuteScript((HookReq*)local_b8, 500000);
                local_b8->~HookReq();
            }
        }
        m_targetLinkObject = param_4;
        m_targetMode = true;
        m_targetComponent = param_1;
        m_targetSubinterfaceId = param_2;
        field_136 = param_3;
        this_01 = (Client*)Client::Instance();
        this_01->ComponentUpdated(this_00);
    }

    // 0x10006e120, 240 bytes, placed by class name
    // Minimenu::EndTargetMode()
    void Minimenu::EndTargetMode() {
        char cVar2;
        shared_ptr* this_00;
        long lVar3;
        Client* this_01;
        undefined1 local_98[128];

        if (m_targetMode != false) {
            this_00 = (shared_ptr*)rs2lib::IfType::Get(m_targetComponent, m_targetSubinterfaceId);
            if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                cVar2 = ((lVar3 + 1096))->empty();
                if (cVar2 == '\0') {
                    new (local_98) HookReq();
                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_98 + 32), this_00);
                    lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_98,
                                                                (Array*)(lVar3 + 1096));
                    ScriptRunner::ExecuteScript((HookReq*)local_98, 500000);
                    local_98->~HookReq();
                }
            }
            m_targetLinkObject = -1;
            m_targetMode = false;
            this_01 = (Client*)Client::Instance();
            this_01->ComponentUpdated(this_00);
        }
    }

    // 0x10006e210, 48 bytes, placed by class name
    // Minimenu::SetTargetStrings(eastl::string const&, eastl::string const&)
    void Minimenu::SetTargetStrings(basic_string* param_1, basic_string* param_2) {
        eastl::string::operator=((eastl::string*)&field_144, param_1);
        eastl::string::operator=((eastl::string*)&field_176, param_2);
    }

    // 0x10006e240, 16 bytes, placed by class name
    // Minimenu::GetTargetMode()
    undefined1 Minimenu::GetTargetMode() {
        return m_targetMode;
    }

    // 0x10006e250, 16 bytes, placed by class name
    // Minimenu::SetTargetMode(bool)
    void Minimenu::SetTargetMode(bool param_1) {
        m_targetMode = param_1;
    }

    // 0x10006e260, 16 bytes, placed by class name
    // Minimenu::GetTargetComponent()
    int Minimenu::GetTargetComponent() {
        return m_targetComponent;
    }

    // 0x10006e270, 16 bytes, placed by class name
    // Minimenu::GetTargetSubinterfaceId()
    int Minimenu::GetTargetSubinterfaceId() {
        return m_targetSubinterfaceId;
    }

    // 0x10006e280, 16 bytes, placed by class name
    // Minimenu::GetTargetLinkObject()
    int Minimenu::GetTargetLinkObject() {
        return m_targetLinkObject;
    }

    // 0x10006e290, 976 bytes, placed by class name
    // Minimenu::Draw(graphics::Pix2D&)
    void Minimenu::Draw(Pix2D* param_1) {
        int iVar1;
        int iVar2;
        Pix2D* pPVar3;
        Client* pCVar4;
        char cVar5;
        int iVar6;
        GameOptions* pGVar7;
        undefined4* puVar8;
        MinimenuEntry* this_00;
        ulong uVar9;
        uint uVar10;
        array<int, 3ul>* this_01;
        ulong uVar11;
        undefined1 local_a8[32];
        PixfontGeneric* local_88;
        array<int, 3ul>* local_80;
        Pix2D* local_78;
        array<MinimenuEntry, 500ul>* local_70;
        array<int, 3ul>* local_68;
        unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>* local_60;
        undefined4 local_58;
        undefined4 local_54;
        Client* local_50;
        PixfontGeneric* local_48;
        uint local_3c;
        uint local_38;
        int local_34;

        local_50 = (Client*)Client::Instance();
        local_34 = field_768;
        iVar6 = field_772;
        iVar1 = field_776;
        iVar2 = field_780;
        local_80 = (array<int, 3ul>*)&field_72;
        local_48 = (PixfontGeneric*)std::array<int, 3ul>::operator[](local_80, 0);
        (**(code**)(param_1->field_0 + 32))(param_1, local_34, iVar6, iVar1, iVar2, local_48->field_0);
        iVar6 = field_104 * field_69072;
        param_1->DrawRect(field_768 + 1, field_69064 + field_772 + iVar6, field_776 + -2,
                          field_780 - (iVar6 + field_69068), 4278190080);
        if (field_112 == false) {
            local_3c = 4294967295;
        } else {
            local_3c = ~field_96->field_16;
        }
        local_60 = (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&local_50->field_8384;
        pGVar7 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                local_60);
        cVar5 = pGVar7->GetDrawMinimenuHeader();
        if (cVar5 != '\0') {
            (**(code**)(param_1->field_0 + 32))(param_1, field_768 + 1, field_772 + 1, field_776 + -2, field_104 + 1,
                                                0);
            (field_96, (basic_string*)&constants::text::chooseoption, field_768 + 3, field_772 + local_3c + field_104,
             local_48->field_0, -1, param_1)
                ->DrawString();
        }
        pCVar4 = local_50;
        puVar8 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[]((ulong)&local_50->field_8560);
        local_58 = *puVar8;
        puVar8 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[]((ulong)&pCVar4->field_8576);
        if (m_numEntries < 1) {
            local_38 = 0;
        } else {
            local_54 = *puVar8;
            local_70 = (array<MinimenuEntry, 500ul>*)&field_800;
            local_68 = (array<int, 3ul>*)&field_84;
            iVar6 = -1;
            uVar11 = 0;
            local_38 = 0;
            local_78 = param_1;
            do {
                this_00 = (MinimenuEntry*)std::array<MinimenuEntry, 500ul>::operator[](local_70, uVar11);
                cVar5 = this_00->IsGlobalEntry();
                this_01 = local_80;
                if (cVar5 != '\0') {
                    this_01 = local_68;
                }
                uVar10 = field_69064 + field_772 + (field_69072 + m_numEntries + iVar6) * field_104;
                uVar9 = (ulong)uVar10;
                local_34 = iVar6;
                cVar5 = IsMouseOverEntry(this, local_58, local_54, uVar9);
                local_48 = (PixfontGeneric*)CONCAT71(local_48._1_7_, cVar5);
                if (cVar5 == '\0') {
                    std::array<int, 3ul>::operator[](this_01, 0);
                    uVar9 = 1;
                    if ((uVar11 & 1) != 0)
                        goto LAB_10006e515;
                } else {
                    local_38 = (uint)CONCAT71((int7)(uVar9 >> 8), 1);
                    uVar9 = 2;
                    if (uVar11 != field_788) {
                        field_788 = (uint)uVar11;
                        pGVar7 = (GameOptions*)
                                     std::unique_ptr<option::GameOptions,
                                                     std::default_delete<option::GameOptions>>::operator->(local_60);
                        cVar5 = pGVar7->GetHapticOnMinimenuHover();
                        if (cVar5 != '\0') {
                            local_50->Vibrate(4);
                        }
                    }
                LAB_10006e515:
                    std::array<int, 3ul>::operator[](this_01, uVar9);
                }
                pPVar3 = local_78;
                if (field_112 != false) {
                    (**(code**)(local_78->field_0 + 32))(
                        local_78, field_768 + 2, field_772 + (field_69072 + m_numEntries + local_34) * field_104 + 3,
                        field_776 + -4);
                }
                local_48 = (PixfontGeneric*)CONCAT44(local_48._4_4_,
                                                     *(undefined4*)(field_8 + ((ulong)local_48 & 255) * 4 + 56));
                local_88 = field_96;
                GetLine((Minimenu*)local_a8, (int)this);
                local_88->DrawString(local_a8, field_108 + field_768, uVar10 + local_3c + field_104, (int)local_48, 0,
                                     pPVar3);
                local_a8->~basic_string();
                uVar11 = uVar11 + 1;
                iVar6 = local_34 + -1;
            } while ((long)uVar11 < (long)m_numEntries);
        }
        local_50->BlitArea(field_768, field_772, field_776, field_780);
        if ((local_38 & 1) == 0) {
            field_788 = 4294967295;
        }
    }

    // 0x10006e6b0, 224 bytes, placed by class name
    // Minimenu::GetLine(int)
    Minimenu* Minimenu::GetLine(int param_1) {
        Logger* this_00;
        basic_string* pbVar2;
        int in_EDX;
        undefined4 in_register_00000034;
        basic_string local_40[32];

        if (in_EDX < 0) {
            new (local_40) eastl::allocator("EASTL basic_string");
            new (this) eastl::string("", local_40);
        } else {
            this_00 = (Logger*)std::array<MinimenuEntry, 500ul>::operator[](
                (array<MinimenuEntry, 500ul>*)(CONCAT44(in_register_00000034, param_1) + 800), (long)in_EDX);
            this_00->GetLogStreams();
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() == 0) {
                pbVar2 = (basic_string*)this_00->second();
                new (this) eastl::string(pbVar2);
            } else {
                pbVar2 = (basic_string*)this_00->second();
                eastl::operator+(local_40, pbVar2);
                pbVar2 = (basic_string*)this_00->GetLogStreams();
                eastl::operator+((eastl*)this, local_40, pbVar2);
                local_40->~basic_string();
            }
        }
        return this;
    }

    // 0x10006e790, 32 bytes, placed by class name
    // Minimenu::GetNumOps()
    void Minimenu::GetNumOps() {
        eastl::max<int>(m_numEntries + -1, 0);
    }

    // 0x10006e7b0, 208 bytes, placed by class name
    // Minimenu::StartFeedback(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool)
    void Minimenu::StartFeedback(undefined4 param_2, undefined4 param_3, undefined1 param_4) {
        eastl::string local_88[32];
        allocator local_68[8];
        eastl::string local_60[32];
        allocator local_40[12];

        eastl::allocator::allocator(local_68, "EASTL basic_string");
        eastl::string::basic_string(local_88, "", local_68);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_60, "", local_40);
        StartFeedback(this, param_2, param_3, param_4, local_88, local_60);
        eastl::string::~basic_string(local_60);
        eastl::string::~basic_string(local_88);
    }

    // 0x10006e880, 144 bytes, placed by class name
    // Minimenu::StartFeedback(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, eastl::string const&, eastl::string const&)
    void Minimenu::StartFeedback(undefined4 param_2, undefined4 param_3, int param_4, basic_string* param_5,
                                 basic_string* param_6) {
        long lVar1;
        GameOptions* this_00;
        Client* pCVar2;

        field_68812 = param_2;
        *(undefined4*)field_68816 = param_3;
        field_68896 = (char)param_4;
        field_68888 = 0;
        eastl::string::operator=((eastl::string*)(field_68816 + 8), param_5);
        eastl::string::operator=((eastl::string*)&field_68856, param_6);
        if (param_4 != 0) {
            lVar1 = Client::Instance();
            this_00 =
                (GameOptions*)
                    std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                        (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)(lVar1 + 8384));
            if (this_00->GetHapticOnOp() != '\0') {
                pCVar2 = (Client*)Client::Instance();
                pCVar2->Vibrate(4);
            }
        }
    }

    // 0x10006e940, 592 bytes, placed by class name
    // Minimenu::DrawFeedback(graphics::Pix2D&)
    void Minimenu::DrawFeedback(Pix2D* param_1) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        int iVar5;
        long lVar6;
        Array<graphics::Pix32, eastl::allocator>* pAVar7;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar8;
        ulong uVar9;
        ulong uVar10;
        undefined8 uVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        int local_34;

        lVar6 = Client::Instance();
        if (*(char*)(lVar6 + 52416) != '\0') {
            if (field_68888 < field_68892) {
                if (m_feedbackSprite != -1) {
                    LoadPendingFeedback(this);
                }
                this_00 = field_68904;
                iVar12 = 0;
                bVar4 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
                if (!bVar4) {
                    pAVar7 = (Array<graphics::Pix32, eastl::allocator>*)
                        shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator*(
                            (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)this_00);
                    iVar13 = 0;
                    lVar6 = Array<graphics::Pix32, eastl::allocator>::operator[](pAVar7, 0);
                    iVar12 = *(int*)(lVar6 + 24);
                    pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                 shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator->(
                                     (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)this_00);
                    uVar9 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar8);
                    if (field_68896 != '\0') {
                        pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                     shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator->(
                                         (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)this_00);
                        uVar10 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar8);
                        iVar13 = (int)(uVar10 >> 1);
                    }
                    lVar6 = Client::Instance();
                    cVar1 = *(char*)(lVar6 + 8425);
                    local_34 = (&field_68812)->GetX();
                    if (cVar1 == '\0') {
                        local_34 = local_34 + -8;
                        iVar15 = field_68816->GetX();
                        iVar5 = -8;
                    } else {
                        iVar15 = 8 - (iVar12 * 3) / 2;
                        local_34 = local_34 + iVar15;
                        iVar5 = field_68816->GetX();
                    }
                    iVar14 = (int)(uVar9 >> 1);
                    if (field_68920 == false) {
                        pAVar7 = (Array<graphics::Pix32, eastl::allocator>*)
                            shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator*(
                                (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)this_00);
                        uVar11 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            pAVar7, (long)((iVar14 * field_68888) / field_68892 + iVar13));
                        (**(code**)(param_1->field_0 + 176))(param_1, uVar11, local_34, iVar5 + iVar15);
                    } else {
                        iVar2 = field_68888;
                        iVar3 = field_68892;
                        pAVar7 = (Array<graphics::Pix32, eastl::allocator>*)
                            shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator*(
                                (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)this_00);
                        uVar11 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            pAVar7, (long)((iVar14 * field_68888) / field_68892 + iVar13));
                        (**(code**)(param_1->field_0 + 232))(param_1, uVar11, local_34, iVar5 + iVar15,
                                                             255 - (iVar2 * 255) / iVar3);
                    }
                }
            } else {
                if (field_68892 * 2 <= field_68888) {
                    return;
                }
                iVar12 = 0;
                bVar4 = operator==((shared_ptr*)field_68904, (_func_decltype_nullptr*)0);
                if (!bVar4) {
                    pAVar7 = (Array<graphics::Pix32, eastl::allocator>*)
                        shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator*(
                            (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)field_68904);
                    lVar6 = Array<graphics::Pix32, eastl::allocator>::operator[](pAVar7, 0);
                    iVar12 = *(int*)(lVar6 + 24);
                }
            }
            DrawFeedbackText(this, param_1, iVar12);
        }
    }

    // 0x10006ebd0, 736 bytes, placed by class name
    // Minimenu::DrawFeedbackText(graphics::Pix2D&, int)
    void Minimenu::DrawFeedbackText(Pix2D* param_1, int param_2) {
        undefined1* puVar1;
        PixfontGeneric* pPVar2;
        uint uVar3;
        Pix2D* pPVar4;
        char cVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        undefined8 in_stack_ffffffffffffff78;
        undefined4 uVar10;
        allocator local_70[8];
        eastl::string local_68[32];
        ulong local_40;
        int local_34;

        uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 32);
        if (m_feedbackShowPopupText != false) {
            cVar5 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar5 == '\0') {
                eastl::allocator::allocator(local_70, "EASTL basic_string");
                eastl::string::basic_string(local_68, "", local_70);
                local_68->append();
                cVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar5 == '\0') {
                    local_68->append();
                    local_68->append();
                    eastl::string::append(local_68, StringConstants::TAG_COLOURCLOSE);
                }
                iVar6 = (&field_68812)->GetX();
                iVar7 = (field_96, (basic_string*)local_68)->StringWid();
                pPVar4 = param_1;
                uVar3 = (iVar6 + -8) - (param_2 + iVar7);
                if (iVar6 <= param_1->field_8 / 2) {
                    uVar3 = param_2 + iVar6 + 8;
                }
                local_40 = (ulong)uVar3;
                if (field_68920 == false) {
                    puVar1 = field_68816;
                    iVar6 = puVar1->GetX();
                    pPVar4->DrawRect(uVar3 - 5, iVar6 + -8, iVar7 + 10, field_96->field_0 + 10, 0);
                    iVar6 = (int)local_40;
                    iVar8 = puVar1->GetX();
                    (**(code**)(pPVar4->field_0 + 32))(pPVar4, iVar6 + -4, iVar8 + -7, iVar7 + 8,
                                                       field_96->field_0 + 8);
                    pPVar2 = field_96;
                    iVar6 = puVar1->GetX();
                    pPVar2->DrawString(local_68, (int)local_40, field_96->field_0 / 2 + iVar6, 16777215, 0, pPVar4);
                } else {
                    iVar6 = field_68892;
                    uVar9 = 255;
                    iVar8 = field_68888 - iVar6;
                    if (iVar8 != 0 && iVar6 <= field_68888) {
                        uVar9 = 255 - (iVar8 * 510) / (iVar6 * 2);
                    }
                    local_34 = uVar3 - 5;
                    puVar1 = field_68816;
                    iVar6 = puVar1->GetX();
                    pPVar4 = param_1;
                    param_1->DrawRectTrans(local_34, iVar6 + -8, iVar7 + 10, field_96->field_0 + 10, 0, uVar9);
                    local_34 = (int)local_40 + -4;
                    iVar6 = puVar1->GetX();
                    (**(code**)(pPVar4->field_0 + 24))(pPVar4, local_34, iVar6 + -7, iVar7 + 8, field_96->field_0 + 8,
                                                       6710886, CONCAT44(uVar10, uVar9));
                    pPVar2 = field_96;
                    iVar6 = puVar1->GetX();
                    pPVar2->DrawStringTrans(local_68, (int)local_40, field_96->field_0 / 2 + iVar6, 16777215, 0, uVar9,
                                            pPVar4);
                }
                eastl::string::~basic_string(local_68);
            }
        }
    }

    // 0x10006eeb0, 176 bytes, placed by class name
    // Minimenu::LoadPendingFeedback()
    void Minimenu::LoadPendingFeedback() {
        char cVar1;
        pixloader local_40;
        shared_ptr local_28;

        if (-1 < m_feedbackSprite) {
            local_40.Makepix32Array(field_68936, m_feedbackSprite);
            cVar1 = local_40.empty();
            if ((cVar1 == '\0') || (m_feedbackSprite < 0)) {
                make_shared<Array<graphics::Pix32, eastl::allocator>, Array<graphics::Pix32, eastl::allocator>>(
                    (jag*)&local_28, (Array*)&local_40);
                shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator=(
                    (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)field_68904, &local_28);
                local_28.~shared_ptr();
                m_feedbackSprite = -1;
            }
            local_40.~Array();
        }
    }

    // 0x10006ef60, 5184 bytes, placed by class name
    // Minimenu::Build(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, int, int)
    void Minimenu::Build(uint param_2, undefined4 param_3, int param_4, int param_5) {
        Client* pCVar1;
        char cVar2;
        bool bVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        int iVar6;
        undefined4 uVar7;
        int iVar8;
        int iVar9;
        Layout* pLVar10;
        long lVar11;
        NXTPixToolkit* this_00;
        NXTPixScreen* pNVar12;
        long* plVar13;
        long* plVar14;
        undefined8 uVar15;
        shared_ptr* psVar16;
        LocType* this_01;
        ClientNpc* pCVar17;
        ClientEntity* pCVar18;
        ClientPlayer* pCVar19;
        list* plVar20;
        ClientObj* this_02;
        long lVar21;
        basic_string* pbVar22;
        undefined4* puVar23;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar24;
        long* plVar25;
        ulong uVar26;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar27;
        long in_stack_fffffffffffffd88;
        undefined4 uVar28;
        allocator local_258[32];
        list<console::Line, eastl::allocator> local_238[8];
        list<console::Line, eastl::allocator> local_230[8];
        array<MinimenuOps::Value, 5ul>* local_228;
        array<MinimenuOps::Value, 5ul>* local_220;
        LocChange local_218;
        MinimenuSubject local_1d8;
        eastl local_188[32];
        eastl local_168[32];
        StringConstants local_148[32];
        basic_string* local_128;
        array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
              5ul>* local_120;
        array<shared_ptr<ClientPlayer>, 2048ul>* local_118;
        basic_string* local_110;
        undefined1* local_108;
        long local_100;
        int local_f8;
        int local_f4;
        eastl local_f0[32];
        CoordGrid local_d0[2];
        Minimenu* local_b0;
        eastl local_a8[8];
        uint local_a0;
        long local_88;
        int local_7c;
        undefined1 local_78[16];
        shared_ptr local_68;
        int local_54;
        Client* local_50;
        char local_41;
        long local_40;
        int local_34;

        local_78._0_4_ = param_2;
        local_78._8_4_ = param_3;
        local_50 = (Client*)Client::Instance();
        uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
        if ((local_50->field_52352 == 0) && (m_targetMode == false)) {
            eastl::allocator::allocator(local_258, "EASTL basic_string");
            new (&local_218) eastl::string("", local_258);
            local_1d8.CreateSubject(&local_218, 1, 18446744073709551615, 0, 4294967295);
            local_54 = param_4;
            local_34 = param_5;
            local_218.~basic_string();
            uVar4 = local_78->GetX();
            uVar5 = ((local_78 + 8))->GetX();
            in_stack_fffffffffffffd88 = CONCAT44(uVar7, uVar4);
            AddEntry(this, &constants::text::walkhere, &local_1d8, 23, 0, 0, in_stack_fffffffffffffd88, uVar5, 0);
            pLVar10 = (Layout*)std::array<
                eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                5ul>::
            operator[](
                (array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>*)&field_568,
                4);
            lVar11 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar10);
            local_40 = pLVar10->end();
            if (lVar11 != local_40) {
                do {
                    uVar28 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                    uVar7 = *(undefined4*)(lVar11 + 40);
                    uVar4 = local_78->GetX();
                    uVar5 = ((local_78 + 8))->GetX();
                    in_stack_fffffffffffffd88 = CONCAT44(uVar28, uVar4);
                    AddEntry(this, lVar11 + 8, &local_1d8, 1854, 0, uVar7, in_stack_fffffffffffffd88, uVar5, 4);
                    lVar11 = lVar11 + 48;
                } while (lVar11 != local_40);
            }
            local_1d8.~MinimenuSubject();
            param_4 = local_54;
            param_5 = local_34;
        }
        pCVar1 = local_50;
        this_00 = (NXTPixToolkit*)local_50->GetMemoryCache();
        pNVar12 = (NXTPixScreen*)this_00->GetScreen();
        pNVar12->CalculateCanvasCoords(local_78._0_4_, local_78._8_4_, &local_f8);
        if (((pCVar1->field_8425 == false) && (field_1 == '\0')) ||
            (cVar2 =
                 dash3d::MousePickingHelper::HasCheckedScreenCoordLastRender(local_f8 - param_4, local_f4 - param_5),
             cVar2 != '\0')) {
            field_0 = '\0';
            new (local_258) eastl::vector<long long, eastl::allocator>();
            local_110 = (basic_string*)&field_176;
            local_108 = &field_144;
            local_220 = (array<MinimenuOps::Value, 5ul>*)&field_544;
            local_120 =
                (array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>*)&field_568;
            local_128 = (basic_string*)&local_50->field_52368;
            local_118 = (array<shared_ptr<ClientPlayer>, 2048ul>*)&local_50->field_19216;
            local_228 = (array<MinimenuOps::Value, 5ul>*)&field_524;
            local_100 = -1;
            local_54 = 0;
            local_b0 = this;
            while (iVar6 = dash3d::MousePickingHelper::GetPickedEntityCount(), local_54 < iVar6) {
                local_88 = dash3d::MousePickingHelper::GetPickedEntityTypecode(local_54);
                plVar13 = (long*)local_258->HeapBeginPtr();
                plVar14 = (long*)local_258->end();
                if (plVar13 == plVar14) {
                LAB_10006f29d:
                    local_258->push_back(&local_88);
                    iVar6 = local_54;
                    this = local_b0;
                    uVar7 = dash3d::MousePickingHelper::GetPickedEntityX(local_54);
                    local_40 = CONCAT44(local_40._4_4_, uVar7);
                    local_34 = dash3d::MousePickingHelper::GetPickedEntityZ(iVar6);
                    iVar8 = dash3d::MousePickingHelper::GetPickedEntityType(iVar6);
                    iVar6 = dash3d::MousePickingHelper::GetPickedEntityId(iVar6);
                    new (local_d0) eastl::allocator("EASTL basic_string");
                    new (&local_218) eastl::string("", local_d0);
                    local_1d8.CreateSubject(&local_218, 0, local_88, 0, 4294967295);
                    local_218.~basic_string();
                    if (iVar8 == 0) {
                        psVar16 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](local_118,
                                                                                                        (long)iVar6);
                        new (&local_218) shared_ptr<dash3d::Decor>(psVar16);
                        bVar3 = operator==((shared_ptr*)&local_218, (_func_decltype_nullptr*)0);
                        if (!bVar3) {
                            lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_218);
                            if (((*(uint*)(lVar11 + 24) & 127) == 64) &&
                                (lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_218),
                                 (*(uint*)(lVar11 + 28) & 127) == 64)) {
                                pCVar18 = (ClientEntity*)local_218.end();
                                AddNpcOptionsOnSameTile(this, pCVar18, (int)local_40, local_34);
                                pCVar18 = (ClientEntity*)local_218.end();
                                AddPlayerOptionsOnSameTile(this, pCVar18, (int)local_40, local_34);
                            }
                            iVar9 = local_50->GetPriorityPlayerId();
                            if (iVar6 == iVar9) {
                                local_100 = local_88;
                            } else {
                                pCVar19 = (ClientPlayer*)local_218.end();
                                AddPlayerOptions(this, pCVar19, iVar6, (int)local_40, local_34);
                            }
                        }
                        local_218.~shared_ptr();
                        if (bVar3)
                            goto LAB_10006ff8e;
                    LAB_10006f99f:
                        if (iVar8 == 3) {
                            local_1d8.field_32 = 4;
                            rs2lib::CoordGrid::CoordGrid(local_d0, local_50->m_playerLevel, (int)local_40, local_34);
                            plVar20 = (list*)local_50->GetObjectsOnTile(local_d0);
                            new (&local_218) eastl::list<shared_ptr<ClientObj>, eastl::allocator>(plVar20);
                            eastl::list<console::Line, eastl::allocator>::begin(local_238);
                            eastl::list<console::Line, eastl::allocator>::end(local_230);
                            phVar24 = extraout_RDX;
                            while (true) {
                                bVar3 =
                                    eastl::operator!=((eastl*)local_238, (hashtable_iterator_base*)local_230, phVar24);
                                if (!bVar3)
                                    break;
                                psVar16 = (shared_ptr*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_238);
                                bVar3 = operator!=(psVar16, (_func_decltype_nullptr*)0);
                                if (bVar3) {
                                    this_02 =
                                        (ClientObj*)shared_ptr<ClientObj>::operator*((shared_ptr<ClientObj>*)psVar16);
                                    local_68.List(*(int*)&this_02->field_24);
                                    local_1d8.field_40 = dash3d::MousePickingHelper::GetPackedTypeCode(
                                        (int)local_40, local_34, local_50->m_playerLevel, 3, false,
                                        *(int*)&this_02->field_24);
                                    uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                                    local_1d8.field_52 = *(undefined4*)&this_02->field_24;
                                    local_1d8.field_48 = *(undefined4*)&this_02->field_28;
                                    if (local_50->field_52352 == 1) {
                                        eastl::operator+(local_168, local_128, (value_type*)&DAT_100e35840);
                                        eastl::operator+(local_188, (basic_string*)local_168,
                                                         (value_type*)StringConstants::ARROW);
                                        eastl::operator+(local_f0, (basic_string*)local_188,
                                                         (value_type*)&DAT_100e35840);
                                        local_148->TAG_COLOUR(16748608);
                                        eastl::operator+(local_a8, (basic_string*)local_f0, (basic_string*)local_148);
                                        lVar11 = shared_ptr<configdecoder::ObjType>::operator->(
                                            (shared_ptr<configdecoder::ObjType>*)&local_68);
                                        eastl::operator+((eastl*)local_d0, (basic_string*)local_a8,
                                                         (basic_string*)(lVar11 + 8));
                                        eastl::string::operator=((eastl::string*)&local_1d8, (basic_string*)local_d0);
                                        local_d0->~basic_string();
                                        local_a8->~basic_string();
                                        local_148->~basic_string();
                                        local_f0->~basic_string();
                                        local_188->~basic_string();
                                        local_168->~basic_string();
                                        in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                        AddEntry(this, &constants::text::use, &local_1d8, 16, 0,
                                                 *(undefined4*)&this_02->field_24, in_stack_fffffffffffffd88, local_34,
                                                 0);
                                    } else if (m_targetMode == false) {
                                        lVar11 = shared_ptr<configdecoder::ObjType>::operator->(
                                            (shared_ptr<configdecoder::ObjType>*)&local_68);
                                        local_a8->TAG_COLOUR(16748608);
                                        lVar21 = shared_ptr<configdecoder::ObjType>::operator->(
                                            (shared_ptr<configdecoder::ObjType>*)&local_68);
                                        eastl::operator+((eastl*)local_d0, (basic_string*)local_a8,
                                                         (basic_string*)(lVar21 + 8));
                                        eastl::string::operator=((eastl::string*)&local_1d8, (basic_string*)local_d0);
                                        local_d0->~basic_string();
                                        local_a8->~basic_string();
                                        pvVar27 =
                                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                       eastl::allocator>>*)(lVar11 +
                                                                                                            224);
                                        uVar26 = 4;
                                        lVar11 = -5;
                                        do {
                                            cVar2 = this_02->IsOpEnabled((int)uVar26);
                                            if (cVar2 != '\0') {
                                                cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<
                                                                               4ul, 8ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::empty(pvVar27);
                                                if (cVar2 == '\0') {
                                                    pbVar22 = (basic_string*)eastl::vector<
                                                        eastl::string,
                                                        eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>::
                                                    operator[](
                                                        (vector<eastl::string,
                                                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                              eastl::allocator>>*)
                                                            pvVar27,
                                                        uVar26);
                                                    bVar3 = eastl::operator!=(pbVar22, (value_type*)"");
                                                    uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                                                    if (bVar3) {
                                                        uVar15 = eastl::vector<
                                                            eastl::string,
                                                            eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>::
                                                        operator[](
                                                            (vector<eastl::string,
                                                                    eastl::fixed_vector_allocator<
                                                                        32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                                                pvVar27,
                                                            uVar26);
                                                        puVar23 = (undefined4*)
                                                            std::array<MinimenuOps::Value, 5ul>::operator[](local_228,
                                                                                                            uVar26);
                                                        in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                                        AddEntry(local_b0, uVar15, &local_1d8, *puVar23, 0,
                                                                 *(undefined4*)&this_02->field_24,
                                                                 in_stack_fffffffffffffd88, local_34, 0);
                                                        goto LAB_10006fe10;
                                                    }
                                                }
                                                if (lVar11 == -3) {
                                                    in_stack_fffffffffffffd88 = CONCAT44(
                                                        (int)((ulong)in_stack_fffffffffffffd88 >> 32), (int)local_40);
                                                    AddEntry(local_b0, &constants::text::take, &local_1d8, 20, 0,
                                                             *(undefined4*)&this_02->field_24,
                                                             in_stack_fffffffffffffd88, local_34, 0);
                                                }
                                            }
                                        LAB_10006fe10:
                                            uVar26 = uVar26 - 1;
                                            lVar11 = lVar11 + 1;
                                        } while (lVar11 != 0);
                                        pLVar10 = (Layout*)std::array<
                                            eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>,
                                                              eastl::allocator,
                                                              eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>,
                                                                            eastl::allocator>>,
                                            5ul>::operator[](local_120, 2);
                                        lVar11 =
                                            eastl::basic_string<char,
                                                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                              eastl::allocator>>::
                                                Layout::HeapBeginPtr(pLVar10);
                                        lVar21 = pLVar10->end();
                                        this = local_b0;
                                        uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                                        for (; lVar11 != lVar21; lVar11 = lVar11 + 48) {
                                            in_stack_fffffffffffffd88 =
                                                CONCAT44((int)((ulong)in_stack_fffffffffffffd88 >> 32),
                                                         *(undefined4*)(lVar11 + 40));
                                            AddEntry(this, lVar11 + 8, &local_1d8, 1852, 0, 0,
                                                     in_stack_fffffffffffffd88, 0, 4);
                                            uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                                        }
                                        in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                        AddEntry(this, &constants::text::examine, &local_1d8, 1004, 0,
                                                 *(undefined4*)&this_02->field_24, in_stack_fffffffffffffd88, local_34,
                                                 0);
                                    } else if ((field_136 & 1) != 0) {
                                        eastl::operator+(local_168, local_110, (value_type*)&DAT_100e35840);
                                        eastl::operator+(local_188, (basic_string*)local_168,
                                                         (value_type*)StringConstants::ARROW);
                                        eastl::operator+(local_f0, (basic_string*)local_188,
                                                         (value_type*)&DAT_100e35840);
                                        local_148->TAG_COLOUR(16748608);
                                        eastl::operator+(local_a8, (basic_string*)local_f0, (basic_string*)local_148);
                                        lVar11 = shared_ptr<configdecoder::ObjType>::operator->(
                                            (shared_ptr<configdecoder::ObjType>*)&local_68);
                                        eastl::operator+((eastl*)local_d0, (basic_string*)local_a8,
                                                         (basic_string*)(lVar11 + 8));
                                        eastl::string::operator=((eastl::string*)&local_1d8, (basic_string*)local_d0);
                                        local_d0->~basic_string();
                                        local_a8->~basic_string();
                                        local_148->~basic_string();
                                        local_f0->~basic_string();
                                        local_188->~basic_string();
                                        local_168->~basic_string();
                                        in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                        AddEntry(this, local_108, &local_1d8, 17, 0, *(undefined4*)&this_02->field_24,
                                                 in_stack_fffffffffffffd88, local_34, 0);
                                    }
                                    local_68.~shared_ptr();
                                }
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_238);
                                phVar24 = extraout_RDX_00;
                            }
                            local_218.~list();
                        }
                    } else {
                        if (iVar8 == 1) {
                            pCVar17 = (ClientNpc*)local_50->GetClientNpc(iVar6);
                            if (pCVar17 == (ClientNpc*)0)
                                goto LAB_10006ff8e;
                            lVar11 = shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)&pCVar17->field_1024);
                            if (((*(int*)(lVar11 + 40) == 1) && ((pCVar17->field_24 & 127U) == 64)) &&
                                ((pCVar17->field_28 & 127U) == 64)) {
                                AddNpcOptionsOnSameTile(this, (ClientEntity*)pCVar17, (int)local_40, local_34);
                                AddPlayerOptionsOnSameTile(this, (ClientEntity*)pCVar17, (int)local_40, local_34);
                            }
                            AddNpcOptions(this, pCVar17, iVar6, (int)local_40, local_34);
                            goto LAB_10006f99f;
                        }
                        if (iVar8 != 2)
                            goto LAB_10006f99f;
                        local_1d8.field_32 = 3;
                        cVar2 = local_50->IsLocOnPlayersLevel((int)local_40, local_34, local_88);
                        if (cVar2 == '\0')
                            goto LAB_10006f99f;
                        psVar16 = (shared_ptr*)configdecoder::LocType::List(iVar6);
                        new (&local_68) shared_ptr<dash3d::Decor>(psVar16);
                        lVar11 = shared_ptr<configdecoder::LocType>::operator->(
                            (shared_ptr<configdecoder::LocType>*)&local_68);
                        cVar2 = ((lVar11 + 488))->empty();
                        if (cVar2 == '\0') {
                            this_01 = (LocType*)shared_ptr<configdecoder::LocType>::operator->(
                                (shared_ptr<configdecoder::LocType>*)&local_68);
                            psVar16 = (shared_ptr*)this_01->GetMultiLoc();
                            shared_ptr<configdecoder::LocType>::operator=(
                                (shared_ptr<configdecoder::LocType>*)&local_68, psVar16);
                        }
                        bVar3 = operator==(&local_68, (_func_decltype_nullptr*)0);
                        if (bVar3) {
                            local_68.~shared_ptr();
                        } else {
                            local_41 = bVar3;
                            local_218.FindLocChange((int)local_50, local_50->m_playerLevel, (int)local_40, local_34);
                            uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                            if (local_50->field_52352 == 1) {
                                eastl::operator+(local_168, local_128, (value_type*)&DAT_100e35840);
                                eastl::operator+(local_188, (basic_string*)local_168,
                                                 (value_type*)StringConstants::ARROW);
                                eastl::operator+(local_f0, (basic_string*)local_188, (value_type*)&DAT_100e35840);
                                local_148->TAG_COLOUR(65535);
                                eastl::operator+(local_a8, (basic_string*)local_f0, (basic_string*)local_148);
                                lVar11 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_68);
                                eastl::operator+((eastl*)local_d0, (basic_string*)local_a8,
                                                 (basic_string*)(lVar11 + 56));
                                eastl::string::operator=((eastl::string*)&local_1d8, (basic_string*)local_d0);
                                local_d0->~basic_string();
                                local_a8->~basic_string();
                                local_148->~basic_string();
                                local_f0->~basic_string();
                                local_188->~basic_string();
                                local_168->~basic_string();
                                in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                AddEntry(this, &constants::text::use, &local_1d8, 1, 0, iVar6,
                                         in_stack_fffffffffffffd88, local_34, 0);
                            } else if (m_targetMode == false) {
                                lVar11 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_68);
                                local_a8->TAG_COLOUR(65535);
                                lVar21 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_68);
                                eastl::operator+((eastl*)local_d0, (basic_string*)local_a8,
                                                 (basic_string*)(lVar21 + 56));
                                local_7c = iVar6;
                                eastl::string::operator=((eastl::string*)&local_1d8, (basic_string*)local_d0);
                                local_d0->~basic_string();
                                local_a8->~basic_string();
                                pvVar27 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                     eastl::allocator>>*)(lVar11 + 232);
                                cVar2 =
                                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                     eastl::allocator>>::empty(pvVar27);
                                if (cVar2 == '\0') {
                                    uVar26 = 4;
                                    do {
                                        if ((local_218.field_56 == '\0') ||
                                            (cVar2 = local_218.IsOpEnabled((int)uVar26), cVar2 != '\0')) {
                                            eastl::vector<eastl::string,
                                                          eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<eastl::string,
                                                        eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)pvVar27,
                                                uVar26);
                                            cVar2 = eastl::basic_string<
                                                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::empty();
                                            uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                                            if (cVar2 == '\0') {
                                                uVar15 = eastl::vector<
                                                    eastl::string, eastl::fixed_vector_allocator<
                                                                       32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                                operator[](
                                                    (vector<eastl::string,
                                                            eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)pvVar27,
                                                    uVar26);
                                                puVar23 = (undefined4*)std::array<MinimenuOps::Value, 5ul>::operator[](
                                                    local_220, uVar26);
                                                in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                                AddEntry(this, uVar15, &local_1d8, *puVar23, 0, local_7c,
                                                         in_stack_fffffffffffffd88, local_34, 0);
                                            }
                                        }
                                        bVar3 = uVar26 != 0;
                                        uVar26 = uVar26 - 1;
                                    } while (bVar3);
                                }
                                pCVar1 = local_50;
                                rs2lib::CoordGrid::CoordGrid(local_d0, local_50->m_playerLevel, (int)local_40,
                                                             local_34);
                                local_a8->WorldCoordFromBuildCoord(pCVar1);
                                local_d0[0].m_z = local_a0;
                                local_d0[0]._0_8_ = local_a8;
                                uVar4 = local_d0->ToBitPacked();
                                pLVar10 = (Layout*)std::array<
                                    eastl::vector_map<
                                        int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                                    5ul>::operator[](local_120, 1);
                                lVar11 = eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(pLVar10);
                                lVar21 = pLVar10->end();
                                uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                                for (; lVar11 != lVar21; lVar11 = lVar11 + 48) {
                                    in_stack_fffffffffffffd88 = CONCAT44((int)((ulong)in_stack_fffffffffffffd88 >> 32),
                                                                         *(undefined4*)(lVar11 + 40));
                                    AddEntry(this, lVar11 + 8, &local_1d8, 1851, 0, local_7c, in_stack_fffffffffffffd88,
                                             uVar4, 4);
                                    uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 32);
                                }
                                puVar23 = (undefined4*)shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_68);
                                in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                AddEntry(this, &constants::text::examine, &local_1d8, 1002, 0, *puVar23,
                                         in_stack_fffffffffffffd88, local_34, 0);
                            } else if ((field_136 & 4) != 0) {
                                eastl::operator+(local_168, local_110, (value_type*)&DAT_100e35840);
                                eastl::operator+(local_188, (basic_string*)local_168,
                                                 (value_type*)StringConstants::ARROW);
                                eastl::operator+(local_f0, (basic_string*)local_188, (value_type*)&DAT_100e35840);
                                local_148->TAG_COLOUR(65535);
                                eastl::operator+(local_a8, (basic_string*)local_f0, (basic_string*)local_148);
                                lVar11 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_68);
                                eastl::operator+((eastl*)local_d0, (basic_string*)local_a8,
                                                 (basic_string*)(lVar11 + 56));
                                eastl::string::operator=((eastl::string*)&local_1d8, (basic_string*)local_d0);
                                local_d0->~basic_string();
                                local_a8->~basic_string();
                                local_148->~basic_string();
                                local_f0->~basic_string();
                                local_188->~basic_string();
                                local_168->~basic_string();
                                in_stack_fffffffffffffd88 = CONCAT44(uVar7, (int)local_40);
                                AddEntry(this, local_108, &local_1d8, 2, 0, iVar6, in_stack_fffffffffffffd88, local_34,
                                         0);
                            }
                            local_68.~shared_ptr();
                            if (local_41 == '\0')
                                goto LAB_10006f99f;
                        }
                    }
                LAB_10006ff8e:
                    local_1d8.~MinimenuSubject();
                    local_54 = local_54 + 1;
                } else {
                    bVar3 = false;
                    do {
                        plVar25 = plVar13 + 1;
                        if (*plVar13 == local_88) {
                            uVar15 = logger::default_logger();
                            bVar3 = true;
                            in_stack_fffffffffffffd88 = local_88;
                            logger::Logger::Log(uVar15, 0, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/minimenu/Minimenu.cpp",
                                                643, "Duplicate typecode found during minimenu generation: %lld",
                                                local_88);
                            break;
                        }
                        plVar13 = plVar25;
                    } while (plVar25 != plVar14);
                    if (!bVar3)
                        goto LAB_10006f29d;
                    local_54 = local_54 + 1;
                    this = local_b0;
                }
            }
            Sort(this);
            lVar11 = local_100;
            if (local_100 != -1) {
                iVar6 = dash3d::MousePickingHelper::GetEntityXFromTypecode(local_100);
                iVar8 = dash3d::MousePickingHelper::GetEntityZFromTypecode(lVar11);
                iVar9 = local_50->GetPriorityPlayerId();
                psVar16 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](local_118, (long)iVar9);
                new (&local_1d8) shared_ptr<dash3d::Decor>(psVar16);
                pCVar19 = (ClientPlayer*)local_1d8.end();
                AddPlayerOptions(this, pCVar19, iVar9, iVar6, iVar8);
                local_1d8.~shared_ptr();
            }
            local_258->~vector();
        } else {
            field_0 = '\x01';
            field_1 = 0;
        }
    }

    // 0x1000703a0, 112 bytes, placed by neighbouring functions
    // MinimenuSubject::CreateSubject(eastl::string const&, MinimenuSubjType, long long, int, int)
    MinimenuSubject* MinimenuSubject::CreateSubject(basic_string* param_1, undefined4 param_3, undefined8 param_4,
                                                    undefined4 param_5, undefined4 param_6) {
        MinimenuSubject(this);
        eastl::string::operator=((eastl::string*)this, param_1);
        field_32 = param_3;
        field_40 = param_4;
        field_48 = param_5;
        field_52 = param_6;
        return this;
    }

    // 0x100070410, 208 bytes, placed by class name
    // Minimenu::AddEntry(eastl::string const&, MinimenuSubject const&, MinimenuOps::Value, bool, int, int, int, int)
    void Minimenu::AddEntry(basic_string* param_1, MinimenuSubject* param_2, int param_4, char param_5, int param_6,
                            int param_7, int param_8, int param_9) {
        char cVar1;
        ushort* puVar2;
        MinimenuEntry* this_00;
        MinimenuOp local_38[4];

        cVar1 = IsOpen(this);
        if (cVar1 != '\0') {
            return;
        }
        puVar2 = (ushort*)(field_8, param_4)->GetOp();
        local_38[0].field_0 = *puVar2;
        cVar1 = CanAddOp(this, local_38);
        if (cVar1 == '\0') {
            return;
        }
        if ((param_5 != '\0') || (cVar1 = IsOpDeprioritised(this, local_38), cVar1 != '\0')) {
            param_4 = param_4 + 2000;
        }
        if ((long)m_numEntries < 500) {
            this_00 = (MinimenuEntry*)std::array<MinimenuEntry, 500ul>::operator[](
                (array<MinimenuEntry, 500ul>*)&field_800, (long)m_numEntries);
            this_00->SetValues(param_1, param_2, param_7, param_8, param_4, param_6, param_9);
            m_numEntries = m_numEntries + 1;
        }
    }

    // 0x100070520, 208 bytes, placed by class name
    // Minimenu::AddNpcOptionsOnSameTile(ClientEntity const*, int, int)
    void Minimenu::AddNpcOptionsOnSameTile(ClientEntity* param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        Client* this_00;
        ClientNpc* pCVar3;
        long lVar4;
        int iVar5;

        this_00 = (Client*)Client::Instance();
        iVar1 = this_00->GetLastNpcNum();
        if (0 < iVar1) {
            iVar5 = 0;
            do {
                iVar2 = this_00->GetLastNpcId(iVar5);
                pCVar3 = (ClientNpc*)this_00->GetClientNpc(iVar2);
                if ((pCVar3 != (ClientNpc*)0) && (pCVar3 != (ClientNpc*)param_1)) {
                    lVar4 = shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&pCVar3->field_1024);
                    if ((*(int*)(lVar4 + 40) == 1) && ((pCVar3->field_24 == *(int*)&param_1->field_24 &&
                                                        (pCVar3->field_28 == *(int*)((long)&param_1->field_24 + 4))))) {
                        iVar2 = this_00->GetLastNpcId(iVar5);
                        AddNpcOptions(this, pCVar3, iVar2, param_2, param_3);
                    }
                }
                iVar5 = iVar5 + 1;
            } while (iVar1 != iVar5);
        }
    }

    // 0x1000705f0, 272 bytes, placed by class name
    // Minimenu::AddPlayerOptionsOnSameTile(ClientEntity const*, int, int)
    void Minimenu::AddPlayerOptionsOnSameTile(ClientEntity* param_1, int param_2, int param_3) {
        long lVar2;
        shared_ptr* psVar3;
        ClientEntity* pCVar4;
        ClientPlayer* pCVar5;
        ulong uVar6;
        ulong uVar7;
        shared_ptr local_50;

        uVar6 = (ulong)ReceivePlayerPositions::m_lastNum;
        if (0 < (int)ReceivePlayerPositions::m_lastNum) {
            uVar7 = 0;
            do {
                lVar2 = Client::Instance();
                psVar3 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)(lVar2 + 19216),
                    (long)(int)(&ReceivePlayerPositions::m_lastID)[uVar7]);
                new (&local_50) shared_ptr<dash3d::Decor>(psVar3);
                if (operator!=(&local_50, (_func_decltype_nullptr*)0)) {
                    pCVar4 = (ClientEntity*)local_50.end();
                    if (pCVar4 != param_1) {
                        lVar2 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_50);
                        if (*(int*)(lVar2 + 24) == *(int*)&param_1->field_24) {
                            lVar2 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_50);
                            if (*(int*)(lVar2 + 28) == *(int*)((long)&param_1->field_24 + 4)) {
                                pCVar5 = (ClientPlayer*)local_50.end();
                                AddPlayerOptions((Minimenu*)this, pCVar5, (&ReceivePlayerPositions::m_lastID)[uVar7],
                                                 param_2, param_3);
                            }
                        }
                    }
                }
                local_50.~shared_ptr();
                uVar7 = uVar7 + 1;
            } while (uVar6 != uVar7);
        }
    }

    // 0x100070700, 2288 bytes, placed by class name
    // Minimenu::AddNpcOptions(ClientNpc const*, int, int, int)
    void Minimenu::AddNpcOptions(ClientNpc* param_1, int param_2, int param_3, int param_4) {
        undefined1* puVar1;
        uint uVar2;
        Minimenu* pMVar4;
        char cVar5;
        bool bVar6;
        undefined4 uVar7;
        int iVar8;
        NpcType* pNVar9;
        long lVar10;
        undefined8 uVar11;
        Layout* this_00;
        long lVar12;
        basic_string* pbVar13;
        ulong uVar14;
        undefined4* puVar15;
        ulong uVar16;
        MinimenuSubject local_198;
        eastl local_148[32];
        eastl local_128[32];
        eastl local_108[32];
        StringConstants local_e8[32];
        shared_ptr<ClientPlayer>* local_c8;
        eastl::string local_c0[32];
        uint local_9c;
        StringConstants local_98[32];
        NpcType* local_78;
        array<MinimenuOps::Value, 5ul>* local_70;
        allocator local_68[32];
        Minimenu* local_48;
        ulong local_40;

        if (399 < m_numEntries) {
            return;
        }
        puVar1 = &param_1->field_1024;
        local_48 = this;
        local_40 = Client::Instance();
        pNVar9 = (NpcType*)puVar1->end();
        lVar10 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)puVar1);
        cVar5 = ((lVar10 + 488))->empty();
        if (cVar5 == '\0') {
            shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)puVar1);
            local_198.GetMultiNpc();
            pNVar9 = (NpcType*)local_198.end();
            local_198.~shared_ptr();
        }
        uVar16 = local_40;
        if (pNVar9 == (NpcType*)0) {
            return;
        }
        if (pNVar9->field_520 == '\0') {
            return;
        }
        if ((pNVar9->field_522 != '\0') && (*(int*)(local_40 + 52468) != param_2)) {
            return;
        }
        local_78 = pNVar9;
        uVar11 = dash3d::MousePickingHelper::GetPackedTypeCode(param_3, param_4, *(int*)(local_40 + 51984), 1, false,
                                                               param_2);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        eastl::string::basic_string(local_c0, "", local_68);
        local_198.CreateSubject(local_c0, 2, uVar11, 0, 4294967295);
        eastl::string::~basic_string(local_c0);
        local_c8 = (shared_ptr<ClientPlayer>*)(uVar16 + 52016);
        lVar10 = shared_ptr<ClientPlayer>::operator->(local_c8);
        pMVar4 = local_48;
        pNVar9 = local_78;
        GetNpcOpBase((Minimenu*)local_c0, param_1, local_78, *(int*)(lVar10 + 1128));
        if ((pNVar9->field_522 != '\0') && (cVar5 = IsFollowerLowPriority(pMVar4), cVar5 != '\0')) {
            local_98->TAG_COLOUR(16776960);
            eastl::operator+((eastl*)local_68, (basic_string*)local_98, (basic_string*)local_c0);
            eastl::string::operator=((eastl::string*)&local_198, (basic_string*)local_68);
            local_68->~basic_string();
            local_98->~basic_string();
            AddEntry(pMVar4, &constants::text::examine, &local_198, 1003, 0, param_2, param_3, param_4, 0);
        }
        if (*(int*)(local_40 + 52352) == 1) {
            eastl::operator+(local_108, (basic_string*)(local_40 + 52368), (value_type*)&DAT_100e35840);
            eastl::operator+(local_128, (basic_string*)local_108, (value_type*)StringConstants::ARROW);
            eastl::operator+(local_148, (basic_string*)local_128, (value_type*)&DAT_100e35840);
            local_e8->TAG_COLOUR(16776960);
            eastl::operator+((eastl*)local_98, (basic_string*)local_148, (basic_string*)local_e8);
            eastl::operator+((eastl*)local_68, (basic_string*)local_98, (basic_string*)local_c0);
            eastl::string::operator=((eastl::string*)&local_198, (basic_string*)local_68);
            local_68->~basic_string();
            local_98->~basic_string();
            local_e8->~basic_string();
            local_148->~basic_string();
            local_128->~basic_string();
            local_108->~basic_string();
            AddEntry(pMVar4, &constants::text::use, &local_198, 7, 0, param_2, param_3, param_4, 0);
        } else if (pMVar4->m_targetMode == false) {
            if (pNVar9->field_522 == '\0') {
                local_40 = local_40 & 18446744069414584320;
            } else {
                uVar7 = IsFollowerLowPriority(pMVar4);
                local_40 = CONCAT44(local_40._4_4_, uVar7);
            }
            local_98->TAG_COLOUR(16776960);
            eastl::operator+((eastl*)local_68, (basic_string*)local_98, (basic_string*)local_c0);
            eastl::string::operator=((eastl::string*)&local_198, (basic_string*)local_68);
            local_68->~basic_string();
            local_98->~basic_string();
            puVar1 = &pNVar9->field_256;
            cVar5 = puVar1->empty();
            if (cVar5 == '\0') {
                local_70 = (array<MinimenuOps::Value, 5ul>*)&local_48->field_504;
                uVar16 = 4;
                local_9c = (uint)(byte)local_40;
                do {
                    cVar5 = param_1->IsOpEnabled((int)uVar16);
                    if (cVar5 != '\0') {
                        pbVar13 = (basic_string*)eastl::vector<
                            eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<eastl::string,
                                    eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)puVar1,
                            uVar16);
                        bVar6 = eastl::operator!=(pbVar13, (value_type*)"");
                        if (bVar6) {
                            pbVar13 = (basic_string*)eastl::vector<
                                eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::string,
                                        eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    puVar1,
                                uVar16);
                            iVar8 =
                                eastl::basic_string<char,
                                                    eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                                  eastl::allocator>>::comparei(pbVar13);
                            if (iVar8 != 0) {
                                uVar11 =
                                    eastl::vector<eastl::string, eastl::fixed_vector_allocator<
                                                                     32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](
                                        (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                             eastl::allocator>>*)puVar1,
                                        uVar16);
                                puVar15 =
                                    (undefined4*)std::array<MinimenuOps::Value, 5ul>::operator[](local_70, uVar16);
                                AddEntry(local_48, uVar11, &local_198, *puVar15, local_9c, param_2, param_3, param_4,
                                         0);
                            }
                        }
                    }
                    bVar6 = uVar16 != 0;
                    uVar16 = uVar16 - 1;
                } while (bVar6);
            }
            cVar5 = puVar1->empty();
            if (cVar5 == '\0') {
                local_70 = (array<MinimenuOps::Value, 5ul>*)&local_48->field_504;
                uVar16 = 4;
                do {
                    cVar5 = param_1->IsOpEnabled((int)uVar16);
                    if (cVar5 != '\0') {
                        pbVar13 = (basic_string*)eastl::vector<
                            eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<eastl::string,
                                    eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)puVar1,
                            uVar16);
                        bVar6 = eastl::operator!=(pbVar13, (value_type*)"");
                        if (bVar6) {
                            pbVar13 = (basic_string*)eastl::vector<
                                eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::string,
                                        eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    puVar1,
                                uVar16);
                            iVar8 =
                                eastl::basic_string<char,
                                                    eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                                  eastl::allocator>>::comparei(pbVar13);
                            if (iVar8 == 0) {
                                uVar2 = local_48->m_attackPriorityNpc;
                                uVar14 = (ulong)uVar2;
                                if (uVar2 != 3) {
                                    if ((uVar2 == 1) ||
                                        ((uVar2 == 0 && (uVar2 = local_78->field_460,
                                                         uVar14 = shared_ptr<ClientPlayer>::operator->(local_c8),
                                                         *(int*)(uVar14 + 1128) < (int)uVar2)))) {
                                        local_40 = CONCAT44(local_40._4_4_, (int)CONCAT71((int7)(uVar14 >> 8), 1));
                                    }
                                    uVar11 = eastl::vector<
                                        eastl::string,
                                        eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](
                                        (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                             eastl::allocator>>*)puVar1,
                                        uVar16);
                                    puVar15 =
                                        (undefined4*)std::array<MinimenuOps::Value, 5ul>::operator[](local_70, uVar16);
                                    AddEntry(local_48, uVar11, &local_198, *puVar15, (byte)local_40 & 1, param_2,
                                             param_3, param_4, 0);
                                }
                            }
                        }
                    }
                    bVar6 = uVar16 != 0;
                    uVar16 = uVar16 - 1;
                } while (bVar6);
            }
            pMVar4 = local_48;
            this_00 = (Layout*)std::array<
                eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                5ul>::
            operator[](
                (array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>*)&local_48->field_568,
                0);
            lVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            lVar12 = this_00->end();
            if (lVar10 != lVar12) {
                do {
                    AddEntry(pMVar4, lVar10 + 8, &local_198, 1850, 0, param_2, *(undefined4*)(lVar10 + 40), 0, 4);
                    lVar10 = lVar10 + 48;
                } while (lVar10 != lVar12);
            }
            if ((local_78->field_522 == '\0') || (cVar5 = IsFollowerLowPriority(pMVar4), cVar5 == '\0')) {
                AddEntry(pMVar4, &constants::text::examine, &local_198, 1003, 0, param_2, param_3, param_4, 0);
            }
        } else if ((pMVar4->field_136 & 2) != 0) {
            eastl::operator+(local_108, (basic_string*)&pMVar4->field_176, (value_type*)&DAT_100e35840);
            eastl::operator+(local_128, (basic_string*)local_108, (value_type*)StringConstants::ARROW);
            eastl::operator+(local_148, (basic_string*)local_128, (value_type*)&DAT_100e35840);
            local_e8->TAG_COLOUR(16776960);
            eastl::operator+((eastl*)local_98, (basic_string*)local_148, (basic_string*)local_e8);
            eastl::operator+((eastl*)local_68, (basic_string*)local_98, (basic_string*)local_c0);
            eastl::string::operator=((eastl::string*)&local_198, (basic_string*)local_68);
            local_68->~basic_string();
            local_98->~basic_string();
            local_e8->~basic_string();
            local_148->~basic_string();
            local_128->~basic_string();
            local_108->~basic_string();
            AddEntry(pMVar4, &pMVar4->field_144, &local_198, 8, 0, param_2, param_3, param_4, 0);
        }
        eastl::string::~basic_string(local_c0);
        local_198.~MinimenuSubject();
    }

    // 0x100070ff0, 2960 bytes, placed by class name
    // Minimenu::AddPlayerOptions(ClientPlayer*, int, int, int)
    void Minimenu::AddPlayerOptions(ClientPlayer* param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        long lVar3;
        ClientPlayer* pCVar4;
        undefined8 uVar5;
        DisplayName* pDVar6;
        undefined1* puVar7;
        undefined4* puVar8;
        basic_string* pbVar9;
        Layout* this_01;
        long lVar10;
        ulong uVar11;
        Minimenu* this_02;
        bool bVar12;
        undefined1 uVar13;
        MinimenuSubject local_230;
        basic_string local_1e0[32];
        basic_string local_1c0[32];
        eastl local_1a0[32];
        eastl local_180[32];
        basic_string local_160[32];
        array<MinimenuOps::Value, 8ul>* local_140;
        array<bool, 8ul>* local_138;
        eastl::string local_130[32];
        eastl local_110[32];
        eastl local_f0[32];
        eastl local_d0[32];
        eastl local_b0[32];
        eastl local_90[32];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_70;
        allocator local_68[32];
        Minimenu* local_48;

        lVar3 = Client::Instance();
        local_70 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(lVar3 + 52016);
        pCVar4 = (ClientPlayer*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_70);
        if (((pCVar4 != param_1) && (cVar1 = param_1->HasAppearance(), cVar1 != '\0')) && (m_numEntries < 400)) {
            local_48 = this;
            uVar5 = dash3d::MousePickingHelper::GetPackedTypeCode(param_3, param_4, *(int*)(lVar3 + 51984), 0, false,
                                                                  param_2);
            eastl::allocator::allocator(local_68, "EASTL basic_string");
            eastl::string::basic_string(local_130, "", local_68);
            local_230.CreateSubject(local_130, 6, uVar5, 0, 4294967295);
            eastl::string::~basic_string(local_130);
            eastl::string::basic_string(local_130);
            this_02 = local_48;
            if (*(int*)((long)&param_1->field_1128 + 4) == 0) {
                new (local_68) eastl::string();
                eastl::string::sprintf((char*)local_68, "%i", (ulong) * (uint*)&param_1->field_1128);
                pDVar6 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                    (shared_ptr<rs2lib::social::DisplayName>*)&param_1->field_992);
                pDVar6->GetDisplayName();
                eastl::operator+(local_1e0, (basic_string*)&param_1->field_1032);
                eastl::operator+((eastl*)local_160, local_1e0, (basic_string*)&param_1->field_1064);
                iVar2 = *(int*)&param_1->field_1128;
                lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_70);
                CombatColourCode((Minimenu*)local_1c0, iVar2, *(int*)(lVar10 + 1128));
                eastl::operator+(local_180, local_160, local_1c0);
                eastl::operator+(local_1a0, (basic_string*)local_180, (value_type*)&DAT_100e35840);
                eastl::operator+(local_b0, (basic_string*)local_1a0, (value_type*)StringConstants::OPEN_BRACKET);
                eastl::operator+(local_d0, (basic_string*)local_b0, (basic_string*)&constants::text::level);
                eastl::operator+(local_f0, (basic_string*)local_d0, (basic_string*)local_68);
                eastl::operator+(local_110, (basic_string*)local_f0, (value_type*)StringConstants::CLOSE_BRACKET);
                eastl::operator+(local_90, (basic_string*)local_110, (basic_string*)&param_1->field_1096);
                eastl::string::operator=(local_130, (basic_string*)local_90);
                local_90->~basic_string();
                local_110->~basic_string();
                local_f0->~basic_string();
                local_d0->~basic_string();
                local_b0->~basic_string();
                local_1a0->~basic_string();
                local_180->~basic_string();
                local_1c0->~basic_string();
                local_160->~basic_string();
                pbVar9 = local_1e0;
            } else {
                new (local_68) eastl::string();
                eastl::string::sprintf((char*)local_68, "%i", (ulong) * (uint*)((long)&param_1->field_1128 + 4));
                pDVar6 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                    (shared_ptr<rs2lib::social::DisplayName>*)&param_1->field_992);
                pDVar6->GetDisplayName();
                eastl::operator+(local_160, (basic_string*)&param_1->field_1032);
                eastl::operator+(local_180, local_160, (basic_string*)&param_1->field_1064);
                eastl::operator+(local_1a0, (basic_string*)local_180, (value_type*)&DAT_100e35840);
                eastl::operator+(local_b0, (basic_string*)local_1a0, (value_type*)StringConstants::OPEN_BRACKET);
                eastl::operator+(local_d0, (basic_string*)local_b0, (basic_string*)&constants::text::skill);
                eastl::operator+(local_f0, (basic_string*)local_d0, (basic_string*)local_68);
                eastl::operator+(local_110, (basic_string*)local_f0, (value_type*)StringConstants::CLOSE_BRACKET);
                eastl::operator+(local_90, (basic_string*)local_110, (basic_string*)&param_1->field_1096);
                eastl::string::operator=(local_130, (basic_string*)local_90);
                local_90->~basic_string();
                local_110->~basic_string();
                local_f0->~basic_string();
                local_d0->~basic_string();
                local_b0->~basic_string();
                local_1a0->~basic_string();
                local_180->~basic_string();
                pbVar9 = local_160;
            }
            pbVar9->~basic_string();
            local_68->~basic_string();
            if (*(int*)(lVar3 + 52352) == 1) {
                eastl::operator+(local_d0, (basic_string*)(lVar3 + 52368), (value_type*)&DAT_100e35840);
                eastl::operator+(local_f0, (basic_string*)local_d0, (value_type*)StringConstants::ARROW);
                eastl::operator+(local_110, (basic_string*)local_f0, (value_type*)&DAT_100e35840);
                local_b0->TAG_COLOUR(16777215);
                eastl::operator+(local_90, (basic_string*)local_110, (basic_string*)local_b0);
                eastl::operator+((eastl*)local_68, (basic_string*)local_90, (basic_string*)local_130);
                eastl::string::operator=((eastl::string*)&local_230, (basic_string*)local_68);
                local_68->~basic_string();
                local_90->~basic_string();
                local_b0->~basic_string();
                local_110->~basic_string();
                local_f0->~basic_string();
                local_d0->~basic_string();
                AddEntry(this_02, &constants::text::use, &local_230, 14, 0, param_2, param_3, param_4, 0);
            } else if (this_02->m_targetMode == false) {
                local_90->TAG_COLOUR(16777215);
                eastl::operator+((eastl*)local_68, (basic_string*)local_90, (basic_string*)local_130);
                eastl::string::operator=((eastl::string*)&local_230, (basic_string*)local_68);
                local_68->~basic_string();
                local_90->~basic_string();
                this_00 = &this_02->field_240;
                local_138 = (array<bool, 8ul>*)&this_02->field_496;
                local_140 = (array<MinimenuOps::Value, 8ul>*)&this_02->field_208;
                uVar11 = 7;
                do {
                    pbVar9 = (basic_string*)std::array<eastl::string, 8ul>::operator[](
                        (array<eastl::string, 8ul>*)this_00, uVar11);
                    cVar1 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar1 == '\0') {
                        iVar2 = eastl::basic_string<char,
                                                    eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                                  eastl::allocator>>::comparei(pbVar9);
                        if (iVar2 == 0) {
                            iVar2 = local_48->m_attackPriorityPlayer;
                            if (iVar2 == 3)
                                goto LAB_100071784;
                            if ((iVar2 == 1) || ((iVar2 == 0 && (iVar2 = *(int*)&param_1->field_1128,
                                                                 lVar3 = shared_ptr<ClientPlayer>::operator->(
                                                                     (shared_ptr<ClientPlayer>*)local_70),
                                                                 *(int*)(lVar3 + 1128) < iVar2)))) {
                                uVar13 = 1;
                            } else {
                                uVar13 = 0;
                            }
                            lVar3 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_70);
                            if ((*(int*)(lVar3 + 1196) == 0) || (param_1->field_1196 == 0)) {
                                if ((local_48->m_attackPriorityPlayer == 4) &&
                                    (cVar1 = param_1->IsGroup(), cVar1 != '\0')) {
                                    uVar13 = 1;
                                }
                            } else {
                                lVar3 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_70);
                                uVar13 = *(int*)(lVar3 + 1196) == param_1->field_1196;
                            }
                        } else {
                            puVar7 = (undefined1*)std::array<bool, 8ul>::operator[](local_138, uVar11);
                            uVar13 = *puVar7;
                        }
                        puVar8 = (undefined4*)std::array<MinimenuOps::Value, 8ul>::operator[](local_140, uVar11);
                        AddEntry(local_48, pbVar9, &local_230, *puVar8, uVar13, param_2, param_3, param_4, 0);
                    }
                LAB_100071784:
                    this_02 = local_48;
                    bVar12 = uVar11 != 0;
                    uVar11 = uVar11 - 1;
                } while (bVar12);
                this_01 = (Layout*)std::array<
                    eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                    5ul>::
                operator[](
                    (array<
                        eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                        5ul>*)&local_48->field_568,
                    3);
                lVar3 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                lVar10 = this_01->end();
                if (lVar3 != lVar10) {
                    do {
                        AddEntry(this_02, lVar3 + 8, &local_230, 1853, 0, param_2, *(undefined4*)(lVar3 + 40), 0, 4);
                        lVar3 = lVar3 + 48;
                    } while (lVar3 != lVar10);
                }
            } else if ((this_02->field_136 & 8) != 0) {
                eastl::operator+(local_d0, (basic_string*)&this_02->field_176, (value_type*)&DAT_100e35840);
                eastl::operator+(local_f0, (basic_string*)local_d0, (value_type*)StringConstants::ARROW);
                eastl::operator+(local_110, (basic_string*)local_f0, (value_type*)&DAT_100e35840);
                local_b0->TAG_COLOUR(16777215);
                eastl::operator+(local_90, (basic_string*)local_110, (basic_string*)local_b0);
                eastl::operator+((eastl*)local_68, (basic_string*)local_90, (basic_string*)local_130);
                eastl::string::operator=((eastl::string*)&local_230, (basic_string*)local_68);
                local_68->~basic_string();
                local_90->~basic_string();
                local_b0->~basic_string();
                local_110->~basic_string();
                local_f0->~basic_string();
                local_d0->~basic_string();
                AddEntry(this_02, &this_02->field_144, &local_230, 15, 0, param_2, param_3, param_4, 0);
            }
            UpdateWalkSubject(this_02, (basic_string*)local_130);
            eastl::string::~basic_string(local_130);
            local_230.~MinimenuSubject();
        }
    }

    // 0x100071bb0, 144 bytes, placed by class name
    // Minimenu::IsPropertyAddable(OpProperty)
    ulong Minimenu::IsPropertyAddable(int param_2) {
        uint uVar1;
        uint* puVar2;
        undefined8 unaff_RBX;
        ulong uVar3;

        puVar2 = (uint*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)&field_68944, (long)param_2);
        if (3 < *puVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "minimenu/Minimenu.cpp",
                            889, (char*)0);
        }
        uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        switch (*puVar2) {
        case 1:
            uVar3 = 0;
            break;
        case 2:
            uVar1 = IsShiftDown(this);
            uVar3 = (ulong)uVar1;
            break;
        case 3:
            uVar1 = IsShiftDown(this);
            uVar3 = (ulong)uVar1 ^ 1;
        }
        return uVar3 & 4294967295;
    }

    // 0x100071c40, 48 bytes, placed by class name
    // Minimenu::IsShiftDown()
    undefined1 Minimenu::IsShiftDown() {
        long lVar1;

        if (m_simulatedShiftActive == false) {
            lVar1 = Client::Instance();
            return ((lVar1 + 8496))->KeyHeld(81);
        }
        return 1;
    }

    // 0x100071c70, 144 bytes, placed by class name
    // Minimenu::IsPropertyBlocked(OpProperty)
    ulong Minimenu::IsPropertyBlocked(int param_2) {
        uint uVar1;
        uint* puVar2;
        undefined8 unaff_RBX;
        ulong uVar3;

        puVar2 = (uint*)std::array<MinimenuEntryBlockMode, 10ul>::operator[](
            (array<MinimenuEntryBlockMode, 10ul>*)&field_68984, (long)param_2);
        if (3 < *puVar2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "minimenu/Minimenu.cpp",
                            908, (char*)0);
        }
        uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        switch (*puVar2) {
        case 1:
            uVar3 = 0;
            break;
        case 2:
            uVar1 = IsShiftDown(this);
            uVar3 = (ulong)uVar1;
            break;
        case 3:
            uVar1 = IsShiftDown(this);
            uVar3 = (ulong)uVar1 ^ 1;
        }
        return uVar3 & 4294967295;
    }

    // 0x100071d00, 144 bytes, placed by class name
    // Minimenu::CanAddOp(MinimenuOp const&)
    long Minimenu::CanAddOp(MinimenuOp* param_1) {
        char cVar1;
        int iVar2;
        long lVar3;

        iVar2 = 0;
        lVar3 = 0;
        do {
            cVar1 = param_1->HasProperty(iVar2);
            if (cVar1 != '\0') {
                cVar1 = IsPropertyBlocked(this, iVar2);
                if (cVar1 != '\0') {
                    return 0;
                }
                if ((lVar3 == 0) && (cVar1 = IsPropertyAddable(this, iVar2), cVar1 != '\0')) {
                    lVar3 = 1;
                }
            }
            iVar2 = iVar2 + 1;
        } while (iVar2 != 10);
        return lVar3;
    }

    // 0x100071da0, 176 bytes, placed by class name
    // Minimenu::IsOpDeprioritised(MinimenuOp const&)
    ulong Minimenu::IsOpDeprioritised(MinimenuOp* param_1) {
        int iVar1;
        char cVar2;
        int* piVar3;
        ulong uVar4;
        undefined8 unaff_R13;
        bool bVar5;

        bVar5 = true;
        uVar4 = 0;
        do {
            cVar2 = param_1->HasProperty(uVar4 & 4294967295);
            if (cVar2 != '\0') {
                piVar3 = (int*)std::array<MinimenuEntryPriorityMode, 10ul>::operator[](
                    (array<MinimenuEntryPriorityMode, 10ul>*)&field_69024, uVar4);
                iVar1 = *piVar3;
                if (iVar1 == 2) {
                    cVar2 = IsShiftDown(this);
                    if (cVar2 != '\0')
                        break;
                } else if (iVar1 == 3) {
                    cVar2 = IsShiftDown(this);
                    if (cVar2 == '\0')
                        break;
                } else if (iVar1 == 1)
                    break;
            }
            bVar5 = uVar4 < 9;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 10);
        return CONCAT71((int7)((ulong)unaff_R13 >> 8), bVar5) & 4294967295;
    }

    // 0x100071e60, 96 bytes, placed by class name and neighbouring functions
    // MinimenuEntry::SetValues(eastl::string const&, MinimenuSubject const&, int, int, int, int, int)
    void MinimenuEntry::SetValues(basic_string* param_1, MinimenuSubject* param_2, int param_3, int param_4,
                                  int param_5, int param_6, int param_7) {
        eastl::string::operator=((eastl::string*)&field_24, param_1);
        MinimenuSubject::operator=((MinimenuSubject*)&field_56, param_2);
        field_0 = param_3;
        m_z = param_4;
        field_8 = param_5;
        field_12 = param_6;
        field_16 = param_7;
    }

    // 0x100071ec0, 224 bytes, placed by class name
    // Minimenu::AddGlobalEntry(int, eastl::string const&, int, Minimenu3DSubjectType)
    void Minimenu::AddGlobalEntry(int param_1, basic_string* param_2, undefined4 param_3, int param_5) {
        vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>* this_00;
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        GameTokenResult* this_01;
        GameTokenResult local_60;
        int local_34;

        local_34 = param_1;
        this_00 = (vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>*)
            std::array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>::
            operator[](
                (array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>*)&field_568,
                (long)param_5);
        lVar1 = eastl::vector_map<
            int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>::find(this_00, &local_34);
        lVar2 = this_00->end();
        if (lVar1 != lVar2) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "minimenu/Minimenu.cpp",
                                996, "Global minimenu entry already exists with key %d for type %d", local_34, param_5);
        }
        new (&local_60) eastl::string(param_2);
        local_60.field_32 = param_3;
        this_01 = (GameTokenResult*)eastl::vector_map<
            int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>::operator[](this_00, &local_34);
        jag::auth::GameTokenResult::operator=(this_01, &local_60);
        local_60.~hash_node();
    }

    // 0x1000720d0, 144 bytes, placed by class name
    // Minimenu::RemoveGlobalEntry(int, Minimenu3DSubjectType)
    void Minimenu::RemoveGlobalEntry(int param_1, int param_3) {
        vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>* this_00;
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        int local_24;

        local_24 = param_1;
        this_00 = (vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>*)
            std::array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>::
            operator[](
                (array<eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>,
                       5ul>*)&field_568,
                (long)param_3);
        lVar1 = eastl::vector_map<
            int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>::find(this_00, &local_24);
        lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "minimenu/Minimenu.cpp",
                                1004, "Trying to remove non-existant global minimenu entry with key %d for type %d",
                                local_24, param_3);
        }
        eastl::vector_map<int, MinimenuGlobalEntryData, eastl::greater<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, MinimenuGlobalEntryData>, eastl::allocator>>::erase(this_00,
                                                                                                             &local_24);
    }

    // 0x1000721a0, 1920 bytes, placed by class name
    // Minimenu::AddComponent(shared_ptr<rs2lib::IfType> const&)
    void Minimenu::AddComponent(shared_ptr* param_1) {
        byte bVar1;
        undefined4 uVar2;
        char cVar3;
        int iVar5;
        Client* this_00;
        long lVar6;
        long lVar7;
        char* pcVar8;
        uint uVar9;
        Client* pCVar10;
        uint uVar11;
        eastl local_110[32];
        MinimenuSubject local_f0;
        StringConstants local_a0[32];
        allocator local_80[32];
        Client* local_60;
        eastl::string local_58[32];
        Minimenu* local_38;

        local_38 = this;
        this_00 = (Client*)Client::Instance();
        eastl::allocator::allocator(local_80, "EASTL basic_string");
        pCVar10 = (Client*)local_58;
        new (pCVar10) eastl::string("", local_80);
        local_f0.CreateComponentSubject(pCVar10, param_1);
        eastl::string::~basic_string(local_58);
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar6 + 16) == 1) {
            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            pCVar10 = (Client*)(lVar6 + 1904);
            AddEntry(local_38, pCVar10, &local_f0, 24, 0, 0, 0, *(undefined4*)(lVar7 + 4), 0);
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if ((*(int*)(lVar6 + 16) == 2) && (local_38->m_targetMode == false)) {
            pCVar10 = this_00;
            local_58->TargetVerb(this_00);
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar3 == '\0') {
                local_a0->TAG_COLOUR(65280);
                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                eastl::operator+((eastl*)local_80, (basic_string*)local_a0, (basic_string*)(lVar6 + 1872));
                eastl::string::operator=((eastl::string*)&local_f0, (basic_string*)local_80);
                local_80->~basic_string();
                local_a0->~basic_string();
                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                pCVar10 = (Client*)local_58;
                AddEntry(local_38, pCVar10, &local_f0, 25, 0, 0, 4294967295, *(undefined4*)(lVar6 + 4), 0);
            }
            eastl::string::~basic_string(local_58);
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar6 + 16) == 3) {
            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            pCVar10 = (Client*)&constants::text::close;
            AddEntry(local_38, &constants::text::close, &local_f0, 26, 0, 0, 0, *(undefined4*)(lVar6 + 4), 0);
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar6 + 16) == 4) {
            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            pCVar10 = (Client*)(lVar6 + 1904);
            AddEntry(local_38, pCVar10, &local_f0, 28, 0, 0, 0, *(undefined4*)(lVar7 + 4), 0);
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar6 + 16) == 5) {
            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            pCVar10 = (Client*)(lVar6 + 1904);
            AddEntry(local_38, pCVar10, &local_f0, 29, 0, 0, 0, *(undefined4*)(lVar7 + 4), 0);
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar6 + 16) == 6) {
            pCVar10 = (Client*)0;
            if (operator==((shared_ptr*)this_00->field_52424, (_func_decltype_nullptr*)0)) {
                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                pCVar10 = (Client*)(lVar6 + 1904);
                AddEntry(local_38, pCVar10, &local_f0, 30, 0, 0, 4294967295, *(undefined4*)(lVar7 + 4), 0);
            }
        }
        pcVar8 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*pcVar8 != '\0') {
            if (local_38->m_targetMode == false) {
                uVar9 = 10;
                local_60 = this_00;
                do {
                    uVar11 = uVar9 - 1;
                    GetIftypeOpName((Minimenu*)local_58, (shared_ptr*)pCVar10, (int)param_1);
                    cVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar3 == '\0') {
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        eastl::string::operator=((eastl::string*)&local_f0, (basic_string*)(lVar6 + 704));
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        uVar2 = *(undefined4*)(lVar6 + 8);
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        pCVar10 = (Client*)local_58;
                        AddEntry(local_38, (Client*)local_58, &local_f0, 1007, 0, uVar9, uVar2,
                                 *(undefined4*)(lVar6 + 4), 0);
                    }
                    eastl::string::~basic_string(local_58);
                    uVar9 = uVar11;
                } while (5 < uVar11);
                pCVar10 = local_60;
                local_58->TargetVerb(local_60);
                cVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar3 == '\0') {
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    eastl::string::operator=((eastl::string*)&local_f0, (basic_string*)(lVar6 + 704));
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    uVar2 = *(undefined4*)(lVar6 + 8);
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    pCVar10 = (Client*)local_58;
                    AddEntry(local_38, pCVar10, &local_f0, 25, 0, 0, uVar2, *(undefined4*)(lVar6 + 4), 0);
                }
                iVar5 = 5;
                do {
                    GetIftypeOpName((Minimenu*)local_80, (shared_ptr*)pCVar10, (int)param_1);
                    cVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar3 == '\0') {
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        bVar1 = *(byte*)(lVar6 + 2082);
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        eastl::string::operator=((eastl::string*)&local_f0, (basic_string*)(lVar6 + 704));
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        uVar2 = *(undefined4*)(lVar6 + 8);
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        pCVar10 = (Client*)local_80;
                        AddEntry(local_38, (Client*)local_80, &local_f0, 57, 0, iVar5, uVar2, *(undefined4*)(lVar6 + 4),
                                 (uint)bVar1 * 2);
                    }
                    local_80->~basic_string();
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                iVar5 = local_60->GetActive(param_1);
                cVar3 = rs2lib::ServerActive::PauseButton(iVar5);
                if (cVar3 != '\0') {
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    uVar2 = *(undefined4*)(lVar6 + 8);
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    AddEntry(local_38, &constants::text::continu, &local_f0, 30, 0, 0, uVar2, *(undefined4*)(lVar6 + 4),
                             0);
                }
                eastl::string::~basic_string(local_58);
            } else {
                iVar5 = this_00->GetActive(param_1);
                cVar3 = rs2lib::ServerActive::IsUseTarget(iVar5);
                if ((cVar3 != '\0') && ((local_38->field_136 & 32) != 0)) {
                    eastl::operator+(local_110, (basic_string*)&local_38->field_176, (value_type*)&DAT_100e35840);
                    eastl::operator+((eastl*)local_a0, (basic_string*)local_110, (value_type*)StringConstants::ARROW);
                    eastl::operator+((eastl*)local_80, (basic_string*)local_a0, (value_type*)&DAT_100e35840);
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    eastl::operator+((eastl*)local_58, (basic_string*)local_80, (basic_string*)(lVar6 + 704));
                    eastl::string::operator=((eastl::string*)&local_f0, (basic_string*)local_58);
                    eastl::string::~basic_string(local_58);
                    local_80->~basic_string();
                    local_a0->~basic_string();
                    local_110->~basic_string();
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    uVar2 = *(undefined4*)(lVar6 + 8);
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    AddEntry(local_38, &local_38->field_144, &local_f0, 58, 0, 0, uVar2, *(undefined4*)(lVar6 + 4), 0);
                }
            }
        }
        local_f0.~MinimenuSubject();
    }

    // 0x100072920, 240 bytes, placed by neighbouring functions
    // MinimenuSubject::CreateComponentSubject(eastl::string const&, shared_ptr<rs2lib::IfType> const&)
    MinimenuSubject* MinimenuSubject::CreateComponentSubject(basic_string* param_1, shared_ptr* param_2) {
        undefined4 uVar1;
        long lVar3;
        MinimenuSubject local_78;

        MinimenuSubject(this);
        if (operator!=(param_2, (_func_decltype_nullptr*)0)) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            uVar1 = *(undefined4*)(lVar3 + 1988);
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            CreateSubject(&local_78, param_1, 7, 18446744073709551615, uVar1, *(undefined4*)(lVar3 + 1984));
            operator=(this, &local_78);
        } else {
            CreateSubject(&local_78, param_1, 7, 18446744073709551615, 0, 4294967295);
            operator=(this, &local_78);
        }
        ~MinimenuSubject(&local_78);
        MinimenuComponent::operator=((MinimenuComponent*)&field_56, param_2);
        return this;
    }

    // 0x100072a20, 400 bytes, placed by class name
    // Minimenu::GetIftypeOpName(shared_ptr<rs2lib::IfType> const&, int)
    Minimenu* Minimenu::GetIftypeOpName(shared_ptr* param_1, int param_2) {
        char cVar1;
        int iVar2;
        Client* this_00;
        long lVar3;
        basic_string* pbVar4;
        int in_ECX;
        undefined4 in_register_00000014;
        shared_ptr* this_01;
        ulong uVar5;
        allocator local_50[32];
        allocator local_30[8];

        this_01 = (shared_ptr*)CONCAT44(in_register_00000014, param_2);
        this_00 = (Client*)Client::Instance();
        iVar2 = this_00->GetActive(this_01);
        cVar1 = rs2lib::ServerActive::HasOp(iVar2, in_ECX);
        if (cVar1 == '\0') {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
            cVar1 = ((lVar3 + 1312))->empty();
            if (cVar1 != '\0')
                goto LAB_100072ac5;
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
        cVar1 = ((lVar3 + 736))->empty();
        if (cVar1 == '\0') {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
            iVar2 = ((lVar3 + 736))->end();
            if (in_ECX < iVar2) {
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                uVar5 = (ulong)in_ECX;
                Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)(lVar3 + 736), uVar5);
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                    pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)(lVar3 + 736), uVar5);
                    new (local_50) eastl::string(pbVar4);
                    local_50->trim();
                    cVar1 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar1 == '\0') {
                        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                        pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)(lVar3 + 736), uVar5);
                        new (this) eastl::string(pbVar4);
                    } else {
                        eastl::allocator::allocator(local_30, "EASTL basic_string");
                        new (this) eastl::string("", local_30);
                    }
                    local_50->~basic_string();
                    return this;
                }
            }
        }
    LAB_100072ac5:
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (this) eastl::string("", local_50);
        return this;
    }

    // 0x100072bc0, 16 bytes, placed by class name
    // Minimenu::GetNumEntries()
    int Minimenu::GetNumEntries() {
        return m_numEntries;
    }

    // 0x100072bd0, 80 bytes, placed by class name
    // Minimenu::StashEntry(int)
    void Minimenu::StashEntry(int param_1) {
        undefined1 local_18[8];

        std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)&field_800, (long)param_1);
        std::make_unique<MinimenuEntry, MinimenuEntry&>((MinimenuEntry*)local_18);
        std::unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>::operator=(
            (unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>*)&m_stashedEntry, (unique_ptr*)local_18);
        local_18->~unique_ptr();
    }

    // 0x100072cc0, 32 bytes, placed by class name
    // Minimenu::ClearStashed()
    void Minimenu::ClearStashed() {
        m_stashedEntry.reset(0);
    }

    // 0x100072d10, 16 bytes, placed by class name
    // Minimenu::GetStashed()
    void Minimenu::GetStashed() {
        std::unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>::get();
    }

    // 0x100072d40, 112 bytes, placed by class name
    // Minimenu::GetNpcOpBase(ClientNpc const&, configdecoder::NpcType const&, int)
    Minimenu* Minimenu::GetNpcOpBase(ClientNpc* param_1, NpcType* param_2, int param_3) {
        uint uVar1;
        eastl::string local_48[32];

        uVar1 = *(uint*)&param_1->field_544;
        if (uVar1 == 4294967295) {
            uVar1 = param_2->field_460;
        }
        local_48->GetDisplayName();
        GetNpcOpBase(this, (basic_string*)local_48, uVar1, param_3);
        eastl::string::~basic_string(local_48);
        return this;
    }

    // 0x100072db0, 16 bytes, placed by class name
    // Minimenu::IsFollowerLowPriority()
    undefined1 Minimenu::IsFollowerLowPriority() {
        return m_followerLowPriority;
    }

    // 0x100072e60, 704 bytes, placed by class name
    // Minimenu::GetNpcOpBase(eastl::string const&, int, int)
    Minimenu* Minimenu::GetNpcOpBase(basic_string* param_1, int param_2, int param_3) {
        eastl* this_00;
        basic_string local_110[32];
        eastl::string local_f0[32];
        eastl::string local_d0[32];
        eastl local_b0[32];
        eastl local_90[32];
        eastl local_70[32];
        eastl local_50[32];

        if (param_2 < 1) {
            new (this) eastl::string(param_1);
        } else {
            eastl::string::basic_string(local_d0);
            eastl::string::sprintf((char*)local_d0, "%d", (ulong)(uint)param_2);
            if (param_3 == -1) {
                eastl::operator+(local_50, param_1, (value_type*)&DAT_100e35840);
                eastl::operator+(local_70, (basic_string*)local_50, (value_type*)StringConstants::OPEN_BRACKET);
                eastl::operator+(local_90, (basic_string*)local_70, (basic_string*)&constants::text::level);
                eastl::operator+(local_b0, (basic_string*)local_90, (basic_string*)local_d0);
                eastl::operator+((eastl*)this, (basic_string*)local_b0, (value_type*)StringConstants::CLOSE_BRACKET);
                local_b0->~basic_string();
                local_90->~basic_string();
                local_70->~basic_string();
                this_00 = local_50;
            } else {
                CombatColourCode((Minimenu*)local_f0, param_2, param_3);
                eastl::operator+(local_110, param_1);
                eastl::operator+(local_50, local_110, (value_type*)&DAT_100e35840);
                eastl::operator+(local_70, (basic_string*)local_50, (value_type*)StringConstants::OPEN_BRACKET);
                eastl::operator+(local_90, (basic_string*)local_70, (basic_string*)&constants::text::level);
                eastl::operator+(local_b0, (basic_string*)local_90, (basic_string*)local_d0);
                eastl::operator+((eastl*)this, (basic_string*)local_b0, (value_type*)StringConstants::CLOSE_BRACKET);
                local_b0->~basic_string();
                local_90->~basic_string();
                local_70->~basic_string();
                local_50->~basic_string();
                local_110->~basic_string();
                this_00 = (eastl*)local_f0;
            }
            this_00->~basic_string();
            eastl::string::~basic_string(local_d0);
        }
        return this;
    }

    // 0x100073120, 48 bytes, placed by class name
    // Minimenu::GetNpcOpBase(configdecoder::NpcType const&, int)
    Minimenu* Minimenu::GetNpcOpBase(NpcType* param_1, int param_2) {
        GetNpcOpBase(this, (basic_string*)&param_1->field_8, param_1->field_460, param_2);
        return this;
    }

    // 0x100073150, 128 bytes, placed by class name
    // Minimenu::CombatColourCode(int, int)
    Minimenu* Minimenu::CombatColourCode(int param_1, int param_2) {
        int iVar1;
        int iVar2;

        iVar1 = param_2 - param_1;
        iVar2 = 16711680;
        if (((-10 < iVar1) && (iVar2 = 16723968, -7 < iVar1)) && (iVar2 = 16740352, -4 < iVar1)) {
            if (iVar1 < 0) {
                iVar2 = 16756736;
            } else {
                iVar2 = 65280;
                if (((iVar1 < 10) && (iVar2 = 4259584, iVar1 < 7)) &&
                    ((iVar2 = 8453888, iVar1 < 4 && (iVar2 = 16776960, 0 < iVar1)))) {
                    iVar2 = 12648192;
                }
            }
        }
        TAG_COLOUR(iVar2);
        return this;
    }

    // 0x1000731e0, 208 bytes, placed by class name
    // Minimenu::UpdateWalkSubject(eastl::string const&)
    void Minimenu::UpdateWalkSubject(basic_string* param_1) {
        CommandLine* this_00;
        ulong uVar2;
        StringConstants local_70[32];
        eastl local_50[32];

        if (0 < m_numEntries) {
            uVar2 = 0;
            do {
                this_00 = (CommandLine*)std::array<MinimenuEntry, 500ul>::operator[](
                    (array<MinimenuEntry, 500ul>*)&field_800, uVar2);
                if (this_00->GetPos() == 23) {
                    local_70->TAG_COLOUR(16777215);
                    eastl::operator+(local_50, (basic_string*)local_70, param_1);
                    this_00->SetSubjectName(local_50);
                    local_50->~basic_string();
                    local_70->~basic_string();
                    return;
                }
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)m_numEntries);
        }
    }

    // 0x1000732b0, 32 bytes, placed by class name
    // Minimenu::GetDefaultClickIndex() const
    int Minimenu::GetDefaultClickIndex() {
        int iVar1;

        iVar1 = -1;
        if (0 < m_numEntries) {
            iVar1 = m_numEntries + -1;
        }
        return iVar1;
    }

    // 0x1000732d0, 48 bytes, placed by class name
    // Minimenu::GetHoveredIndex() const
    void Minimenu::GetHoveredIndex() {
        if (((m_open == '\0') || ((int)field_788 < 0)) || (m_numEntries <= (int)field_788)) {
            GetDefaultClickIndex(this);
        }
    }

    // 0x100073300, 96 bytes, placed by class name
    // Minimenu::IsDefaultShiftClickOption()
    undefined8 Minimenu::IsDefaultShiftClickOption() {
        char cVar1;
        MinimenuEntry* this_00;

        if (((0 < m_numEntries) && (m_shiftClickEnabled != false)) && (cVar1 = IsShiftDown(this), cVar1 != '\0')) {
            this_00 = (MinimenuEntry*)std::array<MinimenuEntry, 500ul>::operator[](
                (array<MinimenuEntry, 500ul>*)&field_800, (long)m_numEntries - 1);
            cVar1 = this_00->IsShiftClickable();
            if (cVar1 != '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x100073370, 48 bytes, placed by class name
    // Minimenu::IsDefaultIgnoreSingleClickOption()
    undefined8 Minimenu::IsDefaultIgnoreSingleClickOption() {
        MinimenuEntry* this_00;

        if (m_numEntries < 1) {
            return 0;
        }
        this_00 = (MinimenuEntry*)std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)&field_800,
                                                                               (ulong)(m_numEntries - 1));
        return this_00->IgnoreSingleClickMode();
    }

    // 0x1000733b0, 176 bytes, placed by class name
    // Minimenu::SwapEntries(int, int)
    void Minimenu::SwapEntries(int param_1, int param_2) {
        MinimenuEntry* this_00;
        MinimenuEntry* this_01;
        MinimenuEntry local_b0;

        new (&local_b0) MinimenuEntry();
        this_00 = (MinimenuEntry*)std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)&field_800,
                                                                               (long)param_1);
        local_b0.CopyValues(this_00);
        this_01 = (MinimenuEntry*)std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)&field_800,
                                                                               (long)param_2);
        this_00->CopyValues(this_01);
        this_01->CopyValues(&local_b0);
        local_b0.~MinimenuEntry();
    }

    // 0x100073460, 64 bytes, placed by class name
    // Minimenu::Reset()
    void Minimenu::Reset() {
        long lVar1;

        m_numEntries = 0;
        field_0 = '\0';
        lVar1 = Client::Instance();
        ((lVar1 + 8496))->ResetDragAction();
        Close(this);
    }

    // 0x1000734a0, 288 bytes, placed by class name
    // Minimenu::ResetMinimenu()
    void Minimenu::ResetMinimenu() {
        char cVar1;
        bool bVar2;
        MinimenuOp* pMVar3;
        MinimenuEntry* this_00;
        MinimenuEntry* pMVar4;
        Minimenu* pMVar5;
        unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>* this_01;
        MinimenuSubject local_88;
        undefined8 local_48;
        undefined8 uStack_40;
        basic_string local_38[12];
        int local_2c[4];
        undefined4 local_1c;

        Reset(this);
        pMVar3 = (MinimenuOp*)(field_8, 1006)->GetOp();
        pMVar5 = this;
        cVar1 = CanAddOp(this, pMVar3);
        if (cVar1 != '\0') {
            m_numEntries = 1;
            bVar2 = std::operator==((unique_ptr*)pMVar5, (_func_decltype_nullptr*)pMVar3);
            if (bVar2) {
                local_48 = 0;
                uStack_40 = 0;
                local_88.field_48 = 0;
                local_88.field_52 = 0;
                local_88._56_8_ = 0;
                local_88.field_32 = 0;
                local_88.field_36 = 0;
                local_88.field_40 = 0;
                local_88._16_8_ = 0;
                local_88._24_8_ = 0;
                local_88._0_8_ = 0;
                local_88._8_8_ = 0;
                new (&local_88) MinimenuSubject();
                local_2c[0] = -1;
                local_2c[1] = 4294967295;
                local_2c[2] = 1006;
                local_2c[3] = 4294967295;
                local_1c = 0;
                std::make_unique<MinimenuEntry, eastl::stringconst&, MinimenuSubject, int, int, MinimenuOps::Value, int,
                                 MinimenuEntryFlags>(local_38, &local_88, local_2c, local_2c + 1,
                                                     (Value*)(local_2c + 2), local_2c + 3,
                                                     (MinimenuEntryFlags*)&local_1c);
                std::unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>::operator=(
                    (unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>*)&CANCEL_ENTRY,
                    (unique_ptr*)local_38);
                local_38->~unique_ptr();
                local_88.~MinimenuSubject();
            }
            this_01 = (unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>*)&field_800;
            this_00 =
                (MinimenuEntry*)std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)this_01, 0);
            pMVar4 =
                (MinimenuEntry*)std::unique_ptr<MinimenuEntry, std::default_delete<MinimenuEntry>>::operator*(this_01);
            this_00->CopyValues(pMVar4);
        }
    }

    // 0x100073680, 80 bytes, placed by class name and neighbouring functions
    // MinimenuEntry::CopyValues(MinimenuEntry const&)
    void MinimenuEntry::CopyValues(MinimenuEntry* param_1) {
        eastl::string::operator=((eastl::string*)&field_24, (basic_string*)&param_1->field_24);
        MinimenuSubject::operator=((MinimenuSubject*)&field_56, (MinimenuSubject*)&param_1->field_56);
        field_0 = param_1->field_0;
        m_z = param_1->m_z;
        field_8 = param_1->field_8;
        field_12 = param_1->field_12;
        field_16 = param_1->field_16;
    }

    // 0x1000736f0, 176 bytes, placed by class name
    // Minimenu::RemoveInterfaceEntries()
    void Minimenu::RemoveInterfaceEntries() {
        int iVar2;
        CommandLine* this_00;
        int iVar3;
        int iVar4;

        if (0 < m_numEntries) {
            iVar4 = 0;
            do {
                this_00 = (CommandLine*)std::array<MinimenuEntry, 500ul>::operator[](
                    (array<MinimenuEntry, 500ul>*)&field_800, (long)iVar4);
                iVar2 = this_00->GetPos();
                if (IsInterfaceEntry(iVar2) != '\0') {
                    iVar2 = iVar4;
                    if (iVar4 < m_numEntries + -1) {
                        do {
                            iVar3 = iVar2 + 1;
                            SwapEntries(this, iVar2, iVar3);
                            iVar2 = iVar3;
                        } while (iVar3 < m_numEntries + -1);
                    }
                    iVar4 = iVar4 + -1;
                    m_numEntries = m_numEntries + -1;
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < m_numEntries);
        }
        RecalculateMinimenuDimensions(this);
    }

    // 0x1000737a0, 48 bytes, placed by class name
    // Minimenu::IsInterfaceEntry(int)
    undefined8 Minimenu::IsInterfaceEntry(int param_1) {
        if ((((uint)param_1 < 59) && ((432345565334863872U >> ((ulong)(uint)param_1 & 63) & 1) != 0)) ||
            (param_1 == 1007)) {
            return 1;
        }
        return 0;
    }

    // 0x1000737d0, 80 bytes, placed by class name
    // Minimenu::RecalculateMinimenuDimensions()
    void Minimenu::RecalculateMinimenuDimensions() {
        undefined4 local_20[2];
        undefined4 local_18[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_20, field_776 / 2 + field_768);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_18, field_772);
        CalculateMinimenuDimensions(this, local_20[0], local_18[0]);
    }

    // 0x100073830, 16 bytes, placed by class name
    // Minimenu::GetAttackPriorityPlayer()
    int Minimenu::GetAttackPriorityPlayer() {
        return m_attackPriorityPlayer;
    }

    // 0x100073840, 16 bytes, placed by class name
    // Minimenu::GetAttackPriorityNpc()
    int Minimenu::GetAttackPriorityNpc() {
        return m_attackPriorityNpc;
    }

    // 0x100073850, 16 bytes, placed by class name
    // Minimenu::SetAttackPriorityPlayer(int)
    void Minimenu::SetAttackPriorityPlayer(int param_1) {
        m_attackPriorityPlayer = param_1;
    }

    // 0x100073860, 16 bytes, placed by class name
    // Minimenu::SetAttackPriorityNpc(int)
    void Minimenu::SetAttackPriorityNpc(int param_1) {
        m_attackPriorityNpc = param_1;
    }

    // 0x100073870, 16 bytes, placed by class name
    // Minimenu::SetFollowerLowPriority(bool)
    void Minimenu::SetFollowerLowPriority(bool param_1) {
        m_followerLowPriority = param_1;
    }

    // 0x100073880, 16 bytes, placed by class name
    // Minimenu::SetShiftClickEnabled(bool)
    void Minimenu::SetShiftClickEnabled(bool param_1) {
        m_shiftClickEnabled = param_1;
    }

    // 0x100073890, 16 bytes, placed by class name
    // Minimenu::InTouchMode()
    undefined1 Minimenu::InTouchMode() {
        return field_112;
    }

    // 0x1000738a0, 16 bytes, placed by class name
    // Minimenu::SetSimulatedShiftActive(bool)
    void Minimenu::SetSimulatedShiftActive(bool param_1) {
        m_simulatedShiftActive = param_1;
    }

    // 0x1000738b0, 16 bytes, placed by class name
    // Minimenu::GetSimulatedShiftActive()
    undefined1 Minimenu::GetSimulatedShiftActive() {
        return m_simulatedShiftActive;
    }

    // 0x1000738c0, 32 bytes, placed by class name
    // Minimenu::SetFeedbackSprite(int, bool)
    void Minimenu::SetFeedbackSprite(int param_1, bool param_2) {
        m_feedbackSprite = param_1;
        field_68920 = param_2;
        LoadPendingFeedback(this);
    }

    // 0x1000738e0, 16 bytes, placed by class name
    // Minimenu::SetFeedbackShowPopupText(bool)
    void Minimenu::SetFeedbackShowPopupText(bool param_1) {
        m_feedbackShowPopupText = param_1;
    }

    // 0x1000738f0, 16 bytes, placed by class name
    // Minimenu::SetStartHoverIndex(int)
    void Minimenu::SetStartHoverIndex(int param_1) {
        m_startHoverIndex = param_1;
    }

    // 0x100073900, 48 bytes, placed by class name
    // Minimenu::SetDrawHeader(bool)
    void Minimenu::SetDrawHeader(bool param_1) {
        undefined3 in_register_00000031;
        int iVar1;

        iVar1 = CONCAT31(in_register_00000031, param_1);
        field_69072 = iVar1;
        field_69064 = iVar1 * 2 + 1;
        field_69068 = iVar1 * 2 + 2;
    }

    // 0x100073930, 80 bytes, placed by class name
    // Minimenu::CalculateMouseStartPosition()
    int Minimenu::CalculateMouseStartPosition() {
        uint in_EAX;
        int iVar1;
        int* piVar2;
        undefined8 uStack_18;

        uStack_18 = (ulong)in_EAX;
        piVar2 = std::clamp<int>(&m_startHoverIndex, (int*)((long)&uStack_18 + 4), &m_numEntries);
        if (*piVar2 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = *piVar2 * field_104 + field_104 / 2 + 3;
        }
        return iVar1;
    }

    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    MinimenuEntry::Z() const;

    // 0x100073a30, 256 bytes, placed by class name
    // Minimenu::TestOps(eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator> const&)
    undefined1* Minimenu::TestOps(fixed_vector* param_1) {
        char cVar1;
        char* pcVar2;
        basic_string* pbVar3;
        eastl::string* this_00;
        ulong uVar4;
        basic_string local_50[32];

        uVar4 = 0;
        do {
            pcVar2 = (char*)eastl::vector<eastl::string,
                                          eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<eastl::string,
                               eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&m_testOps,
                       uVar4);
            eastl::string::sprintf(pcVar2, "%i: ", uVar4 & 4294967295);
            cVar1 = param_1->empty();
            if (cVar1 == '\0') {
                eastl::vector<eastl::string,
                              eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    uVar4);
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    pbVar3 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&m_testOps,
                        uVar4);
                    eastl::vector<eastl::string,
                                  eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        uVar4);
                    eastl::operator+(local_50, pbVar3);
                    this_00 = (eastl::string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&m_testOps,
                        uVar4);
                    eastl::string::operator=(this_00, local_50);
                    local_50->~basic_string();
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 5);
        return &m_testOps;
    }

} // namespace jag::oldscape::minimenu

namespace jag::auth {
    // 0x1000720a0: the linker folded this into oldscape::minimenu::MinimenuGlobalEntryData::operator=(oldscape::minimenu::MinimenuGlobalEntryData&&), which has identical code
    GameTokenResult::operator=(GameTokenResult&&);

} // namespace jag::auth
