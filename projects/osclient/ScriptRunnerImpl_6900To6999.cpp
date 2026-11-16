// projects/osclient/ScriptRunnerImpl_6900To6999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016e280, 2016 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand6900To6999(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand6900To6999(ScriptRunnerImpl* param_1, undefined4 param_2) {
        undefined4 uVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        byte bVar6;
        CoordGrid* pCVar7;
        undefined4* puVar8;
        shared_ptr* psVar9;
        long lVar10;
        array<eastl::string, 8ul>* this;
        basic_string* pbVar11;
        int* piVar12;
        uint* puVar13;
        DisplayName* pDVar14;
        eastl::string* pbVar15;
        uint uVar16;
        ulong uVar17;
        undefined8 uVar18;
        undefined1 local_68[16];
        CoordGrid local_58[2];
        uint local_38;
        int local_34;

        uVar18 = 2;
        pCVar7 = (CoordGrid*)Client::Instance();
        switch (param_2) {
        case 6900:
            if (param_1->m_activePlayer == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          28, (char*)0);
            }
            psVar9 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)(pCVar7 + 1201), (long)param_1->m_activePlayer);
            bVar4 = shared_ptr::operator_cast_to_bool(psVar9);
            if (!bVar4) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                36, "Active player doesn\'t exist");
            }
            lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
            pDVar14 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                (shared_ptr<rs2lib::social::DisplayName>*)(lVar10 + 992));
            pbVar11 = (basic_string*)pDVar14->GetDisplayName();
            uVar16 = param_1->field_136096;
            param_1->field_136096 = uVar16 + 1;
            pbVar15 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)uVar16);
            eastl::string::operator=(pbVar15, pbVar11);
            break;
        case 6901:
            if ((ulong)(long)(int)pCVar7[3249].m_x < 2048) {
                psVar9 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)(pCVar7 + 1201), (long)(int)pCVar7[3249].m_x);
                bVar4 = operator!=(psVar9, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    SetActivePlayer(param_1, pCVar7[3249].m_x);
                    iVar3 = param_1->field_104092;
                    param_1->field_104092 = iVar3 + 1;
                    puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](
                        (array<int, 1000ul>*)&param_1->field_100092, (long)iVar3);
                    *puVar8 = 1;
                    break;
                }
            }
            iVar3 = param_1->field_104092;
            param_1->field_104092 = iVar3 + 1;
            goto LAB_10016e85d;
        case 6902:
            if (param_1->m_activePlayer == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          58, (char*)0);
            }
            psVar9 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)(pCVar7 + 1201), (long)param_1->m_activePlayer);
            bVar4 = shared_ptr::operator_cast_to_bool(psVar9);
            if (!bVar4) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                66, "Active player doesn\'t exist");
            }
            lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
            uVar16 = *(uint*)(lVar10 + 440);
            goto LAB_10016e6d8;
        case 6903:
            if (param_1->m_activePlayer == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          74, (char*)0);
            }
            psVar9 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)(pCVar7 + 1201), (long)param_1->m_activePlayer);
            uVar17 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar17;
            puVar13 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar17);
            uVar16 = *puVar13;
            bVar4 = shared_ptr::operator_cast_to_bool(psVar9);
            if (!bVar4) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                92, "Active player doesn\'t exist");
            }
            lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
            if ((int)uVar16 < *(int*)(lVar10 + 440)) {
                local_38 = pCVar7[3249].m_level;
                lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
                piVar12 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar10 + 444), (long)(int)uVar16);
                local_34 = *piVar12;
                lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
                piVar12 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar10 + 484), (long)(int)uVar16);
                rs2lib::CoordGrid::CoordGrid(local_58, local_38, local_34, *piVar12);
                local_68->WorldCoordFromBuildCoord(pCVar7);
                uVar16 = local_68->ToBitPacked();
                goto LAB_10016e73e;
            }
            lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
            if (*(int*)(lVar10 + 440) <= (int)uVar16) {
                lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
                pDVar14 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                    (shared_ptr<rs2lib::social::DisplayName>*)(lVar10 + 992));
                pDVar14->GetDisplayName();
                uVar18 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssert("index < player->m_routeLength",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          81, "Route index %d is invalid for player ", (ulong)uVar16, uVar18);
            }
            iVar3 = param_1->field_104092;
            param_1->field_104092 = iVar3 + 1;
        LAB_10016e85d:
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                      (long)iVar3);
            *puVar8 = 4294967295;
            break;
        case 6904:
            if (param_1->m_activePlayer == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          100, (char*)0);
            }
            uVar16 = param_1->m_activePlayer;
            goto LAB_10016e6d8;
        case 6905:
            uVar16 = pCVar7[3249].m_x;
            goto LAB_10016e6d8;
        case 6906:
            uVar17 = (long)(int)param_1->field_136096 - 1;
            param_1->field_136096 = (uint)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, uVar17);
            uVar17 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar17;
            puVar8 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar17);
            uVar1 = *puVar8;
            if (param_1->m_activePlayer == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          115, (char*)0);
            }
            psVar9 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)(pCVar7 + 1201), (long)param_1->m_activePlayer);
            bVar4 = shared_ptr::operator_cast_to_bool(psVar9);
            if (!bVar4) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                124, "Active player doesn\'t exist");
            }
            lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
            eastl::string::operator=((eastl::string*)(lVar10 + 112), pbVar11);
            lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar9);
            *(undefined4*)(lVar10 + 148) = uVar1;
            break;
        case 6907:
            iVar3 = param_1->field_104092;
            uVar17 = (long)iVar3 - 2;
            param_1->field_104092 = (int)uVar17;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar17);
            iVar2 = *piVar12;
            uVar16 = iVar2 - 1;
            if (7 < uVar16) {
                uVar18 = logger::default_logger();
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6900To6999.cpp",
                                    142, "Player op index out of bounds. Must be between 1 and %d; received %d", 8,
                                    iVar2);
                (&param_1->field_141000, 1)->Raise();
                return 1;
            }
            piVar12 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, (long)iVar3 - 1);
            iVar3 = *piVar12;
            this = (array<eastl::string, 8ul>*)(*(Location**)&pCVar7[3271].m_z)->GetParentLocationType();
            pbVar11 = (basic_string*)std::array<eastl::string, 8ul>::operator[](this, (ulong)uVar16);
            if (iVar3 == 0) {
                local_58->StripTags(pbVar11);
            } else {
                new (local_58) eastl::string(pbVar11);
            }
            uVar16 = param_1->field_136096;
            param_1->field_136096 = uVar16 + 1;
            pbVar15 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)uVar16);
            eastl::string::operator=(pbVar15, (basic_string*)local_58);
            local_58->~basic_string();
            break;
        default:
            goto switchD_10016e2c1_caseD_1afc;
        case 6950:
            if (param_1->field_140944->IsSet() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activeTile.IsSet()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          150, (char*)0);
            }
            uVar16 = param_1->field_140944->ToBitPacked();
        LAB_10016e6d8:
            iVar3 = param_1->field_104092;
            param_1->field_104092 = iVar3 + 1;
        LAB_10016e752:
            puVar13 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, (long)iVar3);
            *puVar13 = uVar16;
            break;
        case 6951:
            uVar17 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar17;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar17);
            rs2lib::CoordGrid::CoordGrid(local_58, *piVar12);
            local_68->BuildCoordFromWorldCoord(pCVar7);
            bVar6 = ClientConstants::IsCoordInBuildArea((CoordGrid*)local_68);
            uVar16 = (uint)bVar6;
        LAB_10016e73e:
            iVar3 = param_1->field_104092;
            param_1->field_104092 = iVar3 + 1;
            goto LAB_10016e752;
        }
        uVar18 = 1;
    switchD_10016e2c1_caseD_1afc:
        return uVar18;
    }

    // 0x10016efa0, 16 bytes, base-object destructor, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::~$_0()
    /* ~$_0() */

    void ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::$_0::~__0() {
        ~pair();
    }

    // 0x1001774f0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::$_0($_0&&): jumps straight to the base-object constructor

    // 0x100177510, 16 bytes, base-object constructor, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::$_0($_0&&)
    /* $_0($_0&&) */

    void ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::$_0::__0(__0* param_1) {
        new (this) Filename(param_1);
    }

    // 0x1001777c0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::$_0($_0 const&): jumps straight to the base-object constructor

    // 0x1001777e0, 16 bytes, base-object constructor, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::$_0($_0 const&)
    /* $_0($_0 const&) */

    void ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::$_0::__0(__0* param_1) {
        new (this) Filename(param_1);
    }

    // 0x100177a50, 128 bytes, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::operator()() const
    /* ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp,
   ClientScript const&, bool)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::$_0::operator()() {
        Screengrabber* this_00;
        char* pcVar1;
        eastl::string local_50[32];
        allocator local_30[8];

        this_00 = (Screengrabber*)Instance();
        pcVar1 = (char*)GetName();
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, pcVar1, local_30);
        this_00->RequestScreenshot(local_50);
        eastl::string::~basic_string(local_50);
    }

    // 0x1001782e0, 32 bytes, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_1::operator()() const
    /* ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp,
   ClientScript const&, bool)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::$_1::operator()() {
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;

        this_00 = (Js5ResourceProvider*)Client::Instance();
        this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
        this_01->ShowUI(true);
    }

    // 0x100178c00, 64 bytes, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp, ClientScript const&, bool)::$_2::operator()() const
    /* ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp,
   ClientScript const&, bool)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    ulong ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp, ClientScript_const&, bool)::$_2::operator()() {
        undefined4 uVar1;

        (**(code**)(**(long**)this + 504))();
        uVar1 = (**(code**)(**(long**)this + 512))();
        return jag::auth::TokenAuthLoginHandler::IsFinished(uVar1) ^ 1;
    }

} // namespace jag::oldscape
