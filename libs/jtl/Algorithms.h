// libs/jtl/Algorithms.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Algorithms {
    public:
        int CountMapOverlap<unsigned short, unsigned short, unsigned short>(
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&);
        void QuickSortParallel(Array<int, eastl::allocator>&, Array<int, eastl::allocator>&, int, int);
    };

    // 0x1007e2fc0, 304 bytes, inline, placed by debug map only (low confidence)
    // std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*> remove_multi_if<graphics::DrawableElementInfo*, graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_22>(graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableElementInfo*, graphics::DrawableQueue::FilterMulti(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_22)
    /* std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>
   remove_multi_if<graphics::DrawableElementInfo*,
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

    undefined8 jag::remove_multi_if<
        graphics::DrawableElementInfo*,
        graphics::DrawableQueue::FilterMulti(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__22>(
        DrawableElementInfo* param_1, long param_2, DrawableElementInfo* param_3, __22* param_4) {
        undefined1 auVar1[16];
        undefined1 local_b8[16];
        undefined1 local_a8[8];
        DrawableElementInfo* local_a0;
        __22 local_98[48];
        __22 local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a8 = (undefined1[8])param_1;
        local_a0 = param_3;
        (graphics::DrawableGroupType)
            ->FilterMulti(
                graphics::RenderPassType, graphics::RenderPassType,
                std::function<bool(
                    graphics::Drawable*,
                    std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::
                $_22::__22(local_68, param_4);
        auVar1 = internal::_find_multi_if<
            graphics::DrawableElementInfo*,
            (graphics::DrawableGroupType)
                ->FilterMulti(
                    graphics::RenderPassType, graphics::RenderPassType,
                    std::function<bool(graphics::Drawable*,
                                       std::unique_ptr<graphics::DrawableElement,
                                                       graphics::DrawableElementDeleter> const&)> const&)::__22>(
            param_1, param_2, param_3, local_68);
        (graphics::DrawableGroupType)
            ->FilterMulti(graphics::RenderPassType, graphics::RenderPassType,
                          std::function<bool(
                              graphics::Drawable*,
                              std::unique_ptr<graphics::DrawableElement,
                                              graphics::DrawableElementDeleter> const&)> const&)::$_22::~__22(local_68);
        _local_a8 = auVar1;
        if (auVar1._0_8_ == param_2) {
            std::pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>::pair<
                graphics::DrawableElementInfo*&, graphics::DrawableElementInfo*&, false>(
                (pair<graphics::DrawableElementInfo*, graphics::DrawableElementInfo*>*)local_b8,
                (DrawableElementInfo**)local_a8, &local_a0);
        } else {
            (graphics::DrawableGroupType)
                ->FilterMulti(
                    graphics::RenderPassType, graphics::RenderPassType,
                    std::function<bool(
                        graphics::Drawable*,
                        std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::
                    $_22::__22(local_98, param_4);
            local_b8 = internal::_remove_multi_if<
                graphics::DrawableElementInfo*,
                (graphics::DrawableGroupType)
                    ->FilterMulti(
                        graphics::RenderPassType, graphics::RenderPassType,
                        std::function<bool(graphics::Drawable*,
                                           std::unique_ptr<graphics::DrawableElement,
                                                           graphics::DrawableElementDeleter> const&)> const&)::__22>(
                auVar1._0_8_, param_2, auVar1._8_8_, local_98);
            (graphics::DrawableGroupType)
                ->FilterMulti(
                    graphics::RenderPassType, graphics::RenderPassType,
                    std::function<bool(
                        graphics::Drawable*,
                        std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::
                    $_22::~__22(local_98);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_b8._0_8_;
    }

    // 0x10080faf0, 160 bytes, inline, placed by class name
    // int Algorithms::CountMapOverlap<unsigned short, unsigned short, unsigned short>(eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&)
    int Algorithms::CountMapOverlap<unsigned short, unsigned short, unsigned short>(vector_map* param_1,
                                                                                    vector_map* param_2) {
        int iVar1;
        ushort* puVar2;
        ushort* puVar3;
        ushort* puVar4;
        ushort* puVar5;

        puVar2 = (ushort*)param_1->HeapBeginPtr();
        puVar3 = (ushort*)param_2->HeapBeginPtr();
        puVar4 = (ushort*)param_1->end();
        puVar5 = (ushort*)param_2->end();
        iVar1 = 0;
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
