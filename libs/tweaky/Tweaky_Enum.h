// libs/tweaky/Tweaky_Enum.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class Enum : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Enum();
        virtual void OnFocusChanged(bool);
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual OnClick(float, float, bool);
        virtual OnMouseOver(float, float);
        virtual OnMouseWheel(float, float, float);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual LoadSettings(TweakSettingsValue const&);
        virtual void SaveSettings(TweakSettingsValue&);
        int GetEnumValue() const;
        Enum(char const*, StringEnum const*, int*);
        void GetLargestName();
        void DrawScrollDirection(int, int, shared_ptr<Tweaky>);
        void CheckScrollBoxBounds(float, float);
        void ChangeValue(int);

        // data members, from how the methods use this: 332 bytes, the first 220 are Label
        char _unknown_220[60];
        StringEnum* field_280; // offset 280
        bool field_288;        // offset 288
        char _unknown_289[7];
        int* field_296; // offset 296
        int field_304;  // offset 304
        int field_308;  // offset 308
        int field_312;  // offset 312
        int field_316;  // offset 316
        int field_320;  // offset 320
        uint field_324; // offset 324
        char _unknown_328[4];
    };

    // 0x1007ff530, 80 bytes, inline, placed by class name and debug map
    // Enum::GetEnumValue() const
    int Enum::GetEnumValue() {
        if (field_296 == (int*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Value != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Enum.h", 26,
                      (char*)0);
        }
        return *field_296;
    }

    // 0x100a51700, 16 bytes, complete-object destructor, inline, placed by class name
    // Enum::~Enum(): jumps straight to the base-object destructor

    // 0x100a51710, 32 bytes, deleting destructor, inline, placed by class name
    // Enum::~Enum()
    void Enum::~Enum() {
        ~Enum(this);
        operator_delete(this);
    }

    // 0x100a51730, 32 bytes, inline, placed by class name
    // Enum::InitDefault()
    void Enum::InitDefault() {
        field_304 = *field_296;
    }

    // 0x100a52c00, 64 bytes, base-object destructor, inline, placed by class name
    // Enum::~Enum()
    void Enum::~Enum() {
        field_0 = &PTR__Enum_100f1d3c8;
        (&field_248)->~basic_string();
        (&field_216)->~basic_string();
        ~Control();
    }

} // namespace jag::tweak

namespace jag {
    // 0x100800160, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
            graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
            std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
            graphics::SceneViewData_const&)::$_19>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(64, 4, 8);
    }

    // 0x100800430, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
            graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
            std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
            graphics::SceneViewData_const&)::$_19>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 << 6);
    }

    // 0x1008016b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x100801970, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned
   long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 56);
    }

    // 0x100802ad0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x100802d90, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 56);
    }

} // namespace jag

namespace jag::internal {
    // 0x100802620, 128 bytes, inline, placed by debug map only (low confidence)
    // std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*> _find_multi_if<graphics::DrawableElementInfo*, graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_22>(graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_22)
    /* std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>
   _find_multi_if<graphics::DrawableElementInfo*,
   graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)>
   const&)::$_22>(graphics::DrawableElementInfo*, graphics::DrawableElementInfo*,
   graphics::DrawableElementInfo*, graphics::DrawableElementInfo*,
   graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_22) */

    undefined1[16] internal::_find_multi_if<
        graphics::DrawableElementInfo*,
        graphics::DrawableQueue::FilterMulti(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__22>(
        DrawableElementInfo* param_1, DrawableElementInfo* param_2, DrawableElementInfo* param_3, __22* param_4) {
        undefined1 auVar2[16];
        pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*> local_38[16];
        DrawableElementInfo* local_28;
        DrawableElementInfo* local_20;

        local_28 = param_3;
        local_20 = param_1;
        if (param_1 != param_2) {
            do {
                if ((graphics::DrawableGroupType)
                        ->FilterMulti(
                            graphics::RenderPassType, graphics::RenderPassType,
                            std::function<bool(graphics::Drawable*,
                                               std::unique_ptr<graphics::DrawableElement,
                                                               graphics::DrawableElementDeleter> const&)> const&)::
                            $_22::operator()(param_4, local_20) != '\0')
                    break;
                local_20 = local_20 + 1;
                local_28 = local_28 + 1;
            } while (local_20 != param_2);
        }
        std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>::pair<
            graphics::DrawableElementInfo*&, graphics::DrawableElementInfo*&, false>(local_38, &local_20, &local_28);
        auVar2[0] = local_38[0];
        auVar2[1] = local_38[1];
        auVar2[2] = local_38[2];
        auVar2[3] = local_38[3];
        auVar2[4] = local_38[4];
        auVar2[5] = local_38[5];
        auVar2[6] = local_38[6];
        auVar2[7] = local_38[7];
        auVar2[8] = local_38[8];
        auVar2[9] = local_38[9];
        auVar2[10] = local_38[10];
        auVar2[11] = local_38[11];
        auVar2[12] = local_38[12];
        auVar2[13] = local_38[13];
        auVar2[14] = local_38[14];
        auVar2[15] = local_38[15];
        return auVar2;
    }

    // 0x1008026c0, 176 bytes, inline, placed by debug map only (low confidence)
    // std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*> _remove_multi_if<graphics::DrawableElementInfo*, graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_22>(graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_22)
    /* std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>
   _remove_multi_if<graphics::DrawableElementInfo*,
   graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)>
   const&)::$_22>(graphics::DrawableElementInfo*, graphics::DrawableElementInfo*,
   graphics::DrawableElementInfo*, graphics::DrawableElementInfo*,
   graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_22) */

    undefined1[16] internal::_remove_multi_if<
        graphics::DrawableElementInfo*,
        graphics::DrawableQueue::FilterMulti(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__22>(
        DrawableElementInfo* param_1, DrawableElementInfo* param_2, DrawableElementInfo* param_3, __22* param_4) {
        DrawableElementInfo* pDVar1;
        char cVar2;
        undefined1 auVar3[16];
        pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*> local_48[16];
        DrawableElementInfo* local_38;
        DrawableElementInfo* local_30;

        local_38 = param_1;
        local_30 = param_3;
        while (param_1 = param_1 + 1, param_1 != param_2) {
            param_3 = param_3 + 1;
            cVar2 = (graphics::DrawableGroupType)
                        ->FilterMulti(
                            graphics::RenderPassType, graphics::RenderPassType,
                            std::function<bool(graphics::Drawable*,
                                               std::unique_ptr<graphics::DrawableElement,
                                                               graphics::DrawableElementDeleter> const&)> const&)::
                            $_22::operator()(param_4, param_1);
            pDVar1 = local_38;
            if (cVar2 == '\0') {
                local_38 = local_38 + 1;
                graphics::DrawableElementInfo::operator=(pDVar1, param_1);
                pDVar1 = local_30;
                local_30 = local_30 + 1;
                graphics::DrawableElementInfo::operator=(pDVar1, param_3);
            }
        }
        std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>::pair<
            graphics::DrawableElementInfo*&, graphics::DrawableElementInfo*&, false>(local_48, &local_38, &local_30);
        auVar3[0] = local_48[0];
        auVar3[1] = local_48[1];
        auVar3[2] = local_48[2];
        auVar3[3] = local_48[3];
        auVar3[4] = local_48[4];
        auVar3[5] = local_48[5];
        auVar3[6] = local_48[6];
        auVar3[7] = local_48[7];
        auVar3[8] = local_48[8];
        auVar3[9] = local_48[9];
        auVar3[10] = local_48[10];
        auVar3[11] = local_48[11];
        auVar3[12] = local_48[12];
        auVar3[13] = local_48[13];
        auVar3[14] = local_48[14];
        auVar3[15] = local_48[15];
        return auVar3;
    }

} // namespace jag::internal
