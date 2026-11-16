// projects/osclient/ScriptRunnerImpl_7400To7499.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b5c80, 128 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuOpTypeAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuOpTypeAt(int param_1) {
        int iVar1;
        undefined4 uVar2;
        long lVar3;
        Mixer* this_00;
        undefined4* puVar4;

        lVar3 = Client::Instance();
        uVar2 = 0;
        if (-1 < param_1) {
            iVar1 = (*(Minimenu**)(lVar3 + 52344))->GetNumEntries();
            if (param_1 < iVar1) {
                this_00 = (Mixer*)(*(Minimenu**)(lVar3 + 52344))->GetEntryAtIndex(param_1);
                uVar2 = this_00->GetStreamCountLastMix();
            }
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
        *puVar4 = uVar2;
        return 1;
    }

    // 0x1000b5d00, 352 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuTextAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuTextAt(int param_1) {
        uint uVar1;
        int iVar2;
        long lVar3;
        Logger* this_00;
        basic_string* pbVar4;
        eastl::string* pbVar5;
        eastl::string local_78[32];
        allocator local_58[32];
        allocator local_38[8];

        lVar3 = Client::Instance();
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        eastl::string::basic_string(local_78, "", local_58);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (local_58) eastl::string("", local_38);
        if (-1 < param_1) {
            iVar2 = (*(Minimenu**)(lVar3 + 52344))->GetNumEntries();
            if (param_1 < iVar2) {
                this_00 = (Logger*)(*(Minimenu**)(lVar3 + 52344))->GetEntryAtIndex(param_1);
                pbVar4 = (basic_string*)this_00->second();
                eastl::string::operator=(local_78, pbVar4);
                pbVar4 = (basic_string*)this_00->GetLogStreams();
                eastl::string::operator=((eastl::string*)local_58, pbVar4);
            }
        }
        uVar1 = field_136096;
        field_136096 = uVar1 + 1;
        pbVar5 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
            (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar1);
        eastl::string::operator=(pbVar5, (basic_string*)local_78);
        uVar1 = field_136096;
        field_136096 = uVar1 + 1;
        pbVar5 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
            (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar1);
        eastl::string::operator=(pbVar5, (basic_string*)local_58);
        local_58->~basic_string();
        eastl::string::~basic_string(local_78);
        return 1;
    }

    // 0x1000b5e60, 208 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuFindNPCAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuFindNPCAt(int param_1) {
        int iVar1;
        int iVar2;
        Client* this_00;
        Mixer* this_01;
        longlong lVar3;
        uint* puVar5;
        bool bVar6;

        this_00 = (Client*)Client::Instance();
        bVar6 = true;
        iVar2 = -1;
        if (-1 < param_1) {
            iVar1 = this_00->field_52344->GetNumEntries();
            if (param_1 < iVar1) {
                this_01 = (Mixer*)(this_00->field_52344, param_1)->GetEntryAtIndex();
                iVar1 = this_01->GetStreamCountLastMix();
                if (iVar1 == 2) {
                    lVar3 = this_01->GetDataType();
                    iVar2 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar3);
                    bVar6 = this_00->GetClientNpc(iVar2) == 0;
                }
            }
        }
        if (!bVar6) {
            SetActiveNPC(this, iVar2);
        }
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
        puVar5 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar2);
        *puVar5 = (uint)(bVar6 ^ 1);
        return 1;
    }

    // 0x1000b5f30, 208 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuFindLocAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuFindLocAt(int param_1) {
        int iVar1;
        long lVar2;
        Mixer* this_00;
        longlong lVar3;
        undefined4* puVar4;
        undefined4 uVar5;
        LocInfo local_40;

        lVar2 = Client::Instance();
        uVar5 = 0;
        if (-1 < param_1) {
            iVar1 = (*(Minimenu**)(lVar2 + 52344))->GetNumEntries();
            if (param_1 < iVar1) {
                this_00 = (Mixer*)(*(Minimenu**)(lVar2 + 52344))->GetEntryAtIndex(param_1);
                iVar1 = this_00->GetStreamCountLastMix();
                if (iVar1 == 3) {
                    lVar3 = this_00->GetDataType();
                    new (&local_40) LocInfo(lVar3);
                    LocInfo::operator=((LocInfo*)field_140888, &local_40);
                    local_40.~pair();
                    uVar5 = 1;
                }
            }
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
        *puVar4 = uVar5;
        return 1;
    }

    // 0x1000b6000, 400 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuFindObjAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuFindObjAt(int param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        CoordGrid* pCVar4;
        WorldmapAreaMetadata* this_00;
        longlong lVar5;
        undefined4* puVar6;
        CoordGrid local_60;
        shared_ptr<RSevenDebugPresetProvider> local_50[16];
        weak_ptr<dash3d::Decor> local_40[16];

        pCVar4 = (CoordGrid*)Client::Instance();
        if ((-1 < param_1) && (iVar2 = (*(Minimenu**)&pCVar4[3271].m_z)->GetNumEntries(), param_1 < iVar2)) {
            this_00 = (WorldmapAreaMetadata*)(*(Minimenu**)&pCVar4[3271].m_z)->GetEntryAtIndex(param_1);
            iVar2 = this_00->GetStreamCountLastMix();
            if (iVar2 == 4) {
                lVar5 = this_00->GetDataType();
                iVar2 = dash3d::MousePickingHelper::GetEntityXFromTypecode(lVar5);
                iVar3 = dash3d::MousePickingHelper::GetEntityZFromTypecode(lVar5);
                new (&local_60) rs2lib::CoordGrid(pCVar4[3249].m_level, iVar2, iVar3);
                iVar2 = this_00->GetNumVerts();
                this_00->GetMaxMapZ();
                local_50->FindClientObj(pCVar4, (int)this + 140928, iVar2);
                weak_ptr<dash3d::Decor>::weak_ptr(local_40, (weak_ptr*)local_50);
                SetActiveObj(this, &local_60, local_40);
                local_40->~weak_ptr();
                cVar1 = ((field_140888 + 24))->expired();
                if (cVar1 == '\0') {
                    iVar2 = field_104092;
                    field_104092 = iVar2 + 1;
                    puVar6 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                              (long)iVar2);
                    *puVar6 = 1;
                    local_50->~shared_ptr();
                    return 1;
                }
                local_50->~shared_ptr();
            }
        }
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
        puVar6 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar2);
        *puVar6 = 0;
        return 1;
    }

    // 0x1000b6190, 160 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuFindPlayerAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuFindPlayerAt(int param_1) {
        int iVar1;
        long lVar2;
        Mixer* this_00;
        longlong lVar3;
        undefined4* puVar4;
        undefined4 uVar5;

        lVar2 = Client::Instance();
        uVar5 = 0;
        if (-1 < param_1) {
            iVar1 = (*(Minimenu**)(lVar2 + 52344))->GetNumEntries();
            if (param_1 < iVar1) {
                this_00 = (Mixer*)(*(Minimenu**)(lVar2 + 52344))->GetEntryAtIndex(param_1);
                iVar1 = this_00->GetStreamCountLastMix();
                if (iVar1 == 6) {
                    lVar3 = this_00->GetDataType();
                    iVar1 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar3);
                    SetActivePlayer(this, iVar1);
                    uVar5 = 1;
                }
            }
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
        *puVar4 = uVar5;
        return 1;
    }

    // 0x1000b6230, 336 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuCoordAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuCoordAt(int param_1) {
        int iVar1;
        uint uVar2;
        int iVar3;
        undefined4 uVar4;
        CoordGrid* pCVar5;
        Mixer* this_00;
        longlong lVar6;
        undefined4* puVar7;
        CoordGrid local_48;
        CoordGrid local_38;

        pCVar5 = (CoordGrid*)Client::Instance();
        if ((param_1 < 0) || (iVar1 = (*(Minimenu**)&pCVar5[3271].m_z)->GetNumEntries(), iVar1 <= param_1)) {
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar7 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
            *puVar7 = 0;
            return 1;
        }
        this_00 = (Mixer*)(*(Minimenu**)&pCVar5[3271].m_z)->GetEntryAtIndex(param_1);
        uVar2 = this_00->GetStreamCountLastMix();
        new (&local_48) rs2lib::CoordGrid();
        if ((uVar2 < 7) && ((92U >> (uVar2 & 31) & 1) != 0)) {
            lVar6 = this_00->GetDataType();
            iVar3 = dash3d::MousePickingHelper::GetEntityXFromTypecode(lVar6);
            iVar1 = dash3d::MousePickingHelper::GetEntityZFromTypecode(lVar6);
        } else {
            iVar1 = dash3d::world::m_mouseoverGroundZ;
            iVar3 = dash3d::world::m_mouseoverGroundX;
        }
        new (&local_38) rs2lib::CoordGrid(0, iVar3, iVar1);
        local_48.m_z = local_38.m_z;
        local_48.m_level = local_38.m_level;
        local_48.m_x = local_38.m_x;
        local_38.WorldCoordFromBuildCoord(pCVar5);
        uVar2 = pCVar5[3249].m_level;
        iVar1 = local_38.GetZ();
        iVar3 = local_38.GetPos();
        uVar4 = rs2lib::CoordGrid::BitPack(uVar2, iVar1, iVar3);
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar7 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
        *puVar7 = uVar4;
        return 1;
    }

    // 0x1000b6380, 160 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuObjTypeAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuObjTypeAt(int param_1) {
        int iVar1;
        undefined4 uVar2;
        long lVar3;
        Mixer* this_00;
        undefined4* puVar4;

        lVar3 = Client::Instance();
        uVar2 = 0;
        if (-1 < param_1) {
            iVar1 = (*(Minimenu**)(lVar3 + 52344))->GetNumEntries();
            if (param_1 < iVar1) {
                this_00 = (Mixer*)(*(Minimenu**)(lVar3 + 52344))->GetEntryAtIndex(param_1);
                iVar1 = this_00->GetStreamCountLastMix();
                if (iVar1 != 4) {
                    iVar1 = this_00->GetStreamCountLastMix();
                    if (iVar1 != 5)
                        goto LAB_1000b63e6;
                }
                uVar2 = this_00->GetNumVerts();
            }
        }
    LAB_1000b63e6:
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
        *puVar4 = uVar2;
        return 1;
    }

    // 0x1000b6420, 272 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoMinimenuFindComponentAt(int)
    undefined8 ScriptRunnerImpl::DoMinimenuFindComponentAt(int param_1) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        long lVar3;
        Mixer* this_01;
        uint* puVar4;
        shared_ptr local_40;

        lVar3 = Client::Instance();
        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_00 = field_140504;
        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, &local_40);
        local_40.~shared_ptr();
        if (-1 < param_1) {
            iVar2 = (*(Minimenu**)(lVar3 + 52344))->GetNumEntries();
            if (param_1 < iVar2) {
                this_01 = (Mixer*)(*(Minimenu**)(lVar3 + 52344))->GetEntryAtIndex(param_1);
                iVar2 = this_01->GetStreamCountLastMix();
                if (iVar2 == 7) {
                    local_40.GetComponent();
                    bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                    if (bVar1) {
                        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, &local_40);
                    }
                    local_40.~shared_ptr();
                }
            }
        }
        bVar1 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
        puVar4 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar2);
        *puVar4 = (uint)bVar1;
        return 1;
    }

} // namespace jag::oldscape
