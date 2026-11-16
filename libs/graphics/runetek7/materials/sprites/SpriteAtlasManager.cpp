// libs/graphics/runetek7/materials/sprites/SpriteAtlasManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SpriteAtlasManager.h"

namespace jag::graphics {
    // 0x100f441a0, 16 bytes, __data
    SpriteAtlasManager::m_spriteLoadModeOverride = {2, 0, 0, 0};

    // 0x103bc03f8, 8 bytes, __common; zero-initialised
    SpriteAtlasManager::m_forceSpriteAtlasTo2K;

    // 0x100013220: the linker folded this into oldscape::highlight::ShortIDFromNPCKey(long long), which has identical code
    SpriteAtlasManager::GetSpriteIDFromHash(long long);

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    SpriteAtlasManager::GetAtlases() const;

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    SpriteAtlasManager::LoadingRequest::~LoadingRequest();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    SpriteAtlasManager::LoadingRequest::~LoadingRequest();

    // 0x1008c9fd0, 96 bytes, placed by class name and debug map
    // SpriteAtlasManager::GetUsageTypeFromHash(long long)
    undefined8 SpriteAtlasManager::GetUsageTypeFromHash(longlong param_1) {
        if (-1 < param_1) {
            if ((param_1 & 131072U) != 0) {
                if ((param_1 & 2097152U) != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("((spriteHash >> graphics::HASH_OBJSPRITE_IS_HIGHRES) & 0x1) == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              493, (char*)0);
                }
                return 1;
            }
            if (((ulong)param_1 >> 45 & 1) != 0) {
                return 2;
            }
        }
        return 0;
    }

    // 0x1008ca040, 128 bytes, placed by neighbouring functions
    // GetSpriteAtlasSize(unsigned int)
    void GetSpriteAtlasSize(uint param_1) {
        uint uVar2;
        RenderDevice* this;
        uint* puVar3;
        MapArea* this_00;
        long lVar4;
        undefined4 in_register_0000003c;
        Singleton<render::RenderDevice>* this_01;
        uint local_14;
        uint local_10;
        uint local_c;

        local_c = param_1;
        if (SpriteAtlasManager::m_forceSpriteAtlasTo2K == '\0') {
            this = (RenderDevice*)(CONCAT44(in_register_0000003c, param_1))->Instance();
            uVar2 = GetGpuMemoryProfile();
            this_01 = (Singleton<render::RenderDevice>*)(ulong)uVar2;
            if (render::operator<(this_01, 1) == '\0')
                goto LAB_1008ca08a;
        }
        local_14 = 2048;
        this_01 = (Singleton<render::RenderDevice>*)&local_c;
        puVar3 = std::min<unsigned int>((uint*)this_01, &local_14);
        local_c = *puVar3;
    LAB_1008ca08a:
        this_00 = (MapArea*)this_01->Instance();
        lVar4 = this_00->GetOrigin();
        local_10 = *(uint*)(lVar4 + 52);
        std::min<unsigned int>(&local_c, &local_10);
    }

    // 0x1008ca0d0, 208 bytes, base-object constructor, placed by class name and debug map
    // SpriteAtlasManager::SpriteAtlasManager()
    void SpriteAtlasManager::SpriteAtlasManager() {
        allocator local_38[8];

        new (this) CountdownTimerT<std::chrono::steady_clock>();
        field_20 = 0;
        field_28 = 0;
        field_8 = (TextureManager*)0;
        *(undefined8*)&field_16 = 0;
        new (&field_40) eastl::vector<shared_ptr<SpriteAtlas>, eastl::allocator>();
        new (&field_72) eastl::vector<SpriteAtlasManager::LoadingRequest, eastl::allocator>();
        field_104 = 1;
        eastl::vector<std::function<void()>, eastl::allocator>::vector(
            (vector<std::function<void()>, eastl::allocator>*)&field_112);
        eastl::vector<std::function<bool()>, eastl::allocator>::vector(
            (vector<std::function<bool()>, eastl::allocator>*)&field_144);
        eastl::allocator::allocator(local_38, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_176);
    }

    // 0x1008ca200, 16 bytes, complete-object constructor, placed by class name and debug map
    // SpriteAtlasManager::SpriteAtlasManager(): jumps straight to the base-object constructor

    // 0x1008ca210, 144 bytes, base-object destructor, placed by class name and debug map
    // SpriteAtlasManager::~SpriteAtlasManager()
    void SpriteAtlasManager::~SpriteAtlasManager() {
        Destroy(this);
        (&field_176)->~map();
        eastl::vector<std::function<bool()>, eastl::allocator>::~vector(
            (vector<std::function<bool()>, eastl::allocator>*)&field_144);
        eastl::vector<std::function<void()>, eastl::allocator>::~vector(
            (vector<std::function<void()>, eastl::allocator>*)&field_112);
        (&field_72)->~vector();
        (&field_40)->~vector();
    }

    // 0x1008ca2a0, 464 bytes, placed by class name and debug map
    // SpriteAtlasManager::Destroy()
    void SpriteAtlasManager::Destroy() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        shared_ptr<SpriteAtlas>* this_01;
        shared_ptr<SpriteAtlas>* psVar4;
        SpriteAtlas* this_02;
        long lVar5;
        shared_ptr* psVar6;
        shared_ptr* psVar7;
        SpriteAtlasManager* pSVar8;
        reverse_iterator<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>>*>
            local_78[8];
        reverse_iterator local_70[8];
        vector_map<
            int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>, eastl::less<int>,
            BucketAllocatorEASTL,
            eastl::vector<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>>,
                          BucketAllocatorEASTL>>
            local_68[32];
        vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>* local_48;
        SpriteAtlasManager* local_40;
        bool local_31;

        eastl::vector_map<
            int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>, eastl::less<int>,
            BucketAllocatorEASTL,
            eastl::vector<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>>,
                          BucketAllocatorEASTL>>::vector_map(local_68);
        this_00 = &field_40;
        local_40 = this;
        this_01 = (shared_ptr<SpriteAtlas>*)this_00->HeapBeginPtr();
        local_48 = (vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>*)this_00;
        psVar4 = (shared_ptr<SpriteAtlas>*)this_00->end();
        if (this_01 != psVar4) {
            do {
                this_02 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(this_01);
                this_02->Destroy(local_68);
                iVar3 = this_01->use_count();
                if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("it.use_count() == 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              83, (char*)0);
                }
                shared_ptr<SpriteAtlas>::reset();
                this_01 = this_01 + 16;
            } while (this_01 != psVar4);
        }
        eastl::vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>::clear(local_48);
        pSVar8 = local_40;
        *(undefined4*)((long)&local_40->field_28 + 4) = 0;
        eastl::vector<std::function<void()>, eastl::allocator>::clear(
            (vector<std::function<void()>, eastl::allocator>*)&local_40->field_112);
        eastl::vector<std::function<bool()>, eastl::allocator>::clear(
            (vector<std::function<bool()>, eastl::allocator>*)&pSVar8->field_144);
        cVar1 = local_68->empty();
        if (cVar1 == '\0') {
            local_31 = (m_spriteLoadModeOverride & 4294967293) == 0;
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            while (true) {
                eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                bVar2 = eastl::operator!=((reverse_iterator*)local_78, local_70);
                if (!bVar2)
                    break;
                lVar5 = eastl::reverse_iterator<eastl::pair<
                    int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>>*>::operator->(local_78);
                psVar6 = (shared_ptr*)((lVar5 + 8))->HeapBeginPtr();
                psVar7 = (shared_ptr*)((lVar5 + 8))->end();
                for (; psVar6 != psVar7; psVar6 = psVar6 + 1) {
                    eastl::vector<SpriteAtlasManager::LoadingRequest, eastl::allocator>::emplace_back<
                        shared_ptr<SpriteAtlasReference> const&, bool&>(
                        (vector<SpriteAtlasManager::LoadingRequest, eastl::allocator>*)&pSVar8->field_72, psVar6,
                        &local_31);
                }
                eastl::reverse_iterator<eastl::pair<
                    int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>>*>::operator++(local_78);
            }
            pSVar8 = local_40;
        }
        pSVar8->field_8 = (TextureManager*)0;
        *(undefined8*)&pSVar8->field_16 = 0;
        *(undefined8*)((long)&pSVar8->field_20 + 4) = 0;
        eastl::vector_map<
            int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>, eastl::less<int>,
            BucketAllocatorEASTL,
            eastl::vector<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>>,
                          BucketAllocatorEASTL>>::~vector_map(local_68);
    }

    // 0x1008ca480, 16 bytes, complete-object destructor, placed by class name and debug map
    // SpriteAtlasManager::~SpriteAtlasManager(): jumps straight to the base-object destructor

    // 0x1008ca490, 32 bytes, placed by class name and debug map
    // SpriteAtlasManager::Initialise(TextureManager*, Js5ResourceProvider*, Js5ArchiveSettings const*)
    void SpriteAtlasManager::Initialise(TextureManager* param_1, Js5ResourceProvider* param_2,
                                        Js5ArchiveSettings* param_3) {
        field_8 = param_1;
        *(Js5ResourceProvider**)&field_16 = param_2;
        *(Js5ArchiveSettings**)((long)&field_20 + 4) = param_3;
        ResetToMillisecond(300000);
    }

    // 0x1008ca660, 16 bytes, placed by class name and debug map
    // SpriteAtlasManager::DestroyRenderingResources()
    void SpriteAtlasManager::DestroyRenderingResources() {
        Destroy(this);
    }

    // 0x1008ca670, 368 bytes, placed by class name and debug map
    // SpriteAtlasManager::UnregisterSpriteIDAlwaysLoaded(unsigned int)
    void SpriteAtlasManager::UnregisterSpriteIDAlwaysLoaded(uint param_1) {
        long lVar2;
        longlong* plVar3;
        shared_ptr<SpriteAtlasReference>* this_00;
        shared_ptr<SpriteAtlasReference>* psVar4;
        shared_ptr<SpriteAtlas>* this_01;
        shared_ptr<SpriteAtlas>* psVar5;
        SpriteAtlas* this_02;
        Layout* pLVar6;
        long lVar7;
        SpriteAtlasReference* this_03;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_68[8];
        undefined8 local_60;
        longlong* local_58;
        Layout* local_50;
        undefined1* local_48;
        eastl local_40[12];
        uint local_34;

        local_34 = param_1;
        eastl::rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<long long, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const, eastl::vector<long long, eastl::allocator>>>,
                      true, true>::find((uint*)local_40);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_40, local_68, extraout_RDX)) {
            local_48 = &field_176;
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            plVar3 = (longlong*)((lVar2 + 8))->HeapBeginPtr();
            local_58 = (longlong*)((lVar2 + 8))->end();
            if (plVar3 != local_58) {
                local_50 = (Layout*)&field_72;
                do {
                    pLVar6 = local_50;
                    this_00 = (shared_ptr<SpriteAtlasReference>*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_50);
                    psVar4 = (shared_ptr<SpriteAtlasReference>*)pLVar6->end();
                    for (; this_00 != psVar4; this_00 = this_00 + 24) {
                        lVar2 = *plVar3;
                        pLVar6 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->(this_00);
                        lVar7 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
                        if (lVar2 == lVar7) {
                            this_03 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(this_00);
                            this_03->DecrementAlwaysLoaded();
                        }
                    }
                    this_01 = (shared_ptr<SpriteAtlas>*)(&field_40)->HeapBeginPtr();
                    psVar5 = (shared_ptr<SpriteAtlas>*)(&field_40)->end();
                    for (; this_01 != psVar5; this_01 = this_01 + 16) {
                        this_02 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(this_01);
                        this_02->DecrementAlwaysLoaded(*plVar3);
                    }
                    plVar3 = plVar3 + 1;
                } while (plVar3 != local_58);
            }
            new (&local_60) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
            eastl::rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<long long, eastl::allocator>>,
                          eastl::less<unsigned int>, eastl::allocator,
                          eastl::use_first<eastl::pair<unsigned int const, eastl::vector<long long, eastl::allocator>>>,
                          true, true>::erase(local_68, local_48, local_60);
        }
    }

    // 0x1008ca920, 400 bytes, placed by class name and debug map
    // SpriteAtlasManager::RegisterSpriteIDAlwaysLoaded(unsigned int, int, bool)
    void SpriteAtlasManager::RegisterSpriteIDAlwaysLoaded(uint param_1, int param_2, bool param_3) {
        bool bVar1;
        long lVar2;
        Layout* pLVar3;
        long* plVar4;
        long* plVar5;
        shared_ptr<SpriteAtlasReference>* this_00;
        shared_ptr<SpriteAtlasReference>* psVar6;
        long lVar7;
        SpriteAtlasReference* this_01;
        shared_ptr<SpriteAtlas>* this_02;
        shared_ptr<SpriteAtlas>* psVar8;
        SpriteAtlas* this_03;
        undefined7 in_register_00000009;
        long* plVar9;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_58[16];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48[20];
        uint local_34;
        long local_30;

        local_30 = (long)((int)CONCAT71(in_register_00000009, param_3) << 18 | param_2);
        local_34 = param_1;
        pLVar3 = (Layout*)
            eastl::map<unsigned int, eastl::vector<long long, eastl::allocator>, eastl::less<unsigned int>,
                       eastl::allocator>::operator[]((map<unsigned int, eastl::vector<long long, eastl::allocator>,
                                                          eastl::less<unsigned int>, eastl::allocator>*)&field_176,
                                                     &local_34);
        plVar4 = (long*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar3);
        plVar5 = (long*)pLVar3->end();
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
        pLVar3->push_back(&local_30);
        this_00 = (shared_ptr<SpriteAtlasReference>*)(&field_72)->HeapBeginPtr();
        psVar6 = (shared_ptr<SpriteAtlasReference>*)(&field_72)->end();
        lVar2 = local_30;
        for (; local_30 = lVar2, this_00 != psVar6; this_00 = this_00 + 24) {
            pLVar3 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->(this_00);
            lVar7 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar3);
            if (lVar2 == lVar7) {
                this_01 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(this_00);
                this_01->IncrementAlwaysLoaded();
            }
            lVar2 = local_30;
        }
        this_02 = (shared_ptr<SpriteAtlas>*)(&field_40)->HeapBeginPtr();
        psVar8 = (shared_ptr<SpriteAtlas>*)(&field_40)->end();
        lVar2 = local_30;
        for (; local_30 = lVar2, this_02 != psVar8; this_02 = this_02 + 16) {
            this_03 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(this_02);
            this_03->IncrementAlwaysLoaded(local_30);
            lVar2 = local_30;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_48, (_func_decltype_nullptr*)0);
        GetSpriteReference(local_58, this, lVar2, local_48, 2);
        local_58->~shared_ptr();
        local_48->~shared_ptr();
    }

    // 0x1008cab60, 576 bytes, placed by class name and debug map
    // SpriteAtlasManager::GetSpriteReference(long long, shared_ptr<SpriteAtlas> const&, SpriteLoadMode)
    shared_ptr<oldscape::RSevenDebugPresetProvider>*
    SpriteAtlasManager::GetSpriteReference(shared_ptr<oldscape::RSevenDebugPresetProvider>* param_1,
                                           SpriteAtlasManager* param_2, shared_ptr* param_3, shared_ptr* param_4,
                                           longlong* param_5) {
        bool bVar1;
        long lVar3;
        long* plVar4;
        long* plVar5;
        SpriteAtlasReference* pSVar6;
        uint uVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar8;
        shared_ptr local_68;
        shared_ptr* local_50;
        undefined1 local_48[8];

        local_50 = param_3;
        FindSpriteReference((SpriteAtlasManager*)(local_48 + 8), (longlong)param_2, param_3);
        bVar1 = ((local_48 + 8))->operator_cast_to_bool();
        if (bVar1) {
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                param_1, (shared_ptr*)(local_48 + 8));
        } else if (((ulong)local_50 & 131072) == 0) {
            if (local_50 == (shared_ptr*)18446744073709551615) {
                /* WARNING: Subroutine does not return */
                LogAssert("spriteHash != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/sprites/SpriteAtlasManager.cpp",
                          206, "%s: cannot get sprite reference, invalid sprite hash -1", "GetSpriteReference");
            }
            local_48._0_4_ = 4294967295;
            MakeSharedPool<SpriteAtlasReference, 2048>::MakeShared<shared_ptr<SpriteAtlas> const&, int, long long&>(
                &local_68, (MakeSharedPool<SpriteAtlasReference, 2048>*)param_4, (shared_ptr*)local_48, (int*)&local_50,
                param_5);
            shared_ptr<SpriteAtlasReference>::operator=((shared_ptr<SpriteAtlasReference>*)(local_48 + 8), &local_68);
            local_68.~shared_ptr();
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            phVar8 = extraout_RDX;
            while (bVar1 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)local_48, phVar8), bVar1) {
                lVar3 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_68);
                plVar4 = (long*)((lVar3 + 8))->HeapBeginPtr();
                plVar5 = (long*)((lVar3 + 8))->end();
                for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
                    if ((shared_ptr*)*plVar4 == local_50) {
                        pSVar6 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                            (shared_ptr<SpriteAtlasReference>*)(local_48 + 8));
                        pSVar6->IncrementAlwaysLoaded();
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_68);
                phVar8 = extraout_RDX_00;
            }
            uVar7 = (uint)param_5;
            if (m_spriteLoadModeOverride != 2) {
                uVar7 = m_spriteLoadModeOverride;
            }
            local_68._0_1_ = (uVar7 & 4294967293) == 0;
            AttemptSpriteLoad(param_2, (shared_ptr*)(local_48 + 8), param_4, (bool)local_68._0_1_);
            pSVar6 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                (shared_ptr<SpriteAtlasReference>*)(local_48 + 8));
            if (pSVar6->IsReady() == '\0') {
                eastl::vector<SpriteAtlasManager::LoadingRequest, eastl::allocator>::emplace_back<
                    shared_ptr<SpriteAtlasReference>&, bool&>(
                    (vector<SpriteAtlasManager::LoadingRequest, eastl::allocator>*)&param_2->field_72,
                    (shared_ptr*)(local_48 + 8), (bool*)&local_68);
            }
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                param_1, (shared_ptr*)(local_48 + 8));
        } else {
            new (param_1)
                shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&SpriteAtlasReference::NullSpriteAtlasReference);
        }
        ((local_48 + 8))->~shared_ptr();
        return param_1;
    }

    // 0x1008cada0, 400 bytes, placed by class name and debug map
    // SpriteAtlasManager::FindSpriteReference(long long, shared_ptr<SpriteAtlas> const&) const
    SpriteAtlasManager* SpriteAtlasManager::FindSpriteReference(longlong param_1, shared_ptr* param_2) {
        SpriteAtlasManager* this_00;
        bool bVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        Layout* pLVar6;
        shared_ptr* psVar7;
        shared_ptr* in_RCX;
        _func_decltype_nullptr* p_Var8;
        undefined1 auVar9[16];
        shared_ptr local_58;
        SpriteAtlasManager* local_48;
        undefined4 local_3c;
        shared_ptr* local_38;

        local_48 = this;
        local_38 = param_2;
        if (param_2 == (shared_ptr*)18446744073709551615) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteHash != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasManager.cpp",
                      262, "%s: Unable to find sprite reference, invalid sprite hash -1", "FindSpriteReference");
        }
        p_Var8 = (_func_decltype_nullptr*)param_1;
        local_3c = GetUsageTypeFromHash((longlong)param_2);
        new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var8);
        pLVar6 = (Layout*)(param_1 + 40);
        uVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar6);
        uVar3 = pLVar6->end();
        psVar4 = std::find_if<shared_ptr<SpriteAtlas> const*,
                              long long->FindSpriteReference(shared_ptr<SpriteAtlas> const&) const ::__4>(uVar2, uVar3);
        this_00 = local_48;
        psVar5 = (shared_ptr*)pLVar6->end();
        if (psVar4 == psVar5) {
            psVar4 = (shared_ptr*)((param_1 + 72))->HeapBeginPtr();
            psVar5 = (shared_ptr*)((param_1 + 72))->end();
            for (; psVar4 != psVar5; psVar4 = (shared_ptr*)&psVar4[1].field_8) {
                this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)psVar4);
                auVar9 =
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_01);
                bVar1 = operator==(auVar9._0_8_, in_RCX, auVar9._8_8_);
                if (bVar1) {
                    pLVar6 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->(
                        (shared_ptr<SpriteAtlasReference>*)psVar4);
                    psVar7 = (shared_ptr*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
                    if (psVar7 == local_38) {
                        new (this_00) shared_ptr<oldscape::dash3d::Decor>(psVar4);
                        goto LAB_1008caefa;
                    }
                }
            }
            new (this_00)
                shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&SpriteAtlasReference::NullSpriteAtlasReference);
        } else {
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this_00, &local_58);
        }
    LAB_1008caefa:
        local_58.~shared_ptr();
        return this_00;
    }

    // 0x1008cb050, 752 bytes, placed by class name and debug map
    // SpriteAtlasManager::AttemptSpriteLoad(shared_ptr<SpriteAtlasReference>&, shared_ptr<SpriteAtlas> const&, bool)
    void SpriteAtlasManager::AttemptSpriteLoad(shared_ptr* param_1, shared_ptr* param_2, bool param_3) {
        int iVar2;
        uint uVar3;
        int iVar4;
        RenderDevice* this_00;
        Layout* pLVar5;
        ulong uVar7;
        undefined* puVar8;
        ulong uVar9;
        PacketView local_228;
        SpriteAtlasManager* local_1f8;
        RGBAImage local_1f0;
        RGBAImage local_198;
        RGBAImage local_140;
        RGBAImage local_e8;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        iVar2 = this_00->GetReadyState();
        if (iVar2 == 0) {
            if (!shared_ptr::operator_cast_to_bool(param_1)) {
                /* WARNING: Subroutine does not return */
                LogAssert("spriteReference",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/sprites/SpriteAtlasManager.cpp",
                          296, "%s: unable to load sprite, sprite reference is null", "AttemptSpriteLoad");
            }
            local_1f8 = this;
            pLVar5 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)param_1);
            if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar5) == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("spriteReference->GetSpriteHash() != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/sprites/SpriteAtlasManager.cpp",
                          297, "%s: unable to load sprite, sprite hash is invalid", "AttemptSpriteLoad");
            }
            pLVar5 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)param_1);
            uVar7 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar5);
            uVar3 = oldscape::ClientNpc::GetShortIDFromUID((int)uVar7);
            new (&local_228) PacketView();
            puVar8 = (undefined*)(*(Js5ResourceProvider**)&local_1f8->field_16, &local_228,
                                  *(Js5ArchiveSettings**)((long)&local_1f8->field_20 + 4), uVar3, 0,
                                  (Priority*)Priority::HIGHEST, true, true, param_3)
                         ->GetFile();
            if (puVar8 == DataStatus::READY) {
                new (&local_90) RGBAImage();
                RAWDecoder::LoadSingle(&local_90, &local_228);
                iVar2 = local_90.GetZ();
                iVar4 = local_90.GetX();
                local_e8.PadImage((int)&local_90, true);
                RGBAImage::operator=(&local_90, &local_e8);
                local_e8.~RGBAImage();
                if ((uVar7 >> 19 & 3) != 0) {
                    local_140.AddOutline((uint)&local_90);
                    local_140.~RGBAImage();
                    if (((uint)(uVar7 >> 19) & 3) == 2) {
                        local_198.AddOutline((uint)&local_90);
                        local_198.~RGBAImage();
                    }
                }
                uVar9 = uVar7 + 2097151;
                if (-1 < (long)uVar7) {
                    uVar9 = uVar7;
                }
                if ((uVar9 >> 21 & 16777215) != 0) {
                    local_1f0.AddShadow((uint)&local_90);
                    local_1f0.~RGBAImage();
                }
                AddSpriteData(local_1f8, param_1, &local_90, 1, iVar4, iVar2, param_2);
                local_90.~RGBAImage();
            }
            local_228.~PacketView();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008cb400, 304 bytes, placed by class name and debug map
    // SpriteAtlasManager::AddObjSpriteReference(long long, unsigned int, unsigned int)
    SpriteAtlasManager* SpriteAtlasManager::AddObjSpriteReference(longlong param_1, uint param_2, uint param_3) {
        Rect* pRVar1;
        ulong uVar2;
        SpriteAtlas* pSVar4;
        fixed_vector* pfVar5;
        undefined4 in_register_00000014;
        int in_R8D;
        undefined4 in_stack_ffffffffffffff74;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_80[16];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_70[16];
        Rect* local_60;
        ulong local_58;
        shared_ptr<SpriteAtlas> local_50[16];
        int local_34;

        local_60 = (Rect*)CONCAT44(in_register_00000014, param_2);
        local_58 = 0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_80,
                                                                                 (_func_decltype_nullptr*)param_1);
        pRVar1 = local_60;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_70, (_func_decltype_nullptr*)0);
        MapTextureToAtlas((SpriteAtlasManager*)local_50, (int*)param_1, (longlong)&local_34, pRVar1, (ulong*)local_80,
                          (int)&local_58, param_3, (shared_ptr*)CONCAT44(in_stack_ffffffffffffff74, in_R8D));
        local_70->~shared_ptr();
        pSVar4 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(local_50);
        uVar2 = local_58;
        pfVar5 = (fixed_vector*)math::GetEmptyMargins();
        pSVar4->AddSpriteMapping(uVar2, local_80, local_34, pfVar5, 0, param_3, in_R8D);
        MakeSharedPool<SpriteAtlasReference, 2048>::MakeShared<shared_ptr<SpriteAtlas>&, int&, long long&>(
            (shared_ptr*)(SpriteAtlasManager*)this, (MakeSharedPool<SpriteAtlasReference, 2048>*)local_50,
            (shared_ptr*)&local_34, (int*)&local_60, (longlong*)pfVar5);
        pSVar4 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(local_50);
        pSVar4->AddSpriteReference((shared_ptr*)(SpriteAtlasManager*)this);
        local_50->~shared_ptr();
        return (SpriteAtlasManager*)this;
    }

    // 0x1008cb530, 624 bytes, placed by class name and debug map
    // SpriteAtlasManager::MapTextureToAtlas(int&, long long, math::Rect<int>&, unsigned long&, int, int, shared_ptr<SpriteAtlas> const&)
    SpriteAtlasManager* SpriteAtlasManager::MapTextureToAtlas(int* param_1, longlong param_2, Rect* param_3,
                                                              ulong* param_4, int param_5, int param_6,
                                                              shared_ptr* param_7) {
        bool bVar1;
        char cVar2;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        SpriteAtlas* pSVar6;
        shared_ptr* extraout_RDX;
        Layout* this_00;
        undefined4 in_register_0000008c;
        shared_ptr* in_stack_00000018;
        uint in_stack_ffffffffffffff68;
        undefined4 in_stack_ffffffffffffff6c;
        shared_ptr local_78;
        ulong* local_60;
        int local_44;
        int local_40;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_60 = (ulong*)CONCAT44(in_register_0000008c, param_5);
        local_38 = GetUsageTypeFromHash((longlong)param_3);
        local_34 = 4294967295;
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
        this_00 = (Layout*)(param_1 + 10);
        psVar4 = (shared_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        psVar5 = (shared_ptr*)this_00->end();
        do {
            if (psVar4 == psVar5) {
                bVar1 = shared_ptr::operator_cast_to_bool(in_stack_00000018);
                if (bVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!targetSpriteAtlas",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              412, "SpriteAtlasManager::MapTextureToAtlas - failed to find target atlas");
                }
                local_44 = param_1[8];
                param_1[8] = local_44 + 1;
                local_40 = GetSpriteAtlasSize(local_3c);
                MakeSharedPool<SpriteAtlas, 64>::MakeShared<TextureManager*&, int&, unsigned int, SpriteAtlasUsageType&,
                                                            int&>(
                    &local_78, (MakeSharedPool<SpriteAtlas, 64>*)(param_1 + 2), (TextureManager**)&local_44, &local_40,
                    &local_38, (SpriteAtlasUsageType*)&local_34,
                    (int*)CONCAT44(in_stack_ffffffffffffff6c, in_stack_ffffffffffffff68));
                this_00->push_back(&local_78);
                pSVar6 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)&local_78);
                cVar2 =
                    pSVar6->GetSpritePackMapping(param_2, local_60, (longlong)param_3, param_4, param_6, (uint)param_7);
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("foundMapping",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/sprites/SpriteAtlasManager.cpp",
                              418, "%s: Couldn\'t fit requested sprite (%ix%i) in a completely new atlas",
                              "MapTextureToAtlas", (ulong)(uint)param_6, (uint)param_7);
                }
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_78);
                local_78.~shared_ptr();
                return this;
            }
            new (this) shared_ptr<oldscape::dash3d::Decor>(psVar4);
            bVar1 = shared_ptr::operator_cast_to_bool(in_stack_00000018);
            if ((bVar1) && (bVar1 = operator==((jag*)this, in_stack_00000018, extraout_RDX), bVar1)) {
            LAB_1008cb617:
                pSVar6 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this);
                in_stack_ffffffffffffff68 = (uint)param_7;
                cVar2 =
                    pSVar6->GetSpritePackMapping(param_2, local_60, (longlong)param_3, param_4, param_6, (uint)param_7);
                if (cVar2 == '\0')
                    goto LAB_1008cb650;
                bVar1 = false;
            } else {
                bVar1 = shared_ptr::operator_cast_to_bool(in_stack_00000018);
                if (!bVar1) {
                    pSVar6 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this);
                    if (pSVar6->GetUsageType() == local_38)
                        goto LAB_1008cb617;
                }
            LAB_1008cb650:
                bVar1 = true;
                ~shared_ptr();
            }
            if (!bVar1) {
                return this;
            }
            psVar4 = psVar4 + 1;
        } while (true);
    }

    // 0x1008cb9e0, 320 bytes, placed by class name and debug map
    // SpriteAtlasManager::AddSpriteData(shared_ptr<SpriteAtlasReference>&, RGBAImage const&, int, int, int, shared_ptr<SpriteAtlas> const&)
    void SpriteAtlasManager::AddSpriteData(shared_ptr* param_1, RGBAImage* param_2, int param_3, int param_4,
                                           int param_5, shared_ptr* param_6) {
        int iVar2;
        undefined4 uVar3;
        Layout* this_00;
        Rect* pRVar4;
        SpriteAtlas* pSVar5;
        SpriteAtlasReference* this_01;
        undefined4 in_stack_ffffffffffffff84;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_70[16];
        shared_ptr local_58;
        ulong local_48;
        int local_34;

        if (!shared_ptr::operator_cast_to_bool(param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteReference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasManager.cpp",
                      424, (char*)0);
        }
        local_48 = 0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_70,
                                                                                 (_func_decltype_nullptr*)param_1);
        this_00 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)param_1);
        pRVar4 = (Rect*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        iVar2 = param_2->GetX();
        uVar3 = param_2->GetZ();
        MapTextureToAtlas((SpriteAtlasManager*)&local_58, (int*)(SpriteAtlasManager*)this, (longlong)&local_34, pRVar4,
                          (ulong*)local_70, (int)&local_48, iVar2,
                          (shared_ptr*)CONCAT44(in_stack_ffffffffffffff84, uVar3));
        pSVar5 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)&local_58);
        pSVar5->AddSpriteData(local_48, local_70, local_34, param_2, param_3, param_4, param_5);
        this_01 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
            (shared_ptr<SpriteAtlasReference>*)param_1);
        this_01->SetAtlas(&local_58, local_34);
        pSVar5 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)&local_58);
        pSVar5->AddSpriteReference(param_1);
        local_58.~shared_ptr();
    }

    // 0x1008cbb20, 544 bytes, placed by class name and debug map
    // SpriteAtlasManager::AddRuntimeSprite(void const*, unsigned int, unsigned int, unsigned int, eastl::fixed_vector<int, 4ul, true, eastl::allocator> const&, shared_ptr<SpriteAtlas> const&)
    SpriteAtlasManager* SpriteAtlasManager::AddRuntimeSprite(void* param_1, uint param_2, uint param_3, uint param_4,
                                                             fixed_vector* param_5, shared_ptr* param_6) {
        uint uVar1;
        undefined4 in_register_00000014;
        undefined4 in_register_00000084;
        longlong* plVar3;
        shared_ptr* in_stack_00000010;
        ulong local_108;
        undefined8 local_100;
        undefined4 local_f0;
        RGBAImage local_e8;
        RGBAImage local_90;
        long local_38;

        plVar3 = (longlong*)CONCAT44(in_register_00000084, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((void*)CONCAT44(in_register_00000014, param_2) == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pixelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasManager.cpp",
                      348, "%s: Unable to add sprite, pixel data is invalid", "AddRuntimeSprite");
        }
        if (*(long*)((long)param_1 + 8) == 0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            new (&local_90) RGBAImage();
            local_90.Create(param_3, param_4, (void*)CONCAT44(in_register_00000014, param_2));
            local_90.SetMargins(param_6, 0);
            if ((int)param_5 != 0) {
                local_e8.PadImage((int)&local_90, SUB41((int)param_5, 0));
                RGBAImage::operator=(&local_90, &local_e8);
                local_e8.~RGBAImage();
            }
            uVar1 = *(uint*)((long)param_1 + 104);
            *(uint*)((long)param_1 + 104) = uVar1 + 1;
            local_108 = (ulong)(~uVar1 & 4286709759);
            local_100 = 0;
            local_f0 = 4294967295;
            MakeSharedPool<SpriteAtlasReference, 2048>::MakeShared<decltype(nullptr), int, long long&>(
                (shared_ptr*)&local_e8, (MakeSharedPool<SpriteAtlasReference, 2048>*)&local_100,
                (_func_decltype_nullptr**)&local_f0, (int*)&local_108, plVar3);
            AddSpriteData(param_1, (shared_ptr*)&local_e8, &local_90, (int)param_5, param_3, param_4,
                          in_stack_00000010);
            this = (SpriteAtlasManager*)this;
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)(SpriteAtlasManager*)this, (shared_ptr*)&local_e8);
            local_e8.~shared_ptr();
            local_90.~RGBAImage();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1008cbfe0, 176 bytes, placed by class name and debug map
    // SpriteAtlasManager::HandleSpriteLoadingRequests()
    void SpriteAtlasManager::HandleSpriteLoadingRequests() {
        undefined1* this_00;
        LoadingRequest* pLVar1;
        SpriteAtlasReference* pSVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        shared_ptr* psVar3;
        char cVar4;
        int iVar5;
        LoadingRequest* this_02;

        this_00 = &field_72;
        this_02 = (LoadingRequest*)this_00->HeapBeginPtr();
    LAB_1008cc00e:
        do {
            pLVar1 = (LoadingRequest*)this_00->end();
            if (this_02 == pLVar1) {
                return;
            }
            iVar5 = this_02->use_count();
            if (iVar5 == 1) {
                pSVar2 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                    (shared_ptr<SpriteAtlasReference>*)this_02);
                cVar4 = pSVar2->ShouldAlwaysBeLoaded();
                if (cVar4 != '\0')
                    goto LAB_1008cc03c;
            } else {
            LAB_1008cc03c:
                this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)this_02);
                psVar3 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_01);
                AttemptSpriteLoad(this, (shared_ptr*)this_02, psVar3, (bool)this_02->field_16);
                pSVar2 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                    (shared_ptr<SpriteAtlasReference>*)this_02);
                cVar4 = pSVar2->IsReady();
                if (cVar4 == '\0') {
                    this_02 = (LoadingRequest*)&this_02[1].field_7;
                    goto LAB_1008cc00e;
                }
            }
            this_02 = (LoadingRequest*)this_00->erase(this_02);
        } while (true);
    }

    // 0x1008cc0f0, 128 bytes, placed by class name and debug map
    // SpriteAtlasManager::GetAtlasByID(int)
    shared_ptr<SpriteAtlas>* SpriteAtlasManager::GetAtlasByID(int param_1) {
        shared_ptr<SpriteAtlas>* this_00;
        shared_ptr<SpriteAtlas>* psVar2;
        NXTPixScreen* this_01;

        this_00 = (shared_ptr<SpriteAtlas>*)(&field_40)->HeapBeginPtr();
        psVar2 = (shared_ptr<SpriteAtlas>*)(&field_40)->end();
        while (true) {
            if (this_00 == psVar2) {
                return (shared_ptr<SpriteAtlas>*)&NullSpriteAtlas;
            }
            this_01 = (NXTPixScreen*)shared_ptr<SpriteAtlas>::operator->(this_00);
            if (this_01->GetUIHeight() == param_1)
                break;
            this_00 = this_00 + 16;
        }
        return this_00;
    }

    // 0x1008cc170, 128 bytes, placed by class name and debug map
    // SpriteAtlasManager::GetUsageMapByID(SpriteAtlasUsageMap&, int)
    void SpriteAtlasManager::GetUsageMapByID(SpriteAtlasUsageMap* param_1, int param_2) {
        NXTPixScreen* this_00;
        SpriteAtlas* this_01;
        shared_ptr<SpriteAtlas>* psVar2;
        shared_ptr<SpriteAtlas>* this_02;

        this_02 = (shared_ptr<SpriteAtlas>*)(&field_40)->HeapBeginPtr();
        psVar2 = (shared_ptr<SpriteAtlas>*)(&field_40)->end();
        while (true) {
            if (this_02 == psVar2) {
                return;
            }
            this_00 = (NXTPixScreen*)shared_ptr<SpriteAtlas>::operator->(this_02);
            if (this_00->GetUIHeight() == param_2)
                break;
            this_02 = this_02 + 16;
        }
        this_01 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(this_02);
        this_01->GetUsageMap(param_1);
    }

    // 0x1008cc1f0, 144 bytes, placed by class name and debug map
    // SpriteAtlasManager::MainLogic()
    void SpriteAtlasManager::MainLogic() {
        undefined1* this_00;
        shared_ptr* psVar1;
        SpriteAtlas* pSVar2;
        char cVar3;
        shared_ptr* this_01;

        this_00 = &field_40;
        this_01 = (shared_ptr*)this_00->HeapBeginPtr();
        while (psVar1 = (shared_ptr*)this_00->end(), this_01 != psVar1) {
            pSVar2 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_01);
            pSVar2->MainLogic();
            pSVar2 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_01);
            cVar3 = pSVar2->IsEmpty();
            if (cVar3 == '\0') {
                this_01 = this_01 + 1;
            } else {
                this_01 = (shared_ptr*)this_00->erase(this_01);
            }
        }
        cVar3 = IsExpired();
        if (cVar3 != '\0') {
            ResetToMillisecond(300000);
        }
    }

    // 0x1008cc2f0, 16 bytes, placed by class name and debug map
    // SpriteAtlasManager::Rebuild()
    void SpriteAtlasManager::Rebuild() {}

    // 0x1008cc300, 16 bytes, placed by class name and debug map
    // SpriteAtlasManager::MainDraw()
    void SpriteAtlasManager::MainDraw() {
        HandleSpriteLoadingRequests(this);
    }

    // 0x1008cc310, 16 bytes, placed by class name and debug map
    // SpriteAtlasManager::ForceRebuild()
    void SpriteAtlasManager::ForceRebuild() {
        ResetToMillisecond(300000);
    }

    // 0x1008cc320, 16 bytes, placed by class name and debug map
    // SpriteAtlasManager::RegisterRebuildResetCallback(std::function<void ()> const&)
    /* SpriteAtlasManager::RegisterRebuildResetCallback(std::function<void ()> const&) */

    void SpriteAtlasManager::RegisterRebuildResetCallback(function* param_1) {
        eastl::vector<std::function<void()>, eastl::allocator>::push_back(
            (vector<std::function<void()>, eastl::allocator>*)&field_112, param_1);
    }

    // 0x1008cc380, 32 bytes, placed by class name and debug map
    // SpriteAtlasManager::RegisterRebuildCheckCallback(std::function<bool ()> const&)
    /* SpriteAtlasManager::RegisterRebuildCheckCallback(std::function<bool ()> const&) */

    void SpriteAtlasManager::RegisterRebuildCheckCallback(function* param_1) {
        eastl::vector<std::function<bool()>, eastl::allocator>::push_back(
            (vector<std::function<bool()>, eastl::allocator>*)&field_144, param_1);
    }

} // namespace jag::graphics
