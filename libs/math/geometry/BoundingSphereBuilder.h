// libs/math/geometry/BoundingSphereBuilder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphicutils {
    class BoundingSphereBuilder {
    public:
        GetBestFitSphere() const;
        BoundingSphereBuilder();
        void BeginPass1();
        void AddPointPass1(math::Vector3T<float> const&);
        void BeginPass2();
        void AddPointPass2(math::Vector3T<float> const&);
        void End();

        // data members, from how the methods use this: 184 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[16];
        Sphere field_20; // offset 20
        char _unknown_40[56];
        int field_96;     // offset 96
        Sphere field_100; // offset 100
        char _unknown_120[4];
        float field_124;      // offset 124
        undefined8 field_128; // offset 128
        undefined4 field_136; // offset 136
        char _unknown_140[44];
    };

    // 0x1008b2bc0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BoundingSphereBuilder::BoundingSphereBuilder(): jumps straight to the base-object constructor

    // 0x1008cdc80, 160 bytes, base-object constructor, inline, placed by class name
    // BoundingSphereBuilder::BoundingSphereBuilder()
    void BoundingSphereBuilder::BoundingSphereBuilder() {
        field_0 = 0;
        new (&field_4) math::Sphere();
        new (field_20) math::Sphere();
        new (&field_48) math::AABB();
        new (&field_80) math::Sphere();
        field_96 = 0;
        new (field_100) math::Sphere();
        new ((field_100 + 16)) math::Vector3T<int>();
        new (&field_128) math::Vector3T<int>();
        new (&field_140) math::Vector3T<int>();
        new (&field_152) math::Vector3T<int>();
        new (&field_164) math::Vector3T<int>();
        new (&field_176) math::Vector3T<int>();
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x1008b2bf0, 288 bytes, placed by debug map only (low confidence)
    // CreateFrustumBoundingSphere(math::Sphere&, math::Vector4T<float> const&, math::Vector4T<float> const&)
    void CreateFrustumBoundingSphere(Sphere* param_1, Vector4T* param_2, Vector4T* param_3) {
        PlaneT* pPVar1;
        undefined8 local_108[2];
        BoundingSphereBuilder local_f8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_f8) graphicutils::BoundingSphereBuilder();
        local_f8.BeginPass1();
        local_108[0] = param_2->GetXYZ();
        local_f8.AddPointPass1(local_108);
        local_108[0] = param_3->GetXYZ();
        local_f8.AddPointPass1(local_108);
        local_f8.BeginPass2();
        local_108[0] = param_2->GetXYZ();
        local_f8.AddPointPass2(local_108);
        local_108[0] = param_3->GetXYZ();
        local_f8.AddPointPass2(local_108);
        local_f8.End();
        pPVar1 = (PlaneT*)local_f8.y();
        math::PlaneT<float>::operator=((PlaneT<float>*)param_1, pPVar1);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics
