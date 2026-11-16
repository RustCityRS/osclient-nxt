// libs/graphics/runetek7/model/particles/ModelParticleSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ModelParticleSource {
    public:
        class VertexBonePos;
        // virtual methods in vtable order
        virtual void Transform(math::Matrix44T<float> const&);
        virtual void Translate(math::Vector3T<float> const&);
        virtual void Rotate(math::QuaternionT<float> const&, bool);
        virtual void Rotate90(Rotation90, bool);
        virtual ~ModelParticleSource();
        GetVertex3() const;
        GetVertex1() const;
        uint GetTemplateID() const;
        GetSourceModelExternalID() const;
        GetVertex2() const;
        void SetSourceModelExternalID(int);
        void Scale(math::Vector3T<float> const&);
        void MirrorZ();
        void HillChange(graphics::HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        LocationHelpers::LocationHillChangeData const&);
        ModelParticleSource();
        ModelParticleSource(unsigned int, VertexBonePos const&, VertexBonePos const&, VertexBonePos const&);
        ModelParticleSource(unsigned int, VertexBonePos const&);
        ModelParticleSource(ModelParticleSource const&);

        // data members, from how the methods use this: 84 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        uint m_templateID;    // offset 12
        undefined8 m_vertex1; // offset 16
        uint field_24;        // offset 24
        char _unknown_28[4];
        undefined4 field_32;  // offset 32
        undefined8 m_vertex2; // offset 36
        uint field_44;        // offset 44
        char _unknown_48[4];
        undefined4 field_52;  // offset 52
        undefined8 m_vertex3; // offset 56
        uint field_64;        // offset 64
        char _unknown_68[4];
        undefined4 field_72;         // offset 72
        int m_sourceModelExternalID; // offset 76
        char _unknown_80[4];
    };

    class ModelParticleSource::VertexBonePos {
    public:
        VertexBonePos(math::Vector3T<float> const&, int, int);
        VertexBonePos();

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        int field_12;       // offset 12
        int field_16;       // offset 16
        char _unknown_20[4];
    };

    // 0x100822110, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ModelParticleSource::VertexBonePos::VertexBonePos(): jumps straight to the base-object constructor

    // 0x10082e830, 32 bytes, base-object constructor, inline, placed by class name
    // ModelParticleSource::VertexBonePos::VertexBonePos()
    void ModelParticleSource::VertexBonePos::VertexBonePos() {
        new (this) math::Vector3T<int>();
        field_12 = 0;
        field_16 = 0;
    }

} // namespace jag::graphics
