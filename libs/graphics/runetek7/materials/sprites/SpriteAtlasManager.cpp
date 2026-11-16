// libs/graphics/runetek7/materials/sprites/SpriteAtlasManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SpriteAtlasManager.h"

namespace jag::graphics {
    // 0x100f441a0
    int32_t SpriteAtlasManager::m_spriteLoadModeOverride[4] = {2, 0, 0, 0};

    // 0x103bc03f8
    int64_t SpriteAtlasManager::m_forceSpriteAtlasTo2K;

    // 0x100013220: SpriteAtlasManager::GetSpriteIDFromHash(long long) has the same machine code as oldscape::highlight::ShortIDFromNPCKey(long long)

    // 0x100067280: SpriteAtlasManager::GetAtlases() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x10012d160: SpriteAtlasManager::LoadingRequest::~LoadingRequest() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x1008c9fd0
    void SpriteAtlasManager::GetUsageTypeFromHash(long long arg1) {
        if (-1 < arg1) {
            if ((arg1 & 131072U) != 0) {
                if ((arg1 & 2097152U) != 0) {
                    LogAssert("((spriteHash >> graphics::HASH_OBJSPRITE_IS_HIGHRES) & 0x1) == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              493, nullptr);
                }
                return 1;
            }
            if (((unsigned long)arg1 >> 45 & 1) != 0) {
                return 2;
            }
        }
        return 0;
    }

    // 0x1008ca040
    void GetSpriteAtlasSize(unsigned int arg1) {
        GpuMemoryProfile gpuMemoryProfile1;
        uint32_t in_register_0000003c;
        Singleton<render::RenderDevice>* this_01;

        unsigned int local_c = arg1;
        if (SpriteAtlasManager::m_forceSpriteAtlasTo2K == '\0') {
            gpuMemoryProfile1 =
                ((RenderDevice*)((Singleton<render::RenderDevice>*)(((uint64_t)in_register_0000003c << 32) |
                                                                    (uint32_t)arg1))
                     ->Instance())
                    ->GetGpuMemoryProfile();
            this_01 = (Singleton<render::RenderDevice>*)(unsigned long)gpuMemoryProfile1;
            if (render::operator<(gpuMemoryProfile1, 1) == '\0')
                goto LAB_1008ca08a;
        }
        this_01 = (Singleton<render::RenderDevice>*)&local_c;
        auto puVar2 = std::min<unsigned int>(*this_01, 2048);
        local_c = *puVar2;
    LAB_1008ca08a:
        long lVar3 = ((MapArea*)this_01->Instance())->GetOrigin();
        unsigned int local_10 = *(unsigned int*)(lVar3 + 52);
        std::min<unsigned int>(local_c, local_10);
    }

    // 0x1008ca0d0
    SpriteAtlasManager::SpriteAtlasManager()
        : CountdownTimerT<std::chrono::steady_clock>(), field_20(0), field_28(0), field_8(nullptr) {

        *(uint64_t*)&field_16 = 0;
        new (&field_40) eastl::vector<shared_ptr<SpriteAtlas>>();
        new (&field_72) eastl::vector<SpriteAtlasManager::LoadingRequest>();
        field_104 = 1;
        new (&field_112) eastl::vector<std::function<void()>>();
        new (&field_144) eastl::vector<std::function<bool()>>();
        new (&field_176) eastl::map(local_38);
    }

    // 0x1008ca210
    SpriteAtlasManager::~SpriteAtlasManager() {
        Destroy();
        field_176.~map();
        field_144.~vector();
        field_112.~vector();
        field_72.~vector();
        field_40.~vector();
    }

    // 0x1008ca2a0
    void SpriteAtlasManager::Destroy() {
        long lVar5;
        shared_ptr<SpriteAtlasReference>* spriteAtlasReference;
        shared_ptr<SpriteAtlasReference>* psVar6;
        ReturnValue local_78;
        ReturnValue local_70;
        bool local_31;

        vector_map<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>, eastl::less<int>,
                   BucketAllocatorEASTL>
            local_68;
        uint8_t* this_00 = &field_40;
        SpriteAtlasManager* local_40 = this;
        auto this_01 = this_00->HeapBeginPtr();
        vector<shared_ptr<oldscape::rseven::Terrain>>* local_48 =
            (vector<shared_ptr<oldscape::rseven::Terrain>>*)this_00;
        auto psVar4 = this_00->end();
        if (this_01 != psVar4) {
            do {
                ((SpriteAtlas*)(*this_01).operator->())->Destroy(&local_68);
                if (this_01->use_count() != 1) {
                    LogAssert("it.use_count() == 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              83, nullptr);
                }
                this_01->reset();
                this_01 = this_01 + 16;
            } while (this_01 != psVar4);
        }
        local_48->clear();
        SpriteAtlasManager* pSVar7 = local_40;
        *(uint32_t*)((long)&local_40->field_28 + 4) = 0;
        local_40->field_112.clear();
        pSVar7->field_144.clear();
        if (local_68.empty() == '\0') {
            local_31 = (m_spriteLoadModeOverride & 4294967293) == 0;
            local_78 = local_68.rbegin();
            while (true) {
                local_70 = local_68.rend();
                if (!local_78 != local_70)
                    break;
                lVar5 = local_78.operator->();
                spriteAtlasReference = (shared_ptr<SpriteAtlasReference>*)((lVar5 + 8))->HeapBeginPtr();
                psVar6 = (shared_ptr<SpriteAtlasReference>*)((lVar5 + 8))->end();
                for (; spriteAtlasReference != psVar6; spriteAtlasReference = spriteAtlasReference + 16) {
                    pSVar7->field_72.emplace_back<shared_ptr<SpriteAtlasReference> const&, bool&>(*spriteAtlasReference,
                                                                                                  local_31);
                }
                ++local_78;
            }
            pSVar7 = local_40;
        }
        pSVar7->field_8 = nullptr;
        *(uint64_t*)&pSVar7->field_16 = 0;
        *(uint64_t*)((long)&pSVar7->field_20 + 4) = 0;
    }

    // 0x1008ca490
    void SpriteAtlasManager::Initialise(TextureManager* textureManager, Js5ResourceProvider* js5ResourceProvider,
                                        const Js5ArchiveSettings* js5ArchiveSettings) {
        field_8 = textureManager;
        *(Js5ResourceProvider**)&field_16 = js5ResourceProvider;
        *(Js5ArchiveSettings**)((long)&field_20 + 4) = js5ArchiveSettings;
        *this = CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond(300000);
    }

    // 0x1008ca660
    void SpriteAtlasManager::DestroyRenderingResources() {
        Destroy();
    }

    // 0x1008ca670
    void SpriteAtlasManager::UnregisterSpriteIDAlwaysLoaded(unsigned int arg1) {
        long lVar2;
        long long* plVar3;
        shared_ptr<SpriteAtlasReference>* this_00;
        shared_ptr<SpriteAtlasReference>* psVar4;
        shared_ptr<SpriteAtlas>* this_01;
        shared_ptr<SpriteAtlas>* psVar5;
        Layout* pLVar6;
        long lVar7;
        ReturnValue local_68;
        rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<long long> _>,
                        eastl::pair<unsigned int const, eastl::vector<long long> _> const*,
                        eastl::pair<unsigned int const, eastl::vector<long long> _> const&>* local_60;
        long long* local_58;
        Layout* local_50;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<long long>>, eastl::less<unsigned int>,
               eastl::allocator, eastl::use_first<eastl::pair<unsigned int const, eastl::vector<long long>>>, true,
               true>* local_48;

        auto local_40 = field_176.find(arg1);
        local_68.end();
        if (local_40 != local_68 != '\0') {
            local_48 = (rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<long long>>,
                               eastl::less<unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<long long>>>, true,
                               true>*)&field_176;
            lVar2 = *local_40;
            plVar3 = (long long*)((lVar2 + 8))->HeapBeginPtr();
            local_58 = (long long*)((lVar2 + 8))->end();
            if (plVar3 != local_58) {
                local_50 = (Layout*)&field_72;
                do {
                    pLVar6 = local_50;
                    this_00 = (shared_ptr<SpriteAtlasReference>*)local_50->HeapBeginPtr();
                    psVar4 = (shared_ptr<SpriteAtlasReference>*)pLVar6->end();
                    for (; this_00 != psVar4; this_00 = this_00 + 24) {
                        lVar2 = *plVar3;
                        pLVar6 = (Layout*)(*this_00).operator->();
                        lVar7 = pLVar6->HeapBeginPtr();
                        if (lVar2 == lVar7) {
                            ((SpriteAtlasReference*)(*this_00).operator->())->DecrementAlwaysLoaded();
                        }
                    }
                    this_01 = (shared_ptr<SpriteAtlas>*)field_40.HeapBeginPtr();
                    psVar5 = (shared_ptr<SpriteAtlas>*)field_40.end();
                    for (; this_01 != psVar5; this_01 = this_01 + 16) {
                        ((SpriteAtlas*)(*this_01).operator->())->DecrementAlwaysLoaded(*plVar3);
                    }
                    plVar3 = plVar3 + 1;
                } while (plVar3 != local_58);
            }
            new (&local_60) eastl::ListIterator(&local_40);
            local_68 = local_48->erase(local_60);
        }
    }

    // 0x1008ca920
    void SpriteAtlasManager::RegisterSpriteIDAlwaysLoaded(unsigned int arg1, int arg2, bool arg3) {
        bool bVar1;
        long lVar7;
        uint64_t in_register_00000009;
        long* plVar9;
        ReturnValue local_58;

        long local_30 = (long)((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) << 18 | arg2);
        Layout* pLVar3 = &field_176[arg1];
        auto plVar4 = pLVar3->HeapBeginPtr();
        auto plVar5 = pLVar3->end();
        if (plVar4 != plVar5) {
            do {
                plVar9 = plVar4 + 1;
                bVar1 = true;
                if (*plVar4 == local_30)
                    break;
                plVar4 = plVar9;
                bVar1 = false;
            } while (plVar9 != plVar5);
            if (bVar1) {
                return;
            }
        }
        pLVar3->push_back(local_30);
        auto this_00 = field_72.HeapBeginPtr();
        auto psVar6 = field_72.end();
        long lVar2 = local_30;
        for (; local_30 = lVar2, this_00 != psVar6; this_00 = this_00 + 24) {
            pLVar3 = (Layout*)(*this_00).operator->();
            lVar7 = pLVar3->HeapBeginPtr();
            if (lVar2 == lVar7) {
                ((SpriteAtlasReference*)(*this_00).operator->())->IncrementAlwaysLoaded();
            }
            lVar2 = local_30;
        }
        auto this_02 = field_40.HeapBeginPtr();
        auto psVar8 = field_40.end();
        long long arg1_00 = local_30;
        for (; local_30 = arg1_00, this_02 != psVar8; this_02 = this_02 + 16) {
            ((SpriteAtlas*)(*this_02).operator->())->IncrementAlwaysLoaded(local_30);
            arg1_00 = local_30;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        GetSpriteReference(&local_58, this, arg1_00, &local_48, 2);
    }

    // 0x1008cab60
    auto SpriteAtlasManager::GetSpriteReference(long long arg1, const shared_ptr<SpriteAtlas>& spriteAtlas,
                                                SpriteLoadMode spriteLoadMode) {
        long lVar2;
        unsigned long* puVar3;
        unsigned long* puVar4;
        SpriteAtlasReference* pSVar5;
        SpriteLoadMode SVar6;
        ReturnValue local_68;
        long long local_48;
        shared_ptr<oldscape::dash3d::ModelLit> local_40;

        FindSpriteReference(&local_40, (long long)this, (shared_ptr<SpriteAtlas>*)arg1);
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_40);
        if (!cVar1) {
            if (((unsigned long)arg1 & 131072) == 0) {
                if ((unsigned long)arg1 == 18446744073709551615) {
                    LogAssert("spriteHash != -1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              206, "%s: cannot get sprite reference, invalid sprite hash -1", "GetSpriteReference");
                }
                local_48._0_4_ = 4294967295;
                MakeSharedPool<SpriteAtlasReference, 2048>::MakeShared<shared_ptr<SpriteAtlas> const&, int, long long&>(
                    &local_68, (int*)spriteAtlas, &local_48);
                local_40 = local_68;
                local_68 = field_176.rbegin();
                local_48.end();
                while (cVar1 = local_68 != local_48, cVar1) {
                    lVar2 = *local_68;
                    puVar3 = (unsigned long*)((lVar2 + 8))->HeapBeginPtr();
                    puVar4 = (unsigned long*)((lVar2 + 8))->end();
                    for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                        if (*puVar3 == (unsigned long)arg1) {
                            pSVar5 = (SpriteAtlasReference*)local_40.operator->();
                            pSVar5->IncrementAlwaysLoaded();
                        }
                    }
                    ++local_68;
                }
                SVar6 = spriteLoadMode;
                if (m_spriteLoadModeOverride != 2) {
                    SVar6 = m_spriteLoadModeOverride;
                }
                local_68[0]._0_1_ = (SVar6 & 4294967293) == 0;
                AttemptSpriteLoad(local_40, spriteAtlas, (bool)local_68[0]._0_1_);
                pSVar5 = (SpriteAtlasReference*)local_40.operator->();
                cVar1 = pSVar5->IsReady();
                if (!cVar1) {
                    field_72.emplace_back<shared_ptr<SpriteAtlasReference>&, bool&>(local_40, local_68);
                }
                result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                auto result(
                    (shared_ptr<oldscape::dash3d::GroundDecor>*)&SpriteAtlasReference::NullSpriteAtlasReference);
            }
        } else {
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        }
        return result;
    }

    // 0x1008cada0
    SpriteAtlasManager* SpriteAtlasManager::FindSpriteReference(long long arg1,
                                                                const shared_ptr<SpriteAtlas>& spriteAtlas) const {
        shared_ptr<SpriteAtlasReference>* this_01;
        shared_ptr<SpriteAtlasReference>* psVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        shared_ptr<oldscape::midi2::MidiRequest>* in_RCX;
        uint8_t auVar6[16];

        if (spriteAtlas == (shared_ptr<SpriteAtlas>*)18446744073709551615) {
            LogAssert("spriteHash != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasManager.cpp",
                      262, "%s: Unable to find sprite reference, invalid sprite hash -1", "FindSpriteReference");
        }
        uint32_t local_3c = GetUsageTypeFromHash((long long)spriteAtlas);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        Layout* pLVar5 = (Layout*)(arg1 + 40);
        auto psVar2 = pLVar5->HeapBeginPtr();
        auVar6 = pLVar5->end();
        psVar2 =
            std::find_if<shared_ptr<SpriteAtlas> const*, long long->FindSpriteReference(shared_ptr<SpriteAtlas> const&)
                                                             const ::__4>(psVar2, auVar6._0_8_, auVar6._8_8_);
        auto psVar3 = pLVar5->end();
        if (psVar2 == psVar3) {
            this_01 = (shared_ptr<SpriteAtlasReference>*)((arg1 + 72))->HeapBeginPtr();
            psVar4 = (shared_ptr<SpriteAtlasReference>*)((arg1 + 72))->end();
            for (; this_01 != psVar4; this_01 = this_01 + 24) {
                this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_01)
                              .operator->();
                midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)this_02->second();
                if (*midiRequest1 == *in_RCX) {
                    pLVar5 = (Layout*)(*this_01).operator->();
                    psVar2 = (shared_ptr<SpriteAtlas>*)pLVar5->HeapBeginPtr();
                    if (psVar2 == spriteAtlas) {
                        new (this) shared_ptr(this_01);
                        goto LAB_1008caefa;
                    }
                }
            }
            new (this)
                shared_ptr((shared_ptr<oldscape::dash3d::GroundDecor>*)&SpriteAtlasReference::NullSpriteAtlasReference);
        } else {
            shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_58);
        }
    LAB_1008caefa:
        return this;
    }

    // 0x1008cb050
    void SpriteAtlasManager::AttemptSpriteLoad(shared_ptr<SpriteAtlasReference>& spriteAtlasReference,
                                               const shared_ptr<SpriteAtlas>& spriteAtlas, bool arg3) {
        unsigned int uVar3;
        Layout* pLVar4;
        unsigned long arg1;
        unsigned int arg1_00;
        unsigned long uVar7;
        PacketView local_228;
        shared_ptr<SpriteAtlas>* local_200;
        SpriteAtlasManager* local_1f8;
        RGBAImage local_e8;
        RGBAImage local_90;

        int iVar2 = ((RenderDevice*)Instance())->GetReadyState();
        if (iVar2 == 0) {
            if (spriteAtlasReference.operator_cast_to_bool() == '\0') {
                LogAssert("spriteReference",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/sprites/SpriteAtlasManager.cpp",
                          296, "%s: unable to load sprite, sprite reference is null", "AttemptSpriteLoad");
            }
            local_200 = spriteAtlas;
            local_1f8 = this;
            pLVar4 = (Layout*)spriteAtlasReference.operator->();
            if (pLVar4->HeapBeginPtr() == -1) {
                LogAssert("spriteReference->GetSpriteHash() != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/sprites/SpriteAtlasManager.cpp",
                          297, "%s: unable to load sprite, sprite hash is invalid", "AttemptSpriteLoad");
            }
            pLVar4 = (Layout*)spriteAtlasReference.operator->();
            arg1 = pLVar4->HeapBeginPtr();
            uVar3 = oldscape::ClientNpc::GetShortIDFromUID(arg1);
            local_228 = PacketView();
            if ((uint8_t*)(*(Js5ResourceProvider**)&local_1f8->field_16)
                    ->GetFile(local_228, *(*(Js5ArchiveSettings**)((long)&local_1f8->field_20 + 4)), uVar3, 0,
                              (Priority*)Priority::HIGHEST, true, true, arg3) == DataStatus::READY) {
                local_90 = RGBAImage();
                RAWDecoder::LoadSingle(local_90, local_228);
                uVar3 = local_90.GetZ();
                iVar2 = local_90.GetX();
                local_e8 = local_90.PadImage(1, false);
                local_90 = local_e8;
                if ((arg1 >> 19 & 3) != 0) {
                    (local_90.AddOutline(255)).~RGBAImage();
                    if (((unsigned int)(arg1 >> 19) & 3) == 2) {
                        (local_90.AddOutline(4294967295)).~RGBAImage();
                    }
                }
                uVar7 = arg1 + 2097151;
                if (-1 < (long)arg1) {
                    uVar7 = arg1;
                }
                arg1_00 = (int)(uVar7 >> 21) << 8;
                if (arg1_00 != 0) {
                    (local_90.AddShadow(arg1_00)).~RGBAImage();
                }
                AddSpriteData((shared_ptr<SpriteAtlasReference>*)local_1f8, (RGBAImage*)spriteAtlasReference,
                              (int)&local_90, 1, iVar2, (shared_ptr<SpriteAtlas>*)(unsigned long)uVar3);
            }
        }
    }

    // 0x1008cb400
    SpriteAtlasManager* SpriteAtlasManager::AddObjSpriteReference(long long arg1, unsigned int arg2,
                                                                  unsigned int arg3) {
        uint32_t in_register_00000014;
        int in_R8D;
        uint32_t in_stack_ffffffffffffff74;
        shared_ptr<SpriteAtlas> local_50;
        int local_34;

        Rect<int>* local_60 = (Rect<int>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long local_58 = 0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_80;
        Rect<int>* rect = local_60;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_70;
        MapTextureToAtlas(&local_50, (int*)arg1, (long long)&local_34, rect, &local_80, (int)&local_58, arg3,
                          (shared_ptr<SpriteAtlas>*)(((uint64_t)in_stack_ffffffffffffff74 << 32) | (uint32_t)in_R8D));
        auto pSVar1 = local_50.operator->();
        unsigned long arg1_00 = local_58;
        auto arg4 = math::GetEmptyMargins();
        pSVar1->AddSpriteMapping(arg1_00, local_80, local_34, *arg4, 0, arg3, in_R8D);
        MakeSharedPool<SpriteAtlasReference, 2048>::MakeShared<shared_ptr<SpriteAtlas>&, int&, long long&>(
            (shared_ptr<SpriteAtlas>*)this, &local_50, (long long*)&local_34);
        pSVar1 = (SpriteAtlas*)local_50.operator->();
        pSVar1->AddSpriteReference(*this);
        return this;
    }

    // 0x1008cb530
    SpriteAtlasManager* SpriteAtlasManager::MapTextureToAtlas(int& arg1, long long arg2, math::Rect<int>& rect,
                                                              unsigned long& arg4, int arg5, int arg6,
                                                              const shared_ptr<SpriteAtlas>& spriteAtlas) {
        bool cVar1;
        bool bVar2;
        int* piVar5;
        uint32_t in_register_0000008c;
        shared_ptr* in_stack_00000018;
        shared_ptr<SpriteAtlas> local_78;
        unsigned int local_44;
        SpriteAtlasUsageType local_40;
        unsigned int local_3c;

        long long local_60 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        int local_38 = GetUsageTypeFromHash((long long)rect);
        uint32_t local_34 = 4294967295;
        if ((local_38 == 0) || (local_38 == 2)) {
            local_34 = 15000;
            local_3c = 4096;
        } else {
            local_3c = 4294967295;
            if (local_38 == 1) {
                local_34 = 600000;
                local_3c = 1536;
            }
        }
        Layout* this_01 = (Layout*)(arg1 + 10);
        auto groundDecor = this_01->HeapBeginPtr();
        auto psVar4 = this_01->end();
        do {
            if (groundDecor == psVar4) {
                cVar1 = shared_ptr::operator_cast_to_bool(in_stack_00000018);
                if (cVar1) {
                    LogAssert("!targetSpriteAtlas",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              412, "SpriteAtlasManager::MapTextureToAtlas - failed to find target atlas");
                }
                local_44 = arg1[8];
                arg1[8] = local_44 + 1;
                local_40 = GetSpriteAtlasSize(local_3c);
                MakeSharedPool<SpriteAtlas, 64>::MakeShared<TextureManager*&, int&, unsigned int, SpriteAtlasUsageType&,
                                                            int&>((TextureManager**)&local_78, arg1 + 2, &local_44,
                                                                  &local_40, &local_38);
                this_01->push_back(local_78);
                piVar5 = (int*)local_78.operator->();
                cVar1 = SpriteAtlas::GetSpritePackMapping(*piVar5, *arg2, local_60, rect, (unsigned int)arg4, arg6);
                if (!cVar1) {
                    LogAssert("foundMapping",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              418, "%s: Couldn\'t fit requested sprite (%ix%i) in a completely new atlas",
                              "MapTextureToAtlas", (unsigned long)(unsigned int)arg6, spriteAtlas._0_4_);
                }
                shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_78);
                return this;
            }
            new (this) shared_ptr(groundDecor);
            cVar1 = shared_ptr::operator_cast_to_bool(in_stack_00000018);
            if ((!cVar1) || (bVar2 = *this == *in_stack_00000018, !bVar2)) {
                cVar1 = shared_ptr::operator_cast_to_bool(in_stack_00000018);
                if (!cVar1) {
                    if (((SpriteAtlas*)(*this).operator->())->GetUsageType() == local_38)
                        goto LAB_1008cb617;
                }
            LAB_1008cb650:
                bVar2 = true;
                ~shared_ptr();
            } else {
            LAB_1008cb617:
                piVar5 = (int*)(*this).operator->();
                cVar1 = SpriteAtlas::GetSpritePackMapping(*piVar5, *arg2, local_60, rect, (unsigned int)arg4, arg6);
                if (!cVar1)
                    goto LAB_1008cb650;
                bVar2 = false;
            }
            if (!bVar2) {
                return this;
            }
            groundDecor = groundDecor + 16;
        } while (true);
    }

    // 0x1008cb9e0
    void SpriteAtlasManager::AddSpriteData(shared_ptr<SpriteAtlasReference>& spriteAtlasReference,
                                           const RGBAImage& rgbaImage, int arg3, int arg4, int arg5,
                                           const shared_ptr<SpriteAtlas>& spriteAtlas) {
        uint32_t in_register_00000014;
        uint32_t in_stack_ffffffffffffff84;
        shared_ptr<SpriteAtlas> local_58;
        int local_34;

        RGBAImage* rgbaImage_00 = (RGBAImage*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        if (rgbaImage.operator_cast_to_bool() == '\0') {
            LogAssert("spriteReference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasManager.cpp",
                      424, nullptr);
        }
        unsigned long local_48 = 0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_70;
        auto layout = rgbaImage.operator->();
        auto rect = layout->HeapBeginPtr();
        int arg6 = rgbaImage_00->GetX();
        uint32_t uVar2 = rgbaImage_00->GetZ();
        MapTextureToAtlas(&local_58, (int*)spriteAtlasReference, (long long)&local_34, rect, &local_70, (int)&local_48,
                          arg6,
                          (shared_ptr<SpriteAtlas>*)(((uint64_t)in_stack_ffffffffffffff84 << 32) | (uint32_t)uVar2));
        auto pSVar3 = local_58.operator->();
        pSVar3->AddSpriteData(local_48, local_70, local_34, *rgbaImage_00, arg4, arg5, (int)spriteAtlas);
        ((SpriteAtlasReference*)rgbaImage.operator->())->SetAtlas(local_58, local_34);
        pSVar3 = (SpriteAtlas*)local_58.operator->();
        pSVar3->AddSpriteReference(rgbaImage);
    }

    // 0x1008cbb20
    shared_ptr<oldscape::RSevenDebugPresetProvider>*
    SpriteAtlasManager::AddRuntimeSprite(const void* arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                         const eastl::fixed_vector<int, 4ul>& arg5,
                                         const shared_ptr<SpriteAtlas>& spriteAtlas) {
        uint32_t in_register_00000014;
        uint32_t in_register_00000034;
        shared_ptr<SpriteAtlasReference>* spriteAtlasReference;
        fixed_vector<int, _4ul>* in_stack_00000008;
        int local_100[2];
        shared_ptr<oldscape::RSevenDebugPresetProvider>* local_f8;
        uint32_t local_f0;
        RGBAImage local_e8;
        RGBAImage local_90;

        spriteAtlasReference =
            (shared_ptr<SpriteAtlasReference>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if ((void*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3) == nullptr) {
            LogAssert("pixelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasManager.cpp",
                      348, "%s: Unable to add sprite, pixel data is invalid", "AddRuntimeSprite");
        }
        if (*(long*)(spriteAtlasReference + 8) == 0) {
            new (arg1) shared_ptr();
        } else {
            local_f8 = arg1;
            local_90 = RGBAImage();
            local_90.Create(arg4, (int)arg5, (void*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3));
            local_90.SetMargins(*in_stack_00000008, 0);
            if ((int)spriteAtlas != 0) {
                local_e8 = local_90.PadImage((int)spriteAtlas, false);
                local_90 = local_e8;
            }
            *(int*)(spriteAtlasReference + 104) = *(int*)(spriteAtlasReference + 104) + 1;
            local_100[0] = 0;
            local_100[1] = 0;
            local_f0 = 4294967295;
            MakeSharedPool<SpriteAtlasReference, 2048>::MakeShared<decltype(nullptr), int, long long&>(
                (void**)&local_e8, local_100, (long long*)&local_f0);
            AddSpriteData(spriteAtlasReference, &local_e8, (int)&local_90, (int)spriteAtlas, arg4,
                          (shared_ptr<SpriteAtlas>*)((unsigned long)arg5 & 4294967295));
            arg1 = local_f8;
            local_f8->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_e8);
        }
        return arg1;
    }

    // 0x1008cbfe0
    void SpriteAtlasManager::HandleSpriteLoadingRequests() {
        LoadingRequest* pLVar1;
        SpriteAtlasReference* pSVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_01;
        shared_ptr<SpriteAtlas>* spriteAtlas;
        bool cVar3;
        LoadingRequest* loadingRequest;

        uint8_t* this_00 = &field_72;
        loadingRequest = (LoadingRequest*)this_00->HeapBeginPtr();
    LAB_1008cc00e:
        do {
            pLVar1 = (LoadingRequest*)this_00->end();
            if (loadingRequest == pLVar1) {
                return;
            }
            if (loadingRequest->use_count() == 1) {
                pSVar2 = (SpriteAtlasReference*)(*loadingRequest).operator->();
                cVar3 = pSVar2->ShouldAlwaysBeLoaded();
                if (cVar3)
                    goto LAB_1008cc03c;
            } else {
            LAB_1008cc03c:
                this_01 =
                    (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*loadingRequest)
                        .operator->();
                spriteAtlas = (shared_ptr<SpriteAtlas>*)this_01->second();
                AttemptSpriteLoad(*loadingRequest, *spriteAtlas, loadingRequest->field_16);
                pSVar2 = (SpriteAtlasReference*)(*loadingRequest).operator->();
                cVar3 = pSVar2->IsReady();
                if (!cVar3) {
                    loadingRequest = (LoadingRequest*)&loadingRequest[1].field_7;
                    goto LAB_1008cc00e;
                }
            }
            loadingRequest = (LoadingRequest*)this_00->erase(loadingRequest);
        } while (true);
    }

    // 0x1008cc0f0
    shared_ptr<SpriteAtlas>* SpriteAtlasManager::GetAtlasByID(int arg1) {
        auto this_00 = field_40.HeapBeginPtr();
        auto psVar2 = field_40.end();
        while (true) {
            if (this_00 == psVar2) {
                return (shared_ptr<SpriteAtlas>*)&NullSpriteAtlas;
            }
            if (((NXTPixScreen*)(*this_00).operator->())->GetUIHeight() == arg1)
                break;
            this_00 = this_00 + 16;
        }
        return this_00;
    }

    // 0x1008cc170
    void SpriteAtlasManager::GetUsageMapByID(SpriteAtlasUsageMap& spriteAtlasUsageMap, int arg2) {
        auto this_02 = field_40.HeapBeginPtr();
        auto psVar2 = field_40.end();
        while (true) {
            if (this_02 == psVar2) {
                return;
            }
            if (((NXTPixScreen*)(*this_02).operator->())->GetUIHeight() == arg2)
                break;
            this_02 = this_02 + 16;
        }
        ((SpriteAtlas*)(*this_02).operator->())->GetUsageMap(spriteAtlasUsageMap);
    }

    // 0x1008cc1f0
    void SpriteAtlasManager::MainLogic() {
        shared_ptr<SpriteAtlas>* psVar2;
        SpriteAtlas* pSVar3;

        uint8_t* this_00 = &field_40;
        auto this_01 = this_00->HeapBeginPtr();
        while (psVar2 = (shared_ptr<SpriteAtlas>*)this_00->end(), this_01 != psVar2) {
            pSVar3 = (SpriteAtlas*)(*this_01).operator->();
            pSVar3->MainLogic();
            pSVar3 = (SpriteAtlas*)(*this_01).operator->();
            if (!(pSVar3->IsEmpty())) {
                this_01 = this_01 + 16;
            } else {
                this_01 = (shared_ptr<SpriteAtlas>*)this_00->erase(this_01);
            }
        }
        if (IsExpired()) {
            *this = CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond(300000);
        }
    }

    // 0x1008cc2f0
    void SpriteAtlasManager::Rebuild() {}

    // 0x1008cc300
    void SpriteAtlasManager::MainDraw() {
        HandleSpriteLoadingRequests();
    }

    // 0x1008cc310
    void SpriteAtlasManager::ForceRebuild() {
        *this = CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond(300000);
    }

    // 0x1008cc320
    void SpriteAtlasManager::RegisterRebuildResetCallback(const std::function<void()>& callback) {
        field_112.push_back(callback);
    }

    // 0x1008cc380
    void SpriteAtlasManager::RegisterRebuildCheckCallback(const std::function<bool()>& callback) {
        field_144.push_back(callback);
    }

} // namespace jag::graphics
