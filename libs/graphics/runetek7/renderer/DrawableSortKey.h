// libs/graphics/runetek7/renderer/DrawableSortKey.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class DrawableSortKey {
    public:
        DrawableSortKey(unsigned long long arg1);
        DrawableSortKey();
        uint8_t GetLayer() const;

    private:
        uint8_t _unknown_0[7];
        uint8_t m_layer;
    };

    // 0x10000b400: DrawableSortKey::DrawableSortKey(unsigned long long) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

    // 0x10002a630: DrawableSortKey::DrawableSortKey(unsigned long long) has the same machine code as eastl::fixed_vector_allocator<8ul, 20ul, 4ul, 0ul, true>::set_name(char const*)

    // 0x100045a10: DrawableSortKey::DrawableSortKey() has the same machine code as eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>&>::rbtree_iterator()

    // 0x100045c10: DrawableSortKey::DrawableSortKey() has the same machine code as eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>&>::rbtree_iterator()

    // 0x1007e1fd0
    uint8_t DrawableSortKey::GetLayer() const {
        return m_layer;
    }

} // namespace jag::graphics
