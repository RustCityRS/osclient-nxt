// libs/graphics/runetek7/materials/textures/TextureAtlasMaterialSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TextureAtlasMaterialSettings {
    public:
        TextureAtlasMaterialSettings();
        uint64_t Initialise(const Material& material);
        void SetTextureSlots(const std::array<unsigned short, 3ul>& arg1, const std::array<unsigned short, 3ul>& arg2,
                             const std::array<unsigned char, 3ul>& arg3);
        bool IsValid() const;
        void GetData() const;

    private:
        uint8_t _unknown_0[48];
        char field_48;
        uint8_t m_valid;
    };

    // 0x10085b590
    void TextureAtlasMaterialSettings::GetData() const {
        data();
    }

    // 0x10086a7f0
    TextureAtlasMaterialSettings::TextureAtlasMaterialSettings() : m_valid(0) {}

} // namespace jag::graphics
