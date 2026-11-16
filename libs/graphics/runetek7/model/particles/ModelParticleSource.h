// libs/graphics/runetek7/model/particles/ModelParticleSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ModelParticleSource {
    public:
        class VertexBonePos;
        // virtual methods in vtable order
        virtual void Transform(const math::Matrix44T<float>& matrix44);
        virtual void Translate(const math::Vector3T<float>& vector3);
        virtual void Rotate(const math::QuaternionT<float>& quaternion, bool arg2);
        virtual void Rotate90(Rotation90 rotation90, bool arg2);
        virtual ~ModelParticleSource();
        uint8_t* GetVertex3() const;
        uint8_t* GetVertex1() const;
        unsigned int GetTemplateID() const;
        unsigned int GetSourceModelExternalID() const;
        uint64_t* GetVertex2() const;
        void SetSourceModelExternalID(int arg1);
        void Scale(const math::Vector3T<float>& vector3);
        void MirrorZ();
        void HillChange(graphics::HillChange arg1, int arg2, const Array<Array<int>>& arg3,
                        const Array<Array<int>>& arg4, const LocationHelpers::LocationHillChangeData& arg5);
        ModelParticleSource();
        ModelParticleSource(unsigned int arg1, const VertexBonePos& vertexBonePos1, const VertexBonePos& vertexBonePos2,
                            const VertexBonePos& vertexBonePos3);
        ModelParticleSource(unsigned int arg1, const VertexBonePos& vertexBonePos);
        ModelParticleSource(const ModelParticleSource& modelParticleSource);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        unsigned int m_templateID;
        uint64_t m_vertex1;
        unsigned int field_24;
        uint8_t _unknown_28[4];
        uint32_t field_32;
        uint64_t m_vertex2;
        unsigned int field_44;
        uint8_t _unknown_48[4];
        uint32_t field_52;
        uint64_t m_vertex3;
        unsigned int field_64;
        uint8_t _unknown_68[4];
        uint32_t field_72;
        int m_sourceModelExternalID;
        uint8_t _unknown_80[4];
    };

    class ModelParticleSource::VertexBonePos {
    public:
        VertexBonePos(const math::Vector3T<float>& coordGrid, int arg2, int arg3);
        VertexBonePos();

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[4];
    };

    // 0x10082e830
    ModelParticleSource::VertexBonePos::VertexBonePos() : math::Vector3T(), field_12(0), field_16(0) {}

} // namespace jag::graphics
