// libs/game/runetek5/assetbuilder/AssetLRUHashCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <
        typename...> // 6 instantiations, e.g. <graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>, <graphics::Model, BuildModelMain, 100ul, 101ul, false>, <graphics::Model, BuildModelMain, 1024ul, 1025ul, false>
    class AssetLRUHashCache {
    public:
        AssetLRUHashCache(unsigned int arg1, const char* str);
        ~AssetLRUHashCache();
        void Reset();
        void UpdateLoadingAssetList(unsigned long arg1);
        bool IsLoadingAsset(unsigned long long arg1);
        void AddLoadingAsset(unsigned long long arg1, const shared_ptr<BuildAnimationMain>& buildAnimationMain);
        void AddLoadingAsset(unsigned long long arg1, const shared_ptr<BuildModelMain>& buildModelMain);
    };

    // 0x1004956d0
    void PlayerModelReplaceHeldStatus::Reset() {
        field_0 = 0;
        field_4 = 4294967295;
        field_8.reset();
    }

    // 0x1004990a0
    AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::~AssetLRUHashCache() {
        ((this + 8256))->~vector_map();
    }

    // 0x1004991c0
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::Reset() {
        ((this + 8256))->clear();
        Reset();
    }

    // 0x100499fe0
    AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::AssetLRUHashCache(unsigned int arg1,
                                                                                               const char* str)
        : LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>(arg1, str) {
        new ((this + 8256)) eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>();
        ((this + 8256))->reserve((unsigned long)arg1);
    }

    // 0x1004df0a0
    void AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::UpdateLoadingAssetList(
        unsigned long arg1) {
        shared_ptr<BuildAnimationMain>* this_00;
        pair<unsigned long long, shared_ptr<BuildAnimationMain> _>* ppVar1;
        AssetJob* pAVar2;
        WorldmapAreaMetadata* this_03;
        shared_ptr<graphics::Animation>* animation;

        Layout* this_01 = (Layout*)(this + 1536);
        auto arg1_00 = this_01->HeapBeginPtr();
        unsigned long uVar4 = 0;
        do {
            ppVar1 = (pair<unsigned long long, shared_ptr<BuildAnimationMain> _>*)this_01->end();
            if (arg1_00 == ppVar1) {
                return;
            }
            this_00 = (shared_ptr<BuildAnimationMain>*)(arg1_00 + 8);
            pAVar2 = (AssetJob*)(*this_00).operator->();
            if (!(pAVar2->IsFinished())) {
                arg1_00 = arg1_00 + 24;
            } else {
                pAVar2 = (AssetJob*)(*this_00).operator->();
                if (pAVar2->IsSuccessful()) {
                    if (((BuildAnimationMain*)(*this_00).operator->())->IsAssetConstructed()) {
                        this_03 = (WorldmapAreaMetadata*)(*this_00).operator->();
                        animation = (shared_ptr<graphics::Animation>*)this_03->GetOrigin();
                        Put(*animation, 1, *arg1_00);
                    }
                }
                arg1_00 = (pair<unsigned long long, shared_ptr<BuildAnimationMain> _>*)this_01->erase(arg1_00);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 <= arg1);
    }

    // 0x1004df180
    bool AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::IsLoadingAsset(
        unsigned long long arg1) {
        shared_ptr<BuildAnimationMain>* this_00;
        unsigned int uVar2;
        AssetJob* pAVar4;
        WorldmapAreaMetadata* this_03;
        shared_ptr<graphics::Animation>* animation;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 1536);
        pair<unsigned long long, shared_ptr<BuildAnimationMain> _>* arg1_00 =
            (pair<unsigned long long, shared_ptr<BuildAnimationMain> _>*)
                eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>::find(*this_01);
        auto ppVar3 = this_01->end();
        if (arg1_00 == ppVar3) {
            uVar2 = 0;
        } else {
            this_00 = (shared_ptr<BuildAnimationMain>*)(arg1_00 + 8);
            pAVar4 = (AssetJob*)(*this_00).operator->();
            uVar2 = pAVar4->IsFinished();
            if ((char)uVar2 != '\0') {
                pAVar4 = (AssetJob*)(*this_00).operator->();
                if (pAVar4->IsSuccessful()) {
                    if (((BuildAnimationMain*)(*this_00).operator->())->IsAssetConstructed()) {
                        this_03 = (WorldmapAreaMetadata*)(*this_00).operator->();
                        animation = (shared_ptr<graphics::Animation>*)this_03->GetOrigin();
                        Put(*animation, 1, *arg1_00);
                    }
                }
                this_01->erase(arg1_00);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1004dfbf0
    void AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::AddLoadingAsset(
        unsigned long long arg1, const shared_ptr<BuildAnimationMain>& buildAnimationMain) {

        auto local_38 =
            eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(arg1, buildAnimationMain);
        ((this + 1536))->insert<eastl::pair<unsigned long long, shared_ptr<BuildAnimationMain>>, void>(local_38);
    }

    // 0x1004e1680
    AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::~AssetLRUHashCache() {
        ((this + 1536))->~vector_map();
    }

    // 0x1004ec790
    AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::AssetLRUHashCache(unsigned int arg1,
                                                                                                     const char* str)
        : LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>(arg1, str) {
        new ((this + 1536)) eastl::vector_map<unsigned long long, shared_ptr<BuildAnimationMain>>();
        ((this + 1536))->reserve((unsigned long)arg1);
    }

    // 0x1004f6cc0
    AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::~AssetLRUHashCache() {
        ((this + 1056))->~vector_map();
    }

    // 0x1004f71a0
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::Reset() {
        ((this + 1056))->clear();
        Reset();
    }

    // 0x1004fc630
    AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::AssetLRUHashCache(unsigned int arg1,
                                                                                             const char* str) {
        new (this) LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>(arg1, str);
        new ((this + 1056)) eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>();
        ((this + 1056))->reserve((unsigned long)arg1);
    }

    // 0x100504740
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::UpdateLoadingAssetList(
        unsigned long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        pair<unsigned long long, shared_ptr<BuildModelMain> _>* ppVar1;
        AssetJob* pAVar2;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        Layout* this_01 = (Layout*)(this + 10496);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                arg1_00 = (pair<unsigned long long, shared_ptr<BuildModelMain> _>*)this_01->erase(arg1_00);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 <= arg1);
    }

    // 0x100504820
    bool
    AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::IsLoadingAsset(unsigned long long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        unsigned int uVar2;
        AssetJob* pAVar4;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 10496);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                this_01->erase(arg1_00);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100504980
    void
    AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::UpdateLoadingAssetList(unsigned long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        pair<unsigned long long, shared_ptr<BuildModelMain> _>* ppVar1;
        AssetJob* pAVar2;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        Layout* this_01 = (Layout*)(this + 1536);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                arg1_00 = (pair<unsigned long long, shared_ptr<BuildModelMain> _>*)this_01->erase(arg1_00);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 <= arg1);
    }

    // 0x100504a60
    bool
    AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::IsLoadingAsset(unsigned long long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        unsigned int uVar2;
        AssetJob* pAVar4;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 1536);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                this_01->erase(arg1_00);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100504ee0
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::AddLoadingAsset(
        unsigned long long arg1, const shared_ptr<BuildModelMain>& buildModelMain) {

        auto local_38 = eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(arg1, buildModelMain);
        ((this + 10496))->insert<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, void>(local_38);
    }

    // 0x100504f40
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::AddLoadingAsset(
        unsigned long long arg1, const shared_ptr<BuildModelMain>& buildModelMain) {

        auto local_38 = eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(arg1, buildModelMain);
        ((this + 1536))->insert<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, void>(local_38);
    }

    // 0x100507f10
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::UpdateLoadingAssetList(
        unsigned long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        pair<unsigned long long, shared_ptr<BuildModelMain> _>* ppVar1;
        AssetJob* pAVar2;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        Layout* this_01 = (Layout*)(this + 8256);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                arg1_00 = (pair<unsigned long long, shared_ptr<BuildModelMain> _>*)this_01->erase(arg1_00);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 <= arg1);
    }

    // 0x100507ff0
    bool
    AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::IsLoadingAsset(unsigned long long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        unsigned int uVar2;
        AssetJob* pAVar4;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 8256);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                this_01->erase(arg1_00);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100508150
    void
    AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::UpdateLoadingAssetList(unsigned long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        pair<unsigned long long, shared_ptr<BuildModelMain> _>* ppVar1;
        AssetJob* pAVar2;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        Layout* this_01 = (Layout*)(this + 1056);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                arg1_00 = (pair<unsigned long long, shared_ptr<BuildModelMain> _>*)this_01->erase(arg1_00);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 <= arg1);
    }

    // 0x100508230
    bool
    AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::IsLoadingAsset(unsigned long long arg1) {
        shared_ptr<BuildModelMain>* this_00;
        unsigned int uVar2;
        AssetJob* pAVar4;
        OpenGLView* this_03;
        shared_ptr<graphics::Model>* model;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 1056);
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
                        Put(*model, 1, *arg1_00);
                    }
                }
                this_01->erase(arg1_00);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1005083f0
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::AddLoadingAsset(
        unsigned long long arg1, const shared_ptr<BuildModelMain>& buildModelMain) {

        auto local_38 = eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(arg1, buildModelMain);
        ((this + 8256))->insert<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, void>(local_38);
    }

    // 0x100508450
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::AddLoadingAsset(
        unsigned long long arg1, const shared_ptr<BuildModelMain>& buildModelMain) {

        auto local_38 = eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(arg1, buildModelMain);
        ((this + 1056))->insert<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, void>(local_38);
    }

    // 0x10050acd0
    AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::~AssetLRUHashCache() {
        ((this + 10496))->~vector_map();
    }

    // 0x100512e20
    AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::AssetLRUHashCache(unsigned int arg1,
                                                                                               const char* str)
        : LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>(arg1, str) {
        new ((this + 10496)) eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>();
        ((this + 10496))->reserve((unsigned long)arg1);
    }

    // 0x100513100
    AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::AssetLRUHashCache(unsigned int arg1,
                                                                                             const char* str) {
        new (this) LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>(arg1, str);
        new ((this + 1536)) eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>();
        ((this + 1536))->reserve((unsigned long)arg1);
    }

    // 0x100514d20
    AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::~AssetLRUHashCache() {
        ((this + 1536))->~vector_map();
    }

    // 0x100514d50
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::Reset() {
        ((this + 10496))->clear();
        Reset();
    }

    // 0x100514d80
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::Reset() {
        ((this + 1536))->clear();
        Reset();
    }

    // 0x10051e990
    AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::AssetLRUHashCache(unsigned int arg1,
                                                                                                 const char* str)
        : LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>(arg1, str) {
        new ((this + 82176)) eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>>();
        ((this + 82176))->reserve((unsigned long)arg1);
    }

    // 0x100521a40
    AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::~AssetLRUHashCache() {
        ((this + 82176))->~vector_map();
    }

    // 0x100521a70
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::Reset() {
        ((this + 82176))->clear();
        Reset();
    }

} // namespace jag::game
