// libs/graphics/runetek7/materials/textures/TextureAtlas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextureAtlas.h"

namespace jag::graphics {
    // 0x100f43e20, 64 bytes, __data
    TextureAtlas::m_clearDataMutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43e60, 8 bytes, __data
    TextureAtlas::m_textureDataTypes = 16974336;

    // 0x100f43e68, 12 bytes, __data
    TextureAtlas::m_dummyTextureIDs = {-1, -2, -3};

    // 0x100f43e74, 12 bytes, __data
    TextureAtlas::m_loadingTextureIDs = {-4, -2, -3};

    // 0x103bbd560, 1680 bytes, __common; set at startup by ___cxx_global_var_init.117
    eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator> TextureAtlas::m_initialisationData[30] = {
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

    // 0x103bbdbf0, 720 bytes, __common; set at startup by ___cxx_global_var_init.119
    std::array<std::array<Array<unsigned char, eastl::allocator>, 5ul>, 6ul> TextureAtlas::m_clearData =
        array<std::array<Array<unsigned char, eastl::allocator>, 5ul>, 6ul>();

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int TextureAtlas::GetID() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    Callstack TextureAtlas::GetFormatTypeRequest() const;

    // 0x100856720, 608 bytes, base-object constructor, placed by class name and debug map
    // TextureAtlas::TextureAtlas(graphicutils::TextureAtlasQuality const&, graphicutils::TextureAtlasUsage const*, bool)
    void TextureAtlas::TextureAtlas(TextureAtlasQuality* param_1, TextureAtlasUsage* param_2, bool param_3) {
        recursive_mutex* prVar1;
        hash local_80[8];
        equal_to local_78[8];
        hash local_70[8];
        equal_to local_68[8];
        hash local_60[8];
        equal_to local_58[8];
        hash local_50[8];
        equal_to local_48[8];
        hash local_40[8];
        equal_to local_38[8];

        field_0 = &PTR__TextureAtlas_100f160e0;
        field_8 = (TextureManager*)0;
        m_iD = -1;
        new (field_24, param_1, param_2, param_3) graphicutils::TextureAtlasSlotPacker();
        new (m_formatTypeRequest) callstack::Callstack();
        new ((m_formatTypeRequest + 8), local_80, local_78)
            eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_33104, local_70, local_68)
            eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_66024, local_60, local_58)
            eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_115344, local_50, local_48)
            eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        field_164664 = 0;
        new (&m_texture, "TextureAtlas") render::Texture2D();
        new (&m_settingsTexture, "MaterialSettings") render::Texture2D();
        new (&field_165696) eastl::fixed_vector<unsigned int, 256ul, true, eastl::allocator>();
        new (&field_166760) eastl::fixed_vector<unsigned int, 256ul, true, eastl::allocator>();
        new (&field_167824, local_40, local_38)
            eastl::fixed_hash_map<int, TextureAtlasMaterialSettings, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        field_187792 = 0;
        std::make_unique<std::recursive_mutex>();
        prVar1 = (recursive_mutex*)
            std::unique_ptr<std::recursive_mutex, std::default_delete<std::recursive_mutex>>::operator*(
                (unique_ptr<std::recursive_mutex, std::default_delete<std::recursive_mutex>>*)&field_187800);
        field_187808 = prVar1;
        new (&field_187816) eastl::fixed_list<std::future<void>, 128ul, true, eastl::allocator>();
        CommonConstructor(this);
    }

    // 0x100856a30, 624 bytes, placed by class name and debug map
    // TextureAtlas::CommonConstructor()
    void TextureAtlas::CommonConstructor() {
        int* piVar1;
        TextureAtlasSlotPacker* this_00;
        TextureAtlas* pTVar2;
        uint uVar3;
        int iVar4;
        vector* pvVar5;
        uint* puVar6;
        undefined1* puVar7;
        undefined1* puVar8;
        type* in_RSI;
        uint uVar9;
        ulong uVar10;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined1 local_a0[32];
        TextureAtlasSlotPacker* local_80;
        TextureAtlas* local_78;
        undefined1 local_70[24];
        uint local_58[7];
        int local_3c;
        uint local_38;
        undefined4 local_34;

        InitialiseFormatTypeRequests(this);
        puVar8 = field_24;
        iVar4 = puVar8->GetGutteringSlotCount();
        local_80 = (TextureAtlasSlotPacker*)puVar8;
        pvVar5 = puVar8->SSOBeginPtr(in_RSI);
        local_38 = *(int*)pvVar5 << 2;
        local_3c = iVar4 * 2 + 4;
        local_b8 = 18446744069414584319;
        uStack_b0 = 18446744060824649725;
        local_a0._24_8_ = m_formatTypeRequest + 8;
        uVar9 = 0;
        uVar10 = 0;
        local_78 = this;
        do {
            new (local_70) ImGuiTableColumnSortSpecs();
            uVar3 = local_38;
            local_70->Initialise(uVar9, 0, local_38, false, true);
            local_70[11] = 2;
            puVar6 = (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_b8, uVar10);
            eastl::hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                             eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                             eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::emplace<int&,
                                                                                     TextureAtlasTextureMapping&>(
                (int*)local_a0, (TextureAtlasTextureMapping*)local_a0._24_8_);
            this_00 = local_80;
            local_a0->AllocSlot2D((uint)local_80);
            this_00->AddAtlasSlotData(false, *puVar6, uVar3, local_a0);
            uVar10 = uVar10 + 1;
            uVar9 = uVar9 + local_3c;
        } while (uVar10 != 4);
        new (local_a0) TextureAtlasMaterialMapping();
        local_a0->Initialise((array*)&m_dummyTextureIDs, 0);
        pTVar2 = local_78;
        local_a0._20_2_ = 512;
        puVar8 = &local_78->field_66024;
        local_58[0] = 4294967295;
        eastl::hashtable<int, eastl::pair<int const, TextureAtlasMaterialMapping>,
                         eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, TextureAtlasMaterialMapping>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true,
                         true>::emplace<int, TextureAtlasMaterialMapping&>((int*)local_70,
                                                                           (TextureAtlasMaterialMapping*)puVar8);
        new (local_70) TextureAtlasMaterialMapping();
        local_70->Initialise((array*)&m_loadingTextureIDs, 1);
        local_70._20_2_ = 512;
        local_34 = 4294967294;
        eastl::hashtable<int, eastl::pair<int const, TextureAtlasMaterialMapping>,
                         eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, TextureAtlasMaterialMapping>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true,
                         true>::emplace<int, TextureAtlasMaterialMapping&>((int*)local_58,
                                                                           (TextureAtlasMaterialMapping*)puVar8);
        local_a0->Initialise((array*)&m_dummyTextureIDs, 2);
        local_a0._20_2_ = 512;
        local_34 = 4294967293;
        eastl::hashtable<int, eastl::pair<int const, TextureAtlasMaterialMapping>,
                         eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, TextureAtlasMaterialMapping>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true,
                         true>::emplace<int, TextureAtlasMaterialMapping&>((int*)local_58,
                                                                           (TextureAtlasMaterialMapping*)puVar8);
        local_70->Initialise((array*)&m_loadingTextureIDs, 3);
        local_70._20_2_ = 512;
        local_34 = 4294967292;
        eastl::hashtable<int, eastl::pair<int const, TextureAtlasMaterialMapping>,
                         eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, TextureAtlasMaterialMapping>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true,
                         true>::emplace<int, TextureAtlasMaterialMapping&>((int*)local_58,
                                                                           (TextureAtlasMaterialMapping*)puVar8);
        puVar8 = &pTVar2->field_186448;
        local_58[0] = local_58[0] & 4294967040;
        puVar8->fill(local_58);
        puVar7 = (undefined1*)std::array<bool, 1344ul>::operator[]((array<bool, 1344ul>*)puVar8, 0);
        *puVar7 = 1;
        puVar7 = (undefined1*)std::array<bool, 1344ul>::operator[]((array<bool, 1344ul>*)puVar8, 1);
        *puVar7 = 1;
        puVar7 = (undefined1*)std::array<bool, 1344ul>::operator[]((array<bool, 1344ul>*)puVar8, 2);
        *puVar7 = 1;
        puVar8 = (undefined1*)std::array<bool, 1344ul>::operator[]((array<bool, 1344ul>*)puVar8, 3);
        *puVar8 = 1;
        piVar1 = &pTVar2->field_187792;
        *piVar1 = *piVar1 + 4;
    }

    // 0x100856ce0, 16 bytes, complete-object constructor, placed by class name and debug map
    // TextureAtlas::TextureAtlas(graphicutils::TextureAtlasQuality const&, graphicutils::TextureAtlasUsage const*, bool): jumps straight to the base-object constructor

    // 0x100856cf0, 720 bytes, base-object constructor, placed by class name and debug map
    // TextureAtlas::TextureAtlas(TextureManager&, int, std::recursive_mutex&, graphicutils::TextureAtlasUsage const*)
    /* TextureAtlas::TextureAtlas(TextureManager&, int,
   std::recursive_mutex&, graphicutils::TextureAtlasUsage const*) */

    void TextureAtlas::TextureAtlas(TextureManager* param_1, int param_2, recursive_mutex* param_3,
                                    TextureAtlasUsage* param_4) {
        TextureAtlasManager* this_00;
        long lVar1;
        hash local_90[8];
        equal_to local_88[8];
        hash local_80[8];
        equal_to local_78[8];
        hash local_70[8];
        equal_to local_68[8];
        hash local_60[8];
        equal_to local_58[8];
        hash local_50[8];
        equal_to local_48[8];
        AutoSingleton<ShaderThreadPoolSingleton> local_40[8];
        ScopedGPUMemoryZone local_38[8];

        field_0 = &PTR__TextureAtlas_100f160e0;
        field_8 = param_1;
        m_iD = param_2;
        this_00 = (TextureAtlasManager*)param_1->GetTextureAtlasManager();
        lVar1 = this_00->GetSettings();
        new (field_24, (TextureAtlasQuality*)(lVar1 + 144), param_4, false) graphicutils::TextureAtlasSlotPacker();
        new (m_formatTypeRequest) callstack::Callstack();
        new ((m_formatTypeRequest + 8), local_90, local_88)
            eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_33104, local_80, local_78)
            eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_66024, local_70, local_68)
            eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_115344, local_60, local_58)
            eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        field_164664 = 0;
        new (&m_texture, "TextureAtlas") render::Texture2D();
        new (&m_settingsTexture, "MaterialSettings") render::Texture2D();
        new (&field_165696) eastl::fixed_vector<unsigned int, 256ul, true, eastl::allocator>();
        new (&field_166760) eastl::fixed_vector<unsigned int, 256ul, true, eastl::allocator>();
        new (&field_167824, local_50, local_48)
            eastl::fixed_hash_map<int, TextureAtlasMaterialSettings, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        field_187792 = 0;
        std::unique_ptr<std::recursive_mutex, std::default_delete<std::recursive_mutex>>::unique_ptr<true, void>(
            (unique_ptr<std::recursive_mutex, std::default_delete<std::recursive_mutex>>*)&field_187800);
        field_187808 = param_3;
        new (&field_187816) eastl::fixed_list<std::future<void>, 128ul, true, eastl::allocator>();
        local_40->~AutoSingleton("Texture_Atlas");
        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_38, "TextureAtlas");
        CommonConstructor(this);
        CreateRenderingResources(this);
        local_38->~ScopedGPUMemoryZone();
    }

    // 0x100857000, 672 bytes, placed by class name
    // TextureAtlas::CreateRenderingResources()
    void TextureAtlas::CreateRenderingResources() {
        array<int, 3ul>* this_00;
        undefined1* puVar1;
        int iVar2;
        bool bVar3;
        undefined4* puVar5;
        int* piVar6;
        undefined8 uVar7;
        int* piVar8;
        long lVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* phVar10;
        hashtable_iterator_base* extraout_RDX_03;
        TextureAtlas* pTVar11;
        eastl local_98[16];
        hashtable_iterator_base local_88[16];
        hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false> local_78[16];
        hashtable_iterator_base local_68[16];
        undefined4* local_58;
        fixed_hash_map* local_50;
        scoped_lock<std::recursive_mutex> local_48[8];
        TextureAtlas* local_40;
        int local_34;

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_48, field_187808);
        InitialiseFormatTypeRequests(this);
        puVar5 = (undefined4*)GetWorld();
        CreateAtlasTextures(this, &m_texture, &m_settingsTexture, *puVar5, 0);
        UpdateMaterials(this);
        local_40 = this;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar10 = extraout_RDX;
        while (bVar3 = eastl::operator!=((eastl*)local_78, local_68, phVar10), pTVar11 = local_40, bVar3) {
            piVar6 = (int*)local_78->HeapBeginPtr();
            iVar2 = *piVar6;
            if ((-1 < iVar2) && (*(undefined1*)((long)piVar6 + 15) = 0, piVar6[1] < 1)) {
                uVar7 = logger::default_logger();
                logger::Logger::Log(uVar7, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureAtlas.cpp",
                                    1599, "TextureAtlas load-queuing unreferenced texture ID %d (ref count: %d)", iVar2,
                                    piVar6[1]);
            }
            eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(local_78);
            phVar10 = extraout_RDX_00;
        }
        local_40->field_164664 = 1;
        puVar1 = &local_40->field_66024;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_50 = (fixed_hash_map*)puVar1;
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar10 = extraout_RDX_01;
        while (true) {
            bVar3 = eastl::operator!=((eastl*)local_78, local_68, phVar10);
            if (!bVar3)
                break;
            local_58 = (undefined4*)local_78->HeapBeginPtr();
            this_00 = (array<int, 3ul>*)(local_58 + 1);
            piVar6 = (int*)std::array<int, 3ul>::begin(this_00);
            piVar8 = (int*)std::array<int, 3ul>::end(this_00);
            for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
                local_34 = *piVar6;
                if (-1 < local_34) {
                    eastl::hashtable<
                        int,
                        eastl::pair<int const,
                                    std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                    std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<
                            int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)local_98);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar3 = eastl::operator==(local_98, local_88, extraout_RDX_03);
                    if ((bVar3) ||
                        (lVar9 = eastl::hash_map<
                             int, TextureAtlasTextureMapping, eastl::hash<int>, eastl::equal_to<int>,
                             eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                             false>::operator[]((hash_map<int, TextureAtlasTextureMapping, eastl::hash<int>,
                                                          eastl::equal_to<int>,
                                                          eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul,
                                                                                           0ul, true, eastl::allocator>,
                                                          false>*)(m_formatTypeRequest + 8),
                                                &local_34),
                         *(char*)(lVar9 + 11) != '\0')) {
                        uVar7 = logger::default_logger();
                        logger::Logger::Log(uVar7, 0, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/materials/textures/TextureAtlas.cpp",
                                            1617,
                                            "TextureAtlas material ID %d has not load-queued texture ID %d as expected",
                                            *local_58, local_34);
                    }
                }
            }
            eastl::hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>::
            operator++(
                (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>*)
                    local_78);
            phVar10 = extraout_RDX_02;
            pTVar11 = local_40;
        }
        if (this_thread::IsMainThread() != '\0') {
            eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>::
            operator=((fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>*)&pTVar11->field_33104,
                      (fixed_hash_map*)(m_formatTypeRequest + 8));
            eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>::
            operator=((fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>*)&pTVar11->field_115344,
                      local_50);
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_48);
    }

    // 0x1008572a0, 16 bytes, complete-object constructor, placed by class name
    // TextureAtlas::TextureAtlas(TextureManager&, int, std::recursive_mutex&, graphicutils::TextureAtlasUsage const*): jumps straight to the base-object constructor

    // 0x1008572b0, 336 bytes, base-object destructor, placed by class name
    // TextureAtlas::~TextureAtlas()
    void TextureAtlas::~TextureAtlas() {
        field_0 = &PTR__TextureAtlas_100f160e0;
        DestroyRenderingResources(this);
        (&field_187816)->~fixed_list();
        (&field_187800)->~unique_ptr();
        (&field_167824)->~fixed_hash_map();
        (&field_166760)->~fixed_vector();
        (&field_165696)->~fixed_vector();
        (&m_settingsTexture)->~Texture2D();
        (&m_texture)->~Texture2D();
        (&field_115344)->~fixed_hash_map();
        (&field_66024)->~fixed_hash_map();
        (&field_33104)->~fixed_hash_map();
        ((m_formatTypeRequest + 8))->~fixed_hash_map();
        field_24->~TextureAtlasSlotPacker();
    }

    // 0x100857400, 272 bytes, placed by class name
    // TextureAtlas::DestroyRenderingResources()
    void TextureAtlas::DestroyRenderingResources() {
        undefined1* this_00;
        char cVar1;
        undefined4 local_34;
        duration local_30[8];

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            if (m_iD != -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_id == ATLAS_ID_VIRTUAL",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          1651, (char*)0);
            }
        } else {
            this_00 = &field_187816;
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                do {
                    local_34 = 500;
                    std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)local_30,
                                                                                                 (type*)&local_34);
                    std::this_thread::sleep_for(local_30);
                    new (local_30) std::scoped_lock<std::recursive_mutex>(field_187808);
                    eastl::list<std::future<void>,
                                eastl::fixed_node_allocator<24ul, 128ul, 8ul, 0ul, true, eastl::allocator>>::
                        remove_if<TextureAtlas::DestroyRenderingResources()::__2>(this_00);
                    local_30->~scoped_lock();
                    cVar1 = this_00->empty();
                } while (cVar1 == '\0');
            }
            new (local_30) std::scoped_lock<std::recursive_mutex>(field_187808);
            (&m_texture)->Destroy();
            (&m_settingsTexture)->Destroy();
            local_30->~scoped_lock();
        }
    }

    // 0x100857510, 16 bytes, complete-object destructor, placed by class name
    // TextureAtlas::~TextureAtlas(): jumps straight to the base-object destructor

    // 0x100857520, 32 bytes, deleting destructor, placed by class name
    // TextureAtlas::~TextureAtlas()
    void TextureAtlas::~TextureAtlas() {
        ~TextureAtlas(this);
        operator_delete(this);
    }

    // 0x100857540, 480 bytes, placed by class name
    // TextureAtlas::CreateAtlasTextures(render::Texture2D&, render::Texture2D&, render::TextureFormatBitSet, TextureAtlasInitialisationMode)
    undefined4 TextureAtlas::CreateAtlasTextures(TextureAtlas* param_1, Texture2D* param_2, Texture2D* param_3,
                                                 TextureFormatBitSet param_4) {
        char cVar1;
        uint uVar2;
        undefined4 uVar3;
        uchar* puVar4;
        long lVar5;
        Texture2D* pTVar6;
        uint local_58;
        uint local_54;
        Callstack local_50;
        eastl local_40[8];
        TextureFormatBitSet local_38[2];

        local_38[0].m_bits = param_4.m_bits;
        eastl::destruct<oldscape::highlight::NpcUID*>(local_40, (NpcUID*)"TextureAtlas::CreateAtlasTextures",
                                                      (NpcUID*)param_3);
        cVar1 = local_38->IsValid();
        if (cVar1 == '\0') {
            uVar3 = 0;
        } else {
            uVar2 = param_1->field_24->GetTextureResolution();
            cVar1 = local_38->IsUncompressed();
            if ((cVar1 == '\0') && ((uVar2 & 3) != 0)) {
                /* WARNING: Subroutine does not return */
                LogAssert("textureResolution % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          199,
                          "TextureAtlas: Cannot construct block compression atlas, atlas dimensions not divisible by 4 "
                          "(%d x %d)",
                          (ulong)uVar2, (ulong)uVar2);
            }
            new (&local_50) callstack::Callstack();
            local_50.AddFormatType(5);
            std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::unique_ptr<true, void>(
                (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)&local_50.field_8);
            GetMippedPixelCount(param_1, &local_58, &local_54, local_38[0], uVar2);
            puVar4 = (uchar*)local_50.field_8.get();
            pTVar6 = param_2;
            graphicutils::CreateHALTexture2D<render::Texture2D>(param_2, uVar2, uVar2, puVar4, local_58, 0,
                                                                1 < local_58, true, false, local_38[0], local_54);
            lVar5 = pTVar6->Instance();
            (*(code*)param_2->field_0[3])(param_2, lVar5 + 464, 0);
            GenerateDummyTextureData(param_1, param_2);
            pTVar6 = param_3;
            graphicutils::CreateHALTexture2D<render::Texture2D>(param_3, 128, 128, (uchar*)0, 1, 0, false, false, false,
                                                                (TextureFormatBitSet)local_50.m_stackFrames, 0);
            lVar5 = pTVar6->Instance();
            (*(code*)param_3->field_0[3])(param_3, lVar5 + 80, 1);
            GenerateDummyMaterialSettings(param_1);
            uVar3 = param_2->IsCreated();
            local_50.field_8.~unique_ptr();
        }
        return uVar3;
    }

    // 0x1008577b0, 336 bytes, placed by class name
    // TextureAtlas::GetMippedPixelCount(unsigned int&, unsigned int&, render::TextureFormatBitSet, unsigned int)
    int TextureAtlas::GetMippedPixelCount(uint* param_1, uint* param_2, TextureFormatBitSet param_3, uint param_4) {
        byte bVar1;
        uint uVar3;
        undefined8 in_RAX;
        MapArea* this_00;
        long lVar4;
        vector* pvVar5;
        uint* puVar6;
        type* ptVar7;
        int iVar8;
        undefined8 local_38;

        local_38 = CONCAT44((int)((ulong)in_RAX >> 32), param_3.m_bits);
        *param_1 = 0;
        ptVar7 = (type*)param_1;
        bVar1 = local_38.IsUncompressed();
        uVar3 = (uint)(bVar1 ^ 1) * 3 + 1;
        iVar8 = 0;
        if (uVar3 <= param_4) {
            iVar8 = 0;
            do {
                if ((param_4 & (uint)(bVar1 ^ 1) * 3) != 0)
                    break;
                *param_1 = *param_1 + 1;
                iVar8 = iVar8 + param_4 * param_4;
                param_4 = param_4 >> 1;
            } while (uVar3 <= param_4);
        }
        if (((Singleton<render::RenderDevice>*)&local_38)->IsCompressed() != '\0') {
            *param_1 = *param_1 + 2;
            iVar8 = iVar8 + 32;
        }
        this_00 = (MapArea*)local_38.Instance();
        lVar4 = this_00->GetOrigin();
        if ((*(char*)(lVar4 + 175) == '\0') && ((*(char*)(lVar4 + 174) == '\0' || (*(char*)(lVar4 + 177) != '\0')))) {
            if (*(char*)(lVar4 + 177) == '\0') {
                uVar3 = 1;
            } else {
                pvVar5 = (field_24, ptVar7)->SSOBeginPtr();
                ptVar7 = (type*)(local_38 & 4294967295);
                uVar3 = pvVar5->GetMaxMipLevels(local_38._0_4_);
            }
        } else {
            pvVar5 = (field_24, ptVar7)->SSOBeginPtr();
            ptVar7 = (type*)(local_38 & 4294967295);
            uVar3 = pvVar5->GetMaxGradMipLevels(local_38._0_4_);
        }
        *param_2 = uVar3;
        if (1 < uVar3) {
            pvVar5 = (field_24, ptVar7)->SSOBeginPtr();
            if (uVar3 <= *(uint*)(pvVar5 + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("sampleMipCountOut > m_slotPacker.GetAtlasQuality().m_topLevelMip",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          913, (char*)0);
            }
            pvVar5 = (field_24, ptVar7)->SSOBeginPtr();
            *param_2 = *param_2 - *(int*)(pvVar5 + 32);
        }
        puVar6 = std::min<unsigned int>(param_2, param_1);
        *param_2 = *puVar6;
        return iVar8;
    }

    // 0x100857910, 208 bytes, placed by class name
    // TextureAtlas::GenerateDummyTextureData(render::Texture2D&)
    void TextureAtlas::GenerateDummyTextureData(Texture2D* param_1) {
        undefined1 uVar1;
        uint uVar2;
        int iVar3;
        uint* puVar4;
        undefined4* puVar5;
        undefined1* puVar6;
        vector* pvVar7;
        ulong uVar8;
        Texture2D* pTVar9;
        int iVar10;
        uint local_40;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        iVar3 = field_24->GetGutteringSlotCount();
        local_40 = 4;
        local_3c = 5;
        pTVar9 = (Texture2D*)&local_3c;
        puVar4 = std::min<unsigned int>(&local_40, (uint*)pTVar9);
        uVar2 = *puVar4;
        if ((ulong)uVar2 != 0) {
            iVar3 = iVar3 * 2 + 4;
            iVar10 = 0;
            uVar8 = 0;
            local_34 = iVar3;
            do {
                puVar5 = (undefined4*)GetWorld();
                local_38 = *puVar5;
                puVar6 = (undefined1*)std::array<TextureAtlasInitialisationMode, 5ul>::operator[](uVar8);
                uVar1 = *puVar6;
                pvVar7 = (field_24, (type*)pTVar9)->SSOBeginPtr();
                pTVar9 = param_1;
                ClearSubSection(this, param_1, local_38, uVar1, iVar10, 0, *(int*)pvVar7 * iVar3);
                uVar8 = uVar8 + 1;
                iVar10 = iVar10 + iVar3;
            } while (uVar2 != uVar8);
        }
    }

    // 0x1008579e0, 672 bytes, placed by class name
    // TextureAtlas::GenerateDummyMaterialSettings()
    void TextureAtlas::GenerateDummyMaterialSettings() {
        byte bVar1;
        uchar uVar2;
        TextureAtlasMaterialSettings local_4c0;
        TextureAtlasMaterialSettings local_488;
        TextureAtlasMaterialSettings local_450;
        TextureAtlasMaterialSettings local_418;
        array local_3e0[12];
        uint local_3d4;
        array local_3d0[8];
        array local_3c8[8];
        array local_3c0[8];
        Material local_3b8;
        Material local_2d8;
        Material local_1f8;
        Material local_118;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = field_24->GetGutteringSlotCount();
        new (&local_118) Material();
        local_118.InitialiseDummy(false);
        new (&local_4c0) TextureAtlasMaterialSettings();
        local_4c0.Initialise(&local_118);
        local_3d4 = (uint)bVar1;
        GetTextureSlotData(this, local_3e0, local_3d0, local_3c8, local_3c0, bVar1, -1);
        local_4c0.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(this, 0, &local_4c0);
        new (&local_1f8) Material();
        local_1f8.InitialiseLoading(false);
        new (&local_450) TextureAtlasMaterialSettings();
        local_450.Initialise(&local_1f8);
        uVar2 = (uchar)local_3d4;
        GetTextureSlotData(this, local_3e0, local_3d0, local_3c8, local_3c0, uVar2, -2);
        local_450.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(this, 1, &local_450);
        new (&local_2d8) Material();
        local_2d8.InitialiseDummy(true);
        new (&local_418) TextureAtlasMaterialSettings();
        local_418.Initialise(&local_2d8);
        GetTextureSlotData(this, local_3e0, local_3d0, local_3c8, local_3c0, uVar2, -3);
        local_418.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(this, 2, &local_418);
        new (&local_3b8) Material();
        local_3b8.InitialiseLoading(true);
        new (&local_488) TextureAtlasMaterialSettings();
        local_488.Initialise(&local_3b8);
        GetTextureSlotData(this, local_3e0, local_3d0, local_3c8, local_3c0, uVar2, -4);
        local_488.SetTextureSlots(local_3c8, local_3c0, local_3d0);
        SetMaterialSettingsTextureData(this, 3, &local_488);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100857c90, 496 bytes, placed by class name
    // TextureAtlas::GenerateAtlasBackingData(std::unique_ptr<unsigned char [], std::default_delete<unsigned char []> >&, unsigned int&, unsigned int, render::TextureFormatBitSet, TextureAtlasInitialisationMode)
    /* TextureAtlas::GenerateAtlasBackingData(std::unique_ptr<unsigned char [],
   std::default_delete<unsigned char []> >&, unsigned int&, unsigned int,
   render::TextureFormatBitSet, TextureAtlasInitialisationMode) */

    void
    TextureAtlas::GenerateAtlasBackingData(unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* param_1,
                                           uint* param_2, uint param_3, TextureFormatBitSet param_4, uint param_6) {
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>* this_00;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>* this_01;
        long lVar5;
        void* pvVar6;
        ulong uVar7;
        ulong uVar8;
        unique_ptr local_50[8];
        uint local_48;
        uint local_44;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* local_40;
        TextureFormatBitSet local_38[2];

        local_40 = param_1;
        local_38[0].m_bits = param_4.m_bits;
        if (m_iD == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_id != ATLAS_ID_VIRTUAL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      242, (char*)0);
        }
        iVar3 = GetMippedPixelCount(this, &local_48, &local_44, param_4, param_3);
        uVar7 = 0;
        do {
            cVar1 = local_38->HasFormatType(uVar7 & 4294967295);
            if (cVar1 != '\0') {
                iVar4 = local_38->GetBitsPerPixel();
                if ((iVar4 * iVar3 & 7U) != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("bitCount % 8 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              254, (char*)0);
                }
                *param_2 = (uint)(iVar4 * iVar3) >> 3;
                std::make_unique<unsigned char[]>((ulong)local_50);
                std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::operator=(local_40, local_50);
                local_50->~unique_ptr();
                this_00 = (array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>*)
                    std::array<std::array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>,
                               6ul>::operator[](uVar7);
                this_01 =
                    (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)
                        std::array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>::operator[](
                            this_00, (ulong)(param_6 & 255));
                uVar7 = eastl::vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                   eastl::allocator>>::size(this_01);
                if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("initDataSize > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              261, "Texture initialisation data not implemented for this format combination.");
                }
                if ((*param_2 < uVar7) || ((ulong)*param_2 % uVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("initDataSize <= outByteLength && outByteLength % initDataSize == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              262, "Texture initialisation data does not fit.");
                }
                if (*param_2 != 0) {
                    uVar8 = 0;
                    do {
                        lVar5 = std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(local_40);
                        pvVar6 = (void*)eastl::vector<
                            unsigned char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<unsigned char,
                                           eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>*)
                                       this_01,
                                   0);
                        _memcpy((void*)(lVar5 + uVar8), pvVar6, uVar7);
                        uVar8 = uVar8 + uVar7;
                    } while (uVar8 < *param_2);
                }
                break;
            }
            uVar7 = uVar7 + 1;
        } while ((int)uVar7 != 6);
        bVar2 = local_40->operator_cast_to_bool();
        if (bVar2) {
            return;
        }
        *param_2 = 0;
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "materials/textures/TextureAtlas.cpp",
                        278, (char*)0);
    }

    // 0x100858030, 304 bytes, placed by class name
    // TextureAtlas::InitialiseFormatTypeRequests()
    void TextureAtlas::InitialiseFormatTypeRequests() {
        undefined1* this_00;
        undefined1* this_01;
        undefined* puVar2;
        MapArea* pMVar3;
        long lVar4;
        undefined8 uVar5;
        Singleton<render::RenderDevice>* this_03;

        this_01 = m_formatTypeRequest;
        new (this_01) callstack::Callstack();
        this_00 = field_24;
        puVar2 = (undefined*)this_00->GetAuthWrapper();
        if (puVar2 != graphicutils::TextureAtlasUsage::USAGE_COMPRESSED) {
            puVar2 = (undefined*)this_00->GetAuthWrapper();
            if (puVar2 != graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_slotPacker.GetAtlasUsage() == graphicutils::TextureAtlasUsage::USAGE_COMPRESSED || "
                          "m_slotPacker.GetAtlasUsage() == graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          287, (char*)0);
            }
        }
        puVar2 = (undefined*)this_00->GetAuthWrapper();
        if (puVar2 != graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED) {
            if (GetUseCompressedTextures(this) != '\0') {
                pMVar3 = (MapArea*)((TextureAtlas*)this)->Instance();
                lVar4 = pMVar3->GetOrigin();
                if (*(char*)(lVar4 + 161) == '\0') {
                    pMVar3 = (MapArea*)pMVar3->Instance();
                    lVar4 = pMVar3->GetOrigin();
                    if (*(char*)(lVar4 + 162) == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/textures/TextureAtlas.cpp",
                                        307, (char*)0);
                    }
                    uVar5 = 2;
                } else {
                    uVar5 = 1;
                }
                goto LAB_1008580de;
            }
        }
        uVar5 = 5;
    LAB_1008580de:
        this_03 = (Singleton<render::RenderDevice>*)this_01;
        this_01->AddFormatType(uVar5);
        if (m_iD != -1) {
            pMVar3 = (MapArea*)this_03->Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 147) != '\0') {
                this_01->AddFormatType(7);
            }
        }
    }

    // 0x100858160, 48 bytes, placed by class name
    // TextureAtlas::GetUseCompressedTextures() const
    void TextureAtlas::GetUseCompressedTextures() {
        if (field_8 == (TextureManager*)0) {
            field_24->IsReadyAnim();
            return;
        }
        field_8->UseCompressedTextures();
    }

    // 0x100858390, 768 bytes, placed by class name
    // TextureAtlas::ClearSubSection(render::Texture2D&, render::TextureFormatBitSet, TextureAtlasInitialisationMode, unsigned int, unsigned int, unsigned int)
    void TextureAtlas::ClearSubSection(Texture2D* param_1, TextureFormatBitSet param_2, byte param_4, int param_5,
                                       int param_6, uint param_7) {
        undefined1 uVar1;
        TextureAtlas* this_00;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        array<Array<unsigned char, eastl::allocator>, 5ul>* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        ulong uVar6;
        array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>* this_03;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>* this_04;
        ulong uVar7;
        undefined1* puVar8;
        vector* pvVar9;
        void* pvVar10;
        uint uVar11;
        ulong uVar12;
        type* ptVar13;
        uint uVar14;
        uint local_74;
        Texture2D* local_70;
        TextureAtlas* local_68;
        scoped_lock<std::mutex> local_60[12];
        uint local_54;
        int local_50;
        int local_4c;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;
        ulong local_40;
        TextureFormatBitSet local_38[2];

        local_70 = param_1;
        local_50 = param_5;
        local_38[0].m_bits = param_2.m_bits;
        if (m_iD == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_id != ATLAS_ID_VIRTUAL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      800, (char*)0);
        }
        local_68 = this;
        iVar4 = GetMippedPixelCount(this, &local_54, &local_74, param_2, param_7);
        uVar12 = 0;
        while (cVar2 = local_38->HasFormatType(uVar12 & 4294967295), cVar2 == '\0') {
            uVar12 = uVar12 + 1;
            if ((int)uVar12 == 6) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureAtlas.cpp",
                                863, (char*)0);
            }
        }
        iVar5 = local_38->GetBitsPerPixel();
        if ((iVar5 * iVar4 & 7U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("bitCount % 8 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      827, (char*)0);
        }
        uVar7 = (ulong)((uint)(iVar5 * iVar4) >> 3);
        local_4c = param_6;
        std::scoped_lock<std::mutex>::scoped_lock(local_60, (mutex*)&m_clearDataMutex);
        this_01 = (array<Array<unsigned char, eastl::allocator>, 5ul>*)
            std::array<std::array<Array<unsigned char, eastl::allocator>, 5ul>, 6ul>::operator[](uVar12);
        ptVar13 = (type*)(ulong)param_4;
        this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            std::array<Array<unsigned char, eastl::allocator>, 5ul>::operator[](this_01, (ulong)ptVar13);
        uVar6 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
        local_48 = this_02;
        local_40 = uVar7;
        this_02->set_min_size(uVar7, 7);
        this_03 = (array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>*)std::array<
            std::array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>, 6ul>::operator[](uVar12);
        this_04 = (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)
            std::array<eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>, 5ul>::operator[](
                this_03, (ulong)ptVar13);
        uVar12 =
            eastl::vector<unsigned char,
                          eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::size(this_04);
        if (uVar12 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("initDataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      840, "Texture initialisation data not implemented for this format combination.");
        }
        if ((local_40 < uVar12) || (local_40 % uVar12 != 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("initDataSize <= byteLength && byteLength % initDataSize == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      841, "Texture initialisation data does not fit.");
        }
        uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_48);
        if (uVar7 < local_40) {
            /* WARNING: Subroutine does not return */
            LogAssert("clearData.max_size() >= byteLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      842, (char*)0);
        }
        if (uVar6 % uVar12 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("prevSize % initDataSize == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      843, (char*)0);
        }
        for (; this_00 = local_68, uVar6 < local_40; uVar6 = uVar6 + uVar12) {
            if (uVar12 != 0) {
                uVar7 = 0;
                do {
                    puVar8 = (undefined1*)eastl::vector<
                        unsigned char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>*)this_04,
                        uVar7);
                    uVar1 = *puVar8;
                    ptVar13 = (type*)(uVar6 + uVar7);
                    puVar8 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)local_48, (ulong)ptVar13);
                    *puVar8 = uVar1;
                    uVar7 = uVar7 + 1;
                } while (uVar12 != uVar7);
            }
        }
        puVar8 = local_68->field_24;
        pvVar9 = puVar8->SSOBeginPtr(ptVar13);
        uVar14 = local_50 * *(int*)pvVar9;
        pvVar9 = puVar8->SSOBeginPtr(ptVar13);
        uVar11 = local_4c * *(int*)pvVar9;
        bVar3 = (bool)local_38->IsCompressed();
        pvVar10 = (void*)local_48->data();
        SetTextureMipData(this_00, local_70, bVar3, uVar14, uVar11, param_7, param_7, pvVar10, (uint)local_40,
                          local_54);
        std::scoped_lock<std::mutex>::~scoped_lock(local_60);
    }

    // 0x1008586a0, 208 bytes, placed by class name
    // TextureAtlas::GetTextureSlotData(std::array<unsigned int, 3ul>&, std::array<unsigned char, 3ul>&, std::array<unsigned short, 3ul>&, std::array<unsigned short, 3ul>&, unsigned char, int)
    /* TextureAtlas::GetTextureSlotData(std::array<unsigned int, 3ul>&,
   std::array<unsigned char, 3ul>&, std::array<unsigned short, 3ul>&, std::array<unsigned short,
   3ul>&, unsigned char, int) */

    void TextureAtlas::GetTextureSlotData(array* param_1, array* param_2, array* param_3, array* param_4, uchar param_5,
                                          int param_6) {
        uint uVar1;
        short sVar2;
        short sVar3;
        uint uVar4;
        uint* puVar5;
        short* psVar6;
        short sVar7;
        undefined3 in_register_00000089;
        ulong uVar8;

        GetTextureSlotIDs(this, param_1, param_6);
        GetTextureSlotSizes(this, param_2, param_6);
        uVar8 = 0;
        do {
            puVar5 = (uint*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)param_1, uVar8);
            uVar1 = *puVar5;
            uVar4 = field_24->GetAliveCount();
            sVar2 = (short)CONCAT31(in_register_00000089, param_5);
            sVar7 = (short)(uVar1 / uVar4) + sVar2;
            psVar6 = (short*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_4, uVar8);
            *psVar6 = sVar7;
            uVar1 = *puVar5;
            sVar3 = field_24->GetAliveCount();
            psVar6 = (short*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_3, uVar8);
            *psVar6 = sVar3 * (sVar2 - sVar7) + (short)uVar1 + sVar2;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 3);
    }

    // 0x100858770, 512 bytes, placed by class name
    // TextureAtlas::GetTextureSlotIDs(std::array<unsigned int, 3ul>&, int) const
    /* TextureAtlas::GetTextureSlotIDs(std::array<unsigned int, 3ul>&, int) const */

    ulong TextureAtlas::GetTextureSlotIDs(array* param_1, int param_2) {
        ushort uVar1;
        ushort uVar2;
        bool bVar3;
        int iVar4;
        undefined8 uVar5;
        undefined4* puVar6;
        long lVar7;
        int* piVar8;
        hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                  eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                  eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_00;
        ulong uVar9;
        undefined1 auVar10[16];
        undefined1 local_88[16];
        eastl local_78[16];
        ImPool<ImGuiTabBar>* local_68;
        array<unsigned int, 3ul>* local_60;
        scoped_lock<std::recursive_mutex> local_58[8];
        hashtable_iterator_base local_50[20];
        int local_3c;
        int local_38;
        undefined1 local_31;

        local_3c = param_2;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_58, field_187808);
        local_78 = (eastl[16])(&field_66024, &local_3c)->find();
        local_50._0_16_ = (&field_66024)->end();
        local_31 = eastl::operator==(local_78, local_50, local_50._8_8_);
        if ((bool)local_31) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureAtlas.cpp",
                                514, "TextureAtlas: Warning - requested lookup of material %d was not found in atlas!",
                                local_3c);
            this_00 =
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)0;
            do {
                puVar6 = (undefined4*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)param_1,
                                                                                (ulong)this_00);
                *puVar6 = 0;
                this_00 = this_00 + 1;
            } while (
                this_00 !=
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)3);
        } else {
            this_00 =
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
            local_68 = (ImPool<ImGuiTabBar>*)field_24;
            uVar9 = 0;
            local_60 = (array<unsigned int, 3ul>*)param_1;
            do {
                lVar7 = local_78->HeapBeginPtr();
                piVar8 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(lVar7 + 4), uVar9);
                local_38 = *piVar8;
                if (local_38 == -1) {
                    piVar8 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&m_dummyTextureIDs, uVar9);
                    local_38 = *piVar8;
                }
                auVar10 = eastl::hashtable<
                    int, eastl::pair<int const, TextureAtlasTextureMapping>,
                    eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                    eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                    false, true, true>::find(this_00, &local_38);
                local_50._0_16_ = auVar10;
                auVar10 = this_00->end();
                local_88 = auVar10;
                bVar3 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_88, auVar10._8_8_);
                if (!bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              532, (char*)0);
                }
                lVar7 = local_50->HeapBeginPtr();
                uVar1 = *(ushort*)(lVar7 + 10);
                iVar4 = ImPool<ImGuiTabBar>::GetAliveCount(local_68);
                lVar7 = local_50->HeapBeginPtr();
                uVar2 = *(ushort*)(lVar7 + 8);
                piVar8 = (int*)std::array<unsigned int, 3ul>::operator[](local_60, uVar9);
                *piVar8 = (uint)uVar2 + iVar4 * (uint)uVar1;
                uVar9 = uVar9 + 1;
            } while (uVar9 != 3);
        }
        uVar9 = CONCAT71((int7)((ulong)this_00 >> 8), local_31);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_58);
        return (uVar9 ^ 1) & 4294967295;
    }

    // 0x100858970, 176 bytes, placed by class name
    // TextureAtlas::GetTextureSlotSizes(std::array<unsigned char, 3ul>&, int) const
    /* TextureAtlas::GetTextureSlotSizes(std::array<unsigned char, 3ul>&, int) const */

    void TextureAtlas::GetTextureSlotSizes(array* param_1, int param_2) {
        ushort uVar1;
        ushort uVar2;
        undefined1* puVar3;
        vector* pvVar4;
        ushort* puVar5;
        array* paVar6;
        type* ptVar7;
        array local_38[8];

        paVar6 = local_38;
        GetTexturePixelSizes(this, paVar6, param_2);
        ptVar7 = (type*)0;
        do {
            pvVar4 = (field_24, (type*)paVar6)->SSOBeginPtr();
            uVar1 = *(ushort*)pvVar4;
            puVar5 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)local_38,
                                                                          (ulong)ptVar7);
            uVar2 = *puVar5;
            *puVar5 = (ushort)((uint)uVar2 / (uint)uVar1);
            if (255 < (uint)uVar2 / (uint)uVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("sizes[i] <= std::numeric_limits<uint8>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          579, (char*)0);
            }
            uVar1 = *puVar5;
            paVar6 = (array*)ptVar7;
            puVar3 = (undefined1*)std::array<unsigned char, 3ul>::operator[]((array<unsigned char, 3ul>*)param_1,
                                                                             (ulong)ptVar7);
            *puVar3 = (char)uVar1;
            ptVar7 = ptVar7 + 1;
        } while (ptVar7 != (type*)3);
    }

    // 0x100859360, 160 bytes, placed by class name
    // TextureAtlas::SetMaterialSettingsTextureData(unsigned int, TextureAtlasMaterialSettings const&)
    void TextureAtlas::SetMaterialSettingsTextureData(uint param_1, TextureAtlasMaterialSettings* param_2) {
        undefined8 uVar2;

        if (param_2->IsValid() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("materialSettings.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1057, (char*)0);
        }
        uVar2 = param_2->GetData();
        (&m_settingsTexture, 0, (param_1 % 42) * 3, param_1 / 42 << 2, 3, 4, 7, uVar2)->Update();
    }

    // 0x1008594b0, 448 bytes, placed by class name
    // TextureAtlas::GetTexturePixelSizes(std::array<unsigned short, 3ul>&, int) const
    /* TextureAtlas::GetTexturePixelSizes(std::array<unsigned short, 3ul>&, int) const */

    ulong TextureAtlas::GetTexturePixelSizes(array* param_1, int param_2) {
        undefined2 uVar1;
        bool bVar2;
        undefined8 uVar3;
        undefined2* puVar4;
        long lVar5;
        int* piVar6;
        hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                  eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                  eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_00;
        ulong uVar7;
        undefined1 auVar8[16];
        undefined1 local_78[16];
        eastl local_68[16];
        scoped_lock<std::recursive_mutex> local_58[8];
        hashtable_iterator_base local_50[20];
        int local_3c;
        int local_38;
        undefined1 local_31;

        local_3c = param_2;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_58, field_187808);
        local_68 = (eastl[16])(&field_66024, &local_3c)->find();
        local_50._0_16_ = (&field_66024)->end();
        local_31 = eastl::operator==(local_68, local_50, local_50._8_8_);
        if ((bool)local_31) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureAtlas.cpp",
                                546, "TextureAtlas: Warning - requested lookup of material %d was not found in atlas!",
                                local_3c);
            this_00 =
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)0;
            do {
                puVar4 = (undefined2*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_1,
                                                                                  (ulong)this_00);
                *puVar4 = 0;
                this_00 = this_00 + 1;
            } while (
                this_00 !=
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)3);
        } else {
            this_00 =
                (hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                           eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                           eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(m_formatTypeRequest + 8);
            uVar7 = 0;
            do {
                lVar5 = local_68->HeapBeginPtr();
                piVar6 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(lVar5 + 4), uVar7);
                local_38 = *piVar6;
                if (local_38 == -1) {
                    piVar6 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&m_dummyTextureIDs, uVar7);
                    local_38 = *piVar6;
                }
                auVar8 = eastl::hashtable<
                    int, eastl::pair<int const, TextureAtlasTextureMapping>,
                    eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                    eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                    false, true, true>::find(this_00, &local_38);
                local_50._0_16_ = auVar8;
                auVar8 = this_00->end();
                local_78 = auVar8;
                bVar2 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_78, auVar8._8_8_);
                if (!bVar2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              564, (char*)0);
                }
                lVar5 = local_50->HeapBeginPtr();
                uVar1 = *(undefined2*)(lVar5 + 12);
                puVar4 = (undefined2*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_1,
                                                                                  uVar7);
                *puVar4 = uVar1;
                uVar7 = uVar7 + 1;
            } while (uVar7 != 3);
        }
        uVar7 = CONCAT71((int7)((ulong)this_00 >> 8), local_31);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_58);
        return (uVar7 ^ 1) & 4294967295;
    }

    // 0x100859680, 256 bytes, placed by class name
    // TextureAtlas::GetMaterialSettingsSlotXY(unsigned short&, unsigned int) const
    ulong TextureAtlas::GetMaterialSettingsSlotXY(ushort* param_1, uint param_2) {
        bool bVar1;
        undefined7 extraout_var;
        undefined8 uVar2;
        long lVar3;
        ushort uVar4;
        eastl local_50[16];
        undefined1 local_40[16];
        scoped_lock<std::recursive_mutex> local_30[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, field_187808);
        local_40._0_4_ = param_2;
        local_50 = (eastl[16])(&field_66024, (int*)local_40)->find();
        local_40 = (&field_66024)->end();
        bVar1 = eastl::operator==(local_50, (hashtable_iterator_base*)local_40, local_40._8_8_);
        if (bVar1) {
            uVar2 = logger::default_logger();
            uVar4 = 0;
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureAtlas.cpp",
                                591, "TextureAtlas: Warning - requested lookup of material %u was not found in atlas!",
                                param_2);
        } else {
            lVar3 = local_50->HeapBeginPtr();
            uVar4 = (ushort)(*(uint*)(lVar3 + 16) / 42 << 8) | (ushort)(*(uint*)(lVar3 + 16) % 42);
        }
        *param_1 = uVar4;
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
        return CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
    }

    // 0x100859780, 384 bytes, placed by class name
    // TextureAtlas::AddReference(MaterialInfo const&)
    void TextureAtlas::AddReference(MaterialInfo* param_1) {
        bool bVar1;
        long lVar2;
        int* piVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar4;
        hashtable_iterator_base local_70[16];
        hashtable_iterator_base local_60[16];
        eastl local_50[16];
        scoped_lock<std::recursive_mutex> local_40[8];
        int local_38;
        int local_34;

        local_38 = param_1->field_0;
        if (-1 < local_38) {
            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, field_187808);
            eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                             eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                             eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                             true>::find((int*)local_50);
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=(local_50, local_60, extraout_RDX);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("materialMapping != m_materialMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          613, (char*)0);
            }
            lVar2 = local_50->HeapBeginPtr();
            *(int*)(lVar2 + 20) = *(int*)(lVar2 + 20) + 1;
            uVar4 = 0;
            do {
                lVar2 = local_50->HeapBeginPtr();
                piVar3 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(lVar2 + 4), uVar4);
                local_34 = *piVar3;
                if (-1 < local_34) {
                    eastl::hashtable<
                        int,
                        eastl::pair<int const,
                                    std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                    std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<
                            int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)local_60);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar1 = eastl::operator!=((eastl*)local_60, local_70, extraout_RDX_00);
                    if (!bVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("mapping != m_textureMap.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  622, (char*)0);
                    }
                    lVar2 = local_60->HeapBeginPtr();
                    if (-1 < *(int*)(lVar2 + 4)) {
                        lVar2 = local_60->HeapBeginPtr();
                        *(int*)(lVar2 + 4) = *(int*)(lVar2 + 4) + 1;
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != 3);
            std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
        }
    }

    // 0x100859900, 160 bytes, placed by class name
    // TextureAtlas::AddReferences(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)
    void TextureAtlas::AddReferences(vector* param_1) {
        long lVar1;
        MaterialInfo* pMVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;
        scoped_lock<std::recursive_mutex> local_30[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, field_187808);
        lVar1 = param_1->size();
        if (lVar1 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                pMVar2 = (MaterialInfo*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
                    (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)param_1, uVar5);
                AddReference(this, pMVar2);
                uVar5 = (ulong)uVar4;
                uVar3 = param_1->size();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar3);
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
    }

    // 0x100859a10, 528 bytes, placed by class name
    // TextureAtlas::RemoveReference(int)
    void TextureAtlas::RemoveReference(int param_1) {
        bool bVar1;
        long lVar2;
        int* piVar3;
        undefined8 uVar4;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar5;
        int local_78[4];
        fixed_vector<unsigned int, 256ul, true, eastl::allocator>* local_68;
        scoped_lock<std::recursive_mutex> local_60[8];
        eastl local_58[16];
        undefined1 local_48[16];
        int local_34;

        if (-1 < param_1) {
            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_60, field_187808);
            eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                             eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                             eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                             true>::find((int*)local_58);
            local_48 = (&field_66024)->end();
            bVar1 = eastl::operator!=(local_58, (hashtable_iterator_base*)local_48, local_48._8_8_);
            if (bVar1) {
                lVar2 = local_58->HeapBeginPtr();
                if (*(int*)(lVar2 + 20) == 0) {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/textures/TextureAtlas.cpp",
                                        654, "TextureAtlas: Attempting to remove unreferenced material from atlas");
                } else {
                    lVar2 = local_58->HeapBeginPtr();
                    *(int*)(lVar2 + 20) = *(int*)(lVar2 + 20) + -1;
                    lVar2 = local_58->HeapBeginPtr();
                    if (*(int*)(lVar2 + 20) < -1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("materialMapping->second.m_refCount >= -1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  658, "Material reference count is less than -1");
                    }
                    lVar2 = local_58->HeapBeginPtr();
                    if (*(int*)(lVar2 + 20) < 1) {
                        local_48._0_4_ = param_1;
                        (&field_165696, (uint*)local_48)->push_back();
                    }
                    local_68 = (fixed_vector<unsigned int, 256ul, true, eastl::allocator>*)&field_166760;
                    uVar5 = 0;
                    do {
                        lVar2 = local_58->HeapBeginPtr();
                        piVar3 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(lVar2 + 4), uVar5);
                        local_34 = *piVar3;
                        if (-1 < local_34) {
                            eastl::hashtable<
                                int,
                                eastl::pair<int const,
                                            std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                            std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                                eastl::allocator,
                                eastl::use_first<eastl::pair<
                                    int const,
                                    std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                    std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::find((int*)local_48);
                            eastl::hashtable<
                                int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                            bVar1 =
                                eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_78, extraout_RDX);
                            if (bVar1) {
                                lVar2 = local_48->HeapBeginPtr();
                                if (-1 < *(int*)(lVar2 + 4)) {
                                    lVar2 = local_48->HeapBeginPtr();
                                    *(int*)(lVar2 + 4) = *(int*)(lVar2 + 4) + -1;
                                    lVar2 = local_48->HeapBeginPtr();
                                    if (*(int*)(lVar2 + 4) < 1) {
                                        local_78[0] = local_34;
                                        eastl::fixed_vector<unsigned int, 256ul, true, eastl::allocator>::push_back(
                                            local_68, (uint*)local_78);
                                    }
                                }
                            }
                        }
                        uVar5 = uVar5 + 1;
                    } while (uVar5 != 3);
                }
            }
            std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_60);
        }
    }

    // 0x100859c50, 160 bytes, placed by class name
    // TextureAtlas::RemoveReferences(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)
    void TextureAtlas::RemoveReferences(vector* param_1) {
        long lVar1;
        int* piVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;
        scoped_lock<std::recursive_mutex> local_30[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, field_187808);
        lVar1 = param_1->size();
        if (lVar1 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                piVar2 = (int*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
                    (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)param_1, uVar5);
                RemoveReference(this, *piVar2);
                uVar5 = (ulong)uVar4;
                uVar3 = param_1->size();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar3);
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
    }

    // 0x100859cf0, 128 bytes, placed by class name
    // TextureAtlas::CheckContainsMaterials(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&) const
    ulong TextureAtlas::CheckContainsMaterials(vector* param_1) {
        char cVar1;
        long lVar2;
        int* piVar3;
        ulong uVar4;
        uint uVar5;
        ulong uVar6;
        undefined8 unaff_R12;
        bool bVar7;

        lVar2 = param_1->size();
        bVar7 = lVar2 != 0;
        if (bVar7) {
            piVar3 = (int*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
                (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)param_1, 0);
            cVar1 = CheckContainsMaterial(this, *piVar3);
            if (cVar1 != '\0') {
                uVar5 = 1;
                do {
                    uVar6 = (ulong)uVar5;
                    uVar4 = param_1->size();
                    bVar7 = uVar6 < uVar4;
                    if (uVar4 <= uVar6)
                        break;
                    piVar3 = (int*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
                        (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)param_1, uVar6);
                    cVar1 = CheckContainsMaterial(this, *piVar3);
                    uVar5 = uVar5 + 1;
                } while (cVar1 != '\0');
            }
        }
        return (CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar7) ^ 1) & 4294967295;
    }

    // 0x100859d70, 160 bytes, placed by class name
    // TextureAtlas::CheckContainsMaterial(int) const
    ulong TextureAtlas::CheckContainsMaterial(int param_1) {
        long lVar2;
        undefined1* this_00;
        undefined7 uVar4;
        ulong uVar3;
        hashtable_iterator_base local_40[16];
        eastl local_30[16];
        scoped_lock<std::recursive_mutex> local_20[12];
        int local_14;

        local_14 = param_1;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_20, field_187808);
        this_00 = &field_66024;
        local_30 = (eastl[16])this_00->find(&local_14);
        local_40 = (hashtable_iterator_base[16])this_00->end();
        if (eastl::operator!=(local_30, local_40, local_40._8_8_)) {
            uVar4 = (undefined7)((ulong)this_00 >> 8);
            if (local_14 < 0) {
                uVar3 = CONCAT71(uVar4, 1);
            } else {
                lVar2 = local_30->HeapBeginPtr();
                uVar3 = CONCAT71(uVar4, 0 < *(int*)(lVar2 + 20));
            }
        } else {
            uVar3 = 0;
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_20);
        return uVar3 & 4294967295;
    }

    // 0x100859e10, 160 bytes, placed by class name
    // TextureAtlas::CheckMaterialsLoaded(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&) const
    ulong TextureAtlas::CheckMaterialsLoaded(vector* param_1) {
        char cVar1;
        int* piVar2;
        int* piVar3;
        undefined8 unaff_R12;
        ulong uVar4;

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      721, (char*)0);
        }
        piVar2 = (int*)param_1->HeapBeginPtr();
        piVar3 = (int*)param_1->end();
        uVar4 = CONCAT71((int7)((ulong)unaff_R12 >> 8), piVar2 == piVar3);
        if (piVar2 != piVar3) {
            cVar1 = CheckMaterialLoaded(this, *piVar2);
            while (cVar1 != '\0') {
                piVar2 = piVar2 + 7;
                uVar4 = CONCAT71((int7)(uVar4 >> 8), piVar2 == piVar3);
                if (piVar2 == piVar3)
                    break;
                cVar1 = CheckMaterialLoaded(this, *piVar2);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100859eb0, 336 bytes, placed by class name
    // TextureAtlas::CheckMaterialLoaded(int) const
    ulong TextureAtlas::CheckMaterialLoaded(int param_1) {
        bool bVar2;
        bool bVar3;
        long lVar4;
        int* piVar5;
        ulong uVar6;
        undefined8 unaff_R12;
        undefined1 auVar7[16];
        undefined1 local_68[16];
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        int local_38;
        int local_34;

        local_38 = param_1;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      735, (char*)0);
        }
        local_58 = (eastl[16])(&field_115344, &local_38)->find();
        local_48 = (hashtable_iterator_base[16])(&field_115344)->end();
        bVar2 = eastl::operator==(local_58, local_48, local_48._8_8_);
        if (!bVar2) {
            lVar4 = local_58->HeapBeginPtr();
            if (*(char*)(lVar4 + 25) == '\x02') {
                bVar2 = true;
                uVar6 = 0;
                do {
                    lVar4 = local_58->HeapBeginPtr();
                    piVar5 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(lVar4 + 4), uVar6);
                    local_34 = *piVar5;
                    if (-1 < local_34) {
                        auVar7 = (&field_33104, &local_34)->find();
                        local_48 = (hashtable_iterator_base[16])auVar7;
                        auVar7 = (&field_33104)->end();
                        local_68 = auVar7;
                        bVar3 = eastl::operator==((eastl*)local_48, (hashtable_iterator_base*)local_68, auVar7._8_8_);
                        if (bVar3)
                            break;
                        lVar4 = local_48->HeapBeginPtr();
                        if (*(char*)(lVar4 + 15) != '\x02')
                            break;
                    }
                    bVar2 = uVar6 < 2;
                    uVar6 = uVar6 + 1;
                } while (uVar6 != 3);
                uVar6 = CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar2) ^ 1;
                goto LAB_100859fdd;
            }
        }
        uVar6 = 0;
    LAB_100859fdd:
        return uVar6 & 4294967041;
    }

    // 0x10085a000, 560 bytes, placed by class name
    // TextureAtlas::AddMaterials(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)
    uint TextureAtlas::AddMaterials(vector* param_1) {
        uint uVar2;
        uint* puVar3;
        long lVar4;
        TextureAtlasSlot2DGroup* pTVar5;
        hashtable_iterator_base* extraout_RDX;
        uint uVar6;
        ulong uVar7;
        hashtable_iterator_base local_2f0[16];
        WrapArray<MaterialInfo_const> local_2e0[16];
        undefined1* local_2c8;
        scoped_lock<std::recursive_mutex> local_2c0[8];
        ulong local_2b8;
        TextureAtlas* local_2b0;
        uint local_2a8;
        byte local_2a1;
        fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator> local_2a0[616];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2b0 = this;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_2c0, field_187808);
        local_2b8 = param_1->size();
        eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>::fixed_vector(local_2a0);
        WrapArray<MaterialInfo_const>::WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(local_2e0,
                                                                                                        param_1);
        uVar2 = GetTextureSlots(local_2b0, (fixed_vector*)local_2a0, local_2e0);
        if (((byte)uVar2 != 0) && (local_2b8 != 0)) {
            local_2c8 = &local_2b0->field_66024;
            uVar6 = 1;
            uVar7 = 0;
            local_2a1 = (byte)uVar2;
            do {
                puVar3 = (uint*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
                    (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)param_1, uVar7);
                local_2a8 = *puVar3;
                eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                                 eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::find((int*)local_2e0);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                if (!eastl::operator!=((eastl*)local_2e0, local_2f0, extraout_RDX)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mapping != m_materialMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              775, (char*)0);
                }
                lVar4 = local_2e0->HeapBeginPtr();
                uVar2 = local_2a8;
                if (*(char*)(lVar4 + 24) != '\0') {
                    lVar4 = local_2e0->HeapBeginPtr();
                    pTVar5 = (TextureAtlasSlot2DGroup*)
                        eastl::vector<TextureAtlasSlot2DGroup,
                                      eastl::fixed_vector_allocator<18ul, 32ul, 2ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<TextureAtlasSlot2DGroup,
                                    eastl::fixed_vector_allocator<18ul, 32ul, 2ul, 0ul, true, eastl::allocator>>*)
                                local_2a0,
                            uVar7);
                    AddMaterial(local_2b0, uVar2, (TextureAtlasMaterialMapping*)(lVar4 + 4), pTVar5);
                }
                uVar7 = (ulong)uVar6;
                uVar6 = uVar6 + 1;
                uVar2 = (uint)local_2a1;
            } while (uVar7 < local_2b8);
        }
        eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>::~fixed_vector(local_2a0);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_2c0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x10085a240, 1728 bytes, placed by class name
    // TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<MaterialInfo const> const&)
    ulong TextureAtlas::GetTextureSlots(fixed_vector* param_1, WrapArray* param_2) {
        undefined2 uVar1;
        uint uVar2;
        uint uVar3;
        fixed_vector* this_00;
        TextureAtlas* pTVar4;
        bool bVar5;
        byte bVar6;
        char cVar7;
        fixed_vector* pfVar8;
        undefined4* puVar9;
        int* piVar10;
        short* psVar11;
        undefined7 uVar18;
        undefined2* puVar12;
        uint* puVar13;
        TextureAtlasSlot2D* pTVar14;
        MaterialInfo* pMVar15;
        long lVar16;
        long lVar17;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar19;
        int iVar20;
        hash_map<int, TextureAtlasTextureMapping, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>, false>*
            this_01;
        ulong uVar21;
        eastl local_128[16];
        eastl local_118[16];
        ulong local_108;
        undefined4 local_100;
        undefined2 local_fc;
        scoped_lock<std::recursive_mutex> local_f0[8];
        TextureAtlasSlotPacker* local_e8;
        undefined4 local_e0;
        int local_dc;
        ulong local_d8;
        hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                  eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                  eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_d0;
        ulong local_c8;
        hash_map<int, TextureAtlasTextureMapping, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>, false>*
            local_c0;
        fixed_vector* local_b8;
        WrapArray<MaterialInfo_const>* local_b0;
        TextureAtlas* local_a8;
        int local_a0;
        uint local_9c;
        hashtable_iterator_base local_98[96];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_f0, field_187808);
        local_e8 = (TextureAtlasSlotPacker*)field_24;
        local_a8 = this;
        local_e8->ClearLastCheckedValues();
        local_b0 = (WrapArray<MaterialInfo_const>*)param_2;
        pfVar8 = (fixed_vector*)param_2->HeapBeginPtr();
        if (param_1 != (fixed_vector*)0) {
            param_1->reserve((ulong)pfVar8 & 4294967295);
        }
        local_d0 =
            (hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                       eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                       eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>, eastl::equal_to<int>,
                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)&local_a8->field_66024;
        this_01 = (hash_map<int, TextureAtlasTextureMapping, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                            false>*)(local_a8->m_formatTypeRequest + 8);
        local_b8 = param_1;
        if ((int)pfVar8 == 0) {
            local_9c = 0;
        } else {
            local_108 = (ulong)pfVar8 & 4294967295;
            uVar21 = 0;
            local_9c = 0;
            local_c0 = this_01;
            do {
                puVar9 = (undefined4*)WrapArray<MaterialInfo_const>::operator[](local_b0, uVar21);
                local_e0 = *puVar9;
                eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                                 eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::find((int*)local_128);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar5 = eastl::operator==(local_128, local_98, extraout_RDX);
                this_01 = local_c0;
                local_d8 = uVar21;
                if (bVar5) {
                    if (local_a8->field_187792 == 1344) {
                        local_9c = (uint)CONCAT71((int7)((ulong)local_a8 >> 8), 1);
                        pfVar8 = (fixed_vector*)2;
                    } else {
                        new (local_98) TextureAtlasSlot2DGroup();
                        bVar6 = (byte)local_9c;
                        bVar5 = false;
                        if ((local_9c & 1) == 0) {
                            uVar19 = 0;
                            do {
                                lVar16 = WrapArray<MaterialInfo_const>::operator[](local_b0, uVar21);
                                local_c8 = uVar19;
                                piVar10 = (int*)std::array<unsigned int, 3ul>::operator[](
                                    (array<unsigned int, 3ul>*)(lVar16 + 16), uVar19);
                                iVar20 = *piVar10;
                                if (iVar20 != 0) {
                                    lVar16 = WrapArray<MaterialInfo_const>::operator[](local_b0, uVar21);
                                    uVar21 = local_c8;
                                    local_dc = iVar20;
                                    piVar10 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(lVar16 + 4),
                                                                                     local_c8);
                                    local_a0 = *piVar10;
                                    eastl::hashtable<
                                        int,
                                        eastl::pair<
                                            int const,
                                            std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                            std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                                        eastl::allocator,
                                        eastl::use_first<eastl::pair<
                                            int const, std::unique_ptr<
                                                           oldscape::ChatHistory::HistoryBuffer,
                                                           std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::find((int*)local_118);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                        eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::end();
                                    bVar5 = eastl::operator==(local_118, (hashtable_iterator_base*)&local_100,
                                                              extraout_RDX_01);
                                    iVar20 = (int)uVar21;
                                    if (bVar5) {
                                        GetSlotForNewTexture((TextureAtlas*)&local_100, (uint)local_a8);
                                        puVar9 = (undefined4*)TextureAtlasSlot2DGroup::operator[](
                                            (TextureAtlasSlot2DGroup*)local_98, iVar20);
                                        *puVar9 = local_100;
                                        *(undefined2*)(puVar9 + 1) = local_fc;
                                        psVar11 = (short*)TextureAtlasSlot2DGroup::operator[](
                                            (TextureAtlasSlot2DGroup*)local_98, iVar20);
                                        uVar21 = local_d8;
                                        if (*psVar11 == -1) {
                                            uVar18 = (undefined7)((ulong)psVar11 >> 8);
                                            bVar5 = true;
                                        } else {
                                            lVar16 = TextureAtlasSlot2DGroup::operator[](
                                                (TextureAtlasSlot2DGroup*)local_98, iVar20);
                                            bVar5 = *(short*)(lVar16 + 2) == -1;
                                            uVar18 = (undefined7)((ulong)lVar16 >> 8);
                                        }
                                        bVar6 = bVar5 | bVar6 & 1;
                                        local_9c = (uint)CONCAT71(uVar18, bVar6);
                                        if (bVar6 == 0) {
                                            lVar16 = WrapArray<MaterialInfo_const>::operator[](local_b0, uVar21);
                                            puVar13 = (uint*)std::array<int, 3ul>::operator[](
                                                (array<int, 3ul>*)(lVar16 + 4), local_c8);
                                            uVar2 = *puVar13;
                                            lVar16 = WrapArray<MaterialInfo_const>::operator[](local_b0, uVar21);
                                            uVar19 = local_c8;
                                            puVar13 = (uint*)std::array<unsigned int, 3ul>::operator[](
                                                (array<unsigned int, 3ul>*)(lVar16 + 16), local_c8);
                                            uVar3 = *puVar13;
                                            pTVar14 = (TextureAtlasSlot2D*)TextureAtlasSlot2DGroup::operator[](
                                                (TextureAtlasSlot2DGroup*)local_98, (int)uVar19);
                                            AddTextureReference(local_a8, true, uVar2, uVar3, pTVar14);
                                        }
                                    } else {
                                        lVar16 = local_118->HeapBeginPtr();
                                        uVar1 = *(undefined2*)(lVar16 + 8);
                                        puVar12 = (undefined2*)TextureAtlasSlot2DGroup::operator[](
                                            (TextureAtlasSlot2DGroup*)local_98, iVar20);
                                        *puVar12 = uVar1;
                                        uVar1 = *(undefined2*)(lVar16 + 10);
                                        lVar16 = TextureAtlasSlot2DGroup::operator[]((TextureAtlasSlot2DGroup*)local_98,
                                                                                     iVar20);
                                        *(undefined2*)(lVar16 + 2) = uVar1;
                                        uVar21 = local_d8;
                                    }
                                }
                                bVar6 = (byte)local_9c;
                                bVar5 = (local_9c & 1) == 0;
                            } while ((local_c8 < 2) && (uVar19 = local_c8 + 1, (local_9c & 1) == 0));
                        }
                        pfVar8 = (fixed_vector*)2;
                        if (bVar5) {
                            pMVar15 = (MaterialInfo*)WrapArray<MaterialInfo_const>::operator[](local_b0, uVar21);
                            AddMaterialProvisionally(local_a8, pMVar15);
                            pfVar8 = (fixed_vector*)0;
                            if (local_b8 != (fixed_vector*)0) {
                                eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>::push_back(
                                    (TextureAtlasSlot2DGroup*)local_b8);
                            }
                        }
                        this_01 = local_c0;
                        if (bVar5)
                            goto LAB_10085a750;
                    }
                } else {
                    if (local_b8 != (fixed_vector*)0) {
                        new (local_98) TextureAtlasSlot2DGroup();
                        uVar19 = 0;
                        do {
                            lVar16 = local_128->HeapBeginPtr();
                            piVar10 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(lVar16 + 4), uVar19);
                            local_a0 = *piVar10;
                            if (-1 < local_a0) {
                                eastl::hashtable<
                                    int,
                                    eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                                           std::default_delete<
                                                                               oldscape::ChatHistory::HistoryBuffer>>>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<
                                        int const,
                                        std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                        std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                    true>::find((int*)local_118);
                                eastl::hashtable<
                                    int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                                bVar5 =
                                    eastl::operator!=(local_118, (hashtable_iterator_base*)&local_100, extraout_RDX_00);
                                if (!bVar5) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_textureMap.find(textureID) != m_textureMap.end()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/materials/textures/TextureAtlas.cpp",
                                              1945, (char*)0);
                                }
                                lVar16 = eastl::hash_map<int, TextureAtlasTextureMapping, eastl::hash<int>,
                                                         eastl::equal_to<int>,
                                                         eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul,
                                                                                          0ul, true, eastl::allocator>,
                                                         false>::operator[](this_01, &local_a0);
                                uVar1 = *(undefined2*)(lVar16 + 4);
                                puVar12 = (undefined2*)TextureAtlasSlot2DGroup::operator[](
                                    (TextureAtlasSlot2DGroup*)local_98, (int)uVar19);
                                *puVar12 = uVar1;
                                uVar1 = *(undefined2*)(lVar16 + 6);
                                lVar16 = TextureAtlasSlot2DGroup::operator[]((TextureAtlasSlot2DGroup*)local_98,
                                                                             (int)uVar19);
                                *(undefined2*)(lVar16 + 2) = uVar1;
                                this_01 = local_c0;
                                uVar21 = local_d8;
                            }
                            uVar19 = uVar19 + 1;
                        } while (uVar19 != 3);
                        eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>::push_back(
                            (TextureAtlasSlot2DGroup*)local_b8);
                    }
                LAB_10085a750:
                    pfVar8 = (fixed_vector*)0;
                }
            } while (((int)pfVar8 == 0) && (uVar21 = uVar21 + 1, uVar21 != local_108));
        }
        uVar2 = local_9c;
        this_00 = local_b8;
        if ((local_9c & 1) == 0) {
            pfVar8 = this_00;
            if ((local_b8 != (fixed_vector*)0) && (cVar7 = local_b8->empty(), cVar7 == '\0')) {
                lVar16 = this_00->size();
                lVar17 = local_b0->HeapBeginPtr();
                if (lVar16 != lVar17) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!pTextureAtlasSlotsOut || pTextureAtlasSlotsOut->empty() || "
                              "pTextureAtlasSlotsOut->size() == materialList.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              2026, (char*)0);
                }
            }
        } else if (local_b8 == (fixed_vector*)0) {
            local_e8->ClearTextureSlots();
            this_01->clear();
            eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                             eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                             eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                             true>::clear(local_d0);
            pTVar4 = local_a8;
            local_98[0] = (hashtable_iterator_base)0;
            (&local_a8->field_186448, (bool*)local_98)->fill();
            pTVar4->field_187792 = 0;
        } else {
            fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
                function<TextureAtlas::GetTextureSlots(
                             eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                             WrapArray<MaterialInfo_const> const&)::__5,
                         void>((__5*)local_98);
            local_e8->FlushProvisionalSlots(local_98);
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98);
            eastl::erase_if<int, TextureAtlasTextureMapping, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                            false,
                            (eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*)
                                ->GetTextureSlots(WrapArray<MaterialInfo_const> const&)::__6>(this_01);
            eastl::erase_if<int, TextureAtlasMaterialMapping, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                            false,
                            (eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*)
                                ->GetTextureSlots(WrapArray<MaterialInfo_const> const&)::__7>(local_d0, local_a8);
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)pfVar8 >> 8), (uVar2 & 1) == 0) & 4294967295;
    }

    // 0x10085a900, 1024 bytes, placed by class name
    // TextureAtlas::AddMaterial(unsigned int, TextureAtlasMaterialMapping&, TextureAtlasSlot2DGroup const&)
    void TextureAtlas::AddMaterial(uint param_1, TextureAtlasMaterialMapping* param_2,
                                   TextureAtlasSlot2DGroup* param_3) {
        ushort uVar1;
        ushort uVar2;
        uint uVar3;
        uint uVar4;
        byte bVar5;
        bool bVar6;
        char cVar7;
        uint* puVar8;
        ushort* puVar9;
        long lVar10;
        short* psVar11;
        undefined1* puVar12;
        undefined8* puVar13;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar14;
        short sVar15;
        short sVar16;
        TextureAtlasMaterialSettings local_d0;
        TextureAtlasSlotPacker* local_88;
        scoped_lock<std::recursive_mutex> local_80[8];
        GUIAnimationRGB local_78;
        undefined1* local_60;
        uint local_54;
        array<unsigned short, 3ul> local_50[8];
        array<unsigned short, 3ul> local_48[12];
        uint local_3c;
        array<unsigned char, 3ul> local_38[4];
        uint local_34;

        local_54 = param_1;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_80, field_187808);
        param_2->field_20 = 0;
        local_88 = (TextureAtlasSlotPacker*)field_24;
        bVar5 = local_88->GetGutteringSlotCount();
        local_60 = m_formatTypeRequest + 8;
        local_3c = (uint)bVar5;
        uVar14 = 0;
        do {
            puVar8 = (uint*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_2, uVar14);
            local_34 = *puVar8;
            if ((int)local_34 < 0) {
                puVar8 = (uint*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&m_dummyTextureIDs, uVar14);
                local_34 = *puVar8;
                eastl::hashtable<
                    int,
                    eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                           std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<
                        int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                   std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::find((int*)&local_d0);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar6 = eastl::operator!=((eastl*)&local_d0, (hashtable_iterator_base*)&local_78, extraout_RDX_00);
                if (!bVar6) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1145, (char*)0);
                }
                lVar10 = local_d0.HeapBeginPtr();
                uVar1 = *(ushort*)(lVar10 + 12);
                puVar8 = (uint*)GetAtlasQuality(this);
                uVar3 = *puVar8;
                puVar12 = (undefined1*)std::array<unsigned char, 3ul>::operator[](local_38, uVar14);
                *puVar12 = (char)(uVar1 / uVar3);
                lVar10 = local_d0.HeapBeginPtr();
                sVar16 = *(short*)(lVar10 + 8);
                sVar15 = (short)local_3c;
                psVar11 = (short*)std::array<unsigned short, 3ul>::operator[](local_50, uVar14);
                *psVar11 = sVar16 + sVar15;
                lVar10 = local_d0.HeapBeginPtr();
                sVar16 = *(short*)(lVar10 + 10);
                psVar11 = (short*)std::array<unsigned short, 3ul>::operator[](local_48, uVar14);
                *psVar11 = sVar16 + sVar15;
            } else {
                eastl::hashtable<
                    int,
                    eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                           std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<
                        int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                   std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::find((int*)&local_d0);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar6 = eastl::operator!=((eastl*)&local_d0, (hashtable_iterator_base*)&local_78, extraout_RDX);
                if (!bVar6) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("textureMapping != m_textureMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1097, (char*)0);
                }
                puVar9 = (ushort*)TextureAtlasSlot2DGroup::operator[](param_3, (int)uVar14);
                lVar10 = local_d0.HeapBeginPtr();
                uVar1 = *(ushort*)(lVar10 + 12);
                puVar8 = (uint*)GetAtlasQuality(this);
                uVar3 = *puVar8;
                if ((uVar1 <= uVar3 && uVar3 != uVar1) || (255 < uVar1 / uVar3)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("textureSlotSize != 0 && textureSlotSize <= std::numeric_limits<uint8>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1102, (char*)0);
                }
                uVar2 = *puVar9;
                sVar16 = (short)local_3c;
                psVar11 = (short*)std::array<unsigned short, 3ul>::operator[](local_50, uVar14);
                *psVar11 = uVar2 + sVar16;
                uVar2 = puVar9[1];
                psVar11 = (short*)std::array<unsigned short, 3ul>::operator[](local_48, uVar14);
                *psVar11 = uVar2 + sVar16;
                puVar12 = (undefined1*)std::array<unsigned char, 3ul>::operator[](local_38, uVar14);
                *puVar12 = (char)(uVar1 / uVar3);
                lVar10 = local_d0.HeapBeginPtr();
                if (*(char*)(lVar10 + 14) == '\0') {
                    this = (TextureAtlas*)this;
                } else {
                    uVar1 = *puVar9;
                    uVar2 = puVar9[1];
                    lVar10 = local_d0.HeapBeginPtr();
                    new (&local_78) GUIAnimationRGB((uint)uVar1, (uint)uVar2, (uint) * (ushort*)(lVar10 + 12));
                    uVar3 = local_34;
                    this = (TextureAtlas*)this;
                    lVar10 = local_d0.HeapBeginPtr();
                    local_88->AddAtlasSlotData(false, uVar3, (uint) * (ushort*)(lVar10 + 12),
                                               (TextureAtlasSlot2D*)&local_78);
                    lVar10 = local_d0.HeapBeginPtr();
                    *(undefined1*)(lVar10 + 14) = 0;
                    cVar7 = this_thread::IsMainThread();
                    uVar3 = local_34;
                    if (cVar7 != '\0') {
                        lVar10 = local_d0.HeapBeginPtr();
                        UploadTexture(this, uVar3, (TextureAtlasTextureMapping*)(lVar10 + 4));
                    }
                    lVar10 = local_d0.HeapBeginPtr();
                    if (*(char*)(lVar10 + 15) == '\0') {
                        field_164664 = 1;
                    }
                }
            }
            uVar14 = uVar14 + 1;
            if (uVar14 == 3) {
                new (&local_d0) TextureAtlasMaterialSettings();
                uVar3 = local_54;
                (field_8, &local_d0, local_54)->GetMaterialSettings();
                local_d0.SetTextureSlots(local_50, local_48, local_38);
                uVar4 = local_54;
                local_54._0_2_ = (undefined2)uVar3;
                local_54._2_2_ = SUB42(uVar3, 2);
                local_78.field_0 = (undefined2)local_54;
                local_78.field_2 = local_54._2_2_;
                local_54 = uVar4;
                puVar13 = (undefined8*)eastl::hash_map<
                    int, TextureAtlasMaterialSettings, eastl::hash<int>, eastl::equal_to<int>,
                    eastl::fixed_hashtable_allocator<258ul, 64ul, 256ul, 4ul, 0ul, true, eastl::allocator>, false>::
                operator[](
                    (hash_map<int, TextureAtlasMaterialSettings, eastl::hash<int>, eastl::equal_to<int>,
                              eastl::fixed_hashtable_allocator<258ul, 64ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                              false>*)&field_167824,
                    (int*)&local_78);
                *(undefined2*)(puVar13 + 6) = local_d0._48_2_;
                puVar13[4] = local_d0._32_8_;
                puVar13[5] = local_d0._40_8_;
                puVar13[2] = local_d0._16_8_;
                puVar13[3] = local_d0._24_8_;
                *puVar13 = local_d0._0_8_;
                puVar13[1] = local_d0._8_8_;
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_80);
                return;
            }
        } while (true);
    }

    // 0x10085ad60, 96 bytes, placed by class name
    // TextureAtlas::GetSlotForNewTexture(unsigned int)
    TextureAtlas* TextureAtlas::GetSlotForNewTexture(uint param_1) {
        undefined4 in_register_00000034;
        scoped_lock<std::recursive_mutex> local_28[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(
            local_28, *(recursive_mutex**)(CONCAT44(in_register_00000034, param_1) + 187808));
        AllocSlot2D(param_1 + 24);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_28);
        return this;
    }

    // 0x10085adf0, 720 bytes, placed by class name
    // TextureAtlas::SetTextureMipData(render::Texture2D&, bool, unsigned int, unsigned int, unsigned int, unsigned int, void const*, unsigned int, unsigned int)
    void TextureAtlas::SetTextureMipData(Texture2D* param_1, bool param_2, uint param_3, uint param_4, uint param_5,
                                         uint param_6, void* param_7, uint param_8, uint param_9) {
        Texture2D* pTVar1;
        int iVar2;
        uint uVar3;
        long lVar4;
        uint* puVar5;
        byte bVar6;
        undefined7 in_register_00000011;
        uint uVar7;
        uint uVar8;
        uint uVar9;
        ulong uVar10;
        uint uVar11;
        uint uVar12;
        bool bVar13;
        uint local_6c;
        uint local_68;
        undefined4 local_5c;
        uint local_58;
        uint local_54;
        uint local_44;
        uint local_40;
        uint local_3c;
        int local_38;
        uint local_34;

        local_5c = (undefined4)CONCAT71(in_register_00000011, param_2);
        if (param_7 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcImageData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      985, (char*)0);
        }
        if (param_8 == 0 && param_9 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataSizeInBytes > 0u || dataMipLevels > 0u",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      993, (char*)0);
        }
        lVar4 = GetAtlasQuality(this);
        pTVar1 = param_1;
        local_34 = *(uint*)(lVar4 + 32);
        if (param_9 < local_34) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataMipLevels >= highestMipRequested",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1003, (char*)0);
        }
        lVar4 = param_1->second();
        if (*(int*)(lVar4 + 28) == 0) {
            local_6c = pTVar1->GetStreamCountLastMix();
        } else {
            lVar4 = pTVar1->second();
            local_6c = *(uint*)(lVar4 + 28);
        }
        local_68 = param_9 - local_34;
        puVar5 = std::min<unsigned int>(&local_6c, &local_68);
        local_44 = *puVar5;
        uVar9 = 0;
        local_58 = param_8;
        local_40 = 0;
        local_3c = param_5;
        do {
            if (param_9 == 0) {
                if (param_8 <= local_40) {
                    return;
                }
            } else if (param_9 <= uVar9) {
                return;
            }
            if (local_44 == 0) {
                return;
            }
            bVar6 = (byte)uVar9;
            uVar12 = param_5 >> (bVar6 & 31);
            uVar11 = param_6 >> (bVar6 & 31);
            uVar8 = param_3 >> (bVar6 & 31);
            uVar7 = param_4 >> (bVar6 & 31);
            if (((char)local_5c == '\0') ||
                ((((bVar13 = false, (uVar8 & 3) == 0 && ((uVar7 & 3) == 0)) && ((uVar12 & 3) == 0)) &&
                  ((uVar11 & 3) == 0)))) {
                lVar4 = param_1->second();
                iVar2 = render::GetFormatByteCount(*(undefined4*)(lVar4 + 12));
                uVar3 = iVar2 * uVar12 * uVar11;
                bVar13 = local_58 < uVar3;
                local_58 = local_58 - uVar3;
                if (bVar13) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("dataLength <= dataRemaining",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1033, (char*)0);
                }
                if (local_34 <= uVar9) {
                    local_54 = uVar3;
                    lVar4 = GetAtlasQuality(this);
                    pTVar1 = param_1;
                    iVar2 = uVar9 - *(int*)(lVar4 + 32);
                    puVar5 = (uint*)param_1->second();
                    local_38 = iVar2;
                    if (*puVar5 >> ((byte)iVar2 & 31) < uVar8 + uVar12) {
                    LAB_10085b038:
                        /* WARNING: Subroutine does not return */
                        LogAssert("x + w <= uint(texture.GetDesc().m_Width) >> destTextureMipIndex && y + h <= "
                                  "uint(texture.GetDesc().m_Height) >> destTextureMipIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  1041, (char*)0);
                    }
                    lVar4 = pTVar1->second();
                    uVar3 = local_40;
                    if (*(uint*)(lVar4 + 4) >> ((byte)local_38 & 31) < uVar7 + uVar11)
                        goto LAB_10085b038;
                    uVar10 = (ulong)local_40;
                    lVar4 = pTVar1->second();
                    (*(code*)pTVar1->field_0[5])(pTVar1, local_38, uVar8, uVar7, uVar12, uVar11,
                                                 *(undefined4*)(lVar4 + 12), uVar10 + (long)param_7);
                    local_44 = local_44 - 1;
                    local_40 = uVar3;
                    uVar3 = local_54;
                }
                local_40 = local_40 + uVar3;
                bVar13 = true;
                param_5 = local_3c;
            }
            uVar9 = uVar9 + 1;
            if (!bVar13) {
                return;
            }
        } while (true);
    }

    // 0x10085b170, 192 bytes, placed by class name
    // TextureAtlas::AddTextureReference(bool, unsigned int, unsigned int, graphicutils::TextureAtlasSlot2D const&)
    void TextureAtlas::AddTextureReference(bool param_1, uint param_2, uint param_3, TextureAtlasSlot2D* param_4) {
        uint local_68[6];
        TextureAtlasTextureMapping local_50;
        scoped_lock<std::recursive_mutex> local_40[12];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, field_187808);
        (field_24, param_1, param_2, param_3, param_4)->AddAtlasSlotData();
        new (&local_50) ImGuiTableColumnSortSpecs();
        local_50.Initialise((uint)(ushort)param_4->field_0, (uint)(ushort)param_4->field_2, param_3, param_1, false);
        eastl::hashtable<int, eastl::pair<int const, TextureAtlasTextureMapping>,
                         eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, TextureAtlasTextureMapping>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::emplace<unsigned int&,
                                                                                 TextureAtlasTextureMapping&>(
            local_68, (TextureAtlasTextureMapping*)(m_formatTypeRequest + 8));
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
    }

    // 0x10085b280, 240 bytes, placed by class name
    // TextureAtlas::AddMaterialProvisionally(MaterialInfo const&)
    void TextureAtlas::AddMaterialProvisionally(MaterialInfo* param_1) {
        char* pcVar1;
        ulong uVar2;
        TextureAtlasMaterialMapping local_60;
        scoped_lock<std::recursive_mutex> local_30[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, field_187808);
        uVar2 = 0;
        do {
            pcVar1 = (char*)std::array<bool, 1344ul>::operator[]((array<bool, 1344ul>*)&field_186448, uVar2);
            if (*pcVar1 == '\0') {
                *pcVar1 = '\x01';
                field_187792 = field_187792 + 1;
                if (-1 < (int)(uint)uVar2) {
                    new (&local_60) TextureAtlasMaterialMapping();
                    local_60.Initialise((array*)&param_1->field_4, (uint)uVar2);
                    eastl::hashtable<
                        int, eastl::pair<int const, TextureAtlasMaterialMapping>,
                        eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                        eastl::use_first<eastl::pair<int const, TextureAtlasMaterialMapping>>, eastl::equal_to<int>,
                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::emplace<int const&,
                                                                                TextureAtlasMaterialMapping&>(
                        (int*)&local_60.field_24, (TextureAtlasMaterialMapping*)&field_66024);
                    std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
                    return;
                }
                break;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 1344);
        /* WARNING: Subroutine does not return */
        LogAssert("settingsSlot > -1",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/materials/"
                  "textures/TextureAtlas.cpp",
                  956, (char*)0);
    }

    // 0x10085b3c0, 352 bytes, placed by class name
    // TextureAtlas::AddTextureData(shared_ptr<TextureData> const&, TextureAtlasTextureMapping const&)
    void TextureAtlas::AddTextureData(shared_ptr* param_1, TextureAtlasTextureMapping* param_2) {
        ushort uVar1;
        ushort uVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        bool bVar8;
        unique_ptr* puVar9;
        long lVar10;
        int* piVar11;
        TextureFormatBitSet* this_00;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* this_01;
        void* pvVar12;

        puVar9 = (unique_ptr*)shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)param_1);
        bVar8 = std::operator!=(puVar9, (_func_decltype_nullptr*)param_1);
        if (!bVar8) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureData->m_rgbData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      967, (char*)0);
        }
        lVar10 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)param_1);
        iVar3 = *(int*)(lVar10 + 16);
        lVar10 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)param_1);
        if (iVar3 != *(int*)(lVar10 + 20)) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureData->m_width == textureData->m_height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      968, (char*)0);
        }
        if (param_2->field_11 != '\x01') {
            /* WARNING: Subroutine does not return */
            LogAssert("textureMapping.m_loadingState == TextureAtlasTextureLoadingState::LOADING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      969, (char*)0);
        }
        uVar1 = param_2->field_4;
        piVar11 = (int*)GetAtlasQuality(this);
        iVar3 = *piVar11;
        uVar2 = param_2->field_6;
        piVar11 = (int*)GetAtlasQuality(this);
        iVar4 = *piVar11;
        this_00 = (TextureFormatBitSet*)GetWorld();
        bVar8 = (bool)this_00->IsCompressed();
        lVar10 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)param_1);
        uVar5 = *(uint*)(lVar10 + 16);
        lVar10 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)param_1);
        uVar6 = *(uint*)(lVar10 + 20);
        this_01 =
            (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)shared_ptr<TextureData>::operator->(
                (shared_ptr<TextureData>*)param_1);
        pvVar12 = (void*)std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(this_01);
        lVar10 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)param_1);
        uVar7 = *(uint*)(lVar10 + 8);
        lVar10 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)param_1);
        SetTextureMipData(this, (Texture2D*)&m_texture, bVar8, (uint)uVar1 * iVar3, (uint)uVar2 * iVar4, uVar5, uVar6,
                          pvVar12, uVar7, *(uint*)(lVar10 + 12));
    }

    // 0x10085b5b0, 512 bytes, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)
    undefined8 TextureAtlas::UploadTexture(int param_1, TextureAtlasTextureMapping* param_2) {
        undefined* puVar1;
        bool bVar2;
        uint uVar3;
        ulong uVar4;
        TextureAtlasManager* this_00;
        undefined8 uVar5;
        shared_ptr* this_01;
        __8 local_128;
        shared_ptr local_f8;
        future local_e8[8];
        TextureManager* local_e0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar4 = (&field_187816)->size();
        this_00 = (TextureAtlasManager*)field_8->GetTextureAtlasManager();
        uVar3 = this_00->GetMaxSimultaneousTextureUploadsPerAtlas();
        puVar1 = TextureType::TEXTURE;
        if ((uVar4 < uVar3) && (param_2->field_11 == '\0')) {
            local_e0 = field_8;
            GetWorld();
            TextureManager::GetTextureData((TextureType*)&local_f8, (uint)local_e0, (TextureFormatBitSet)(uint)puVar1);
            this_01 = &local_f8;
            bVar2 = operator!=(this_01, (_func_decltype_nullptr*)0);
            if (bVar2) {
                param_2->field_11 = 1;
                local_e0 = (TextureManager*)this_01->Instance();
                local_128.field_0 = this;
                local_128.field_8 = param_1;
                new (local_128.field_16) shared_ptr<oldscape::dash3d::Decor>(&local_f8);
                local_128.field_40._0_2_ = param_2->field_8;
                local_128.field_40._2_1_ = param_2->field_10;
                local_128.field_40._3_1_ = param_2->field_11;
                local_128.field_32._0_4_ = param_2->field_0;
                local_128.field_32._4_2_ = param_2->field_4;
                local_128.field_32._6_2_ = param_2->field_6;
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::__8, void>(local_d8, &local_128);
                local_e8->RunOnThreadPoolRenderContext(local_e0, (function*)"UploadTexture");
                (&field_187816, local_e8)->push_back();
                local_e8->~future();
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                        (fixedfunction::Methods)0>::~function(local_d8);
                UploadTexture(int, TextureAtlasTextureMapping&)::$_8::~__8(&local_128);
                local_f8.~shared_ptr();
                uVar5 = 1;
                if (bVar2)
                    goto LAB_10085b735;
            } else {
                local_f8.~shared_ptr();
            }
        }
        uVar5 = 0;
    LAB_10085b735:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar5;
    }

    // 0x10085b870, 256 bytes, placed by class name
    // TextureAtlas::UpdateMaterials()
    void TextureAtlas::UpdateMaterials() {
        uint uVar1;
        bool bVar2;
        char cVar3;
        uint* puVar4;
        undefined8 uVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar6;
        hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false> local_58[16];
        hashtable_iterator_base local_48[16];
        scoped_lock<std::recursive_mutex> local_38[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, field_187808);
        ProcessRemovalQueue(this);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar6 = extraout_RDX;
        while (true) {
            bVar2 = eastl::operator!=((eastl*)local_58, local_48, phVar6);
            if (!bVar2)
                break;
            puVar4 = (uint*)local_58->HeapBeginPtr();
            uVar1 = *puVar4;
            if (-1 < (int)uVar1) {
                cVar3 = UpdateMaterial(this, uVar1);
                if (cVar3 == '\0') {
                    uVar5 = logger::default_logger();
                    logger::Logger::Log(uVar5, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/textures/TextureAtlas.cpp",
                                        1188, "Failed to fit material %i in atlas", uVar1);
                }
            }
            eastl::hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false,
                                      false>::operator++(local_58);
            phVar6 = extraout_RDX_00;
        }
        ProcessRemovalQueue(this);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
    }

    // 0x10085b970, 608 bytes, placed by class name
    // TextureAtlas::ProcessRemovalQueue()
    void TextureAtlas::ProcessRemovalQueue() {
        undefined1* puVar1;
        uint uVar2;
        int iVar3;
        char cVar4;
        bool bVar5;
        uint* puVar6;
        long lVar7;
        int* piVar8;
        undefined8 uVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* phVar10;
        eastl local_70[16];
        uint local_60[4];
        scoped_lock<std::recursive_mutex> local_50[8];
        uint* local_48;
        undefined1* local_40;
        TextureAtlas* local_38;

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_50, field_187808);
        puVar1 = &field_166760;
        local_38 = this;
        cVar4 = puVar1->empty();
        if (cVar4 == '\0') {
            puVar6 = (uint*)puVar1->HeapBeginPtr();
            local_40 = puVar1;
            local_48 = (uint*)puVar1->end();
            if (puVar6 != local_48) {
                do {
                    uVar2 = *puVar6;
                    local_60[0] = uVar2;
                    eastl::hashtable<
                        int,
                        eastl::pair<int const,
                                    std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                    std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<
                            int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)local_70);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar5 = eastl::operator!=(local_70, (hashtable_iterator_base*)local_60, extraout_RDX);
                    if (bVar5) {
                        lVar7 = local_70->HeapBeginPtr();
                        if (*(int*)(lVar7 + 4) == 0) {
                            RemoveTexture(local_38, uVar2);
                        }
                    }
                    puVar6 = puVar6 + 1;
                } while (puVar6 != local_48);
            }
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
        puVar1 = &local_38->field_165696;
        cVar4 = puVar1->empty();
        if (cVar4 == '\0') {
            puVar6 = (uint*)puVar1->HeapBeginPtr();
            local_40 = puVar1;
            local_48 = (uint*)puVar1->end();
            if (puVar6 != local_48) {
                do {
                    uVar2 = *puVar6;
                    local_60[0] = uVar2;
                    eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                                     eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                                     eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::find((int*)local_70);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar5 = eastl::operator!=(local_70, (hashtable_iterator_base*)local_60, extraout_RDX_00);
                    if (bVar5) {
                        lVar7 = local_70->HeapBeginPtr();
                        if (*(int*)(lVar7 + 20) == 0) {
                            RemoveMaterial(local_38, uVar2);
                        }
                    }
                    puVar6 = puVar6 + 1;
                } while (puVar6 != local_48);
            }
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar10 = extraout_RDX_01;
        while (true) {
            bVar5 = eastl::operator!=(local_70, (hashtable_iterator_base*)local_60, phVar10);
            if (!bVar5)
                break;
            piVar8 = (int*)local_70->HeapBeginPtr();
            iVar3 = *piVar8;
            if ((-1 < iVar3) && (piVar8[1] < 0)) {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureAtlas.cpp",
                                    1570, "TextureAtlas texture ID %d has an invalid permanent reference count %d",
                                    iVar3, piVar8[1]);
            }
            eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_70);
            phVar10 = extraout_RDX_02;
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_50);
    }

    // 0x10085bbd0, 1408 bytes, placed by class name
    // TextureAtlas::UpdateMaterial(unsigned int)
    ulong TextureAtlas::UpdateMaterial(uint param_1) {
        ushort uVar1;
        short sVar2;
        int iVar3;
        TextureAtlas* pTVar4;
        bool bVar5;
        byte bVar6;
        uint uVar7;
        TextureAtlasManager* this_00;
        long lVar8;
        long lVar9;
        vector* pvVar10;
        undefined1* puVar11;
        short* psVar12;
        uint* puVar13;
        uint* puVar14;
        undefined8* puVar15;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        short sVar16;
        ulong uVar17;
        hashtable_iterator_base* phVar18;
        ulong uVar19;
        eastl local_120[16];
        TextureAtlasMaterialSettings local_110;
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_d8[24];
        array<int, 3ul>* local_c0;
        array<int, 3ul>* local_b8;
        Layout* local_b0;
        array<unsigned int, 3ul>* local_a8;
        fixed_vector<unsigned int, 256ul, true, eastl::allocator>* local_a0;
        array<unsigned short, 3ul> local_98[8];
        array<unsigned short, 3ul> local_90[8];
        scoped_lock<std::recursive_mutex> local_88[8];
        uint local_80;
        uint local_78[4];
        undefined1* local_68;
        long local_60;
        array<unsigned char, 3ul> local_50[8];
        TextureAtlasSlot2D local_48;
        uint local_3c;
        undefined1 local_35;
        uint local_34;

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_88, field_187808);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::reserve(local_d8, 1);
        this_00 = (TextureAtlasManager*)field_8->GetTextureAtlasManager();
        this_00->PopulateMaterialInfoFromMaterialID(local_d8, param_1);
        lVar8 = eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](local_d8, 0);
        local_110._0_4_ = param_1;
        eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                         eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_120);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar5 = eastl::operator!=(local_120, (hashtable_iterator_base*)&local_110, extraout_RDX);
        pTVar4 = (TextureAtlas*)this;
        if (!bVar5) {
            /* WARNING: Subroutine does not return */
            LogAssert("materialDef != m_materialMap.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1210, (char*)0);
        }
        lVar9 = local_120->HeapBeginPtr();
        local_b0 = (Layout*)pTVar4->field_24;
        bVar6 = local_b0->GetGutteringSlotCount();
        local_c0 = (array<int, 3ul>*)(lVar9 + 4);
        local_b8 = (array<int, 3ul>*)(lVar8 + 4);
        local_68 = pTVar4->m_formatTypeRequest + 8;
        local_a0 = (fixed_vector<unsigned int, 256ul, true, eastl::allocator>*)&pTVar4->field_166760;
        local_a8 = (array<unsigned int, 3ul>*)(lVar8 + 16);
        local_80 = (uint)bVar6;
        uVar17 = 1;
        uVar19 = 0;
        local_60 = lVar9;
        do {
            local_35 = (undefined1)uVar17;
            puVar13 = (uint*)std::array<int, 3ul>::operator[](local_c0, uVar19);
            uVar7 = *puVar13;
            local_3c = uVar7;
            puVar14 = (uint*)std::array<int, 3ul>::operator[](local_b8, uVar19);
            local_34 = *puVar14;
            if (uVar7 != local_34) {
                if (-1 < (int)uVar7) {
                    eastl::hashtable<
                        int,
                        eastl::pair<int const,
                                    std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                    std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<
                            int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)&local_110);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar5 = eastl::operator!=((eastl*)&local_110, (hashtable_iterator_base*)local_78, extraout_RDX_00);
                    if (!bVar5) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("textureMapping != m_textureMap.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/textures/TextureAtlas.cpp",
                                  1232, (char*)0);
                    }
                    lVar8 = local_110.HeapBeginPtr();
                    if (0 < *(int*)(lVar8 + 4)) {
                        iVar3 = *(int*)(local_60 + 20);
                        lVar8 = local_110.HeapBeginPtr();
                        *(int*)(lVar8 + 4) = *(int*)(lVar8 + 4) - iVar3;
                        lVar8 = local_110.HeapBeginPtr();
                        if (*(int*)(lVar8 + 4) < 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("textureMapping->second.m_refCount > -1",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/materials/textures/TextureAtlas.cpp",
                                      1238, (char*)0);
                        }
                        lVar8 = local_110.HeapBeginPtr();
                        if (*(int*)(lVar8 + 4) == 0) {
                            local_78[0] = local_3c;
                            eastl::fixed_vector<unsigned int, 256ul, true, eastl::allocator>::push_back(local_a0,
                                                                                                        local_78);
                        }
                    }
                }
                if (-1 < (int)local_34) {
                    eastl::hashtable<
                        int,
                        eastl::pair<int const,
                                    std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                    std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<
                            int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)&local_110);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar5 = eastl::operator==((eastl*)&local_110, (hashtable_iterator_base*)local_78, extraout_RDX_01);
                    if (bVar5) {
                        puVar14 = (uint*)std::array<unsigned int, 3ul>::operator[](local_a8, uVar19);
                        pTVar4 = (TextureAtlas*)this;
                        GetSlotForNewTexture((TextureAtlas*)&local_48, (uint)(TextureAtlas*)this);
                        if ((local_48.field_0 == -1) || (local_48.field_2 == -1)) {
                            uVar17 = CONCAT71((int7)((ulong)pTVar4 >> 8), local_35);
                            goto LAB_10085c0d1;
                        }
                        AddTextureReference(pTVar4, false, local_34, *puVar14, &local_48);
                        eastl::hashtable<
                            int,
                            eastl::pair<int const,
                                        std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                        std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<
                                int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                           std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((int*)local_78);
                        iVar3 = *(int*)(local_60 + 20);
                        lVar8 = local_78->HeapBeginPtr();
                        *(int*)(lVar8 + 4) = *(int*)(lVar8 + 4) + iVar3;
                        ((TextureAtlas*)this)->field_164664 = 1;
                    } else {
                        lVar8 = local_110.HeapBeginPtr();
                        if (-1 < *(int*)(lVar8 + 4)) {
                            iVar3 = *(int*)(local_60 + 20);
                            lVar8 = local_110.HeapBeginPtr();
                            *(int*)(lVar8 + 4) = *(int*)(lVar8 + 4) + iVar3;
                        }
                    }
                }
            }
            if ((int)local_34 < 0) {
                puVar14 = (uint*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&m_dummyTextureIDs, uVar19);
                local_34 = *puVar14;
            }
            eastl::hashtable<
                int,
                eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                eastl::allocator,
                eastl::use_first<
                    eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                           std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                eastl::prime_rehash_policy, false, true, true>::find((int*)&local_110);
            phVar18 = (hashtable_iterator_base*)local_78;
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar5 = eastl::operator!=((eastl*)&local_110, phVar18, extraout_RDX_02);
            if (!bVar5) {
                /* WARNING: Subroutine does not return */
                LogAssert("mapping != m_textureMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          1289, (char*)0);
            }
            lVar8 = local_110.HeapBeginPtr();
            uVar1 = *(ushort*)(lVar8 + 12);
            pvVar10 = eastl::string::Layout::SSOBeginPtr(local_b0, (type*)phVar18);
            uVar7 = *(uint*)pvVar10;
            puVar11 = (undefined1*)std::array<unsigned char, 3ul>::operator[](local_50, uVar19);
            *puVar11 = (char)(uVar1 / uVar7);
            lVar8 = local_110.HeapBeginPtr();
            sVar2 = *(short*)(lVar8 + 8);
            sVar16 = (short)local_80;
            psVar12 = (short*)std::array<unsigned short, 3ul>::operator[](local_98, uVar19);
            *psVar12 = sVar2 + sVar16;
            lVar8 = local_110.HeapBeginPtr();
            sVar16 = *(short*)(lVar8 + 10) + sVar16;
            psVar12 = (short*)std::array<unsigned short, 3ul>::operator[](local_90, uVar19);
            *psVar12 = sVar16;
            uVar7 = local_34;
            if ((int)local_34 < 0) {
                uVar7 = 4294967295;
            }
            *puVar13 = uVar7;
            bVar5 = uVar19 < 2;
            uVar19 = uVar19 + 1;
            uVar17 = (ulong)CONCAT11((char)((ushort)sVar16 >> 8), bVar5);
        } while (uVar19 != 3);
        new (&local_110) TextureAtlasMaterialSettings();
        pTVar4 = (TextureAtlas*)this;
        uVar7 = param_1;
        (((TextureAtlas*)this)->field_8, &local_110, param_1)->GetMaterialSettings();
        local_110.SetTextureSlots(local_98, local_90, local_50);
        *(undefined1*)(local_60 + 25) = 0;
        local_78[0] = uVar7;
        puVar15 = (undefined8*)eastl::hash_map<
            int, TextureAtlasMaterialSettings, eastl::hash<int>, eastl::equal_to<int>,
            eastl::fixed_hashtable_allocator<258ul, 64ul, 256ul, 4ul, 0ul, true, eastl::allocator>, false>::
        operator[]((hash_map<int, TextureAtlasMaterialSettings, eastl::hash<int>, eastl::equal_to<int>,
                             eastl::fixed_hashtable_allocator<258ul, 64ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                             false>*)&pTVar4->field_167824,
                   (int*)local_78);
        *(undefined2*)(puVar15 + 6) = local_110._48_2_;
        puVar15[4] = local_110._32_8_;
        puVar15[5] = local_110._40_8_;
        puVar15[2] = local_110._16_8_;
        puVar15[3] = local_110._24_8_;
        *puVar15 = CONCAT44(local_110._4_4_, local_110._0_4_);
        puVar15[1] = local_110._8_8_;
    LAB_10085c0d1:
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::~vector(local_d8);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_88);
        return CONCAT71((int7)(uVar17 >> 8), ~(byte)uVar17) & 4294967041;
    }

    // 0x10085c230, 288 bytes, placed by class name
    // TextureAtlas::RemoveMaterial(unsigned int)
    void TextureAtlas::RemoveMaterial(uint param_1) {
        long lVar2;
        undefined1* puVar3;
        hashtable_iterator_base* extraout_RDX;
        eastl local_68[16];
        undefined8 local_58;
        undefined8 local_50;
        scoped_lock<std::recursive_mutex> local_48[8];
        uint local_40[4];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_48, field_187808);
        local_40[0] = param_1;
        eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                         eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_68);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (!eastl::operator!=(local_68, (hashtable_iterator_base*)local_40, extraout_RDX)) {
            /* WARNING: Subroutine does not return */
            LogAssert("materialMapping != m_materialMap.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1319, (char*)0);
        }
        lVar2 = local_68->HeapBeginPtr();
        puVar3 = (undefined1*)std::array<bool, 1344ul>::operator[]((array<bool, 1344ul>*)&field_186448,
                                                                   (long)*(int*)(lVar2 + 16));
        *puVar3 = 0;
        field_187792 = field_187792 + -1;
        new (&local_58)
            eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_68);
        eastl::hashtable<int, eastl::pair<int const, TextureAtlasMaterialMapping>,
                         eastl::fixed_hashtable_allocator<1026ul, 40ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, TextureAtlasMaterialMapping>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::erase(local_40, &field_66024, local_58,
                                                                               local_50);
        local_40[0] = param_1;
        (&field_167824, (int*)local_40)->erase();
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_48);
    }

    // 0x10085c4a0, 240 bytes, placed by class name
    // TextureAtlas::RemoveTexture(unsigned int)
    void TextureAtlas::RemoveTexture(uint param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        eastl local_50[16];
        scoped_lock<std::recursive_mutex> local_40[8];
        GUIAnimationRGB local_38;

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, field_187808);
        local_38._0_4_ = param_1;
        eastl::hashtable<
            int,
            eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                   std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
            eastl::allocator,
            eastl::use_first<
                eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
            eastl::prime_rehash_policy, false, true, true>::find((int*)local_50);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (!eastl::operator!=(local_50, (hashtable_iterator_base*)&local_38, extraout_RDX)) {
            /* WARNING: Subroutine does not return */
            LogAssert("mappingEntry != m_textureMap.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1332, (char*)0);
        }
        lVar2 = local_50->HeapBeginPtr();
        new (&local_38) GUIAnimationRGB((uint) * (ushort*)(lVar2 + 8), (uint) * (ushort*)(lVar2 + 10),
                                        (uint) * (ushort*)(lVar2 + 12));
        (field_24, (TextureAtlasSlot2D*)&local_38)->FreeSlot2D();
        local_38._0_4_ = param_1;
        ((m_formatTypeRequest + 8), (int*)&local_38)->erase();
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
    }

    // 0x10085c660, 384 bytes, placed by class name
    // TextureAtlas::MainDraw()
    void TextureAtlas::MainDraw() {
        char cVar1;
        char cVar2;
        undefined8 uVar3;
        char* pcVar4;
        char* pcVar5;
        scoped_lock<std::recursive_mutex> local_28[8];

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.cpp",
                      1368, (char*)0);
        }
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_28, field_187808);
        cVar1 = (&m_texture)->IsCreated();
        if (cVar1 != '\0') {
            cVar1 = (&m_settingsTexture)->IsCreated();
            if (cVar1 != '\0') {
                LoadTextures(this);
                UploadDelayedMaterials(this);
                cVar1 = (&field_187816)->has_overflowed();
                if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_textureUpdateFutures.has_overflowed()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1383, (char*)0);
                }
                eastl::list<std::future<void>,
                            eastl::fixed_node_allocator<24ul, 128ul, 8ul, 0ul, true, eastl::allocator>>::
                    remove_if<TextureAtlas::MainDraw()::__0>(&field_187816);
                ProcessRemovalQueue(this);
                eastl::fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>::
                operator=((fixed_hash_map<int, TextureAtlasTextureMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                          eastl::equal_to<int>, false, eastl::allocator>*)&field_33104,
                          (fixed_hash_map*)(m_formatTypeRequest + 8));
                eastl::fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>::
                operator=((fixed_hash_map<int, TextureAtlasMaterialMapping, 1024ul, 1025ul, true, eastl::hash<int>,
                                          eastl::equal_to<int>, false, eastl::allocator>*)&field_115344,
                          (fixed_hash_map*)&field_66024);
                goto LAB_10085c7b8;
            }
        }
        uVar3 = logger::default_logger();
        cVar1 = (&m_texture)->IsCreated();
        cVar2 = (&m_settingsTexture)->IsCreated();
        pcVar4 = "false";
        pcVar5 = "false";
        if (cVar1 != '\0') {
            pcVar5 = "true";
        }
        if (cVar2 != '\0') {
            pcVar4 = "true";
        }
        logger::Logger::Log(uVar3, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/textures/TextureAtlas.cpp",
                            1375, "TextureAtlas MainDraw called without textures (texture: %s, settings: %s) setup",
                            pcVar5, pcVar4);
    LAB_10085c7b8:
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_28);
    }

    // 0x10085c7e0, 224 bytes, placed by class name
    // TextureAtlas::LoadTextures()
    void TextureAtlas::LoadTextures() {
        bool bVar1;
        bool bVar2;
        char cVar3;
        int* piVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar5;
        bool bVar6;
        hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false> local_58[16];
        hashtable_iterator_base local_48[16];
        scoped_lock<std::recursive_mutex> local_38[8];

        if (field_164664 != '\0') {
            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, field_187808);
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = true;
            bVar6 = true;
            phVar5 = extraout_RDX;
            while (bVar2 = eastl::operator!=((eastl*)local_58, local_48, phVar5), bVar2) {
                piVar4 = (int*)local_58->HeapBeginPtr();
                if ((*(char*)((long)piVar4 + 15) != '\x02') &&
                    (cVar3 = UploadTexture(this, *piVar4, (TextureAtlasTextureMapping*)(piVar4 + 1)), bVar6 = bVar1,
                     cVar3 == '\0')) {
                    bVar6 = false;
                    bVar1 = bVar6;
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    local_58);
                phVar5 = extraout_RDX_00;
            }
            if (bVar6) {
                field_164664 = 0;
            }
            std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
        }
    }

    // 0x10085c8c0, 1008 bytes, placed by class name
    // TextureAtlas::UploadDelayedMaterials()
    void TextureAtlas::UploadDelayedMaterials() {
        bool bVar1;
        uint uVar2;
        long lVar3;
        long lVar4;
        ulong uVar5;
        TextureAtlasManager* this_00;
        char* pcVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar7;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        Layout* this_01;
        __1 local_1a0;
        undefined4 local_160;
        hashtable_iterator_base local_158[16];
        hashtable_iterator<eastl::pair<long long const, oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam>,
                           true, false>
            local_148[16];
        undefined1 local_138[8];
        long local_130;
        undefined1* local_128;
        undefined4* local_120;
        long local_118;
        eastl local_110[16];
        scoped_lock<std::recursive_mutex> local_100[8];
        undefined1* local_f8;
        TextureAtlas* local_f0;
        list<game::MiniMap::MapSquareState,
             eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>* local_e8;
        undefined4 local_dc;
        hashtable_iterator_base local_d8[160];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_100, field_187808);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        local_f8 = &field_66024;
        local_128 = m_formatTypeRequest + 8;
        local_e8 = (list<game::MiniMap::MapSquareState,
                         eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)&field_187816;
        phVar7 = extraout_RDX;
        local_f0 = this;
        do {
            bVar1 = eastl::operator!=((eastl*)local_148, local_158, phVar7);
            if (!bVar1) {
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_100);
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
            local_120 = (undefined4*)local_148->HeapBeginPtr();
            local_dc = *local_120;
            eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                             eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                             eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                             true>::find((int*)local_110);
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=(local_110, local_d8, extraout_RDX_01);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("materialMappingIt != m_materialMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlas.cpp",
                          1476, (char*)0);
            }
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=(local_110, local_d8, extraout_RDX_02);
            if (bVar1) {
                lVar3 = local_110->HeapBeginPtr();
                lVar4 = local_110->HeapBeginPtr();
                if (*(char*)(lVar4 + 25) == '\x02') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("materialMappingIt->second.m_loadingState != TextureAtlasTextureLoadingState::READY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/textures/TextureAtlas.cpp",
                              1481, (char*)0);
                }
                local_118 = lVar3;
                lVar4 = ((lVar3 + 4))->begin();
                local_130 = ((lVar3 + 4))->end();
                bVar1 = true;
                if (lVar4 != local_130) {
                    do {
                        eastl::hashtable<
                            int,
                            eastl::pair<int const,
                                        std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                        std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<
                                int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                           std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((int*)local_d8);
                        eastl::hashtable<
                            int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                            eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                        bVar1 =
                            eastl::operator==((eastl*)local_d8, (hashtable_iterator_base*)&local_1a0, extraout_RDX_03);
                        if (bVar1) {
                            bVar1 = false;
                            break;
                        }
                        lVar3 = local_d8->HeapBeginPtr();
                        bVar1 = false;
                        if (*(char*)(lVar3 + 15) != '\x02')
                            break;
                        lVar4 = lVar4 + 4;
                        bVar1 = true;
                    } while (lVar4 != local_130);
                }
                if (bVar1) {
                    uVar5 = eastl::list<
                        game::MiniMap::MapSquareState,
                        eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::size(local_e8);
                    this_00 = (TextureAtlasManager*)local_f0->field_8->GetTextureAtlasManager();
                    uVar2 = this_00->GetMaxSimultaneousTextureUploadsPerAtlas();
                    if ((uVar5 < uVar2) && (lVar3 = local_110->HeapBeginPtr(), *(char*)(lVar3 + 25) == '\0')) {
                        this_01 = (Layout*)local_110;
                        lVar3 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                        *(undefined1*)(lVar3 + 25) = 1;
                        uVar2 = *(uint*)(local_118 + 16);
                        pcVar6 = (char*)this_01->Instance();
                        local_1a0.field_0 = local_f0;
                        local_1a0.field_12._48_2_ = *(undefined2*)(local_120 + 13);
                        local_1a0.field_12._0_8_ = *(undefined8*)(local_120 + 1);
                        local_1a0.field_12._8_8_ = *(undefined8*)(local_120 + 3);
                        local_1a0.field_12._16_8_ = *(undefined8*)(local_120 + 5);
                        local_1a0.field_12._24_8_ = *(undefined8*)(local_120 + 7);
                        local_1a0.field_12._32_8_ = *(undefined8*)(local_120 + 9);
                        local_1a0.field_12._40_8_ = *(undefined8*)(local_120 + 11);
                        local_160 = local_dc;
                        local_1a0.field_8 = uVar2;
                        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                            function<TextureAtlas::UploadDelayedMaterials()::__1, void>(
                                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)
                                    local_d8,
                                &local_1a0);
                        local_138->RunOnThreadPoolRenderContext(pcVar6, (function*)"UploadDelayedMaterials");
                        local_e8->push_back(local_138);
                        local_138->~future();
                        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                            ~function((function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)
                                          local_d8);
                    }
                }
            }
            eastl::hashtable_iterator<
                eastl::pair<long long const, oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam>, true,
                false>::operator++(local_148);
            phVar7 = extraout_RDX_00;
        } while (true);
    }

    // 0x10085cfd0, 32 bytes, placed by class name
    // TextureAtlas::SetSamplerState(render::SamplerState const*)
    void TextureAtlas::SetSamplerState(SamplerState* param_1) {
        (&m_texture, param_1, false)->SetSamplerState();
    }

    // 0x10085cff0, 112 bytes, placed by class name
    // TextureAtlas::GetNumLoadingTextures() const
    undefined4 TextureAtlas::GetNumLoadingTextures() {
        undefined4 uVar1;
        undefined1 auVar2[16];
        undefined1 auVar3[16];
        scoped_lock<std::recursive_mutex> local_30[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, field_187808);
        auVar2 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>::begin();
        auVar3 = ((m_formatTypeRequest + 8))->end();
        uVar1 =
            eastl::count_if<eastl::hashtable_iterator<eastl::pair<int const, TextureAtlasTextureMapping>, true, false>,
                            TextureAtlas::GetNumLoadingTextures() const ::__3>(auVar2._0_8_, auVar2._8_8_, auVar3._0_8_,
                                                                               auVar3._8_8_);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
        return uVar1;
    }

    // 0x10085d0e0, 112 bytes, placed by class name
    // TextureAtlas::GetNumLoadingMaterials() const
    undefined4 TextureAtlas::GetNumLoadingMaterials() {
        undefined4 uVar1;
        undefined1 auVar2[16];
        undefined1 auVar3[16];
        scoped_lock<std::recursive_mutex> local_30[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, field_187808);
        auVar2 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>::begin();
        auVar3 = (&field_66024)->end();
        uVar1 =
            eastl::count_if<eastl::hashtable_iterator<eastl::pair<int const, TextureAtlasMaterialMapping>, true, false>,
                            TextureAtlas::GetNumLoadingMaterials() const ::__4>(auVar2._0_8_, auVar2._8_8_,
                                                                                auVar3._0_8_, auVar3._8_8_);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
        return uVar1;
    }

    // 0x10085d1d0, 1056 bytes, placed by class name
    // TextureAtlas::GetUsageMap(TextureAtlasUsageMap&) const
    void TextureAtlas::GetUsageMap(TextureAtlasUsageMap* param_1) {
        bool bVar1;
        uint uVar2;
        int iVar3;
        int* piVar4;
        uint* puVar5;
        int* piVar6;
        long lVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined1* puVar8;
        recursive_mutex* prVar9;
        ulong uVar10;
        undefined1 auVar11[16];
        BucketAllocatorEASTL local_100[48];
        hashtable_iterator_base local_d0[16];
        hashtable_iterator_base local_c0[24];
        undefined8 local_a8;
        eastl local_a0[32];
        vector<eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>>, BucketAllocatorEASTL>* local_80;
        scoped_lock<std::recursive_mutex> local_78[8];
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_70;
        vector* local_68;
        TextureAtlas* local_60;
        int local_58;
        int local_54;
        float local_50;
        float local_4c;
        ImVec4 local_48[20];
        float local_34;

        prVar9 = field_187808;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_78, prVar9);
        local_70 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)param_1->second();
        local_68 = param_1->SSOBeginPtr(prVar9);
        auVar11 = param_1->GetMaterial();
        local_80 = auVar11._0_8_;
        eastl::destruct<oldscape::highlight::NpcUID*>(local_a0, (NpcUID*)"EASTL map", auVar11._8_8_);
        eastl::map<int, shared_ptr<oldscape::dash3d::AnimBase>, eastl::less<int>, BucketAllocatorEASTL>::map(local_100);
        local_60 = this;
        local_a0._0_16_ = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                           eastl::prime_rehash_policy, false, true, true>::begin();
        local_c0._0_16_ = ((m_formatTypeRequest + 8))->end();
        bVar1 = eastl::operator!=(local_a0, local_c0, local_c0._8_8_);
        if (bVar1) {
            puVar8 = local_60->field_24;
            do {
                piVar4 = (int*)local_a0->HeapBeginPtr();
                uVar2 = puVar8->GetTextureSlotSize((uint) * (ushort*)(piVar4 + 3));
                local_50 = (float)puVar8->GetSlotUVSize();
                local_50 = local_50 * (float)uVar2;
                local_34 = (float)*(ushort*)(piVar4 + 2);
                uVar2 = puVar8->GetAliveCount();
                local_34 = local_34 / (float)uVar2;
                local_4c = (float)*(ushort*)((long)piVar4 + 10);
                uVar2 = puVar8->GetAliveCount();
                ImVec4::ImVec4(local_48, local_34, local_4c / (float)uVar2, local_50, local_50);
                if (*(char*)((long)piVar4 + 15) == '\x02') {
                    uVar2 = local_68->size();
                    puVar5 = (uint*)eastl::map<int, int, eastl::less<int>, BucketAllocatorEASTL>::operator[](
                        (map<int, int, eastl::less<int>, BucketAllocatorEASTL>*)local_100, piVar4);
                    *puVar5 = ~uVar2;
                    local_68->push_back(local_48);
                } else {
                    iVar3 =
                        eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(local_70);
                    piVar4 = (int*)eastl::map<int, int, eastl::less<int>, BucketAllocatorEASTL>::operator[](
                        (map<int, int, eastl::less<int>, BucketAllocatorEASTL>*)local_100, piVar4);
                    *piVar4 = iVar3 + 1;
                    local_70->push_back(local_48);
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_a0);
                bVar1 = eastl::operator!=(local_a0, local_c0, extraout_RDX);
            } while (bVar1);
        }
        puVar8 = &local_60->field_66024;
        local_48._0_16_ = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                           eastl::prime_rehash_policy, false, true, true>::begin();
        local_d0 = (hashtable_iterator_base[16])puVar8->end();
        bVar1 = eastl::operator!=((eastl*)local_48, local_d0, local_d0._8_8_);
        if (bVar1) {
            do {
                piVar4 = (int*)local_48->HeapBeginPtr();
                local_58 = *piVar4;
                eastl::vector<int, BucketAllocatorEASTL>::vector();
                local_c0->reserve(3);
                uVar10 = 0;
                do {
                    piVar6 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(piVar4 + 1), uVar10);
                    local_54 = *piVar6;
                    if (local_54 != -1) {
                        eastl::rbtree<int, eastl::pair<int const, int>, eastl::less<int>, BucketAllocatorEASTL,
                                      eastl::use_first<eastl::pair<int const, int>>, true, true>::find((int*)local_a0);
                        auVar11 =
                            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                          eastl::less<eastl::string>, eastl::allocator,
                                          eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
                        local_a8 = auVar11._0_8_;
                        bVar1 = eastl::operator!=(local_a0, (hashtable_iterator_base*)&local_a8, auVar11._8_8_);
                        if (bVar1) {
                            lVar7 = eastl::rbtree_iterator<
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                            operator*((rbtree_iterator<
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                          local_a0);
                            local_c0->push_back((int*)(lVar7 + 4));
                        }
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 != 3);
                eastl::make_pair<int&, eastl::vector<int, BucketAllocatorEASTL>&>(local_a0, &local_58,
                                                                                  (vector*)local_c0);
                eastl::vector<eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>>, BucketAllocatorEASTL>::
                    emplace_back<eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>>>(local_80, (pair*)local_a0);
                local_a0->~pair();
                local_c0->~vector_set();
                eastl::hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false,
                                          false>::
                operator++(
                    (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>*)
                        local_48);
                bVar1 = eastl::operator!=((eastl*)local_48, local_d0, extraout_RDX_00);
            } while (bVar1);
        }
        local_100->~map();
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_78);
    }

    // 0x10085d920, 480 bytes, placed by class name
    // TextureAtlas::GetDetailsAtPosition(int&, int&, int&, unsigned int&, eastl::vector<eastl::pair<int, int>, eastl::allocator>&, int, int) const
    ulong TextureAtlas::GetDetailsAtPosition(int* param_1, int* param_2, int* param_3, uint* param_4, vector* param_5,
                                             int param_6, int param_7) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        undefined1 auVar4[16];
        undefined1 auVar5[16];
        undefined1 auVar6[16];
        undefined1 auVar7[16];
        bool bVar8;
        vector* pvVar9;
        int* piVar10;
        int* piVar11;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>* this_00;
        recursive_mutex* prVar12;
        undefined1* puVar13;
        undefined1 local_78[16];
        undefined8 local_68;
        uint* local_60;
        TextureAtlas* local_58;
        undefined1 local_50[16];
        scoped_lock<std::recursive_mutex> local_40[8];
        int local_38;
        int local_34;

        prVar12 = field_187808;
        local_60 = param_4;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, prVar12);
        puVar13 = field_24;
        local_58 = this;
        pvVar9 = puVar13->SSOBeginPtr(prVar12);
        *param_1 = (uint)param_6 / *(uint*)pvVar9;
        pvVar9 = puVar13->SSOBeginPtr(prVar12);
        *param_2 = (uint)param_7 / *(uint*)pvVar9;
        pvVar9 = puVar13->SSOBeginPtr(prVar12);
        auVar7._8_8_ = local_50._8_8_;
        auVar7._0_8_ = local_50._0_8_;
        auVar6._8_8_ = local_50._8_8_;
        auVar6._0_8_ = local_50._0_8_;
        auVar5._8_8_ = local_78._8_8_;
        auVar5._0_8_ = local_78._0_8_;
        auVar4._8_8_ = local_78._8_8_;
        auVar4._0_8_ = local_78._0_8_;
        uVar2 = *param_1;
        if (-1 < (int)uVar2) {
            uVar3 = *param_2;
            this_00 =
                (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>*)0;
            if ((((int)uVar3 < 0) || (local_78 = auVar4, local_50 = auVar6, *(int*)(pvVar9 + 4) <= (int)uVar2)) ||
                (local_78 = auVar5, local_50 = auVar7, *(int*)(pvVar9 + 4) <= (int)uVar3))
                goto LAB_10085dac0;
            piVar10 = (int*)puVar13->GetSlot(uVar2, uVar3);
            if (piVar10 != (int*)0) {
                *param_3 = *piVar10;
                *local_60 = (uint) * (ushort*)(piVar10 + 1);
                if (*param_3 != -1) {
                    puVar13 = &local_58->field_66024;
                    local_50 =
                        eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::begin();
                    local_78 = puVar13->end();
                    bVar8 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_78, local_78._8_8_);
                    if (bVar8) {
                        do {
                            piVar10 = (int*)local_50->HeapBeginPtr();
                            local_38 = *piVar10;
                            if (-1 < local_38) {
                                local_34 = 0;
                                do {
                                    piVar11 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)(piVar10 + 1),
                                                                                     (long)local_34);
                                    if (*piVar11 == *param_3) {
                                        local_68 = eastl::make_pair<int, int&>(&local_38, &local_34);
                                        eastl::vector<eastl::pair<int, int>, eastl::allocator>::emplace_back<
                                            eastl::pair<int, int>>(
                                            (vector<eastl::pair<int, int>, eastl::allocator>*)param_5,
                                            (pair*)&local_68);
                                    }
                                    iVar1 = local_34 + 1;
                                    bVar8 = local_34 < 2;
                                    local_34 = iVar1;
                                } while (bVar8);
                            }
                            this_00 =
                                (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>,
                                                    false, false>*)local_50;
                            eastl::hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>,
                                                      false, false>::operator++(this_00);
                            bVar8 =
                                eastl::operator!=((eastl*)this_00, (hashtable_iterator_base*)local_78, extraout_RDX);
                        } while (bVar8);
                    }
                    this_00 = (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>,
                                                  false, false>*)CONCAT71((int7)((ulong)this_00 >> 8), 1);
                    goto LAB_10085dac0;
                }
            }
        }
        this_00 = (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>*)0;
    LAB_10085dac0:
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
        return (ulong)this_00 & 4294967295;
    }

    // 0x10085db60, 112 bytes, placed by class name
    // TextureAtlas::CheckMaterialsFit(WrapArray<MaterialInfo const> const&)
    undefined4 TextureAtlas::CheckMaterialsFit(WrapArray* param_1) {
        undefined4 uVar1;
        scoped_lock<std::recursive_mutex> local_28[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_28, field_187808);
        uVar1 = CheckMaterialsFitWorstCase(this, param_1);
        if ((char)uVar1 == '\0') {
            uVar1 = GetTextureSlots(this, (fixed_vector*)0, param_1);
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_28);
        return uVar1;
    }

    // 0x10085dbd0, 368 bytes, placed by class name
    // TextureAtlas::CheckMaterialsFitWorstCase(WrapArray<MaterialInfo const> const&)
    undefined4 TextureAtlas::CheckMaterialsFitWorstCase(WrapArray* param_1) {
        uint uVar1;
        int iVar2;
        int* piVar3;
        long lVar4;
        uint* puVar5;
        undefined4 uVar6;
        ulong uVar7;
        uint uVar8;
        ulong uVar9;
        scoped_lock<std::recursive_mutex> local_40[8];
        uint local_38;
        uint local_34;

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, field_187808);
        uVar1 = param_1->HeapBeginPtr();
        if (uVar1 < 1344) {
            piVar3 = (int*)GetAtlasQuality(this);
            local_34 = *piVar3 << 2;
            if (uVar1 == 0) {
                uVar8 = 3;
            } else {
                uVar8 = 3;
                uVar7 = 0;
                do {
                    lVar4 = WrapArray<MaterialInfo_const>::operator[]((WrapArray<MaterialInfo_const>*)param_1, uVar7);
                    uVar9 = 0;
                    do {
                        puVar5 = (uint*)std::array<unsigned int, 3ul>::operator[](
                            (array<unsigned int, 3ul>*)(lVar4 + 16), uVar9);
                        local_38 = *puVar5;
                        if (local_38 != 0) {
                            puVar5 = std::max<unsigned int>(&local_34, &local_38);
                            local_34 = *puVar5;
                            uVar8 = uVar8 + 1;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 3);
                    uVar7 = uVar7 + 1;
                } while (uVar7 != uVar1);
            }
            iVar2 = field_24->GetGutteringSlotCount();
            piVar3 = (int*)GetAtlasQuality(this);
            local_34 = local_34 + iVar2 * *piVar3 * 2;
            iVar2 = field_24->GetMaxAtlasSlotCount();
            piVar3 = (int*)GetAtlasQuality(this);
            uVar1 = (uint)(iVar2 * *piVar3) / local_34;
            uVar6 = CONCAT31((int3)((uint)(iVar2 * *piVar3) >> 8), uVar8 < uVar1 * uVar1);
        } else {
            uVar6 = 0;
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
        return uVar6;
    }

    // 0x10085e1d0, 16 bytes, complete-object destructor, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::~$_8(): jumps straight to the base-object destructor

    // 0x10086aa70, 16 bytes, base-object destructor, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::~$_8()
    /* ~$_8() */

    void TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::~__8() {
        field_16->~shared_ptr();
    }

    // 0x100870050, 176 bytes, placed by class name
    // TextureAtlas::UploadDelayedMaterials()::$_1::operator()(render::RenderContext&) const
    /* TextureAtlas::UploadDelayedMaterials()::$_1::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    void TextureAtlas::UploadDelayedMaterials()::$_1::operator()(RenderContext* param_1) {
        TextureAtlas* this_00;
        long lVar1;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[16];
        eastl local_30[16];
        scoped_lock<std::recursive_mutex> local_20[8];

        this_00 = field_0;
        SetMaterialSettingsTextureData(this_00, field_8, (TextureAtlasMaterialSettings*)field_12);
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_20, this_00->field_187808);
        (&this_00->field_167824, (int*)(this + 1))->erase();
        eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                         eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_30);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar1 = local_30->HeapBeginPtr();
            *(undefined1*)(lVar1 + 25) = 2;
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_20);
    }

    // 0x1008716a0, 16 bytes, complete-object constructor, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::$_8($_8&&): jumps straight to the base-object constructor

    // 0x1008716b0, 64 bytes, base-object constructor, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::$_8($_8&&)
    /* $_8($_8&&) */

    void TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::__8(__8* param_1) {
        field_8 = *(undefined4*)(param_1 + 8);
        field_0 = *(TextureAtlas**)param_1;
        new (field_16, (shared_ptr*)(param_1 + 16)) shared_ptr<oldscape::dash3d::Decor>();
        field_40 = *(undefined4*)(param_1 + 40);
        field_32 = *(undefined8*)(param_1 + 32);
    }

    // 0x100871720, 16 bytes, complete-object constructor, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::$_8($_8 const&): jumps straight to the base-object constructor

    // 0x100871730, 64 bytes, base-object constructor, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::$_8($_8 const&)
    /* $_8($_8 const&) */

    void TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::__8(__8* param_1) {
        field_8 = *(undefined4*)(param_1 + 8);
        field_0 = *(TextureAtlas**)param_1;
        new (field_16, (shared_ptr*)(param_1 + 16)) shared_ptr<oldscape::dash3d::Decor>();
        field_40 = *(undefined4*)(param_1 + 40);
        field_32 = *(undefined8*)(param_1 + 32);
    }

    // 0x100871790, 160 bytes, placed by class name
    // TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::operator()(render::RenderContext&) const
    /* TextureAtlas::UploadTexture(int,
   TextureAtlasTextureMapping&)::$_8::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    void TextureAtlas::UploadTexture(int, TextureAtlasTextureMapping&)::$_8::operator()(RenderContext* param_1) {
        TextureAtlas* this_00;
        long lVar1;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[16];
        eastl local_30[16];
        scoped_lock<std::recursive_mutex> local_20[8];

        this_00 = field_0;
        AddTextureData(this_00, (shared_ptr*)field_16, (TextureAtlasTextureMapping*)&field_32);
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_20, this_00->field_187808);
        eastl::hashtable<
            int,
            eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                   std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>,
            eastl::allocator,
            eastl::use_first<
                eastl::pair<int const, std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                                       std::default_delete<oldscape::ChatHistory::HistoryBuffer>>>>,
            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
            eastl::prime_rehash_policy, false, true, true>::find((int*)local_30);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar1 = local_30->HeapBeginPtr();
            *(undefined1*)(lVar1 + 15) = 2;
        }
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_20);
    }

    // 0x100888930, 2496 bytes, placed by the data it initialises
    // ___cxx_global_var_init.117
    void ___cxx_global_var_init_117() {
        long lVar1;
        allocator local_1b8[8];
        allocator local_1b0[8];
        allocator local_1a8[8];
        allocator local_1a0[8];
        allocator local_198[8];
        allocator local_190[8];
        allocator local_188[8];
        allocator local_180[8];
        allocator local_178[8];
        allocator local_170[8];
        allocator local_168[8];
        allocator local_160[8];
        allocator local_158[8];
        allocator local_150[8];
        allocator local_148[8];
        allocator local_140[8];
        allocator local_138[8];
        allocator local_130[8];
        allocator local_128[8];
        allocator local_120[8];
        allocator local_118[8];
        allocator local_110[8];
        undefined4 local_108;
        undefined4 local_104;
        undefined4 local_100;
        undefined4 local_fc;
        undefined4 local_f8;
        undefined2 local_f1;
        undefined1 local_ef;
        undefined2 local_ee;
        undefined1 local_ec;
        undefined1 local_eb;
        undefined1 local_ea;
        undefined1 local_e9;
        undefined7 local_e8;
        undefined4 uStack_e1;
        undefined1 local_dd;
        undefined4 local_dc;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined2 local_c8;
        undefined4 local_c6;
        undefined2 local_c2;
        undefined8 local_c0;
        undefined8 local_b8;
        undefined8 local_b0;
        undefined1 local_a8;
        undefined4 local_a7;
        undefined3 uStack_a3;
        undefined8 local_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 local_80;
        undefined2 local_78;
        undefined4 local_76;
        undefined3 uStack_72;
        undefined2 local_6f;
        undefined1 local_6d;
        undefined4 local_6c;
        undefined8 local_68;
        undefined8 local_60;
        undefined2 local_58;
        undefined4 local_56;
        undefined2 local_52;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_40 = 6148914694099763200;
        eastl::allocator::allocator(local_1b8, "EASTL fixed_vector");
        new (&TextureAtlas::m_initialisationData)
            eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_40, 8, local_1b8);
        local_48 = 6148914694099763200;
        eastl::allocator::allocator(local_1b0, "EASTL fixed_vector");
        new (&DAT_103bbd598) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_48, 8, local_1b0);
        lVar1 = 0;
        do {
            new ((&DAT_103bbd5d0 + lVar1)) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>();
            lVar1 = lVar1 + 56;
        } while (lVar1 != 168);
        local_58 = 65535;
        local_56 = 0;
        local_52 = 0;
        local_50 = 12297829383904690175;
        eastl::allocator::allocator(local_1a8, "EASTL fixed_vector");
        new (&DAT_103bbd678) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_58, 16, local_1a8);
        local_68 = 0;
        local_60 = 12297829383904690175;
        eastl::allocator::allocator(local_1a0, "EASTL fixed_vector");
        new (&DAT_103bbd6b0) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_68, 16, local_1a0);
        local_78 = 33152;
        local_76 = 0;
        uStack_72 = 0;
        local_6f = 57348;
        local_6d = 3;
        local_6c = 2863311530;
        eastl::allocator::allocator(local_198, "EASTL fixed_vector");
        new (&DAT_103bbd6e8) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_78, 16, local_198);
        local_88 = 0;
        local_80 = 12297829379741845472;
        eastl::allocator::allocator(local_190, "EASTL fixed_vector");
        new (&DAT_103bbd720) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_88, 16, local_190);
        local_98 = 0;
        uStack_90 = 0;
        eastl::allocator::allocator(local_188, "EASTL fixed_vector");
        new (&DAT_103bbd758) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_98, 16, local_188);
        local_a8 = 255;
        local_a7 = 0;
        uStack_a3 = 0;
        local_a0 = 49871096;
        eastl::allocator::allocator(local_180, "EASTL fixed_vector");
        new (&DAT_103bbd790) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_a8, 16, local_180);
        local_b8 = 0;
        local_b0 = 49871096;
        eastl::allocator::allocator(local_178, "EASTL fixed_vector");
        new (&DAT_103bbd7c8) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_b8, 16, local_178);
        local_c8 = 4096;
        local_c6 = 0;
        local_c2 = 0;
        local_c0 = 18446744069414619272;
        eastl::allocator::allocator(local_170, "EASTL fixed_vector");
        new (&DAT_103bbd800) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_c8, 16, local_170);
        local_d8 = 2614781743216070911;
        uStack_d0 = 281470715297792;
        eastl::allocator::allocator(local_168, "EASTL fixed_vector");
        new (&DAT_103bbd838) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_d8, 16, local_168);
        local_e8 = 0;
        uStack_e1 = 0;
        local_dd = 2;
        local_dc = 4294967295;
        eastl::allocator::allocator(local_160, "EASTL fixed_vector");
        new (&DAT_103bbd870) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_e8, 16, local_160);
        local_eb = 255;
        eastl::allocator::allocator(local_158, "EASTL fixed_vector");
        new (&DAT_103bbd8a8) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_eb, 1, local_158);
        local_ea = 255;
        eastl::allocator::allocator(local_150, "EASTL fixed_vector");
        new (&DAT_103bbd8e0) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_ea, 1, local_150);
        local_e9 = 0;
        eastl::allocator::allocator(local_148, "EASTL fixed_vector");
        new (&DAT_103bbd918) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_e9, 1, local_148);
        lVar1 = 0;
        do {
            new ((&DAT_103bbd950 + lVar1)) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>();
            lVar1 = lVar1 + 56;
        } while (lVar1 != 112);
        local_f1 = 65535;
        local_ef = 255;
        eastl::allocator::allocator(local_140, "EASTL fixed_vector");
        new (&DAT_103bbd9c0) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_f1, 3, local_140);
        local_ee = 65535;
        local_ec = 255;
        eastl::allocator::allocator(local_138, "EASTL fixed_vector");
        new (&DAT_103bbd9f8) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_ee, 3, local_138);
        lVar1 = 0;
        do {
            new ((&DAT_103bbda30 + lVar1)) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>();
            lVar1 = lVar1 + 56;
        } while (lVar1 != 168);
        local_fc = 4294967295;
        eastl::allocator::allocator(local_130, "EASTL fixed_vector");
        new (&DAT_103bbdad8) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_fc, 4, local_130);
        local_108 = 16777215;
        eastl::allocator::allocator(local_128, "EASTL fixed_vector");
        new (&DAT_103bbdb10) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_108, 4, local_128);
        local_104 = 2164228096;
        eastl::allocator::allocator(local_120, "EASTL fixed_vector");
        new (&DAT_103bbdb48) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_104, 4, local_120);
        local_100 = 65280;
        eastl::allocator::allocator(local_118, "EASTL fixed_vector");
        new (&DAT_103bbdb80) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_100, 4, local_118);
        local_f8 = 0;
        eastl::allocator::allocator(local_110, "EASTL fixed_vector");
        new (&DAT_103bbdbb8) eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>(&local_f8, 4, local_110);
        ___cxa_atexit(PTR__array_100ee6ee0, &TextureAtlas::m_initialisationData, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008892f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.119
    void ___cxx_global_var_init_119() {
        new (&TextureAtlas::m_clearData) std::array<std::array<Array<unsigned char, eastl::allocator>, 5ul>, 6ul>();
        ___cxa_atexit(PTR__array_100ee6ed8, &TextureAtlas::m_clearData, 4294967296);
    }

} // namespace jag::graphics
