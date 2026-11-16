// libs/graphics/runetek7/model/GeometryQueryManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ClippingRectangle {
    public:
        ClippingRectangle();
        int GetWidth() const;
        int GetHeight() const;

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

    class GeometryQueryManager {
    public:
        GeometryQueryManager();
        auto Create(render::QueryType queryType, bool arg2);
        void Destroy();
        void OnEndFrame();
        unsigned long HasQueries() const;
        unsigned long HasDestructiveQueries() const;
        ~GeometryQueryManager();

    private:
        shared_ptr<game::LightSource>* field_0;
        shared_ptr<oldscape::dash3d::Decor>* field_8;
    };

    // 0x100980cd0
    int ClippingRectangle::GetWidth() const {
        return field_8 - field_0;
    }

    // 0x100980ce0
    int ClippingRectangle::GetHeight() const {
        return field_12 - field_4;
    }

    // 0x100990e70
    GeometryQueryManager::~GeometryQueryManager() {}

} // namespace jag::graphics
