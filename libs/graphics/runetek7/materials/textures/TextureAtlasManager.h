// libs/graphics/runetek7/materials/textures/TextureAtlasManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class TextureAtlasManager {
    public:
        shared_ptr<TextureAtlasReference> GetSharedAtlasRefFromMaterialIDs<
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>>(
            graphicutils::TextureAtlasUsage const*,
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&);
        void SetTargetTextureMode(TextureMode);
        void SetNumLoadingTexturesHeavyThreshold(unsigned int);
        shared_ptr<TextureAtlasReference> GetSharedAtlasRefFromMaterialIDs<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>>(
            graphicutils::TextureAtlasUsage const*, eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                      eastl::vector<int, BucketAllocatorEASTL>> const&);
        GetTargetTextureMode();
        shared_ptr<TextureAtlasReference>
        GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul, true, eastl::allocator>>(
            graphicutils::TextureAtlasUsage const*, eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&);
        GetSettings();
        void PopulateMaterialInfoFromMaterialID(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&, int);
        GetMaxSimultaneousTextureUploadsPerAtlas() const;
        void Initialise(MaterialManager*, TextureManager*);
        void Destroy();
        void DestroyRenderingResources();
        void IterateAtlases(std::function<bool(shared_ptr<TextureAtlas>&)>);
        void CreateRenderingResources();
        int GetMaximumGutterSize();
        GetSharedAtlasRefFromMaterials(graphicutils::TextureAtlasUsage const*,
                                       eastl::vector<Material const*, BucketAllocatorEASTL> const&);
        void PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(
            eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&, Material const&);
        void SortMaterialInfoList(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&);
        CreateSharedTextureAtlasRef(graphicutils::TextureAtlasUsage const*,
                                    eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&);
        TextureAtlasManager* GetDummySharedMaterialReference(graphicutils::TextureAtlasUsage const*);
        GetAtlasReference(graphicutils::TextureAtlasUsage const*,
                          eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&);
        void GetVirtualAtlas(graphicutils::TextureAtlasQuality const&, graphicutils::TextureAtlasUsage const*, bool);
        void MainLogic();
        void RebuildAtlases(bool);
        void MainDraw();
        void RemoveLoadedHighPriorityMaterials();
        void RegisterHighPriorityMaterials(eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&);
        void PopulateMaterialInfoFromMaterial<eastl::allocator>(eastl::vector<MaterialInfo, eastl::allocator>&,
                                                                Material const&);
        uint GetNumLoadingTextures() const;
        uint GetPeakLoadingTextures() const;
        uint GetNumLoadingTexturesHeavyThreshold() const;
        TextureAtlasManager();
        ~TextureAtlasManager();
        static /* 4 bytes */ m_targetTextureMode; // = 1
        static /* 24 bytes */ m_virtualAtlases;   // = { 0, 0, 0, 0, 1496, 0 }

        // data members, from how the methods use this: 2888 bytes
        MaterialManager* field_0; // offset 0
        TextureManager* field_8;  // offset 8
        char _unknown_16[2744];
        uint m_numLoadingTextures;               // offset 2760
        uint m_peakLoadingTextures;              // offset 2764
        uint m_numLoadingTexturesHeavyThreshold; // offset 2768
        char _unknown_2772[36];
        float field_2808; // offset 2808
        char _unknown_2812[68];
        bool field_2880; // offset 2880
        char field_2881; // offset 2881
        char _unknown_2882[6];
    };

    // 0x1001c85c0, 240 bytes, inline, placed by class name and debug map
    // shared_ptr<TextureAtlasReference> TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> >(graphicutils::TextureAtlasUsage const*, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&)
    shared_ptr* TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<
        eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>>(
        shared_ptr* __return_storage_ptr__, TextureAtlasManager* this, TextureAtlasUsage* param_1, hash_set* param_2) {
        int* piVar2;
        undefined8 extraout_RDX;
        undefined1 auVar3[16];
        eastl local_70[16];
        undefined8 local_60;
        undefined8 local_58;
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_50[24];

        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::reserve(local_50, 32);
        local_70 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        auVar3 = param_2->end();
        local_58 = auVar3._8_8_;
        while (true) {
            local_60 = auVar3._0_8_;
            if (!eastl::operator!=(local_70, (hashtable_iterator_base*)&local_60, auVar3._8_8_))
                break;
            piVar2 = (int*)local_70->HeapBeginPtr();
            PopulateMaterialInfoFromMaterialID(this, (vector*)local_50, *piVar2);
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_70);
            auVar3._8_8_ = extraout_RDX;
            auVar3._0_8_ = local_60;
        }
        SortMaterialInfoList(this, (vector*)local_50);
        CreateSharedTextureAtlasRef((TextureAtlasManager*)__return_storage_ptr__, (TextureAtlasUsage*)this,
                                    (vector*)param_1);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::~vector(local_50);
        return __return_storage_ptr__;
    }

    // 0x1001c87d0: the linker folded this into math::Vector3T<short>::Vector3T(short, short, short), which has identical code
    GUIAnimationRGB::GUIAnimationRGB(int, int, int);

    // 0x1005f8060, 16 bytes, inline, placed by class name
    // TextureAtlasManager::SetTargetTextureMode(TextureMode)
    void TextureAtlasManager::SetTargetTextureMode(undefined4 param_1) {
        m_targetTextureMode = param_1;
    }

    // 0x1005f8080, 16 bytes, inline, placed by class name
    // TextureAtlasManager::SetNumLoadingTexturesHeavyThreshold(unsigned int)
    void TextureAtlasManager::SetNumLoadingTexturesHeavyThreshold(uint param_1) {
        m_numLoadingTexturesHeavyThreshold = param_1;
    }

    // 0x100637300, 208 bytes, inline, placed by class name
    // shared_ptr<TextureAtlasReference> TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL> > >(graphicutils::TextureAtlasUsage const*, eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL> > const&)
    shared_ptr* TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<
        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>>(
        shared_ptr* __return_storage_ptr__, TextureAtlasManager* this, TextureAtlasUsage* param_1,
        vector_set* param_2) {
        int* piVar1;
        int* piVar2;
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_50[24];

        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::reserve(local_50, 32);
        piVar1 = (int*)param_2->HeapBeginPtr();
        piVar2 = (int*)param_2->end();
        if (piVar1 != piVar2) {
            do {
                PopulateMaterialInfoFromMaterialID(this, (vector*)local_50, *piVar1);
                piVar1 = piVar1 + 1;
            } while (piVar1 != piVar2);
        }
        SortMaterialInfoList(this, (vector*)local_50);
        CreateSharedTextureAtlasRef((TextureAtlasManager*)__return_storage_ptr__, (TextureAtlasUsage*)this,
                                    (vector*)param_1);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::~vector(local_50);
        return __return_storage_ptr__;
    }

    // 0x1007bd330, 16 bytes, inline, placed by class name
    // TextureAtlasManager::GetTargetTextureMode()
    undefined4 TextureAtlasManager::GetTargetTextureMode() {
        return m_targetTextureMode;
    }

    // 0x10081be70, 208 bytes, inline, placed by class name
    // shared_ptr<TextureAtlasReference> TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul, true, eastl::allocator> >(graphicutils::TextureAtlasUsage const*, eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&)
    shared_ptr*
    TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul, true, eastl::allocator>>(
        shared_ptr* __return_storage_ptr__, TextureAtlasManager* this, TextureAtlasUsage* param_1,
        fixed_vector* param_2) {
        int* piVar1;
        int* piVar2;
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_50[24];

        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::reserve(local_50, 32);
        piVar1 = (int*)param_2->HeapBeginPtr();
        piVar2 = (int*)param_2->end();
        if (piVar1 != piVar2) {
            do {
                PopulateMaterialInfoFromMaterialID(this, (vector*)local_50, *piVar1);
                piVar1 = piVar1 + 1;
            } while (piVar1 != piVar2);
        }
        SortMaterialInfoList(this, (vector*)local_50);
        CreateSharedTextureAtlasRef((TextureAtlasManager*)__return_storage_ptr__, (TextureAtlasUsage*)this,
                                    (vector*)param_1);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::~vector(local_50);
        return __return_storage_ptr__;
    }

    // 0x10085e790, 752 bytes, inline, placed by class name
    // void TextureAtlasManager::PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&, Material const&)
    void TextureAtlasManager::PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(vector* param_1,
                                                                                         Material* param_2) {
        char cVar1;
        char cVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        int iVar6;
        undefined* puVar7;
        undefined4* puVar8;
        MaterialInfo local_78;
        vector* local_58;
        array<unsigned int, 3ul> local_50[16];
        array<int, 3ul> local_40[12];
        undefined4 local_34;

        cVar1 = param_2->ShowSkybox();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("material.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.h",
                      138, (char*)0);
        }
        cVar1 = param_2->IsRT7();
        if (cVar1 != '\0') {
            if (m_targetTextureMode == 0) {
                cVar1 = param_2->HasForcedTextures();
                if (cVar1 == '\0') {
                    puVar7 = (undefined*)param_2->GetLastUpdateTimeNS();
                    if (puVar7 == AlphaMode::ALPHA_OPAQUE) {
                        uVar3 = 0;
                        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 0);
                        *puVar8 = 4294967295;
                        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 1);
                        *puVar8 = 4294967295;
                        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 2);
                        *puVar8 = 4294967295;
                        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 0);
                        *puVar8 = 0;
                        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 1);
                        *puVar8 = 0;
                        goto LAB_10085e9b3;
                    }
                }
            }
            uVar3 = param_2->GetEndPosition();
            puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 0);
            *puVar8 = uVar3;
            uVar3 = param_2->GetNormalEmissiveMapID();
            puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 1);
            *puVar8 = uVar3;
            uVar3 = param_2->AlreadyWritten();
            puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 2);
            *puVar8 = uVar3;
            uVar3 = param_2->GetDiffuseAlphaMapSize();
            puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 0);
            *puVar8 = uVar3;
            uVar3 = param_2->GetSpriteID();
            puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 1);
            *puVar8 = uVar3;
            uVar3 = param_2->GetTint();
            goto LAB_10085e9b3;
        }
        uVar3 = param_2->GetPos();
        if (m_targetTextureMode == 0) {
            cVar1 = param_2->HasForcedTextures();
            if (cVar1 != '\0')
                goto LAB_10085e8d3;
            puVar7 = (undefined*)param_2->GetLastUpdateTimeNS();
            if (puVar7 != AlphaMode::ALPHA_OPAQUE)
                goto LAB_10085e8d3;
            local_34 = 0;
        } else {
        LAB_10085e8d3:
            local_34 = param_2->Ready();
        }
        local_58 = param_1;
        if (m_targetTextureMode == 0) {
            cVar1 = param_2->HasForcedTextures();
            if (cVar1 != '\0')
                goto LAB_10085e8f7;
            cVar1 = '\0';
        } else {
        LAB_10085e8f7:
            cVar2 = param_2->IsWeighted();
            cVar1 = '\x01';
            if (cVar2 == '\0') {
                cVar1 = param_2->HasHDRMap();
            }
        }
        uVar5 = 4294967295;
        uVar4 = 4294967295;
        if ((char)local_34 != '\0') {
            uVar4 = param_2->GetCompletedGold();
        }
        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 0);
        *puVar8 = uVar4;
        uVar4 = 0;
        if (cVar1 != '\0') {
            uVar5 = param_2->GetValue();
            uVar4 = uVar3;
        }
        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 1);
        *puVar8 = uVar5;
        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 2);
        *puVar8 = 4294967295;
        if ((char)local_34 == '\0') {
            uVar3 = 0;
        }
        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 0);
        *puVar8 = uVar3;
        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 1);
        *puVar8 = uVar4;
        uVar3 = 0;
        param_1 = local_58;
    LAB_10085e9b3:
        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 2);
        *puVar8 = uVar3;
        iVar6 = param_2->GetZ();
        new (&local_78) MaterialInfo(iVar6, local_40, local_50);
        param_1->push_back(&local_78);
    }

    // 0x100866fc0, 752 bytes, inline, placed by class name
    // void TextureAtlasManager::PopulateMaterialInfoFromMaterial<eastl::allocator>(eastl::vector<MaterialInfo, eastl::allocator>&, Material const&)
    void TextureAtlasManager::PopulateMaterialInfoFromMaterial<eastl::allocator>(vector* param_1, Material* param_2) {
        char cVar1;
        char cVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        int iVar6;
        undefined* puVar7;
        undefined4* puVar8;
        MaterialInfo local_78;
        vector* local_58;
        array<unsigned int, 3ul> local_50[16];
        array<int, 3ul> local_40[12];
        undefined4 local_34;

        cVar1 = param_2->ShowSkybox();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("material.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.h",
                      138, (char*)0);
        }
        cVar1 = param_2->IsRT7();
        if (cVar1 != '\0') {
            if (m_targetTextureMode == 0) {
                cVar1 = param_2->HasForcedTextures();
                if (cVar1 == '\0') {
                    puVar7 = (undefined*)param_2->GetLastUpdateTimeNS();
                    if (puVar7 == AlphaMode::ALPHA_OPAQUE) {
                        uVar3 = 0;
                        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 0);
                        *puVar8 = 4294967295;
                        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 1);
                        *puVar8 = 4294967295;
                        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 2);
                        *puVar8 = 4294967295;
                        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 0);
                        *puVar8 = 0;
                        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 1);
                        *puVar8 = 0;
                        goto LAB_1008671e3;
                    }
                }
            }
            uVar3 = param_2->GetEndPosition();
            puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 0);
            *puVar8 = uVar3;
            uVar3 = param_2->GetNormalEmissiveMapID();
            puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 1);
            *puVar8 = uVar3;
            uVar3 = param_2->AlreadyWritten();
            puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 2);
            *puVar8 = uVar3;
            uVar3 = param_2->GetDiffuseAlphaMapSize();
            puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 0);
            *puVar8 = uVar3;
            uVar3 = param_2->GetSpriteID();
            puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 1);
            *puVar8 = uVar3;
            uVar3 = param_2->GetTint();
            goto LAB_1008671e3;
        }
        uVar3 = param_2->GetPos();
        if (m_targetTextureMode == 0) {
            cVar1 = param_2->HasForcedTextures();
            if (cVar1 != '\0')
                goto LAB_100867103;
            puVar7 = (undefined*)param_2->GetLastUpdateTimeNS();
            if (puVar7 != AlphaMode::ALPHA_OPAQUE)
                goto LAB_100867103;
            local_34 = 0;
        } else {
        LAB_100867103:
            local_34 = param_2->Ready();
        }
        local_58 = param_1;
        if (m_targetTextureMode == 0) {
            cVar1 = param_2->HasForcedTextures();
            if (cVar1 != '\0')
                goto LAB_100867127;
            cVar1 = '\0';
        } else {
        LAB_100867127:
            cVar2 = param_2->IsWeighted();
            cVar1 = '\x01';
            if (cVar2 == '\0') {
                cVar1 = param_2->HasHDRMap();
            }
        }
        uVar5 = 4294967295;
        uVar4 = 4294967295;
        if ((char)local_34 != '\0') {
            uVar4 = param_2->GetCompletedGold();
        }
        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 0);
        *puVar8 = uVar4;
        uVar4 = 0;
        if (cVar1 != '\0') {
            uVar5 = param_2->GetValue();
            uVar4 = uVar3;
        }
        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 1);
        *puVar8 = uVar5;
        puVar8 = (undefined4*)std::array<int, 3ul>::operator[](local_40, 2);
        *puVar8 = 4294967295;
        if ((char)local_34 == '\0') {
            uVar3 = 0;
        }
        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 0);
        *puVar8 = uVar3;
        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 1);
        *puVar8 = uVar4;
        uVar3 = 0;
        param_1 = local_58;
    LAB_1008671e3:
        puVar8 = (undefined4*)std::array<unsigned int, 3ul>::operator[](local_50, 2);
        *puVar8 = uVar3;
        iVar6 = param_2->GetZ();
        new (&local_78) MaterialInfo(iVar6, local_40, local_50);
        param_1->push_back(&local_78);
    }

    // 0x100872080, 64 bytes, inline, placed by class name
    // TextureAtlasManager::Destroy()::$_9::operator()(shared_ptr<TextureAtlas>&) const
    /* TextureAtlasManager::Destroy()::$_9::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&)
   const */

    void TextureAtlasManager::Destroy()::$_9::operator()(shared_ptr* param_1) {
        char cVar1;

        cVar1 = unique();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("atlas.unique()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.cpp",
                      31, (char*)0);
        }
        shared_ptr<TextureAtlas>::reset();
    }

    // 0x100872970, 32 bytes, inline, placed by class name
    // TextureAtlasManager::CreateRenderingResources()::$_10::operator()(shared_ptr<TextureAtlas>&) const
    /* TextureAtlasManager::CreateRenderingResources()::$_10::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&)
   const */

    void TextureAtlasManager::CreateRenderingResources()::$_10::operator()(shared_ptr* param_1) {
        TextureAtlas* this_00;

        this_00 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)this);
        this_00->CreateRenderingResources();
    }

    // 0x100873fa0, 160 bytes, inline, placed by class name
    // TextureAtlasManager::SortMaterialInfoList(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&)::$_12::operator()(MaterialInfo const&, MaterialInfo const&) const
    /* TextureAtlasManager::SortMaterialInfoList(eastl::vector<MaterialInfo,
   SafeBucketAllocatorEASTL>&)::$_12::TEMPNAMEPLACEHOLDERVALUE(MaterialInfo
   const&, MaterialInfo const&) const */

    undefined4 TextureAtlasManager::SortMaterialInfoList(
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&)::$_12::operator()(MaterialInfo* param_1,
                                                                                  MaterialInfo* param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int* piVar6;
        undefined8* puVar7;

        puVar7 = &param_1->field_16;
        piVar6 = (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar7, 0);
        iVar1 = *piVar6;
        piVar6 = (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar7, 1);
        iVar2 = *piVar6;
        piVar6 = (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar7, 2);
        iVar3 = *piVar6;
        puVar7 = &param_2->field_16;
        piVar6 = (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar7, 0);
        iVar5 = *piVar6;
        piVar6 = (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar7, 1);
        iVar4 = *piVar6;
        piVar6 = (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar7, 2);
        iVar5 = *piVar6 * *piVar6 + iVar4 * iVar4 + iVar5 * iVar5;
        return CONCAT31((int3)((uint)iVar5 >> 8), iVar5 < iVar3 * iVar3 + iVar2 * iVar2 + iVar1 * iVar1);
    }

    // 0x100874df0, 160 bytes, inline, placed by class name
    // TextureAtlasManager::GetAtlasReference(graphicutils::TextureAtlasUsage const*, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::$_13::operator()(shared_ptr<TextureAtlas>&) const
    /* TextureAtlasManager::GetAtlasReference(graphicutils::TextureAtlasUsage
   const*, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>
   const&)::$_13::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&) const */

    ulong TextureAtlasManager::GetAtlasReference(
        graphicutils::TextureAtlasUsage_const*,
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::$_13::operator()(shared_ptr* param_1) {
        long lVar1;
        TextureAtlas* pTVar3;
        long lVar4;
        undefined8 unaff_R15;
        ulong uVar5;
        TextureAtlasReference local_58;

        lVar1 = **(long**)this;
        pTVar3 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
        lVar4 = pTVar3->GetAtlasUsageType();
        uVar5 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (lVar1 == lVar4) {
            pTVar3 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
            if (pTVar3->CheckContainsMaterials(*(vector**)(this + 8)) != '\0') {
                new (&local_58) TextureAtlasReference(param_1, *(vector**)(this + 8));
                TextureAtlasReference::operator=(*(TextureAtlasReference**)(this + 16), &local_58);
                local_58.~TextureAtlasReference();
                uVar5 = 0;
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100875770, 160 bytes, inline, placed by class name
    // TextureAtlasManager::GetAtlasReference(graphicutils::TextureAtlasUsage const*, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::$_14::operator()(shared_ptr<TextureAtlas>&) const
    /* TextureAtlasManager::GetAtlasReference(graphicutils::TextureAtlasUsage
   const*, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>
   const&)::$_14::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&) const */

    ulong TextureAtlasManager::GetAtlasReference(
        graphicutils::TextureAtlasUsage_const*,
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::$_14::operator()(shared_ptr* param_1) {
        long lVar1;
        TextureAtlas* pTVar3;
        long lVar4;
        undefined8 unaff_R15;
        ulong uVar5;
        TextureAtlasReference local_58;

        lVar1 = **(long**)this;
        pTVar3 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
        lVar4 = pTVar3->GetAtlasUsageType();
        uVar5 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (lVar1 == lVar4) {
            pTVar3 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
            if (pTVar3->AddMaterials(*(vector**)(this + 8)) != '\0') {
                new (&local_58) TextureAtlasReference(param_1, *(vector**)(this + 8));
                TextureAtlasReference::operator=(*(TextureAtlasReference**)(this + 16), &local_58);
                local_58.~TextureAtlasReference();
                uVar5 = 0;
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100876420, 144 bytes, inline, placed by class name
    // TextureAtlasManager::MainDraw()::$_15::operator()(shared_ptr<TextureAtlas>&) const
    /* TextureAtlasManager::MainDraw()::$_15::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&)
   const */

    void TextureAtlasManager::MainDraw()::$_15::operator()(shared_ptr* param_1) {
        int* piVar1;
        long lVar2;
        char cVar3;
        int iVar4;
        TextureAtlas* pTVar5;

        lVar2 = *(long*)this;
        pTVar5 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
        pTVar5->MainDraw();
        pTVar5 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
        iVar4 = pTVar5->GetNumLoadingTextures();
        piVar1 = (int*)(lVar2 + 2760);
        *piVar1 = *piVar1 + iVar4;
        pTVar5 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
        iVar4 = pTVar5->GetNumLoadingMaterials();
        piVar1 = (int*)(lVar2 + 2760);
        *piVar1 = *piVar1 + iVar4;
        cVar3 = param_1->unique();
        if (cVar3 != '\0') {
            pTVar5 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
            cVar3 = pTVar5->InUse();
            if (cVar3 == '\0') {
                eastl::vector<shared_ptr<TextureAtlas>,
                              eastl::fixed_vector_allocator<16ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
                    emplace_back<shared_ptr<TextureAtlas>&>(
                        *(vector<shared_ptr<TextureAtlas>,
                                 eastl::fixed_vector_allocator<16ul, 32ul, 8ul, 0ul, true, eastl::allocator>>**)(this +
                                                                                                                 8),
                        param_1);
                shared_ptr<TextureAtlas>::reset();
            }
        }
    }

    // 0x100876720, 16 bytes, inline, placed by class name
    // TextureAtlasManager::RegisterHighPriorityMaterials(eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&)::$_16::operator()(int) const
    /* TextureAtlasManager::RegisterHighPriorityMaterials(eastl::fixed_vector<int, 128ul,
   true, eastl::allocator> const&)::$_16::TEMPNAMEPLACEHOLDERVALUE(int) const */

    bool TextureAtlasManager::RegisterHighPriorityMaterials(
        eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&)::$_16::operator()(int param_1) {
        return -1 < (int)this;
    }

    // 0x100877040, 144 bytes, inline, placed by class name
    // TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::$_17::operator()(shared_ptr<TextureAtlas>&) const
    /* TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::$_17::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&)
   const */

    void TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::$_17::operator()(shared_ptr* param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        int* piVar4;
        int* piVar5;
        Layout* this_00;
        scoped_lock<std::mutex> local_28[8];

        lVar1 = *(long*)this;
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)(lVar1 + 2816));
        this_00 = (Layout*)(lVar1 + 2776);
        uVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        uVar3 = this_00->end();
        piVar4 = eastl::operator()(uVar2, uVar3, param_1);
        piVar5 = (int*)this_00->end();
        this_00->erase(piVar4, piVar5);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100877250, 48 bytes, inline, placed by class name
    // TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::$_17::operator()(shared_ptr<TextureAtlas>&) const::{lambda(int)#1}::operator()(int) const
    /* TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::$_17::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&)
   const::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

    _func_TEMPNAMEPLACEHOLDERVALUE_shared_ptr_ptr* const ::{
        lambda(int) #1
    }
    ::operator()(int param_1) {
        TextureAtlas* this_00;
        _func_TEMPNAMEPLACEHOLDERVALUE_shared_ptr_ptr* p_Var1;

        this_00 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->(*(shared_ptr<TextureAtlas>**)this);
        p_Var1 = (_func_TEMPNAMEPLACEHOLDERVALUE_shared_ptr_ptr*)this_00->CheckMaterialLoaded(param_1);
        return p_Var1;
    }

    // 0x1008a9340, 16 bytes, inline, placed by class name
    // TextureAtlasManager::GetNumLoadingTextures() const
    uint TextureAtlasManager::GetNumLoadingTextures() {
        return m_numLoadingTextures;
    }

    // 0x1008a9350, 16 bytes, inline, placed by class name
    // TextureAtlasManager::GetPeakLoadingTextures() const
    uint TextureAtlasManager::GetPeakLoadingTextures() {
        return m_peakLoadingTextures;
    }

    // 0x1008a9360, 16 bytes, inline, placed by class name
    // TextureAtlasManager::GetNumLoadingTexturesHeavyThreshold() const
    uint TextureAtlasManager::GetNumLoadingTexturesHeavyThreshold() {
        return m_numLoadingTexturesHeavyThreshold;
    }

    // 0x10098e450, 16 bytes, complete-object constructor, inline, placed by class name
    // TextureAtlasManager::TextureAtlasManager(): jumps straight to the base-object constructor

    // 0x10098e460, 16 bytes, complete-object destructor, inline, placed by class name
    // TextureAtlasManager::~TextureAtlasManager(): jumps straight to the base-object destructor

    // 0x10098e7f0, 128 bytes, base-object constructor, inline, placed by class name
    // TextureAtlasManager::TextureAtlasManager()
    void TextureAtlasManager::TextureAtlasManager() {
        NpcUID* in_RDX;
        NpcUID* in_RSI;

        field_0 = (MaterialManager*)0;
        field_8 = (TextureManager*)0;
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&field_16, in_RSI, in_RDX);
        new (&field_200) std::array<GuardedTextureAtlas, 32ul>();
        m_numLoadingTextures = 0;
        m_peakLoadingTextures = 0;
        m_numLoadingTexturesHeavyThreshold = 256;
        new (&field_2776) eastl::vector<int, eastl::allocator>();
        field_2808 = 0.0;
        new (&field_2816) std::mutex();
        field_2880 = false;
        field_2881 = '\0';
    }

    // 0x10098e9a0, 64 bytes, base-object destructor, inline, placed by class name
    // TextureAtlasManager::~TextureAtlasManager()
    void TextureAtlasManager::~TextureAtlasManager() {
        (&field_2816)->~mutex();
        (&field_2776)->~vector();
        (&field_200)->~array();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1001c87c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T<int>(Vector3T<int> const&): jumps straight to the base-object constructor

    // 0x1001c87d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<short>::Vector3T(short, short, short): jumps straight to the base-object constructor

    // 0x1001c8860, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<short>::operator=(Vector3T<short> const&)
    /* Vector3T<short>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<short> const&) */

    Vector3T<short>* Vector3T<short>::operator=(Vector3T* param_1) {
        *(undefined2*)this = *(undefined2*)param_1;
        *(undefined2*)(this + 2) = *(undefined2*)(param_1 + 2);
        *(undefined2*)(this + 4) = *(undefined2*)(param_1 + 4);
        return this;
    }

} // namespace jag::math

namespace jag::graphicutils {
    // 0x1001c87d0: the linker folded this into math::Vector3T<short>::Vector3T(short, short, short), which has identical code
    TextureAtlasSlot2D::TextureAtlasSlot2D(unsigned short, unsigned short, unsigned short);

} // namespace jag::graphicutils
