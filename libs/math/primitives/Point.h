// libs/math/primitives/Point.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float>, <int>
    class Point {
    public:
        Point<int>* operator=(Point<int>);
        void swap(Point<int>&);
        Point<int> ToType<int>() const;
        Point<float>* operator=(Point<float>);
        void swap(Point<float>&);
        Point(Point<float> const&);
        Point(Point<int> const&);
        static Point<float> /* 16 bytes */ ZERO; // = Point<float>(0.0, 0.0)
    };

    // 0x100f380b0, 16 bytes, __data; set at startup by ___cxx_global_var_init.213
    Point<float> Point<float>::ZERO = Point<float>(0.0, 0.0);

    // 0x10005a000, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.213
    void ___cxx_global_var_init_213() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10005d8d0, 32 bytes, inline, placed by class name
    // Point<int>::operator=(Point<int>)
    /* Point<int>::TEMPNAMEPLACEHOLDERVALUE(Point<int>) */

    Point<int>* Point<int>::operator=(Point* param_2) {
        swap(this, param_2);
        return this;
    }

    // 0x10007d320, 48 bytes, inline, placed by class name
    // Point<int>::swap(Point<int>&)
    void Point<int>::swap(Point* param_1) {
        eastl::swap<unsigned int>((uint*)this, (uint*)param_1);
        eastl::swap<unsigned int>((uint*)(this + 4), (uint*)(param_1 + 4));
    }

    // 0x100488cf0, 48 bytes, inline, placed by class name and debug map
    // Point<int> Point<float>::ToType<int>() const
    Point<float>* Point<float>::ToType<int>() {
        float* in_RSI;

        new (this) oldscape::sidebars::SideBarData((int)*in_RSI, (int)in_RSI[1]);
        return this;
    }

    // 0x10048caa0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(Vector4T<float> const&)
    void ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(Vector4T* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        vector* pvVar4;
        float* pfVar5;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar4;
        pfVar5 = (float*)param_1->y();
        fVar2 = *pfVar5;
        pfVar5 = (float*)param_1->second();
        fVar3 = *pfVar5;
        pfVar5 = (float*)param_1->qw();
        Set(this, fVar1, fVar2, fVar3, *pfVar5);
    }

    // 0x1007dc4c0, 32 bytes, inline, placed by class name
    // Point<float>::operator=(Point<float>)
    /* Point<float>::TEMPNAMEPLACEHOLDERVALUE(Point<float>) */

    Point<float>* Point<float>::operator=(Point* param_2) {
        swap(this, param_2);
        return this;
    }

    // 0x1007fb640, 48 bytes, inline, placed by class name
    // Point<float>::swap(Point<float>&)
    void Point<float>::swap(Point* param_1) {
        eastl::swap<float>((float*)this, (float*)param_1);
        eastl::swap<float>((float*)(this + 4), (float*)(param_1 + 4));
    }

    // 0x1009014c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Point<float>::Point(Point<float> const&): jumps straight to the base-object constructor

    // 0x1009014d0, 32 bytes, base-object constructor, inline, placed by class name
    // Point<float>::Point(Point<float> const&)
    void Point<float>::Point(Point* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
    }

    // 0x100c68cd0, 16 bytes, complete-object constructor, inline, placed by class name
    // Point<int>::Point(Point<int> const&): jumps straight to the base-object constructor

    // 0x100c6efa0, 16 bytes, base-object constructor, inline, placed by class name
    // Point<int>::Point(Point<int> const&)
    void Point<int>::Point(Point* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
    }

} // namespace jag::math

namespace jag::game {
    // 0x10048a8f0, 656 bytes, inline, placed by debug map only (low confidence)
    // DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, unsigned int, World&, int, int, int, int, int, render::Viewport const&, bool)::$_8::operator()() const
    /* DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul, true,
   eastl::allocator>&, unsigned int, World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                               World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8::operator()() {
        ulong uVar1;
        char cVar2;
        ulong* puVar3;
        long lVar4;
        shared_ptr* this_00;
        shared_ptr* psVar5;
        shared_ptr* psVar6;
        shared_ptr* psVar7;
        Matrix44T* pMVar8;
        long* plVar9;
        ulong uVar10;
        undefined1 local_1e8[432];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar3 = (ulong*)eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        uVar10 = *puVar3;
        lVar4 = eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        uVar1 = *(ulong*)(lVar4 + 8);
        this_00 = (shared_ptr*)
            Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>, BucketAllocatorEASTL>::
            operator[](*(Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                               BucketAllocatorEASTL>**)(this + 16),
                       *(ulong*)this);
        new (local_1e8) graphics::PickingHelper(*(bool*)*(undefined8*)(this + 24));
        lVar4 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(
            *(vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>**)(this + 32));
        if (lVar4 == 0) {
            if (uVar10 < uVar1) {
                do {
                    psVar5 = (shared_ptr*)eastl::vector<
                        std::pair<shared_ptr<Entity>, std::pair<math::Point<float>, math::Point<float>>>,
                        eastl::fixed_vector_allocator<32ul, 512ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        *(vector<std::pair<shared_ptr<Entity>, std::pair<math::Point<float>, math::Point<float>>>,
                                 eastl::fixed_vector_allocator<32ul, 512ul, 8ul, 0ul, true, eastl::allocator>>**)(this +
                                                                                                                  64),
                        uVar10);
                    psVar6 = (shared_ptr*)this_00->HeapBeginPtr();
                    psVar7 = (shared_ptr*)this_00->end();
                    psVar6 = std::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar6, psVar7, psVar5);
                    psVar7 = (shared_ptr*)this_00->end();
                    if (psVar6 == psVar7) {
                        pMVar8 = (Matrix44T*)(*(World**)(this + 40))->GetLastViewProjectionMatrix();
                        local_1e8->ResetLineTest(pMVar8, *(Rect**)(this + 48), (Point*)(psVar5 + 1),
                                                 (Point*)&psVar5[1].field_8, (bool)World::m_debugPicking);
                        plVar9 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)psVar5);
                        cVar2 = (**(code**)(*plVar9 + 136))(plVar9, local_1e8);
                        if (cVar2 != '\0') {
                            eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>::push_back(this_00);
                        }
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar1 != uVar10);
            }
        } else if (uVar10 < uVar1) {
            do {
                psVar5 = (shared_ptr*)eastl::vector<
                    shared_ptr<Entity>, eastl::fixed_vector_allocator<16ul, 2048ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    *(vector<shared_ptr<Entity>,
                             eastl::fixed_vector_allocator<16ul, 2048ul, 8ul, 0ul, true, eastl::allocator>>**)(this +
                                                                                                               32),
                    uVar10);
                psVar6 = (shared_ptr*)this_00->HeapBeginPtr();
                psVar7 = (shared_ptr*)this_00->end();
                psVar6 = std::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar6, psVar7, psVar5);
                psVar7 = (shared_ptr*)this_00->end();
                if (psVar6 == psVar7) {
                    pMVar8 = (Matrix44T*)(*(World**)(this + 40))->GetLastViewProjectionMatrix();
                    local_1e8->ResetPointTest(pMVar8, *(Rect**)(this + 48), *(Point**)(this + 56),
                                              (bool)World::m_debugPicking, 0.0);
                    plVar9 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)psVar5);
                    cVar2 = (**(code**)(*plVar9 + 136))(plVar9, local_1e8);
                    if (cVar2 != '\0') {
                        eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>::push_back(this_00);
                    }
                }
                uVar10 = uVar10 + 1;
            } while (uVar1 != uVar10);
        }
        local_1e8->~PickingHelper();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10048bec0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo const&): jumps straight to the base-object constructor

    // 0x10048bf90, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo const&)
    void VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo* param_1) {
        new (this) weak_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = param_1->field_16;
    }

    // 0x10048c060, 48 bytes, inline, placed by debug map only (low confidence)
    // VisibleShadowCastingLightInfo::operator=(VisibleShadowCastingLightInfo&&)
    /* VisibleShadowCastingLightInfo::TEMPNAMEPLACEHOLDERVALUE(VisibleShadowCastingLightInfo&&)
    */

    VisibleShadowCastingLightInfo* VisibleShadowCastingLightInfo::operator=(VisibleShadowCastingLightInfo* param_1) {
        weak_ptr<LightSource>::operator=((weak_ptr<LightSource>*)this, (weak_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

} // namespace jag::game

namespace jag {
    // 0x10048a5d0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                          unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                          bool)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(88, 4, 8);
    }

    // 0x10048a8a0, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                          unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                          bool)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 88);
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class PointNormal {
    public:
        PointNormal();
    };

} // namespace jag::oldscape::dash3d
