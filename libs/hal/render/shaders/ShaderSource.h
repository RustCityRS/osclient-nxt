// libs/hal/render/shaders/ShaderSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::render {
    class ShaderSource {
    public:
        GetSource() const;
        ~ShaderSource();
        GetSourceHash() const;
        ShaderSource();
        void SetSource(char const*);
        void ClearSourceString();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[32];
        undefined8 field_32; // offset 32
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ShaderSource::GetSource() const;

    // 0x100024070: the linker folded this into eastl::pair<eastl::string, oldscape::option::IOption*>::~pair(), which has identical code
    ShaderSource::~ShaderSource();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    ShaderSource::~ShaderSource();

    // 0x10011c770: the linker folded this into eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<int const, unsigned long> >, true, true>::size() const, which has identical code
    ShaderSource::GetSourceHash() const;

    // 0x100bee730, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ShaderSource::ShaderSource(): jumps straight to the base-object constructor

    // 0x100bee9e0, 64 bytes, inline, placed by class name and debug map
    // ShaderSource::SetSource(char const*)
    void ShaderSource::SetSource(char* param_1) {
        undefined8 uVar1;
        HashedString local_30;

        assign(param_1);
        new (&local_30) HashedString(param_1);
        uVar1 = local_30.end();
        field_32 = uVar1;
    }

    // 0x100bf2410, 16 bytes, inline, placed by class name
    // ShaderSource::ClearSourceString()
    void ShaderSource::ClearSourceString() {
        set_capacity(0);
    }

    // 0x100bf8230, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderSource::ShaderSource()
    void ShaderSource::ShaderSource() {
        new (this) eastl::string();
        field_32 = 0;
    }

} // namespace jag::render
