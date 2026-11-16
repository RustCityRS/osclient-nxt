// libs/jtl/Algorithms.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Algorithms {
    public:
        int CountMapOverlap<unsigned short, unsigned short, unsigned short>(
            const eastl::vector_map<unsigned short, unsigned short>& arg1,
            const eastl::vector_map<unsigned short, unsigned short>& arg2);
        void QuickSortParallel(Array<int>& arg1, Array<int>& arg2, int arg3, int arg4);
    };

    // 0x1007e2fc0
    std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>
    remove_multi_if<graphics::DrawableElementInfo*,
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
        uint8_t auVar1[16];
        uint8_t local_b8[16];
        uint8_t local_a8[8];
        DrawableElementInfo local_98;
        DrawableElementInfo local_68;

        local_a8 = (uint8_t[8])drawableElementInfo1;
        (graphics::DrawableGroupType)
            ->FilterMulti(
                graphics::RenderPassType, graphics::RenderPassType,
                std::function<bool(
                    graphics::Drawable*,
                    std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::
                $_22::__22(&local_68, (__22*)drawableElementInfo4);
        auVar1 = internal::_find_multi_if<
            graphics::DrawableElementInfo*,
            (graphics::DrawableGroupType)
                ->FilterMulti(
                    graphics::RenderPassType, graphics::RenderPassType,
                    std::function<bool(graphics::Drawable*,
                                       std::unique_ptr<graphics::DrawableElement,
                                                       graphics::DrawableElementDeleter> const&)> const&)::__22>(
            drawableElementInfo1, drawableElementInfo2, drawableElementInfo3, &local_68, arg5);
        (graphics::DrawableGroupType)
            ->FilterMulti(
                graphics::RenderPassType, graphics::RenderPassType,
                std::function<bool(
                    graphics::Drawable*,
                    std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::
                $_22::~__22(&local_68);
        _local_a8 = auVar1;
        if (auVar1._0_8_ == drawableElementInfo2) {
            local_b8->pair<graphics::DrawableElementInfo*&, graphics::DrawableElementInfo*&, false>(
                *local_a8, drawableElementInfo3);
        } else {
            (graphics::DrawableGroupType)
                ->FilterMulti(
                    graphics::RenderPassType, graphics::RenderPassType,
                    std::function<bool(
                        graphics::Drawable*,
                        std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::
                    $_22::__22(&local_98, (__22*)drawableElementInfo4);
            local_b8 = internal::_remove_multi_if<
                graphics::DrawableElementInfo*,
                (graphics::DrawableGroupType)
                    ->FilterMulti(
                        graphics::RenderPassType, graphics::RenderPassType,
                        std::function<bool(graphics::Drawable*,
                                           std::unique_ptr<graphics::DrawableElement,
                                                           graphics::DrawableElementDeleter> const&)> const&)::__22>(
                auVar1._0_8_, drawableElementInfo2, auVar1._8_8_, &local_98, arg5);
            (graphics::DrawableGroupType)
                ->FilterMulti(
                    graphics::RenderPassType, graphics::RenderPassType,
                    std::function<bool(
                        graphics::Drawable*,
                        std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::
                    $_22::~__22(&local_98);
        }
        return local_b8._0_8_;
    }

    // 0x10080faf0
    int Algorithms::CountMapOverlap<unsigned short, unsigned short, unsigned short>(
        const eastl::vector_map<unsigned short, unsigned short>& arg1,
        const eastl::vector_map<unsigned short, unsigned short>& arg2) {
        auto puVar2 = arg1.HeapBeginPtr();
        auto puVar3 = arg2.HeapBeginPtr();
        auto puVar4 = arg1.end();
        auto puVar5 = arg2.end();
        int iVar1 = 0;
        if ((puVar2 != puVar4) && (puVar3 != puVar5)) {
            iVar1 = 0;
            do {
                if (*puVar2 < *puVar3) {
                    puVar2 = puVar2 + 2;
                } else {
                    if (*puVar2 <= *puVar3) {
                        iVar1 = iVar1 + 1;
                        puVar2 = puVar2 + 2;
                    }
                    puVar3 = puVar3 + 2;
                }
            } while ((puVar2 != puVar4) && (puVar3 != puVar5));
        }
        return iVar1;
    }

} // namespace jag
