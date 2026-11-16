// libs/tweaky/Tweaky_Enum.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100800160
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                                      graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                                      graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                      std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                                      graphics::SceneViewData const&)::$_19>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                         graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                         graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                         std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                         graphics::SceneViewData const&)::$_19>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(64, 4, 8);
    }

    // 0x100800430
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                                      graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                                      graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                      std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                                      graphics::SceneViewData const&)::$_19>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                           graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                           graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                           std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                           graphics::SceneViewData const&)::$_19>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func << 6), arg2);
    }

    // 0x1008016b0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::DrawableQueue::FilterAsync(
                         graphics::DrawableGroupType, graphics::RenderPassType,
                         std::function<bool(graphics::Drawable*,
                                            std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x100801970
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::DrawableQueue::FilterAsync(
                           graphics::DrawableGroupType, graphics::RenderPassType,
                           std::function<bool(graphics::Drawable*,
                                              std::unique_ptr<graphics::DrawableElement,
                                                              graphics::DrawableElementDeleter> const&)> const&)::$_21>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 56), arg2);
    }

    // 0x100802ad0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::DrawableQueue::FilterMultiAsync(
                         graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                         std::function<bool(graphics::Drawable*,
                                            std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x100802d90
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::DrawableQueue::FilterMultiAsync(
                           graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                           std::function<bool(graphics::Drawable*,
                                              std::unique_ptr<graphics::DrawableElement,
                                                              graphics::DrawableElementDeleter> const&)> const&)::$_23>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 56), arg2);
    }

} // namespace jag

namespace jag::tweak {
    class Enum : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Enum();
        virtual void OnFocusChanged(bool arg1);
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual uint64_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint64_t OnMouseOver(float arg1, float arg2);
        virtual uint8_t OnMouseWheel(float arg1, float arg2, float arg3);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual uint32_t LoadSettings(const TweakSettingsValue& tweakSettingsValue);
        virtual void SaveSettings(TweakSettingsValue& tweakSettingsValue);
        int GetEnumValue() const;
        Enum(const char* str, const StringEnum* stringEnum, int* arg3);
        void GetLargestName();
        void DrawScrollDirection(int arg1, int arg2, shared_ptr<Tweaky> tweaky);
        void CheckScrollBoxBounds(float arg1, float arg2);
        void ChangeValue(int arg1);

    private:
        uint8_t _unknown_220[60];
        StringEnum* field_280;
        bool field_288;
        uint8_t _unknown_289[7];
        int* field_296;
        int field_304;
        int field_308;
        int field_312;
        int field_316;
        int field_320;
        unsigned int field_324;
        uint8_t _unknown_328[4];
    };

    // 0x1007ff530
    int Enum::GetEnumValue() const {
        if (field_296 == nullptr) {
            LogAssert("m_Value != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Enum.h", 26,
                      nullptr);
        }
        return *field_296;
    }

    // 0x100a51730
    void Enum::InitDefault() {
        field_304 = *field_296;
    }

    // 0x100a52c00
    Enum::~Enum() {
        field_248.~basic_string();
        field_216.~basic_string();
    }

} // namespace jag::tweak

namespace jag::internal {
    // 0x100802620
    std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>
    _find_multi_if<graphics::DrawableElementInfo*,
                   graphics::DrawableQueue::FilterMulti(
                       graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                       std::function<bool(graphics::Drawable*,
                                          std::unique_ptr<graphics::DrawableElement,
                                                          graphics::DrawableElementDeleter> const&)> const&)::$_22>(
        graphics::DrawableElementInfo* drawableElementInfo1, graphics::DrawableElementInfo* drawableElementInfo2,
        graphics::DrawableElementInfo* drawableElementInfo3, graphics::DrawableElementInfo* drawableElementInfo4,
        graphics::DrawableQueue::FilterMulti(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(graphics::Drawable*,
                               std::unique_ptr<graphics::DrawableElement,
                                               graphics::DrawableElementDeleter> const&)> const&)::$_22 arg5) {
        uint8_t auVar2[16];
        pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*> local_38[16];

        DrawableElementInfo* local_28 = drawableElementInfo3;
        DrawableElementInfo* local_20 = drawableElementInfo1;
        if (drawableElementInfo1 != drawableElementInfo2) {
            do {
                if ((graphics::DrawableGroupType)
                        ->FilterMulti(
                            graphics::RenderPassType, graphics::RenderPassType,
                            std::function<bool(graphics::Drawable*,
                                               std::unique_ptr<graphics::DrawableElement,
                                                               graphics::DrawableElementDeleter> const&)> const&)::
                            $_22::operator()((__22*)drawableElementInfo4, local_20) != '\0')
                    break;
                local_20 = local_20 + 1;
                local_28 = local_28 + 1;
            } while (local_20 != drawableElementInfo2);
        }
        local_38->pair<graphics::DrawableElementInfo*&, graphics::DrawableElementInfo*&, false>(local_20, local_28);
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

    // 0x1008026c0
    std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>
    _remove_multi_if<graphics::DrawableElementInfo*,
                     graphics::DrawableQueue::FilterMulti(
                         graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                         std::function<bool(graphics::Drawable*,
                                            std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_22>(
        graphics::DrawableElementInfo* drawableElementInfo1, graphics::DrawableElementInfo* drawableElementInfo2,
        graphics::DrawableElementInfo* drawableElementInfo3, graphics::DrawableElementInfo* drawableElementInfo4,
        graphics::DrawableQueue::FilterMulti(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(graphics::Drawable*,
                               std::unique_ptr<graphics::DrawableElement,
                                               graphics::DrawableElementDeleter> const&)> const&)::$_22 arg5) {
        DrawableElementInfo* pDVar1;
        bool cVar2;
        uint8_t auVar3[16];
        pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*> local_48[16];

        DrawableElementInfo* local_38 = drawableElementInfo1;
        DrawableElementInfo* local_30 = drawableElementInfo3;
        while (drawableElementInfo1 = drawableElementInfo1 + 1, drawableElementInfo1 != drawableElementInfo2) {
            drawableElementInfo3 = drawableElementInfo3 + 1;
            cVar2 = (graphics::DrawableGroupType)
                        ->FilterMulti(
                            graphics::RenderPassType, graphics::RenderPassType,
                            std::function<bool(graphics::Drawable*,
                                               std::unique_ptr<graphics::DrawableElement,
                                                               graphics::DrawableElementDeleter> const&)> const&)::
                            $_22::operator()((__22*)drawableElementInfo4, drawableElementInfo1);
            pDVar1 = local_38;
            if (!cVar2) {
                local_38 = local_38 + 1;
                *pDVar1 = *drawableElementInfo1;
                pDVar1 = local_30;
                local_30 = local_30 + 1;
                *pDVar1 = *drawableElementInfo3;
            }
        }
        local_48->pair<graphics::DrawableElementInfo*&, graphics::DrawableElementInfo*&, false>(local_38, local_30);
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
