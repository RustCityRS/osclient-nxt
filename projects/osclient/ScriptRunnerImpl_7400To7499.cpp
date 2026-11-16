// projects/osclient/ScriptRunnerImpl_7400To7499.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b5c80
    uint64_t ScriptRunnerImpl::DoMinimenuOpTypeAt(int arg1) {
        int iVar1;

        auto pCVar3 = Client::Instance();
        uint32_t uVar2 = 0;
        if (-1 < arg1) {
            iVar1 = pCVar3->field_52344->GetNumEntries();
            if (arg1 < iVar1) {
                uVar2 = ((Mixer*)pCVar3->field_52344->GetEntryAtIndex(arg1))->GetStreamCountLastMix();
            }
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        uint32_t* puVar4 = (uint32_t*)field_100092[(long)iVar1];
        *puVar4 = uVar2;
        return 1;
    }

    // 0x1000b5d00
    uint64_t ScriptRunnerImpl::DoMinimenuTextAt(int arg1) {
        int iVar1;
        Logger* this_00;
        eastl::string* pbVar3;

        auto pCVar2 = Client::Instance();
        eastl::string local_78("");
        local_58 = eastl::string("");
        if (-1 < arg1) {
            iVar1 = pCVar2->field_52344->GetNumEntries();
            if (arg1 < iVar1) {
                this_00 = (Logger*)pCVar2->field_52344->GetEntryAtIndex(arg1);
                pbVar3 = (eastl::string*)this_00->second();
                local_78 = pbVar3;
                pbVar3 = (eastl::string*)this_00->GetLogStreams();
                local_58 = pbVar3;
            }
        }
        iVar1 = field_136096;
        field_136096 = iVar1 + 1;
        eastl::string* pbVar4 = &field_104096[(long)iVar1];
        *pbVar4 = &local_78;
        iVar1 = field_136096;
        field_136096 = iVar1 + 1;
        pbVar4 = &field_104096[(long)iVar1];
        *pbVar4 = &local_58;
        return 1;
    }

    // 0x1000b5e60
    uint64_t ScriptRunnerImpl::DoMinimenuFindNPCAt(int arg1) {
        int iVar1;
        Mixer* this_01;

        auto this_00 = Client::Instance();
        bool bVar5 = true;
        int iVar2 = -1;
        if (-1 < arg1) {
            iVar1 = this_00->field_52344->GetNumEntries();
            if (arg1 < iVar1) {
                this_01 = (Mixer*)this_00->field_52344->GetEntryAtIndex(arg1);
                iVar1 = this_01->GetStreamCountLastMix();
                if (iVar1 == 2) {
                    iVar2 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(this_01->GetDataType());
                    bVar5 = this_00->GetClientNpc(iVar2) == 0;
                }
            }
        }
        if (!bVar5) {
            SetActiveNPC(iVar2);
        }
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
        unsigned int* puVar4 = &field_100092[(long)iVar2];
        *puVar4 = (unsigned int)(bVar5 ^ 1);
        return 1;
    }

    // 0x1000b5f30
    uint64_t ScriptRunnerImpl::DoMinimenuFindLocAt(int arg1) {
        int iVar1;
        Mixer* this_00;
        long long arg1_00;
        LocInfo local_40;

        auto pCVar2 = Client::Instance();
        uint32_t uVar4 = 0;
        if (-1 < arg1) {
            iVar1 = pCVar2->field_52344->GetNumEntries();
            if (arg1 < iVar1) {
                this_00 = (Mixer*)pCVar2->field_52344->GetEntryAtIndex(arg1);
                iVar1 = this_00->GetStreamCountLastMix();
                if (iVar1 == 3) {
                    arg1_00 = this_00->GetDataType();
                    local_40 = LocInfo(arg1_00);
                    *field_140888 = local_40;
                    uVar4 = 1;
                }
            }
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        uint32_t* puVar3 = (uint32_t*)field_100092[(long)iVar1];
        *puVar3 = uVar4;
        return 1;
    }

    // 0x1000b6000
    uint64_t ScriptRunnerImpl::DoMinimenuFindObjAt(int arg1) {
        int iVar2;
        int iVar3;
        WorldmapAreaMetadata* this_01;
        long long arg1_00;
        uint32_t* puVar4;
        CoordGrid local_60;
        ReturnValue local_50;
        weak_ptr<dash3d::Decor> local_40;

        auto this_00 = Client::Instance();
        if ((-1 < arg1) && (iVar2 = this_00->field_52344->GetNumEntries(), arg1 < iVar2)) {
            this_01 = (WorldmapAreaMetadata*)this_00->field_52344->GetEntryAtIndex(arg1);
            iVar2 = this_01->GetStreamCountLastMix();
            if (iVar2 == 4) {
                arg1_00 = this_01->GetDataType();
                iVar2 = dash3d::MousePickingHelper::GetEntityXFromTypecode(arg1_00);
                iVar3 = dash3d::MousePickingHelper::GetEntityZFromTypecode(arg1_00);
                local_60 = rs2lib::CoordGrid(this_00->field_51984, iVar2, iVar3);
                iVar2 = this_01->GetNumVerts();
                iVar3 = this_01->GetMaxMapZ();
                local_50 = this_00->FindClientObj(field_140928, iVar2, iVar3);
                local_40 = weak_ptr(local_50);
                SetActiveObj(local_60, &local_40);
                if (((field_140888 + 24))->expired() == '\0') {
                    iVar2 = field_104092;
                    field_104092 = iVar2 + 1;
                    puVar4 = &field_100092[(long)iVar2];
                    *puVar4 = 1;
                    return 1;
                }
            }
        }
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
        puVar4 = (uint32_t*)field_100092[(long)iVar2];
        *puVar4 = 0;
        return 1;
    }

    // 0x1000b6190
    uint64_t ScriptRunnerImpl::DoMinimenuFindPlayerAt(int arg1) {
        int iVar1;
        Mixer* this_00;

        auto pCVar2 = Client::Instance();
        uint32_t uVar4 = 0;
        if (-1 < arg1) {
            iVar1 = pCVar2->field_52344->GetNumEntries();
            if (arg1 < iVar1) {
                this_00 = (Mixer*)pCVar2->field_52344->GetEntryAtIndex(arg1);
                iVar1 = this_00->GetStreamCountLastMix();
                if (iVar1 == 6) {
                    iVar1 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(this_00->GetDataType());
                    SetActivePlayer(iVar1);
                    uVar4 = 1;
                }
            }
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        uint32_t* puVar3 = (uint32_t*)field_100092[(long)iVar1];
        *puVar3 = uVar4;
        return 1;
    }

    // 0x1000b6230
    uint64_t ScriptRunnerImpl::DoMinimenuCoordAt(int arg1) {
        int iVar1;
        int iVar3;
        long long arg1_00;
        uint32_t* puVar5;
        CommandLine_vtbl* local_48;

        auto this_00 = Client::Instance();
        if ((arg1 < 0) || (iVar1 = this_00->field_52344->GetNumEntries(), iVar1 <= arg1)) {
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar5 = &field_100092[(long)iVar1];
            *puVar5 = 0;
            return 1;
        }
        auto this_01 = this_00->field_52344->GetEntryAtIndex(arg1);
        unsigned int uVar2 = this_01->GetStreamCountLastMix();
        new (&local_48) rs2lib::CoordGrid();
        if ((uVar2 < 7) && ((92U >> (uVar2 & 31) & 1) != 0)) {
            arg1_00 = this_01->GetDataType();
            iVar3 = dash3d::MousePickingHelper::GetEntityXFromTypecode(arg1_00);
            iVar1 = dash3d::MousePickingHelper::GetEntityZFromTypecode(arg1_00);
        } else {
            iVar1 = dash3d::world::m_mouseoverGroundZ;
            iVar3 = dash3d::world::m_mouseoverGroundX;
        }
        CoordGrid local_38(0, iVar3, iVar1);
        EnumOptionToggle local_40 = local_38.m_z;
        local_48 = (CommandLine_vtbl*)local_38._0_8_;
        local_38 = this_00->WorldCoordFromBuildCoord(local_48);
        iVar1 = this_00->field_51984;
        iVar3 = local_38.GetZ();
        int arg3 = local_38.GetPos();
        uint32_t uVar4 = rs2lib::CoordGrid::BitPack(iVar1, iVar3, arg3);
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar5 = (uint32_t*)field_100092[(long)iVar1];
        *puVar5 = uVar4;
        return 1;
    }

    // 0x1000b6380
    uint64_t ScriptRunnerImpl::DoMinimenuObjTypeAt(int arg1) {
        int iVar1;
        Mixer* this_00;

        auto pCVar3 = Client::Instance();
        uint32_t uVar2 = 0;
        if (-1 < arg1) {
            iVar1 = pCVar3->field_52344->GetNumEntries();
            if (arg1 < iVar1) {
                this_00 = (Mixer*)pCVar3->field_52344->GetEntryAtIndex(arg1);
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
        uint32_t* puVar4 = (uint32_t*)field_100092[(long)iVar1];
        *puVar4 = uVar2;
        return 1;
    }

    // 0x1000b6420
    uint64_t ScriptRunnerImpl::DoMinimenuFindComponentAt(int arg1) {
        bool bVar1;
        int iVar2;
        Mixer* this_01;

        auto pCVar3 = Client::Instance();
        shared_ptr local_40;
        uint8_t* this_00 = &field_140504;
        *this_00 = local_40;
        if (-1 < arg1) {
            iVar2 = pCVar3->field_52344->GetNumEntries();
            if (arg1 < iVar2) {
                this_01 = (Mixer*)pCVar3->field_52344->GetEntryAtIndex(arg1);
                iVar2 = this_01->GetStreamCountLastMix();
                if (iVar2 == 7) {
                    local_40 = this_01->GetComponent();
                    bVar1 = local_40 != nullptr;
                    if (bVar1) {
                        *this_00 = local_40;
                    }
                }
            }
        }
        bVar1 = *this_00 != nullptr;
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
        unsigned int* puVar4 = &field_100092[(long)iVar2];
        *puVar4 = (unsigned int)bVar1;
        return 1;
    }

} // namespace jag::oldscape
