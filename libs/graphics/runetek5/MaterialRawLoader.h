// libs/graphics/runetek5/MaterialRawLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class MaterialRawLoader {
    public:
        Initialise(MaterialRawProvider*);
        GetMaterialCount() const;
        GetMaterialRaws() const;
        GetMaxMaterialID() const;
        GetDefaultMaterial() const;
        ~MaterialRawLoader();
        MaterialRawLoader();
        ulong MainLogic();
        void Destruct();

        // data members, from how the methods use this: 56 bytes
        long* field_0; // offset 0
        uint field_8;  // offset 8
        uint field_12; // offset 12
        char _unknown_16[40];
    };

    // 0x1001e0e70, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MaterialRawLoader::~MaterialRawLoader(): jumps straight to the base-object destructor

    // 0x1001e0f00, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // MaterialRawLoader::~MaterialRawLoader()
    void MaterialRawLoader::~MaterialRawLoader() {
        (&field_16)->~Array();
    }

    // 0x1001e13f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MaterialRawLoader::MaterialRawLoader(): jumps straight to the base-object constructor

    // 0x1001e1410, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // MaterialRawLoader::MaterialRawLoader()
    void MaterialRawLoader::MaterialRawLoader() {
        field_8 = 0;
        field_12 = 0;
        new (&field_16) Array<MaterialRaw, eastl::allocator>();
        new (&field_48) MaterialRaw();
    }

} // namespace jag::graphics
