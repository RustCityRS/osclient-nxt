// libs/game/runetek5/assetbuilder/BuildRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <
        typename...> // 2 instantiations, e.g. <graphics::Animation, BuildAnimationMain>, <graphics::Model, BuildModelMain>
    class BuildRequest {
    public:
        BuildRequest<graphics::Model, BuildModelMain>* operator=(BuildRequest<graphics::Model, BuildModelMain>&&);
        BuildRequest<graphics::Model, BuildModelMain>* operator=(BuildRequest<graphics::Model, BuildModelMain> const&);
        BuildRequest(BuildRequest<graphics::Model, BuildModelMain>&&);
        BuildRequest(shared_ptr<graphics::Model> const&, shared_ptr<BuildModelMain> const&);
        BuildRequest();
        bool IsTaskDone() const;
        void Clear();
        ulong IsTaskRunning() const;
        ulong IsEmpty() const;
        void SetConstructedObj(shared_ptr<graphics::Model> const&);
        BuildRequest(BuildRequest<graphics::Model, BuildModelMain> const&);
        void SetConstructedObj(shared_ptr<graphics::Animation> const&);
        void SetObjAndTask(shared_ptr<graphics::Animation> const&, shared_ptr<BuildAnimationMain> const&);
        void SetObjAndTask(shared_ptr<graphics::Model> const&, shared_ptr<BuildModelMain> const&);
    };

    // 0x1004188c0, 48 bytes, inline, placed by class name and debug map
    // BuildRequest<graphics::Model, BuildModelMain>::operator=(BuildRequest<graphics::Model, BuildModelMain>&&)
    /* BuildRequest<graphics::Model,
   BuildModelMain>::TEMPNAMEPLACEHOLDERVALUE(BuildRequest<graphics::Model,
   BuildModelMain>&&) */

    BuildRequest<graphics::Model, BuildModelMain>*
    BuildRequest<graphics::Model, BuildModelMain>::operator=(BuildRequest<graphics::Model, BuildModelMain>* this,
                                                             BuildRequest* param_1) {
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this, (shared_ptr*)param_1);
        shared_ptr<BuildModelMain>::operator=((shared_ptr<BuildModelMain>*)(this + 16), (shared_ptr*)(param_1 + 16));
        return this;
    }

    // 0x100419440, 48 bytes, inline, placed by class name and debug map
    // BuildRequest<graphics::Model, BuildModelMain>::operator=(BuildRequest<graphics::Model, BuildModelMain> const&)
    /* BuildRequest<graphics::Model,
   BuildModelMain>::TEMPNAMEPLACEHOLDERVALUE(BuildRequest<graphics::Model,
   BuildModelMain> const&) */

    BuildRequest<graphics::Model, BuildModelMain>*
    BuildRequest<graphics::Model, BuildModelMain>::operator=(BuildRequest<graphics::Model, BuildModelMain>* this,
                                                             BuildRequest* param_1) {
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this, (shared_ptr*)param_1);
        shared_ptr<BuildModelMain>::operator=((shared_ptr<BuildModelMain>*)(this + 16), (shared_ptr*)(param_1 + 16));
        return this;
    }

    // 0x10041eeb0, 16 bytes, complete-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain>&&): jumps straight to the base-object constructor

    // 0x10041eed0, 64 bytes, base-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain>&&)
    void
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain>* this,
                                                                BuildRequest* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)(this + 16), (shared_ptr*)(param_1 + 16));
    }

    // 0x10042adf0, 16 bytes, complete-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(shared_ptr<graphics::Model> const&, shared_ptr<BuildModelMain> const&): jumps straight to the base-object constructor

    // 0x10042ae00, 16 bytes, complete-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(): jumps straight to the base-object constructor

    // 0x10042ae40, 208 bytes, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::IsTaskDone() const
    bool
    BuildRequest<graphics::Model, BuildModelMain>::IsTaskDone(BuildRequest<graphics::Model, BuildModelMain>* this) {
        bool bVar1;
        bool bVar2;
        char cVar3;
        AssetJob* pAVar4;
        BuildModelMain* pBVar5;
        OpenGLView* this_00;
        shared_ptr* psVar6;

        bVar1 = operator_cast_to_bool();
        psVar6 = (shared_ptr*)(this + 16);
        bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
        if (bVar1) {
            if (bVar2) {
                pAVar4 = (AssetJob*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)psVar6);
                cVar3 = pAVar4->IsFinished();
                if (cVar3 == '\0')
                    goto LAB_10042aef9;
                pBVar5 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)psVar6);
                cVar3 = pBVar5->IsAssetConstructed();
                if (cVar3 == '\0') {
                    shared_ptr<graphics::Model>::reset();
                } else {
                LAB_10042aeca:
                    this_00 = (OpenGLView*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)psVar6);
                    psVar6 = (shared_ptr*)this_00->GetCursorMutex();
                    shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this, psVar6);
                }
            LAB_10042aee5:
                shared_ptr<BuildModelMain>::reset();
            }
            bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        } else {
            if (bVar2) {
                pAVar4 = (AssetJob*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)psVar6);
                cVar3 = pAVar4->IsFinished();
                if (cVar3 != '\0') {
                    pBVar5 =
                        (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)psVar6);
                    cVar3 = pBVar5->IsAssetConstructed();
                    if (cVar3 != '\0')
                        goto LAB_10042aeca;
                    goto LAB_10042aee5;
                }
            }
        LAB_10042aef9:
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10042c090, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::Clear()
    void BuildRequest<graphics::Model, BuildModelMain>::Clear(BuildRequest<graphics::Model, BuildModelMain>* this) {
        shared_ptr<graphics::Model>::reset();
        shared_ptr<BuildModelMain>::reset();
    }

    // 0x10042e6b0, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::IsTaskRunning() const
    ulong
    BuildRequest<graphics::Model, BuildModelMain>::IsTaskRunning(BuildRequest<graphics::Model, BuildModelMain>* this) {
        ulong uVar2;

        if (IsTaskDone(this) == '\0') {
            uVar2 = IsEmpty();
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10042eae0, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::IsEmpty() const
    /* BuildRequest<graphics::Animation, BuildAnimationMain>::IsEmpty() const
    */

    ulong BuildRequest<graphics::Animation, BuildAnimationMain>::IsEmpty(
        BuildRequest<graphics::Animation, BuildAnimationMain>* this) {
        bool bVar1;
        undefined7 extraout_var;
        ulong uVar2;

        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            uVar2 = 0;
        } else {
            bVar1 = ((this + 16))->operator_cast_to_bool();
            uVar2 = CONCAT71(extraout_var, bVar1) ^ 1;
        }
        return uVar2;
    }

    // 0x100430d10, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::SetConstructedObj(shared_ptr<graphics::Model> const&)
    void BuildRequest<graphics::Model, BuildModelMain>::SetConstructedObj(
        BuildRequest<graphics::Model, BuildModelMain>* this, shared_ptr* param_1) {
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this, param_1);
        shared_ptr<BuildModelMain>::reset();
    }

    // 0x100434230, 48 bytes, base-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest()
    void
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain>* this) {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new ((this + 16)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
    }

    // 0x100436db0, 64 bytes, base-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(shared_ptr<graphics::Model> const&, shared_ptr<BuildModelMain> const&)
    void
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain>* this,
                                                                shared_ptr* param_1, shared_ptr* param_2) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new ((this + 16)) shared_ptr<oldscape::dash3d::Decor>(param_2);
    }

    // 0x1004552d0, 16 bytes, complete-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain> const&): jumps straight to the base-object constructor

    // 0x1004552e0, 64 bytes, base-object constructor, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain> const&)
    void
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(BuildRequest<graphics::Model, BuildModelMain>* this,
                                                                BuildRequest* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new ((this + 16)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 16));
    }

    // 0x1004df2e0, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Animation, BuildAnimationMain>::SetConstructedObj(shared_ptr<graphics::Animation> const&)
    void BuildRequest<graphics::Animation, BuildAnimationMain>::SetConstructedObj(
        BuildRequest<graphics::Animation, BuildAnimationMain>* this, shared_ptr* param_1) {
        shared_ptr<graphics::Animation>::operator=((shared_ptr<graphics::Animation>*)this, param_1);
        shared_ptr<BuildAnimationMain>::reset();
    }

    // 0x1004dfc50, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Animation, BuildAnimationMain>::SetObjAndTask(shared_ptr<graphics::Animation> const&, shared_ptr<BuildAnimationMain> const&)
    void BuildRequest<graphics::Animation, BuildAnimationMain>::SetObjAndTask(
        BuildRequest<graphics::Animation, BuildAnimationMain>* this, shared_ptr* param_1, shared_ptr* param_2) {
        shared_ptr<graphics::Animation>::operator=((shared_ptr<graphics::Animation>*)this, param_1);
        shared_ptr<BuildAnimationMain>::operator=((shared_ptr<BuildAnimationMain>*)(this + 16), param_2);
    }

    // 0x1004dfc80, 208 bytes, inline, placed by class name
    // BuildRequest<graphics::Animation, BuildAnimationMain>::IsTaskDone() const
    bool BuildRequest<graphics::Animation, BuildAnimationMain>::IsTaskDone(
        BuildRequest<graphics::Animation, BuildAnimationMain>* this) {
        bool bVar1;
        bool bVar2;
        char cVar3;
        AssetJob* pAVar4;
        BuildAnimationMain* pBVar5;
        WorldmapAreaMetadata* this_00;
        shared_ptr* psVar6;

        bVar1 = operator_cast_to_bool();
        psVar6 = (shared_ptr*)(this + 16);
        bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
        if (bVar1) {
            if (bVar2) {
                pAVar4 = (AssetJob*)shared_ptr<BuildAnimationMain>::operator->((shared_ptr<BuildAnimationMain>*)psVar6);
                cVar3 = pAVar4->IsFinished();
                if (cVar3 == '\0')
                    goto LAB_1004dfd39;
                pBVar5 = (BuildAnimationMain*)shared_ptr<BuildAnimationMain>::operator->(
                    (shared_ptr<BuildAnimationMain>*)psVar6);
                cVar3 = pBVar5->IsAssetConstructed();
                if (cVar3 == '\0') {
                    shared_ptr<graphics::Animation>::reset();
                } else {
                LAB_1004dfd0a:
                    this_00 = (WorldmapAreaMetadata*)shared_ptr<BuildAnimationMain>::operator->(
                        (shared_ptr<BuildAnimationMain>*)psVar6);
                    psVar6 = (shared_ptr*)this_00->GetOrigin();
                    shared_ptr<graphics::Animation>::operator=((shared_ptr<graphics::Animation>*)this, psVar6);
                }
            LAB_1004dfd25:
                shared_ptr<BuildAnimationMain>::reset();
            }
            bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        } else {
            if (bVar2) {
                pAVar4 = (AssetJob*)shared_ptr<BuildAnimationMain>::operator->((shared_ptr<BuildAnimationMain>*)psVar6);
                cVar3 = pAVar4->IsFinished();
                if (cVar3 != '\0') {
                    pBVar5 = (BuildAnimationMain*)shared_ptr<BuildAnimationMain>::operator->(
                        (shared_ptr<BuildAnimationMain>*)psVar6);
                    cVar3 = pBVar5->IsAssetConstructed();
                    if (cVar3 != '\0')
                        goto LAB_1004dfd0a;
                    goto LAB_1004dfd25;
                }
            }
        LAB_1004dfd39:
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x100546640, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Model, BuildModelMain>::SetObjAndTask(shared_ptr<graphics::Model> const&, shared_ptr<BuildModelMain> const&)
    void
    BuildRequest<graphics::Model, BuildModelMain>::SetObjAndTask(BuildRequest<graphics::Model, BuildModelMain>* this,
                                                                 shared_ptr* param_1, shared_ptr* param_2) {
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this, param_1);
        shared_ptr<BuildModelMain>::operator=((shared_ptr<BuildModelMain>*)(this + 16), param_2);
    }

    // 0x100657c20, 16 bytes, complete-object constructor, inline, placed by class name
    // BuildRequest<graphics::Animation, BuildAnimationMain>::BuildRequest(): jumps straight to the base-object constructor

    // 0x100657ee0, 48 bytes, inline, placed by class name
    // BuildRequest<graphics::Animation, BuildAnimationMain>::Clear()
    void BuildRequest<graphics::Animation, BuildAnimationMain>::Clear(
        BuildRequest<graphics::Animation, BuildAnimationMain>* this) {
        shared_ptr<graphics::Animation>::reset();
        shared_ptr<BuildAnimationMain>::reset();
    }

    // 0x10065c560, 48 bytes, base-object constructor, inline, placed by class name
    // BuildRequest<graphics::Animation, BuildAnimationMain>::BuildRequest()
    void BuildRequest<graphics::Animation, BuildAnimationMain>::BuildRequest(
        BuildRequest<graphics::Animation, BuildAnimationMain>* this) {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new ((this + 16)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
    }

} // namespace jag::game

namespace jag {
    // 0x1004194f0, 176 bytes, inline, placed by debug map only (low confidence)
    // std::enable_if<!std::is_array<game::NPCTypeCustomisation>::value, std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation> > >::type bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>, eastl::vector<float, eastl::allocator>, eastl::vector<math::Vector3T<float>, eastl::allocator>, eastl::vector<math::Vector3T<float>, eastl::allocator>, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, Array<unsigned short, eastl::allocator>, Array<unsigned short, eastl::allocator>, bool&, Array<unsigned char, eastl::allocator> >(eastl::vector<int, eastl::allocator>&&, eastl::vector<float, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, bool&, Array<unsigned char, eastl::allocator>&&)
    /* std::enable_if<!std::is_array<game::NPCTypeCustomisation>::value,
   std::unique_ptr<game::NPCTypeCustomisation,
   BucketDeleter<game::NPCTypeCustomisation> > >::type
   bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>,
   eastl::vector<float, eastl::allocator>, eastl::vector<math::Vector3T<float>,
   eastl::allocator>, eastl::vector<math::Vector3T<float>, eastl::allocator>,
   eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
   eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, Array<unsigned short,
   eastl::allocator>, Array<unsigned short, eastl::allocator>, bool&, Array<unsigned char,
   eastl::allocator> >(eastl::vector<int, eastl::allocator>&&, eastl::vector<float,
   eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&,
   eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<eastl::vector<int,
   eastl::allocator>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>,
   eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short,
   eastl::allocator>&&, bool&, Array<unsigned char, eastl::allocator>&&) */

    jag* jag::bucket_make_unique<
        game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>, eastl::vector<float, eastl::allocator>,
        eastl::vector<math::Vector3T<float>, eastl::allocator>, eastl::vector<math::Vector3T<float>, eastl::allocator>,
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, Array<unsigned short, eastl::allocator>,
        Array<unsigned short, eastl::allocator>, bool&, Array<unsigned char, eastl::allocator>>(
        vector* param_1, vector* param_2, vector* param_3, vector* param_4, vector* param_5, vector* param_6,
        Array* param_7, Array* param_8, bool* param_9, Array* param_10) {
        NPCTypeCustomisation* this_00;

        this_00 = (NPCTypeCustomisation*)BucketManager::Allocate(280, 0, 16);
        if (this_00 == (NPCTypeCustomisation*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, (char*)0);
        }
        game::NPCTypeCustomisation::NPCTypeCustomisation(this_00, param_1, param_2, param_3, param_4, param_5, param_6,
                                                         param_7, param_8, *param_9, param_10);
        std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>::unique_ptr<true, void>(
            this, this_00);
        return this;
    }

    // 0x100419810, 128 bytes, inline, placed by debug map only (low confidence)
    // std::enable_if<!std::is_array<game::NPCTypeCustomisation>::value, std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation> > >::type bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>, Array<unsigned short, eastl::allocator>, Array<unsigned short, eastl::allocator> >(eastl::vector<int, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&)
    /* std::enable_if<!std::is_array<game::NPCTypeCustomisation>::value,
   std::unique_ptr<game::NPCTypeCustomisation,
   BucketDeleter<game::NPCTypeCustomisation> > >::type
   bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>,
   Array<unsigned short, eastl::allocator>, Array<unsigned short, eastl::allocator>
   >(eastl::vector<int, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&,
   Array<unsigned short, eastl::allocator>&&) */

    jag* jag::bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>,
                                 Array<unsigned short, eastl::allocator>, Array<unsigned short, eastl::allocator>>(
        vector* param_1, Array* param_2, Array* param_3) {
        NPCTypeCustomisation* this_00;

        this_00 = (NPCTypeCustomisation*)BucketManager::Allocate(280, 0, 16);
        if (this_00 == (NPCTypeCustomisation*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, (char*)0);
        }
        game::NPCTypeCustomisation::NPCTypeCustomisation(this_00, param_1, param_2, param_3);
        std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>::unique_ptr<true, void>(
            this, this_00);
        return this;
    }

} // namespace jag
