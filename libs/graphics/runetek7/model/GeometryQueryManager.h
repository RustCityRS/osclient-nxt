// libs/graphics/runetek7/model/GeometryQueryManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ClippingRectangle {
    public:
        ClippingRectangle();
        int GetWidth() const;
        int GetHeight() const;

        // data members, from how the methods use this: 20 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    class GeometryQueryManager {
    public:
        GeometryQueryManager();
        Singleton<render::RenderDevice>* Create(render::QueryType, bool);
        void Destroy();
        void OnEndFrame();
        ulong HasQueries() const;
        ulong HasDestructiveQueries() const;
        ~GeometryQueryManager();

        // data members, from how the methods use this: 16 bytes
        shared_ptr* field_0; // offset 0
        shared_ptr* field_8; // offset 8
    };

    // 0x10097ee30, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GeometryQueryManager::~GeometryQueryManager(): jumps straight to the base-object destructor

    // 0x10097ee50, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ShaderResourceSlotManager::~ShaderResourceSlotManager(): jumps straight to the base-object destructor

    // 0x100980cd0, 16 bytes, inline, placed by debug map only (low confidence)
    // ClippingRectangle::GetWidth() const
    int ClippingRectangle::GetWidth() {
        return field_8 - field_0;
    }

    // 0x100980ce0, 16 bytes, inline, placed by debug map only (low confidence)
    // ClippingRectangle::GetHeight() const
    int ClippingRectangle::GetHeight() {
        return field_12 - field_4;
    }

    // 0x100990e70, 16 bytes, base-object destructor, inline, placed by class name
    // GeometryQueryManager::~GeometryQueryManager()
    void GeometryQueryManager::~GeometryQueryManager() {
        ~vector();
    }

} // namespace jag::graphics
