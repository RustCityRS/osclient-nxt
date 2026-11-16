// libs/graphics/runetek7/materials/textures/TextureAtlas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextureAtlas.h"

namespace jag::graphics {
    // 0x100f43e20
    int32_t TextureAtlas::m_clearDataMutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43e60
    int64_t TextureAtlas::m_textureDataTypes = 16974336;

    // 0x100f43e68
    int32_t TextureAtlas::m_dummyTextureIDs[3] = {-1, -2, -3};

    // 0x100f43e74
    int32_t TextureAtlas::m_loadingTextureIDs[3] = {-4, -2, -3};

    // 0x103bbd560, set at startup by ___cxx_global_var_init.117
    eastl::fixed_vector<unsigned char, 16ul> TextureAtlas::m_initialisationData[30] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [5] */
        ?,
        /* [6] */
        ?,
        /* [7] */
        ?,
        /* [8] */
        ?,
        /* [9] */
        ?,
        /* [10] */
        ?,
        /* [11] */
        ?,
        /* [12] */
        ?,
        /* [13] */
        ?,
        /* [14] */
        ?,
        /* [15] */
        ?,
        /* [16] */
        ?,
        /* [17] */
        ?,
        /* [20] */
        ?,
        /* [21] */
        ?,
        /* [25] */
        ?,
        /* [26] */
        ?,
        /* [27] */
        ?,
        /* [28] */
        ?,
        /* [29] */
        ?, };

    // 0x103bbdbf0, set at startup by ___cxx_global_var_init.119
    std::array<std::array<Array<unsigned char>, 5ul>, 6ul> TextureAtlas::m_clearData =
        array<std::array<Array<unsigned char>, 5ul>, 6ul>();

    // 0x100066b70: TextureAtlas::GetID() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x100324d40: TextureAtlas::GetFormatTypeRequest() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x100856720
    TextureAtlas::TextureAtlas(const graphicutils::TextureAtlasQuality& textureAtlasQuality,
                               const graphicutils::TextureAtlasUsage* textureAtlasUsage, bool arg3)
        : field_8(nullptr), m_iD(-1) {
        hash<int> local_80;
        equal_to<int> local_78;
        hash<int> local_70;
        equal_to<int> local_68;
        hash<int> local_60;
        equal_to<int> local_58;
        hash<int> local_50;
        equal_to<int> local_48;
        hash<int> local_40;
        equal_to<int> local_38;

        new (field_24) graphicutils::TextureAtlasSlotPacker(textureAtlasQuality, textureAtlasUsage, arg3);
        new (m_formatTypeRequest) callstack::Callstack();
        new ((m_formatTypeRequest + 8))
            eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false>(local_80, local_78);
        new (&field_33104) eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true,
                                                 eastl::hash<int>, eastl::equal_to<int>, false>(local_70, local_68);
        new (&field_66024) eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true,
                                                 eastl::hash<int>, eastl::equal_to<int>, false>(local_60, local_58);
        new (&field_115344) eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true,
                                                  eastl::hash<int>, eastl::equal_to<int>, false>(local_50, local_48);
        field_164664 = 0;
        new (m_texture) render::Texture2D("TextureAtlas");
        new (m_settingsTexture) render::Texture2D("MaterialSettings");
        new (&field_165696) eastl::fixed_vector<unsigned int, 256ul>();
        new (&field_166760) eastl::fixed_vector<unsigned int, 256ul>();
        new (&field_167824) eastl::fixed_hash_map<int, TextureAtlasMaterialSettings, 256ul, 257ul, true,
                                                  eastl::hash<int>, eastl::equal_to<int>, false>(local_40, local_38);
        field_187792 = 0;
        field_187800 = std::make_unique<std::recursive_mutex>();
        field_187808 = (recursive_mutex*)*field_187800;
        new (&field_187816) eastl::fixed_list<std::future<void>, 128ul>();
        CommonConstructor();
    }

    // 0x100856a30
    void TextureAtlas::CommonConstructor() {
        TextureAtlasSlotPacker* this_00;
        unsigned int arg3;
        unsigned int* arg1;
        uint8_t local_a0[32];
        uint8_t local_70[24];
        ReturnValue local_58;

        InitialiseFormatTypeRequests();
        uint8_t* puVar5 = field_24;
        int iVar2 = puVar5->GetGutteringSlotCount();
        TextureAtlasSlotPacker* local_80 = (TextureAtlasSlotPacker*)puVar5;
        auto piVar3 = puVar5->SSOBeginPtr();
        unsigned int local_38 = *piVar3 << 2;
        int local_3c = iVar2 * 2 + 4;
        uint64_t uStack_b0 = 18446744060824649725;
        local_a0._24_8_ = m_formatTypeRequest + 8;
        unsigned int arg1_00 = 0;
        unsigned long arg1_01 = 0;
        TextureAtlas* local_78 = this;
        do {
            new (local_70) ImGuiTableColumnSortSpecs();
            arg3 = local_38;
            local_70->Initialise(arg1_00, 0, local_38, false, true);
            local_70[11] = 2;
            arg1 = &18446744069414584319 [arg1_01];
            *local_a0 = local_a0._24_8_->emplace<int&, TextureAtlasTextureMapping&>(*arg1, *local_70);
            this_00 = local_80;
            local_a0->AllocSlot2D((unsigned int)local_80);
            this_00->AddAtlasSlotData(false, *arg1, arg3, *local_a0);
            arg1_01 = arg1_01 + 1;
            arg1_00 = arg1_00 + local_3c;
        } while (arg1_01 != 4);
        new (local_a0) TextureAtlasMaterialMapping();
        local_a0->Initialise(m_dummyTextureIDs, 0);
        TextureAtlas* pTVar1 = local_78;
        local_a0._20_2_ = 512;
        puVar5 = &local_78->field_66024;
        local_58[0]._0_4_ = 4294967295;
        *local_70 = puVar5->emplace<int, TextureAtlasMaterialMapping&>(*((local_70 + 24)), *local_a0);
        new (local_70) TextureAtlasMaterialMapping();
        local_70->Initialise(m_loadingTextureIDs, 1);
        local_70._20_2_ = 512;
        int local_34 = -2;
        *((local_70 + 24)) = puVar5->emplace<int, TextureAtlasMaterialMapping&>(local_34, *local_70);
        local_a0->Initialise(m_dummyTextureIDs, 2);
        local_a0._20_2_ = 512;
        local_34 = -3;
        *((local_70 + 24)) = puVar5->emplace<int, TextureAtlasMaterialMapping&>(local_34, *local_a0);
        local_70->Initialise(m_loadingTextureIDs, 3);
        local_70._20_2_ = 512;
        local_34 = -4;
        *((local_70 + 24)) = puVar5->emplace<int, TextureAtlasMaterialMapping&>(local_34, *local_70);
        puVar5 = &pTVar1->field_186448;
        local_58[0]._0_4_ = local_58[0]._0_4_ & 4294967040;
        puVar5->fill(*((local_70 + 24)));
        uint8_t* puVar4 = (uint8_t*)(*puVar5)[0];
        *puVar4 = 1;
        puVar4 = (uint8_t*)(*puVar5)[1];
        *puVar4 = 1;
        puVar4 = (uint8_t*)(*puVar5)[2];
        *puVar4 = 1;
        puVar5 = (uint8_t*)(*puVar5)[3];
        *puVar5 = 1;
        piVar3 = &pTVar1->field_187792;
        *piVar3 = *piVar3 + 4;
    }

    // 0x100856cf0
    TextureAtlas::TextureAtlas(TextureManager& textureManager, int arg2, std::recursive_mutex& recursive_mutex,
                               const graphicutils::TextureAtlasUsage* textureAtlasUsage)
        : field_8(textureManager), m_iD(arg2) {
        hash<int> local_90;
        equal_to<int> local_88;
        hash<int> local_80;
        equal_to<int> local_78;
        hash<int> local_70;
        equal_to<int> local_68;
        hash<int> local_60;
        equal_to<int> local_58;
        hash<int> local_50;
        equal_to<int> local_48;
        AutoSingleton<ShaderThreadPoolSingleton> local_40;

        long lVar1 = ((TextureAtlasManager*)textureManager.GetTextureAtlasManager())->GetSettings();
        new (field_24) graphicutils::TextureAtlasSlotPacker(*((lVar1 + 144)), textureAtlasUsage, false);
        new (m_formatTypeRequest) callstack::Callstack();
        new ((m_formatTypeRequest + 8))
            eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false>(local_90, local_88);
        new (&field_33104) eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true,
                                                 eastl::hash<int>, eastl::equal_to<int>, false>(local_80, local_78);
        new (&field_66024) eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true,
                                                 eastl::hash<int>, eastl::equal_to<int>, false>(local_70, local_68);
        new (&field_115344) eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true,
                                                  eastl::hash<int>, eastl::equal_to<int>, false>(local_60, local_58);
        field_164664 = 0;
        new (m_texture) render::Texture2D("TextureAtlas");
        new (m_settingsTexture) render::Texture2D("MaterialSettings");
        new (&field_165696) eastl::fixed_vector<unsigned int, 256ul>();
        new (&field_166760) eastl::fixed_vector<unsigned int, 256ul>();
        new (&field_167824) eastl::fixed_hash_map<int, TextureAtlasMaterialSettings, 256ul, 257ul, true,
                                                  eastl::hash<int>, eastl::equal_to<int>, false>(local_50, local_48);
        field_187792 = 0;
        field_187800.unique_ptr<true, void>();
        field_187808 = recursive_mutex;
        new (&field_187816) eastl::fixed_list<std::future<void>, 128ul>();
        ScopedGPUMemoryZone local_38("TextureAtlas");
        CommonConstructor();
        CreateRenderingResources();
    }

    // 0x100857000
    void TextureAtlas::CreateRenderingResources() {
        array<int, 3ul>* this_00;
        int iVar1;
        bool cVar2;
        int* piVar4;
        Logger* pLVar5;
        int* piVar6;
        long lVar7;
        TextureAtlas* pTVar8;
        ReturnValue local_98;
        ReturnValue local_88;
        uint32_t* local_58;
        int local_34;

        scoped_lock<std::recursive_mutex> local_48(*field_187808);
        InitialiseFormatTypeRequests();
        auto pTVar3 = GetWorld();
        CreateAtlasTextures((Texture2D*)this, (Texture2D*)m_texture, (TextureFormatBitSet)((int)this + 165184),
                            *pTVar3);
        UpdateMaterials();
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_02 =
            (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                       eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
        TextureAtlas* local_40 = this;
        auto local_78 = this_02->begin();
        auto local_68 = this_02->end();
        while (cVar2 = local_78 != local_68, pTVar8 = local_40, cVar2) {
            piVar4 = (int*)local_78.HeapBeginPtr();
            iVar1 = *piVar4;
            if ((-1 < iVar1) && (*(uint8_t*)((long)piVar4 + 15) = 0, piVar4[1] < 1)) {
                pLVar5 = logger::default_logger();
                pLVar5->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/textures/TextureAtlas.cpp",
                            1599, "TextureAtlas load-queuing unreferenced texture ID %d (ref count: %d)", iVar1,
                            piVar4[1]);
            }
            ++local_78;
        }
        local_40->field_164664 = 1;
        uint8_t* this_01 = &local_40->field_66024;
        local_78 = this_01->begin();
        fixed_hash_map<int, TextureAtlasMaterialMapping, _1024ul, _1025ul, true, eastl::hash<int>, eastl::equal_to<int>,
                       false>* local_50 = (fixed_hash_map<int, TextureAtlasMaterialMapping, _1024ul, _1025ul, true,
                                                          eastl::hash<int>, eastl::equal_to<int>, false>*)this_01;
        local_68 = this_01->end();
        while (true) {
            cVar2 = local_78 != local_68;
            if (!cVar2)
                break;
            local_58 = (uint32_t*)local_78.HeapBeginPtr();
            this_00 = (array<int, 3ul>*)(local_58 + 1);
            piVar4 = this_00->begin();
            piVar6 = this_00->end();
            for (; piVar4 != piVar6; piVar4 = piVar4 + 1) {
                local_34 = *piVar4;
                if (-1 < local_34) {
                    local_98 = this_02->find(local_34);
                    local_88 = this_02->end();
                    cVar2 = local_98 == local_88;
                    if ((cVar2) || (lVar7 = (*this_02)[local_34], *(char*)(lVar7 + 11) != '\0')) {
                        pLVar5 = logger::default_logger();
                        pLVar5->Log(false, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureAtlas.cpp",
                                    1617, "TextureAtlas material ID %d has not load-queued texture ID %d as expected",
                                    *local_58, local_34);
                    }
                }
            }
            ++local_78;
            pTVar8 = local_40;
        }
        cVar2 = this_thread::IsMainThread();
        if (cVar2) {
            pTVar8->field_33104 = *this_02;
            pTVar8->field_115344 = *local_50;
        }
    }

    // 0x1008572b0
    TextureAtlas::~TextureAtlas() {
        DestroyRenderingResources();
        field_187816.~fixed_list();
        field_187800.~unique_ptr();
        field_167824.~fixed_hash_map();
        field_166760.~fixed_vector();
        field_165696.~fixed_vector();
        m_settingsTexture->~Texture2D();
        m_texture->~Texture2D();
        field_115344.~fixed_hash_map();
        field_66024.~fixed_hash_map();
        field_33104.~fixed_hash_map();
        ((m_formatTypeRequest + 8))->~fixed_hash_map();
        field_24->~TextureAtlasSlotPacker();
    }

    // 0x100857400
    void TextureAtlas::DestroyRenderingResources() {
        uint8_t* this_00;
        type* extraout_RDX;
        type* arg2;
        type* extraout_RDX_00;
        duration<long long, std::ratio<1l, 1000000000l>> local_30;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            if (m_iD != -1) {
                LogAssert("m_id == ATLAS_ID_VIRTUAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          1651, nullptr);
            }
        } else {
            this_00 = &field_187816;
            cVar1 = this_00->empty();
            if (!cVar1) {
                arg2 = extraout_RDX;
                do {
                    local_30.duration<int>(500, arg2);
                    std::this_thread::sleep_for(&local_30);
                    local_30 = std::scoped_lock(*field_187808);
                    eastl::list<std::future<void>, eastl::fixed_node_allocator<24ul, 128ul, 8ul, 0ul, true>>::remove_if<
                        TextureAtlas::DestroyRenderingResources()::__2>((__2*)this_00);
                    cVar1 = this_00->empty();
                    arg2 = extraout_RDX_00;
                } while (!cVar1);
            }
            local_30 = std::scoped_lock(*field_187808);
            m_texture->Destroy();
            m_settingsTexture->Destroy();
        }
    }

    // 0x100857540
    void TextureAtlas::CreateAtlasTextures(render::Texture2D& texture2D1, render::Texture2D& texture2D2,
                                           render::TextureFormatBitSet textureFormatBitSet,
                                           TextureAtlasInitialisationMode textureAtlasInitialisationMode) {
        unsigned int arg4;
        uint32_t uVar2;
        unsigned char* arg4_00;
        uint32_t in_register_00000014;
        Texture2D* pTVar3;
        unsigned int local_58;
        unsigned int local_54;
        Callstack local_50;
        eastl local_40;
        TextureFormatBitSet local_38;

        Texture2D* texture2D =
            (Texture2D*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)textureFormatBitSet.m_bits);
        local_38[0].m_bits = textureAtlasInitialisationMode;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_40);
        char cVar1 = local_38.IsValid();
        if (!cVar1) {
            uVar2 = 0;
        } else {
            arg4 = texture2D1.field_24.GetTextureResolution();
            cVar1 = local_38.IsUncompressed();
            if ((!cVar1) && ((arg4 & 3) != 0)) {
                LogAssert("textureResolution % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          199,
                          "TextureAtlas: Cannot construct block compression atlas, atlas dimensions not divisible by 4 "
                          "(%d x %d)",
                          (unsigned long)arg4, (unsigned long)arg4);
            }
            local_50 = callstack::Callstack();
            local_50.AddFormatType(5);
            ((unique_ptr<unsigned char[]>*)&local_50.field_8)->unique_ptr<true, void>();
            GetMippedPixelCount((TextureAtlas*)texture2D1, &local_58, &local_54, local_38[0], arg4);
            arg4_00 = (unsigned char*)((unique_ptr<unsigned char[]>*)&local_50.field_8)->get();
            pTVar3 = texture2D2;
            graphicutils::CreateHALTexture2D<render::Texture2D>(texture2D2, arg4, arg4, arg4_00, local_58, 0,
                                                                1 < local_58, true, false, local_38[0], local_54);
            cVar1 = pTVar3->Instance();
            (texture2D2._vptr->SetSamplerState)((SamplerState*)texture2D2, (bool)(cVar1 - 48));
            GenerateDummyTextureData((TextureAtlas*)texture2D1, texture2D2);
            pTVar3 = texture2D;
            graphicutils::CreateHALTexture2D<render::Texture2D>(texture2D, 128, 128, nullptr, 1, 0, false, false, false,
                                                                (TextureFormatBitSet)local_50.m_stackFrames, 0);
            cVar1 = pTVar3->Instance();
            texture2D->SetSamplerState((bool)(cVar1 + 'P'));
            GenerateDummyMaterialSettings((TextureAtlas*)texture2D1);
            uVar2 = texture2D2.IsCreated();
            ((unique_ptr<unsigned char[]>*)&local_50.field_8)->~unique_ptr();
        }
        return uVar2;
    }

    // 0x1008577b0
    int TextureAtlas::GetMippedPixelCount(unsigned int& arg1, unsigned int& arg2,
                                          render::TextureFormatBitSet textureFormatBitSet, unsigned int arg4) {
        uint64_t in_RAX;
        TextureAtlasQuality* pTVar5;
        TextureFormatBitSet local_38;

        _local_38 = (((uint64_t)((int)((unsigned long)in_RAX >> 32)) << 32) | (uint32_t)textureFormatBitSet.m_bits);
        arg1 = 0;
        uint8_t bVar1 = local_38.IsUncompressed();
        unsigned int uVar3 = (unsigned int)(bVar1 ^ 1) * 3 + 1;
        int iVar7 = 0;
        if (uVar3 <= arg4) {
            iVar7 = 0;
            do {
                if ((arg4 & (unsigned int)(bVar1 ^ 1) * 3) != 0)
                    break;
                arg1 = arg1 + 1;
                iVar7 = iVar7 + arg4 * arg4;
                arg4 = arg4 >> 1;
            } while (uVar3 <= arg4);
        }
        if (((TextureFormatBitSet*)(Singleton<render::RenderDevice>*)&local_38)->IsCompressed() != '\0') {
            arg1 = arg1 + 2;
            iVar7 = iVar7 + 32;
        }
        long lVar4 = ((MapArea*)local_38.Instance())->GetOrigin();
        if ((*(char*)(lVar4 + 175) == '\0') && ((*(char*)(lVar4 + 174) == '\0' || (*(char*)(lVar4 + 177) != '\0')))) {
            if (*(char*)(lVar4 + 177) == '\0') {
                uVar3 = 1;
            } else {
                pTVar5 = (TextureAtlasQuality*)field_24->SSOBeginPtr();
                uVar3 = pTVar5->GetMaxMipLevels(local_38);
            }
        } else {
            pTVar5 = (TextureAtlasQuality*)field_24->SSOBeginPtr();
            uVar3 = pTVar5->GetMaxGradMipLevels(local_38);
        }
        arg2 = uVar3;
        if (1 < uVar3) {
            lVar4 = field_24->SSOBeginPtr();
            if (uVar3 <= *(unsigned int*)(lVar4 + 32)) {
                LogAssert("sampleMipCountOut > m_slotPacker.GetAtlasQuality().m_topLevelMip",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          913, nullptr);
            }
            lVar4 = field_24->SSOBeginPtr();
            arg2 = arg2 - *(int*)(lVar4 + 32);
        }
        auto puVar6 = std::min<unsigned int>(arg2, arg1);
        arg2 = *puVar6;
        return iVar7;
    }

    // 0x100857910
    void TextureAtlas::GenerateDummyTextureData(render::Texture2D& texture2D) {
        uint8_t bVar1;
        TextureAtlasInitialisationMode* pTVar5;
        uint8_t* pbVar6;
        array<TextureAtlasInitialisationMode, 5ul>* this_00;
        unsigned int arg5;
        TextureAtlasInitialisationMode local_38;
        int local_34;

        int iVar3 = field_24->GetGutteringSlotCount();
        uint32_t local_3c = 5;
        Texture2D* arg2 = (Texture2D*)&local_3c;
        auto puVar4 = std::min<unsigned int>(4, *arg2);
        unsigned int uVar2 = *puVar4;
        if ((array<TextureAtlasInitialisationMode, 5ul>*)(unsigned long)uVar2 != nullptr) {
            iVar3 = iVar3 * 2 + 4;
            arg5 = 0;
            this_00 = nullptr;
            local_34 = iVar3;
            do {
                pTVar5 = (TextureAtlasInitialisationMode*)GetWorld();
                local_38 = *pTVar5;
                pbVar6 = (uint8_t*)(*this_00)[(unsigned long)arg2];
                bVar1 = *pbVar6;
                field_24->SSOBeginPtr();
                arg2 = texture2D;
                ClearSubSection((Texture2D*)this, (TextureFormatBitSet)(unsigned int)texture2D, local_38,
                                (unsigned int)bVar1, arg5, 0);
                this_00 = this_00 + 1;
                arg5 = arg5 + iVar3;
            } while ((array<TextureAtlasInitialisationMode, 5ul>*)(unsigned long)uVar2 != this_00);
        }
    }

    // 0x1008579e0
    void TextureAtlas::GenerateDummyMaterialSettings() {
        array<unsigned char, _3ul> local_3e0;
        array<unsigned short, _3ul> local_3d0;
        array<unsigned short, _3ul> local_3c8;
        array<unsigned short, _3ul> local_3c0;

        unsigned int uVar1 = field_24->GetGutteringSlotCount();
        Material local_118;
        local_118.InitialiseDummy(false);
        TextureAtlasMaterialSettings local_4c0;
        local_4c0.Initialise(local_118);
        unsigned int local_3d4 = uVar1 & 255;
        GetTextureSlotData((array<unsigned int, _3ul>*)this, &local_3e0, &local_3d0, &local_3c8,
                           (unsigned char)&local_3c0, local_3d4);
        local_4c0.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(0, local_4c0);
        Material local_1f8;
        local_1f8.InitialiseLoading(false);
        TextureAtlasMaterialSettings local_450;
        local_450.Initialise(local_1f8);
        uVar1 = local_3d4;
        GetTextureSlotData((array<unsigned int, _3ul>*)this, &local_3e0, &local_3d0, &local_3c8,
                           (unsigned char)&local_3c0, local_3d4);
        local_450.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(1, local_450);
        Material local_2d8;
        local_2d8.InitialiseDummy(true);
        TextureAtlasMaterialSettings local_418;
        local_418.Initialise(local_2d8);
        GetTextureSlotData((array<unsigned int, _3ul>*)this, &local_3e0, &local_3d0, &local_3c8,
                           (unsigned char)&local_3c0, uVar1);
        local_418.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(2, local_418);
        Material local_3b8;
        local_3b8.InitialiseLoading(true);
        TextureAtlasMaterialSettings local_488;
        local_488.Initialise(local_3b8);
        GetTextureSlotData((array<unsigned int, _3ul>*)this, &local_3e0, &local_3d0, &local_3c8,
                           (unsigned char)&local_3c0, uVar1);
        local_488.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(3, local_488);
    }

    // 0x100857c90
    void TextureAtlas::GenerateAtlasBackingData(std::unique_ptr<unsigned char[]>& arg1, unsigned int& arg2,
                                                unsigned int arg3, render::TextureFormatBitSet textureFormatBitSet,
                                                TextureAtlasInitialisationMode textureAtlasInitialisationMode) {
        int iVar3;
        array<eastl::fixed_vector<unsigned char, 16ul>, 5ul>* this_00;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* this_01;
        unsigned long uVar4;
        long lVar5;
        void* pvVar6;
        unsigned long uVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        unsigned int local_48;
        unsigned int local_44;
        TextureFormatBitSet local_38;

        local_38[0].m_bits = textureFormatBitSet.m_bits;
        if (m_iD == -1) {
            LogAssert("m_id != ATLAS_ID_VIRTUAL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      242, nullptr);
        }
        int iVar2 = GetMippedPixelCount(local_48, local_44, textureFormatBitSet, arg3);
        array<std::array<eastl::fixed_vector<unsigned char, 16ul>, 5ul>, 6ul>* this_02 = nullptr;
        do {
            if (local_38.HasFormatType((unsigned int)this_02)) {
                iVar3 = local_38.GetBitsPerPixel();
                if ((iVar3 * iVar2 & 7U) != 0) {
                    LogAssert("bitCount % 8 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              254, nullptr);
                }
                uVar8 = (unsigned int)(iVar3 * iVar2) >> 3;
                arg2 = uVar8;
                local_50 = std::make_unique<unsigned char[]>((unsigned long)uVar8);
                (*((unique_ptr<unsigned char[]>*)arg1)) =
                    (*((unique_ptr<unsigned_char_[], std::default_delete<unsigned_char_[]> _>*)&local_50));
                ((unique_ptr<unsigned char[]>*)&local_50)->~unique_ptr();
                this_00 = (array<eastl::fixed_vector<unsigned char, 16ul>, 5ul>*)(*this_02)[(unsigned long)&local_50];
                this_01 = (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>*)(*this_00)[(
                    unsigned long)(textureAtlasInitialisationMode & 255)];
                uVar4 = this_01->size();
                if (uVar4 == 0) {
                    LogAssert("initDataSize > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              261, "Texture initialisation data not implemented for this format combination.");
                }
                if ((arg2 < uVar4) || ((unsigned long)*arg2 % uVar4 != 0)) {
                    LogAssert("initDataSize <= outByteLength && outByteLength % initDataSize == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              262, "Texture initialisation data does not fit.");
                }
                if (arg2 != 0) {
                    uVar7 = 0;
                    do {
                        lVar5 = ((unique_ptr<unsigned char[]>*)arg1)->get();
                        pvVar6 = (void*)(*this_01)[0];
                        _memcpy((void*)(lVar5 + uVar7), pvVar6, uVar4);
                        uVar7 = uVar7 + uVar4;
                    } while (uVar7 < arg2);
                }
                break;
            }
            this_02 = this_02 + 1;
        } while ((int)this_02 != 6);
        if (!(arg1.operator_cast_to_bool())) {
            arg2 = 0;
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/textures/TextureAtlas.cpp",
                            278, nullptr);
        }
    }

    // 0x100858030
    void TextureAtlas::InitialiseFormatTypeRequests() {
        MapArea* pMVar3;
        long lVar4;
        unsigned int arg1;

        uint8_t* this_01 = m_formatTypeRequest;
        new (this_01) callstack::Callstack();
        uint8_t* this_00 = field_24;
        auto puVar2 = this_00->GetAuthWrapper();
        if (puVar2 != graphicutils::TextureAtlasUsage::USAGE_COMPRESSED) {
            puVar2 = (uint8_t*)this_00->GetAuthWrapper();
            if (puVar2 != graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED) {
                LogAssert("m_slotPacker.GetAtlasUsage() == graphicutils::TextureAtlasUsage::USAGE_COMPRESSED || "
                          "m_slotPacker.GetAtlasUsage() == graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          287, nullptr);
            }
        }
        puVar2 = (uint8_t*)this_00->GetAuthWrapper();
        if (puVar2 != graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED) {
            if (GetUseCompressedTextures() != '\0') {
                pMVar3 = (MapArea*)Instance();
                lVar4 = pMVar3->GetOrigin();
                if (*(char*)(lVar4 + 161) == '\0') {
                    pMVar3 = (MapArea*)pMVar3->Instance();
                    lVar4 = pMVar3->GetOrigin();
                    if (*(char*)(lVar4 + 162) == '\0') {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/textures/TextureAtlas.cpp",
                                        307, nullptr);
                    }
                    arg1 = 2;
                } else {
                    arg1 = 1;
                }
                goto LAB_1008580de;
            }
        }
        arg1 = 5;
    LAB_1008580de:
        Singleton<render::RenderDevice>* this_03 = (Singleton<render::RenderDevice>*)this_01;
        this_01->AddFormatType(arg1);
        if (m_iD != -1) {
            pMVar3 = (MapArea*)this_03->Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 147) != '\0') {
                this_01->AddFormatType(7);
            }
        }
    }

    // 0x100858160
    void TextureAtlas::GetUseCompressedTextures() const {
        if (field_8 == nullptr) {
            field_24->IsReadyAnim();
            return;
        }
        field_8->UseCompressedTextures();
    }

    // 0x100858390
    void TextureAtlas::ClearSubSection(render::Texture2D& texture2D, render::TextureFormatBitSet textureFormatBitSet,
                                       TextureAtlasInitialisationMode textureAtlasInitialisationMode, unsigned int arg4,
                                       unsigned int arg5, unsigned int arg6) {
        uint8_t uVar1;
        TextureAtlas* textureAtlas;
        bool cVar2;
        uint32_t in_register_00000034;
        unsigned int in_stack_00000008;
        unsigned int local_74;
        unsigned int local_54;
        TextureFormatBitSet local_38;

        Texture2D* local_70 =
            (Texture2D*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)textureFormatBitSet.m_bits);
        local_38[0].m_bits = textureAtlasInitialisationMode;
        if (texture2D.field_16 == -1) {
            LogAssert("m_id != ATLAS_ID_VIRTUAL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      800, nullptr);
        }
        int iVar3 = GetMippedPixelCount((TextureAtlas*)texture2D, &local_54, &local_74,
                                        (TextureFormatBitSet)textureAtlasInitialisationMode, in_stack_00000008);
        array<std::array<Array<unsigned char>, 5ul>, 6ul>* this_04 = nullptr;
        while (cVar2 = local_38.HasFormatType((unsigned int)this_04), !cVar2) {
            this_04 = this_04 + 1;
            if ((int)this_04 == 6) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureAtlas.cpp",
                                863, nullptr);
            }
        }
        int iVar4 = local_38.GetBitsPerPixel();
        if ((iVar4 * iVar3 & 7U) != 0) {
            LogAssert("bitCount % 8 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      827, nullptr);
        }
        unsigned long uVar6 = (unsigned long)((unsigned int)(iVar4 * iVar3) >> 3);
        uint8_t* puVar9 = &m_clearDataMutex;
        scoped_lock<std::mutex> local_60(m_clearDataMutex);
        array<Array<unsigned char>, 5ul>* this_00 =
            (array<Array<unsigned char>, 5ul>*)(*this_04)[(unsigned long)puVar9];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00)[(unsigned long)(arg4 & 255)];
        unsigned long uVar5 = this_01->end();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48 = this_01;
        unsigned long local_40 = uVar6;
        this_01->set_min_size(uVar6, 7);
        array<eastl::fixed_vector<unsigned char, 16ul>, 5ul>* this_02 =
            (array<eastl::fixed_vector<unsigned char, 16ul>, 5ul>*)(*this_04)[uVar6];
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* this_03 =
            (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>*)(*this_02)[(
                unsigned long)(arg4 & 255)];
        uVar6 = this_03->size();
        if (uVar6 == 0) {
            LogAssert("initDataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      840, "Texture initialisation data not implemented for textureAtlas format combination.");
        }
        if ((local_40 < uVar6) || (local_40 % uVar6 != 0)) {
            LogAssert("initDataSize <= byteLength && byteLength % initDataSize == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      841, "Texture initialisation data does not fit.");
        }
        unsigned long uVar7 = local_48->end();
        if (uVar7 < local_40) {
            LogAssert("clearData.max_size() >= byteLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      842, nullptr);
        }
        if (uVar5 % uVar6 != 0) {
            LogAssert("prevSize % initDataSize == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      843, nullptr);
        }
        for (; textureAtlas = (TextureAtlas*)texture2D, uVar5 < local_40; uVar5 = uVar5 + uVar6) {
            if (uVar6 != 0) {
                uVar7 = 0;
                do {
                    puVar9 = (uint8_t*)(*this_03)[uVar7];
                    uVar1 = *puVar9;
                    puVar9 = (uint8_t*)(*local_48)[uVar5 + uVar7];
                    *puVar9 = uVar1;
                    uVar7 = uVar7 + 1;
                } while (uVar6 != uVar7);
            }
        }
        puVar9 = ((TextureAtlas*)texture2D)->field_24;
        auto piVar8 = puVar9->SSOBeginPtr();
        unsigned int arg3 = arg5 * *piVar8;
        piVar8 = (int*)puVar9->SSOBeginPtr();
        unsigned int arg4_00 = arg6 * *piVar8;
        bool arg2 = (bool)local_38.IsCompressed();
        auto arg7 = local_48->data();
        SetTextureMipData(textureAtlas, local_70, arg2, arg3, arg4_00, in_stack_00000008, in_stack_00000008, arg7,
                          (unsigned int)local_40, local_54);
    }

    // 0x1008586a0
    void TextureAtlas::GetTextureSlotData(std::array<unsigned int, 3ul>& arg1, std::array<unsigned char, 3ul>& arg2,
                                          std::array<unsigned short, 3ul>& arg3, std::array<unsigned short, 3ul>& arg4,
                                          unsigned char arg5, int arg6) {
        unsigned int uVar1;
        short sVar3;
        unsigned int uVar4;
        unsigned int* puVar5;
        short* psVar6;
        short sVar7;
        uint64_t in_register_00000081;
        int in_stack_00000008;

        GetTextureSlotIDs((TextureAtlas*)arg1, (array<unsigned int, _3ul>*)arg2, in_stack_00000008);
        GetTextureSlotSizes((TextureAtlas*)arg1, (array<unsigned char, _3ul>*)arg3, in_stack_00000008);
        unsigned long arg1_00 = 0;
        do {
            puVar5 = &arg2[arg1_00];
            uVar1 = *puVar5;
            uVar4 = ((arg1 + 24))->GetAliveCount();
            sVar7 = (short)(uVar1 / uVar4) + (short)arg6;
            psVar6 = (short*)(*(
                (array<unsigned short, 3ul>*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5)))[arg1_00];
            *psVar6 = sVar7;
            uVar1 = *puVar5;
            sVar3 = ((arg1 + 24))->GetAliveCount();
            psVar6 = &arg4[arg1_00];
            *psVar6 = sVar3 * ((short)arg6 - sVar7) + (short)uVar1 + (short)arg6;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 3);
    }

    // 0x100858770
    unsigned long TextureAtlas::GetTextureSlotIDs(std::array<unsigned int, 3ul>& arg1, int arg2) const {
        unsigned short uVar1;
        unsigned short uVar2;
        int iVar4;
        uint32_t* puVar5;
        long lVar6;
        int* piVar7;
        hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                  eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_01;
        unsigned long uVar8;
        uint8_t auVar9[16];
        uint8_t local_88[16];
        eastl local_78;
        ImPool<ImGuiTabBar>* local_68;
        obj_iterator local_50;
        int local_38;

        scoped_lock<std::recursive_mutex> local_58(*field_187808);
        &local_78 = (eastl[16])field_66024.find(arg2);
        local_50._0_16_ = field_66024.end();
        char local_31 = local_78 == local_50;
        if (local_31 == '\0') {
            this_01 =
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
            local_68 = (ImPool<ImGuiTabBar>*)field_24;
            uVar8 = 0;
            do {
                lVar6 = local_78.HeapBeginPtr();
                piVar7 = (int*)(*((lVar6 + 4)))[uVar8];
                local_38 = *piVar7;
                if (local_38 == -1) {
                    piVar7 = &m_dummyTextureIDs[uVar8];
                    local_38 = *piVar7;
                }
                auVar9 = this_01->find(local_38);
                local_50._0_16_ = auVar9;
                auVar9 = this_01->end();
                local_88 = auVar9;
                if (local_50 != *local_88 == '\0') {
                    LogAssert("mapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              532, nullptr);
                }
                lVar6 = local_50.HeapBeginPtr();
                uVar1 = *(unsigned short*)(lVar6 + 10);
                iVar4 = local_68->GetAliveCount();
                lVar6 = local_50.HeapBeginPtr();
                uVar2 = *(unsigned short*)(lVar6 + 8);
                piVar7 = &arg1[uVar8];
                *piVar7 = (unsigned int)uVar2 + iVar4 * (unsigned int)uVar1;
                uVar8 = uVar8 + 1;
            } while (uVar8 != 3);
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      514, "TextureAtlas: Warning - requested lookup of material %d was not found in atlas!", arg2);
            this_01 = nullptr;
            do {
                puVar5 = &arg1[(unsigned long)this_01];
                *puVar5 = 0;
                this_01 = this_01 + 1;
            } while (this_01 !=
                     (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                                eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true>,
                                eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)3);
        }
        uVar8 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)local_31);
        return (uVar8 ^ 1) & 4294967295;
    }

    // 0x100858970
    void TextureAtlas::GetTextureSlotSizes(std::array<unsigned char, 3ul>& arg1, int arg2) const {
        unsigned short uVar1;
        unsigned short uVar2;
        uint8_t* puVar3;
        unsigned short* puVar4;
        array<unsigned short, _3ul> local_38;

        GetTexturePixelSizes(local_38, arg2);
        unsigned long arg1_00 = 0;
        do {
            puVar4 = (unsigned short*)field_24->SSOBeginPtr();
            uVar1 = *puVar4;
            puVar4 = &local_38[arg1_00];
            uVar2 = *puVar4;
            *puVar4 = (unsigned short)((unsigned int)uVar2 / (unsigned int)uVar1);
            if (255 < (unsigned int)uVar2 / (unsigned int)uVar1) {
                LogAssert("sizes[i] <= std::numeric_limits<uint8>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          579, nullptr);
            }
            uVar1 = *puVar4;
            puVar3 = &arg1[arg1_00];
            *puVar3 = (char)uVar1;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 3);
    }

    // 0x100859360
    void
    TextureAtlas::SetMaterialSettingsTextureData(unsigned int arg1,
                                                 const TextureAtlasMaterialSettings& textureAtlasMaterialSettings) {
        if (textureAtlasMaterialSettings.IsValid() == '\0') {
            LogAssert("materialSettings.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1057, nullptr);
        }
        auto arg7 = textureAtlasMaterialSettings.GetData();
        m_settingsTexture->Update(0, (arg1 % 42) * 3, arg1 / 42 << 2, 3, 4, 7, arg7);
    }

    // 0x1008594b0
    unsigned long TextureAtlas::GetTexturePixelSizes(std::array<unsigned short, 3ul>& arg1, int arg2) const {
        uint16_t uVar1;
        uint16_t* puVar3;
        long lVar4;
        int* piVar5;
        hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                  eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_01;
        unsigned long uVar6;
        uint8_t auVar7[16];
        uint8_t local_78[16];
        eastl local_68;
        obj_iterator local_50;
        int local_38;

        scoped_lock<std::recursive_mutex> local_58(*field_187808);
        &local_68 = (eastl[16])field_66024.find(arg2);
        local_50._0_16_ = field_66024.end();
        char local_31 = local_68 == local_50;
        if (local_31 == '\0') {
            this_01 =
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
            uVar6 = 0;
            do {
                lVar4 = local_68.HeapBeginPtr();
                piVar5 = (int*)(*((lVar4 + 4)))[uVar6];
                local_38 = *piVar5;
                if (local_38 == -1) {
                    piVar5 = &m_dummyTextureIDs[uVar6];
                    local_38 = *piVar5;
                }
                auVar7 = this_01->find(local_38);
                local_50._0_16_ = auVar7;
                auVar7 = this_01->end();
                local_78 = auVar7;
                if (local_50 != *local_78 == '\0') {
                    LogAssert("mapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              564, nullptr);
                }
                lVar4 = local_50.HeapBeginPtr();
                uVar1 = *(uint16_t*)(lVar4 + 12);
                puVar3 = &arg1[uVar6];
                *puVar3 = uVar1;
                uVar6 = uVar6 + 1;
            } while (uVar6 != 3);
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      546, "TextureAtlas: Warning - requested lookup of material %d was not found in atlas!", arg2);
            this_01 = nullptr;
            do {
                puVar3 = &arg1[(unsigned long)this_01];
                *puVar3 = 0;
                this_01 = this_01 + 1;
            } while (this_01 !=
                     (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                                eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true>,
                                eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)3);
        }
        uVar6 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)local_31);
        return (uVar6 ^ 1) & 4294967295;
    }

    // 0x100859680
    unsigned int TextureAtlas::GetMaterialSettingsSlotXY(unsigned short& arg1, unsigned int arg2) const {
        Logger* this_00;
        long lVar2;
        unsigned short uVar3;
        eastl local_50;
        uint8_t local_40[16];

        scoped_lock<std::recursive_mutex> local_30(*field_187808);
        local_40._0_4_ = arg2;
        &local_50 = (eastl[16])field_66024.find(*local_40);
        local_40 = field_66024.end();
        unsigned int uVar1 = local_50 == *local_40;
        if ((char)uVar1 == '\0') {
            lVar2 = local_50.HeapBeginPtr();
            uVar3 = (unsigned short)(*(unsigned int*)(lVar2 + 16) / 42 << 8) |
                    (unsigned short)(*(unsigned int*)(lVar2 + 16) % 42);
        } else {
            this_00 = logger::default_logger();
            uVar3 = 0;
            this_00->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "materials/textures/TextureAtlas.cpp",
                         591, "TextureAtlas: Warning - requested lookup of material %u was not found in atlas!", arg2);
        }
        arg1 = uVar3;
        return uVar1 ^ 1;
    }

    // 0x100859780
    void TextureAtlas::AddReference(const MaterialInfo& materialInfo) {
        long lVar2;
        int* piVar3;
        unsigned long arg1;
        ReturnValue local_70;
        ReturnValue local_60;
        ReturnValue local_50;
        scoped_lock<std::recursive_mutex> local_40;
        int local_34;

        int local_38 = materialInfo.field_0;
        if (-1 < local_38) {
            local_40 = std::scoped_lock(*field_187808);
            local_50 = field_66024.find(local_38);
            local_60 = field_66024.end();
            if (!(local_50 != local_60)) {
                LogAssert("materialMapping != m_materialMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          613, nullptr);
            }
            lVar2 = local_50.HeapBeginPtr();
            *(int*)(lVar2 + 20) = *(int*)(lVar2 + 20) + 1;
            arg1 = 0;
            do {
                lVar2 = local_50.HeapBeginPtr();
                piVar3 = (int*)(*((lVar2 + 4)))[arg1];
                local_34 = *piVar3;
                if (-1 < local_34) {
                    local_60 = ((m_formatTypeRequest + 8))->find(local_34);
                    local_70 = ((m_formatTypeRequest + 8))->end();
                    if (!(local_60 != local_70)) {
                        LogAssert("mapping != m_textureMap.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  622, nullptr);
                    }
                    lVar2 = local_60.HeapBeginPtr();
                    if (-1 < *(int*)(lVar2 + 4)) {
                        lVar2 = local_60.HeapBeginPtr();
                        *(int*)(lVar2 + 4) = *(int*)(lVar2 + 4) + 1;
                    }
                }
                arg1 = arg1 + 1;
            } while (arg1 != 3);
        }
    }

    // 0x100859900
    void TextureAtlas::AddReferences(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) {
        MaterialInfo* materialInfo;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        scoped_lock<std::recursive_mutex> local_30(*field_187808);
        if (materialInfos.size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                materialInfo = &materialInfos[arg1];
                AddReference(*materialInfo);
                arg1 = (unsigned long)uVar3;
                uVar2 = materialInfos.size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
    }

    // 0x100859a10
    void TextureAtlas::RemoveReference(int arg1) {
        long lVar2;
        int* piVar3;
        unsigned long arg1_00;
        ReturnValue local_78;
        fixed_vector<unsigned int, 256ul>* local_68;
        scoped_lock<std::recursive_mutex> local_60;
        ReturnValue local_58;
        uint8_t local_48[16];
        int local_34;

        if (-1 < arg1) {
            local_60 = std::scoped_lock(*field_187808);
            local_58 = field_66024.find(arg1);
            local_48 = field_66024.end();
            if (local_58 != *local_48) {
                lVar2 = local_58.HeapBeginPtr();
                if (*(int*)(lVar2 + 20) == 0) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              654, "TextureAtlas: Attempting to remove unreferenced material from atlas");
                } else {
                    lVar2 = local_58.HeapBeginPtr();
                    *(int*)(lVar2 + 20) = *(int*)(lVar2 + 20) - 1;
                    lVar2 = local_58.HeapBeginPtr();
                    if (*(int*)(lVar2 + 20) < -1) {
                        LogAssert("materialMapping->second.m_refCount >= -1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  658, "Material reference count is less than -1");
                    }
                    lVar2 = local_58.HeapBeginPtr();
                    if (*(int*)(lVar2 + 20) < 1) {
                        local_48._0_4_ = arg1;
                        field_165696.push_back(*local_48);
                    }
                    local_68 = (fixed_vector<unsigned int, 256ul>*)&field_166760;
                    arg1_00 = 0;
                    do {
                        lVar2 = local_58.HeapBeginPtr();
                        piVar3 = (int*)(*((lVar2 + 4)))[arg1_00];
                        local_34 = *piVar3;
                        if (-1 < local_34) {
                            *local_48 = ((m_formatTypeRequest + 8))->find(local_34);
                            local_78 = ((m_formatTypeRequest + 8))->end();
                            if (*local_48 != local_78) {
                                lVar2 = local_48->HeapBeginPtr();
                                if (-1 < *(int*)(lVar2 + 4)) {
                                    lVar2 = local_48->HeapBeginPtr();
                                    *(int*)(lVar2 + 4) = *(int*)(lVar2 + 4) - 1;
                                    lVar2 = local_48->HeapBeginPtr();
                                    if (*(int*)(lVar2 + 4) < 1) {
                                        local_78[0]._0_4_ = local_34;
                                        local_68->push_back(local_78);
                                    }
                                }
                            }
                        }
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 != 3);
                }
            }
        }
    }

    // 0x100859c50
    void TextureAtlas::RemoveReferences(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) {
        int* piVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        scoped_lock<std::recursive_mutex> local_30(*field_187808);
        if (materialInfos.size() != 0) {
            uVar4 = 1;
            arg1 = 0;
            do {
                piVar2 = &materialInfos[arg1];
                RemoveReference(*piVar2);
                arg1 = (unsigned long)uVar4;
                uVar3 = materialInfos.size();
                uVar4 = uVar4 + 1;
            } while (arg1 < uVar3);
        }
    }

    // 0x100859cf0
    unsigned long TextureAtlas::CheckContainsMaterials(
        const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) const {
        bool cVar1;
        int* piVar3;
        unsigned long uVar4;
        unsigned int uVar5;
        unsigned long arg1;
        uint64_t unaff_R12;

        bool bVar6 = materialInfos.size() != 0;
        if (bVar6) {
            piVar3 = &materialInfos[0];
            cVar1 = CheckContainsMaterial(*piVar3);
            if (cVar1) {
                uVar5 = 1;
                do {
                    arg1 = (unsigned long)uVar5;
                    uVar4 = materialInfos.size();
                    bVar6 = arg1 < uVar4;
                    if (uVar4 <= arg1)
                        break;
                    piVar3 = &materialInfos[arg1];
                    cVar1 = CheckContainsMaterial(*piVar3);
                    uVar5 = uVar5 + 1;
                } while (cVar1);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar6) ^ 1) & 4294967295;
    }

    // 0x100859d70
    unsigned long TextureAtlas::CheckContainsMaterial(int arg1) const {
        long lVar2;
        uint64_t uVar4;
        unsigned long uVar3;
        obj_iterator local_40;
        eastl local_30;

        scoped_lock<std::recursive_mutex> local_20(*field_187808);
        uint8_t* this_00 = &field_66024;
        &local_30 = (eastl[16])this_00->find(arg1);
        &local_40 = (obj_iterator[16])this_00->end();
        if (local_30 != local_40 == '\0') {
            uVar3 = 0;
        } else {
            uVar4 = (uint64_t)((unsigned long)this_00 >> 8);
            if (arg1 < 0) {
                uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
            } else {
                lVar2 = local_30.HeapBeginPtr();
                uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(0 < *(int*)(lVar2 + 20)));
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100859e10
    unsigned long TextureAtlas::CheckMaterialsLoaded(
        const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) const {
        uint64_t unaff_R12;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      721, nullptr);
        }
        auto piVar2 = materialInfos.HeapBeginPtr();
        auto piVar3 = materialInfos.end();
        unsigned long uVar4 =
            (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)(piVar2 == piVar3));
        if (piVar2 != piVar3) {
            cVar1 = CheckMaterialLoaded(*piVar2);
            while (cVar1) {
                piVar2 = piVar2 + 7;
                uVar4 = (((uint64_t)((int64_t)(uVar4 >> 8)) << 8) | (uint8_t)(piVar2 == piVar3));
                if (piVar2 == piVar3)
                    break;
                cVar1 = CheckMaterialLoaded(*piVar2);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100859eb0
    unsigned long TextureAtlas::CheckMaterialLoaded(int arg1) const {
        long lVar2;
        int* piVar3;
        unsigned long uVar4;
        uint64_t unaff_R12;
        bool bVar5;
        uint8_t auVar6[16];
        uint8_t local_68[16];
        eastl local_58;
        obj_iterator local_48;
        int local_34;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      735, nullptr);
        }
        &local_58 = (eastl[16])field_115344.find(arg1);
        &local_48 = (obj_iterator[16])field_115344.end();
        cVar1 = local_58 == local_48;
        if (!cVar1) {
            lVar2 = local_58.HeapBeginPtr();
            if (*(char*)(lVar2 + 25) == '\x02') {
                bVar5 = true;
                uVar4 = 0;
                do {
                    lVar2 = local_58.HeapBeginPtr();
                    piVar3 = (int*)(*((lVar2 + 4)))[uVar4];
                    local_34 = *piVar3;
                    if (-1 < local_34) {
                        auVar6 = field_33104.find(local_34);
                        &local_48 = (obj_iterator[16])auVar6;
                        auVar6 = field_33104.end();
                        local_68 = auVar6;
                        cVar1 = local_48 == *local_68;
                        if (cVar1)
                            break;
                        lVar2 = local_48.HeapBeginPtr();
                        if (*(char*)(lVar2 + 15) != '\x02')
                            break;
                    }
                    bVar5 = uVar4 < 2;
                    uVar4 = uVar4 + 1;
                } while (uVar4 != 3);
                uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar5) ^ 1;
                goto LAB_100859fdd;
            }
        }
        uVar4 = 0;
    LAB_100859fdd:
        return uVar4 & 4294967041;
    }

    // 0x10085a000
    unsigned int
    TextureAtlas::AddMaterials(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) {
        hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                  eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_00;
        unsigned int* puVar3;
        long lVar4;
        TextureAtlasSlot2DGroup* textureAtlasSlot2DGroup;
        unsigned int uVar5;
        unsigned long arg1;
        ReturnValue local_2f0;
        ReturnValue local_2e0;
        hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                  eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_2c8;
        unsigned int local_2a8;
        uint8_t local_2a1;

        TextureAtlas* local_2b0 = this;
        scoped_lock<std::recursive_mutex> local_2c0(*field_187808);
        unsigned long local_2b8 = materialInfos.size();
        fixed_vector<TextureAtlasSlot2DGroup, 32ul> local_2a0;
        local_2e0.WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(materialInfos);
        unsigned int uVar2 = GetTextureSlots(local_2b0, &local_2a0, &local_2e0);
        if (((uint8_t)uVar2 != 0) && (local_2b8 != 0)) {
            local_2c8 =
                (hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                           eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                           eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                           eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)&local_2b0->field_66024;
            uVar5 = 1;
            arg1 = 0;
            local_2a1 = (uint8_t)uVar2;
            do {
                this_00 = local_2c8;
                puVar3 = &materialInfos[arg1];
                local_2a8 = *puVar3;
                local_2e0 = this_00->find(local_2a8);
                local_2f0 = this_00->end();
                if (local_2e0 != local_2f0 == '\0') {
                    LogAssert("mapping != m_materialMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              775, nullptr);
                }
                lVar4 = local_2e0.HeapBeginPtr();
                uVar2 = local_2a8;
                if (*(char*)(lVar4 + 24) != '\0') {
                    lVar4 = local_2e0.HeapBeginPtr();
                    textureAtlasSlot2DGroup = (TextureAtlasSlot2DGroup*)local_2a0[arg1];
                    AddMaterial(local_2b0, uVar2, (TextureAtlasMaterialMapping*)(lVar4 + 4), textureAtlasSlot2DGroup);
                }
                arg1 = (unsigned long)uVar5;
                uVar5 = uVar5 + 1;
                uVar2 = (unsigned int)local_2a1;
            } while (arg1 < local_2b8);
        }
        return uVar2;
    }

    // 0x10085a240
    unsigned long
    TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul>* textureAtlasSlot2DGroups,
                                  const WrapArray<MaterialInfo const>& wrapArray) {
        uint16_t uVar1;
        unsigned int uVar2;
        unsigned int arg3;
        hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                  eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_00;
        TextureAtlas* pTVar3;
        bool cVar4;
        uint8_t bVar5;
        int* piVar7;
        unsigned int* puVar8;
        uint32_t* puVar9;
        short* psVar10;
        uint64_t uVar14;
        uint16_t* puVar11;
        TextureAtlasSlot2D* textureAtlasSlot2D;
        long lVar12;
        long lVar13;
        MaterialInfo* pMVar15;
        int arg1;
        unsigned long arg1_00;
        unsigned long arg1_01;
        bool bVar18;
        ReturnValue local_128;
        ReturnValue local_118;
        unsigned long local_108;
        ReturnValue local_100;
        unsigned int local_dc;
        unsigned long local_d8;
        MaterialInfo* local_c8;
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_c0;
        int local_a0;
        unsigned int local_9c;
        MaterialInfo local_98;

        MaterialInfo* pMVar16 = (MaterialInfo*)field_187808;
        scoped_lock<std::recursive_mutex> local_f0(*pMVar16);
        TextureAtlasSlotPacker* local_e8 = (TextureAtlasSlotPacker*)field_24;
        TextureAtlas* local_a8 = this;
        local_e8->ClearLastCheckedValues();
        auto pfVar6 = wrapArray.HeapBeginPtr();
        if (textureAtlasSlot2DGroups != nullptr) {
            pMVar16 = (MaterialInfo*)((unsigned long)pfVar6 & 4294967295);
            textureAtlasSlot2DGroups->reserve((unsigned long)pMVar16);
        }
        hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                  eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_d0 =
            (hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                       eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                       eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)&local_a8->field_66024;
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar17 =
            (hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                       eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(local_a8->m_formatTypeRequest + 8);
        if ((int)pfVar6 == 0) {
            local_9c = 0;
        } else {
            local_108 = (unsigned long)pfVar6 & 4294967295;
            arg1_01 = 0;
            local_9c = 0;
            local_c0 = phVar17;
            do {
                piVar7 = &wrapArray[arg1_01];
                this_00 = local_d0;
                local_128 = local_d0->find(*piVar7);
                pMVar16 = &local_98;
                *pMVar16 = this_00->end();
                cVar4 = local_128 == *pMVar16;
                phVar17 = local_c0;
                local_d8 = arg1_01;
                if (!cVar4) {
                    if (textureAtlasSlot2DGroups != nullptr) {
                        local_98 = TextureAtlasSlot2DGroup();
                        arg1_00 = 0;
                        do {
                            lVar12 = local_128.HeapBeginPtr();
                            piVar7 = (int*)(*((lVar12 + 4)))[arg1_00];
                            local_a0 = *piVar7;
                            if (-1 < local_a0) {
                                local_118 = phVar17->find(local_a0);
                                local_100 = phVar17->end();
                                cVar4 = local_118 != local_100;
                                if (!cVar4) {
                                    LogAssert("m_textureMap.find(textureID) != m_textureMap.end()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/materials/textures/TextureAtlas.cpp",
                                              1945, nullptr);
                                }
                                lVar12 = (*phVar17)[local_a0];
                                uVar1 = *(uint16_t*)(lVar12 + 4);
                                puVar11 = &local_98[(int)arg1_00];
                                *puVar11 = uVar1;
                                uVar1 = *(uint16_t*)(lVar12 + 6);
                                lVar12 = local_98[(int)arg1_00];
                                *(uint16_t*)(lVar12 + 2) = uVar1;
                                phVar17 = local_c0;
                                arg1_01 = local_d8;
                            }
                            arg1_00 = arg1_00 + 1;
                        } while (arg1_00 != 3);
                        pMVar16 = &local_98;
                        textureAtlasSlot2DGroups->push_back(*pMVar16);
                    }
                LAB_10085a750:
                    pfVar6 = nullptr;
                } else if (local_a8->field_187792 == 1344) {
                    local_9c = (unsigned int)(((uint64_t)((int64_t)((unsigned long)local_a8 >> 8)) << 8) | (uint8_t)1);
                    pfVar6 = (fixed_vector<TextureAtlasSlot2DGroup, _32ul>*)2;
                } else {
                    local_98 = TextureAtlasSlot2DGroup();
                    bVar5 = (uint8_t)local_9c;
                    bVar18 = false;
                    if ((local_9c & 1) == 0) {
                        pMVar15 = nullptr;
                        do {
                            lVar12 = wrapArray[arg1_01];
                            local_c8 = pMVar15;
                            puVar8 = (unsigned int*)(*((lVar12 + 16)))[(unsigned long)pMVar15];
                            uVar2 = *puVar8;
                            pMVar16 = pMVar15;
                            if (uVar2 != 0) {
                                lVar12 = wrapArray[arg1_01];
                                pMVar15 = local_c8;
                                local_dc = uVar2;
                                piVar7 = (int*)(*((lVar12 + 4)))[(unsigned long)local_c8];
                                phVar17 = local_c0;
                                local_a0 = *piVar7;
                                local_118 = local_c0->find(local_a0);
                                local_100 = phVar17->end();
                                cVar4 = local_118 == local_100;
                                arg1 = (int)pMVar15;
                                if (!cVar4) {
                                    lVar12 = local_118.HeapBeginPtr();
                                    uVar1 = *(uint16_t*)(lVar12 + 8);
                                    puVar11 = &local_98[arg1];
                                    *puVar11 = uVar1;
                                    uVar1 = *(uint16_t*)(lVar12 + 10);
                                    pMVar16 = (MaterialInfo*)((unsigned long)pMVar15 & 4294967295);
                                    lVar12 = local_98[arg1];
                                    *(uint16_t*)(lVar12 + 2) = uVar1;
                                    arg1_01 = local_d8;
                                } else {
                                    GetSlotForNewTexture(&local_100, local_a8, local_dc);
                                    puVar9 = &local_98[arg1];
                                    *puVar9 = local_100[0]._0_4_;
                                    *(uint16_t*)(puVar9 + 1) = local_100[0]._4_2_;
                                    pMVar16 = (MaterialInfo*)((unsigned long)pMVar15 & 4294967295);
                                    psVar10 = &local_98[arg1];
                                    arg1_01 = local_d8;
                                    if (*psVar10 == -1) {
                                        uVar14 = (uint64_t)((unsigned long)psVar10 >> 8);
                                        bVar18 = true;
                                    } else {
                                        pMVar16 = (MaterialInfo*)((unsigned long)pMVar15 & 4294967295);
                                        lVar12 = local_98[arg1];
                                        bVar18 = *(short*)(lVar12 + 2) == -1;
                                        uVar14 = (uint64_t)((unsigned long)lVar12 >> 8);
                                    }
                                    bVar5 = bVar18 | bVar5 & 1;
                                    local_9c = (unsigned int)(((uint64_t)uVar14 << 8) | (uint8_t)bVar5);
                                    if (bVar5 == 0) {
                                        lVar12 = wrapArray[arg1_01];
                                        puVar8 = (unsigned int*)(*((lVar12 + 4)))[(unsigned long)local_c8];
                                        uVar2 = *puVar8;
                                        lVar12 = wrapArray[arg1_01];
                                        pMVar16 = local_c8;
                                        puVar8 = (unsigned int*)(*((lVar12 + 16)))[(unsigned long)local_c8];
                                        arg3 = *puVar8;
                                        textureAtlasSlot2D = (TextureAtlasSlot2D*)local_98[(int)pMVar16];
                                        pMVar16 = (MaterialInfo*)&DAT_00000001;
                                        AddTextureReference(local_a8, true, uVar2, arg3, textureAtlasSlot2D);
                                    }
                                }
                            }
                            bVar5 = (uint8_t)local_9c;
                            bVar18 = (local_9c & 1) == 0;
                        } while ((local_c8 < (MaterialInfo*)2) &&
                                 (pMVar15 = (MaterialInfo*)((long)&local_c8->field_0 + 1), (local_9c & 1) == 0));
                    }
                    pfVar6 = (fixed_vector<TextureAtlasSlot2DGroup, _32ul>*)2;
                    if (bVar18) {
                        pMVar16 = &wrapArray[arg1_01];
                        AddMaterialProvisionally(local_a8, pMVar16);
                        pfVar6 = nullptr;
                        if (textureAtlasSlot2DGroups != nullptr) {
                            pMVar16 = &local_98;
                            textureAtlasSlot2DGroups->push_back(*pMVar16);
                        }
                    }
                    phVar17 = local_c0;
                    if (bVar18)
                        goto LAB_10085a750;
                }
            } while (((int)pfVar6 == 0) && (arg1_01 = arg1_01 + 1, arg1_01 != local_108));
        }
        uVar2 = local_9c;
        if ((local_9c & 1) == 0) {
            pfVar6 = textureAtlasSlot2DGroups;
            if ((textureAtlasSlot2DGroups != nullptr) && (cVar4 = textureAtlasSlot2DGroups->empty(), !cVar4)) {
                lVar12 = textureAtlasSlot2DGroups->size();
                lVar13 = wrapArray.HeapBeginPtr();
                if (lVar12 != lVar13) {
                    LogAssert("!pTextureAtlasSlotsOut || pTextureAtlasSlotsOut->empty() || "
                              "pTextureAtlasSlotsOut->size() == materialList.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              2026, nullptr);
                }
            }
        } else if (textureAtlasSlot2DGroups == nullptr) {
            local_e8->ClearTextureSlots();
            phVar17->clear();
            local_d0->clear();
            pTVar3 = local_a8;
            local_98[0].field_0._0_1_ = 0;
            local_a8->field_186448.fill(local_98);
            pTVar3->field_187792 = 0;
        } else {
            pMVar15 = &local_98;
            fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
                function<TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul>*,
                                                       WrapArray<MaterialInfo const> const&)::__5,
                         void>(
                    (function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)
                        pMVar15,
                    (__5*)pMVar16);
            local_e8->FlushProvisionalSlots(*pMVar15);
            eastl::erase_if<int, TextureAtlasTextureMapping, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true>, false,
                            (eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul>*)
                                ->GetTextureSlots(WrapArray<MaterialInfo const> const&)::__6>(
                (hash_map<int, TextureAtlasTextureMapping, eastl::hash<int>, eastl::equal_to<int>,
                          eastl::fixed_hashtable_allocator<1026ul, _24ul, _1024ul, _4ul, _0ul, true>>*)phVar17,
                (__6*)pMVar15);
            eastl::erase_if<int, TextureAtlasMaterialMapping, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true>, false,
                            (eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul>*)
                                ->GetTextureSlots(WrapArray<MaterialInfo const> const&)::__7>(
                (hash_map<int, TextureAtlasMaterialMapping, eastl::hash<int>, eastl::equal_to<int>,
                          eastl::fixed_hashtable_allocator<1026ul, _40ul, _1024ul, _4ul, _0ul, true>>*)local_d0,
                (__7*)local_a8);
        }
        return (uVar2 & 1) == 0 & 4294967295;
    }

    // 0x10085a900
    void TextureAtlas::AddMaterial(unsigned int arg1, TextureAtlasMaterialMapping& textureAtlasMaterialMapping,
                                   const TextureAtlasSlot2DGroup& textureAtlasSlot2DGroup) {
        unsigned short uVar1;
        short sVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        bool cVar6;
        unsigned int* puVar7;
        short* psVar8;
        long lVar9;
        short* psVar10;
        uint8_t* puVar11;
        ReturnValue* pRVar12;
        short sVar13;
        uint8_t local_d0[16];
        ReturnValue local_c0;
        ReturnValue RStack_b8;
        ReturnValue local_b0;
        ReturnValue RStack_a8;
        char local_a0;
        uint8_t uStack_9f;
        GUIAnimationRGB local_78;
        array<unsigned short, 3ul> local_50;
        array<unsigned short, 3ul> local_48;
        array<unsigned char, 3ul> local_38;
        unsigned int local_34;

        unsigned int local_54 = arg1;
        scoped_lock<std::recursive_mutex> local_80(*field_187808);
        textureAtlasMaterialMapping.field_20 = 0;
        TextureAtlasSlotPacker* local_88 = (TextureAtlasSlotPacker*)field_24;
        uint8_t bVar5 = local_88->GetGutteringSlotCount();
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00 =
            (hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                       eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
        unsigned int local_3c = (unsigned int)bVar5;
        unsigned long arg1_00 = 0;
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_60 = this_00;
        do {
            puVar7 = &textureAtlasMaterialMapping[arg1_00];
            local_34 = *puVar7;
            if ((int)local_34 < 0) {
                puVar7 = (unsigned int*)m_dummyTextureIDs[arg1_00];
                local_34 = *puVar7;
                *local_d0 = this_00->find(local_34);
                local_78 = this_00->end();
                cVar6 = *local_d0 != local_78;
                if (!cVar6) {
                    LogAssert("mapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1145, nullptr);
                }
                lVar9 = local_d0->HeapBeginPtr();
                uVar1 = *(unsigned short*)(lVar9 + 12);
                puVar7 = (unsigned int*)GetAtlasQuality();
                uVar3 = *puVar7;
                puVar11 = &local_38[arg1_00];
                *puVar11 = (char)(uVar1 / uVar3);
                lVar9 = local_d0->HeapBeginPtr();
                sVar2 = *(short*)(lVar9 + 8);
                sVar13 = (short)local_3c;
                psVar8 = &local_50[arg1_00];
                *psVar8 = sVar2 + sVar13;
                lVar9 = local_d0->HeapBeginPtr();
                sVar2 = *(short*)(lVar9 + 10);
                psVar8 = &local_48[arg1_00];
                *psVar8 = sVar2 + sVar13;
            } else {
                *local_d0 = this_00->find(local_34);
                local_78 = this_00->end();
                cVar6 = *local_d0 != local_78;
                if (!cVar6) {
                    LogAssert("textureMapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1097, nullptr);
                }
                psVar8 = &textureAtlasSlot2DGroup[(int)arg1_00];
                lVar9 = local_d0->HeapBeginPtr();
                uVar1 = *(unsigned short*)(lVar9 + 12);
                puVar7 = (unsigned int*)GetAtlasQuality();
                uVar3 = *puVar7;
                if ((uVar1 <= uVar3 && uVar3 != uVar1) || (255 < uVar1 / uVar3)) {
                    LogAssert("textureSlotSize != 0 && textureSlotSize <= std::numeric_limits<uint8>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1102, nullptr);
                }
                sVar2 = *psVar8;
                sVar13 = (short)local_3c;
                psVar10 = &local_50[arg1_00];
                *psVar10 = sVar2 + sVar13;
                sVar2 = psVar8[1];
                psVar10 = &local_48[arg1_00];
                *psVar10 = sVar2 + sVar13;
                puVar11 = &local_38[arg1_00];
                *puVar11 = (char)(uVar1 / uVar3);
                lVar9 = local_d0->HeapBeginPtr();
                if (*(char*)(lVar9 + 14) == '\0') {
                    this_00 = local_60;
                    this = this;
                } else {
                    sVar2 = *psVar8;
                    sVar13 = psVar8[1];
                    lVar9 = local_d0->HeapBeginPtr();
                    local_78 = GUIAnimationRGB(sVar2, sVar13, *(short*)(lVar9 + 12));
                    uVar3 = local_34;
                    this = this;
                    lVar9 = local_d0->HeapBeginPtr();
                    local_88->AddAtlasSlotData(false, uVar3, (unsigned int)*(unsigned short*)(lVar9 + 12), local_78);
                    lVar9 = local_d0->HeapBeginPtr();
                    *(uint8_t*)(lVar9 + 14) = 0;
                    cVar6 = this_thread::IsMainThread();
                    uVar3 = local_34;
                    if (cVar6) {
                        lVar9 = local_d0->HeapBeginPtr();
                        UploadTexture(uVar3, *((lVar9 + 4)));
                    }
                    lVar9 = local_d0->HeapBeginPtr();
                    this_00 = local_60;
                    if (*(char*)(lVar9 + 15) == '\0') {
                        field_164664 = 1;
                    }
                }
            }
            arg1_00 = arg1_00 + 1;
            if (arg1_00 == 3) {
                new (local_d0) TextureAtlasMaterialSettings();
                uVar3 = local_54;
                field_8->GetMaterialSettings(*local_d0, local_54);
                local_d0->SetTextureSlots(local_50, local_48, local_38);
                uVar4 = local_54;
                local_54._0_2_ = (uint16_t)uVar3;
                local_54._2_2_ = (uint16_t)(uVar3 >> 16);
                local_78.field_0 = (uint16_t)local_54;
                local_78.field_2 = local_54._2_2_;
                local_54 = uVar4;
                pRVar12 = &field_167824[local_78];
                pRVar12[6].field_0 = local_a0;
                pRVar12[6].field_1 = uStack_9f;
                pRVar12[4] = local_b0;
                pRVar12[5] = RStack_a8;
                pRVar12[2] = local_c0;
                pRVar12[3] = RStack_b8;
                *pRVar12 = (ReturnValue)local_d0._0_8_;
                pRVar12[1] = (ReturnValue)local_d0._8_8_;
                return;
            }
        } while (true);
    }

    // 0x10085ad60
    auto TextureAtlas::GetSlotForNewTexture(unsigned int arg1) {
        auto result;

        scoped_lock<std::recursive_mutex> local_28(*field_187808);
        result.AllocSlot2D((int)this + 24);
        return result;
    }

    // 0x10085adf0
    void TextureAtlas::SetTextureMipData(render::Texture2D& texture2D, bool arg2, unsigned int arg3, unsigned int arg4,
                                         unsigned int arg5, unsigned int arg6, const void* arg7, unsigned int arg8,
                                         unsigned int arg9) {
        unsigned int uVar3;
        uint8_t bVar6;
        uint64_t in_register_00000011;
        unsigned int arg4_00;
        unsigned int arg3_00;
        Format format;
        unsigned int arg5_00;
        bool bVar8;
        unsigned int local_6c;
        unsigned int local_54;
        unsigned int local_38;

        uint32_t local_5c = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (arg7 == nullptr) {
            LogAssert("srcImageData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      985, nullptr);
        }
        if (arg8 == 0 && arg9 == 0) {
            LogAssert("dataSizeInBytes > 0u || dataMipLevels > 0u",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      993, nullptr);
        }
        long lVar4 = GetAtlasQuality();
        Texture2D* pTVar1 = texture2D;
        unsigned int local_34 = *(unsigned int*)(lVar4 + 32);
        if (arg9 < local_34) {
            LogAssert("dataMipLevels >= highestMipRequested",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1003, nullptr);
        }
        lVar4 = texture2D.second();
        if (*(int*)(lVar4 + 28) == 0) {
            local_6c = pTVar1->GetStreamCountLastMix();
        } else {
            lVar4 = pTVar1->second();
            local_6c = *(unsigned int*)(lVar4 + 28);
        }
        unsigned int local_68 = arg9 - local_34;
        auto puVar5 = std::min<unsigned int>(local_6c, local_68);
        unsigned int local_44 = *puVar5;
        unsigned int uVar7 = 0;
        unsigned int local_58 = arg8;
        unsigned int local_40 = 0;
        unsigned int local_3c = arg5;
        do {
            if (arg9 == 0) {
                if (arg8 <= local_40) {
                    return;
                }
            } else if (arg9 <= uVar7) {
                return;
            }
            if (local_44 == 0) {
                return;
            }
            bVar6 = (uint8_t)uVar7;
            arg5_00 = arg5 >> (bVar6 & 31);
            format = arg6 >> (bVar6 & 31);
            arg3_00 = arg3 >> (bVar6 & 31);
            arg4_00 = arg4 >> (bVar6 & 31);
            if (((char)local_5c == '\0') ||
                ((((bVar8 = false, (arg3_00 & 3) == 0 && ((arg4_00 & 3) == 0)) && ((arg5_00 & 3) == 0)) &&
                  ((format & 3) == 0)))) {
                lVar4 = texture2D.second();
                uVar3 = render::GetFormatByteCount(*(Format*)(lVar4 + 12)) * arg5_00 * format;
                bVar8 = local_58 < uVar3;
                local_58 = local_58 - uVar3;
                if (bVar8) {
                    LogAssert("dataLength <= dataRemaining",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1033, nullptr);
                }
                if (local_34 <= uVar7) {
                    local_54 = uVar3;
                    lVar4 = GetAtlasQuality();
                    pTVar1 = texture2D;
                    uVar3 = uVar7 - *(int*)(lVar4 + 32);
                    puVar5 = (unsigned int*)texture2D.second();
                    local_38 = uVar3;
                    if (*puVar5 >> ((uint8_t)uVar3 & 31) < arg3_00 + arg5_00) {
                    LAB_10085b038:
                        LogAssert("x + w <= uint(texture.GetDesc().m_Width) >> destTextureMipIndex && y + h <= "
                                  "uint(texture.GetDesc().m_Height) >> destTextureMipIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  1041, nullptr);
                    }
                    lVar4 = pTVar1->second();
                    uVar3 = local_40;
                    if (*(unsigned int*)(lVar4 + 4) >> ((uint8_t)local_38 & 31) < arg4_00 + format)
                        goto LAB_10085b038;
                    lVar4 = pTVar1->second();
                    pTVar1->Update((unsigned int)pTVar1, local_38, arg3_00, arg4_00, arg5_00, format,
                                   (void*)*(uint32_t*)(lVar4 + 12));
                    local_44 = local_44 - 1;
                    local_40 = uVar3;
                    uVar3 = local_54;
                }
                local_40 = local_40 + uVar3;
                bVar8 = true;
                arg5 = local_3c;
            }
            uVar7 = uVar7 + 1;
            if (!bVar8) {
                return;
            }
        } while (true);
    }

    // 0x10085b170
    void TextureAtlas::AddTextureReference(bool arg1, unsigned int arg2, unsigned int arg3,
                                           const graphicutils::TextureAtlasSlot2D& textureAtlasSlot2D) {

        scoped_lock<std::recursive_mutex> local_40(*field_187808);
        field_24->AddAtlasSlotData(arg1, arg2, arg3, textureAtlasSlot2D);
        TextureAtlasTextureMapping local_50;
        local_50.Initialise((unsigned int)(unsigned short)textureAtlasSlot2D.field_0,
                            (unsigned int)(unsigned short)textureAtlasSlot2D.field_2, arg3, arg1, false);
        auto local_68 =
            ((m_formatTypeRequest + 8))->emplace<unsigned int&, TextureAtlasTextureMapping&>(arg2, local_50);
    }

    // 0x10085b280
    void TextureAtlas::AddMaterialProvisionally(const MaterialInfo& materialInfo) {
        char* pcVar1;
        uint8_t local_60[48];

        scoped_lock<std::recursive_mutex> local_30(*field_187808);
        unsigned long arg1 = 0;
        do {
            pcVar1 = &field_186448[arg1];
            if (*pcVar1 == '\0') {
                *pcVar1 = '\x01';
                field_187792 = field_187792 + 1;
                if (-1 < (int)(unsigned int)arg1) {
                    new (local_60) TextureAtlasMaterialMapping();
                    local_60->Initialise(materialInfo.field_4, (unsigned int)arg1);
                    *((local_60 + 24)) =
                        field_66024.emplace<int const&, TextureAtlasMaterialMapping&>(materialInfo.field_0, *local_60);
                    return;
                }
                break;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 1344);
        LogAssert("settingsSlot > -1",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/materials/"
                  "textures/TextureAtlas.cpp",
                  956, nullptr);
    }

    // 0x10085b3c0
    void TextureAtlas::AddTextureData(const shared_ptr<TextureData>& textureData,
                                      const TextureAtlasTextureMapping& textureAtlasTextureMapping) {
        unique_ptr<unsigned char[]>* this_01;

        bool bVar5 = (unique_ptr<unsigned_char_[], std::default_delete<unsigned_char_[]> _>*)textureData.operator->() !=
                     textureData;
        if (!bVar5) {
            LogAssert("textureData.m_rgbData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      967, nullptr);
        }
        long lVar6 = textureData.operator->();
        int iVar3 = *(int*)(lVar6 + 16);
        lVar6 = textureData.operator->();
        if (iVar3 != *(int*)(lVar6 + 20)) {
            LogAssert("textureData.m_width == textureData.m_height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      968, nullptr);
        }
        if (textureAtlasTextureMapping.field_11 != '\x01') {
            LogAssert("textureMapping.m_loadingState == TextureAtlasTextureLoadingState::LOADING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      969, nullptr);
        }
        unsigned short uVar1 = textureAtlasTextureMapping.field_4;
        auto piVar7 = GetAtlasQuality();
        iVar3 = *piVar7;
        unsigned short uVar2 = textureAtlasTextureMapping.field_6;
        piVar7 = (int*)GetAtlasQuality();
        int iVar4 = *piVar7;
        auto this_00 = GetWorld();
        bVar5 = (bool)this_00->IsCompressed();
        lVar6 = textureData.operator->();
        unsigned int arg5 = *(unsigned int*)(lVar6 + 16);
        lVar6 = textureData.operator->();
        unsigned int arg6 = *(unsigned int*)(lVar6 + 20);
        this_01 = (unique_ptr<unsigned char[]>*)textureData.operator->();
        void* arg7 = (void*)this_01->get();
        lVar6 = textureData.operator->();
        unsigned int arg8 = *(unsigned int*)(lVar6 + 8);
        lVar6 = textureData.operator->();
        SetTextureMipData(*m_texture, bVar5, (unsigned int)uVar1 * iVar3, (unsigned int)uVar2 * iVar4, arg5, arg6, arg7,
                          arg8, *(unsigned int*)(lVar6 + 12));
    }

    // 0x10085b5b0
    uint64_t TextureAtlas::UploadTexture(int arg1, TextureAtlasTextureMapping& textureAtlasTextureMapping) {
        bool bVar1;
        unsigned int* puVar4;
        uint64_t uVar5;
        ReturnValue* midiPlayerMainThread;
        uint8_t local_128[32];
        uint64_t local_108;
        uint32_t local_100;
        ReturnValue local_f8;
        ReturnValue local_e8;
        RenderDevice* local_e0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        unsigned long uVar3 = field_187816.size();
        auto this_00 = field_8->GetTextureAtlasManager();
        unsigned int uVar2 = this_00->GetMaxSimultaneousTextureUploadsPerAtlas();
        uint8_t* textureType = TextureType::TEXTURE;
        if ((uVar3 < uVar2) && (textureAtlasTextureMapping.field_11 == '\0')) {
            local_e0 = (RenderDevice*)field_8;
            puVar4 = (unsigned int*)GetWorld();
            local_f8 = local_e0->GetTextureData(textureType, arg1, (TextureFormatBitSet)*puVar4);
            midiPlayerMainThread = &local_f8;
            bVar1 = *midiPlayerMainThread != nullptr;
            if (bVar1) {
                textureAtlasTextureMapping.field_11 = 1;
                local_e0 = (RenderDevice*)midiPlayerMainThread->Instance();
                local_128._0_8_ = this;
                local_128._8_4_ = arg1;
                new ((local_128 + 16)) shared_ptr(&local_f8);
                local_100._0_2_ = textureAtlasTextureMapping.field_8;
                local_100._2_1_ = textureAtlasTextureMapping.field_10;
                local_100._3_1_ = textureAtlasTextureMapping.field_11;
                local_108._0_4_ = textureAtlasTextureMapping.field_0;
                local_108._4_2_ = textureAtlasTextureMapping.field_4;
                local_108._6_2_ = textureAtlasTextureMapping.field_6;
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::__8, void>(local_d8,
                                                                                              (__8*)local_128);
                local_e8 = local_e0->RunOnThreadPoolRenderContext("UploadTexture", *local_d8);
                field_187816.push_back(local_e8);
                UploadTexture(int, TextureAtlasTextureMapping&)::$_8::~__8((__8*)local_128);
                uVar5 = 1;
                if (bVar1)
                    goto LAB_10085b735;
            } else {
            }
        }
        uVar5 = 0;
    LAB_10085b735:
        return uVar5;
    }

    // 0x10085b870
    void TextureAtlas::UpdateMaterials() {
        unsigned int arg1;
        bool cVar1;
        unsigned int* puVar2;

        scoped_lock<std::recursive_mutex> local_38(*field_187808);
        ProcessRemovalQueue();
        auto local_58 = field_66024.begin();
        auto local_48 = field_66024.end();
        while (true) {
            cVar1 = local_58 != local_48;
            if (!cVar1)
                break;
            puVar2 = (unsigned int*)local_58.HeapBeginPtr();
            arg1 = *puVar2;
            if (-1 < (int)arg1) {
                cVar1 = UpdateMaterial(arg1);
                if (!cVar1) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1188, "Failed to fit material %i in atlas", arg1);
                }
            }
            ++local_58;
        }
        ProcessRemovalQueue();
    }

    // 0x10085b970
    void TextureAtlas::ProcessRemovalQueue() {
        unsigned int uVar2;
        int iVar3;
        unsigned int* puVar5;
        long lVar6;
        int* piVar7;
        unsigned int* local_48;
        vector<eastl::pair<int, int>>* local_40;

        scoped_lock<std::recursive_mutex> local_50(*field_187808);
        uint8_t* puVar1 = &field_166760;
        TextureAtlas* local_38 = this;
        bool cVar4 = puVar1->empty();
        if (!cVar4) {
            puVar5 = (unsigned int*)puVar1->HeapBeginPtr();
            local_40 = (vector<eastl::pair<int, int>>*)puVar1;
            local_48 = (unsigned int*)puVar1->end();
            if (puVar5 != local_48) {
                puVar1 = local_38->m_formatTypeRequest;
                do {
                    uVar2 = *puVar5;
                    local_60[0]._0_4_ = uVar2;
                    local_70 = ((puVar1 + 8))->find(local_60);
                    local_60 = ((puVar1 + 8))->end();
                    cVar4 = local_70 != local_60;
                    if (cVar4) {
                        lVar6 = local_70.HeapBeginPtr();
                        if (*(int*)(lVar6 + 4) == 0) {
                            RemoveTexture(local_38, uVar2);
                        }
                    }
                    puVar5 = puVar5 + 1;
                } while (puVar5 != local_48);
            }
            local_40->clear();
        }
        puVar1 = &local_38->field_165696;
        cVar4 = puVar1->empty();
        if (!cVar4) {
            puVar5 = (unsigned int*)puVar1->HeapBeginPtr();
            local_40 = (vector<eastl::pair<int, int>>*)puVar1;
            local_48 = (unsigned int*)puVar1->end();
            if (puVar5 != local_48) {
                puVar1 = &local_38->field_66024;
                do {
                    uVar2 = *puVar5;
                    local_60[0]._0_4_ = uVar2;
                    local_70 = puVar1->find(local_60);
                    local_60 = puVar1->end();
                    cVar4 = local_70 != local_60;
                    if (cVar4) {
                        lVar6 = local_70.HeapBeginPtr();
                        if (*(int*)(lVar6 + 20) == 0) {
                            RemoveMaterial(local_38, uVar2);
                        }
                    }
                    puVar5 = puVar5 + 1;
                } while (puVar5 != local_48);
            }
            local_40->clear();
        }
        puVar1 = local_38->m_formatTypeRequest;
        auto local_70 = ((puVar1 + 8))->begin();
        auto local_60 = ((puVar1 + 8))->end();
        while (true) {
            cVar4 = local_70 != local_60;
            if (!cVar4)
                break;
            piVar7 = (int*)local_70.HeapBeginPtr();
            iVar3 = *piVar7;
            if ((-1 < iVar3) && (piVar7[1] < 0)) {
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          1570, "TextureAtlas texture ID %d has an invalid permanent reference count %d", iVar3,
                          piVar7[1]);
            }
            ++local_70;
        }
    }

    // 0x10085bbd0
    unsigned long TextureAtlas::UpdateMaterial(unsigned int arg1) {
        unsigned short uVar1;
        short sVar2;
        int iVar3;
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar4;
        unsigned int uVar8;
        uint8_t* puVar11;
        short* psVar12;
        unsigned int* puVar13;
        unsigned int* puVar14;
        short sVar16;
        bool bVar18;
        array<unsigned short, 3ul> local_98;
        array<unsigned short, 3ul> local_90;
        ReturnValue local_78;
        array<unsigned char, 3ul> local_50;
        TextureAtlasSlot2D local_48;
        unsigned int local_3c;
        uint8_t local_35;
        unsigned int local_34;

        scoped_lock<std::recursive_mutex> local_88(*field_187808);
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_d8;
        local_d8.reserve(1);
        ((TextureAtlasManager*)field_8->GetTextureAtlasManager())->PopulateMaterialInfoFromMaterialID(local_d8, arg1);
        long lVar9 = local_d8[0];
        local_110._0_4_ = arg1;
        auto local_120 = field_66024.find(local_110);
        TextureAtlasMaterialSettings local_110 = field_66024.end();
        bool cVar6 = local_120 != local_110;
        TextureAtlas* pTVar5 = this;
        if (!cVar6) {
            LogAssert("materialDef != m_materialMap.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1210, nullptr);
        }
        long lVar10 = local_120.HeapBeginPtr();
        Layout* local_b0 = (Layout*)pTVar5->field_24;
        uint8_t bVar7 = local_b0->GetGutteringSlotCount();
        array<int, 3ul>* local_c0 = (array<int, 3ul>*)(lVar10 + 4);
        array<int, 3ul>* local_b8 = (array<int, 3ul>*)(lVar9 + 4);
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_68 =
            (hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                       eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(pTVar5->m_formatTypeRequest + 8);
        fixed_vector<unsigned int, 256ul>* local_a0 = (fixed_vector<unsigned int, 256ul>*)&pTVar5->field_166760;
        array<unsigned int, 3ul>* local_a8 = (array<unsigned int, 3ul>*)(lVar9 + 16);
        unsigned int local_80 = (unsigned int)bVar7;
        unsigned long uVar17 = 1;
        unsigned long arg1_00 = 0;
        long local_60 = lVar10;
        do {
            local_35 = (uint8_t)uVar17;
            puVar13 = (unsigned int*)(*local_c0)[arg1_00];
            uVar8 = *puVar13;
            local_3c = uVar8;
            puVar14 = (unsigned int*)(*local_b8)[arg1_00];
            phVar4 = local_68;
            local_34 = *puVar14;
            if (uVar8 != local_34) {
                if (-1 < (int)uVar8) {
                    local_110 = local_68->find(local_3c);
                    local_78 = phVar4->end();
                    cVar6 = local_110 != local_78;
                    if (!cVar6) {
                        LogAssert("textureMapping != m_textureMap.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  1232, nullptr);
                    }
                    lVar9 = local_110.HeapBeginPtr();
                    if (0 < *(int*)(lVar9 + 4)) {
                        iVar3 = *(int*)(local_60 + 20);
                        lVar9 = local_110.HeapBeginPtr();
                        *(int*)(lVar9 + 4) = *(int*)(lVar9 + 4) - iVar3;
                        lVar9 = local_110.HeapBeginPtr();
                        if (*(int*)(lVar9 + 4) < 0) {
                            LogAssert("textureMapping->second.m_refCount > -1",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/materials/textures/TextureAtlas.cpp",
                                      1238, nullptr);
                        }
                        lVar9 = local_110.HeapBeginPtr();
                        if (*(int*)(lVar9 + 4) == 0) {
                            local_78[0]._0_4_ = local_3c;
                            local_a0->push_back(local_78);
                        }
                    }
                }
                phVar4 = local_68;
                if (-1 < (int)local_34) {
                    local_110 = local_68->find(local_34);
                    local_78 = phVar4->end();
                    cVar6 = local_110 == local_78;
                    if (!cVar6) {
                        lVar9 = local_110.HeapBeginPtr();
                        if (-1 < *(int*)(lVar9 + 4)) {
                            iVar3 = *(int*)(local_60 + 20);
                            lVar9 = local_110.HeapBeginPtr();
                            *(int*)(lVar9 + 4) = *(int*)(lVar9 + 4) + iVar3;
                        }
                    } else {
                        puVar14 = (unsigned int*)(*local_a8)[arg1_00];
                        pTVar5 = this;
                        GetSlotForNewTexture((ReturnValue*)&local_48, this, *puVar14);
                        if ((local_48.field_0 == -1) || (local_48.field_2 == -1)) {
                            uVar17 = (((uint64_t)((int64_t)((unsigned long)pTVar5 >> 8)) << 8) | (uint8_t)local_35);
                            goto LAB_10085c0d1;
                        }
                        AddTextureReference(pTVar5, false, local_34, *puVar14, &local_48);
                        local_78 = local_68->find(local_34);
                        iVar3 = *(int*)(local_60 + 20);
                        lVar9 = local_78.HeapBeginPtr();
                        *(int*)(lVar9 + 4) = *(int*)(lVar9 + 4) + iVar3;
                        field_164664 = 1;
                    }
                }
            }
            if ((int)local_34 < 0) {
                puVar14 = &m_dummyTextureIDs[arg1_00];
                local_34 = *puVar14;
            }
            phVar4 = local_68;
            local_110 = local_68->find(local_34);
            local_78 = phVar4->end();
            cVar6 = local_110 != local_78;
            if (!cVar6) {
                LogAssert("mapping != m_textureMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          1289, nullptr);
            }
            lVar9 = local_110.HeapBeginPtr();
            uVar1 = *(unsigned short*)(lVar9 + 12);
            puVar14 = (unsigned int*)local_b0->SSOBeginPtr();
            uVar8 = *puVar14;
            puVar11 = &local_50[arg1_00];
            *puVar11 = (char)(uVar1 / uVar8);
            lVar9 = local_110.HeapBeginPtr();
            sVar2 = *(short*)(lVar9 + 8);
            sVar16 = (short)local_80;
            psVar12 = &local_98[arg1_00];
            *psVar12 = sVar2 + sVar16;
            lVar9 = local_110.HeapBeginPtr();
            sVar16 = *(short*)(lVar9 + 10) + sVar16;
            psVar12 = &local_90[arg1_00];
            *psVar12 = sVar16;
            uVar8 = local_34;
            if ((int)local_34 < 0) {
                uVar8 = 4294967295;
            }
            *puVar13 = uVar8;
            bVar18 = arg1_00 < 2;
            arg1_00 = arg1_00 + 1;
            uVar17 = (unsigned long)(((uint16_t)((char)((unsigned short)sVar16 >> 8)) << 8) | (uint8_t)bVar18);
        } while (arg1_00 != 3);
        local_110 = TextureAtlasMaterialSettings();
        pTVar5 = this;
        uVar8 = arg1;
        field_8->GetMaterialSettings(local_110, arg1);
        local_110.SetTextureSlots(local_98, local_90, local_50);
        *(uint8_t*)(local_60 + 25) = 0;
        local_78[0]._0_4_ = uVar8;
        uint64_t* puVar15 = &pTVar5->field_167824[local_78];
        *(uint16_t*)(puVar15 + 6) = local_110._48_2_;
        puVar15[4] = local_110._32_8_;
        puVar15[5] = local_110._40_8_;
        puVar15[2] = local_110._16_8_;
        puVar15[3] = local_110._24_8_;
        *puVar15 = (((uint64_t)local_110._4_4_ << 32) | (uint32_t)local_110._0_4_);
        puVar15[1] = local_110._8_8_;
    LAB_10085c0d1:
        return ~(uint8_t)uVar17 & 4294967041;
    }

    // 0x10085c230
    void TextureAtlas::RemoveMaterial(unsigned int arg1) {
        hashtable_iterator<eastl::pair<int const, TextureAtlasMaterialMapping>, true, false>* local_58[2];

        scoped_lock<std::recursive_mutex> local_48(*field_187808);
        uint8_t* this_00 = &field_66024;
        local_40[0]._0_4_ = arg1;
        auto local_68 = this_00->find(local_40);
        auto local_40 = this_00->end();
        if (local_68 != local_40 == '\0') {
            LogAssert("materialMapping != m_materialMap.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1319, nullptr);
        }
        long lVar2 = local_68.HeapBeginPtr();
        uint8_t* puVar3 = &field_186448[(long)*(int*)(lVar2 + 16)];
        *puVar3 = 0;
        field_187792 = field_187792 - 1;
        new (local_58) eastl::hashtable_iterator(&local_68);
        local_40 = this_00->erase(local_58[0]);
        local_40[0]._0_4_ = arg1;
        field_167824.erase(local_40);
    }

    // 0x10085c4a0
    void TextureAtlas::RemoveTexture(unsigned int arg1) {
        scoped_lock<std::recursive_mutex> local_40(*field_187808);
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00 =
            (hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                       eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
        local_38._0_4_ = arg1;
        auto local_50 = this_00->find(local_38);
        GUIAnimationRGB local_38 = this_00->end();
        if (local_50 != local_38 == '\0') {
            LogAssert("mappingEntry != m_textureMap.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1332, nullptr);
        }
        long lVar2 = local_50.HeapBeginPtr();
        local_38 = GUIAnimationRGB(*(short*)(lVar2 + 8), *(short*)(lVar2 + 10), *(short*)(lVar2 + 12));
        field_24->FreeSlot2D(local_38);
        local_38._0_4_ = arg1;
        this_00->erase(local_38);
    }

    // 0x10085c660
    void TextureAtlas::MainDraw() {
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1368, nullptr);
        }
        scoped_lock<std::recursive_mutex> local_28(*field_187808);
        cVar1 = m_texture->IsCreated();
        if (cVar1) {
            cVar1 = m_settingsTexture->IsCreated();
            if (cVar1) {
                LoadTextures();
                UploadDelayedMaterials();
                cVar1 = field_187816.has_overflowed();
                if (cVar1) {
                    LogAssert("!m_textureUpdateFutures.has_overflowed()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1383, nullptr);
                }
                eastl::list<std::future<void>, eastl::fixed_node_allocator<24ul, 128ul, 8ul, 0ul, true>>::remove_if<
                    TextureAtlas::MainDraw()::__0>((__0*)&field_187816);
                ProcessRemovalQueue();
                field_33104 = (*((m_formatTypeRequest + 8)));
                field_115344 = field_66024;
                goto LAB_10085c7b8;
            }
        }
        auto this_00 = logger::default_logger();
        cVar1 = m_texture->IsCreated();
        bool cVar2 = m_settingsTexture->IsCreated();
        char* pcVar3 = "false";
        char* pcVar4 = "false";
        if (cVar1) {
            pcVar4 = "true";
        }
        if (cVar2) {
            pcVar3 = "true";
        }
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                     "materials/textures/TextureAtlas.cpp",
                     1375, "TextureAtlas MainDraw called without textures (texture: %s, settings: %s) setup", pcVar4,
                     pcVar3);
    LAB_10085c7b8:
    }

    // 0x10085c7e0
    void TextureAtlas::LoadTextures() {
        bool bVar1;
        bool cVar2;
        int* piVar3;
        bool bVar4;
        ReturnValue local_58;
        ReturnValue local_48;
        scoped_lock<std::recursive_mutex> local_38;

        if (field_164664 != '\0') {
            local_38 = std::scoped_lock(*field_187808);
            local_58 = ((m_formatTypeRequest + 8))->begin();
            local_48 = ((m_formatTypeRequest + 8))->end();
            bVar1 = true;
            bVar4 = true;
            while (cVar2 = local_58 != local_48, cVar2) {
                piVar3 = (int*)local_58.HeapBeginPtr();
                if ((*(char*)((long)piVar3 + 15) != '\x02') &&
                    (cVar2 = UploadTexture(*piVar3, *((piVar3 + 1))), bVar4 = bVar1, !cVar2)) {
                    bVar4 = false;
                    bVar1 = bVar4;
                }
                ++local_58;
            }
            if (bVar4) {
                field_164664 = 0;
            }
        }
    }

    // 0x10085c8c0
    void TextureAtlas::UploadDelayedMaterials() {
        bool bVar1;
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                  eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_01;
        unsigned int uVar3;
        long lVar4;
        long lVar5;
        int* arg1;
        unsigned long uVar6;
        RenderDevice* this_03;
        __1 local_1a0;
        int local_160;
        ReturnValue local_138;
        int* local_130;
        int* local_120;
        long local_118;
        ReturnValue local_110;
        int local_dc;
        ReturnValue local_d8;

        scoped_lock<std::recursive_mutex> local_100(*field_187808);
        auto local_148 = field_167824.begin();
        auto local_158 = field_167824.end();
        hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                  eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_f8 =
            (hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                       eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>,
                       eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)&field_66024;
        hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_128 =
            (hashtable<int, eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer>>>,
                       eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
        list<game::MiniMap::MapSquareState, eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true>>* local_e8 =
            (list<game::MiniMap::MapSquareState,
                  eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true>>*)&field_187816;
        do {
            if (!(local_148 != local_158)) {
                return;
            }
            local_120 = (int*)local_148.HeapBeginPtr();
            this_01 = local_f8;
            local_dc = *local_120;
            local_110 = local_f8->find(local_dc);
            local_d8 = this_01->end();
            if (!(local_110 != local_d8)) {
                LogAssert("materialMappingIt != m_materialMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          1476, nullptr);
            }
            local_d8 = local_f8->end();
            if (local_110 != local_d8) {
                lVar4 = local_110.HeapBeginPtr();
                lVar5 = local_110.HeapBeginPtr();
                if (*(char*)(lVar5 + 25) == '\x02') {
                    LogAssert("materialMappingIt->second.m_loadingState != TextureAtlasTextureLoadingState::READY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1481, nullptr);
                }
                local_118 = lVar4;
                arg1 = ((lVar4 + 4))->begin();
                local_130 = ((lVar4 + 4))->end();
                bVar1 = true;
                if (arg1 != local_130) {
                    do {
                        this_00 = local_128;
                        local_d8 = local_128->find(*arg1);
                        local_1a0 = this_00->end();
                        if (local_d8 == local_1a0) {
                            bVar1 = false;
                            break;
                        }
                        lVar4 = local_d8.HeapBeginPtr();
                        bVar1 = false;
                        if (*(char*)(lVar4 + 15) != '\x02')
                            break;
                        arg1 = arg1 + 1;
                        bVar1 = true;
                    } while (arg1 != local_130);
                }
                if (bVar1) {
                    uVar6 = local_e8->size();
                    uVar3 = ((TextureAtlasManager*)field_8->GetTextureAtlasManager())
                                ->GetMaxSimultaneousTextureUploadsPerAtlas();
                    if ((uVar6 < uVar3) && (lVar4 = local_110.HeapBeginPtr(), *(char*)(lVar4 + 25) == '\0')) {
                        lVar4 = &local_110->HeapBeginPtr();
                        *(uint8_t*)(lVar4 + 25) = 1;
                        uVar3 = *(unsigned int*)(local_118 + 16);
                        this_03 = (RenderDevice*)&local_110->Instance();
                        local_1a0.field_0 = this;
                        local_1a0.field_12._48_2_ = *(uint16_t*)(local_120 + 13);
                        local_1a0.field_12._0_8_ = *(uint64_t*)(local_120 + 1);
                        local_1a0.field_12._8_8_ = *(uint64_t*)(local_120 + 3);
                        local_1a0.field_12._16_8_ = *(uint64_t*)(local_120 + 5);
                        local_1a0.field_12._24_8_ = *(uint64_t*)(local_120 + 7);
                        local_1a0.field_12._32_8_ = *(uint64_t*)(local_120 + 9);
                        local_1a0.field_12._40_8_ = *(uint64_t*)(local_120 + 11);
                        local_160 = local_dc;
                        local_1a0.field_8 = uVar3;
                        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                            function<TextureAtlas::UploadDelayedMaterials()::__1, void>(
                                (function<void(render::RenderContext&), 128ul, 16ul,
                                          (fixedfunction::Methods)0>*)&local_d8,
                                &local_1a0);
                        local_138 = this_03->RunOnThreadPoolRenderContext("UploadDelayedMaterials", local_d8);
                        local_e8->push_back(local_138);
                    }
                }
            }
            ++local_148;
        } while (true);
    }

    // 0x10085cfd0
    void TextureAtlas::SetSamplerState(const render::SamplerState* samplerState) {
        m_texture->SetSamplerState(*samplerState, false);
    }

    // 0x10085cff0
    uint32_t TextureAtlas::GetNumLoadingTextures() const {
        uint8_t auVar2[16];

        scoped_lock<std::recursive_mutex> local_30(*field_187808);
        auVar2 = ((m_formatTypeRequest + 8))->begin();
        __3* arg3 = (__3*)((m_formatTypeRequest + 8))->end();
        uint32_t uVar1 =
            eastl::count_if<eastl::hashtable_iterator<eastl::pair<int const, TextureAtlasTextureMapping>, true, false>,
                            TextureAtlas::GetNumLoadingTextures() const ::__3>(auVar2._0_8_, auVar2._8_8_, arg3);
        return uVar1;
    }

    // 0x10085d0e0
    uint32_t TextureAtlas::GetNumLoadingMaterials() const {
        uint8_t auVar2[16];

        scoped_lock<std::recursive_mutex> local_30(*field_187808);
        auVar2 = field_66024.begin();
        auto arg3 = field_66024.end();
        uint32_t uVar1 =
            eastl::count_if<eastl::hashtable_iterator<eastl::pair<int const, TextureAtlasMaterialMapping>, true, false>,
                            TextureAtlas::GetNumLoadingMaterials() const ::__4>(auVar2._0_8_, auVar2._8_8_, arg3);
        return uVar1;
    }

    // 0x10085d1d0
    void TextureAtlas::GetUsageMap(TextureAtlasUsageMap& textureAtlasUsageMap) const {
        unsigned int uVar2;
        int iVar3;
        int* piVar4;
        unsigned int* puVar5;
        int* piVar6;
        long lVar7;
        uint8_t* puVar8;
        unsigned long arg1;
        obj_iterator local_d0;
        obj_iterator local_c0;
        uint64_t local_a8;
        uint8_t local_a0[2][16];
        int local_58;
        int local_54;
        float local_50;
        float local_4c;
        ImVec4 local_48;
        float local_34;

        scoped_lock<std::recursive_mutex> local_78(*field_187808);
        auto local_70 = textureAtlasUsageMap.second();
        auto local_68 = textureAtlasUsageMap.SSOBeginPtr();
        auto local_80 = textureAtlasUsageMap.GetMaterial();
        local_a0->destruct<oldscape::highlight::NpcUID*>();
        map<int, shared_ptr<oldscape::dash3d::AnimBase>, eastl::less<int>, BucketAllocatorEASTL> local_100(*local_a0);
        TextureAtlas* local_60 = this;
        local_a0[0] = ((m_formatTypeRequest + 8))->begin();
        local_c0._0_16_ = ((m_formatTypeRequest + 8))->end();
        bool cVar1 = *local_a0 != local_c0;
        if (cVar1) {
            puVar8 = local_60->field_24;
            do {
                piVar4 = (int*)local_a0->HeapBeginPtr();
                uVar2 = puVar8->GetTextureSlotSize((unsigned int)*(unsigned short*)(piVar4 + 3));
                local_50 = (float)puVar8->GetSlotUVSize();
                local_50 = local_50 * (float)uVar2;
                local_34 = (float)*(unsigned short*)(piVar4 + 2);
                uVar2 = puVar8->GetAliveCount();
                local_34 = local_34 / (float)uVar2;
                local_4c = (float)*(unsigned short*)((long)piVar4 + 10);
                uVar2 = puVar8->GetAliveCount();
                local_48 = ImVec4(local_34, local_4c / (float)uVar2, local_50, local_50);
                if (*(char*)((long)piVar4 + 15) == '\x02') {
                    uVar2 = local_68->size();
                    puVar5 = &local_100[*piVar4];
                    *puVar5 = ~uVar2;
                    local_68->push_back(local_48);
                } else {
                    iVar3 = local_70->size();
                    piVar4 = &local_100[*piVar4];
                    *piVar4 = iVar3 + 1;
                    local_70->push_back(local_48);
                }
                ++*local_a0;
                cVar1 = *local_a0 != local_c0;
            } while (cVar1);
        }
        puVar8 = &local_60->field_66024;
        local_48._0_16_ = puVar8->begin();
        &local_d0 = (obj_iterator[16])puVar8->end();
        cVar1 = local_48 != local_d0;
        if (cVar1) {
            do {
                piVar4 = (int*)local_48.HeapBeginPtr();
                local_58 = *piVar4;
                local_c0 = eastl::vector<int, BucketAllocatorEASTL>();
                local_c0.reserve(3);
                arg1 = 0;
                do {
                    piVar6 = (int*)(*((piVar4 + 1)))[arg1];
                    local_54 = *piVar6;
                    if (local_54 != -1) {
                        *local_a0 = local_100.find(local_54);
                        local_a8 = local_100.end();
                        cVar1 = *local_a0 != local_a8;
                        if (cVar1) {
                            lVar7 = **local_a0;
                            local_c0.push_back(*((lVar7 + 4)));
                        }
                    }
                    arg1 = arg1 + 1;
                } while (arg1 != 3);
                *local_a0 = eastl::make_pair<int&, eastl::vector<int, BucketAllocatorEASTL>&>(local_58, local_c0);
                local_80->emplace_back<eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>>>(*local_a0);
                ++local_48;
                cVar1 = local_48 != local_d0;
            } while (cVar1);
        }
    }

    // 0x10085d920
    unsigned long TextureAtlas::GetDetailsAtPosition(int& arg1, int& arg2, int& arg3, unsigned int& arg4,
                                                     eastl::vector<eastl::pair<int, int>>& pairs, int arg6,
                                                     int arg7) const {
        int iVar1;
        unsigned int arg2_00;
        bool bVar2;
        uint8_t auVar3[16];
        uint8_t auVar4[16];
        uint8_t auVar5[16];
        uint8_t auVar6[16];
        bool cVar7;
        int* piVar10;
        int* piVar11;
        hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>* this_00;
        uint8_t local_78[16];
        uint64_t local_68;
        uint8_t local_50[16];
        int local_38;
        int local_34;

        unsigned int* local_60 = arg4;
        scoped_lock<std::recursive_mutex> local_40(*field_187808);
        uint8_t* puVar12 = field_24;
        TextureAtlas* local_58 = this;
        auto puVar8 = puVar12->SSOBeginPtr();
        arg1 = (unsigned int)arg6 / *puVar8;
        puVar8 = (unsigned int*)puVar12->SSOBeginPtr();
        arg2 = (unsigned int)arg7 / *puVar8;
        long lVar9 = puVar12->SSOBeginPtr();
        auVar6._8_8_ = local_50._8_8_;
        auVar6._0_8_ = local_50._0_8_;
        auVar5._8_8_ = local_50._8_8_;
        auVar5._0_8_ = local_50._0_8_;
        auVar4._8_8_ = local_78._8_8_;
        auVar4._0_8_ = local_78._0_8_;
        auVar3._8_8_ = local_78._8_8_;
        auVar3._0_8_ = local_78._0_8_;
        unsigned int arg1_00 = arg1;
        if (-1 < (int)arg1_00) {
            arg2_00 = arg2;
            this_00 = nullptr;
            if ((((int)arg2_00 < 0) || (local_78 = auVar3, local_50 = auVar5, *(int*)(lVar9 + 4) <= (int)arg1_00)) ||
                (local_78 = auVar4, local_50 = auVar6, *(int*)(lVar9 + 4) <= (int)arg2_00))
                goto LAB_10085dac0;
            piVar10 = (int*)puVar12->GetSlot(arg1_00, arg2_00);
            if (piVar10 != nullptr) {
                arg3 = *piVar10;
                *local_60 = (unsigned int)*(unsigned short*)(piVar10 + 1);
                if (arg3 != -1) {
                    puVar12 = &local_58->field_66024;
                    local_50 = puVar12->begin();
                    local_78 = puVar12->end();
                    cVar7 = *local_50 != *local_78;
                    if (cVar7) {
                        do {
                            piVar10 = (int*)local_50->HeapBeginPtr();
                            local_38 = *piVar10;
                            if (-1 < local_38) {
                                local_34 = 0;
                                do {
                                    piVar11 = (int*)(*((piVar10 + 1)))[(long)local_34];
                                    if (*piVar11 == arg3) {
                                        local_68 = eastl::make_pair<int, int&>(local_38, local_34);
                                        pairs.emplace_back<eastl::pair<int, int>>(local_68);
                                    }
                                    iVar1 = local_34 + 1;
                                    bVar2 = local_34 < 2;
                                    local_34 = iVar1;
                                } while (bVar2);
                            }
                            this_00 =
                                (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>,
                                                    false, false>*)local_50;
                            ++*this_00;
                            cVar7 = *this_00 != *local_78;
                        } while (cVar7);
                    }
                    this_00 =
                        (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false,
                                            false>*)(((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) |
                                                     (uint8_t)1);
                    goto LAB_10085dac0;
                }
            }
        }
        this_00 = nullptr;
    LAB_10085dac0:
        return (unsigned long)this_00 & 4294967295;
    }

    // 0x10085db60
    uint32_t TextureAtlas::CheckMaterialsFit(const WrapArray<MaterialInfo const>& wrapArray) {
        scoped_lock<std::recursive_mutex> local_28(*field_187808);
        uint32_t uVar1 = CheckMaterialsFitWorstCase(wrapArray);
        if ((char)uVar1 == '\0') {
            uVar1 = GetTextureSlots(nullptr, wrapArray);
        }
        return uVar1;
    }

    // 0x10085dbd0
    uint32_t TextureAtlas::CheckMaterialsFitWorstCase(const WrapArray<MaterialInfo const>& wrapArray) {
        int iVar2;
        int* piVar3;
        long lVar4;
        unsigned int* puVar5;
        uint32_t uVar6;
        unsigned long arg1;
        unsigned int uVar7;
        unsigned long arg1_00;
        unsigned int local_38;
        unsigned int local_34;

        scoped_lock<std::recursive_mutex> local_40(*field_187808);
        unsigned int uVar1 = wrapArray.HeapBeginPtr();
        if (uVar1 < 1344) {
            piVar3 = (int*)GetAtlasQuality();
            local_34 = *piVar3 << 2;
            if (uVar1 == 0) {
                uVar7 = 3;
            } else {
                uVar7 = 3;
                arg1 = 0;
                do {
                    lVar4 = wrapArray[arg1];
                    arg1_00 = 0;
                    do {
                        puVar5 = (unsigned int*)(*((lVar4 + 16)))[arg1_00];
                        local_38 = *puVar5;
                        if (local_38 != 0) {
                            puVar5 = std::max<unsigned int>(local_34, local_38);
                            local_34 = *puVar5;
                            uVar7 = uVar7 + 1;
                        }
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 != 3);
                    arg1 = arg1 + 1;
                } while (arg1 != uVar1);
            }
            iVar2 = field_24->GetGutteringSlotCount();
            piVar3 = (int*)GetAtlasQuality();
            local_34 = local_34 + iVar2 * *piVar3 * 2;
            iVar2 = field_24->GetMaxAtlasSlotCount();
            piVar3 = (int*)GetAtlasQuality();
            uVar1 = (unsigned int)(iVar2 * *piVar3) / local_34;
            uVar6 =
                (((uint32_t)((int32_t)((unsigned int)(iVar2 * *piVar3) >> 8)) << 8) | (uint8_t)(uVar7 < uVar1 * uVar1));
        } else {
            uVar6 = 0;
        }
        return uVar6;
    }

    // 0x10086aa70
    TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::~$_8() {
        field_16.~shared_ptr();
    }

    // 0x100870050
    void TextureAtlas::UploadDelayedMaterials()::$_1::operator()(render::RenderContext& renderContext) const {
        long lVar2;

        TextureAtlas* this_00 = field_0;
        SetMaterialSettingsTextureData(this_00, field_8, (TextureAtlasMaterialSettings*)field_12);
        scoped_lock<std::recursive_mutex> local_20(*this_00->field_187808);
        this_00->field_167824.erase(*((this + 1)));
        auto local_30 = this_00->field_66024.find(*((this + 1)));
        auto local_40 = this_00->field_66024.end();
        if (local_30 != local_40 != '\0') {
            lVar2 = local_30.HeapBeginPtr();
            *(uint8_t*)(lVar2 + 25) = 2;
        }
    }

    // 0x1008716b0
    TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::$_8($_8&& arg1) {
        field_8 = *(uint32_t*)(arg1 + 8);
        field_0 = *(TextureAtlas**)arg1;
        new (&field_16) shared_ptr((arg1 + 16));
        field_40 = *(uint32_t*)(arg1 + 40);
        field_32 = *(uint64_t*)(arg1 + 32);
    }

    // 0x100871730
    TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::$_8(const $_8& arg1) {
        field_8 = *(uint32_t*)(arg1 + 8);
        field_0 = *(TextureAtlas**)arg1;
        new (&field_16) shared_ptr((arg1 + 16));
        field_40 = *(uint32_t*)(arg1 + 40);
        field_32 = *(uint64_t*)(arg1 + 32);
    }

    // 0x100871790
    void TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::operator()(
        render::RenderContext& renderContext) const {
        long lVar2;

        TextureAtlas* this_00 = field_0;
        AddTextureData(this_00, (shared_ptr<TextureData>*)&field_16, (TextureAtlasTextureMapping*)&field_32);
        scoped_lock<std::recursive_mutex> local_20(*this_00->field_187808);
        auto local_30 = ((this_00->m_formatTypeRequest + 8))->find(field_8);
        auto local_40 = ((this_00->m_formatTypeRequest + 8))->end();
        if (local_30 != local_40 != '\0') {
            lVar2 = local_30.HeapBeginPtr();
            *(uint8_t*)(lVar2 + 15) = 2;
        }
    }

    // 0x100888930
    void ___cxx_global_var_init_117(void) {
        uint64_t local_40 = 6148914694099763200;
        new ((fixed_vector<unsigned char, 16ul>*)&TextureAtlas::m_initialisationData)
            eastl::fixed_vector<unsigned char, 16ul>(&local_40, *8);
        uint64_t local_48 = 6148914694099763200;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[7])
            eastl::fixed_vector<unsigned char, 16ul>(&local_48, *8);
        long lVar1 = 0;
        do {
            new ((fixed_vector<unsigned char, 16ul>*)(&reinterpret_cast<const uint64_t*>(&m_initialisationData)[14] +
                                                      lVar1)) eastl::fixed_vector<unsigned char, 16ul>();
            lVar1 = lVar1 + 56;
        } while (lVar1 != 168);
        uint16_t local_58 = 65535;
        uint32_t local_56 = 0;
        uint16_t local_52 = 0;
        uint64_t local_50 = 12297829383904690175;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[35])
            eastl::fixed_vector<unsigned char, 16ul>(&local_58, *16);
        uint64_t local_68 = 0;
        uint64_t local_60 = 12297829383904690175;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[42])
            eastl::fixed_vector<unsigned char, 16ul>(&local_68, *16);
        uint16_t local_78 = 33152;
        uint32_t local_76 = 0;
        uint32_t uStack_72 = 0;
        uint16_t local_6f = 57348;
        uint8_t local_6d = 3;
        uint32_t local_6c = 2863311530;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[49])
            eastl::fixed_vector<unsigned char, 16ul>(&local_78, *16);
        uint64_t local_88 = 0;
        uint64_t local_80 = 12297829379741845472;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[56])
            eastl::fixed_vector<unsigned char, 16ul>(&local_88, *16);
        uint64_t local_98 = 0;
        uint64_t uStack_90 = 0;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[63])
            eastl::fixed_vector<unsigned char, 16ul>(&local_98, *16);
        initializer_list<unsigned char> local_a8 = (initializer_list<unsigned char>)255;
        uint32_t local_a7 = 0;
        uint32_t uStack_a3 = 0;
        uint64_t local_a0 = 49871096;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[70])
            eastl::fixed_vector<unsigned char, 16ul>(&local_a8, *16);
        uint64_t local_b8 = 0;
        uint64_t local_b0 = 49871096;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[77])
            eastl::fixed_vector<unsigned char, 16ul>(&local_b8, *16);
        uint16_t local_c8 = 4096;
        uint32_t local_c6 = 0;
        uint16_t local_c2 = 0;
        uint64_t local_c0 = 18446744069414619272;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[84])
            eastl::fixed_vector<unsigned char, 16ul>(&local_c8, *16);
        uint64_t local_d8 = 2614781743216070911;
        uint64_t uStack_d0 = 281470715297792;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[91])
            eastl::fixed_vector<unsigned char, 16ul>(&local_d8, *16);
        uint64_t local_e8 = 0;
        uint32_t uStack_e1 = 0;
        uint8_t local_dd = 2;
        uint32_t local_dc = 4294967295;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[98])
            eastl::fixed_vector<unsigned char, 16ul>(&local_e8, *16);
        initializer_list<unsigned char> local_eb = (initializer_list<unsigned char>)255;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[105])
            eastl::fixed_vector<unsigned char, 16ul>(&local_eb, DAT_00000001);
        initializer_list<unsigned char> local_ea = (initializer_list<unsigned char>)255;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[112])
            eastl::fixed_vector<unsigned char, 16ul>(&local_ea, DAT_00000001);
        initializer_list<unsigned char> local_e9 = (initializer_list<unsigned char>)0;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[119])
            eastl::fixed_vector<unsigned char, 16ul>(&local_e9, DAT_00000001);
        lVar1 = 0;
        do {
            new ((fixed_vector<unsigned char, 16ul>*)(&reinterpret_cast<const uint64_t*>(&m_initialisationData)[126] +
                                                      lVar1)) eastl::fixed_vector<unsigned char, 16ul>();
            lVar1 = lVar1 + 56;
        } while (lVar1 != 112);
        uint16_t local_f1 = 65535;
        uint8_t local_ef = 255;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[140])
            eastl::fixed_vector<unsigned char, 16ul>(&local_f1, *3);
        uint16_t local_ee = 65535;
        uint8_t local_ec = 255;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[147])
            eastl::fixed_vector<unsigned char, 16ul>(&local_ee, *3);
        lVar1 = 0;
        do {
            new ((fixed_vector<unsigned char, 16ul>*)(&reinterpret_cast<const uint64_t*>(&m_initialisationData)[154] +
                                                      lVar1)) eastl::fixed_vector<unsigned char, 16ul>();
            lVar1 = lVar1 + 56;
        } while (lVar1 != 168);
        uint32_t local_fc = 4294967295;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[175])
            eastl::fixed_vector<unsigned char, 16ul>(&local_fc, *4);
        uint32_t local_108 = 16777215;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[182])
            eastl::fixed_vector<unsigned char, 16ul>(&local_108, *4);
        uint32_t local_104 = 2164228096;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[189])
            eastl::fixed_vector<unsigned char, 16ul>(&local_104, *4);
        uint32_t local_100 = 65280;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[196])
            eastl::fixed_vector<unsigned char, 16ul>(&local_100, *4);
        uint32_t local_f8 = 0;
        new ((fixed_vector<unsigned char, 16ul>*)&reinterpret_cast<const uint64_t*>(&m_initialisationData)[203])
            eastl::fixed_vector<unsigned char, 16ul>(&local_f8, *4);
        ___cxa_atexit(PTR__array_100ee6ee0, &TextureAtlas::m_initialisationData, 4294967296);
    }

} // namespace jag::graphics
