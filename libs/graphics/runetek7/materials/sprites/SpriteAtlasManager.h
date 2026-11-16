// libs/graphics/runetek7/materials/sprites/SpriteAtlasManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class SpriteAtlasManager {
    public:
        class LoadingRequest;
        void GetSpriteIDFromHash(long long arg1);
        void GetAtlases() const;
        void UnregisterSpriteIDAlwaysLoaded(const eastl::vector<unsigned int>& arg1);
        void GetUsageTypeFromHash(long long arg1);
        SpriteAtlasManager();
        ~SpriteAtlasManager();
        void Destroy();
        void Initialise(TextureManager* textureManager, Js5ResourceProvider* js5ResourceProvider,
                        const Js5ArchiveSettings* js5ArchiveSettings);
        void DestroyRenderingResources();
        void UnregisterSpriteIDAlwaysLoaded(unsigned int arg1);
        void RegisterSpriteIDAlwaysLoaded(unsigned int arg1, int arg2, bool arg3);
        auto GetSpriteReference(long long arg1, const shared_ptr<SpriteAtlas>& spriteAtlas,
                                SpriteLoadMode spriteLoadMode);
        SpriteAtlasManager* FindSpriteReference(long long arg1, const shared_ptr<SpriteAtlas>& spriteAtlas) const;
        void AttemptSpriteLoad(shared_ptr<SpriteAtlasReference>& spriteAtlasReference,
                               const shared_ptr<SpriteAtlas>& spriteAtlas, bool arg3);
        SpriteAtlasManager* AddObjSpriteReference(long long arg1, unsigned int arg2, unsigned int arg3);
        SpriteAtlasManager* MapTextureToAtlas(int& arg1, long long arg2, math::Rect<int>& rect, unsigned long& arg4,
                                              int arg5, int arg6, const shared_ptr<SpriteAtlas>& spriteAtlas);
        void AddSpriteData(shared_ptr<SpriteAtlasReference>& spriteAtlasReference, const RGBAImage& rgbaImage, int arg3,
                           int arg4, int arg5, const shared_ptr<SpriteAtlas>& spriteAtlas);
        shared_ptr<oldscape::RSevenDebugPresetProvider>* AddRuntimeSprite(const void* arg1, unsigned int arg2,
                                                                          unsigned int arg3, unsigned int arg4,
                                                                          const eastl::fixed_vector<int, 4ul>& arg5,
                                                                          const shared_ptr<SpriteAtlas>& spriteAtlas);
        void HandleSpriteLoadingRequests();
        shared_ptr<SpriteAtlas>* GetAtlasByID(int arg1);
        void GetUsageMapByID(SpriteAtlasUsageMap& spriteAtlasUsageMap, int arg2);
        void MainLogic();
        void Rebuild();
        void MainDraw();
        void ForceRebuild();
        void RegisterRebuildResetCallback(const std::function<void()>& callback);
        void RegisterRebuildCheckCallback(const std::function<bool()>& callback);
        static int32_t m_spriteLoadModeOverride[4]; // = { 2, 0, 0, 0 }
        static int64_t m_forceSpriteAtlasTo2K;

    private:
        ReturnValue field_0;
        TextureManager* field_8;
        uint8_t _unknown_16[4];
        uint64_t field_20;
        uint64_t field_28;
        uint8_t _unknown_36[68];
        uint32_t field_104;
        uint8_t _unknown_108[76];
    };

    class SpriteAtlasManager::LoadingRequest {
    public:
        ~LoadingRequest();
        LoadingRequest(shared_ptr<SpriteAtlasReference> spriteAtlasReference, bool arg2);
        LoadingRequest(LoadingRequest&& loadingRequest);
        LoadingRequest* operator=(LoadingRequest&& loadingRequest);

    private:
        uint8_t _unknown_0[16];
        bool field_16;
    };

    // 0x100536050
    void
    SpriteAtlasManager::UnregisterSpriteIDAlwaysLoaded(const eastl::vector<unsigned int, BucketAllocatorEASTL>& arg1) {
        auto puVar1 = arg1.HeapBeginPtr();
        auto puVar2 = arg1.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            UnregisterSpriteIDAlwaysLoaded(*puVar1);
        }
    }

    // 0x1008dbd20
    SpriteAtlasManager::LoadingRequest::LoadingRequest(shared_ptr<SpriteAtlasReference> spriteAtlasReference,
                                                       bool arg2) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*spriteAtlasReference);
        field_16 = arg2;
    }

    // 0x1008dbee0
    SpriteAtlasManager::LoadingRequest::LoadingRequest(SpriteAtlasManager::LoadingRequest&& loadingRequest) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(loadingRequest);
        field_16 = loadingRequest.field_16;
    }

    // 0x1008dbee0: BindInfo::BindInfo(BindInfo&&) has the same machine code as SpriteAtlasManager::LoadingRequest::LoadingRequest(SpriteAtlasManager::LoadingRequest&&)

    // 0x1008dd120
    uint64_t SpriteAtlasManager::FindSpriteReference(long long, shared_ptr<SpriteAtlas> const&) const ::$_4::operator()(
        const shared_ptr<SpriteAtlas>& spriteAtlas) const {
        SpriteAtlas* pSVar4;

        if (shared_ptr::operator_cast_to_bool(*(shared_ptr**)this) == '\0') {
            pSVar4 = (SpriteAtlas*)spriteAtlas.operator->();
            if (pSVar4->GetUsageType() == **(int**)(this + 8))
                goto LAB_1008dd160;
        }
        if (!spriteAtlas == (*(*(shared_ptr<oldscape::midi2::MidiRequest>**)this))) {
            return 0;
        }
    LAB_1008dd160:
        pSVar4 = (SpriteAtlas*)spriteAtlas.operator->();
        return pSVar4->CheckHasSprite(*(*(shared_ptr<SpriteAtlasReference>**)(this + 16)), **(long long**)(this + 24));
    }

    // 0x1008dd860
    LoadingRequest* SpriteAtlasManager::LoadingRequest::operator=(SpriteAtlasManager::LoadingRequest&& loadingRequest) {
        *this = loadingRequest;
        field_16 = loadingRequest.field_16;
        return this;
    }

} // namespace jag::graphics
