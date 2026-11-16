// libs/hal/render/textures/TextureState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::render {
    class TextureState {
    public:
        // virtual methods in vtable order
        virtual ~TextureState();
        TextureState(Texture&);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        Texture* field_8;   // offset 8
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TextureState::~TextureState();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TextureState::~TextureState();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    TextureState::~TextureState();

    // 0x1009b12e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TextureSamplerStateTracker::TextureSamplerStateTracker(Texture&): jumps straight to the base-object constructor

    // 0x1009b12f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // TextureSamplerStateTracker::~TextureSamplerStateTracker(): jumps straight to the base-object destructor

    // 0x1009ba030, 32 bytes, base-object constructor, inline, placed by class name
    // TextureState::TextureState(Texture&)
    void TextureState::TextureState(Texture* param_1) {
        field_0 = PTR_vtable_100ee8658 + 16;
        field_8 = param_1;
    }

} // namespace jag::render
