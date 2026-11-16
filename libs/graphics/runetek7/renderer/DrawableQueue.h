// libs/graphics/runetek7/renderer/DrawableQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DrawableQueue {
    public:
        class RenderPassDrawableGroupsConfig;
        void SortGroup<SortKeyLessThan>(DrawableGroupType drawableGroupType, RenderPassType renderPassType);
        void IsDrawableGroupEmpty(RenderPassType renderPassType, DrawableGroupType drawableGroupType);
        void GetGroupSize(DrawableGroupType drawableGroupType, RenderPassType renderPassType) const;
        DrawableQueue(ThreadPool* threadPool,
                      const eastl::fixed_vector<RenderPassDrawableGroupsConfig, 10ul>& renderPassDrawableGroupsConfigs);
        void SetMaxGroupDrawables(
            const eastl::fixed_vector<RenderPassDrawableGroupsConfig, 10ul>& renderPassDrawableGroupsConfigs);
        void RenderGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                         const SceneViewData& sceneViewData, DrawableGroupType drawableGroupType,
                         RenderPassType renderPassType, EffectManager& effectManager);
        void RenderGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                         const SceneViewData& sceneViewData, DrawableGroupType drawableGroupType,
                         RenderPassType renderPassType, EffectManager& effectManager, unsigned int arg7);
        void RenderGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                         const SceneViewData& sceneViewData1, DrawableGroupType drawableGroupType,
                         RenderPassType renderPassType, EffectManager& effectManager,
                         std::function<bool(math::OBB const&, SceneViewData const&)> const& callback,
                         const SceneViewData& sceneViewData2);
        void RenderGroupWithAsyncTest(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                      const SceneViewData& sceneViewData1, DrawableGroupType drawableGroupType,
                                      RenderPassType renderPassType, EffectManager& effectManager,
                                      std::function<bool(math::OBB const&, SceneViewData const&)> const& callback,
                                      const SceneViewData& sceneViewData2);
        void Iter(DrawableGroupType drawableGroupType, RenderPassType renderPassType,
                  std::function<void(DrawableElementInfo const&)> const& callback) const;
        void Iter(DrawableGroupType drawableGroupType, RenderPassType renderPassType,
                  std::function<void(DrawableElementInfo&)> const& callback);
        void
        Filter(DrawableGroupType drawableGroupType, RenderPassType renderPassType,
               std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
                   callback);
        void FilterAsync(
            DrawableGroupType drawableGroupType, RenderPassType renderPassType,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
                callback);
        void FilterMulti(
            DrawableGroupType drawableGroupType, RenderPassType renderPassType1, RenderPassType renderPassType2,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
                callback);
        void FilterMultiAsync(
            DrawableGroupType drawableGroupType, RenderPassType renderPassType1, RenderPassType renderPassType2,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
                callback);
        void RenderDebug(DrawableGroupType drawableGroupType, RenderPassType renderPassType) const;
        void ClearGroup(DrawableGroupType drawableGroupType, RenderPassType renderPassType);
        void ClearAllGroups(RenderPassType renderPassType);
        void ClearAllGroupsInAllPasses();
        void BinTriangles(RenderPassType renderPassType, const SceneViewData& sceneViewData, BinInfoSSE& binInfoSSE);
        ~DrawableQueue();
        void GetGroup(DrawableGroupType drawableGroupType, RenderPassType renderPassType) const;
        void GetRenderPassDrawableGroups(RenderPassType renderPassType) const;
        CommandLine* GetDrawableGroup(RenderPassType renderPassType, DrawableGroupType drawableGroupType);
        void AddDrawable(DrawableSortKey drawableSortKey,
                         std::unique_ptr<DrawableElement, DrawableElementDeleter>&& drawableElement, Drawable* drawable,
                         DrawableGroupType drawableGroupType, RenderPassType renderPassType);
        void GetRenderPassDrawableGroups(RenderPassType renderPassType);

    private:
        uint8_t _unknown_0[6240];
        ThreadPool* field_6240;
    };

    class DrawableQueue::RenderPassDrawableGroupsConfig {
    public:
        RenderPassDrawableGroupsConfig(RenderPassType renderPassType, unsigned long arg2,
                                       DrawableSortKeyType drawableSortKeyType);

    private:
        RenderPassType field_0;
        uint8_t _unknown_4[4];
        unsigned long field_8;
        DrawableSortKeyType field_16;
        uint8_t _unknown_20[4];
    };

    // 0x1001de470
    DrawableQueue::RenderPassDrawableGroupsConfig::RenderPassDrawableGroupsConfig(
        RenderPassType renderPassType, unsigned long arg2, DrawableSortKeyType drawableSortKeyType)
        : field_0(renderPassType), field_8(arg2), field_16(drawableSortKeyType) {}

    // 0x1007a7080
    void DrawableQueue::SortGroup<SortKeyLessThan>(DrawableGroupType drawableGroupType, RenderPassType renderPassType) {
        SortKeyLessThan in_AL;
        DrawableElementInfo* drawableElementInfo1;
        DrawableElementInfo* drawableElementInfo2;
        XPlotBlender<oldscape::graphics::XPlot_NormalAlpha> aXStack_a8;

        (&aXStack_a8 + 128)->XPlotBlender<int>(renderPassType);
        DrawableGroupList* this_00 = (DrawableGroupList*)(*this)[(unsigned long)renderPassType];
        auto pNVar1 = this_00->GetDrawableGroup(drawableGroupType);
        auto this_01 = pNVar1->GetScreen();
        drawableElementInfo1 = (DrawableElementInfo*)this_01->HeapBeginPtr();
        pNVar1 = this_00->GetDrawableGroup(drawableGroupType);
        auto this_02 = pNVar1->GetScreen();
        drawableElementInfo2 = (DrawableElementInfo*)this_02->end();
        std::sort<DrawableElementInfo*, SortKeyLessThan>(drawableElementInfo1, drawableElementInfo2, in_AL);
    }

    // 0x1007a7a30
    void DrawableQueue::IsDrawableGroupEmpty(RenderPassType renderPassType, DrawableGroupType drawableGroupType) {
        NXTPixToolkit* this_01 =
            ((DrawableGroupList*)(*this)[(unsigned long)renderPassType])->GetDrawableGroup(drawableGroupType);
        ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_01->GetScreen())->empty();
    }

    // 0x1007add40
    void DrawableQueue::GetGroupSize(DrawableGroupType drawableGroupType, RenderPassType renderPassType) const {
        NXTPixToolkit* this_01 =
            ((DrawableGroupList*)(*this)[(unsigned long)renderPassType])->GetDrawableGroup(drawableGroupType);
        ((vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen())->size();
    }

    // 0x1007e84b0
    DrawableQueue::Filter(
        DrawableGroupType, RenderPassType,
        std::function<bool(Drawable*,
                           std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_20::~$_20() {}

    // 0x1007e8570
    DrawableQueue::FilterMulti(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(Drawable*,
                           std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::~$_22() {}

    // 0x1007e85f0
    DrawableQueue::~DrawableQueue() {}

    // 0x100800480
    void DrawableQueue::RenderGroupWithAsyncTest(RT7Core&, render::DrawCallState const&, SceneViewData const&,
                                                 DrawableGroupType, RenderPassType, EffectManager&,
                                                 std::function<bool(math::OBB const&, SceneViewData const&)> const&,
                                                 SceneViewData const&)::$_19::operator()() const {
        unsigned int uVar3;
        unsigned int* puVar6;
        vector<DrawableElementInfo>* this_00;
        void* arg2;

        unsigned long* puVar4 = (unsigned long*)(*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        void* arg1 = (void*)*puVar4;
        long lVar5 = (*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        void* pvVar1 = *(void**)(lVar5 + 8);
        if (arg1 < pvVar1) {
            do {
                this_00 = (vector<DrawableElementInfo>*)(*(NXTPixToolkit**)(this + 16))->GetScreen();
                arg2 = arg1;
                lVar5 = (*this_00)[(unsigned long)arg1];
                if (!((lVar5 + 8)) != arg2) {
                    LogAssert("drawable.m_drawableElement != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              172, nullptr);
                }
                lVar5 = *(*((lVar5 + 8)));
                uVar3 = 1;
                if ((*(uint8_t*)(lVar5 + 96) & 4) == 0) {
                    uVar3 = std::function<bool(math::OBB const&, SceneViewData const&)>::operator()(
                        *(function<bool(math::OBB const&, SceneViewData const&)>**)(this + 32), (OBB*)(lVar5 + 16),
                        *(SceneViewData**)(this + 40));
                }
                puVar6 = (unsigned int*)(*(*(Array<int, BucketAllocatorEASTL>**)(this + 24)))[(unsigned long)arg1];
                *puVar6 = uVar3 & 255;
                arg1 = (void*)((long)arg1 + 1);
            } while (pvVar1 != arg1);
        }
    }

    // 0x100801230
    unsigned long DrawableQueue::Filter(
        DrawableGroupType, RenderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_20::
    operator()(const DrawableElementInfo& drawableElementInfo) const {
        return std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::
               operator()(
                   (function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>*)this,
                   (Drawable*)drawableElementInfo.field_16,
                   (unique_ptr<DrawableElement, DrawableElementDeleter>*)&drawableElementInfo.field_8) ^
               1;
    }

    // 0x1008019c0
    void DrawableQueue::FilterAsync(
        DrawableGroupType, RenderPassType,
        std::function<bool(Drawable*,
                           std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_21::operator()()
        const {
        function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>* this_00;
        Drawable* drawable;
        unsigned int* puVar4;
        uint8_t bVar5;

        unsigned long* puVar2 = (unsigned long*)(*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long arg1 = *puVar2;
        long lVar3 = (*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long uVar1 = *(unsigned long*)(lVar3 + 8);
        if (arg1 < uVar1) {
            do {
                this_00 = *(
                    function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>**)(this +
                                                                                                                  24);
                lVar3 = (*(*(vector<DrawableElementInfo>**)(this + 32)))[arg1];
                drawable = *(Drawable**)(lVar3 + 16);
                lVar3 = (*(*(vector<DrawableElementInfo>**)(this + 32)))[arg1];
                bVar5 =
                    std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::
                    operator()(this_00, drawable, (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar3 + 8));
                puVar4 = (unsigned int*)(*(*(Array<int, BucketAllocatorEASTL>**)(this + 16)))[arg1];
                *puVar4 = (unsigned int)bVar5;
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
    }

    // 0x100802770
    unsigned long DrawableQueue::FilterMulti(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::
    operator()(const DrawableElementInfo& drawableElementInfo) const {
        return std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::
               operator()(
                   (function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>*)this,
                   (Drawable*)drawableElementInfo.field_16,
                   (unique_ptr<DrawableElement, DrawableElementDeleter>*)&drawableElementInfo.field_8) ^
               1;
    }

    // 0x100802790
    DrawableQueue::FilterMulti(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::
        $_22(const $_22& arg1)
        : std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>(arg1) {}

    // 0x100802de0
    void DrawableQueue::FilterMultiAsync(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(Drawable*,
                           std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_23::operator()()
        const {
        function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>* this_00;
        Drawable* drawable;
        unsigned int* puVar4;
        uint8_t bVar5;

        unsigned long* puVar2 = (unsigned long*)(*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long arg1 = *puVar2;
        long lVar3 = (*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long uVar1 = *(unsigned long*)(lVar3 + 8);
        if (arg1 < uVar1) {
            do {
                this_00 = *(
                    function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>**)(this +
                                                                                                                  24);
                lVar3 = (*(*(vector<DrawableElementInfo>**)(this + 32)))[arg1];
                drawable = *(Drawable**)(lVar3 + 16);
                lVar3 = (*(*(vector<DrawableElementInfo>**)(this + 32)))[arg1];
                bVar5 =
                    std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::
                    operator()(this_00, drawable, (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar3 + 8));
                puVar4 = (unsigned int*)(*(*(Array<int, BucketAllocatorEASTL>**)(this + 16)))[arg1];
                *puVar4 = (unsigned int)bVar5;
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
    }

    // 0x1008b03c0
    void DrawableQueue::GetGroup(DrawableGroupType drawableGroupType, RenderPassType renderPassType) const {
        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        ((NXTPixToolkit*)(*this_00)[(unsigned long)drawableGroupType])->GetScreen();
    }

    // 0x1008cd740
    void DrawableQueue::GetRenderPassDrawableGroups(RenderPassType renderPassType) const {
        unsigned int uVar1 =
            oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(renderPassType);
        ((Layout*)(*this)[(unsigned long)uVar1])->SSOBeginPtr();
    }

    // 0x10092f8a0
    CommandLine* DrawableQueue::GetDrawableGroup(RenderPassType renderPassType, DrawableGroupType drawableGroupType) {
        NXTPixToolkit* pNVar1 =
            ((DrawableGroupList*)(*this)[(unsigned long)renderPassType])->GetDrawableGroup(drawableGroupType);
        return (CommandLine*)pNVar1;
    }

    // 0x10092faf0
    void DrawableQueue::AddDrawable(DrawableSortKey drawableSortKey,
                                    std::unique_ptr<DrawableElement, DrawableElementDeleter>&& drawableElement,
                                    Drawable* drawable, DrawableGroupType drawableGroupType,
                                    RenderPassType renderPassType) {
        DrawableSortKey drawableSortKey_00;
        uint32_t uVar1;
        Logger* this_03;
        uint32_t in_register_0000000c;
        RenderPassType in_R9D;
        uint32_t in_stack_ffffffffffffff98;
        uint32_t in_stack_ffffffffffffff9c;

        uint64_t local_38 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)drawableGroupType);
        auto this_00 = GetRenderPassDrawableGroups(in_R9D);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)renderPassType];
        unsigned long uVar2 =
            ((vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen())->size();
        auto pvVar3 = this_01->GetScreen();
        if (pvVar3->capacity() <= uVar2) {
            this_03 = logger::default_logger();
            in_stack_ffffffffffffff98 =
                oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(in_R9D);
            pvVar3 = (vector<DebugPlane<DebugDataBasic>>*)this_01->GetScreen();
            uVar1 = pvVar3->capacity();
            this_03->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                "DrawableQueue.h",
                77, "Drawable queue render pass drawable group has exceeded max capacity, RenderPass: %d, Capacity: %d",
                in_stack_ffffffffffffff98, uVar1);
        }
        auto this_04 = this_01->GetScreen();
        drawableSortKey_00._4_4_ = in_stack_ffffffffffffff9c;
        drawableSortKey_00._0_4_ = in_stack_ffffffffffffff98;
        DrawableElementInfo local_50(drawableSortKey_00, drawableElement, drawable);
        this_04->emplace_back<DrawableElementInfo>(local_50);
    }

    // 0x1009382e0
    void DrawableQueue::GetRenderPassDrawableGroups(RenderPassType renderPassType) {
        unsigned int uVar1 =
            oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(renderPassType);
        ((Layout*)(*this)[(unsigned long)uVar1])->SSOBeginPtr();
    }

} // namespace jag::graphics
