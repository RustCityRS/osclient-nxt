// libs/math/primitives/Point.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float>, <int>
    class Point {
    public:
        Point<int>* operator=(Point<int> point);
        void swap(Point<int>& point);
        Point<int> ToType<int>() const;
        Point<float>* operator=(Point<float> point);
        void swap(Point<float>& point);
        Point(const Point<float>& point);
        Point(const Point<int>& point);
        static Point<float> ZERO; // = Point<float>(0.0, 0.0)
    };

    // 0x100f380b0, set at startup by ___cxx_global_var_init.213
    Point<float> Point<float>::ZERO = Point<float>(0.0, 0.0);

    // 0x10005d8d0
    Point<int>* Point<int>::operator=(Point<int> point) {
        swap(this, point);
        return this;
    }

    // 0x10007d320
    void Point<int>::swap(Point<int>& point) {
        eastl::swap<unsigned int>(*this, point);
        eastl::swap<unsigned int>(*((this + 4)), *((point + 4)));
    }

    // 0x100488cf0
    Point<int> Point<float>::ToType<int>() const {
        float* in_RSI;

        new (this) oldscape::sidebars::SideBarData((int)*in_RSI, (int)in_RSI[1]);
        return this;
    }

    // 0x10048caa0
    ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(const Vector4T<float>& vector4) {
        auto pfVar1 = vector4.SSOBeginPtr();
        float arg1 = *pfVar1;
        pfVar1 = (float*)vector4.y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)vector4.second();
        float arg3 = *pfVar1;
        pfVar1 = (float*)vector4.qw();
        Set(this, arg1, arg2, arg3, *pfVar1);
    }

    // 0x1007dc4c0
    Point<float>* Point<float>::operator=(Point<float> point) {
        swap(this, point);
        return this;
    }

    // 0x1007fb640
    void Point<float>::swap(Point<float>& point) {
        eastl::swap<float>(*this, point);
        eastl::swap<float>(*((this + 4)), *((point + 4)));
    }

    // 0x1009014d0
    Point<float>::Point(const Point<float>& point) {
        *(uint32_t*)this = *(uint32_t*)point;
        *(uint32_t*)(this + 4) = *(uint32_t*)(point + 4);
    }

    // 0x100c6efa0
    Point<int>::Point(const Point<int>& point) {
        *(uint32_t*)this = *(uint32_t*)point;
        *(uint32_t*)(this + 4) = *(uint32_t*)(point + 4);
    }

} // namespace jag::math

namespace jag::game {
    // 0x10048a8f0
    void DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul>&, unsigned int, World&, int, int, int, int, int,
                         render::Viewport const&, bool)::$_8::operator()() const {
        shared_ptr<Entity>* psVar5;
        shared_ptr<Entity>* psVar6;
        shared_ptr<Entity>* psVar7;
        Matrix44T<float>* pMVar8;
        long* plVar9;
        uint8_t local_1e8[432];

        unsigned long* puVar3 = (unsigned long*)(*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long arg1 = *puVar3;
        long lVar4 = (*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long uVar1 = *(unsigned long*)(lVar4 + 8);
        Layout* this_00 = (Layout*)(*(*(
            Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL>**)(this +
                                                                                           16)))[*(unsigned long*)this];
        new (local_1e8) graphics::PickingHelper(*(bool*)*(uint64_t*)(this + 24));
        lVar4 = (*(vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>**)(this + 32))->size();
        if (lVar4 == 0) {
            if (arg1 < uVar1) {
                do {
                    psVar5 = (shared_ptr<Entity>*)(*(
                        *(vector<std::pair<shared_ptr<Entity>, std::pair<math::Point<float>, math::Point<float>>>,
                                 eastl::fixed_vector_allocator<32ul, 512ul, 8ul, 0ul, true>>**)(this + 64)))[arg1];
                    psVar6 = (shared_ptr<Entity>*)this_00->HeapBeginPtr();
                    psVar7 = (shared_ptr<Entity>*)this_00->end();
                    psVar6 = std::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar6, psVar7, *psVar5);
                    psVar7 = (shared_ptr<Entity>*)this_00->end();
                    if (psVar6 == psVar7) {
                        pMVar8 = (*(World**)(this + 40))->GetLastViewProjectionMatrix();
                        local_1e8->ResetLineTest(*pMVar8, *(*(Rect<float>**)(this + 48)), *((psVar5 + 16)),
                                                 *((psVar5 + 24)), (bool)World::m_debugPicking);
                        plVar9 = (long*)(*psVar5).operator->();
                        if ((**(void (**)(...))(*plVar9 + 136))(plVar9, local_1e8)) {
                            this_00->push_back(*psVar5);
                        }
                    }
                    arg1 = arg1 + 1;
                } while (uVar1 != arg1);
            }
        } else if (arg1 < uVar1) {
            do {
                psVar5 = (shared_ptr<Entity>*)(*(
                    *(vector<shared_ptr<Entity>,
                             eastl::fixed_vector_allocator<16ul, 2048ul, 8ul, 0ul, true>>**)(this + 32)))[arg1];
                psVar6 = (shared_ptr<Entity>*)this_00->HeapBeginPtr();
                psVar7 = (shared_ptr<Entity>*)this_00->end();
                psVar6 = std::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar6, psVar7, *psVar5);
                psVar7 = (shared_ptr<Entity>*)this_00->end();
                if (psVar6 == psVar7) {
                    pMVar8 = (*(World**)(this + 40))->GetLastViewProjectionMatrix();
                    local_1e8->ResetPointTest(*pMVar8, *(*(Rect<float>**)(this + 48)), *(*(Point<float>**)(this + 56)),
                                              (bool)World::m_debugPicking, 0.0);
                    plVar9 = (long*)(*psVar5).operator->();
                    if ((**(void (**)(...))(*plVar9 + 136))(plVar9, local_1e8)) {
                        this_00->push_back(*psVar5);
                    }
                }
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
    }

    // 0x10048bf90
    VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(
        const VisibleShadowCastingLightInfo& visibleShadowCastingLightInfo)
        : weak_ptr(visibleShadowCastingLightInfo), field_16(visibleShadowCastingLightInfo.field_16) {}

    // 0x10048c060
    VisibleShadowCastingLightInfo*
    VisibleShadowCastingLightInfo::operator=(VisibleShadowCastingLightInfo&& visibleShadowCastingLightInfo) {
        *this = visibleShadowCastingLightInfo;
        field_16 = visibleShadowCastingLightInfo.field_16;
        return this;
    }

} // namespace jag::game

namespace jag {
    // 0x10048a5d0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(88, 4, 8);
    }

    // 0x10048a8a0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 88), arg2);
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class PointNormal {
    public:
        PointNormal();
    };

} // namespace jag::oldscape::dash3d
