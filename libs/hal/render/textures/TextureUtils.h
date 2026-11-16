// libs/hal/render/textures/TextureUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1008a9c60, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned int>(unsigned long&, unsigned int const&)
    void hash_combine<unsigned int>(ulong* param_1, uint* param_2) {
        ulong uVar1;
        long lVar2;

        lVar2 = std::hash<unsigned int>::operator()((hash<unsigned int>*)(ulong)*param_2, (uint)param_2);
        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1008a9ca0, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned short>(unsigned long&, unsigned short const&)
    void hash_combine<unsigned short>(ulong* param_1, ushort* param_2) {
        ulong uVar1;
        long lVar2;

        lVar2 = std::hash<unsigned short>::operator()((hash<unsigned short>*)(ulong)*param_2, (ushort)param_2);
        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1008aa3a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&): jumps straight to the base-object constructor

    // 0x100bce720, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const::$_13, void>(render::Texture::Invalidate() const::$_13&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x1008aa3f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::~$_2(): jumps straight to the base-object destructor

} // namespace jag::graphics
