// libs/graphics/runetek7/materials/textures/TextureAtlasManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextureAtlasManager.h"

namespace jag::graphics {
    // 0x100f43e80
    int32_t TextureAtlasManager::m_targetTextureMode = 1;

    // 0x100f4e2a8
    int32_t TextureAtlasManager::m_virtualAtlases[6] = {0, 0, 0, 0, 1496, 0};

    // 0x100856fc0
    uint8_t* TextureAtlasManager::GetSettings() {
        if (field_2881 == '\0') {
            field_16.Initialise();
            field_2881 = '\x01';
        }
        return &field_16;
    }

    // 0x10085c150
    void TextureAtlasManager::PopulateMaterialInfoFromMaterialID(
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos, int arg2) {
        Material* material;
        MaterialInfo local_58;
        uint32_t local_30;
        uint32_t local_20;

        if (arg2 == -1) {
            local_30 = 4294967295;
            local_20 = 0;
            local_58 = MaterialInfo(-1, 18446744073709551615, 0);
            materialInfos.emplace_back<MaterialInfo>(local_58);
        } else {
            material = field_0->GetMaterial(arg2);
            PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(materialInfos, material);
        }
    }

    // 0x10085cdf0
    uint32_t TextureAtlasManager::GetMaxSimultaneousTextureUploadsPerAtlas() const {
        bool cVar1;

        scoped_lock<std::mutex> local_20(field_2816);
        uint32_t uVar2 = 128;
        if (m_peakLoadingTextures <= m_numLoadingTexturesHeavyThreshold) {
            cVar1 = field_2776.empty();
            uVar2 = 128;
            if (cVar1) {
                uVar2 = 4;
            }
        }
        return uVar2;
    }

    // 0x10085e1f0
    void TextureAtlasManager::Initialise(MaterialManager* materialManager, TextureManager* textureManager) {
        if ((materialManager == nullptr) || (textureManager == nullptr)) {
            LogAssert("materialManager && textureManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.cpp",
                      19, nullptr);
        }
        field_0 = materialManager;
        field_8 = textureManager;
    }

    // 0x10085e240
    void TextureAtlasManager::Destroy() {
        __9* in_RSI;
        function<bool(shared_ptr<TextureAtlas>&)> local_58[56];
        long local_20;

        DestroyRenderingResources();
        std::function<bool(shared_ptr<TextureAtlas>&)>::function<TextureAtlasManager::Destroy()::__9, void>(local_58,
                                                                                                            in_RSI);
        IterateAtlases(local_58);
    }

    // 0x10085e2c0
    void TextureAtlasManager::DestroyRenderingResources() {
        TextureAtlas* this_01;
        __11* in_RSI;
        function<void(TextureAtlasReference&)> local_58[56];
        long local_20;

        shared_ptr* this_00 = std::array<GuardedTextureAtlas, 32ul>::begin();
        shared_ptr* psVar2 = std::array<GuardedTextureAtlas, 32ul>::end();
        for (; this_00 != psVar2; this_00 = this_00 + 5) {
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                this_01 = (TextureAtlas*)(*this_00).operator->();
                this_01->DestroyRenderingResources();
            }
        }
        std::function<void(TextureAtlasReference&)>::function<TextureAtlasManager::DestroyRenderingResources()::__11,
                                                              void>(local_58, in_RSI);
        MakeSharedPool<TextureAtlasReference, 8192>::IteratePool(local_58);
    }

    // 0x10085e380
    void TextureAtlasManager::IterateAtlases(std::function<bool(shared_ptr<TextureAtlas>&)> callback) {
        bool bVar1;
        bool bVar2;
        bool cVar3;
        scoped_lock<std::recursive_mutex> local_40;
        function<bool_(shared_ptr<TextureAtlas>&)>* local_38;

        local_38 = callback;
        shared_ptr* this_00 = std::array<GuardedTextureAtlas, 32ul>::begin();
        shared_ptr* psVar4 = std::array<GuardedTextureAtlas, 32ul>::end();
        if (this_00 != psVar4) {
            do {
                cVar3 = shared_ptr::operator_cast_to_bool(this_00);
                if (!cVar3) {
                LAB_10085e412:
                    bVar2 = false;
                } else {
                    local_40 = std::scoped_lock(*((this_00 + 1)));
                    cVar3 = shared_ptr::operator_cast_to_bool(this_00);
                    if (!cVar3) {
                    LAB_10085e3f4:
                        bVar2 = false;
                        bVar1 = true;
                    } else {
                        cVar3 = std::function<bool(shared_ptr<TextureAtlas>&)>::operator()(
                            (function<bool(shared_ptr<TextureAtlas>&)>*)local_38, (shared_ptr<TextureAtlas>*)this_00);
                        if (cVar3)
                            goto LAB_10085e3f4;
                        bVar2 = true;
                        bVar1 = false;
                    }
                    if (bVar1)
                        goto LAB_10085e412;
                }
            } while ((!bVar2) && (this_00 = this_00 + 5, this_00 != psVar4));
        }
    }

    // 0x10085e460
    void TextureAtlasManager::CreateRenderingResources() {
        __10* in_RSI;
        function<bool(shared_ptr<TextureAtlas>&)> local_58[56];
        long local_20;

        std::function<bool(shared_ptr<TextureAtlas>&)>::function<TextureAtlasManager::CreateRenderingResources()::__10,
                                                                 void>(local_58, in_RSI);
        IterateAtlases(local_58);
    }

    // 0x10085e650
    int TextureAtlasManager::GetMaximumGutterSize() {
        long lVar1 = GetSettings();
        auto puVar2 = std::max<unsigned int>(*((lVar1 + 152)), *((lVar1 + 156)));
        return *puVar2 * *(int*)(lVar1 + 144) * 2;
    }

    // 0x10085e690
    TextureAtlasManager* TextureAtlasManager::GetSharedAtlasRefFromMaterials(
        const graphicutils::TextureAtlasUsage* textureAtlasUsage,
        eastl::vector<Material const*, BucketAllocatorEASTL> const& materials) {
        TextureAtlasManager* in_RCX;

        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_60;
        local_60.reserve(32);
        auto plVar2 = in_RCX->HeapBeginPtr();
        auto plVar3 = in_RCX->end();
        if (plVar2 != plVar3) {
            do {
                if (*plVar2 == 0) {
                    LogAssert("mat",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlasManager.cpp",
                              107, nullptr);
                }
                in_RCX = &local_60;
                PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(&local_60, (Material*)*plVar2);
                plVar2 = plVar2 + 1;
            } while (plVar2 != plVar3);
        }
        SortMaterialInfoList(in_RCX, &local_60);
        *this = textureAtlasUsage->CreateSharedTextureAtlasRef(materials, local_60);
        return this;
    }

    // 0x10085ea80
    void
    TextureAtlasManager::SortMaterialInfoList(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) {
        MaterialInfo* materialInfo1;
        uint8_t auVar1[16];

        materialInfo1 = (MaterialInfo*)materialInfos.HeapBeginPtr();
        auVar1 = materialInfos.end();
        eastl::sort<MaterialInfo*,
                    (eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&)->SortMaterialInfoList()::__12>(
            materialInfo1, auVar1._0_8_, auVar1._8_8_);
    }

    // 0x10085eab0
    auto TextureAtlasManager::CreateSharedTextureAtlasRef(
        const graphicutils::TextureAtlasUsage* textureAtlasUsage,
        const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) {
        TextureAtlasReference local_60;

        if (materialInfos.empty() == '\0') {
            GetAtlasReference((ReturnValue*)&local_60, this, textureAtlasUsage, materialInfos);
            MakeSharedPool<TextureAtlasReference, 8192>::MakeShared<TextureAtlasReference>(&result);
        } else {
            auto result;
        }
        return result;
    }

    // 0x10085eb40
    auto
    TextureAtlasManager::GetDummySharedMaterialReference(const graphicutils::TextureAtlasUsage* textureAtlasUsage) {
        auto result;

        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_40;
        local_40.reserve(1);
        PopulateMaterialInfoFromMaterialID(local_40, -1);
        CreateSharedTextureAtlasRef(&result, this, textureAtlasUsage, &local_40);
        return result;
    }

    // 0x10085ed50
    TextureAtlasReference
    TextureAtlasManager::GetAtlasReference(const graphicutils::TextureAtlasUsage* textureAtlasUsage,
                                           const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) {
        bool bVar1;
        bool bVar2;
        TextureAtlasUsage* pTVar3;
        long lVar5;
        shared_ptr* this_00;
        TextureAtlas* pTVar6;
        TextureAtlasUsage* pTVar7;
        Logger* pLVar8;
        function<bool(shared_ptr<TextureAtlas>&)>* this_01;
        uint32_t uVar10;
        TextureAtlasUsage** ppTVar9;
        TextureAtlasReference local_128;
        TextureAtlasUsage** local_f8;
        vector<MaterialInfo, SafeBucketAllocatorEASTL>* pvStack_f0;
        ReturnValue* local_e8;
        TextureAtlasUsage** local_e0;
        vector<MaterialInfo, SafeBucketAllocatorEASTL>* pvStack_d8;
        ReturnValue* local_d0;
        TextureAtlasManager* local_c8;
        scoped_lock<std::recursive_mutex> local_c0;
        vector<MaterialInfo, SafeBucketAllocatorEASTL>* local_b0;
        TextureAtlasReference* local_a8;
        unsigned int local_9c;
        function<bool(shared_ptr<TextureAtlas>&)> local_98[48];
        function<bool(shared_ptr<TextureAtlas>&)> local_68[48];
        long local_38;

        TextureAtlasManager* arg1 = this;
        TextureAtlasUsage* local_b8 = textureAtlasUsage;
        TextureAtlasReference result;
        bool cVar4 = materialInfos.empty();
        if (!cVar4) {
            ppTVar9 = &local_b8;
            this_01 = local_68;
            local_f8 = ppTVar9;
            pvStack_f0 = materialInfos;
            local_e8 = &result;
            std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                TextureAtlasManager::GetAtlasReference(
                    graphicutils::TextureAtlasUsage const*,
                    eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::__13,
                void>(this_01, (__13*)arg1);
            IterateAtlases(this_01);
            lVar5 = result.GetTextureAtlas();
            if (lVar5 == 0) {
                local_e0 = ppTVar9;
                pvStack_d8 = materialInfos;
                local_d0 = &result;
                std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                    TextureAtlasManager::GetAtlasReference(
                        graphicutils::TextureAtlasUsage const*,
                        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::__14,
                    void>(local_98, (__14*)this_01);
                IterateAtlases(local_98);
                lVar5 = result.GetTextureAtlas();
                if (lVar5 == 0) {
                    local_9c = 0;
                    local_c8 = this;
                    local_b0 = materialInfos;
                    local_a8 = &result;
                    do {
                        this_00 = &field_200[(unsigned long)local_9c];
                        cVar4 = shared_ptr::operator_cast_to_bool(this_00);
                        if (!cVar4) {
                            local_c0 = std::scoped_lock(*((this_00 + 1)));
                            cVar4 = shared_ptr::operator_cast_to_bool(this_00);
                            pTVar3 = local_b8;
                            uVar10 = (uint32_t)((unsigned long)ppTVar9 >> 32);
                            if (!cVar4) {
                                make_shared<TextureAtlas, TextureManager&, unsigned int&, std::recursive_mutex&,
                                            graphicutils::TextureAtlasUsage const* const&>(
                                    (ReturnValue*)&local_128, local_c8->field_8, &local_9c,
                                    (recursive_mutex*)(this_00 + 1), &local_b8);
                                *this_00 = local_128;
                                pLVar8 = logger::default_logger();
                                ppTVar9 = (TextureAtlasUsage**)(((uint64_t)uVar10 << 32) | (uint32_t)local_9c);
                                pLVar8->Log(false, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/materials/textures/TextureAtlasManager.cpp",
                                            217, "Constructed new texture atlas. ID: %u", ppTVar9);
                                pTVar6 = (TextureAtlas*)(*this_00).operator->();
                                cVar4 = pTVar6->AddMaterials(*local_b0);
                                if (cVar4) {
                                    local_128 = TextureAtlasReference(*this_00, *local_b0);
                                    *local_a8 = local_128;
                                    goto LAB_10085f023;
                                }
                                bVar2 = false;
                                bVar1 = true;
                            } else {
                                pTVar6 = (TextureAtlas*)(*this_00).operator->();
                                pTVar7 = (TextureAtlasUsage*)pTVar6->GetAtlasUsageType();
                                bVar2 = false;
                                bVar1 = true;
                                if (pTVar3 == pTVar7) {
                                    pTVar6 = (TextureAtlas*)(*this_00).operator->();
                                    cVar4 = pTVar6->CheckContainsMaterials(*local_b0);
                                    if (!cVar4) {
                                        pTVar6 = (TextureAtlas*)(*this_00).operator->();
                                        cVar4 = pTVar6->AddMaterials(*local_b0);
                                        if (!cVar4)
                                            goto LAB_10085f034;
                                    }
                                    local_128 = TextureAtlasReference(*this_00, *local_b0);
                                    *local_a8 = local_128;
                                LAB_10085f023:
                                    bVar2 = true;
                                    bVar1 = false;
                                }
                            }
                        LAB_10085f034:
                            if (bVar1)
                                goto LAB_10085f045;
                        } else {
                        LAB_10085f045:
                            bVar2 = false;
                        }
                        &result = (ReturnValue*)local_a8;
                    } while ((!bVar2) && (local_9c = local_9c + 1, local_9c < 32));
                    lVar5 = local_a8->GetTextureAtlas();
                    if (lVar5 == 0) {
                        pLVar8 = logger::default_logger();
                        pLVar8->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureAtlasManager.cpp",
                                    239,
                                    "TextureAtlasManager: Couldn\'t fit requested material list in an empty atlas, "
                                    "textures most likely too large");
                    }
                }
            }
        }
        return (ReturnValue*)&result;
    }

    // 0x10085f370
    void TextureAtlasManager::GetVirtualAtlas(const graphicutils::TextureAtlasQuality& textureAtlasQuality,
                                              const graphicutils::TextureAtlasUsage* textureAtlasUsage, bool arg3) {
        unique_ptr* unique_ptr;
        ReturnValue local_38;

        m_virtualAtlases();
        unique_ptr = (unique_ptr*)(*((array<std::unique_ptr<TextureAtlas>, 2ul>*)(unsigned long)*(
            unsigned int*)(textureAtlasUsage + 8)))[(unsigned long)textureAtlasUsage];
        if (std::unique_ptr::operator_cast_to_bool(unique_ptr) == '\0') {
            local_38 = std::make_unique<TextureAtlas, graphicutils::TextureAtlasQuality const&,
                                        graphicutils::TextureAtlasUsage const* const&, bool&>(textureAtlasQuality,
                                                                                              textureAtlasUsage, arg3);
            *unique_ptr = local_38;
        }
        **unique_ptr;
    }

    // 0x10085f510
    void TextureAtlasManager::MainLogic() {
        if (field_2880 != false) {
            RebuildAtlases(true);
        }
    }

    // 0x10085f530
    void TextureAtlasManager::RebuildAtlases(bool arg1) {
        uint32_t in_register_00000031;

        bool bVar1 = (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0;
        if (!bVar1) {
            DestroyRenderingResources();
            CreateRenderingResources();
        }
        field_2880 = bVar1;
    }

    // 0x10085f560
    void TextureAtlasManager::MainDraw() {
        function<bool(shared_ptr<TextureAtlas>&)> local_288[56];
        long local_28;

        m_numLoadingTextures = 0;
        RemoveLoadedHighPriorityMaterials();
        fixed_vector<shared_ptr<TextureAtlas>, 32ul> local_250;
        std::function<bool(shared_ptr<TextureAtlas>&)>::function<TextureAtlasManager::MainDraw()::__15, void>(
            local_288, (__15*)this);
        IterateAtlases(local_288);
        if (m_peakLoadingTextures <= m_numLoadingTextures - 1) {
            m_peakLoadingTextures = m_numLoadingTextures;
        }
    }

    // 0x10085f640
    void TextureAtlasManager::RemoveLoadedHighPriorityMaterials() {
        Logger* this_01;
        float fVar2;
        float local_5c;
        function<bool(shared_ptr<TextureAtlas>&)> local_58[48];
        long local_28;

        scoped_lock<std::mutex> local_68(field_2816);
        uint8_t* this_00 = &field_2776;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            local_5c = field_2808;
            fVar2 = (float)FrameTime::GetSecondsSinceProgramStart();
            if (local_5c < fVar2 - 10.0) {
                this_01 = logger::default_logger();
                this_01->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                             "materials/textures/TextureAtlasManager.cpp",
                             330, "High priority material(s) registered but not loaded - removing");
                this_00->clear();
            }
        }
        cVar1 = this_00->empty();
        if (!cVar1) {
            std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::__17, void>(local_58, (__17*)this);
            IterateAtlases(local_58);
        }
    }

    // 0x10085f790
    void TextureAtlasManager::RegisterHighPriorityMaterials(const eastl::fixed_vector<int, 128ul>& arg1) {
        back_insert_iterator<eastl::vector<int> _>* back_insert_iterator;
        __16* in_RCX;

        scoped_lock<std::mutex> local_38(field_2816);
        uint8_t* this_00 = &field_2776;
        long lVar1 = this_00->size();
        long lVar2 = arg1.size();
        this_00->reserve(lVar1 + lVar2);
        auto arg1_00 = arg1.HeapBeginPtr();
        auto arg2 = arg1.end();
        back_insert_iterator = (back_insert_iterator<eastl::vector<int> _>*)this_00->end();
        eastl::copy_if<int const*, eastl::back_insert_iterator<eastl::vector<int>>,
                       (eastl::fixed_vector<int, 128ul> const&)->RegisterHighPriorityMaterials()::__16>(
            arg1_00, arg2, back_insert_iterator, in_RCX);
        field_2808 = (float)FrameTime::GetSecondsSinceProgramStart();
    }

    // 0x100873160
    void TextureAtlasManager::DestroyRenderingResources()::$_11::operator()(
        TextureAtlasReference& textureAtlasReference) const {
        ResetTexturesLoaded();
    }

} // namespace jag::graphics

// 0x10085f3f0
void jag::graphics::TextureAtlasManager::m_virtualAtlases(void) {
    ___tls_init();
    (*(void (*)(...))m_virtualAtlases)();
}
