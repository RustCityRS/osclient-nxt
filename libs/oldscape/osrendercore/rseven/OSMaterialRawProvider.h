// libs/oldscape/osrendercore/rseven/OSMaterialRawProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class OSRenderCore_MaterialRawProvider {
    public:
        // virtual methods in vtable order
        virtual ~OSRenderCore_MaterialRawProvider();
        virtual void IsReady();
        virtual void GetMaximumMaterialRawId();
        virtual unsigned long GetMaterialRaw(jag::graphics::MaterialRaw& materialRaw, unsigned int arg2);
        virtual uint64_t GetMaterialsArchiveSettings() const;
        OSRenderCore_MaterialRawProvider();
        void LoadMaterials(jagex3::Js5& js5);

    private:
        uint64_t field_8;
        uint64_t m_materialsArchiveSettings;
        uint8_t _unknown_24[16];
    };

} // namespace jag::oldscape::rseven
