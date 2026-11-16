// libs/oldscape/osrendercore/rseven/OSMaterialRawProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class OSRenderCore_MaterialRawProvider {
    public:
        // virtual methods in vtable order
        virtual ~OSRenderCore_MaterialRawProvider();
        virtual void IsReady();
        virtual void GetMaximumMaterialRawId();
        virtual ulong GetMaterialRaw(jag::graphics::MaterialRaw&, unsigned int);
        virtual GetMaterialsArchiveSettings() const;
        OSRenderCore_MaterialRawProvider();
        void LoadMaterials(jagex3::Js5&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0;                   // offset 0, vtable pointer
        undefined8 field_8;                    // offset 8
        undefined8 m_materialsArchiveSettings; // offset 16
        char _unknown_24[16];
    };

    // 0x1001bc4a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::OSRenderCore_MaterialRawProvider(): jumps straight to the base-object constructor

    // 0x1001bc4b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::~OSRenderCore_MaterialRawProvider(): jumps straight to the base-object destructor

} // namespace jag::oldscape::rseven
