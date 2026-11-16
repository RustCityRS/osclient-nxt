// libs/game/runetek5/assetbuilder/AssetLRUCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <typename...> // 1 instantiations, e.g. <graphics::Model, BuildModelMain>
    class AssetLRUCache {
    public:
        void UpdateLoadingAssetList(unsigned long arg1);
        bool IsLoadingAsset(unsigned long long arg1);
        void AddLoadingAsset(unsigned long long arg1, const shared_ptr<BuildModelMain>& buildModelMain);
        AssetLRUCache(unsigned int arg1, const char* str);
        ~AssetLRUCache();
        void Reset();
    };

    // 0x1004e0ea0
    void AssetLRUCache<graphics::Model, BuildModelMain>::UpdateLoadingAssetList(unsigned long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        pair<unsigned long long, shared_ptr<BuildModelMain> _>* ppVar1;
        AssetJob* pAVar2;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        Layout* this_01 = (Layout*)(this + 3336);
        auto arg1_00 = this_01->HeapBeginPtr();
        unsigned long uVar4 = 0;
        do {
            ppVar1 = (pair<unsigned long long, shared_ptr<BuildModelMain> _>*)this_01->end();
            if (arg1_00 == ppVar1) {
                return;
            }
            this_00 = (shared_ptr<BuildModelMain>*)(arg1_00 + 8);
            pAVar2 = (AssetJob*)(*this_00).operator->();
            if (!(pAVar2->IsFinished())) {
                arg1_00 = arg1_00 + 24;
            } else {
                pAVar2 = (AssetJob*)(*this_00).operator->();
                if (pAVar2->IsSuccessful()) {
                    if (((BuildModelMain*)(*this_00).operator->())->IsAssetConstructed()) {
                        this_03 = (OpenGLView*)(*this_00).operator->();
                        model = (shared_ptr<graphics::Model>*)this_03->GetCursorMutex();
                        Put(*model, 1, *(unsigned long long*)arg1_00);
                    }
                }
                arg1_00 = (pair<unsigned long long, shared_ptr<BuildModelMain> _>*)this_01->erase(arg1_00);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 <= arg1);
    }

    // 0x1004e0f80
    bool AssetLRUCache<graphics::Model, BuildModelMain>::IsLoadingAsset(unsigned long long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        unsigned int uVar2;
        AssetJob* pAVar4;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 3336);
        pair<unsigned long long, shared_ptr<BuildModelMain> _>* arg1_00 =
            (pair<unsigned long long, shared_ptr<BuildModelMain> _>*)
                eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>::find(*this_01);
        auto ppVar3 = this_01->end();
        if (arg1_00 == ppVar3) {
            uVar2 = 0;
        } else {
            this_00 = (shared_ptr<BuildModelMain>*)(arg1_00 + 8);
            pAVar4 = (AssetJob*)(*this_00).operator->();
            uVar2 = pAVar4->IsFinished();
            if ((char)uVar2 != '\0') {
                pAVar4 = (AssetJob*)(*this_00).operator->();
                if (pAVar4->IsSuccessful()) {
                    if (((BuildModelMain*)(*this_00).operator->())->IsAssetConstructed()) {
                        this_03 = (OpenGLView*)(*this_00).operator->();
                        model = (shared_ptr<graphics::Model>*)this_03->GetCursorMutex();
                        Put(*model, 1, *(unsigned long long*)arg1_00);
                    }
                }
                this_01->erase(arg1_00);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1004e1100
    void
    AssetLRUCache<graphics::Model, BuildModelMain>::AddLoadingAsset(unsigned long long arg1,
                                                                    const shared_ptr<BuildModelMain>& buildModelMain) {

        auto local_38 = eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(arg1, buildModelMain);
        ((this + 3336))->insert<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, void>(local_38);
    }

    // 0x1005ce250
    AssetLRUCache<graphics::Model, BuildModelMain>::AssetLRUCache(unsigned int arg1, const char* str)
        : LRUCache<graphics::Model>(arg1, str) {
        new ((this + 3336)) eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>();
        ((this + 3336))->reserve((unsigned long)arg1);
    }

    // 0x1005ce6b0
    AssetLRUCache<graphics::Model, BuildModelMain>::~AssetLRUCache() {
        ((this + 3336))->~vector_map();
    }

    // 0x1005ce6e0
    void AssetLRUCache<graphics::Model, BuildModelMain>::Reset() {
        ((this + 3336))->clear();
        Reset();
    }

} // namespace jag::game
