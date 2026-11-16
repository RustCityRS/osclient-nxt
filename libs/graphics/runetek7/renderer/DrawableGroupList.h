// libs/graphics/runetek7/renderer/DrawableGroupList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::graphics {
    class DrawableGroupList {
    public:
        void GetDrawableElementInfoGroup();
        void GetDrawableElementInfoGroup() const;
        NXTPixToolkit* GetDrawableGroup(DrawableGroupType drawableGroupType) const;
        void SetOpaqueGroupsSortKeyType(DrawableSortKeyType drawableSortKeyType);
        DrawableGroupList();
        ~DrawableGroupList();
        NXTPixToolkit* GetDrawableGroup(DrawableGroupType drawableGroupType);

        uint8_t _unknown_0[584];
    };

    // 0x100009ca0: DrawableGroupList::GetDrawableElementInfoGroup() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: DrawableGroupList::GetDrawableElementInfoGroup() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1007bcb30
    NXTPixToolkit* DrawableGroupList::GetDrawableGroup(DrawableGroupType drawableGroupType) const {
        return (NXTPixToolkit*)(*this)[(unsigned long)drawableGroupType];
    }

    // 0x1007bcc00
    GraphEntityTransformData::GraphEntityTransformData(const math::Matrix44T<float>* matrix44,
                                                       const math::Frustum& frustum)
        : field_0(matrix44) {
        _memcpy(field_16, frustum, 160);
    }

    // 0x1007e1bf0
    void DrawableGroupList::SetOpaqueGroupsSortKeyType(DrawableSortKeyType drawableSortKeyType) {
        auto pNVar1 = GetDrawableGroup(0);
        new (pNVar1) oldscape::ServerConnectionWorkItem(drawableSortKeyType);
        pNVar1 = GetDrawableGroup(1);
        new (pNVar1) oldscape::ServerConnectionWorkItem(drawableSortKeyType);
        pNVar1 = GetDrawableGroup(7);
        new (pNVar1) oldscape::ServerConnectionWorkItem(drawableSortKeyType);
        pNVar1 = GetDrawableGroup(8);
        new (pNVar1) oldscape::ServerConnectionWorkItem(drawableSortKeyType);
    }

    // 0x1007e8110
    DrawableGroupList::DrawableGroupList()
        : DrawableGroup(0, 2), field_48(1, 2), field_96(2, 1), field_144(3, 1), field_192(4, 1), field_240(5, 1),
          field_288(6, 1), field_336(7, 2), field_384(8, 2), field_432(9, 2), field_480(10, 5), field_528(11, 2),
          field_576(12, 2) {}

    // 0x1007e8400
    DrawableGroupList::~DrawableGroupList() {}

    // 0x1009382b0
    NXTPixToolkit* DrawableGroupList::GetDrawableGroup(DrawableGroupType drawableGroupType) {
        return (NXTPixToolkit*)(*this)[(unsigned long)drawableGroupType];
    }

} // namespace jag::graphics

// 0x1007bcc90
unsigned long fabs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
