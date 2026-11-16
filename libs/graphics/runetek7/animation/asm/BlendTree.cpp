// libs/graphics/runetek7/animation/asm/BlendTree.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

namespace jag::graphics {
    class BlendTree {
    public:
        GetRoot() const;
        SetRoot(BlendTreeNode*);
        BlendTree();
        GetBlendTreeAsString();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    BlendTree::GetRoot() const;

    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    BlendTree::SetRoot(BlendTreeNode*);

    // 0x100045a10: the linker folded this into eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >&>::rbtree_iterator(), which has identical code
    BlendTree::BlendTree();

    // 0x100045c10: the linker folded this into eastl::rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >*, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator> >&>::rbtree_iterator(), which has identical code
    BlendTree::BlendTree();

    // 0x10095d580, 96 bytes, placed by class name and debug map
    // BlendTree::GetBlendTreeAsString()
    BlendTree* BlendTree::GetBlendTreeAsString() {
        long* in_RSI;
        allocator local_20[8];

        if ((long*)*in_RSI == (long*)0) {
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            new (this) eastl::string("Empty", local_20);
        } else {
            (**(code**)(*(long*)*in_RSI + 56))(this);
        }
        return this;
    }

} // namespace jag::graphics
