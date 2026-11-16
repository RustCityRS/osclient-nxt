// libs/game/runetek5/player/PlayerModelCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerModelCache.h"

namespace jag::game {
    // 0x1004964d0
    void PlayerModelCache::CacheModelSet(const PlayerModel& playerModel,
                                         const BuildRequest<graphics::Model, BuildModelMain>& buildRequest) {
        BuildRequest<graphics::Model, BuildModelMain> local_30;

        MakeSharedPool<PlayerModelModelSet, 256>::MakeShared<BuildRequest<graphics::Model, BuildModelMain> const&>(
            &local_30);
        CacheModelSet(playerModel, local_30);
    }

    // 0x100496f50
    shared_ptr* PlayerModelCache::GetModelSet(const PlayerModel& playerModel) {
        bool bVar1;
        bool cVar2;
        shared_ptr* in_RAX;
        long lVar5;
        shared_ptr* local_38;

        long* plVar3 = (long*)std::array<PlayerModelCacheEntry, 4ul>::begin();
        long* plVar4 = (long*)std::array<PlayerModelCacheEntry, 4ul>::end();
        return local_38 = in_RAX;
        while (true) {
            if (plVar3 == plVar4) {
                return (shared_ptr*)&PlayerModelModelSet::NullPlayerModelSet;
            }
            bVar1 = true;
            if ((*plVar3 != -1) && (cVar2 = KeyMatches(playerModel, *((plVar3 + 1))), cVar2)) {
                lVar5 = FrameTime::GetCurrentTimeMS();
                *plVar3 = lVar5;
                local_38 = (shared_ptr*)(plVar3 + 14);
                bVar1 = false;
            }
            if (!bVar1)
                break;
            plVar3 = plVar3 + 16;
        }
    }

    // 0x100497590
    void PlayerModelCache::CacheModelSet(const PlayerModel& playerModel,
                                         shared_ptr<PlayerModelModelSet>& playerModelModelSet) {
        long* plVar3;
        long lVar4;

        unsigned long arg1 = 0;
        long* plVar5 = nullptr;
        do {
            plVar3 = (long*)(*this)[arg1];
            if (KeyMatches(playerModel, *((plVar3 + 1))) != '\0') {
                lVar4 = FrameTime::GetCurrentTimeMS();
                *plVar3 = lVar4;
                return;
            }
            if ((plVar5 == nullptr) || (*plVar3 < *plVar5)) {
                plVar5 = plVar3;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 4);
        lVar4 = FrameTime::GetCurrentTimeMS();
        *plVar5 = lVar4;
        uint32_t uVar2 = playerModel.GetOverride();
        *(uint32_t*)(plVar5 + 1) = uVar2;
        (*((plVar5 + 2))) = playerModel.field_32;
        (*((plVar5 + 5))) = playerModel.field_56;
        (*((plVar5 + 8))) = playerModel.field_80;
        (*((plVar5 + 11))) = playerModel.field_104;
        (*((plVar5 + 14))) = playerModelModelSet;
    }

    // 0x100497670
    uint64_t PlayerModelCache::KeyMatches(const PlayerModel& playerModel,
                                          const PlayerModelCacheKey& playerModelCacheKey) {
        int iVar2;
        PlayerModel* this_00;

        bool cVar1 = playerModel.field_32 == playerModelCacheKey.field_8;
        if ((((!cVar1) || (cVar1 = playerModel.field_80 == playerModelCacheKey.field_56, !cVar1)) ||
             (cVar1 = playerModel.field_104 == playerModelCacheKey.field_80, !cVar1)) ||
            (this_00 = playerModel, iVar2 = playerModel.GetOverride(), iVar2 != *(int*)playerModelCacheKey)) {
            return 0;
        }
        return CustomisationMatches((PlayerModelCache*)this_00,
                                    (Array<shared_ptr<ObjTypeCustomisation>>*)&playerModel.field_56,
                                    (Array<shared_ptr<ObjTypeCustomisation>>*)&playerModelCacheKey.field_32);
    }

    // 0x100497ab0
    unsigned long
    PlayerModelCache::CustomisationMatches(const Array<shared_ptr<ObjTypeCustomisation>>& objTypeCustomisations1,
                                           const Array<shared_ptr<ObjTypeCustomisation>>& objTypeCustomisations2) {
        bool bVar1;
        bool cVar2;
        unsigned long uVar5;
        shared_ptr* psVar6;
        shared_ptr<ObjTypeCustomisation>* psVar7;
        ObjTypeCustomisation* this_00;
        ObjTypeCustomisation* objTypeCustomisation;
        uint64_t in_RCX;
        unsigned long uVar8;
        unsigned long uVar9;

        long lVar3 = objTypeCustomisations1.end();
        long lVar4 = objTypeCustomisations2.end();
        if (lVar3 == lVar4) {
            lVar3 = objTypeCustomisations1.end();
            uVar8 = (((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
            if (lVar3 != 0) {
                uVar5 = 0;
                uVar9 = 1;
                do {
                    psVar6 = &objTypeCustomisations1[uVar5];
                    cVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                    if (!cVar2) {
                        psVar6 = &objTypeCustomisations2[uVar5];
                        cVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (cVar2)
                            goto LAB_100497b46;
                    } else {
                    LAB_100497b46:
                        psVar6 = &objTypeCustomisations1[uVar5];
                        cVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (!cVar2)
                            goto LAB_100497bb0;
                        psVar6 = &objTypeCustomisations2[uVar5];
                        cVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (!cVar2)
                            goto LAB_100497bb0;
                        psVar7 = &objTypeCustomisations1[uVar5];
                        this_00 = (ObjTypeCustomisation*)**psVar7;
                        psVar7 = &objTypeCustomisations2[uVar5];
                        objTypeCustomisation = (ObjTypeCustomisation*)**psVar7;
                        cVar2 = *this_00 == *objTypeCustomisation;
                        if (!cVar2)
                            goto LAB_100497bb0;
                    }
                    uVar5 = objTypeCustomisations1.end();
                    bVar1 = uVar9 < uVar5;
                    uVar5 = uVar9;
                    uVar9 = (unsigned long)((int)uVar9 + 1);
                } while (bVar1);
                uVar8 = (((uint64_t)((int64_t)(uVar8 >> 8)) << 8) | (uint8_t)1);
            }
        } else {
        LAB_100497bb0:
            uVar8 = 0;
        }
        return uVar8 & 4294967295;
    }

} // namespace jag::game
