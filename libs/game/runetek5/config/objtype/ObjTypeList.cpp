// libs/game/runetek5/config/objtype/ObjTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ObjTypeList.h"

namespace jag::game {
    // 0x1004abeb0: the linker folded this into EnvironmentOverride::GetBloomOverrides() const, which has identical code
    ObjTypeList::GetModelCache();

    // 0x1004af330: the linker folded this into MapArea::ShouldAutoFind() const, which has identical code
    bool ObjTypeList::IsMembersServer() const;

    // 0x1004f2e10, 352 bytes, base-object constructor, placed by class name and debug map
    // ObjTypeList::ObjTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&, bool)
    void ObjTypeList::ObjTypeList(undefined8 param_2, undefined8 param_3, long param_4, undefined8 param_5,
                                  ConfigProvider* param_6, bool param_7) {
        undefined1* this_00;
        char* pcVar1;
        undefined8* puVar2;
        eastl::string* pbVar3;

        BaseTemplateConfigTypeList<ObjType>::BaseTemplateConfigTypeList();
        field_0 = &PTR__ObjTypeList_100f02b50;
        field_112 = param_6;
        m_membersServer = param_7;
        new (&field_128, 10, "ObjTypeList") AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>();
        this_00 = &field_1224;
        new (this_00) std::array<eastl::string, 6ul>();
        new (&m_defaultIops) std::array<eastl::string, 5ul>();
        puVar2 = (undefined8*)std::array<char const*, 7ul>::operator[]((array<char const*, 7ul>*)&LocalisedText::TAKE,
                                                                       (ulong) * (uint*)(param_4 + 8));
        pcVar1 = (char*)*puVar2;
        pbVar3 = (eastl::string*)std::array<eastl::string, 6ul>::operator[]((array<eastl::string, 6ul>*)this_00, 2);
        eastl::string::assign(pbVar3, pcVar1);
        puVar2 = (undefined8*)std::array<char const*, 7ul>::operator[](
            (array<char const*, 7ul>*)&LocalisedText::EXAMINE, (ulong) * (uint*)(param_4 + 8));
        pcVar1 = (char*)*puVar2;
        pbVar3 = (eastl::string*)std::array<eastl::string, 6ul>::operator[]((array<eastl::string, 6ul>*)this_00, 5);
        eastl::string::assign(pbVar3, pcVar1);
        puVar2 = (undefined8*)std::array<char const*, 7ul>::operator[]((array<char const*, 7ul>*)&LocalisedText::DROP,
                                                                       (ulong) * (uint*)(param_4 + 8));
        pcVar1 = (char*)*puVar2;
        pbVar3 = (eastl::string*)std::array<eastl::string, 5ul>::operator[]((ulong)&m_defaultIops);
        eastl::string::assign(pbVar3, pcVar1);
    }

    // 0x1004f3160, 32 bytes, complete-object constructor, placed by class name and debug map
    // ObjTypeList::ObjTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&, bool)
    void ObjTypeList::ObjTypeList() {
        ObjTypeList();
    }

    // 0x1004f3180, 1008 bytes, placed by class name and debug map
    // ObjTypeList::ListPostDecode(shared_ptr<ObjType> const&)
    /* WARNING: Removing unreachable block (ram,4300158077) */
    /* WARNING: Removing unreachable block (ram,4300157877) */
    /* WARNING: Removing unreachable block (ram,4300157677) */
    /* WARNING: Removing unreachable block (ram,4300157476) */
    /* ObjTypeList::ListPostDecode(shared_ptr<ObjType> const&) */

    undefined* ObjTypeList::ListPostDecode(shared_ptr* param_1) {
        bool bVar1;
        int iVar3;
        ObjType* pOVar4;
        shared_ptr* psVar5;
        shared_ptr* psVar6;
        long lVar7;
        undefined8* puVar8;
        _func_decltype_nullptr* p_Var9;

        pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
        iVar3 = pOVar4->GetCertTemplate();
        if (iVar3 != -1) {
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetCertTemplate();
            psVar5 = (shared_ptr*)List(iVar3, 0);
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetCertLink();
            psVar6 = (shared_ptr*)List(iVar3, 0);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if (!bVar1) {
                return DataStatus::NOTLOADED;
            }
            bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
            if (!bVar1) {
                return DataStatus::NOTLOADED;
            }
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            pOVar4->SetupDerivedObject(0, psVar5, psVar6, 0);
        }
        pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
        iVar3 = pOVar4->GetShardTemplate();
        if (iVar3 != -1) {
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetShardTemplate();
            psVar5 = (shared_ptr*)List(iVar3, 0);
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetShardLink();
            psVar6 = (shared_ptr*)List(iVar3, 0);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if ((!bVar1) || (bVar1 = shared_ptr::operator_cast_to_bool(psVar6), !bVar1)) {
                return DataStatus::NOTLOADED;
            }
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            lVar7 = GetPriority();
            puVar8 = (undefined8*)std::array<char const*, 7ul>::operator[](
                (array<char const*, 7ul>*)&LocalisedText::DROP, (ulong) * (uint*)(lVar7 + 8));
            pOVar4->SetupDerivedObject(3, psVar5, psVar6, *puVar8);
        }
        pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
        iVar3 = pOVar4->GetLentTemplate();
        if (iVar3 != -1) {
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetLentTemplate();
            psVar5 = (shared_ptr*)List(iVar3, 0);
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetLentLink();
            psVar6 = (shared_ptr*)List(iVar3, 0);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if ((!bVar1) || (bVar1 = shared_ptr::operator_cast_to_bool(psVar6), !bVar1)) {
                return DataStatus::NOTLOADED;
            }
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            lVar7 = GetPriority();
            puVar8 = (undefined8*)std::array<char const*, 7ul>::operator[](
                (array<char const*, 7ul>*)&LocalisedText::LENT_ITEM_RETURN, (ulong) * (uint*)(lVar7 + 8));
            pOVar4->SetupDerivedObject(1, psVar5, psVar6, *puVar8);
        }
        pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
        iVar3 = pOVar4->GetBoughtTemplate();
        if (iVar3 != -1) {
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetBoughtTemplate();
            psVar5 = (shared_ptr*)List(iVar3, 0);
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->GetBoughtLink();
            psVar6 = (shared_ptr*)List(iVar3, 0);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if ((!bVar1) || (bVar1 = shared_ptr::operator_cast_to_bool(psVar6), !bVar1)) {
                return DataStatus::NOTLOADED;
            }
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            lVar7 = GetPriority();
            puVar8 = (undefined8*)std::array<char const*, 7ul>::operator[](
                (array<char const*, 7ul>*)&LocalisedText::BOUGHT_ITEM_DISCARD, (ulong) * (uint*)(lVar7 + 8));
            pOVar4->SetupDerivedObject(2, psVar5, psVar6, *puVar8);
        }
        if (IsMembersServer(this) == '\0') {
            pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
            iVar3 = pOVar4->IsMembers();
            if (iVar3 != 0) {
                pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                pOVar4->SetTeam('\0');
                pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                pOVar4->SetOps((array*)&field_1224);
                pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                pOVar4->SetIOps((array*)&m_defaultIops);
                pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                pOVar4->SetIsStockmarket(false);
                p_Var9 = (_func_decltype_nullptr*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                ObjType::SetQuests(p_Var9);
                pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                pOVar4->SetIsTradeable(false);
                pOVar4 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                pOVar4->RemoveAutoDisabledParams(field_112);
            }
        }
        return DataStatus::READY;
    }

} // namespace jag::game
