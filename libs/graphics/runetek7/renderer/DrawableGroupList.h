// libs/graphics/runetek7/renderer/DrawableGroupList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::graphics {
    class DrawableGroupList {
    public:
        GetDrawableElementInfoGroup();
        GetDrawableElementInfoGroup() const;
        void GetDrawableGroup(DrawableGroupType) const;
        void SetOpaqueGroupsSortKeyType(DrawableSortKeyType);
        DrawableGroupList();
        ~DrawableGroupList();
        void GetDrawableGroup(DrawableGroupType);

        // data members, from how the methods use this: 584 bytes
        char _unknown_0[584];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    DrawableGroupList::GetDrawableElementInfoGroup();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    DrawableGroupList::GetDrawableElementInfoGroup() const;

    // 0x1007bcb30, 16 bytes, inline, placed by class name and debug map
    // DrawableGroupList::GetDrawableGroup(DrawableGroupType) const
    void DrawableGroupList::GetDrawableGroup(uint param_2) {
        std::array<DrawableGroup, 13ul>::operator[]((array<DrawableGroup, 13ul>*)this, (ulong)param_2);
    }

    // 0x1007bcc00, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GraphEntityTransformData::GraphEntityTransformData(math::Matrix44T<float> const*, math::Frustum const&)
    void GraphEntityTransformData::GraphEntityTransformData(Matrix44T* param_1, Frustum* param_2) {
        field_0 = param_1;
        _memcpy(field_16, param_2, 160);
    }

    // 0x1007e1bf0, 112 bytes, inline, placed by class name and debug map
    // DrawableGroupList::SetOpaqueGroupsSortKeyType(DrawableSortKeyType)
    void DrawableGroupList::SetOpaqueGroupsSortKeyType(undefined4 param_2) {
        ServerConnectionWorkItem* pSVar1;

        pSVar1 = (ServerConnectionWorkItem*)GetDrawableGroup(this, 0);
        oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, param_2);
        pSVar1 = (ServerConnectionWorkItem*)GetDrawableGroup(this, 1);
        oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, param_2);
        pSVar1 = (ServerConnectionWorkItem*)GetDrawableGroup(this, 7);
        oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, param_2);
        pSVar1 = (ServerConnectionWorkItem*)GetDrawableGroup(this, 8);
        oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, param_2);
    }

    // 0x1007e80f0, 16 bytes, complete-object constructor, inline, placed by class name
    // DrawableGroupList::DrawableGroupList(): jumps straight to the base-object constructor

    // 0x1007e8100, 16 bytes, complete-object destructor, inline, placed by class name
    // DrawableGroupList::~DrawableGroupList(): jumps straight to the base-object destructor

    // 0x1007e8110, 480 bytes, base-object constructor, inline, placed by class name
    // DrawableGroupList::DrawableGroupList()
    void DrawableGroupList::DrawableGroupList() {
        new (this) DrawableGroup(0, 2);
        new (&field_48, 1, 2) DrawableGroup();
        new (&field_96, 2, 1) DrawableGroup();
        new (&field_144, 3, 1) DrawableGroup();
        new (&field_192, 4, 1) DrawableGroup();
        new (&field_240, 5, 1) DrawableGroup();
        new (&field_288, 6, 1) DrawableGroup();
        new (&field_336, 7, 2) DrawableGroup();
        new (&field_384, 8, 2) DrawableGroup();
        new (&field_432, 9, 2) DrawableGroup();
        new (&field_480, 10, 5) DrawableGroup();
        new (&field_528, 11, 2) DrawableGroup();
        new (&field_576, 12, 2) DrawableGroup();
    }

    // 0x1007e8400, 16 bytes, base-object destructor, inline, placed by class name
    // DrawableGroupList::~DrawableGroupList()
    void DrawableGroupList::~DrawableGroupList() {
        ~array();
    }

    // 0x1009382b0, 16 bytes, inline, placed by class name
    // DrawableGroupList::GetDrawableGroup(DrawableGroupType)
    void DrawableGroupList::GetDrawableGroup(uint param_2) {
        std::array<DrawableGroup, 13ul>::operator[]((array<DrawableGroup, 13ul>*)this, (ulong)param_2);
    }

} // namespace jag::graphics

// 0x1007bcc90, 16 bytes, placed by debug map only (low confidence)
// fabs(float)
ulong fabs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
