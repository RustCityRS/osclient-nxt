// libs/game/runetek5/config/objtype/ObjTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ObjTypeList.h"

namespace jag::game {
    // 0x1004abeb0: ObjTypeList::GetModelCache() has the same machine code as EnvironmentOverride::GetBloomOverrides() const

    // 0x1004af330: ObjTypeList::IsMembersServer() const has the same machine code as MapArea::ShouldAutoFind() const

    // 0x1004f2e10
    ObjTypeList::ObjTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider,
                             ConfigProvider& configProvider, bool arg6)
        : BaseTemplateConfigTypeList<ObjType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG_OBJ), (Js5ConfigGroup*)Js5ConfigGroup::OBJTYPE,
                                              368),
          field_112(configProvider), m_membersServer(arg6), field_128(10, "ObjTypeList") {
        uint8_t* this_00 = &field_1224;
        new (this_00) std::array<eastl::string, 6ul>();
        new (&m_defaultIops) std::array<eastl::string, 5ul>();
        uint64_t* puVar2 =
            (uint64_t*)(*((array<char const*, 7ul>*)&LocalisedText::TAKE))[(unsigned long)language->field_8];
        char* pcVar1 = (char*)*puVar2;
        eastl::string* pbVar3 = (eastl::string*)(*this_00)[2];
        eastl::string::assign(pbVar3, pcVar1);
        puVar2 = (uint64_t*)(*((array<char const*, 7ul>*)&LocalisedText::EXAMINE))[(unsigned long)language->field_8];
        pcVar1 = (char*)*puVar2;
        pbVar3 = (eastl::string*)(*this_00)[5];
        eastl::string::assign(pbVar3, pcVar1);
        unsigned long arg1 = (unsigned long)language->field_8;
        puVar2 = (uint64_t*)(*((array<char const*, 7ul>*)&LocalisedText::DROP))[arg1];
        pcVar1 = (char*)*puVar2;
        pbVar3 = &m_defaultIops[arg1];
        eastl::string::assign(pbVar3, pcVar1);
    }

    // 0x1004f3180
    uint8_t* ObjTypeList::ListPostDecode(const shared_ptr<ObjType>& objType) {
        bool cVar1;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        long lVar6;
        uint64_t* puVar7;

        auto pOVar3 = objType.operator->();
        int iVar2 = pOVar3->GetCertTemplate();
        if (iVar2 != -1) {
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetCertTemplate();
            psVar4 = (shared_ptr*)List(iVar2, nullptr);
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetCertLink();
            psVar5 = (shared_ptr*)List(iVar2, nullptr);
            cVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if (!cVar1) {
                return DataStatus::NOTLOADED;
            }
            cVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if (!cVar1) {
                return DataStatus::NOTLOADED;
            }
            pOVar3 = (ObjType*)objType.operator->();
            pOVar3->SetupDerivedObject(0, *psVar4, *psVar5, nullptr);
        }
        pOVar3 = (ObjType*)objType.operator->();
        iVar2 = pOVar3->GetShardTemplate();
        if (iVar2 != -1) {
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetShardTemplate();
            psVar4 = (shared_ptr*)List(iVar2, nullptr);
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetShardLink();
            psVar5 = (shared_ptr*)List(iVar2, nullptr);
            cVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if ((!cVar1) || (cVar1 = shared_ptr::operator_cast_to_bool(psVar5), !cVar1)) {
                return DataStatus::NOTLOADED;
            }
            pOVar3 = (ObjType*)objType.operator->();
            lVar6 = GetPriority();
            puVar7 = (uint64_t*)(*(
                (array<char const*, 7ul>*)&LocalisedText::DROP))[(unsigned long)*(unsigned int*)(lVar6 + 8)];
            pOVar3->SetupDerivedObject(3, *psVar4, *psVar5, *puVar7);
        }
        pOVar3 = (ObjType*)objType.operator->();
        iVar2 = pOVar3->GetLentTemplate();
        if (iVar2 != -1) {
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetLentTemplate();
            psVar4 = (shared_ptr*)List(iVar2, nullptr);
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetLentLink();
            psVar5 = (shared_ptr*)List(iVar2, nullptr);
            cVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if ((!cVar1) || (cVar1 = shared_ptr::operator_cast_to_bool(psVar5), !cVar1)) {
                return DataStatus::NOTLOADED;
            }
            pOVar3 = (ObjType*)objType.operator->();
            lVar6 = GetPriority();
            puVar7 = (uint64_t*)(*((
                array<char const*, 7ul>*)&LocalisedText::LENT_ITEM_RETURN))[(unsigned long)*(unsigned int*)(lVar6 + 8)];
            pOVar3->SetupDerivedObject(1, *psVar4, *psVar5, *puVar7);
        }
        pOVar3 = (ObjType*)objType.operator->();
        iVar2 = pOVar3->GetBoughtTemplate();
        if (iVar2 != -1) {
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetBoughtTemplate();
            psVar4 = (shared_ptr*)List(iVar2, nullptr);
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->GetBoughtLink();
            psVar5 = (shared_ptr*)List(iVar2, nullptr);
            cVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if ((!cVar1) || (cVar1 = shared_ptr::operator_cast_to_bool(psVar5), !cVar1)) {
                return DataStatus::NOTLOADED;
            }
            pOVar3 = (ObjType*)objType.operator->();
            lVar6 = GetPriority();
            puVar7 = (uint64_t*)(*((array<char const*, 7ul>*)&LocalisedText::BOUGHT_ITEM_DISCARD))[(unsigned long)*(
                unsigned int*)(lVar6 + 8)];
            pOVar3->SetupDerivedObject(2, *psVar4, *psVar5, *puVar7);
        }
        cVar1 = IsMembersServer();
        if (!cVar1) {
            pOVar3 = (ObjType*)objType.operator->();
            iVar2 = pOVar3->IsMembers();
            if (iVar2 != 0) {
                pOVar3 = (ObjType*)objType.operator->();
                pOVar3->SetTeam('\0');
                pOVar3 = (ObjType*)objType.operator->();
                pOVar3->SetOps(field_1224);
                pOVar3 = (ObjType*)objType.operator->();
                pOVar3->SetIOps(m_defaultIops);
                pOVar3 = (ObjType*)objType.operator->();
                pOVar3->SetIsStockmarket(false);
                ObjType::SetQuests((void*)objType.operator->());
                pOVar3 = (ObjType*)objType.operator->();
                pOVar3->SetIsTradeable(false);
                pOVar3 = (ObjType*)objType.operator->();
                pOVar3->RemoveAutoDisabledParams(*field_112);
            }
        }
        return DataStatus::READY;
    }

} // namespace jag::game
