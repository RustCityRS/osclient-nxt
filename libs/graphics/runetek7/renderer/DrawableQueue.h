// libs/graphics/runetek7/renderer/DrawableQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DrawableQueue {
    public:
        class RenderPassDrawableGroupsConfig;
        void SortGroup<SortKeyLessThan>(DrawableGroupType, RenderPassType);
        void IsDrawableGroupEmpty(RenderPassType, DrawableGroupType);
        void GetGroupSize(DrawableGroupType, RenderPassType) const;
        DrawableQueue(ThreadPool*,
                      eastl::fixed_vector<RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&);
        void
        SetMaxGroupDrawables(eastl::fixed_vector<RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&);
        void RenderGroup(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType,
                         RenderPassType, EffectManager&);
        void RenderGroup(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType,
                         RenderPassType, EffectManager&, unsigned int);
        void RenderGroup(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType,
                         RenderPassType, EffectManager&,
                         std::function<bool(math::OBB const&, SceneViewData const&)> const&, SceneViewData const&);
        void RenderGroupWithAsyncTest(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType,
                                      RenderPassType, EffectManager&,
                                      std::function<bool(math::OBB const&, SceneViewData const&)> const&,
                                      SceneViewData const&);
        void Iter(DrawableGroupType, RenderPassType, std::function<void(DrawableElementInfo const&)> const&) const;
        void Iter(DrawableGroupType, RenderPassType, std::function<void(DrawableElementInfo&)> const&);
        void
        Filter(DrawableGroupType, RenderPassType,
               std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&);
        void FilterAsync(
            DrawableGroupType, RenderPassType,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&);
        void FilterMulti(
            DrawableGroupType, RenderPassType, RenderPassType,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&);
        void FilterMultiAsync(
            DrawableGroupType, RenderPassType, RenderPassType,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&);
        void RenderDebug(DrawableGroupType, RenderPassType) const;
        void ClearGroup(DrawableGroupType, RenderPassType);
        void ClearAllGroups(RenderPassType);
        void ClearAllGroupsInAllPasses();
        void BinTriangles(RenderPassType, SceneViewData const&, BinInfoSSE&);
        ~DrawableQueue();
        void GetGroup(DrawableGroupType, RenderPassType) const;
        void GetRenderPassDrawableGroups(RenderPassType) const;
        void GetDrawableGroup(RenderPassType, DrawableGroupType);
        void AddDrawable(DrawableSortKey, std::unique_ptr<DrawableElement, DrawableElementDeleter>&&, Drawable*,
                         DrawableGroupType, RenderPassType);
        void GetRenderPassDrawableGroups(RenderPassType);

        // data members, from how the methods use this: 6248 bytes
        char _unknown_0[6240];
        ThreadPool* field_6240; // offset 6240
    };

    class DrawableQueue::RenderPassDrawableGroupsConfig {
    public:
        RenderPassDrawableGroupsConfig(RenderPassType, unsigned long, DrawableSortKeyType);

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8;  // offset 8
        undefined4 field_16; // offset 16
        char _unknown_20[4];
    };

    // 0x1001cb530, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DrawableQueue::RenderPassDrawableGroupsConfig::RenderPassDrawableGroupsConfig(RenderPassType, unsigned long, DrawableSortKeyType): jumps straight to the base-object constructor

    // 0x1001de470, 16 bytes, base-object constructor, inline, placed by class name
    // DrawableQueue::RenderPassDrawableGroupsConfig::RenderPassDrawableGroupsConfig(RenderPassType, unsigned long, DrawableSortKeyType)
    void DrawableQueue::RenderPassDrawableGroupsConfig::RenderPassDrawableGroupsConfig(undefined4 param_2,
                                                                                       undefined8 param_3,
                                                                                       undefined4 param_4) {
        field_0 = param_2;
        field_8 = param_3;
        field_16 = param_4;
    }

    // 0x1007a7080, 128 bytes, inline, placed by class name
    // void DrawableQueue::SortGroup<SortKeyLessThan>(DrawableGroupType, RenderPassType)
    void DrawableQueue::SortGroup<SortKeyLessThan>(undefined4 param_2, uint param_3) {
        SortKeyLessThan in_AL;
        DrawableGroupList* pDVar1;
        NXTPixToolkit* pNVar2;
        Layout* this_00;
        DrawableElementInfo* pDVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        DrawableElementInfo* pDVar4;
        XPlotBlender<oldscape::graphics::XPlot_NormalAlpha> aXStack_a8[128];

        oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(aXStack_a8 + 128,
                                                                                                   param_3);
        pDVar1 = (DrawableGroupList*)std::array<DrawableGroupList, 10ul>::operator[](
            (array<DrawableGroupList, 10ul>*)this, (ulong)param_3);
        pNVar2 = (NXTPixToolkit*)pDVar1->GetDrawableGroup(param_2);
        this_00 = (Layout*)pNVar2->GetScreen();
        pDVar3 = (DrawableElementInfo*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        pNVar2 = (NXTPixToolkit*)pDVar1->GetDrawableGroup(param_2);
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pNVar2->GetScreen();
        pDVar4 =
            (DrawableElementInfo*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        std::sort<DrawableElementInfo*, SortKeyLessThan>(pDVar3, pDVar4, in_AL);
    }

    // 0x1007a7a30, 48 bytes, inline, placed by class name
    // DrawableQueue::IsDrawableGroupEmpty(RenderPassType, DrawableGroupType)
    void DrawableQueue::IsDrawableGroupEmpty(uint param_2, undefined4 param_3) {
        DrawableGroupList* pDVar1;
        NXTPixToolkit* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;

        pDVar1 = (DrawableGroupList*)std::array<DrawableGroupList, 10ul>::operator[](
            (array<DrawableGroupList, 10ul>*)this, (ulong)param_2);
        this_00 = (NXTPixToolkit*)pDVar1->GetDrawableGroup(param_3);
        this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetScreen();
        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_01);
    }

    // 0x1007add40, 48 bytes, inline, placed by class name
    // DrawableQueue::GetGroupSize(DrawableGroupType, RenderPassType) const
    void DrawableQueue::GetGroupSize(undefined4 param_2, uint param_3) {
        DrawableGroupList* pDVar1;
        NXTPixToolkit* this_00;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_01;

        pDVar1 = (DrawableGroupList*)std::array<DrawableGroupList, 10ul>::operator[](
            (array<DrawableGroupList, 10ul>*)this, (ulong)param_3);
        this_00 = (NXTPixToolkit*)pDVar1->GetDrawableGroup(param_2);
        this_01 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                      this_00->GetScreen();
        eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(this_01);
    }

    // 0x1007e2950, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DrawableQueue::Filter(DrawableGroupType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_20::~$_20(): jumps straight to the base-object destructor

    // 0x1007e30f0, 16 bytes, complete-object destructor, inline, placed by class name
    // DrawableQueue::FilterMulti(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::~$_22(): jumps straight to the base-object destructor

    // 0x1007e4210, 16 bytes, complete-object destructor, inline, placed by class name
    // DrawableQueue::~DrawableQueue(): jumps straight to the base-object destructor

    // 0x1007e84b0, 16 bytes, base-object destructor, inline, placed by class name
    // DrawableQueue::Filter(DrawableGroupType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_20::~$_20()
    /* ~$_20() */

    void DrawableQueue::Filter(
        DrawableGroupType, RenderPassType,
        std::function<bool(Drawable*,
                           std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_20::~__20() {
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::~function(
            (function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>*)this);
    }

    // 0x1007e8570, 16 bytes, base-object destructor, inline, placed by class name
    // DrawableQueue::FilterMulti(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::~$_22()
    /* ~$_22() */

    void DrawableQueue::FilterMulti(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(Drawable*,
                           std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::~__22() {
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::~function(
            (function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>*)this);
    }

    // 0x1007e85f0, 16 bytes, base-object destructor, inline, placed by class name
    // DrawableQueue::~DrawableQueue()
    void DrawableQueue::~DrawableQueue() {
        ~array();
    }

    // 0x100800480, 240 bytes, inline, placed by class name
    // DrawableQueue::RenderGroupWithAsyncTest(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType, RenderPassType, EffectManager&, std::function<bool (math::OBB const&, SceneViewData const&)> const&, SceneViewData const&)::$_19::operator()() const
    /* DrawableQueue::RenderGroupWithAsyncTest(RT7Core&,
   render::DrawCallState const&, SceneViewData const&,
   DrawableGroupType, RenderPassType, EffectManager&,
   std::function<bool (math::OBB const&, SceneViewData const&)> const&,
   SceneViewData const&)::$_19::TEMPNAMEPLACEHOLDERVALUE() const */

    void DrawableQueue::RenderGroupWithAsyncTest(RT7Core&, render::DrawCallState_const&, SceneViewData_const&,
                                                 DrawableGroupType, RenderPassType, EffectManager&,
                                                 std::function<bool(math::OBB_const&, SceneViewData_const&)> const&,
                                                 SceneViewData_const&)::$_19::operator()() {
        _func_decltype_nullptr* p_Var1;
        uint uVar3;
        ulong* puVar4;
        long lVar5;
        uint* puVar6;
        vector<DrawableElementInfo, eastl::allocator>* this_00;
        _func_decltype_nullptr* p_Var7;
        _func_decltype_nullptr* p_Var8;

        puVar4 = (ulong*)eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        p_Var8 = (_func_decltype_nullptr*)*puVar4;
        lVar5 = eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        p_Var1 = *(_func_decltype_nullptr**)(lVar5 + 8);
        if (p_Var8 < p_Var1) {
            do {
                this_00 = (vector<DrawableElementInfo, eastl::allocator>*)(*(NXTPixToolkit**)(this + 16))->GetScreen();
                p_Var7 = p_Var8;
                lVar5 = eastl::vector<DrawableElementInfo, eastl::allocator>::operator[](this_00, (ulong)p_Var8);
                if (!std::operator!=((unique_ptr*)(lVar5 + 8), p_Var7)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("drawable.m_drawableElement != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              172, (char*)0);
                }
                lVar5 = std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator*(
                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar5 + 8));
                uVar3 = 1;
                if ((*(byte*)(lVar5 + 96) & 4) == 0) {
                    uVar3 = std::function<bool(math::OBB_const&, SceneViewData_const&)>::operator()(
                        *(OBB**)(this + 32), (SceneViewData*)(lVar5 + 16));
                }
                puVar6 = (uint*)Array<int, BucketAllocatorEASTL>::operator[](
                    *(Array<int, BucketAllocatorEASTL>**)(this + 24), (ulong)p_Var8);
                *puVar6 = uVar3 & 255;
                p_Var8 = p_Var8 + 1;
            } while (p_Var1 != p_Var8);
        }
    }

    // 0x100801230, 32 bytes, inline, placed by class name
    // DrawableQueue::Filter(DrawableGroupType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_20::operator()(DrawableElementInfo const&) const
    /* DrawableQueue::Filter(DrawableGroupType,
   RenderPassType, std::function<bool (Drawable*,
   std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>
   const&)::$_20::TEMPNAMEPLACEHOLDERVALUE(DrawableElementInfo const&) const */

    ulong DrawableQueue::Filter(
        DrawableGroupType, RenderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_20::
    operator()(DrawableElementInfo* param_1) {
        return std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::
               operator()((Drawable*)this, (unique_ptr*)param_1->field_16) ^
               1;
    }

    // 0x1008019c0, 160 bytes, inline, placed by class name
    // DrawableQueue::FilterAsync(DrawableGroupType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_21::operator()() const
    /* DrawableQueue::FilterAsync(DrawableGroupType,
   RenderPassType, std::function<bool (Drawable*,
   std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>
   const&)::$_21::TEMPNAMEPLACEHOLDERVALUE() const */

    void DrawableQueue::FilterAsync(
        DrawableGroupType, RenderPassType,
        std::function<bool(
            Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_21::operator()() {
        ulong uVar1;
        Drawable* pDVar2;
        unique_ptr* puVar3;
        ulong* puVar4;
        long lVar5;
        uint* puVar6;
        byte bVar7;
        ulong uVar8;

        puVar4 = (ulong*)eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        uVar8 = *puVar4;
        lVar5 = eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        uVar1 = *(ulong*)(lVar5 + 8);
        if (uVar8 < uVar1) {
            do {
                pDVar2 = *(Drawable**)(this + 24);
                lVar5 = eastl::vector<DrawableElementInfo, eastl::allocator>::operator[](
                    *(vector<DrawableElementInfo, eastl::allocator>**)(this + 32), uVar8);
                puVar3 = *(unique_ptr**)(lVar5 + 16);
                eastl::vector<DrawableElementInfo, eastl::allocator>::operator[](
                    *(vector<DrawableElementInfo, eastl::allocator>**)(this + 32), uVar8);
                bVar7 = std::function<bool(
                    Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::operator()(pDVar2,
                                                                                                             puVar3);
                puVar6 = (uint*)Array<int, BucketAllocatorEASTL>::operator[](
                    *(Array<int, BucketAllocatorEASTL>**)(this + 16), uVar8);
                *puVar6 = (uint)bVar7;
                uVar8 = uVar8 + 1;
            } while (uVar1 != uVar8);
        }
    }

    // 0x1008026a0, 16 bytes, complete-object constructor, inline, placed by class name
    // DrawableQueue::FilterMulti(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::$_22($_22 const&): jumps straight to the base-object constructor

    // 0x100802770, 32 bytes, inline, placed by class name
    // DrawableQueue::FilterMulti(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::operator()(DrawableElementInfo const&) const
    /* DrawableQueue::FilterMulti(DrawableGroupType,
   RenderPassType, RenderPassType, std::function<bool
   (Drawable*, std::unique_ptr<DrawableElement,
   DrawableElementDeleter> const&)>
   const&)::$_22::TEMPNAMEPLACEHOLDERVALUE(DrawableElementInfo const&) const */

    ulong DrawableQueue::FilterMulti(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::
    operator()(DrawableElementInfo* param_1) {
        return std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::
               operator()((Drawable*)this, (unique_ptr*)param_1->field_16) ^
               1;
    }

    // 0x100802790, 16 bytes, base-object constructor, inline, placed by class name
    // DrawableQueue::FilterMulti(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::$_22($_22 const&)
    /* $_22($_22 const&) */

    void DrawableQueue::FilterMulti(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_22::
        __22(__22* param_1) {
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::function(
            (function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>*)this,
            (function*)param_1);
    }

    // 0x100802de0, 160 bytes, inline, placed by class name
    // DrawableQueue::FilterMultiAsync(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_23::operator()() const
    /* DrawableQueue::FilterMultiAsync(DrawableGroupType,
   RenderPassType, RenderPassType, std::function<bool
   (Drawable*, std::unique_ptr<DrawableElement,
   DrawableElementDeleter> const&)> const&)::$_23::TEMPNAMEPLACEHOLDERVALUE() const
    */

    void DrawableQueue::FilterMultiAsync(
        DrawableGroupType, RenderPassType, RenderPassType,
        std::function<bool(
            Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::$_23::operator()() {
        ulong uVar1;
        Drawable* pDVar2;
        unique_ptr* puVar3;
        ulong* puVar4;
        long lVar5;
        uint* puVar6;
        byte bVar7;
        ulong uVar8;

        puVar4 = (ulong*)eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        uVar8 = *puVar4;
        lVar5 = eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
            *(vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8), *(ulong*)this);
        uVar1 = *(ulong*)(lVar5 + 8);
        if (uVar8 < uVar1) {
            do {
                pDVar2 = *(Drawable**)(this + 24);
                lVar5 = eastl::vector<DrawableElementInfo, eastl::allocator>::operator[](
                    *(vector<DrawableElementInfo, eastl::allocator>**)(this + 32), uVar8);
                puVar3 = *(unique_ptr**)(lVar5 + 16);
                eastl::vector<DrawableElementInfo, eastl::allocator>::operator[](
                    *(vector<DrawableElementInfo, eastl::allocator>**)(this + 32), uVar8);
                bVar7 = std::function<bool(
                    Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::operator()(pDVar2,
                                                                                                             puVar3);
                puVar6 = (uint*)Array<int, BucketAllocatorEASTL>::operator[](
                    *(Array<int, BucketAllocatorEASTL>**)(this + 16), uVar8);
                *puVar6 = (uint)bVar7;
                uVar8 = uVar8 + 1;
            } while (uVar1 != uVar8);
        }
    }

    // 0x1008b03c0, 48 bytes, inline, placed by class name
    // DrawableQueue::GetGroup(DrawableGroupType, RenderPassType) const
    void DrawableQueue::GetGroup(uint param_2, undefined4 param_3) {
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)param_2);
        this_01->GetScreen();
    }

    // 0x1008cd740, 48 bytes, inline, placed by class name
    // DrawableQueue::GetRenderPassDrawableGroups(RenderPassType) const
    void DrawableQueue::GetRenderPassDrawableGroups(undefined4 param_2) {
        uint uVar1;
        Layout* this_00;
        type* ptVar2;

        uVar1 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_2);
        ptVar2 = (type*)(ulong)uVar1;
        this_00 = (Layout*)std::array<DrawableGroupList, 10ul>::operator[]((array<DrawableGroupList, 10ul>*)this,
                                                                           (ulong)ptVar2);
        eastl::string::Layout::SSOBeginPtr(this_00, ptVar2);
    }

    // 0x10092f8a0, 32 bytes, inline, placed by class name
    // DrawableQueue::GetDrawableGroup(RenderPassType, DrawableGroupType)
    void DrawableQueue::GetDrawableGroup(uint param_2, undefined4 param_3) {
        DrawableGroupList* pDVar1;

        pDVar1 = (DrawableGroupList*)std::array<DrawableGroupList, 10ul>::operator[](
            (array<DrawableGroupList, 10ul>*)this, (ulong)param_2);
        pDVar1->GetDrawableGroup(param_3);
    }

    // 0x10092faf0, 272 bytes, inline, placed by class name
    // DrawableQueue::AddDrawable(DrawableSortKey, std::unique_ptr<DrawableElement, DrawableElementDeleter>&&, Drawable*, DrawableGroupType, RenderPassType)
    /* DrawableQueue::AddDrawable(DrawableSortKey,
   std::unique_ptr<DrawableElement, DrawableElementDeleter>&&,
   Drawable*, DrawableGroupType, RenderPassType) */

    void DrawableQueue::AddDrawable(unique_ptr* param_2, Drawable* param_3, undefined8 param_4, ulong param_5,
                                    undefined4 param_6) {
        DrawableSortKey DVar1;
        undefined4 uVar2;
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_02;
        ulong uVar3;
        vector<DebugPlane<DebugDataBasic>, eastl::allocator>* pvVar4;
        ulong uVar5;
        undefined8 uVar6;
        vector<DrawableElementInfo, eastl::allocator>* this_03;
        undefined4 in_stack_ffffffffffffff98;
        undefined4 in_stack_ffffffffffffff9c;
        DrawableElementInfo local_50;
        undefined8 local_38;

        local_38 = param_4;
        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_6);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, param_5 & 4294967295);
        this_02 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                      this_01->GetScreen();
        uVar3 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            this_02);
        pvVar4 = (vector<DebugPlane<DebugDataBasic>, eastl::allocator>*)this_01->GetScreen();
        uVar5 = eastl::vector<DebugPlane<DebugDataBasic>, eastl::allocator>::capacity(pvVar4);
        if (uVar5 <= uVar3) {
            uVar6 = logger::default_logger();
            in_stack_ffffffffffffff98 =
                oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_6);
            pvVar4 = (vector<DebugPlane<DebugDataBasic>, eastl::allocator>*)this_01->GetScreen();
            uVar2 = eastl::vector<DebugPlane<DebugDataBasic>, eastl::allocator>::capacity(pvVar4);
            logger::Logger::Log(
                uVar6, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                "DrawableQueue.h",
                77, "Drawable queue render pass drawable group has exceeded max capacity, RenderPass: %d, Capacity: %d",
                in_stack_ffffffffffffff98, uVar2);
        }
        this_03 = (vector<DrawableElementInfo, eastl::allocator>*)this_01->GetScreen();
        DVar1._4_4_ = in_stack_ffffffffffffff9c;
        DVar1._0_4_ = in_stack_ffffffffffffff98;
        new (&local_50) DrawableElementInfo(DVar1, param_2, param_3);
        eastl::vector<DrawableElementInfo, eastl::allocator>::emplace_back<DrawableElementInfo>(this_03, &local_50);
        local_50.~DrawableElementInfo();
    }

    // 0x1009382e0, 48 bytes, inline, placed by class name
    // DrawableQueue::GetRenderPassDrawableGroups(RenderPassType)
    void DrawableQueue::GetRenderPassDrawableGroups(undefined4 param_2) {
        uint uVar1;
        Layout* this_00;
        type* ptVar2;

        uVar1 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_2);
        ptVar2 = (type*)(ulong)uVar1;
        this_00 = (Layout*)std::array<DrawableGroupList, 10ul>::operator[]((array<DrawableGroupList, 10ul>*)this,
                                                                           (ulong)ptVar2);
        eastl::string::Layout::SSOBeginPtr(this_00, ptVar2);
    }

} // namespace jag::graphics
