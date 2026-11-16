// libs/graphics/runetek7/materials/textures/TextureAtlasManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextureAtlasManager.h"

namespace jag::graphics {
    // 0x100f43e80, 4 bytes, __data
    TextureAtlasManager::m_targetTextureMode = 1;

    // 0x100f4e2a8, 24 bytes, __thread_vars
    TextureAtlasManager::m_virtualAtlases = {0, 0, 0, 0, 1496, 0};

    // 0x100856fc0, 48 bytes, placed by class name and debug map
    // TextureAtlasManager::GetSettings()
    undefined1* TextureAtlasManager::GetSettings() {
        if (field_2881 == '\0') {
            (&field_16)->Initialise();
            field_2881 = '\x01';
        }
        return &field_16;
    }

    // 0x10085c150, 128 bytes, placed by class name
    // TextureAtlasManager::PopulateMaterialInfoFromMaterialID(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&, int)
    void TextureAtlasManager::PopulateMaterialInfoFromMaterialID(vector* param_1, int param_2) {
        Material* pMVar1;
        MaterialInfo local_58;
        undefined8 local_38;
        undefined4 local_30;
        undefined8 local_28;
        undefined4 local_20;

        if (param_2 == -1) {
            local_30 = 4294967295;
            local_38 = 18446744073709551615;
            local_20 = 0;
            local_28 = 0;
            new (&local_58) MaterialInfo(-1, (array*)&local_38, (array*)&local_28);
            eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::emplace_back<MaterialInfo>(
                (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)param_1, &local_58);
        } else {
            pMVar1 = (Material*)(field_0, param_2)->GetMaterial();
            PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>(param_1, pMVar1);
        }
    }

    // 0x10085cdf0, 112 bytes, placed by class name
    // TextureAtlasManager::GetMaxSimultaneousTextureUploadsPerAtlas() const
    undefined4 TextureAtlasManager::GetMaxSimultaneousTextureUploadsPerAtlas() {
        char cVar1;
        undefined4 uVar2;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_2816);
        uVar2 = 128;
        if (m_peakLoadingTextures <= m_numLoadingTexturesHeavyThreshold) {
            cVar1 = (&field_2776)->empty();
            uVar2 = 128;
            if (cVar1 != '\0') {
                uVar2 = 4;
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar2;
    }

    // 0x10085e1f0, 80 bytes, placed by class name
    // TextureAtlasManager::Initialise(MaterialManager*, TextureManager*)
    void TextureAtlasManager::Initialise(MaterialManager* param_1, TextureManager* param_2) {
        if ((param_1 == (MaterialManager*)0) || (param_2 == (TextureManager*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("materialManager && textureManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasManager.cpp",
                      19, (char*)0);
        }
        field_0 = param_1;
        field_8 = param_2;
    }

    // 0x10085e240, 128 bytes, placed by class name
    // TextureAtlasManager::Destroy()
    void TextureAtlasManager::Destroy() {
        function<bool(shared_ptr<TextureAtlas>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        DestroyRenderingResources(this);
        std::function<bool(shared_ptr<TextureAtlas>&)>::function<TextureAtlasManager::Destroy()::__9, void>(local_58);
        IterateAtlases(this, local_58);
        std::function<bool(shared_ptr<TextureAtlas>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10085e2c0, 192 bytes, placed by class name
    // TextureAtlasManager::DestroyRenderingResources()
    void TextureAtlasManager::DestroyRenderingResources() {
        bool bVar1;
        shared_ptr* this_00;
        shared_ptr* psVar2;
        TextureAtlas* this_01;
        function<void(TextureAtlasReference&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (shared_ptr*)(&field_200)->begin();
        psVar2 = (shared_ptr*)(&field_200)->end();
        for (; this_00 != psVar2; this_00 = this_00 + 5) {
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                this_01 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)this_00);
                this_01->DestroyRenderingResources();
            }
        }
        std::function<void(TextureAtlasReference&)>::function<TextureAtlasManager::DestroyRenderingResources()::__11,
                                                              void>(local_58);
        MakeSharedPool<TextureAtlasReference, 8192>::IteratePool(local_58);
        std::function<void(TextureAtlasReference&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10085e380, 208 bytes, placed by class name
    // TextureAtlasManager::IterateAtlases(std::function<bool (shared_ptr<TextureAtlas>&)>)
    /* TextureAtlasManager::IterateAtlases(std::function<bool
   (shared_ptr<TextureAtlas>&)>) */

    void TextureAtlasManager::IterateAtlases(function<bool(shared_ptr<TextureAtlas>&)>* param_2) {
        bool bVar1;
        bool bVar2;
        char cVar3;
        shared_ptr* psVar4;
        shared_ptr* this_00;
        scoped_lock<std::recursive_mutex> local_40[8];
        function<bool(shared_ptr<TextureAtlas>&)>* local_38;

        local_38 = param_2;
        this_00 = (shared_ptr*)(&field_200)->begin();
        psVar4 = (shared_ptr*)(&field_200)->end();
        if (this_00 != psVar4) {
            do {
                bVar2 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar2) {
                    std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)(this_00 + 1));
                    bVar2 = shared_ptr::operator_cast_to_bool(this_00);
                    if (bVar2) {
                        cVar3 = std::function<bool(shared_ptr<TextureAtlas>&)>::operator()(local_38, this_00);
                        if (cVar3 != '\0')
                            goto LAB_10085e3f4;
                        bVar1 = true;
                        bVar2 = false;
                    } else {
                    LAB_10085e3f4:
                        bVar1 = false;
                        bVar2 = true;
                    }
                    std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                    if (bVar2)
                        goto LAB_10085e412;
                } else {
                LAB_10085e412:
                    bVar1 = false;
                }
            } while ((!bVar1) && (this_00 = this_00 + 5, this_00 != psVar4));
        }
    }

    // 0x10085e460, 112 bytes, placed by class name
    // TextureAtlasManager::CreateRenderingResources()
    void TextureAtlasManager::CreateRenderingResources() {
        function<bool(shared_ptr<TextureAtlas>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<bool(shared_ptr<TextureAtlas>&)>::function<TextureAtlasManager::CreateRenderingResources()::__10,
                                                                 void>(local_58);
        IterateAtlases(this, local_58);
        std::function<bool(shared_ptr<TextureAtlas>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10085e650, 64 bytes, placed by class name
    // TextureAtlasManager::GetMaximumGutterSize()
    int TextureAtlasManager::GetMaximumGutterSize() {
        long lVar1;
        uint* puVar2;

        lVar1 = GetSettings(this);
        puVar2 = std::max<unsigned int>((uint*)(lVar1 + 152), (uint*)(lVar1 + 156));
        return *puVar2 * *(int*)(lVar1 + 144) * 2;
    }

    // 0x10085e690, 256 bytes, placed by class name
    // TextureAtlasManager::GetSharedAtlasRefFromMaterials(graphicutils::TextureAtlasUsage const*, eastl::vector<Material const*, BucketAllocatorEASTL> const&)
    TextureAtlasManager* TextureAtlasManager::GetSharedAtlasRefFromMaterials(TextureAtlasUsage* param_1,
                                                                             vector* param_2) {
        long* plVar2;
        long* plVar3;
        TextureAtlasManager* in_RCX;
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_60[24];

        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::reserve(local_60, 32);
        plVar2 = (long*)in_RCX->HeapBeginPtr();
        plVar3 = (long*)in_RCX->end();
        if (plVar2 != plVar3) {
            do {
                if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mat",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlasManager.cpp",
                              107, (char*)0);
                }
                in_RCX = (TextureAtlasManager*)local_60;
                PopulateMaterialInfoFromMaterial<SafeBucketAllocatorEASTL>((vector*)local_60, (Material*)*plVar2);
                plVar2 = plVar2 + 1;
            } while (plVar2 != plVar3);
        }
        SortMaterialInfoList(in_RCX, (vector*)local_60);
        CreateSharedTextureAtlasRef((TextureAtlasManager*)this, param_1, param_2);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::~vector(local_60);
        return (TextureAtlasManager*)this;
    }

    // 0x10085ea80, 48 bytes, placed by class name
    // TextureAtlasManager::SortMaterialInfoList(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&)
    void TextureAtlasManager::SortMaterialInfoList(vector* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = param_1->HeapBeginPtr();
        uVar2 = param_1->end();
        eastl::sort<MaterialInfo*,
                    (eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>&)->SortMaterialInfoList()::__12>(uVar1,
                                                                                                            uVar2);
    }

    // 0x10085eab0, 144 bytes, placed by class name
    // TextureAtlasManager::CreateSharedTextureAtlasRef(graphicutils::TextureAtlasUsage const*, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)
    TextureAtlasManager* TextureAtlasManager::CreateSharedTextureAtlasRef(TextureAtlasUsage* param_1, vector* param_2) {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* in_RCX;
        TextureAtlasReference* extraout_RDX;
        TextureAtlasReference local_60;

        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                in_RCX) == '\0') {
            GetAtlasReference((TextureAtlasManager*)&local_60, param_1, param_2);
            MakeSharedPool<TextureAtlasReference, 8192>::MakeShared<TextureAtlasReference>(
                (shared_ptr*)this, (MakeSharedPool<TextureAtlasReference, 8192>*)&local_60, extraout_RDX);
            local_60.~TextureAtlasReference();
        } else {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x10085eb40, 144 bytes, placed by class name
    // TextureAtlasManager::GetDummySharedMaterialReference(graphicutils::TextureAtlasUsage const*)
    TextureAtlasManager* TextureAtlasManager::GetDummySharedMaterialReference(TextureAtlasUsage* param_1) {
        vector* in_RDX;
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_40[24];

        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::reserve(local_40, 1);
        PopulateMaterialInfoFromMaterialID((TextureAtlasManager*)param_1, (vector*)local_40, -1);
        CreateSharedTextureAtlasRef(this, param_1, in_RDX);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::~vector(local_40);
        return this;
    }

    // 0x10085ed50, 1040 bytes, placed by class name
    // TextureAtlasManager::GetAtlasReference(graphicutils::TextureAtlasUsage const*, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)
    TextureAtlasManager* TextureAtlasManager::GetAtlasReference(TextureAtlasUsage* param_1, vector* param_2) {
        bool bVar1;
        vector* pvVar2;
        char cVar3;
        bool bVar4;
        long lVar5;
        shared_ptr* this_00;
        TextureAtlas* pTVar6;
        vector* pvVar7;
        undefined8 uVar8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* in_RCX;
        TextureAtlasReference local_128;
        vector** local_f8;
        TextureAtlasManager* local_e8;
        vector** local_e0;
        TextureAtlasManager* local_d0;
        TextureAtlasUsage* local_c8;
        scoped_lock<std::recursive_mutex> local_c0[8];
        vector* local_b8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_b0;
        TextureAtlasManager* local_a8;
        uint local_9c;
        function<bool(shared_ptr<TextureAtlas>&)> local_98[48];
        function<bool(shared_ptr<TextureAtlas>&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b8 = param_2;
        new (this) TextureAtlasReference();
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            in_RCX);
        if (cVar3 == '\0') {
            local_f8 = &local_b8;
            local_e8 = this;
            std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                TextureAtlasManager::GetAtlasReference(
                    graphicutils::TextureAtlasUsage_const*,
                    eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::__13,
                void>(local_68);
            IterateAtlases((TextureAtlasManager*)param_1, local_68);
            std::function<bool(shared_ptr<TextureAtlas>&)>::~function(local_68);
            lVar5 = GetTextureAtlas();
            if (lVar5 == 0) {
                local_e0 = &local_b8;
                local_d0 = this;
                std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                    TextureAtlasManager::GetAtlasReference(
                        graphicutils::TextureAtlasUsage_const*,
                        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)::__14,
                    void>(local_98);
                IterateAtlases((TextureAtlasManager*)param_1, local_98);
                std::function<bool(shared_ptr<TextureAtlas>&)>::~function(local_98);
                lVar5 = GetTextureAtlas();
                if (lVar5 == 0) {
                    local_9c = 0;
                    local_c8 = param_1;
                    local_b0 = in_RCX;
                    local_a8 = this;
                    do {
                        this_00 = (shared_ptr*)std::array<GuardedTextureAtlas, 32ul>::operator[](
                            (array<GuardedTextureAtlas, 32ul>*)(param_1 + 200), (ulong)local_9c);
                        bVar4 = shared_ptr::operator_cast_to_bool(this_00);
                        if (bVar4) {
                        LAB_10085f045:
                            bVar1 = false;
                        } else {
                            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_c0,
                                                                                (recursive_mutex*)(this_00 + 1));
                            bVar4 = shared_ptr::operator_cast_to_bool(this_00);
                            pvVar2 = local_b8;
                            if (bVar4) {
                                pTVar6 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->(
                                    (shared_ptr<TextureAtlas>*)this_00);
                                pvVar7 = (vector*)pTVar6->GetAtlasUsageType();
                                bVar1 = false;
                                bVar4 = true;
                                if (pvVar2 == pvVar7) {
                                    pTVar6 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->(
                                        (shared_ptr<TextureAtlas>*)this_00);
                                    cVar3 = pTVar6->CheckContainsMaterials(local_b0);
                                    if (cVar3 == '\0') {
                                        pTVar6 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->(
                                            (shared_ptr<TextureAtlas>*)this_00);
                                        cVar3 = pTVar6->AddMaterials(local_b0);
                                        if (cVar3 == '\0')
                                            goto LAB_10085f034;
                                    }
                                    new (&local_128) TextureAtlasReference(this_00, local_b0);
                                    TextureAtlasReference::operator=((TextureAtlasReference*)local_a8, &local_128);
                                LAB_10085f023:
                                    local_128.~TextureAtlasReference();
                                    bVar1 = true;
                                    bVar4 = false;
                                }
                            } else {
                                make_shared<TextureAtlas, TextureManager&, unsigned int&, std::recursive_mutex&,
                                            graphicutils::TextureAtlasUsage_const* const&>(
                                    (jag*)&local_128, *(TextureManager**)(local_c8 + 8), &local_9c,
                                    (recursive_mutex*)(this_00 + 1), (TextureAtlasUsage**)&local_b8);
                                shared_ptr<TextureAtlas>::operator=((shared_ptr<TextureAtlas>*)this_00,
                                                                    (shared_ptr*)&local_128);
                                local_128.~shared_ptr();
                                uVar8 = logger::default_logger();
                                logger::Logger::Log(uVar8, 0, 8,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/graphics/runetek7/materials/textures/TextureAtlasManager.cpp",
                                                    217, "Constructed new texture atlas. ID: %u", local_9c);
                                pTVar6 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->(
                                    (shared_ptr<TextureAtlas>*)this_00);
                                cVar3 = pTVar6->AddMaterials(local_b0);
                                if (cVar3 != '\0') {
                                    new (&local_128) TextureAtlasReference(this_00, local_b0);
                                    TextureAtlasReference::operator=((TextureAtlasReference*)local_a8, &local_128);
                                    goto LAB_10085f023;
                                }
                                bVar1 = false;
                                bVar4 = true;
                            }
                        LAB_10085f034:
                            std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_c0);
                            if (bVar4)
                                goto LAB_10085f045;
                        }
                        this = local_a8;
                    } while ((!bVar1) && (local_9c = local_9c + 1, local_9c < 32));
                    lVar5 = local_a8->GetTextureAtlas();
                    if (lVar5 == 0) {
                        uVar8 = logger::default_logger();
                        logger::Logger::Log(uVar8, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/materials/textures/TextureAtlasManager.cpp",
                                            239,
                                            "TextureAtlasManager: Couldn\'t fit requested material list in an empty "
                                            "atlas, textures most likely too large");
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x10085f370, 128 bytes, placed by class name
    // TextureAtlasManager::GetVirtualAtlas(graphicutils::TextureAtlasQuality const&, graphicutils::TextureAtlasUsage const*, bool)
    void TextureAtlasManager::GetVirtualAtlas(TextureAtlasQuality* param_1, TextureAtlasUsage* param_2, bool param_3) {
        unique_ptr* this;
        TextureAtlasQuality local_38[8];
        TextureAtlasUsage* local_30;
        undefined1 local_21;

        local_30 = param_2;
        local_21 = param_3;
        m_virtualAtlases();
        this =
            (unique_ptr*)std::array<std::unique_ptr<TextureAtlas, std::default_delete<TextureAtlas>>, 2ul>::operator[](
                (ulong) * (uint*)(local_30 + 8));
        if (!std::unique_ptr::operator_cast_to_bool(this)) {
            std::make_unique<TextureAtlas, graphicutils::TextureAtlasQuality_const&,
                             graphicutils::TextureAtlasUsage_const* const&, bool&>(
                local_38, (TextureAtlasUsage**)param_1, (bool*)&local_30);
            std::unique_ptr<TextureAtlas, std::default_delete<TextureAtlas>>::operator=(
                (unique_ptr<TextureAtlas, std::default_delete<TextureAtlas>>*)this, (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
        std::unique_ptr<TextureAtlas, std::default_delete<TextureAtlas>>::operator*(
            (unique_ptr<TextureAtlas, std::default_delete<TextureAtlas>>*)this);
    }

    // 0x10085f510, 32 bytes, placed by class name
    // TextureAtlasManager::MainLogic()
    void TextureAtlasManager::MainLogic() {
        if (field_2880 != false) {
            RebuildAtlases(this, true);
        }
    }

    // 0x10085f530, 48 bytes, placed by class name
    // TextureAtlasManager::RebuildAtlases(bool)
    void TextureAtlasManager::RebuildAtlases(bool param_1) {
        undefined3 in_register_00000031;
        bool bVar1;

        bVar1 = CONCAT31(in_register_00000031, param_1) == 0;
        if (!bVar1) {
            DestroyRenderingResources(this);
            CreateRenderingResources(this);
        }
        field_2880 = bVar1;
    }

    // 0x10085f560, 224 bytes, placed by class name
    // TextureAtlasManager::MainDraw()
    void TextureAtlasManager::MainDraw() {
        function<bool(shared_ptr<TextureAtlas>&)> local_288[56];
        fixed_vector<shared_ptr<TextureAtlas>, 32ul, true, eastl::allocator> local_250[552];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        m_numLoadingTextures = 0;
        RemoveLoadedHighPriorityMaterials(this);
        eastl::fixed_vector<shared_ptr<TextureAtlas>, 32ul, true, eastl::allocator>::fixed_vector(local_250);
        std::function<bool(shared_ptr<TextureAtlas>&)>::function<TextureAtlasManager::MainDraw()::__15, void>(
            local_288, this, local_250);
        IterateAtlases(this, local_288);
        std::function<bool(shared_ptr<TextureAtlas>&)>::~function(local_288);
        if (m_peakLoadingTextures <= m_numLoadingTextures - 1) {
            m_peakLoadingTextures = m_numLoadingTextures;
        }
        eastl::fixed_vector<shared_ptr<TextureAtlas>, 32ul, true, eastl::allocator>::~fixed_vector(local_250);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10085f640, 288 bytes, placed by class name
    // TextureAtlasManager::RemoveLoadedHighPriorityMaterials()
    void TextureAtlasManager::RemoveLoadedHighPriorityMaterials() {
        char cVar1;
        undefined8 uVar2;
        float fVar3;
        scoped_lock<std::mutex> local_68[12];
        float local_5c;
        function<bool(shared_ptr<TextureAtlas>&)> local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_68, (mutex*)&field_2816);
        cVar1 = (&field_2776)->empty();
        if (cVar1 == '\0') {
            local_5c = field_2808;
            fVar3 = (float)FrameTime::GetSecondsSinceProgramStart();
            if (local_5c < fVar3 + -10.0) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureAtlasManager.cpp",
                                    330, "High priority material(s) registered but not loaded - removing");
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
        }
        cVar1 = (&field_2776)->empty();
        std::scoped_lock<std::mutex>::~scoped_lock(local_68);
        if (cVar1 == '\0') {
            std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                TextureAtlasManager::RemoveLoadedHighPriorityMaterials()::__17, void>(local_58, this);
            IterateAtlases(this, local_58);
            std::function<bool(shared_ptr<TextureAtlas>&)>::~function(local_58);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10085f790, 192 bytes, placed by class name
    // TextureAtlasManager::RegisterHighPriorityMaterials(eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&)
    void TextureAtlasManager::RegisterHighPriorityMaterials(fixed_vector* param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_2816);
        lVar1 = (&field_2776)->size();
        lVar2 = param_1->size();
        (&field_2776, lVar1 + lVar2)->reserve();
        uVar3 = param_1->HeapBeginPtr();
        uVar4 = param_1->end();
        uVar5 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        eastl::copy_if<int const*, eastl::back_insert_iterator<eastl::vector<int, eastl::allocator>>,
                       (eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&)
                           ->RegisterHighPriorityMaterials()::__16>(uVar3, uVar4, uVar5);
        field_2808 = (float)FrameTime::GetSecondsSinceProgramStart();
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x100873160, 16 bytes, placed by class name
    // TextureAtlasManager::DestroyRenderingResources()::$_11::operator()(TextureAtlasReference&) const
    /* TextureAtlasManager::DestroyRenderingResources()::$_11::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasReference&)
   const */

    void TextureAtlasManager::DestroyRenderingResources()::$_11::operator()(TextureAtlasReference* param_1) {
        ResetTexturesLoaded();
    }

} // namespace jag::graphics

// 0x10085f3f0, 32 bytes, placed by neighbouring functions
// TLS wrapper function for jag::graphics::TextureAtlasManager::m_virtualAtlases
void jag::graphics::TextureAtlasManager::m_virtualAtlases() {
    ___tls_init();
    (*(code*)m_virtualAtlases)();
}
