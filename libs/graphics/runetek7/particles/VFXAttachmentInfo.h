// libs/graphics/runetek7/particles/VFXAttachmentInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class VFXAttachmentInfo {
    public:
        class RawData;
        class VertexBonePos;
        unsigned int GetTemplateID() const;
        Vector2T<int>* GetBonePositions() const;
        void SetSourceModelExternalID(int arg1);
        unsigned int GetSourceModelExternalID() const;
        ~VFXAttachmentInfo();
        uint8_t* GetWorldTransform() const;
        VFXAttachmentInfo(const RawData& rawData, const math::Matrix44T<float>& matrix44);
        void Update(const RawData& rawData, const math::Matrix44T<float>& matrix44);
        VFXAttachmentInfo(unsigned int arg1, const VertexBonePos& vertexBonePos1, const VertexBonePos& vertexBonePos2,
                          const VertexBonePos& vertexBonePos3);
        VFXAttachmentInfo(unsigned int arg1, const VertexBonePos& vertexBonePos);
        bool Update(AnimationStateProvider* animationStateProvider, const math::Matrix44T<float>& matrix44);
        void Transform(const math::Matrix44T<float>& matrix44);
        void Translate(const math::Vector3T<float>& vector3);
        void Rotate(const math::QuaternionT<float>& quaternion);
        void Rotate90(Rotation90 rotation90);
        void Scale(const math::Vector3T<float>& vector3);
        void MirrorZ();
        void HillChange(graphics::HillChange arg1, int arg2, const Array<Array<int>>& arg3,
                        const Array<Array<int>>& arg4, const LocationHelpers::LocationHillChangeData& arg5);
        VFXAttachmentInfo(const VFXAttachmentInfo& vfxAttachmentInfo);

    private:
        unsigned int m_templateID;
        uint64_t field_4;
        uint64_t field_12;
        uint32_t field_20;
        uint64_t field_24;
        uint64_t field_32;
        uint32_t field_40;
        uint64_t field_44;
        uint64_t field_52;
        uint32_t field_60;
        unsigned int m_sourceModelExternalID;
        uint8_t _unknown_68[92];
        uint64_t m_worldTransform;
        uint64_t field_168;
        uint64_t field_176;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
        uint64_t field_208;
        uint64_t field_216;
    };

    class VFXAttachmentInfo::RawData {
    public:
        RawData();
        void Decode(PacketT<Array<unsigned char>>& arg1);

    private:
        uint16_t field_0;
        uint8_t _unknown_2[86];
    };

    class VFXAttachmentInfo::VertexBonePos {
    public:
        VertexBonePos();
        VertexBonePos(const math::Vector3T<float>& vector3, int arg2, int arg3);

    private:
        uint64_t field_0;
        uint32_t field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[4];
    };

    // 0x100439ef0
    VFXAttachmentInfo::~VFXAttachmentInfo() {
        field_112.~vector_map();
        field_72.~vector_map();
    }

    // 0x100533c50
    VFXAttachmentInfo::RawData::RawData() {
        new (&field_16) math::Matrix44T<float>();
        new (&field_80) eastl::bitset();
    }

    // 0x1008455d0
    VFXAttachmentInfo::VFXAttachmentInfo(const VFXAttachmentInfo& vfxAttachmentInfo)
        : m_sourceModelExternalID(vfxAttachmentInfo.m_sourceModelExternalID) {
        uint64_t uVar1 = *(uint64_t*)vfxAttachmentInfo;
        uint64_t uVar2 = *(uint64_t*)((long)&vfxAttachmentInfo.field_4 + 4);
        uint64_t uVar3 = *(uint64_t*)((long)&vfxAttachmentInfo.field_12 + 4);
        uint64_t uVar4 = vfxAttachmentInfo.field_24;
        uint64_t uVar5 = vfxAttachmentInfo.field_32;
        uint64_t uVar6 = *(uint64_t*)&vfxAttachmentInfo.field_40;
        uint64_t uVar7 = *(uint64_t*)((long)&vfxAttachmentInfo.field_52 + 4);
        *(uint64_t*)((long)&field_44 + 4) = *(uint64_t*)((long)&vfxAttachmentInfo.field_44 + 4);
        *(uint64_t*)((long)&field_52 + 4) = uVar7;
        field_32 = uVar5;
        *(uint64_t*)&field_40 = uVar6;
        *(uint64_t*)((long)&field_12 + 4) = uVar3;
        field_24 = uVar4;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)((long)&field_4 + 4) = uVar2;
        new (&field_72) eastl::vector_map<unsigned short, unsigned short>(vfxAttachmentInfo.field_72);
        new (&field_112) eastl::vector_map<unsigned short, unsigned short>(vfxAttachmentInfo.field_112);
        uVar1 = vfxAttachmentInfo.m_worldTransform;
        uVar2 = vfxAttachmentInfo.field_168;
        uVar3 = vfxAttachmentInfo.field_176;
        uVar4 = vfxAttachmentInfo.field_184;
        uVar5 = vfxAttachmentInfo.field_192;
        uVar6 = vfxAttachmentInfo.field_200;
        uVar7 = vfxAttachmentInfo.field_216;
        field_208 = vfxAttachmentInfo.field_208;
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        m_worldTransform = uVar1;
        field_168 = uVar2;
    }

} // namespace jag::graphics
