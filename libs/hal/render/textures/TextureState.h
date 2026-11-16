// libs/hal/render/textures/TextureState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::render {
    class TextureState {
    public:
        // virtual methods in vtable order
        virtual ~TextureState();
        TextureState(Texture& texture);

    private:
        Texture* field_8;
    };

    // 0x100009e70: TextureState::~TextureState() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1009ba030
    TextureState::TextureState(Texture& texture) : field_8(texture) {}

} // namespace jag::render
