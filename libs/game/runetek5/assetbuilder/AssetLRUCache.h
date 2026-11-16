// libs/game/runetek5/assetbuilder/AssetLRUCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <typename...> // 1 instantiations, e.g. <graphics::Model, BuildModelMain>
    class AssetLRUCache {
    public:
        void UpdateLoadingAssetList(unsigned long);
        uint IsLoadingAsset(unsigned long long);
        void AddLoadingAsset(unsigned long long, shared_ptr<BuildModelMain> const&);
        AssetLRUCache(unsigned int, char const*);
        ~AssetLRUCache();
        void Reset();
    };

    // 0x1004e0ea0, 224 bytes, inline, placed by class name and debug map
    // AssetLRUCache<graphics::Model, BuildModelMain>::UpdateLoadingAssetList(unsigned long)
    void AssetLRUCache<graphics::Model, BuildModelMain>::UpdateLoadingAssetList(
        AssetLRUCache<graphics::Model, BuildModelMain>* this, ulong param_1) {
        shared_ptr<BuildModelMain>* this_00;
        Layout* this_01;
        pair* ppVar1;
        AssetJob* pAVar2;
        BuildModelMain* this_02;
        OpenGLView* this_03;
        shared_ptr* psVar3;
        char cVar4;
        pair* ppVar5;
        ulong uVar6;

        this_01 = (Layout*)(this + 3336);
        ppVar5 = (pair*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        uVar6 = 0;
        do {
            ppVar1 = (pair*)this_01->end();
            if (ppVar5 == ppVar1) {
                return;
            }
            this_00 = (shared_ptr<BuildModelMain>*)(ppVar5 + 8);
            pAVar2 = (AssetJob*)shared_ptr<BuildModelMain>::operator->(this_00);
            cVar4 = pAVar2->IsFinished();
            if (cVar4 == '\0') {
                ppVar5 = ppVar5 + 24;
            } else {
                pAVar2 = (AssetJob*)shared_ptr<BuildModelMain>::operator->(this_00);
                cVar4 = pAVar2->IsSuccessful();
                if (cVar4 != '\0') {
                    this_02 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(this_00);
                    cVar4 = this_02->IsAssetConstructed();
                    if (cVar4 != '\0') {
                        this_03 = (OpenGLView*)shared_ptr<BuildModelMain>::operator->(this_00);
                        psVar3 = (shared_ptr*)this_03->GetCursorMutex();
                        Put(psVar3, 1, *(ulonglong*)ppVar5);
                    }
                }
                ppVar5 = (pair*)this_01->erase(ppVar5);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= param_1);
    }

    // 0x1004e0f80, 192 bytes, inline, placed by class name and debug map
    // AssetLRUCache<graphics::Model, BuildModelMain>::IsLoadingAsset(unsigned long long)
    uint
    AssetLRUCache<graphics::Model, BuildModelMain>::IsLoadingAsset(AssetLRUCache<graphics::Model, BuildModelMain>* this,
                                                                   ulonglong param_1) {
        shared_ptr<BuildModelMain>* this_00;
        vector_map<unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>*
            this_01;
        char cVar1;
        uint uVar2;
        pair* ppVar3;
        pair* ppVar4;
        AssetJob* pAVar5;
        BuildModelMain* this_02;
        OpenGLView* this_03;
        shared_ptr* psVar6;
        ulonglong local_38;

        this_01 =
            (vector_map<
                unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>*)(this +
                                                                                                                3336);
        local_38 = param_1;
        ppVar3 = (pair*)eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>,
                                          eastl::less<unsigned long long>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>,
                                                        eastl::allocator>>::find(this_01, &local_38);
        ppVar4 = (pair*)this_01->end();
        if (ppVar3 == ppVar4) {
            uVar2 = 0;
        } else {
            this_00 = (shared_ptr<BuildModelMain>*)(ppVar3 + 8);
            pAVar5 = (AssetJob*)shared_ptr<BuildModelMain>::operator->(this_00);
            uVar2 = pAVar5->IsFinished();
            if ((char)uVar2 != '\0') {
                pAVar5 = (AssetJob*)shared_ptr<BuildModelMain>::operator->(this_00);
                cVar1 = pAVar5->IsSuccessful();
                if (cVar1 != '\0') {
                    this_02 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(this_00);
                    cVar1 = this_02->IsAssetConstructed();
                    if (cVar1 != '\0') {
                        this_03 = (OpenGLView*)shared_ptr<BuildModelMain>::operator->(this_00);
                        psVar6 = (shared_ptr*)this_03->GetCursorMutex();
                        Put(psVar6, 1, *(ulonglong*)ppVar3);
                    }
                }
                eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>,
                                                eastl::allocator>>::erase(this_01, ppVar3);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1004e1100, 96 bytes, inline, placed by class name and debug map
    // AssetLRUCache<graphics::Model, BuildModelMain>::AddLoadingAsset(unsigned long long, shared_ptr<BuildModelMain> const&)
    void AssetLRUCache<graphics::Model, BuildModelMain>::AddLoadingAsset(
        AssetLRUCache<graphics::Model, BuildModelMain>* this, ulonglong param_1, shared_ptr* param_2) {
        eastl local_38[24];
        ulonglong local_20;

        local_20 = param_1;
        eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(local_38, &local_20, param_2);
        eastl::vector_map<
            unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>,
                          eastl::allocator>>::insert<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>,
                                                     void>(
            (vector_map<
                unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>*)(this +
                                                                                                                3336),
            (pair*)local_38);
        local_38->~pair();
    }

    // 0x1005c8d40, 16 bytes, complete-object constructor, inline, placed by class name
    // AssetLRUCache<graphics::Model, BuildModelMain>::AssetLRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005ce250, 96 bytes, base-object constructor, inline, placed by class name
    // AssetLRUCache<graphics::Model, BuildModelMain>::AssetLRUCache(unsigned int, char const*)
    void
    AssetLRUCache<graphics::Model, BuildModelMain>::AssetLRUCache(AssetLRUCache<graphics::Model, BuildModelMain>* this,
                                                                  uint param_1, char* param_2) {
        new (this) LRUCache<graphics::Model>(param_1, param_2);
        new ((this + 3336)) eastl::vector_map<
            unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>();
        ((this + 3336))->reserve((ulong)param_1);
    }

    // 0x1005ce6a0, 16 bytes, complete-object destructor, inline, placed by class name
    // AssetLRUCache<graphics::Model, BuildModelMain>::~AssetLRUCache(): jumps straight to the base-object destructor

    // 0x1005ce6b0, 48 bytes, base-object destructor, inline, placed by class name
    // AssetLRUCache<graphics::Model, BuildModelMain>::~AssetLRUCache()
    void AssetLRUCache<graphics::Model, BuildModelMain>::~AssetLRUCache(
        AssetLRUCache<graphics::Model, BuildModelMain>* this) {
        ((this + 3336))->~vector_map();
        ~LRUCache();
    }

    // 0x1005ce6e0, 48 bytes, inline, placed by class name
    // AssetLRUCache<graphics::Model, BuildModelMain>::Reset()
    void AssetLRUCache<graphics::Model, BuildModelMain>::Reset(AssetLRUCache<graphics::Model, BuildModelMain>* this) {
        ((this + 3336))->clear();
        Reset();
    }

} // namespace jag::game
