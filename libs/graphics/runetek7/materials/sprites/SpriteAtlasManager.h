// libs/graphics/runetek7/materials/sprites/SpriteAtlasManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class SpriteAtlasManager {
    public:
        class LoadingRequest;
        GetSpriteIDFromHash(long long);
        GetAtlases() const;
        void UnregisterSpriteIDAlwaysLoaded(eastl::vector<unsigned int, BucketAllocatorEASTL> const&);
        GetUsageTypeFromHash(long long);
        SpriteAtlasManager();
        ~SpriteAtlasManager();
        void Destroy();
        void Initialise(TextureManager*, Js5ResourceProvider*, Js5ArchiveSettings const*);
        void DestroyRenderingResources();
        void UnregisterSpriteIDAlwaysLoaded(unsigned int);
        void RegisterSpriteIDAlwaysLoaded(unsigned int, int, bool);
        shared_ptr<oldscape::RSevenDebugPresetProvider>* GetSpriteReference(long long, shared_ptr<SpriteAtlas> const&,
                                                                            SpriteLoadMode);
        FindSpriteReference(long long, shared_ptr<SpriteAtlas> const&) const;
        void AttemptSpriteLoad(shared_ptr<SpriteAtlasReference>&, shared_ptr<SpriteAtlas> const&, bool);
        AddObjSpriteReference(long long, unsigned int, unsigned int);
        MapTextureToAtlas(int&, long long, math::Rect<int>&, unsigned long&, int, int, shared_ptr<SpriteAtlas> const&);
        void AddSpriteData(shared_ptr<SpriteAtlasReference>&, RGBAImage const&, int, int, int,
                           shared_ptr<SpriteAtlas> const&);
        SpriteAtlasManager* AddRuntimeSprite(void const*, unsigned int, unsigned int, unsigned int,
                                             eastl::fixed_vector<int, 4ul, true, eastl::allocator> const&,
                                             shared_ptr<SpriteAtlas> const&);
        void HandleSpriteLoadingRequests();
        shared_ptr<SpriteAtlas>* GetAtlasByID(int);
        void GetUsageMapByID(SpriteAtlasUsageMap&, int);
        void MainLogic();
        void Rebuild();
        void MainDraw();
        void ForceRebuild();
        void RegisterRebuildResetCallback(std::function<void()> const&);
        void RegisterRebuildCheckCallback(std::function<bool()> const&);
        static /* 16 bytes */ m_spriteLoadModeOverride; // = { 2, 0, 0, 0 }
        static /* 8 bytes */ m_forceSpriteAtlasTo2K;

        // data members, from how the methods use this: 184 bytes
        undefined8 field_0;      // offset 0
        TextureManager* field_8; // offset 8
        char _unknown_16[4];
        undefined8 field_20; // offset 20
        undefined8 field_28; // offset 28
        char _unknown_36[68];
        undefined4 field_104; // offset 104
        char _unknown_108[76];
    };

    class SpriteAtlasManager::LoadingRequest {
    public:
        ~LoadingRequest();
        LoadingRequest(shared_ptr<SpriteAtlasReference>, bool);
        LoadingRequest(LoadingRequest&&);
        LoadingRequest* operator=(LoadingRequest&&);

        // data members, from how the methods use this: 17 bytes
        char _unknown_0[16];
        undefined1 field_16; // offset 16
    };

    // 0x100536050, 80 bytes, inline, placed by class name and debug map
    // SpriteAtlasManager::UnregisterSpriteIDAlwaysLoaded(eastl::vector<unsigned int, BucketAllocatorEASTL> const&)
    void SpriteAtlasManager::UnregisterSpriteIDAlwaysLoaded(vector* param_1) {
        uint* puVar1;
        uint* puVar2;

        puVar1 = (uint*)param_1->HeapBeginPtr();
        puVar2 = (uint*)param_1->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            UnregisterSpriteIDAlwaysLoaded(this, *puVar1);
        }
    }

    // 0x1008dbbb0, 16 bytes, complete-object constructor, inline, placed by class name
    // SpriteAtlasManager::LoadingRequest::LoadingRequest(shared_ptr<SpriteAtlasReference>, bool): jumps straight to the base-object constructor

    // 0x1008dbd20, 32 bytes, base-object constructor, inline, placed by class name
    // SpriteAtlasManager::LoadingRequest::LoadingRequest(shared_ptr<SpriteAtlasReference>, bool)
    void SpriteAtlasManager::LoadingRequest::LoadingRequest(shared_ptr param_1, bool param_2) {
        undefined1 in_DL;
        undefined7 in_register_00000031;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this,
            (shared_ptr*)CONCAT71(in_register_00000031, param_2));
        field_16 = in_DL;
    }

    // 0x1008dbed0, 16 bytes, complete-object constructor, inline, placed by class name
    // SpriteAtlasManager::LoadingRequest::LoadingRequest(SpriteAtlasManager::LoadingRequest&&): jumps straight to the base-object constructor

    // 0x1008dbed0: the linker folded this into SpriteAtlasManager::LoadingRequest::LoadingRequest(SpriteAtlasManager::LoadingRequest&&), which has identical code
    BindInfo::BindInfo(BindInfo&&);

    // 0x1008dbee0, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SpriteAtlasManager::LoadingRequest::LoadingRequest(SpriteAtlasManager::LoadingRequest&&)
    /* BindInfo::BindInfo(BindInfo&&) */

    void BindInfo::BindInfo(BindInfo* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
    }

    // 0x1008dbee0: the linker folded this into SpriteAtlasManager::LoadingRequest::LoadingRequest(SpriteAtlasManager::LoadingRequest&&), which has identical code
    BindInfo::BindInfo(BindInfo&&);

    // 0x1008dd120, 112 bytes, inline, placed by class name
    // SpriteAtlasManager::FindSpriteReference(long long, shared_ptr<SpriteAtlas> const&) const::$_4::operator()(shared_ptr<SpriteAtlas> const&) const
    /* SpriteAtlasManager::FindSpriteReference(long long,
   shared_ptr<SpriteAtlas> const&)
   const::$_4::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<SpriteAtlas> const&) const */

    _func_FindSpriteReference_long_long_shared_ptr_ptr* const ::$_4::operator()(shared_ptr * param_1) {
        bool bVar1;
        int iVar2;
        SpriteAtlas* pSVar3;
        _func_FindSpriteReference_long_long_shared_ptr_ptr* p_Var4;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* psVar5;

        bVar1 = shared_ptr::operator_cast_to_bool(*(shared_ptr**)this);
        psVar5 = extraout_RDX;
        if (!bVar1) {
            pSVar3 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)param_1);
            iVar2 = pSVar3->GetUsageType();
            psVar5 = extraout_RDX_00;
            if (iVar2 == **(int**)(this + 8))
                goto LAB_1008dd160;
        }
        bVar1 = operator==((jag*)param_1, *(shared_ptr**)this, psVar5);
        if (!bVar1) {
            return (_func_FindSpriteReference_long_long_shared_ptr_ptr*)0;
        }
    LAB_1008dd160:
        pSVar3 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)param_1);
        p_Var4 = (_func_FindSpriteReference_long_long_shared_ptr_ptr*)pSVar3->CheckHasSprite(*(shared_ptr**)(this + 16),
                                                                                             **(longlong**)(this + 24));
        return p_Var4;
    }

    // 0x1008dd860, 48 bytes, inline, placed by class name
    // SpriteAtlasManager::LoadingRequest::operator=(SpriteAtlasManager::LoadingRequest&&)
    /* SpriteAtlasManager::LoadingRequest::TEMPNAMEPLACEHOLDERVALUE(SpriteAtlasManager::LoadingRequest&&)
    */

    LoadingRequest* SpriteAtlasManager::LoadingRequest::operator=(LoadingRequest* param_1) {
        shared_ptr<SpriteAtlasReference>::operator=((shared_ptr<SpriteAtlasReference>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

} // namespace jag::graphics
