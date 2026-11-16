// projects/osclient/ScriptRunnerImpl_6900To6999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016e280
    uint64_t ScriptRunnerImpl::ExecuteCommand6900To6999(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint32_t uVar1;
        int iVar2;
        int iVar3;
        uint8_t bVar6;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        uint32_t* puVar7;
        shared_ptr* psVar8;
        long lVar9;
        array<eastl::string, 8ul>* this_01;
        eastl::string* pbVar10;
        int* piVar11;
        unsigned int* puVar12;
        DisplayName* pDVar13;
        eastl::string* pbVar14;
        unsigned int uVar15;
        unsigned long uVar16;
        CoordGrid local_68;
        CoordGrid local_58;
        int local_38;
        int local_34;

        uint64_t uVar17 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 6900:
            if (m_activePlayer == 4294967295) {
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          28, nullptr);
            }
            psVar8 = &this_00->field_19216[(long)(int)m_activePlayer];
            if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                36, "Active player doesn\'t exist");
            }
            lVar9 = (*psVar8).operator->();
            pDVar13 = (DisplayName*)(*((lVar9 + 992))).operator->();
            pbVar10 = pDVar13->GetDisplayName();
            iVar3 = field_136096;
            field_136096 = iVar3 + 1;
            pbVar14 = &field_104096[(long)iVar3];
            *pbVar14 = pbVar10;
            break;
        case 6901:
            if ((unsigned long)(long)this_00->field_51988 < 2048) {
                midiPlayerMainThread =
                    (shared_ptr<midi2::MidiPlayerMainThread>*)this_00->field_19216[(long)this_00->field_51988];
                if (*midiPlayerMainThread != nullptr) {
                    SetActivePlayer(this_00->field_51988);
                    iVar3 = field_104092;
                    field_104092 = iVar3 + 1;
                    puVar7 = &field_100092[(long)iVar3];
                    *puVar7 = 1;
                    break;
                }
            }
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
            goto LAB_10016e85d;
        case 6902:
            if (m_activePlayer == 4294967295) {
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          58, nullptr);
            }
            psVar8 = &this_00->field_19216[(long)(int)m_activePlayer];
            if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                66, "Active player doesn\'t exist");
            }
            lVar9 = (*psVar8).operator->();
            uVar15 = *(unsigned int*)(lVar9 + 440);
            goto LAB_10016e6d8;
        case 6903:
            if (m_activePlayer == 4294967295) {
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          74, nullptr);
            }
            psVar8 = &this_00->field_19216[(long)(int)m_activePlayer];
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar12 = &field_100092[uVar16];
            uVar15 = *puVar12;
            if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                92, "Active player doesn\'t exist");
            }
            lVar9 = (*psVar8).operator->();
            if ((int)uVar15 < *(int*)(lVar9 + 440)) {
                local_38 = this_00->field_51984;
                lVar9 = (*psVar8).operator->();
                piVar11 = (int*)(*((lVar9 + 444)))[(long)(int)uVar15];
                local_34 = *piVar11;
                lVar9 = (*psVar8).operator->();
                piVar11 = (int*)(*((lVar9 + 484)))[(long)(int)uVar15];
                local_58 = rs2lib::CoordGrid(local_38, local_34, *piVar11);
                local_68 = this_00->WorldCoordFromBuildCoord(local_58);
                uVar15 = local_68.ToBitPacked();
                goto LAB_10016e73e;
            }
            lVar9 = (*psVar8).operator->();
            if (*(int*)(lVar9 + 440) <= (int)uVar15) {
                lVar9 = (*psVar8).operator->();
                pDVar13 = (DisplayName*)(*((lVar9 + 992))).operator->();
                pDVar13->GetDisplayName();
                uVar17 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssert("index < player->m_routeLength",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          81, "Route index %d is invalid for player ", (unsigned long)uVar15, uVar17);
            }
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
        LAB_10016e85d:
            puVar7 = &field_100092[(long)iVar3];
            *puVar7 = 4294967295;
            break;
        case 6904:
            if (m_activePlayer == 4294967295) {
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          100, nullptr);
            }
            uVar15 = m_activePlayer;
            goto LAB_10016e6d8;
        case 6905:
            uVar15 = this_00->field_51988;
            goto LAB_10016e6d8;
        case 6906:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar7 = &field_100092[uVar16];
            uVar1 = *puVar7;
            if (m_activePlayer == 4294967295) {
                LogAssert("m_activePlayer != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          115, nullptr);
            }
            psVar8 = &this_00->field_19216[(long)(int)m_activePlayer];
            if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6900To6999.cpp",
                                124, "Active player doesn\'t exist");
            }
            lVar9 = (*psVar8).operator->();
            (*((lVar9 + 112))) = pbVar10;
            lVar9 = (*psVar8).operator->();
            *(uint32_t*)(lVar9 + 148) = uVar1;
            break;
        case 6907:
            iVar3 = field_104092;
            uVar16 = (long)iVar3 - 2;
            field_104092 = (int)uVar16;
            piVar11 = &field_100092[uVar16];
            iVar2 = *piVar11;
            uVar15 = iVar2 - 1;
            if (7 < uVar15) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          142, "Player op index out of bounds. Must be between 1 and %d; received %d", 8, iVar2);
                field_141000->Raise(1);
                return 1;
            }
            piVar11 = &field_100092[(long)iVar3 - 1];
            iVar3 = *piVar11;
            this_01 = (array<eastl::string, 8ul>*)this_00->field_52344->GetParentLocationType();
            pbVar10 = (eastl::string*)(*this_01)[(unsigned long)uVar15];
            if (iVar3 == 0) {
                local_58.StripTags(*pbVar10);
            } else {
                local_58 = eastl::string(*pbVar10);
            }
            iVar3 = field_136096;
            field_136096 = iVar3 + 1;
            pbVar14 = &field_104096[(long)iVar3];
            *pbVar14 = &local_58;
            break;
        default:
            goto switchD_10016e2c1_caseD_1afc;
        case 6950:
            if (!(field_140944->IsSet())) {
                LogAssert("m_activeTile.IsSet()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6900To6999.cpp",
                          150, nullptr);
            }
            uVar15 = field_140944->ToBitPacked();
        LAB_10016e6d8:
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
        LAB_10016e752:
            puVar12 = &field_100092[(long)iVar3];
            *puVar12 = uVar15;
            break;
        case 6951:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar11 = &field_100092[uVar16];
            local_58 = rs2lib::CoordGrid(*piVar11);
            local_68 = this_00->BuildCoordFromWorldCoord(local_58);
            bVar6 = ClientConstants::IsCoordInBuildArea(local_68);
            uVar15 = (unsigned int)bVar6;
        LAB_10016e73e:
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
            goto LAB_10016e752;
        }
        uVar17 = 1;
    switchD_10016e2c1_caseD_1afc:
        return uVar17;
    }

    // 0x10016efa0
    ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::~$_0() {}

    // 0x100177510
    ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::$_0($_0&& arg1)
        : Filename(arg1) {}

    // 0x1001777e0
    ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::$_0(const $_0& arg1)
        : Filename(arg1) {}

    // 0x100177a50
    void ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::operator()() const {
        auto this_00 = Instance();
        auto str = GetName();
        eastl::string local_50(str);
        this_00->RequestScreenshot(local_50);
    }

    // 0x1001782e0
    void ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_1::operator()() const {
        auto this_00 = Client::Instance();
        ((NXTPixToolkit*)this_00->GetMemoryCache())->ShowUI(true);
    }

    // 0x100178c00
    unsigned long ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp, ClientScript const&,
                                                             bool)::$_2::operator()() const {
        (**(void (**)(...))(**(long**)this + 504))();
        return jag::auth::TokenAuthLoginHandler::IsFinished((**(void (**)(...))(**(long**)this + 512))()) ^ 1;
    }

} // namespace jag::oldscape
