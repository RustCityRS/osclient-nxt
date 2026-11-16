// libs/graphics/runetek7/renderer/DrawableSortKey.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class DrawableSortKey {
    public:
        DrawableSortKey(unsigned long long);
        DrawableSortKey();
        GetLayer() const;

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    DrawableSortKey::DrawableSortKey(unsigned long long);

    // 0x10002a630: the linker folded this into eastl::fixed_vector_allocator<8ul, 20ul, 4ul, 0ul, true, eastl::allocator>::set_name(char const*), which has identical code
    DrawableSortKey::DrawableSortKey(unsigned long long);

    // 0x100045a10: the linker folded this into eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >&>::rbtree_iterator(), which has identical code
    DrawableSortKey::DrawableSortKey();

    // 0x100045c10: the linker folded this into eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >&>::rbtree_iterator(), which has identical code
    DrawableSortKey::DrawableSortKey();

    // 0x1007e1fd0, 16 bytes, inline, placed by class name
    // DrawableSortKey::GetLayer() const
    undefined1 DrawableSortKey::GetLayer() {
        return field_7;
    }

} // namespace jag::graphics
