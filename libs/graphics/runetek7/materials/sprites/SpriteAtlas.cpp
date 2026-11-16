// libs/graphics/runetek7/materials/sprites/SpriteAtlas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SpriteAtlas.h"

namespace jag::graphics {
    // 0x100009720: SpriteAtlas::GetID() const has the same machine code as BaseApp::GetExitCode()

    // 0x10005d8c0: SpriteAtlas::GetHALTexture() const has the same machine code as oldscape::OSClientConsoleUI::GetBounds() const

    // 0x100102f30: SpriteAtlas::GetUsageType() const has the same machine code as oldscape::rs2lib::InputField::GetScrollY() const

    // 0x1008c7c10
    SpriteAtlas::SpriteAtlas(TextureManager* textureManager, unsigned int arg2, unsigned int arg3,
                             SpriteAtlasUsageType spriteAtlasUsageType, int arg5)
        : MakeSharedPool<SpriteAtlas, 64>(), field_0(textureManager), field_8(arg3, arg3), m_iD(arg2) {
        new (&field_104) shared_ptr();
        new (&field_120) eastl::vector<std::pair<long long, int>>();
        new (&field_152) eastl::vector<SpriteAtlasMapping>();
        new (&field_184) eastl::vector<shared_ptr<SpriteAtlasReference>>();
        new (&field_216) eastl::vector<CountdownTimerT<std::chrono::steady_clock>>();
        field_248 = arg3;
        m_usageType = spriteAtlasUsageType;
        field_256 = 0;
        new (&field_264) eastl::vector<unsigned int>();
        field_296 = arg5;
        field_264.resize(256);
        SizeAtlasArrays(256);
        CreateRenderingResources();
    }

    // 0x1008c7e20
    void SpriteAtlas::SizeAtlasArrays(unsigned int arg1) {

        SpriteAtlasMapping local_90;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a8;
        CountdownTimerT<std::chrono::steady_clock> local_98;
        field_152.resize((unsigned long)arg1, local_90);
        field_184.resize((unsigned long)arg1, local_a8);
        field_216.resize((unsigned long)arg1, local_98);
    }

    // 0x1008c7f10
    void SpriteAtlas::CreateRenderingResources() {
        shared_ptr<render::Texture2D> local_38;
        unsigned int local_28[2];

        bool cVar1 = (char)field_248;
        new (local_28) callstack::Callstack();
        local_28->AddFormatType(5);
        graphicutils::CreateHALTexture2D<render::Texture2D>(
            (unsigned int)&local_38, field_248, (unsigned char*)(unsigned long)field_248, 0, 1, (bool)(cVar1 * cVar1),
            false, true, (TextureFormatBitSet)0, local_28[0]);
        field_104 = local_38;
    }

    // 0x1008c8020
    void
    SpriteAtlas::Destroy(eastl::vector_map<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>,
                                           eastl::less<int>, BucketAllocatorEASTL>* arg1) {
        int iVar2;
        int iVar3;
        uint64_t in_RAX;
        shared_ptr* this_00;
        shared_ptr* psVar4;
        Layout* pLVar5;
        long lVar6;
        SpriteAtlasReference* pSVar8;

        uint64_t uStack_38 = in_RAX;
        field_104.reset();
        field_216.clear();
        if (arg1 != nullptr) {
            this_00 = (shared_ptr*)field_184.HeapBeginPtr();
            psVar4 = (shared_ptr*)field_184.end();
            for (; this_00 != psVar4; this_00 = this_00 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                    pLVar5 = (Layout*)(*this_00).operator->();
                    lVar6 = pLVar5->HeapBeginPtr();
                    if (-1 < lVar6) {
                        pLVar5 = (Layout*)(*this_00).operator->();
                        if ((pLVar5->HeapBeginPtr() & 131072) == 0) {
                            pSVar8 = (SpriteAtlasReference*)(*this_00).operator->();
                            iVar2 = pSVar8->GetTotalWidth();
                            pSVar8 = (SpriteAtlasReference*)(*this_00).operator->();
                            iVar3 = pSVar8->GetTotalHeight();
                            uStack_38 = (((uint64_t)(iVar3 * iVar2) << 32) | (uint32_t)((uint32_t)uStack_38));
                            ((vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>*)(*arg1)[*(
                                 (int*)((long)&uStack_38 + 4))])
                                ->push_back(*this_00);
                        }
                    }
                    pSVar8 = (SpriteAtlasReference*)(*this_00).operator->();
                    pSVar8->SetLoading();
                }
            }
        }
        field_184.clear();
    }

    // 0x1008c8490
    uint32_t SpriteAtlas::GetAvailableIndex() {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        int* piVar4;
        unsigned long arg1;

        if (field_256 == 0) {
            this_00 = &field_264;
            iVar1 = this_00->size();
            field_256 = iVar1 - 1;
            iVar1 = field_120.size();
            iVar2 = this_00->size();
            if (iVar2 != 0) {
                arg1 = 0;
                do {
                    piVar4 = (int*)(*this_00)[arg1];
                    *piVar4 = iVar1 + (int)arg1;
                    arg1 = arg1 + 1;
                    uVar3 = this_00->size();
                } while (arg1 < uVar3);
            }
            iVar2 = this_00->size();
            SizeAtlasArrays(iVar1 + iVar2);
        }
        iVar1 = field_256;
        field_256 = iVar1 - 1;
        uint32_t* puVar5 = &field_264[(long)iVar1];
        return *puVar5;
    }

    // 0x1008c8550
    void SpriteAtlas::MakeIndexAvailable(int arg1) {
        field_256 = field_256 + 1;
        uint8_t* this_00 = &field_264;
        if (this_00->size() <= field_256) {
            this_00->resize((long)field_256 + 32);
        }
        int* piVar1 = (int*)(*this_00)[(long)field_256];
        *piVar1 = arg1;
    }

    // 0x1008c85b0
    void SpriteAtlas::AddSpriteReference(const shared_ptr<SpriteAtlasReference>& spriteAtlasReference) {
        long arg1 = ((Layout*)spriteAtlasReference.operator->())->HeapBeginPtr();
        int iVar1 = ((FastPool<audio::SoundInstance, int>*)spriteAtlasReference.operator->())->capacity();
        if (arg1 == -1) {
            LogAssert("spriteHash != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      123, "%s: unable to add reference, sprite hash is invalid -1", "AddSpriteReference");
        }
        if (iVar1 == -1) {
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      124, "%s: unable to add reference, sprite index is invalid -1", "AddSpriteReference");
        }
        if (FindSpriteIndexFromHash(arg1) != iVar1) {
            LogAssert("FindSpriteIndexFromHash(spriteHash) == spriteIndex",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      125, "%s: unable to add reference, sprite hash is %i does not exist on this already",
                      "AddSpriteReference", arg1);
        }
        shared_ptr<SpriteAtlasReference>* this_02 = &field_184[(long)iVar1];
        *this_02 = spriteAtlasReference;
    }

    // 0x1008c86c0
    uint32_t SpriteAtlas::FindSpriteIndexFromHash(long long arg1) const {
        long* plVar1;
        long* plVar2;

        if (arg1 != -1) {
            plVar1 = (long*)field_120.HeapBeginPtr();
            plVar2 = (long*)field_120.end();
            for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
                if (*plVar1 == arg1) {
                    return (int)plVar1[1];
                }
            }
        }
        return 4294967295;
    }

    // 0x1008c87b0
    auto SpriteAtlas::GetSpriteReferenceFromIndex(int arg1) const {
        if (arg1 == -1) {
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      132, "%s: unable to get sprite reference, sprite index is undefined",
                      "GetSpriteReferenceFromIndex");
        }
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor = &field_184[(long)arg1];
        return auto(groundDecor);
    }

    // 0x1008c8860
    bool SpriteAtlas::CheckHasSprite(shared_ptr<SpriteAtlasReference>& spriteAtlasReference, long long arg2) const {
        shared_ptr<SpriteAtlasReference>* spriteAtlasReference_00;

        if (arg2 == -1) {
            LogAssert("spriteHash != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      138, "%s: Cannot check for sprite, invalid sprite hash -1", "CheckHasSprite");
        }
        int iVar1 = FindSpriteIndexFromHash(arg2);
        if (iVar1 != -1) {
            spriteAtlasReference_00 = (shared_ptr<SpriteAtlasReference>*)field_184[(long)iVar1];
            spriteAtlasReference = *spriteAtlasReference_00;
        }
        return iVar1 != -1;
    }

    // 0x1008c88f0
    void SpriteAtlas::GetSpritePackMapping(int& arg1, unsigned long& arg2, long long arg3, math::Rect<int>& rect,
                                           unsigned int arg5, unsigned int arg6) {
        bool cVar1;
        uint32_t uVar3;
        uint32_t in_register_00000084;
        unsigned int in_stack_00000008;
        pair<long long, int> local_50;

        Rect<int>* local_40 = (Rect<int>*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg5);
        if ((((arg6 == 0) || (in_stack_00000008 == 0)) || ((unsigned int)arg1[62] < arg6)) ||
            ((unsigned int)arg1[62] < in_stack_00000008)) {
            LogAssert("width > 0 && height > 0 && width <= m_pixelWidth && height <= m_pixelWidth",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      153, "%s: cannot get an atlas mapping slot, width or height is out of range 0>value<=%i (%i,%i)",
                      "GetSpritePackMapping", (unsigned long)(unsigned int)arg1[62], arg6,
                      (unsigned long)in_stack_00000008);
        }
        if ((FindSpriteIndexFromHash((SpriteAtlas*)arg1, (long long)rect) == -1) &&
            (cVar1 = ((arg1 + 2))->addRectangle(*arg3, *local_40, arg6, in_stack_00000008), cVar1)) {
            uVar3 = GetAvailableIndex((SpriteAtlas*)arg1);
            *(uint32_t*)arg2 = uVar3;
            local_50.pair<long long&, int&, false>(rect, arg2);
            ((arg1 + 30))->push_back(local_50);
            return 1;
        }
        *(uint32_t*)arg2 = 4294967295;
        return 0;
    }

    // 0x1008c8d50
    void SpriteAtlas::GetSpriteRenderMapping(int arg1) const {
        if (arg1 == -1) {
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      182, "%s: Unable to get mapping, undefined sprite index provided", "GetSpriteRenderMapping");
        }
        field_152[(long)arg1];
    }

    // 0x1008c8e00
    auto SpriteAtlas::GetAllSpriteMappings() const {
        SpriteAtlasMapping* this_02;
        SpriteAtlasMapping* spriteAtlasMapping;
        shared_ptr<SpriteAtlasReference>* spriteAtlasReference;

        auto result;
        uint8_t* this_00 = &field_120;
        result.reserve(this_00->size());
        auto puVar2 = this_00->HeapBeginPtr();
        auto puVar3 = this_00->end();
        if (puVar2 != puVar3) {
            do {
                if (((CountdownTimerT<std::chrono::steady_clock>*)field_216[(long)*(int*)(puVar2 + 1)])->IsDisabled() !=
                    '\0') {
                    this_02 = (SpriteAtlasMapping*)result.push_back();
                    spriteAtlasMapping = (SpriteAtlasMapping*)field_152[(long)*(int*)(puVar2 + 1)];
                    *this_02 = *spriteAtlasMapping;
                    *(uint64_t*)&this_02[1].field_8 = *puVar2;
                    spriteAtlasReference = (shared_ptr<SpriteAtlasReference>*)field_184[(long)*(int*)(puVar2 + 1)];
                    this_02[1].field_16 = *spriteAtlasReference;
                }
                puVar2 = puVar2 + 2;
            } while (puVar2 != puVar3);
        }
        return result;
    }

    // 0x1008c9150
    void SpriteAtlas::AddSpriteData(unsigned long arg1, const math::Rect<int>& rect, int arg3,
                                    const RGBAImage& rgbaImage, int arg5, int arg6, int arg7) {
        if (arg3 == -1) {
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      207, "%s: unable to %s, sprite index is undefined", "AddSpriteData", "add sprite to atlas");
        }
        if (rgbaImage.IsValid() == '\0') {
            LogAssert("spriteData.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      208, "%s: Cannot add sprite to atlas, provided sprite data is undefined or empty",
                      "AddSpriteData");
        }
        auto plVar7 = field_104.operator->();
        uint32_t uVar3 = rect.GetX();
        uint32_t uVar4 = rect.GetZ();
        uint32_t uVar5 = rect.GetPos();
        uint32_t uVar6 = rect.GetLevel();
        long lVar8 = ((compressed_pair_imp<
                          eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                          eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)field_104.operator->())
                         ->second();
        uint32_t uVar1 = *(uint32_t*)(lVar8 + 12);
        uint64_t uVar9 =
            ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)rgbaImage.GetDevCredentialsOutputDirectory())
                ->data();
        (**(void (**)(...))(*plVar7 + 40))(plVar7, 0, uVar3, uVar4, uVar5, uVar6, uVar1, uVar9);
        auto arg4 = rgbaImage.second();
        AddSpriteMapping(arg1, rect, arg3, *arg4, arg5, arg6, arg7);
    }

    // 0x1008c92c0
    void SpriteAtlas::AddSpriteMapping(unsigned long arg1, const math::Rect<int>& rect, int arg3,
                                       const eastl::fixed_vector<int, 4ul>& arg4, int arg5, int arg6, int arg7) {
        uint8_t local_a8[64];
        Rect<float> local_50;
        array<int, 2ul> local_40;

        new (local_a8) SpriteAtlasMapping();
        Rect<unsigned int> local_60 = rect;
        (*((local_a8 + 8))) = arg4;
        int iVar4 = rect.GetX();
        unsigned int uVar1 = field_248;
        int iVar5 = rect.GetX();
        int iVar6 = rect.GetPos();
        unsigned int uVar2 = field_248;
        int iVar7 = rect.GetZ();
        unsigned int uVar3 = field_248;
        int iVar8 = rect.GetZ();
        int iVar9 = rect.GetLevel();
        local_50.SetUV((float)(iVar4 + arg5) / (float)uVar1, (float)((iVar5 - arg5) + iVar6) / (float)uVar2,
                       (float)(iVar7 + arg5) / (float)uVar3, (float)((iVar8 - arg5) + iVar9) / (float)field_248);
        local_a8._0_4_ = arg5;
        unsigned long local_68 = arg1;
        int* piVar10 = &local_40[0];
        *piVar10 = arg6;
        piVar10 = &local_40[1];
        *piVar10 = arg7;
        SpriteAtlasMapping* this_00 = &field_152[(long)arg3];
        *this_00 = *local_a8;
    }

    // 0x1008c9510
    void SpriteAtlas::RemoveSpriteByIndex(int arg1) {
        int iVar1;
        pair<long long, int>* ppVar3;

        if ((arg1 < 0) || (iVar1 = field_152.size(), iVar1 <= arg1)) {
            LogAssert("spriteIndex > -1 && spriteIndex < (int)m_spriteMappings.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      238, "%s: unable to remove sprite, sprite index %d is out of range", "RemoveSpriteByIndex",
                      (unsigned long)(unsigned int)arg1);
        }
        long lVar2 = field_152[(long)arg1];
        field_8.removeRectangle(*(unsigned long*)(lVar2 + 64));
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        shared_ptr<SpriteAtlasReference>* this_00 = &field_184[(long)arg1];
        *this_00 = local_30;
        MakeIndexAvailable(arg1);
        uint8_t* this_01 = &field_120;
        auto arg1_00 = this_01->HeapBeginPtr();
        while (true) {
            ppVar3 = (pair<long long, int>*)this_01->end();
            if (arg1_00 == ppVar3) {
                return;
            }
            if (*(int*)(arg1_00 + 8) == arg1)
                break;
            arg1_00 = arg1_00 + 16;
        }
        this_01->erase(arg1_00);
    }

    // 0x1008c9780
    void SpriteAtlas::GetUsageMap(SpriteAtlasUsageMap& spriteAtlasUsageMap) const {
        bool bVar1;
        bool cVar2;
        unsigned long uVar4;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<SpriteAtlasReference>* this_01;
        unsigned long uVar5;

        uint8_t* this_00 = &field_152;
        long lVar3 = this_00->size();
        if (lVar3 != 0) {
            uVar4 = 0;
            uVar5 = 1;
            do {
                midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)field_184[uVar4];
                bVar1 = *midiPlayerMainThread != nullptr;
                if (bVar1) {
                    this_01 = &field_184[uVar4];
                    cVar2 = ((SpriteAtlasReference*)(*this_01).operator->())->ShouldAlwaysBeLoaded();
                    if (!cVar2) {
                        cVar2 = ((CountdownTimerT<std::chrono::steady_clock>*)field_216[uVar4])->IsDisabled();
                        lVar3 = (*this_00)[uVar4];
                        if (!cVar2) {
                            spriteAtlasUsageMap.AddPendingRectIDs(*(unsigned long*)(lVar3 + 64));
                        } else {
                            spriteAtlasUsageMap.AddFilledRectIDs(*(unsigned long*)(lVar3 + 64));
                        }
                    } else {
                        lVar3 = (*this_00)[uVar4];
                        spriteAtlasUsageMap.AddPermanentRectIDs(*(unsigned long*)(lVar3 + 64));
                    }
                }
                uVar4 = this_00->size();
                bVar1 = uVar5 < uVar4;
                uVar4 = uVar5;
                uVar5 = (unsigned long)((int)uVar5 + 1);
            } while (bVar1);
        }
        spriteAtlasUsageMap.UpdateUsageMap<BucketAllocatorEASTL>(field_8);
    }

    // 0x1008c9a10
    void SpriteAtlas::MainLogic() {
        void result;
        bool bVar1;
        bool cVar2;
        int iVar3;
        unsigned long uVar5;
        CountdownTimerT<std::chrono::steady_clock>* this_01;
        shared_ptr* this_02;
        SpriteAtlasReference* pSVar6;
        ReturnValue result;
        unsigned long uVar7;

        uint8_t* this_00 = &field_216;
        if (this_00->size() != 0) {
            uVar5 = 0;
            uVar7 = 1;
            do {
                this_01 = (CountdownTimerT<std::chrono::steady_clock>*)(*this_00)[uVar5];
                this_02 = &field_184[uVar5];
                cVar2 = this_01->IsDisabled();
                if (!cVar2) {
                    iVar3 = this_02->use_count();
                    if (iVar3 < 2) {
                        pSVar6 = (SpriteAtlasReference*)(*this_02).operator->();
                        cVar2 = pSVar6->ShouldAlwaysBeLoaded();
                        if (!cVar2) {
                            cVar2 = this_01->IsExpired();
                            if (cVar2) {
                                new (this_01) CountdownTimerT<std::chrono::steady_clock>();
                                RemoveSpriteByIndex((int)uVar7 - 1);
                            }
                            goto LAB_1008c9a68;
                        }
                    }
                    new (this_01) CountdownTimerT<std::chrono::steady_clock>();
                } else {
                    cVar2 = shared_ptr::operator_cast_to_bool(this_02);
                    if (cVar2) {
                        pSVar6 = (SpriteAtlasReference*)(*this_02).operator->();
                        cVar2 = pSVar6->ShouldAlwaysBeLoaded();
                        if (!cVar2) {
                            iVar3 = this_02->use_count();
                            if (iVar3 == 1) {
                                &result = (ReturnValue*)(*this_00)[uVar5];
                                pSVar6 = (SpriteAtlasReference*)(*this_02).operator->();
                                cVar2 = pSVar6->GetDisableCache();
                                iVar3 = 0;
                                if (!cVar2) {
                                    iVar3 = field_296;
                                }
                                result = CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond((long)iVar3);
                            }
                        }
                    }
                }
            LAB_1008c9a68:
                uVar5 = this_00->size();
                bVar1 = uVar7 < uVar5;
                uVar5 = uVar7;
                uVar7 = (unsigned long)((int)uVar7 + 1);
            } while (bVar1);
        }
    }

    // 0x1008c9c80
    void SpriteAtlas::DecrementAlwaysLoaded(long long arg1) {
        shared_ptr<SpriteAtlasReference>* this_00;

        auto plVar1 = field_120.HeapBeginPtr();
        auto plVar2 = field_120.end();
        if (plVar1 != plVar2) {
            do {
                if (*plVar1 == arg1) {
                    this_00 = (shared_ptr<SpriteAtlasReference>*)field_184[(long)(int)plVar1[1]];
                    ((SpriteAtlasReference*)(*this_00).operator->())->DecrementAlwaysLoaded();
                }
                plVar1 = plVar1 + 2;
            } while (plVar1 != plVar2);
        }
    }

    // 0x1008c9d40
    void SpriteAtlas::IncrementAlwaysLoaded(long long arg1) {
        shared_ptr<SpriteAtlasReference>* this_00;

        auto plVar1 = field_120.HeapBeginPtr();
        auto plVar2 = field_120.end();
        if (plVar1 != plVar2) {
            do {
                if (*plVar1 == arg1) {
                    this_00 = (shared_ptr<SpriteAtlasReference>*)field_184[(long)(int)plVar1[1]];
                    ((SpriteAtlasReference*)(*this_00).operator->())->IncrementAlwaysLoaded();
                }
                plVar1 = plVar1 + 2;
            } while (plVar1 != plVar2);
        }
    }

    // 0x1008c9dd0
    uint64_t SpriteAtlas::FindSpriteHashFromIndex(int arg1) const {
        uint64_t* puVar1;
        uint64_t* puVar2;

        if (-1 < arg1) {
            puVar1 = (uint64_t*)field_120.HeapBeginPtr();
            puVar2 = (uint64_t*)field_120.end();
            for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
                if (*(int*)(puVar1 + 1) == arg1) {
                    return *puVar1;
                }
            }
        }
        return 18446744073709551615;
    }

    // 0x1008c9e40
    bool SpriteAtlas::GetDetailsAtPosition(int& arg1, SpriteAtlasUsageType& spriteAtlasUsageType, math::Rect<int>& rect,
                                           int arg4, int arg5) const {
        int iVar1;
        int arg3;
        CoordMapSquare* this_00;
        bool cVar2;
        SpriteAtlasUsageType SVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        long long arg1_00;
        int* piVar8;
        unsigned long arg1_01;
        shared_ptr local_78;
        CoordMapSquare* local_68;
        vector<SpriteAtlasMapping>* local_60;
        int local_34;

        vector<SpriteAtlasMapping>* this_02 = (vector<SpriteAtlasMapping>*)&field_152;
        int* local_50 = arg1;
        SpriteAtlasUsageType* local_40 = spriteAtlasUsageType;
        int iVar3 = this_02->size();
        if (0 < iVar3) {
            arg1_01 = 0;
            local_60 = this_02;
            local_34 = arg5;
            do {
                piVar7 = (int*)(*this_02)[arg1_01];
                local_68 = (CoordMapSquare*)(piVar7 + 18);
                cVar2 = local_68->IsInside(arg4, arg5);
                iVar3 = 0;
                if (cVar2) {
                    GetSpriteReferenceFromIndex((ReturnValue*)&local_78, this, (int)arg1_01);
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_78);
                    iVar3 = 2;
                    if (cVar2) {
                        arg1_00 = ((Layout*)local_78.operator->())->HeapBeginPtr();
                        iVar3 = oldscape::ClientNpc::GetShortIDFromUID(arg1_00);
                        *local_50 = iVar3;
                        SVar4 = SpriteAtlasManager::GetUsageTypeFromHash(arg1_00);
                        this_00 = local_68;
                        *local_40 = SVar4;
                        iVar5 = local_68->GetX();
                        iVar3 = *piVar7;
                        iVar6 = this_00->GetZ();
                        iVar1 = *piVar7;
                        piVar8 = (int*)(*((piVar7 + 26)))[0];
                        arg3 = *piVar8;
                        piVar7 = (int*)(*((piVar7 + 26)))[1];
                        new (rect) oldscape::dash3d::GridRect(iVar5 - iVar3, iVar6 - iVar1, arg3, *piVar7);
                        iVar3 = 1;
                        arg5 = local_34;
                    }
                }
                this_02 = local_60;
                if (iVar3 != 0)
                    goto LAB_1008c9f9f;
                arg1_01 = arg1_01 + 1;
                iVar3 = local_60->size();
            } while ((long)arg1_01 < (long)iVar3);
        }
        iVar3 = 2;
    LAB_1008c9f9f:
        return iVar3 != 2;
    }

} // namespace jag::graphics
