// libs/graphics/runetek7/materials/textures/TextureAtlasMaterialSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TextureAtlasMaterialSettings {
    public:
        TextureAtlasMaterialSettings();
        Initialise(Material const&);
        void SetTextureSlots(std::array<unsigned short, 3ul> const&, std::array<unsigned short, 3ul> const&,
                             std::array<unsigned char, 3ul> const&);
        IsValid() const;
        void GetData() const;

        // data members, from how the methods use this: 50 bytes
        char _unknown_0[48];
        char field_48;      // offset 48
        undefined1 m_valid; // offset 49
    };

    // 0x100858a40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TextureAtlasMaterialSettings::TextureAtlasMaterialSettings(): jumps straight to the base-object constructor

    // 0x10085b590, 16 bytes, inline, placed by class name
    // TextureAtlasMaterialSettings::GetData() const
    void TextureAtlasMaterialSettings::GetData() {
        data();
    }

    // 0x10086a7f0, 16 bytes, base-object constructor, inline, placed by class name
    // TextureAtlasMaterialSettings::TextureAtlasMaterialSettings()
    void TextureAtlasMaterialSettings::TextureAtlasMaterialSettings() {
        m_valid = 0;
    }

} // namespace jag::graphics
