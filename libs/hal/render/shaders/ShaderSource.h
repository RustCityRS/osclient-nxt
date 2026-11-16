// libs/hal/render/shaders/ShaderSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::render {
    class ShaderSource {
    public:
        void GetSource() const;
        ~ShaderSource();
        void GetSourceHash() const;
        ShaderSource();
        void SetSource(const char* str);
        void ClearSourceString();

    private:
        uint8_t _unknown_0[32];
        uint64_t field_32;
    };

    // 0x100009ca0: ShaderSource::GetSource() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100024070: ShaderSource::~ShaderSource() has the same machine code as eastl::pair<eastl::string, oldscape::option::IOption*>::~pair()

    // 0x10002dfe0: ShaderSource::~ShaderSource() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

    // 0x10011c770: ShaderSource::GetSourceHash() const has the same machine code as eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true>, eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::size() const

    // 0x100bee9e0
    void ShaderSource::SetSource(const char* str) {

        assign(str);
        HashedString local_30(str);
        field_32 = local_30.end();
    }

    // 0x100bf2410
    void ShaderSource::ClearSourceString() {
        set_capacity(0);
    }

    // 0x100bf8230
    ShaderSource::ShaderSource() : eastl::string(), field_32(0) {}

} // namespace jag::render
