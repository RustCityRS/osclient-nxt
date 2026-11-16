// libs/graphics/runetek5/MaterialRawLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class MaterialRawLoader {
    public:
        void Initialise(MaterialRawProvider* arg1);
        unsigned int GetMaterialCount() const;
        uint8_t* GetMaterialRaws() const;
        unsigned int GetMaxMaterialID() const;
        uint8_t* GetDefaultMaterial() const;
        ~MaterialRawLoader();
        MaterialRawLoader();
        unsigned long MainLogic();
        void Destruct();

    private:
        long* field_0;
        unsigned int m_materialCount;
        unsigned int m_maxMaterialID;
        uint8_t _unknown_16[40];
    };

    // 0x1001e0f00
    MaterialRawLoader::~MaterialRawLoader() {
        field_16.~Array();
    }

    // 0x1001e1410
    MaterialRawLoader::MaterialRawLoader() : m_materialCount(0), m_maxMaterialID(0) {}

} // namespace jag::graphics
