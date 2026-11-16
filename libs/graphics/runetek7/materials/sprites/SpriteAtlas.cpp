// libs/graphics/runetek7/materials/sprites/SpriteAtlas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SpriteAtlas.h"

namespace jag::graphics {
    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    SpriteAtlas::GetID() const;

    // 0x10005d8c0: the linker folded this into oldscape::OSClientConsoleUI::GetBounds() const, which has identical code
    SpriteAtlas::GetHALTexture() const;

    // 0x100102f30: the linker folded this into oldscape::rs2lib::InputField::GetScrollY() const, which has identical code
    SpriteAtlas::GetUsageType() const;

    // 0x1008c7c10, 352 bytes, base-object constructor, placed by class name and debug map
    // SpriteAtlas::SpriteAtlas(TextureManager*, unsigned int, unsigned int, SpriteAtlasUsageType, int)
    void SpriteAtlas::SpriteAtlas(long param_1, undefined4 param_2, uint param_3, undefined4 param_5, int param_6) {
        _func_decltype_nullptr* p_Var1;

        new (this) MakeSharedPool<SpriteAtlas, 64>();
        field_0 = param_1;
        p_Var1 = (_func_decltype_nullptr*)(ulong)param_3;
        new (&field_8, param_3, param_3) math::RectanglePacker<int, BucketAllocatorEASTL>();
        field_96 = param_2;
        new (&field_104, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_120) eastl::vector<std::pair<long long, int>, eastl::allocator>();
        new (&field_152) eastl::vector<SpriteAtlasMapping, eastl::allocator>();
        new (&field_184) eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>();
        new (&field_216) eastl::vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>();
        *(uint*)&field_248 = param_3;
        *(undefined4*)((long)&field_248 + 4) = param_5;
        field_256 = 0;
        new (&field_264) eastl::vector<unsigned int, eastl::allocator>();
        field_296 = param_6;
        eastl::vector<unsigned int, eastl::allocator>::resize((ulong)&field_264);
        SizeAtlasArrays(this, 256);
        CreateRenderingResources(this);
    }

    // 0x1008c7e20, 240 bytes, placed by class name
    // SpriteAtlas::SizeAtlasArrays(unsigned int)
    void SpriteAtlas::SizeAtlasArrays(uint param_1) {
        shared_ptr local_a8;
        CountdownTimerT<std::chrono::steady_clock> local_98[8];
        SpriteAtlasMapping local_90;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_90) SpriteAtlasMapping();
        new (&local_a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        CountdownTimerT<std::chrono::steady_clock>::CountdownTimerT(local_98);
        (&field_152, (ulong)param_1, &local_90)->resize();
        (&field_184, (ulong)param_1, &local_a8)->resize();
        (&field_216, (ulong)param_1, (CountdownTimerT*)local_98)->resize();
        local_a8.~shared_ptr();
        local_90.~SpriteAtlasMapping();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008c7f10, 176 bytes, placed by class name
    // SpriteAtlas::CreateRenderingResources()
    void SpriteAtlas::CreateRenderingResources() {
        int iVar1;
        uint in_stack_ffffffffffffffc0;
        shared_ptr local_38;
        bool local_28[8];

        iVar1 = *(int*)&field_248;
        new (local_28) callstack::Callstack();
        local_28->AddFormatType(5);
        graphicutils::CreateHALTexture2D<render::Texture2D>(
            &local_38, (graphicutils*)(ulong) * (uint*)&field_248, *(uint*)&field_248, 0, &DAT_00000001, iVar1 * iVar1,
            0, true, false, local_28[0], (TextureFormatBitSet)0, in_stack_ffffffffffffffc0);
        shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)&field_104, &local_38);
        local_38.~shared_ptr();
    }

    // 0x1008c8010, 16 bytes, complete-object constructor, placed by class name
    // SpriteAtlas::SpriteAtlas(TextureManager*, unsigned int, unsigned int, SpriteAtlasUsageType, int): jumps straight to the base-object constructor

    // 0x1008c8020, 288 bytes, placed by class name
    // SpriteAtlas::Destroy(eastl::vector_map<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL> >, BucketAllocatorEASTL> >*)
    void SpriteAtlas::Destroy(vector_map* param_1) {
        int iVar2;
        int iVar3;
        undefined8 in_RAX;
        shared_ptr* this_00;
        shared_ptr* psVar4;
        Layout* pLVar5;
        long lVar6;
        SpriteAtlasReference* pSVar8;
        vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>* this_01;
        undefined8 uStack_38;

        uStack_38 = in_RAX;
        shared_ptr<render::Texture2D>::reset();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if (param_1 != (vector_map*)0) {
            this_00 = (shared_ptr*)(&field_184)->HeapBeginPtr();
            psVar4 = (shared_ptr*)(&field_184)->end();
            for (; this_00 != psVar4; this_00 = this_00 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_00)) {
                    pLVar5 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->(
                        (shared_ptr<SpriteAtlasReference>*)this_00);
                    lVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar5);
                    if (-1 < lVar6) {
                        pLVar5 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->(
                            (shared_ptr<SpriteAtlasReference>*)this_00);
                        if ((eastl::basic_string<
                                 char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                     eastl::allocator>>::Layout::HeapBeginPtr(pLVar5) &
                             131072) == 0) {
                            pSVar8 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                                (shared_ptr<SpriteAtlasReference>*)this_00);
                            iVar2 = pSVar8->GetTotalWidth();
                            pSVar8 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                                (shared_ptr<SpriteAtlasReference>*)this_00);
                            iVar3 = pSVar8->GetTotalHeight();
                            uStack_38 = CONCAT44(iVar3 * iVar2, (undefined4)uStack_38);
                            this_01 =
                                (vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>*)eastl::vector_map<
                                    int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>,
                                    eastl::less<int>, BucketAllocatorEASTL,
                                    eastl::vector<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>,
                                                                                 BucketAllocatorEASTL>>,
                                                  BucketAllocatorEASTL>>::
                                operator[](
                                    (vector_map<
                                        int, eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>,
                                        eastl::less<int>, BucketAllocatorEASTL,
                                        eastl::vector<eastl::pair<int, eastl::vector<shared_ptr<SpriteAtlasReference>,
                                                                                     BucketAllocatorEASTL>>,
                                                      BucketAllocatorEASTL>>*)param_1,
                                    (int*)((long)&uStack_38 + 4));
                            eastl::vector<shared_ptr<SpriteAtlasReference>, BucketAllocatorEASTL>::push_back(this_01,
                                                                                                             this_00);
                        }
                    }
                    pSVar8 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                        (shared_ptr<SpriteAtlasReference>*)this_00);
                    pSVar8->SetLoading();
                }
            }
        }
        (&field_184)->clear();
    }

    // 0x1008c8490, 192 bytes, placed by class name
    // SpriteAtlas::GetAvailableIndex()
    undefined4 SpriteAtlas::GetAvailableIndex() {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        uint uVar3;
        int* piVar4;
        undefined4* puVar5;
        ulong uVar6;

        if (field_256 == 0) {
            this_00 = &field_264;
            iVar1 = this_00->size();
            field_256 = iVar1 + -1;
            iVar1 = (&field_120)->size();
            iVar2 = this_00->size();
            if (iVar2 != 0) {
                uVar6 = 0;
                do {
                    piVar4 = (int*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                        (vector<unsigned int, eastl::allocator>*)this_00, uVar6);
                    *piVar4 = iVar1 + (int)uVar6;
                    uVar6 = uVar6 + 1;
                    uVar3 = this_00->size();
                } while (uVar6 < uVar3);
            }
            iVar2 = this_00->size();
            SizeAtlasArrays(this, iVar1 + iVar2);
        }
        iVar1 = field_256;
        field_256 = iVar1 + -1;
        puVar5 = (undefined4*)eastl::vector<unsigned int, eastl::allocator>::operator[](
            (vector<unsigned int, eastl::allocator>*)&field_264, (long)iVar1);
        return *puVar5;
    }

    // 0x1008c8550, 96 bytes, placed by class name
    // SpriteAtlas::MakeIndexAvailable(int)
    void SpriteAtlas::MakeIndexAvailable(int param_1) {
        undefined1* this_00;
        int* piVar1;
        int iVar2;

        field_256 = field_256 + 1;
        this_00 = &field_264;
        iVar2 = this_00->size();
        if (iVar2 <= field_256) {
            eastl::vector<unsigned int, eastl::allocator>::resize((ulong)this_00);
        }
        piVar1 = (int*)eastl::vector<unsigned int, eastl::allocator>::operator[](
            (vector<unsigned int, eastl::allocator>*)this_00, (long)field_256);
        *piVar1 = param_1;
    }

    // 0x1008c85b0, 272 bytes, placed by class name
    // SpriteAtlas::AddSpriteReference(shared_ptr<SpriteAtlasReference> const&)
    void SpriteAtlas::AddSpriteReference(shared_ptr* param_1) {
        int iVar1;
        Layout* this_00;
        long lVar3;
        FastPool<audio::SoundInstance, int>* this_01;
        shared_ptr<SpriteAtlasReference>* this_02;

        this_00 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)param_1);
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        this_01 = (FastPool<audio::SoundInstance, int>*)shared_ptr<SpriteAtlasReference>::operator->(
            (shared_ptr<SpriteAtlasReference>*)param_1);
        iVar1 = FastPool<audio::SoundInstance, int>::capacity(this_01);
        if (lVar3 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteHash != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      123, "%s: unable to add reference, sprite hash is invalid -1", "AddSpriteReference");
        }
        if (iVar1 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      124, "%s: unable to add reference, sprite index is invalid -1", "AddSpriteReference");
        }
        if (FindSpriteIndexFromHash(this, lVar3) != iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("FindSpriteIndexFromHash(spriteHash) == spriteIndex",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      125, "%s: unable to add reference, sprite hash is %i does not exist on this already",
                      "AddSpriteReference", lVar3);
        }
        this_02 = (shared_ptr<SpriteAtlasReference>*)
            eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184, (long)iVar1);
        shared_ptr<SpriteAtlasReference>::operator=(this_02, param_1);
    }

    // 0x1008c86c0, 112 bytes, placed by class name
    // SpriteAtlas::FindSpriteIndexFromHash(long long) const
    undefined4 SpriteAtlas::FindSpriteIndexFromHash(longlong param_1) {
        long* plVar1;
        long* plVar2;

        if (param_1 != -1) {
            plVar1 = (long*)(&field_120)->HeapBeginPtr();
            plVar2 = (long*)(&field_120)->end();
            for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
                if (*plVar1 == param_1) {
                    return (int)plVar1[1];
                }
            }
        }
        return 4294967295;
    }

    // 0x1008c87b0, 112 bytes, placed by class name
    // SpriteAtlas::GetSpriteReferenceFromIndex(int) const
    SpriteAtlas* SpriteAtlas::GetSpriteReferenceFromIndex(int param_1) {
        shared_ptr* psVar1;
        int in_EDX;
        undefined4 in_register_00000034;

        if (in_EDX == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      132, "%s: unable to get sprite reference, sprite index is undefined",
                      "GetSpriteReferenceFromIndex");
        }
        psVar1 = (shared_ptr*)eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
            (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)(CONCAT44(in_register_00000034, param_1) +
                                                                          184),
            (long)in_EDX);
        new (this) shared_ptr<oldscape::dash3d::Decor>(psVar1);
        return this;
    }

    // 0x1008c8860, 144 bytes, placed by class name
    // SpriteAtlas::CheckHasSprite(shared_ptr<SpriteAtlasReference>&, long long) const
    bool SpriteAtlas::CheckHasSprite(shared_ptr* param_1, longlong param_2) {
        int iVar1;
        shared_ptr* psVar2;

        if (param_2 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteHash != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      138, "%s: Cannot check for sprite, invalid sprite hash -1", "CheckHasSprite");
        }
        iVar1 = FindSpriteIndexFromHash(this, param_2);
        if (iVar1 != -1) {
            psVar2 = (shared_ptr*)eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184, (long)iVar1);
            shared_ptr<SpriteAtlasReference>::operator=((shared_ptr<SpriteAtlasReference>*)param_1, psVar2);
        }
        return iVar1 != -1;
    }

    // 0x1008c88f0, 240 bytes, placed by class name
    // SpriteAtlas::GetSpritePackMapping(int&, unsigned long&, long long, math::Rect<int>&, unsigned int, unsigned int)
    undefined8 SpriteAtlas::GetSpritePackMapping(int* param_1, ulong* param_2, longlong param_3, Rect* param_4,
                                                 uint param_5, uint param_6) {
        char cVar1;
        int iVar2;
        pair<long long, int> local_50[16];
        longlong local_38;

        local_38 = param_3;
        if ((((param_5 == 0) || (param_6 == 0)) || (*(uint*)&field_248 < param_5)) || (*(uint*)&field_248 < param_6)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width > 0 && height > 0 && width <= m_pixelWidth && height <= m_pixelWidth",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      153, "%s: cannot get an atlas mapping slot, width or height is out of range 0>value<=%i (%i,%i)",
                      "GetSpritePackMapping", (ulong) * (uint*)&field_248, param_5, (ulong)param_6);
        }
        iVar2 = FindSpriteIndexFromHash(this, param_3);
        if ((iVar2 == -1) && (cVar1 = (&field_8, param_2, param_4, param_5, param_6)->addRectangle(), cVar1 != '\0')) {
            iVar2 = GetAvailableIndex(this);
            *param_1 = iVar2;
            std::pair<long long, int>::pair<long long&, int&, false>(local_50, &local_38, param_1);
            (&field_120, (pair*)local_50)->push_back();
            return 1;
        }
        *param_1 = -1;
        return 0;
    }

    // 0x1008c8d50, 96 bytes, placed by class name
    // SpriteAtlas::GetSpriteRenderMapping(int) const
    void SpriteAtlas::GetSpriteRenderMapping(int param_1) {
        if (param_1 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      182, "%s: Unable to get mapping, undefined sprite index provided", "GetSpriteRenderMapping");
        }
        eastl::vector<SpriteAtlasMapping, eastl::allocator>::operator[](
            (vector<SpriteAtlasMapping, eastl::allocator>*)&field_152, (long)param_1);
    }

    // 0x1008c8e00, 288 bytes, placed by class name
    // SpriteAtlas::GetAllSpriteMappings() const
    SpriteAtlas* SpriteAtlas::GetAllSpriteMappings() {
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        ulong uVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        CountdownTimerT<std::chrono::steady_clock>* this_01;
        SpriteAtlasMapping* this_02;
        SpriteAtlasMapping* pSVar5;
        shared_ptr* psVar6;
        long in_RSI;

        new (this) eastl::vector<SpriteAtlasMappingExtended, eastl::allocator>();
        this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 120);
        uVar2 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        reserve(uVar2);
        puVar3 = (undefined8*)this_00->HeapBeginPtr();
        puVar4 = (undefined8*)this_00->end();
        if (puVar3 != puVar4) {
            do {
                this_01 = (CountdownTimerT<std::chrono::steady_clock>*)
                    eastl::vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>::operator[](
                        (vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>*)(in_RSI + 216),
                        (long)*(int*)(puVar3 + 1));
                if (this_01->IsDisabled() != '\0') {
                    this_02 = (SpriteAtlasMapping*)push_back();
                    pSVar5 = (SpriteAtlasMapping*)eastl::vector<SpriteAtlasMapping, eastl::allocator>::operator[](
                        (vector<SpriteAtlasMapping, eastl::allocator>*)(in_RSI + 152), (long)*(int*)(puVar3 + 1));
                    SpriteAtlasMapping::operator=(this_02, pSVar5);
                    *(undefined8*)&this_02[1].field_8 = *puVar3;
                    psVar6 = (shared_ptr*)eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                        (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)(in_RSI + 184),
                        (long)*(int*)(puVar3 + 1));
                    shared_ptr<SpriteAtlasReference>::operator=((shared_ptr<SpriteAtlasReference>*)&this_02[1].field_16,
                                                                psVar6);
                }
                puVar3 = puVar3 + 2;
            } while (puVar3 != puVar4);
        }
        return this;
    }

    // 0x1008c9150, 336 bytes, placed by class name
    // SpriteAtlas::AddSpriteData(unsigned long, math::Rect<int> const&, int, RGBAImage const&, int, int, int)
    void SpriteAtlas::AddSpriteData(ulong param_1, Rect* param_2, int param_3, RGBAImage* param_4, int param_5,
                                    int param_6, int param_7) {
        undefined4 uVar1;
        char cVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        long* plVar7;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_00;
        long lVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        undefined8 uVar9;
        fixed_vector* pfVar10;

        if (param_3 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteIndex != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      207, "%s: unable to %s, sprite index is undefined", "AddSpriteData", "add sprite to atlas");
        }
        cVar2 = param_4->IsValid();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteData.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      208, "%s: Cannot add sprite to atlas, provided sprite data is undefined or empty",
                      "AddSpriteData");
        }
        plVar7 = (long*)shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)&field_104);
        uVar3 = param_2->GetX();
        uVar4 = param_2->GetZ();
        uVar5 = param_2->GetPos();
        uVar6 = param_2->GetLevel();
        this_00 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)&field_104);
        lVar8 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_00);
        uVar1 = *(undefined4*)(lVar8 + 12);
        this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)param_4->GetDevCredentialsOutputDirectory();
        uVar9 = this_01->data();
        (**(code**)(*plVar7 + 40))(plVar7, 0, uVar3, uVar4, uVar5, uVar6, uVar1, uVar9);
        pfVar10 = (fixed_vector*)param_4->second();
        AddSpriteMapping(this, param_1, param_2, param_3, pfVar10, param_5, param_6, param_7);
    }

    // 0x1008c92c0, 496 bytes, placed by class name
    // SpriteAtlas::AddSpriteMapping(unsigned long, math::Rect<int> const&, int, eastl::fixed_vector<int, 4ul, true, eastl::allocator> const&, int, int, int)
    void SpriteAtlas::AddSpriteMapping(ulong param_1, Rect* param_2, int param_3, fixed_vector* param_4, int param_5,
                                       int param_6, int param_7) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int* piVar10;
        SpriteAtlasMapping* this_00;
        undefined1 local_a8[64];
        ulong local_68;
        Rect<unsigned int> local_60[16];
        Rect<float> local_50[16];
        array<int, 2ul> local_40[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_a8) SpriteAtlasMapping();
        math::Rect<unsigned int>::operator=(local_60, param_2);
        eastl::fixed_vector<int, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 4ul, true, eastl::allocator>*)(local_a8 + 8), param_4);
        iVar4 = param_2->GetX();
        uVar1 = *(uint*)&field_248;
        iVar5 = param_2->GetX();
        iVar6 = param_2->GetPos();
        uVar2 = *(uint*)&field_248;
        iVar7 = param_2->GetZ();
        uVar3 = *(uint*)&field_248;
        iVar8 = param_2->GetZ();
        iVar9 = param_2->GetLevel();
        local_50->SetUV((float)(iVar4 + param_5) / (float)uVar1, (float)((iVar5 - param_5) + iVar6) / (float)uVar2,
                        (float)(iVar7 + param_5) / (float)uVar3,
                        (float)((iVar8 - param_5) + iVar9) / (float)*(uint*)&field_248);
        local_a8._0_4_ = param_5;
        local_68 = param_1;
        piVar10 = (int*)std::array<int, 2ul>::operator[](local_40, 0);
        *piVar10 = param_6;
        piVar10 = (int*)std::array<int, 2ul>::operator[](local_40, 1);
        *piVar10 = param_7;
        this_00 = (SpriteAtlasMapping*)eastl::vector<SpriteAtlasMapping, eastl::allocator>::operator[](
            (vector<SpriteAtlasMapping, eastl::allocator>*)&field_152, (long)param_3);
        SpriteAtlasMapping::operator=(this_00, (SpriteAtlasMapping*)local_a8);
        local_a8->~SpriteAtlasMapping();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008c9510, 272 bytes, placed by class name
    // SpriteAtlas::RemoveSpriteByIndex(int)
    void SpriteAtlas::RemoveSpriteByIndex(int param_1) {
        int iVar1;
        long lVar2;
        shared_ptr<SpriteAtlasReference>* this_00;
        pair* ppVar3;
        pair* ppVar4;
        undefined1* this_01;
        shared_ptr local_30;

        if ((param_1 < 0) || (iVar1 = (&field_152)->size(), iVar1 <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteIndex > -1 && spriteIndex < (int)m_spriteMappings.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlas.cpp",
                      238, "%s: unable to remove sprite, sprite index %d is out of range", "RemoveSpriteByIndex",
                      (ulong)(uint)param_1);
        }
        lVar2 = eastl::vector<SpriteAtlasMapping, eastl::allocator>::operator[](
            (vector<SpriteAtlasMapping, eastl::allocator>*)&field_152, (long)param_1);
        (&field_8, *(ulong*)(lVar2 + 64))->removeRectangle();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_00 = (shared_ptr<SpriteAtlasReference>*)
            eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184, (long)param_1);
        shared_ptr<SpriteAtlasReference>::operator=(this_00, &local_30);
        local_30.~shared_ptr();
        MakeIndexAvailable(this, param_1);
        this_01 = &field_120;
        ppVar3 = (pair*)this_01->HeapBeginPtr();
        while (true) {
            ppVar4 = (pair*)this_01->end();
            if (ppVar3 == ppVar4) {
                return;
            }
            if (*(int*)(ppVar3 + 8) == param_1)
                break;
            ppVar3 = ppVar3 + 16;
        }
        this_01->erase(ppVar3);
    }

    // 0x1008c9780, 320 bytes, placed by class name
    // SpriteAtlas::GetUsageMap(SpriteAtlasUsageMap&) const
    void SpriteAtlas::GetUsageMap(SpriteAtlasUsageMap* param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        ulong uVar4;
        shared_ptr* psVar5;
        shared_ptr<SpriteAtlasReference>* this_01;
        SpriteAtlasReference* this_02;
        CountdownTimerT<std::chrono::steady_clock>* this_03;
        ulong uVar6;

        this_00 = &field_152;
        lVar3 = this_00->size();
        if (lVar3 != 0) {
            uVar4 = 0;
            uVar6 = 1;
            do {
                psVar5 = (shared_ptr*)eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                    (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184, uVar4);
                bVar1 = operator!=(psVar5, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    this_01 = (shared_ptr<SpriteAtlasReference>*)
                        eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                            (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184, uVar4);
                    this_02 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(this_01);
                    cVar2 = this_02->ShouldAlwaysBeLoaded();
                    if (cVar2 == '\0') {
                        this_03 = (CountdownTimerT<std::chrono::steady_clock>*)
                            eastl::vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>::operator[](
                                (vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>*)&field_216,
                                uVar4);
                        cVar2 = this_03->IsDisabled();
                        lVar3 = eastl::vector<SpriteAtlasMapping, eastl::allocator>::operator[](
                            (vector<SpriteAtlasMapping, eastl::allocator>*)this_00, uVar4);
                        if (cVar2 == '\0') {
                            param_1->AddPendingRectIDs(*(ulong*)(lVar3 + 64));
                        } else {
                            param_1->AddFilledRectIDs(*(ulong*)(lVar3 + 64));
                        }
                    } else {
                        lVar3 = eastl::vector<SpriteAtlasMapping, eastl::allocator>::operator[](
                            (vector<SpriteAtlasMapping, eastl::allocator>*)this_00, uVar4);
                        param_1->AddPermanentRectIDs(*(ulong*)(lVar3 + 64));
                    }
                }
                uVar4 = this_00->size();
                bVar1 = uVar6 < uVar4;
                uVar4 = uVar6;
                uVar6 = (ulong)((int)uVar6 + 1);
            } while (bVar1);
        }
        SpriteAtlasUsageMap::UpdateUsageMap<BucketAllocatorEASTL>((RectanglePacker*)param_1);
    }

    // 0x1008c9a10, 384 bytes, placed by class name
    // SpriteAtlas::MainLogic()
    void SpriteAtlas::MainLogic() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        ulong uVar5;
        CountdownTimerT<std::chrono::steady_clock>* pCVar6;
        shared_ptr* this_01;
        SpriteAtlasReference* pSVar7;
        ulong uVar8;

        this_00 = &field_216;
        lVar4 = this_00->size();
        if (lVar4 != 0) {
            uVar5 = 0;
            uVar8 = 1;
            do {
                pCVar6 = (CountdownTimerT<std::chrono::steady_clock>*)
                    eastl::vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>::operator[](
                        (vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>*)this_00, uVar5);
                this_01 = (shared_ptr*)eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                    (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184, uVar5);
                cVar1 = pCVar6->IsDisabled();
                if (cVar1 == '\0') {
                    iVar3 = this_01->use_count();
                    if (iVar3 < 2) {
                        pSVar7 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                            (shared_ptr<SpriteAtlasReference>*)this_01);
                        cVar1 = pSVar7->ShouldAlwaysBeLoaded();
                        if (cVar1 == '\0') {
                            cVar1 = pCVar6->IsExpired();
                            if (cVar1 != '\0') {
                                CountdownTimerT<std::chrono::steady_clock>::CountdownTimerT(pCVar6);
                                RemoveSpriteByIndex(this, (int)uVar8 + -1);
                            }
                            goto LAB_1008c9a68;
                        }
                    }
                    CountdownTimerT<std::chrono::steady_clock>::CountdownTimerT(pCVar6);
                } else {
                    bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                    if (bVar2) {
                        pSVar7 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                            (shared_ptr<SpriteAtlasReference>*)this_01);
                        cVar1 = pSVar7->ShouldAlwaysBeLoaded();
                        if (cVar1 == '\0') {
                            iVar3 = this_01->use_count();
                            if (iVar3 == 1) {
                                pCVar6 = (CountdownTimerT<std::chrono::steady_clock>*)eastl::
                                    vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>::operator[](
                                        (vector<CountdownTimerT<std::chrono::steady_clock>, eastl::allocator>*)this_00,
                                        uVar5);
                                pSVar7 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(
                                    (shared_ptr<SpriteAtlasReference>*)this_01);
                                cVar1 = pSVar7->GetDisableCache();
                                iVar3 = 0;
                                if (cVar1 == '\0') {
                                    iVar3 = field_296;
                                }
                                pCVar6->ResetToMillisecond((long)iVar3);
                            }
                        }
                    }
                }
            LAB_1008c9a68:
                uVar5 = this_00->size();
                bVar2 = uVar8 < uVar5;
                uVar5 = uVar8;
                uVar8 = (ulong)((int)uVar8 + 1);
            } while (bVar2);
        }
    }

    // 0x1008c9c80, 128 bytes, placed by class name
    // SpriteAtlas::DecrementAlwaysLoaded(long long)
    void SpriteAtlas::DecrementAlwaysLoaded(longlong param_1) {
        long* plVar1;
        long* plVar2;
        shared_ptr<SpriteAtlasReference>* this_00;
        SpriteAtlasReference* this_01;

        plVar1 = (long*)(&field_120)->HeapBeginPtr();
        plVar2 = (long*)(&field_120)->end();
        if (plVar1 != plVar2) {
            do {
                if (*plVar1 == param_1) {
                    this_00 = (shared_ptr<SpriteAtlasReference>*)
                        eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                            (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184,
                            (long)(int)plVar1[1]);
                    this_01 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(this_00);
                    this_01->DecrementAlwaysLoaded();
                }
                plVar1 = plVar1 + 2;
            } while (plVar1 != plVar2);
        }
    }

    // 0x1008c9d40, 128 bytes, placed by class name
    // SpriteAtlas::IncrementAlwaysLoaded(long long)
    void SpriteAtlas::IncrementAlwaysLoaded(longlong param_1) {
        long* plVar1;
        long* plVar2;
        shared_ptr<SpriteAtlasReference>* this_00;
        SpriteAtlasReference* this_01;

        plVar1 = (long*)(&field_120)->HeapBeginPtr();
        plVar2 = (long*)(&field_120)->end();
        if (plVar1 != plVar2) {
            do {
                if (*plVar1 == param_1) {
                    this_00 = (shared_ptr<SpriteAtlasReference>*)
                        eastl::vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>::operator[](
                            (vector<shared_ptr<SpriteAtlasReference>, eastl::allocator>*)&field_184,
                            (long)(int)plVar1[1]);
                    this_01 = (SpriteAtlasReference*)shared_ptr<SpriteAtlasReference>::operator->(this_00);
                    this_01->IncrementAlwaysLoaded();
                }
                plVar1 = plVar1 + 2;
            } while (plVar1 != plVar2);
        }
    }

    // 0x1008c9dd0, 112 bytes, placed by class name
    // SpriteAtlas::FindSpriteHashFromIndex(int) const
    undefined8 SpriteAtlas::FindSpriteHashFromIndex(int param_1) {
        undefined8* puVar1;
        undefined8* puVar2;

        if (-1 < param_1) {
            puVar1 = (undefined8*)(&field_120)->HeapBeginPtr();
            puVar2 = (undefined8*)(&field_120)->end();
            for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
                if (*(int*)(puVar1 + 1) == param_1) {
                    return *puVar1;
                }
            }
        }
        return 18446744073709551615;
    }

    // 0x1008c9e40, 400 bytes, placed by class name
    // SpriteAtlas::GetDetailsAtPosition(int&, SpriteAtlasUsageType&, math::Rect<int>&, int, int) const
    bool SpriteAtlas::GetDetailsAtPosition(int* param_1, SpriteAtlasUsageType* param_2, Rect* param_3, int param_4,
                                           int param_5) {
        int iVar1;
        int iVar2;
        CoordMapSquare* this_00;
        char cVar3;
        bool bVar4;
        int iVar5;
        undefined4 uVar6;
        int iVar7;
        int iVar8;
        int* piVar9;
        Layout* this_01;
        longlong lVar10;
        int* piVar11;
        vector<SpriteAtlasMapping, eastl::allocator>* this_02;
        ulong uVar12;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_78[16];
        CoordMapSquare* local_68;
        vector<SpriteAtlasMapping, eastl::allocator>* local_60;
        int* local_50;
        undefined4* local_40;
        int local_34;

        this_02 = (vector<SpriteAtlasMapping, eastl::allocator>*)&field_152;
        local_50 = param_1;
        local_40 = (undefined4*)param_2;
        iVar5 = eastl::vector<SpriteAtlasMapping, eastl::allocator>::size(this_02);
        if (0 < iVar5) {
            uVar12 = 0;
            local_60 = this_02;
            local_34 = param_5;
            do {
                piVar9 = (int*)eastl::vector<SpriteAtlasMapping, eastl::allocator>::operator[](this_02, uVar12);
                local_68 = (CoordMapSquare*)(piVar9 + 18);
                cVar3 = local_68->IsInside(param_4, param_5);
                iVar5 = 0;
                if (cVar3 != '\0') {
                    GetSpriteReferenceFromIndex((SpriteAtlas*)local_78, (int)(SpriteAtlas*)this);
                    bVar4 = local_78->operator_cast_to_bool();
                    iVar5 = 2;
                    if (bVar4) {
                        this_01 = (Layout*)shared_ptr<SpriteAtlasReference>::operator->(
                            (shared_ptr<SpriteAtlasReference>*)local_78);
                        lVar10 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                        iVar5 = oldscape::ClientNpc::GetShortIDFromUID((int)lVar10);
                        *local_50 = iVar5;
                        uVar6 = SpriteAtlasManager::GetUsageTypeFromHash(lVar10);
                        this_00 = local_68;
                        *local_40 = uVar6;
                        iVar7 = local_68->GetX();
                        iVar5 = *piVar9;
                        iVar8 = this_00->GetZ();
                        iVar1 = *piVar9;
                        piVar11 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(piVar9 + 26), 0);
                        iVar2 = *piVar11;
                        piVar9 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(piVar9 + 26), 1);
                        new (param_3) oldscape::dash3d::GridRect(iVar7 - iVar5, iVar8 - iVar1, iVar2, *piVar9);
                        iVar5 = 1;
                        param_5 = local_34;
                    }
                    local_78->~shared_ptr();
                }
                this_02 = local_60;
                if (iVar5 != 0)
                    goto LAB_1008c9f9f;
                uVar12 = uVar12 + 1;
                iVar5 = eastl::vector<SpriteAtlasMapping, eastl::allocator>::size(local_60);
            } while ((long)uVar12 < (long)iVar5);
        }
        iVar5 = 2;
    LAB_1008c9f9f:
        return iVar5 != 2;
    }

} // namespace jag::graphics
