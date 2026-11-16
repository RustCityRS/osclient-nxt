// libs/graphics/runetek7/materials/textures/TextureAtlasManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class TextureAtlasManager {
    public:
        shared_ptr<TextureAtlasReference>
        GetSharedAtlasRefFromMaterialIDs<eastl::hash_set<int>>(const graphicutils::TextureAtlasUsage* textureAtlasUsage,
                                                               const eastl::hash_set<int>& hash_set);
        void SetTargetTextureMode(TextureMode textureMode);
        void SetNumLoadingTexturesHeavyThreshold(unsigned int arg1);
        shared_ptr<TextureAtlasReference> GetSharedAtlasRefFromMaterialIDs<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int>>>(
            const graphicutils::TextureAtlasUsage* textureAtlasUsage,
            const eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int>>& vector_set);
        void GetTargetTextureMode();
        shared_ptr<TextureAtlasReference> GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul>>(
            const graphicutils::TextureAtlasUsage* textureAtlasUsage, const eastl::fixed_vector<int, 128ul>& arg2);
        uint8_t* GetSettings();
        void PopulateMaterialInfoFromMaterialID(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos,
                                                int arg2);
        uint32_t GetMaxSimultaneousTextureUploadsPerAtlas() const;
        void Initialise(MaterialManager* materialManager, TextureManager* textureManager);
        void Destroy();
        void DestroyRenderingResources();
        void IterateAtlases(std::function<bool(shared_ptr<TextureAtlas>&)> callback);
        void CreateRenderingResources();
        int GetMaximumGutterSize();
        TextureAtlasManager* GetSharedAtlasRefFromMaterials(const graphicutils::TextureAtlasUsage* textureAtlasUsage,
                                                            eastl::vector<Material const*> const& materials);
        void PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(
            eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos, const Material& material);
        void SortMaterialInfoList(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        auto CreateSharedTextureAtlasRef(const graphicutils::TextureAtlasUsage* textureAtlasUsage,
                                         const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        auto GetDummySharedMaterialReference(const graphicutils::TextureAtlasUsage* textureAtlasUsage);
        TextureAtlasReference
        GetAtlasReference(const graphicutils::TextureAtlasUsage* textureAtlasUsage,
                          const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        void GetVirtualAtlas(const graphicutils::TextureAtlasQuality& textureAtlasQuality,
                             const graphicutils::TextureAtlasUsage* textureAtlasUsage, bool arg3);
        void MainLogic();
        void RebuildAtlases(bool arg1);
        void MainDraw();
        void RemoveLoadedHighPriorityMaterials();
        void RegisterHighPriorityMaterials(const eastl::fixed_vector<int, 128ul>& arg1);
        void PopulateMaterialInfoFromMaterial<eastl::allocator>(eastl::vector<MaterialInfo>& materialInfos,
                                                                const Material& material);
        unsigned int GetNumLoadingTextures() const;
        unsigned int GetPeakLoadingTextures() const;
        unsigned int GetNumLoadingTexturesHeavyThreshold() const;
        TextureAtlasManager();
        ~TextureAtlasManager();
        static int32_t m_targetTextureMode; // = 1
        static int32_t m_virtualAtlases[6]; // = { 0, 0, 0, 0, 1496, 0 }

    private:
        MaterialManager* field_0;
        TextureManager* field_8;
        uint8_t _unknown_16[2744];
        unsigned int m_numLoadingTextures;
        unsigned int m_peakLoadingTextures;
        unsigned int m_numLoadingTexturesHeavyThreshold;
        uint8_t _unknown_2772[36];
        float field_2808;
        uint8_t _unknown_2812[68];
        bool field_2880;
        char field_2881;
        uint8_t _unknown_2882[6];
    };

    // 0x1001c85c0
    shared_ptr<TextureAtlasReference> TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::hash_set<int>>(
        const graphicutils::TextureAtlasUsage* textureAtlasUsage, const eastl::hash_set<int>& hash_set) {
        int* piVar2;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            in_RCX;
        eastl local_70;
        obj_iterator local_60;

        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_50;
        local_50.reserve(32);
        &local_70 = (eastl[16])in_RCX->begin();
        &local_60 = (obj_iterator[16])in_RCX->end();
        while (true) {
            if (local_70 != local_60 == '\0')
                break;
            piVar2 = (int*)local_70.HeapBeginPtr();
            PopulateMaterialInfoFromMaterialID((TextureAtlasManager*)textureAtlasUsage, &local_50, *piVar2);
            ++local_70;
        }
        SortMaterialInfoList((TextureAtlasManager*)textureAtlasUsage, &local_50);
        *this = textureAtlasUsage->CreateSharedTextureAtlasRef(hash_set, local_50);
        return this;
    }

    // 0x1001c87d0: GUIAnimationRGB::GUIAnimationRGB(int, int, int) has the same machine code as math::Vector3T<short>::Vector3T(short, short, short)

    // 0x1005f8060
    void TextureAtlasManager::SetTargetTextureMode(TextureMode textureMode) {
        m_targetTextureMode = textureMode;
    }

    // 0x1005f8080
    void TextureAtlasManager::SetNumLoadingTexturesHeavyThreshold(unsigned int arg1) {
        m_numLoadingTexturesHeavyThreshold = arg1;
    }

    // 0x100637300
    shared_ptr<TextureAtlasReference> TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<
        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>>(
        const graphicutils::TextureAtlasUsage* textureAtlasUsage,
        const eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>&
            vector_set) {
        Layout* in_RCX;

        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_50;
        local_50.reserve(32);
        auto piVar1 = in_RCX->HeapBeginPtr();
        auto piVar2 = in_RCX->end();
        if (piVar1 != piVar2) {
            do {
                PopulateMaterialInfoFromMaterialID((TextureAtlasManager*)textureAtlasUsage, &local_50, *piVar1);
                piVar1 = piVar1 + 1;
            } while (piVar1 != piVar2);
        }
        SortMaterialInfoList((TextureAtlasManager*)textureAtlasUsage, &local_50);
        *this = textureAtlasUsage->CreateSharedTextureAtlasRef(vector_set, local_50);
        return this;
    }

    // 0x1007bd330
    void TextureAtlasManager::GetTargetTextureMode() {
        return m_targetTextureMode;
    }

    // 0x10081be70
    shared_ptr<TextureAtlasReference>
    TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul>>(
        const graphicutils::TextureAtlasUsage* textureAtlasUsage, const eastl::fixed_vector<int, 128ul>& arg2) {
        Layout* in_RCX;

        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_50;
        local_50.reserve(32);
        auto piVar1 = in_RCX->HeapBeginPtr();
        auto piVar2 = in_RCX->end();
        if (piVar1 != piVar2) {
            do {
                PopulateMaterialInfoFromMaterialID((TextureAtlasManager*)textureAtlasUsage, &local_50, *piVar1);
                piVar1 = piVar1 + 1;
            } while (piVar1 != piVar2);
        }
        SortMaterialInfoList((TextureAtlasManager*)textureAtlasUsage, &local_50);
        *this = textureAtlasUsage->CreateSharedTextureAtlasRef(arg2, local_50);
        return this;
    }

    // 0x10085e790
    void TextureAtlasManager::PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos, const Material& material) {
        bool cVar2;
        uint32_t uVar3;
        uint8_t* puVar6;
        uint32_t* puVar7;
        array<unsigned int, 3ul> local_50;
        array<int, 3ul> local_40;
        uint32_t local_34;

        char cVar1 = material.ShowSkybox();
        if (!cVar1) {
            LogAssert("material.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.h",
                      138, nullptr);
        }
        cVar1 = material.IsRT7();
        if (cVar1) {
            if (m_targetTextureMode == 0) {
                cVar1 = material.HasForcedTextures();
                if (!cVar1) {
                    puVar6 = (uint8_t*)material.GetLastUpdateTimeNS();
                    if (puVar6 == AlphaMode::ALPHA_OPAQUE) {
                        uVar3 = 0;
                        puVar7 = &local_40[0];
                        *puVar7 = 4294967295;
                        puVar7 = &local_40[1];
                        *puVar7 = 4294967295;
                        puVar7 = &local_40[2];
                        *puVar7 = 4294967295;
                        puVar7 = &local_50[0];
                        *puVar7 = 0;
                        puVar7 = &local_50[1];
                        *puVar7 = 0;
                        goto LAB_10085e9b3;
                    }
                }
            }
            uVar3 = material.GetEndPosition();
            puVar7 = &local_40[0];
            *puVar7 = uVar3;
            uVar3 = material.GetNormalEmissiveMapID();
            puVar7 = &local_40[1];
            *puVar7 = uVar3;
            uVar3 = material.AlreadyWritten();
            puVar7 = &local_40[2];
            *puVar7 = uVar3;
            uVar3 = material.GetDiffuseAlphaMapSize();
            puVar7 = &local_50[0];
            *puVar7 = uVar3;
            uVar3 = material.GetSpriteID();
            puVar7 = &local_50[1];
            *puVar7 = uVar3;
            uVar3 = material.GetTint();
            goto LAB_10085e9b3;
        }
        uVar3 = material.GetPos();
        if (m_targetTextureMode == 0) {
            cVar1 = material.HasForcedTextures();
            if (cVar1)
                goto LAB_10085e8d3;
            puVar6 = (uint8_t*)material.GetLastUpdateTimeNS();
            if (puVar6 != AlphaMode::ALPHA_OPAQUE)
                goto LAB_10085e8d3;
            local_34 = 0;
        } else {
        LAB_10085e8d3:
            local_34 = material.Ready();
        }
        vector<MaterialInfo, SafeBucketAllocatorEASTL>* local_58 = materialInfos;
        if (m_targetTextureMode == 0) {
            cVar1 = material.HasForcedTextures();
            if (cVar1)
                goto LAB_10085e8f7;
            cVar1 = '\0';
        } else {
        LAB_10085e8f7:
            cVar2 = material.IsWeighted();
            cVar1 = '\x01';
            if (!cVar2) {
                cVar1 = material.HasHDRMap();
            }
        }
        uint32_t uVar5 = 4294967295;
        uint32_t uVar4 = 4294967295;
        if ((char)local_34 != '\0') {
            uVar4 = material.GetCompletedGold();
        }
        puVar7 = &local_40[0];
        *puVar7 = uVar4;
        uVar4 = 0;
        if (cVar1) {
            uVar5 = material.GetValue();
            uVar4 = uVar3;
        }
        puVar7 = &local_40[1];
        *puVar7 = uVar5;
        puVar7 = &local_40[2];
        *puVar7 = 4294967295;
        if ((char)local_34 == '\0') {
            uVar3 = 0;
        }
        puVar7 = &local_50[0];
        *puVar7 = uVar3;
        puVar7 = &local_50[1];
        *puVar7 = uVar4;
        uVar3 = 0;
        materialInfos = local_58;
    LAB_10085e9b3:
        puVar7 = &local_50[2];
        *puVar7 = uVar3;
        int arg1 = material.GetZ();
        MaterialInfo local_78(arg1, local_40, local_50);
        materialInfos.push_back(local_78);
    }

    // 0x100866fc0
    void
    TextureAtlasManager::PopulateMaterialInfoFromMaterial<eastl::allocator>(eastl::vector<MaterialInfo>& materialInfos,
                                                                            const Material& material) {
        bool cVar2;
        uint32_t uVar3;
        uint8_t* puVar6;
        uint32_t* puVar7;
        array<unsigned int, 3ul> local_50;
        array<int, 3ul> local_40;
        uint32_t local_34;

        char cVar1 = material.ShowSkybox();
        if (!cVar1) {
            LogAssert("material.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.h",
                      138, nullptr);
        }
        cVar1 = material.IsRT7();
        if (cVar1) {
            if (m_targetTextureMode == 0) {
                cVar1 = material.HasForcedTextures();
                if (!cVar1) {
                    puVar6 = (uint8_t*)material.GetLastUpdateTimeNS();
                    if (puVar6 == AlphaMode::ALPHA_OPAQUE) {
                        uVar3 = 0;
                        puVar7 = &local_40[0];
                        *puVar7 = 4294967295;
                        puVar7 = &local_40[1];
                        *puVar7 = 4294967295;
                        puVar7 = &local_40[2];
                        *puVar7 = 4294967295;
                        puVar7 = &local_50[0];
                        *puVar7 = 0;
                        puVar7 = &local_50[1];
                        *puVar7 = 0;
                        goto LAB_1008671e3;
                    }
                }
            }
            uVar3 = material.GetEndPosition();
            puVar7 = &local_40[0];
            *puVar7 = uVar3;
            uVar3 = material.GetNormalEmissiveMapID();
            puVar7 = &local_40[1];
            *puVar7 = uVar3;
            uVar3 = material.AlreadyWritten();
            puVar7 = &local_40[2];
            *puVar7 = uVar3;
            uVar3 = material.GetDiffuseAlphaMapSize();
            puVar7 = &local_50[0];
            *puVar7 = uVar3;
            uVar3 = material.GetSpriteID();
            puVar7 = &local_50[1];
            *puVar7 = uVar3;
            uVar3 = material.GetTint();
            goto LAB_1008671e3;
        }
        uVar3 = material.GetPos();
        if (m_targetTextureMode == 0) {
            cVar1 = material.HasForcedTextures();
            if (cVar1)
                goto LAB_100867103;
            puVar6 = (uint8_t*)material.GetLastUpdateTimeNS();
            if (puVar6 != AlphaMode::ALPHA_OPAQUE)
                goto LAB_100867103;
            local_34 = 0;
        } else {
        LAB_100867103:
            local_34 = material.Ready();
        }
        vector<MaterialInfo>* local_58 = materialInfos;
        if (m_targetTextureMode == 0) {
            cVar1 = material.HasForcedTextures();
            if (cVar1)
                goto LAB_100867127;
            cVar1 = '\0';
        } else {
        LAB_100867127:
            cVar2 = material.IsWeighted();
            cVar1 = '\x01';
            if (!cVar2) {
                cVar1 = material.HasHDRMap();
            }
        }
        uint32_t uVar5 = 4294967295;
        uint32_t uVar4 = 4294967295;
        if ((char)local_34 != '\0') {
            uVar4 = material.GetCompletedGold();
        }
        puVar7 = &local_40[0];
        *puVar7 = uVar4;
        uVar4 = 0;
        if (cVar1) {
            uVar5 = material.GetValue();
            uVar4 = uVar3;
        }
        puVar7 = &local_40[1];
        *puVar7 = uVar5;
        puVar7 = &local_40[2];
        *puVar7 = 4294967295;
        if ((char)local_34 == '\0') {
            uVar3 = 0;
        }
        puVar7 = &local_50[0];
        *puVar7 = uVar3;
        puVar7 = &local_50[1];
        *puVar7 = uVar4;
        uVar3 = 0;
        materialInfos = local_58;
    LAB_1008671e3:
        puVar7 = &local_50[2];
        *puVar7 = uVar3;
        int arg1 = material.GetZ();
        MaterialInfo local_78(arg1, local_40, local_50);
        materialInfos.push_back(local_78);
    }

    // 0x100872080
    void TextureAtlasManager::Destroy()::$_9::operator()(shared_ptr<TextureAtlas>& textureAtlas) const {
        if (unique() == '\0') {
            LogAssert("atlas.unique()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.cpp",
                      31, nullptr);
        }
        reset();
    }

    // 0x100872970
    void
    TextureAtlasManager::CreateRenderingResources()::$_10::operator()(shared_ptr<TextureAtlas>& textureAtlas) const {
        ((TextureAtlas*)(*this).operator->())->CreateRenderingResources();
    }

    // 0x100873fa0
    uint32_t
    TextureAtlasManager::SortMaterialInfoList(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&)::$_12::operator()(
        const MaterialInfo& materialInfo1, const MaterialInfo& materialInfo2) const {
        array<unsigned int, 3ul>* this_00 = (array<unsigned int, 3ul>*)(this + 16);
        int* piVar6 = (int*)(*this_00)[0];
        int iVar1 = *piVar6;
        piVar6 = (int*)(*this_00)[1];
        int iVar2 = *piVar6;
        piVar6 = (int*)(*this_00)[2];
        int iVar3 = *piVar6;
        uint64_t* this_01 = &materialInfo1.field_16;
        piVar6 = (int*)(*this_01)[0];
        int iVar5 = *piVar6;
        piVar6 = (int*)(*this_01)[1];
        int iVar4 = *piVar6;
        piVar6 = (int*)(*this_01)[2];
        iVar5 = *piVar6 * *piVar6 + iVar4 * iVar4 + iVar5 * iVar5;
        return iVar5 < iVar3 * iVar3 + iVar2 * iVar2 + iVar1 * iVar1;
    }

    // 0x100874df0
    unsigned long TextureAtlasManager::GetAtlasReference(
        graphicutils::TextureAtlasUsage const*,
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::$_13::operator()(shared_ptr<TextureAtlas>&
                                                                                            textureAtlas) const {
        uint64_t unaff_R15;
        TextureAtlasReference local_58;

        long lVar1 = **(long**)this;
        auto pTVar3 = textureAtlas.operator->();
        long lVar4 = pTVar3->GetAtlasUsageType();
        unsigned long uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (lVar1 == lVar4) {
            pTVar3 = (TextureAtlas*)textureAtlas.operator->();
            if (pTVar3->CheckContainsMaterials(*(*(vector<MaterialInfo, SafeBucketAllocatorEASTL>**)(this + 8))) !=
                '\0') {
                new (&local_58) TextureAtlasReference(textureAtlas,
                                                      *(*(vector<MaterialInfo, SafeBucketAllocatorEASTL>**)(this + 8)));
                (*(*(TextureAtlasReference**)(this + 16))) = local_58;
                uVar5 = 0;
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100875770
    unsigned long TextureAtlasManager::GetAtlasReference(
        graphicutils::TextureAtlasUsage const*,
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::$_14::operator()(shared_ptr<TextureAtlas>&
                                                                                            textureAtlas) const {
        uint64_t unaff_R15;
        TextureAtlasReference local_58;

        long lVar1 = **(long**)this;
        auto pTVar3 = textureAtlas.operator->();
        long lVar4 = pTVar3->GetAtlasUsageType();
        unsigned long uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (lVar1 == lVar4) {
            pTVar3 = (TextureAtlas*)textureAtlas.operator->();
            if (pTVar3->AddMaterials(*(*(vector<MaterialInfo, SafeBucketAllocatorEASTL>**)(this + 8))) != '\0') {
                new (&local_58) TextureAtlasReference(textureAtlas,
                                                      *(*(vector<MaterialInfo, SafeBucketAllocatorEASTL>**)(this + 8)));
                (*(*(TextureAtlasReference**)(this + 16))) = local_58;
                uVar5 = 0;
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100876420
    void TextureAtlasManager::MainDraw()::$_15::operator()(shared_ptr<TextureAtlas>& textureAtlas) const {
        long lVar2 = field_0;
        auto pTVar5 = textureAtlas.operator->();
        pTVar5->MainDraw();
        pTVar5 = (TextureAtlas*)textureAtlas.operator->();
        int iVar4 = pTVar5->GetNumLoadingTextures();
        int* piVar1 = (int*)(lVar2 + 2760);
        *piVar1 = *piVar1 + iVar4;
        pTVar5 = (TextureAtlas*)textureAtlas.operator->();
        iVar4 = pTVar5->GetNumLoadingMaterials();
        piVar1 = (int*)(lVar2 + 2760);
        *piVar1 = *piVar1 + iVar4;
        if (textureAtlas.unique()) {
            pTVar5 = (TextureAtlas*)textureAtlas.operator->();
            if (!(pTVar5->InUse())) {
                field_8->emplace_back<shared_ptr<TextureAtlas>&>(textureAtlas);
                textureAtlas.reset();
            }
        }
    }

    // 0x100876720
    bool TextureAtlasManager::RegisterHighPriorityMaterials(eastl::fixed_vector<int, 128ul> const&)::$_16::operator()(
        int arg1) const {
        return -1 < (int)this;
    }

    // 0x100877040
    void TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::$_17::operator()(
        shared_ptr<TextureAtlas>& textureAtlas) const {
        long lVar1 = field_0;
        scoped_lock<std::mutex> local_28(*((lVar1 + 2816)));
        Layout* this_00 = (Layout*)(lVar1 + 2776);
        auto piVar2 = this_00->HeapBeginPtr();
        auto piVar3 = this_00->end();
        piVar2 = eastl::operator()(piVar2, piVar3, (_lambda_int__1_*)textureAtlas);
        piVar3 = (int*)this_00->end();
        this_00->erase(piVar2, piVar3);
    }

    // 0x100877250
    void TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::$_17::operator()(shared_ptr<TextureAtlas>&) const ::{
        lambda(int) #1
    }
    ::operator()(int arg1) const {
        ((TextureAtlas*)(*(*(shared_ptr<TextureAtlas>**)this)).operator->())->CheckMaterialLoaded(arg1);
    }

    // 0x1008a9340
    unsigned int TextureAtlasManager::GetNumLoadingTextures() const {
        return m_numLoadingTextures;
    }

    // 0x1008a9350
    unsigned int TextureAtlasManager::GetPeakLoadingTextures() const {
        return m_peakLoadingTextures;
    }

    // 0x1008a9360
    unsigned int TextureAtlasManager::GetNumLoadingTexturesHeavyThreshold() const {
        return m_numLoadingTexturesHeavyThreshold;
    }

    // 0x10098e7f0
    TextureAtlasManager::TextureAtlasManager() : field_0(nullptr), field_8(nullptr) {
        (&field_16)->destruct<oldscape::highlight::NpcUID*>();
        new (&field_200) std::array<GuardedTextureAtlas, 32ul>();
        m_numLoadingTextures = 0;
        m_peakLoadingTextures = 0;
        m_numLoadingTexturesHeavyThreshold = 256;
        new (&field_2776) eastl::vector<int>();
        field_2808 = 0.0;
        new (&field_2816) std::mutex();
        field_2880 = false;
        field_2881 = '\0';
    }

    // 0x10098e9a0
    TextureAtlasManager::~TextureAtlasManager() {
        (&field_2816)->~mutex();
        field_2776.~vector();
        field_200.~array();
    }

} // namespace jag::graphics

namespace jag::graphicutils {
    // 0x1001c87d0: TextureAtlasSlot2D::TextureAtlasSlot2D(unsigned short, unsigned short, unsigned short) has the same machine code as math::Vector3T<short>::Vector3T(short, short, short)

} // namespace jag::graphicutils

namespace jag::math {
    // 0x1001c8860
    Vector3T<short>* Vector3T<short>::operator=(const Vector3T<short>& vector3) {
        *(uint16_t*)this = *(uint16_t*)vector3;
        *(uint16_t*)(this + 2) = *(uint16_t*)(vector3 + 2);
        *(uint16_t*)(this + 4) = *(uint16_t*)(vector3 + 4);
        return this;
    }

} // namespace jag::math
