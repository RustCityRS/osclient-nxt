// libs/graphics/runetek7/particles/VFXAttachmentInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class VFXAttachmentInfo {
    public:
        class RawData;
        class VertexBonePos;
        GetTemplateID() const;
        GetBonePositions() const;
        SetSourceModelExternalID(int);
        GetSourceModelExternalID() const;
        ~VFXAttachmentInfo();
        GetWorldTransform() const;
        VFXAttachmentInfo(RawData const&, math::Matrix44T<float> const&);
        void Update(RawData const&, math::Matrix44T<float> const&);
        VFXAttachmentInfo(unsigned int, VertexBonePos const&, VertexBonePos const&, VertexBonePos const&);
        VFXAttachmentInfo(unsigned int, VertexBonePos const&);
        bool Update(AnimationStateProvider*, math::Matrix44T<float> const&);
        void Transform(math::Matrix44T<float> const&);
        void Translate(math::Vector3T<float> const&);
        void Rotate(math::QuaternionT<float> const&);
        void Rotate90(Rotation90);
        void Scale(math::Vector3T<float> const&);
        void MirrorZ();
        void HillChange(graphics::HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        LocationHelpers::LocationHillChangeData const&);
        VFXAttachmentInfo(VFXAttachmentInfo const&);

        // data members, from how the methods use this: 224 bytes
        uint field_0;        // offset 0
        undefined8 field_4;  // offset 4
        undefined8 field_12; // offset 12
        undefined4 field_20; // offset 20
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined4 field_40; // offset 40
        undefined8 field_44; // offset 44
        undefined8 field_52; // offset 52
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        char _unknown_68[92];
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
    };

    class VFXAttachmentInfo::RawData {
    public:
        RawData();
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 88 bytes
        undefined2 field_0; // offset 0
        char _unknown_2[86];
    };

    class VFXAttachmentInfo::VertexBonePos {
    public:
        VertexBonePos();
        VertexBonePos(math::Vector3T<float> const&, int, int);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        int field_12;       // offset 12
        int field_16;       // offset 16
        char _unknown_20[4];
    };

    // 0x100439ee0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // VFXAttachmentInfo::~VFXAttachmentInfo(): jumps straight to the base-object destructor

    // 0x100439ef0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // VFXAttachmentInfo::~VFXAttachmentInfo()
    void VFXAttachmentInfo::~VFXAttachmentInfo() {
        (&field_112)->~vector_map();
        (&field_72)->~vector_map();
    }

    // 0x100533c40, 16 bytes, complete-object constructor, inline, placed by class name
    // VFXAttachmentInfo::RawData::RawData(): jumps straight to the base-object constructor

    // 0x100533c50, 48 bytes, base-object constructor, inline, placed by class name
    // VFXAttachmentInfo::RawData::RawData()
    void VFXAttachmentInfo::RawData::RawData() {
        new (&field_16) math::Matrix44T<float>();
        new (&field_80) eastl::bitset<4ul, unsigned char>();
    }

    // 0x1008455c0, 16 bytes, complete-object constructor, inline, placed by class name
    // VFXAttachmentInfo::VFXAttachmentInfo(VFXAttachmentInfo const&): jumps straight to the base-object constructor

    // 0x1008455d0, 176 bytes, base-object constructor, inline, placed by class name
    // VFXAttachmentInfo::VFXAttachmentInfo(VFXAttachmentInfo const&)
    void VFXAttachmentInfo::VFXAttachmentInfo(VFXAttachmentInfo* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        field_64 = param_1->field_64;
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)&param_1->field_4 + 4);
        uVar3 = *(undefined8*)((long)&param_1->field_12 + 4);
        uVar4 = param_1->field_24;
        uVar5 = param_1->field_32;
        uVar6 = *(undefined8*)&param_1->field_40;
        uVar7 = *(undefined8*)((long)&param_1->field_52 + 4);
        *(undefined8*)((long)&field_44 + 4) = *(undefined8*)((long)&param_1->field_44 + 4);
        *(undefined8*)((long)&field_52 + 4) = uVar7;
        field_32 = uVar5;
        *(undefined8*)&field_40 = uVar6;
        *(undefined8*)((long)&field_12 + 4) = uVar3;
        field_24 = uVar4;
        *(undefined8*)this = uVar1;
        *(undefined8*)((long)&field_4 + 4) = uVar2;
        new (&field_72, (vector_map*)&param_1->field_72)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_112, (vector_map*)&param_1->field_112)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        uVar1 = param_1->field_160;
        uVar2 = param_1->field_168;
        uVar3 = param_1->field_176;
        uVar4 = param_1->field_184;
        uVar5 = param_1->field_192;
        uVar6 = param_1->field_200;
        uVar7 = param_1->field_216;
        field_208 = param_1->field_208;
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        field_160 = uVar1;
        field_168 = uVar2;
    }

} // namespace jag::graphics
