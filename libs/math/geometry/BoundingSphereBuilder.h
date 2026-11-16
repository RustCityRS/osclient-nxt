// libs/math/geometry/BoundingSphereBuilder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphicutils {
    class BoundingSphereBuilder {
    public:
        Vector2T<int>* GetBestFitSphere() const;
        BoundingSphereBuilder();
        void BeginPass1();
        void AddPointPass1(const math::Vector3T<float>& vector3);
        void BeginPass2();
        void AddPointPass2(const math::Vector3T<float>& vector3);
        void End();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[16];
        Sphere field_20;
        uint8_t _unknown_40[8];
        AABB field_48;
        uint8_t _unknown_84[12];
        int field_96;
        Sphere field_100;
        uint8_t _unknown_120[4];
        float field_124;
        uint64_t field_128;
        uint32_t field_136;
        uint8_t _unknown_140[44];
    };

    // 0x1008cdc80
    BoundingSphereBuilder::BoundingSphereBuilder() : field_0(0) {
        new ((field_48 + 32)) math::Sphere();
        field_96 = 0;
        new (field_100) math::Sphere();
        new ((field_100 + 16)) math::Vector3T();
        new (&field_128) math::Vector3T();
        new (&field_140) math::Vector3T();
        new (&field_152) math::Vector3T();
        new (&field_164) math::Vector3T();
        new (&field_176) math::Vector3T();
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x1008b2bf0
    void CreateFrustumBoundingSphere(math::Sphere& sphere, const math::Vector4T<float>& vector41,
                                     const math::Vector4T<float>& vector42) {
        uint64_t local_108[2];

        BoundingSphereBuilder local_f8;
        local_f8.BeginPass1();
        local_108[0] = vector41.GetXYZ();
        local_f8.AddPointPass1(*local_108);
        local_108[0] = vector42.GetXYZ();
        local_f8.AddPointPass1(*local_108);
        local_f8.BeginPass2();
        local_108[0] = vector41.GetXYZ();
        local_f8.AddPointPass2(*local_108);
        local_108[0] = vector42.GetXYZ();
        local_f8.AddPointPass2(*local_108);
        local_f8.End();
        auto positionTimeData = local_f8.y();
        sphere = *positionTimeData;
    }

} // namespace jag::graphics
