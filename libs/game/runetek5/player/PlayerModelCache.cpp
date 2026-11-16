// libs/game/runetek5/player/PlayerModelCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerModelCache.h"

namespace jag::game {
    // 0x1004964d0, 96 bytes, placed by class name and debug map
    // PlayerModelCache::CacheModelSet(PlayerModel const&, BuildRequest<graphics::Model, BuildModelMain> const&)
    void PlayerModelCache::CacheModelSet(PlayerModel* param_1, BuildRequest* param_2) {
        shared_ptr local_30;

        MakeSharedPool<PlayerModelModelSet, 256>::MakeShared<BuildRequest<graphics::Model, BuildModelMain> const&>(
            &local_30, (MakeSharedPool<PlayerModelModelSet, 256>*)param_2, param_2);
        CacheModelSet(this, param_1, &local_30);
        local_30.~shared_ptr();
    }

    // 0x100496f50, 160 bytes, placed by class name and debug map
    // PlayerModelCache::GetModelSet(PlayerModel const&)
    long* PlayerModelCache::GetModelSet(PlayerModel* param_1) {
        bool bVar1;
        char cVar2;
        long* in_RAX;
        long* plVar3;
        long* plVar4;
        long lVar5;
        long* local_38;

        plVar3 = (long*)begin();
        plVar4 = (long*)end();
        local_38 = in_RAX;
        while (true) {
            if (plVar3 == plVar4) {
                return (long*)&PlayerModelModelSet::NullPlayerModelSet;
            }
            bVar1 = true;
            if ((*plVar3 != -1) &&
                (cVar2 = KeyMatches(this, param_1, (PlayerModelCacheKey*)(plVar3 + 1)), cVar2 != '\0')) {
                lVar5 = FrameTime::GetCurrentTimeMS();
                *plVar3 = lVar5;
                local_38 = plVar3 + 14;
                bVar1 = false;
            }
            if (!bVar1)
                break;
            plVar3 = plVar3 + 16;
        }
        return local_38;
    }

    // 0x100497590, 224 bytes, placed by class name and debug map
    // PlayerModelCache::CacheModelSet(PlayerModel const&, shared_ptr<PlayerModelModelSet>&)
    void PlayerModelCache::CacheModelSet(PlayerModel* param_1, shared_ptr* param_2) {
        undefined4 uVar2;
        long* plVar3;
        long lVar4;
        ulong uVar5;
        long* plVar6;

        uVar5 = 0;
        plVar6 = (long*)0;
        do {
            plVar3 = (long*)std::array<PlayerModelCacheEntry, 4ul>::operator[]((array<PlayerModelCacheEntry, 4ul>*)this,
                                                                               uVar5);
            if (KeyMatches(this, param_1, (PlayerModelCacheKey*)(plVar3 + 1)) != '\0') {
                lVar4 = FrameTime::GetCurrentTimeMS();
                *plVar3 = lVar4;
                return;
            }
            if ((plVar6 == (long*)0) || (*plVar3 < *plVar6)) {
                plVar6 = plVar3;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 != 4);
        lVar4 = FrameTime::GetCurrentTimeMS();
        *plVar6 = lVar4;
        uVar2 = param_1->GetOverride();
        *(undefined4*)(plVar6 + 1) = uVar2;
        Array<PlayerModelWearSlot, eastl::allocator>::operator=(
            (Array<PlayerModelWearSlot, eastl::allocator>*)(plVar6 + 2), (Array*)&param_1->field_32);
        Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator=(
            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)(plVar6 + 5), (Array*)&param_1->field_56);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(plVar6 + 8),
                                                          (Array*)&param_1->field_80);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(plVar6 + 11),
                                                          (Array*)&param_1->field_104);
        shared_ptr<PlayerModelModelSet>::operator=((shared_ptr<PlayerModelModelSet>*)(plVar6 + 14), param_2);
    }

    // 0x100497670, 112 bytes, placed by class name and debug map
    // PlayerModelCache::KeyMatches(PlayerModel const&, PlayerModelCacheKey const&)
    undefined8 PlayerModelCache::KeyMatches(PlayerModel* param_1, PlayerModelCacheKey* param_2) {
        char cVar1;
        int iVar2;
        undefined8 uVar3;
        PlayerModel* this_00;

        cVar1 = Array<PlayerModelWearSlot, eastl::allocator>::operator==(
            (Array<PlayerModelWearSlot, eastl::allocator>*)&param_1->field_32, (Array*)&param_2->field_8);
        if ((((cVar1 == '\0') ||
              (cVar1 = Array<unsigned char, eastl::allocator>::operator==(
                   (Array<unsigned char, eastl::allocator>*)&param_1->field_80, (Array*)&param_2->field_56),
               cVar1 == '\0')) ||
             (cVar1 = Array<unsigned char, eastl::allocator>::operator==(
                  (Array<unsigned char, eastl::allocator>*)&param_1->field_104, (Array*)&param_2->field_80),
              cVar1 == '\0')) ||
            (this_00 = param_1, iVar2 = param_1->GetOverride(), iVar2 != *(int*)param_2)) {
            return 0;
        }
        uVar3 =
            CustomisationMatches((PlayerModelCache*)this_00, (Array*)&param_1->field_56, (Array*)&param_2->field_32);
        return uVar3;
    }

    // 0x100497ab0, 288 bytes, placed by class name and debug map
    // PlayerModelCache::CustomisationMatches(Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator> const&, Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator> const&)
    ulong PlayerModelCache::CustomisationMatches(Array* param_1, Array* param_2) {
        bool bVar1;
        long lVar3;
        long lVar4;
        ulong uVar5;
        shared_ptr* psVar6;
        shared_ptr<ObjTypeCustomisation>* psVar7;
        ObjTypeCustomisation* this_00;
        ObjTypeCustomisation* pOVar8;
        undefined8 in_RCX;
        ulong uVar9;
        ulong uVar10;

        lVar3 = param_1->end();
        lVar4 = param_2->end();
        if (lVar3 == lVar4) {
            lVar3 = param_1->end();
            uVar9 = CONCAT71((int7)((ulong)in_RCX >> 8), 1);
            if (lVar3 != 0) {
                uVar5 = 0;
                uVar10 = 1;
                do {
                    psVar6 = (shared_ptr*)Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                        (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)param_1, uVar5);
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
                    if (bVar1) {
                    LAB_100497b46:
                        psVar6 = (shared_ptr*)Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)param_1, uVar5);
                        bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (!bVar1)
                            goto LAB_100497bb0;
                        psVar6 = (shared_ptr*)Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)param_2, uVar5);
                        bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (!bVar1)
                            goto LAB_100497bb0;
                        psVar7 = (shared_ptr<ObjTypeCustomisation>*)
                            Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                                (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)param_1, uVar5);
                        this_00 = (ObjTypeCustomisation*)shared_ptr<ObjTypeCustomisation>::operator*(psVar7);
                        psVar7 = (shared_ptr<ObjTypeCustomisation>*)
                            Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                                (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)param_2, uVar5);
                        pOVar8 = (ObjTypeCustomisation*)shared_ptr<ObjTypeCustomisation>::operator*(psVar7);
                        if (ObjTypeCustomisation::operator==(this_00, pOVar8) == '\0')
                            goto LAB_100497bb0;
                    } else {
                        psVar6 = (shared_ptr*)Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)param_2, uVar5);
                        bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (bVar1)
                            goto LAB_100497b46;
                    }
                    uVar5 = param_1->end();
                    bVar1 = uVar10 < uVar5;
                    uVar5 = uVar10;
                    uVar10 = (ulong)((int)uVar10 + 1);
                } while (bVar1);
                uVar9 = CONCAT71((int7)(uVar9 >> 8), 1);
            }
        } else {
        LAB_100497bb0:
            uVar9 = 0;
        }
        return uVar9 & 4294967295;
    }

} // namespace jag::game
