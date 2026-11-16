// libs/graphics/runetek7/animation/asm/BlendTree.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

namespace jag::graphics {
    class BlendTree {
    public:
        void GetRoot() const;
        void SetRoot(BlendTreeNode* arg1);
        BlendTree();
        auto GetBlendTreeAsString();

    private:
        long* field_0;
    };

    // 0x100009d10: BlendTree::GetRoot() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x10000b400: BlendTree::SetRoot(BlendTreeNode*) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

    // 0x100045a10: BlendTree::BlendTree() has the same machine code as eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>&>::rbtree_iterator()

    // 0x100045c10: BlendTree::BlendTree() has the same machine code as eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>&>::rbtree_iterator()

    // 0x10095d580
    auto BlendTree::GetBlendTreeAsString() {

        if (field_0 == nullptr) {
            auto result("Empty");
        } else {
            (**(void (**)(...))(*field_0 + 56))(&result);
        }
        return result;
    }

} // namespace jag::graphics
