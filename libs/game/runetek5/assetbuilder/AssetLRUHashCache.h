// libs/game/runetek5/assetbuilder/AssetLRUHashCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <
        typename...> // 6 instantiations, e.g. <graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>, <graphics::Model, BuildModelMain, 100ul, 101ul, false>, <graphics::Model, BuildModelMain, 1024ul, 1025ul, false>
    class AssetLRUHashCache {
    public:
        AssetLRUHashCache(unsigned int, char const*);
        ~AssetLRUHashCache();
        void Reset();
        void UpdateLoadingAssetList(unsigned long);
        uint IsLoadingAsset(unsigned long long);
        void AddLoadingAsset(unsigned long long, shared_ptr<BuildAnimationMain> const&);
        void AddLoadingAsset(unsigned long long, shared_ptr<BuildModelMain> const&);
    };

    // 0x100495140, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::AssetLRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100495460, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::~AssetLRUHashCache(): jumps straight to the base-object destructor

    // 0x100495480, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PlayerModelReplaceHeldStatus::~PlayerModelReplaceHeldStatus(): jumps straight to the base-object destructor

    // 0x1004956d0, 32 bytes, inline, placed by debug map only (low confidence)
    // PlayerModelReplaceHeldStatus::Reset()
    void PlayerModelReplaceHeldStatus::Reset() {
        field_0 = 0;
        field_4 = 4294967295;
        shared_ptr<ObjTypeCustomisation>::reset();
    }

    // 0x1004990a0, 48 bytes, base-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::~AssetLRUHashCache()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::~AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this) {
        ((this + 8256))->~vector_map();
        ~LRUHashCache();
    }

    // 0x1004991c0, 48 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::Reset()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::Reset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this) {
        ((this + 8256))->clear();
        Reset();
    }

    // 0x100499fe0, 96 bytes, base-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::AssetLRUHashCache(unsigned int, char const*)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this, uint param_1, char* param_2) {
        new (this) LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>(param_1, param_2);
        new ((this + 8256)) eastl::vector_map<
            unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>();
        ((this + 8256))->reserve((ulong)param_1);
    }

    // 0x1004ddb40, 16 bytes, complete-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::~AssetLRUHashCache(): jumps straight to the base-object destructor

    // 0x1004df0a0, 224 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::UpdateLoadingAssetList(unsigned long)
    void AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::UpdateLoadingAssetList(
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* this, ulong param_1) {
        shared_ptr<BuildAnimationMain>* this_00;
        Layout* this_01;
        pair* ppVar1;
        AssetJob* pAVar2;
        BuildAnimationMain* this_02;
        WorldmapAreaMetadata* this_03;
        shared_ptr* psVar3;
        char cVar4;
        pair* ppVar5;
        ulong uVar6;

        this_01 = (Layout*)(this + 1536);
        ppVar5 = (pair*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        uVar6 = 0;
        do {
            ppVar1 = (pair*)this_01->end();
            if (ppVar5 == ppVar1) {
                return;
            }
            this_00 = (shared_ptr<BuildAnimationMain>*)(ppVar5 + 8);
            pAVar2 = (AssetJob*)shared_ptr<BuildAnimationMain>::operator->(this_00);
            cVar4 = pAVar2->IsFinished();
            if (cVar4 == '\0') {
                ppVar5 = ppVar5 + 24;
            } else {
                pAVar2 = (AssetJob*)shared_ptr<BuildAnimationMain>::operator->(this_00);
                cVar4 = pAVar2->IsSuccessful();
                if (cVar4 != '\0') {
                    this_02 = (BuildAnimationMain*)shared_ptr<BuildAnimationMain>::operator->(this_00);
                    cVar4 = this_02->IsAssetConstructed();
                    if (cVar4 != '\0') {
                        this_03 = (WorldmapAreaMetadata*)shared_ptr<BuildAnimationMain>::operator->(this_00);
                        psVar3 = (shared_ptr*)this_03->GetOrigin();
                        Put(psVar3, 1, ppVar5);
                    }
                }
                ppVar5 = (pair*)this_01->erase(ppVar5);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= param_1);
    }

    // 0x1004df180, 192 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::IsLoadingAsset(unsigned long long)
    uint AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::IsLoadingAsset(
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* this, ulonglong param_1) {
        shared_ptr<BuildAnimationMain>* this_00;
        vector_map<unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>*
            this_01;
        char cVar1;
        uint uVar2;
        pair* ppVar3;
        pair* ppVar4;
        AssetJob* pAVar5;
        BuildAnimationMain* this_02;
        WorldmapAreaMetadata* this_03;
        shared_ptr* psVar6;
        ulonglong local_38;

        this_01 =
            (vector_map<
                unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>*)(this +
                                                                                                                1536);
        local_38 = param_1;
        ppVar3 = (pair*)eastl::vector_map<unsigned long long, shared_ptr<BuildModelMain>,
                                          eastl::less<unsigned long long>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>,
                                                        eastl::allocator>>::find(this_01, &local_38);
        ppVar4 = (pair*)this_01->end();
        if (ppVar3 == ppVar4) {
            uVar2 = 0;
        } else {
            this_00 = (shared_ptr<BuildAnimationMain>*)(ppVar3 + 8);
            pAVar5 = (AssetJob*)shared_ptr<BuildAnimationMain>::operator->(this_00);
            uVar2 = pAVar5->IsFinished();
            if ((char)uVar2 != '\0') {
                pAVar5 = (AssetJob*)shared_ptr<BuildAnimationMain>::operator->(this_00);
                cVar1 = pAVar5->IsSuccessful();
                if (cVar1 != '\0') {
                    this_02 = (BuildAnimationMain*)shared_ptr<BuildAnimationMain>::operator->(this_00);
                    cVar1 = this_02->IsAssetConstructed();
                    if (cVar1 != '\0') {
                        this_03 = (WorldmapAreaMetadata*)shared_ptr<BuildAnimationMain>::operator->(this_00);
                        psVar6 = (shared_ptr*)this_03->GetOrigin();
                        Put(psVar6, 1, ppVar3);
                    }
                }
                this_01->erase(ppVar3);
            }
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1004dfbf0, 96 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::AddLoadingAsset(unsigned long long, shared_ptr<BuildAnimationMain> const&)
    void AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::AddLoadingAsset(
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* this, ulonglong param_1,
        shared_ptr* param_2) {
        eastl local_38[24];
        ulonglong local_20;

        local_20 = param_1;
        eastl::make_pair<unsigned long long&, shared_ptr<BuildModelMain> const&>(local_38, &local_20, param_2);
        eastl::vector_map<
            unsigned long long, shared_ptr<BuildAnimationMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildAnimationMain>>, eastl::allocator>>::
            insert<eastl::pair<unsigned long long, shared_ptr<BuildAnimationMain>>, void>(
                (vector_map<unsigned long long, shared_ptr<BuildAnimationMain>, eastl::less<unsigned long long>,
                            eastl::allocator,
                            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildAnimationMain>>,
                                          eastl::allocator>>*)(this + 1536),
                (pair*)local_38);
        local_38->~pair();
    }

    // 0x1004e1680, 48 bytes, base-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::~AssetLRUHashCache()
    void AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::~AssetLRUHashCache(
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* this) {
        ((this + 1536))->~vector_map();
        ~LRUHashCache();
    }

    // 0x1004ebd00, 16 bytes, complete-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::AssetLRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004ec790, 96 bytes, base-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::AssetLRUHashCache(unsigned int, char const*)
    void AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>::AssetLRUHashCache(
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* this, uint param_1,
        char* param_2) {
        new (this) LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>(param_1, param_2);
        new ((this + 1536)) eastl::vector_map<
            unsigned long long, shared_ptr<BuildAnimationMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildAnimationMain>>, eastl::allocator>>();
        ((this + 1536))->reserve((ulong)param_1);
    }

    // 0x1004f30b0, 16 bytes, complete-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::AssetLRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004f3120, 16 bytes, complete-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::~AssetLRUHashCache(): jumps straight to the base-object destructor

    // 0x1004f6cc0, 48 bytes, base-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::~AssetLRUHashCache()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::~AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this) {
        ((this + 1056))->~vector_map();
        ~LRUHashCache();
    }

    // 0x1004f71a0, 48 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::Reset()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::Reset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this) {
        ((this + 1056))->clear();
        Reset();
    }

    // 0x1004fc630, 96 bytes, base-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::AssetLRUHashCache(unsigned int, char const*)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this, uint param_1, char* param_2) {
        new (this) LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>(param_1, param_2);
        new ((this + 1056)) eastl::vector_map<
            unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>();
        ((this + 1056))->reserve((ulong)param_1);
    }

    // 0x100504740, 224 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::UpdateLoadingAssetList(unsigned long)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::UpdateLoadingAssetList(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* this, ulong param_1) {
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

        this_01 = (Layout*)(this + 10496);
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
                        Put(psVar3, 1, ppVar5);
                    }
                }
                ppVar5 = (pair*)this_01->erase(ppVar5);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= param_1);
    }

    // 0x100504820, 192 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::IsLoadingAsset(unsigned long long)
    uint AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::IsLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* this, ulonglong param_1) {
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
                                                                                                                10496);
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
                        Put(psVar6, 1, ppVar3);
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

    // 0x100504980, 224 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::UpdateLoadingAssetList(unsigned long)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::UpdateLoadingAssetList(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* this, ulong param_1) {
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

        this_01 = (Layout*)(this + 1536);
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
                        Put(psVar3, 1, ppVar5);
                    }
                }
                ppVar5 = (pair*)this_01->erase(ppVar5);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= param_1);
    }

    // 0x100504a60, 192 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::IsLoadingAsset(unsigned long long)
    uint AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::IsLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* this, ulonglong param_1) {
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
                                                                                                                1536);
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
                        Put(psVar6, 1, ppVar3);
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

    // 0x100504ee0, 96 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::AddLoadingAsset(unsigned long long, shared_ptr<BuildModelMain> const&)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::AddLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* this, ulonglong param_1,
        shared_ptr* param_2) {
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
                                                                                                                10496),
            (pair*)local_38);
        local_38->~pair();
    }

    // 0x100504f40, 96 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::AddLoadingAsset(unsigned long long, shared_ptr<BuildModelMain> const&)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::AddLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* this, ulonglong param_1,
        shared_ptr* param_2) {
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
                                                                                                                1536),
            (pair*)local_38);
        local_38->~pair();
    }

    // 0x100505c70, 16 bytes, complete-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::AssetLRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100505c80, 16 bytes, complete-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::AssetLRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100505c90, 16 bytes, complete-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::~AssetLRUHashCache(): jumps straight to the base-object destructor

    // 0x100507f10, 224 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::UpdateLoadingAssetList(unsigned long)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::UpdateLoadingAssetList(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this, ulong param_1) {
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

        this_01 = (Layout*)(this + 8256);
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
                        Put(psVar3, 1, ppVar5);
                    }
                }
                ppVar5 = (pair*)this_01->erase(ppVar5);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= param_1);
    }

    // 0x100507ff0, 192 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::IsLoadingAsset(unsigned long long)
    uint AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::IsLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this, ulonglong param_1) {
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
                                                                                                                8256);
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
                        Put(psVar6, 1, ppVar3);
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

    // 0x100508150, 224 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::UpdateLoadingAssetList(unsigned long)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::UpdateLoadingAssetList(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this, ulong param_1) {
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

        this_01 = (Layout*)(this + 1056);
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
                        Put(psVar3, 1, ppVar5);
                    }
                }
                ppVar5 = (pair*)this_01->erase(ppVar5);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= param_1);
    }

    // 0x100508230, 192 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::IsLoadingAsset(unsigned long long)
    uint AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::IsLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this, ulonglong param_1) {
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
                                                                                                                1056);
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
                        Put(psVar6, 1, ppVar3);
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

    // 0x1005083f0, 96 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::AddLoadingAsset(unsigned long long, shared_ptr<BuildModelMain> const&)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>::AddLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this, ulonglong param_1,
        shared_ptr* param_2) {
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
                                                                                                                8256),
            (pair*)local_38);
        local_38->~pair();
    }

    // 0x100508450, 96 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::AddLoadingAsset(unsigned long long, shared_ptr<BuildModelMain> const&)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>::AddLoadingAsset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this, ulonglong param_1,
        shared_ptr* param_2) {
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
                                                                                                                1056),
            (pair*)local_38);
        local_38->~pair();
    }

    // 0x10050acd0, 48 bytes, base-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::~AssetLRUHashCache()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::~AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* this) {
        ((this + 10496))->~vector_map();
        ~LRUHashCache();
    }

    // 0x100512e20, 96 bytes, base-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::AssetLRUHashCache(unsigned int, char const*)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* this, uint param_1, char* param_2) {
        new (this) LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>(param_1, param_2);
        new ((this + 10496)) eastl::vector_map<
            unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>();
        ((this + 10496))->reserve((ulong)param_1);
    }

    // 0x100513100, 96 bytes, base-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::AssetLRUHashCache(unsigned int, char const*)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* this, uint param_1, char* param_2) {
        new (this) LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>(param_1, param_2);
        new ((this + 1536)) eastl::vector_map<
            unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>();
        ((this + 1536))->reserve((ulong)param_1);
    }

    // 0x100514d10, 16 bytes, complete-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::~AssetLRUHashCache(): jumps straight to the base-object destructor

    // 0x100514d20, 48 bytes, base-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::~AssetLRUHashCache()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::~AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* this) {
        ((this + 1536))->~vector_map();
        ~LRUHashCache();
    }

    // 0x100514d50, 48 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::Reset()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>::Reset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* this) {
        ((this + 10496))->clear();
        Reset();
    }

    // 0x100514d80, 48 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::Reset()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>::Reset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* this) {
        ((this + 1536))->clear();
        Reset();
    }

    // 0x100515ac0, 16 bytes, complete-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::AssetLRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10051e990, 96 bytes, base-object constructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::AssetLRUHashCache(unsigned int, char const*)
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>* this, uint param_1, char* param_2) {
        new (this) LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>(param_1, param_2);
        new ((this + 82176)) eastl::vector_map<
            unsigned long long, shared_ptr<BuildModelMain>, eastl::less<unsigned long long>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned long long, shared_ptr<BuildModelMain>>, eastl::allocator>>();
        ((this + 82176))->reserve((ulong)param_1);
    }

    // 0x100521a30, 16 bytes, complete-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::~AssetLRUHashCache(): jumps straight to the base-object destructor

    // 0x100521a40, 48 bytes, base-object destructor, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::~AssetLRUHashCache()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::~AssetLRUHashCache(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>* this) {
        ((this + 82176))->~vector_map();
        ~LRUHashCache();
    }

    // 0x100521a70, 48 bytes, inline, placed by class name
    // AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::Reset()
    void AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>::Reset(
        AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>* this) {
        ((this + 82176))->clear();
        Reset();
    }

} // namespace jag::game
