// libs/game/runetek5/config/ConfigTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ConfigTypeList.h"
#include "Js5ConfigGroup.h"

namespace jag::game {
    // 0x100561a60
    BaseConfigTypeList::BaseConfigTypeList(const ModeGame* modeGame, const Language* language,
                                           Js5ResourceProvider& js5ResourceProvider,
                                           const Js5ArchiveSettings& js5ArchiveSettings,
                                           const Js5ConfigGroup* js5ConfigGroup)
        : field_32(0), field_40(0), m_pModeGame(modeGame), m_pLanguage(language),
          m_pResourceProvider(js5ResourceProvider), field_72(js5ArchiveSettings), m_pConfigGroup(js5ConfigGroup),
          m_entryCount(0), m_maxEntryIndex(0), m_groupCount(1) {
        uint8_t bVar3;
        int iVar4;
        unsigned int uVar5;
        uint64_t extraout_var;
        Js5Index* local_38;

        uint8_t uVar1 =
            (js5ResourceProvider._vptr->GetIndex__2)((Js5Index**)js5ResourceProvider, (Js5ArchiveSettings*)&local_38);
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != DataStatus::READY) {
            LogAssert("indexStatus == DataStatus::READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypeList.cpp",
                      20, "ConfigTypeList: Constructed before resource provider index was ready!");
        }
        field_32 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        Js5ConfigGroup* this_00 = m_pConfigGroup;
        if (this_00->IgnoreEntryCount() == '\0') {
            iVar4 = this_00->GetZ();
            if (iVar4 == 0) {
                uVar5 = m_pConfigGroup->GetX();
                uVar5 = local_38->GetMaximumFileID(uVar5);
                m_entryCount = uVar5;
                m_maxEntryIndex = uVar5;
            } else {
                uVar5 = local_38->GetAnimationLength();
                bVar3 = m_pConfigGroup->GetZ();
                iVar4 = local_38->GetMaximumFileID(uVar5);
                m_maxEntryIndex = iVar4 + (uVar5 << (bVar3 & 31));
                m_groupCount = uVar5 + 1;
                if (uVar5 + 1 != 0) {
                    uVar5 = 0;
                    do {
                        iVar4 = local_38->GetMaximumFileID(uVar5);
                        m_entryCount = m_entryCount + iVar4;
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < m_groupCount);
                }
            }
        }
    }

} // namespace jag::game
