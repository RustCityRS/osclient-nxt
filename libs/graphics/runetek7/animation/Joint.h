// libs/graphics/runetek7/animation/Joint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class Joint {
    public:
        auto GetWorldBindInverse() const;
        Joint(PacketT<Array<unsigned char>>& arg1, short arg2);
        void CalculateWorldBind();
        Joint* operator=(Joint&& joint);
        void SetParentJointID(short arg1);
        int GetParentJointID() const;
        void SetParentJoint(Joint* joint);
        auto GetWorldBind() const;
        Joint* GetParentJoint() const;
        uint64_t GetLocalBindTranslate() const;
        auto GetLocalBindInverse() const;
        uint64_t GetLocalBindRotate() const;
        uint64_t GetLocalBindScale() const;
        Joint();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        ReturnValue field_64;
        ReturnValue field_72;
        ReturnValue field_80;
        ReturnValue field_88;
        ReturnValue field_96;
        ReturnValue field_104;
        ReturnValue field_112;
        ReturnValue field_120;
        ReturnValue field_128;
        ReturnValue field_136;
        ReturnValue field_144;
        ReturnValue field_152;
        ReturnValue field_160;
        ReturnValue field_168;
        ReturnValue field_176;
        ReturnValue field_184;
        ReturnValue field_192;
        ReturnValue field_200;
        ReturnValue field_208;
        ReturnValue field_216;
        ReturnValue field_224;
        ReturnValue field_232;
        ReturnValue field_240;
        ReturnValue field_248;
        uint64_t field_256;
        uint32_t field_264;
        uint8_t _unknown_268[4];
        unsigned int field_272;
        uint8_t _unknown_276[4];
        uint64_t m_localBindTranslate;
        uint8_t _unknown_288[4];
        uint64_t m_localBindScale;
        uint8_t _unknown_300[4];
        uint8_t* m_pParentJoint;
        short m_parentJointID;
        uint8_t _unknown_314[6];
    };

    // 0x104232ee0, set at startup by ___cxx_global_var_init
    math::Matrix44T<float> MAYA_ANIM_INVERT_MATRIX;

    // 0x104232f20, set at startup by ___cxx_global_var_init.1
    math::ColourHSL WORLD_ORTHOGONAL = ColourHSL(-1.5707964, -1.5707964, 0.0);

    // 0x1000591d0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10094de40
    auto Joint::GetWorldBindInverse() const {
        auto result;

        ReturnValue RVar1 = *(ReturnValue*)field_192;
        ReturnValue RVar2 = *(ReturnValue*)field_200;
        ReturnValue RVar3 = *(ReturnValue*)field_208;
        ReturnValue RVar4 = *(ReturnValue*)field_216;
        ReturnValue RVar5 = *(ReturnValue*)field_224;
        ReturnValue RVar6 = *(ReturnValue*)field_232;
        ReturnValue RVar7 = *(ReturnValue*)field_248;
        &result[6] = *(ReturnValue*)field_240;
        &result[7] = RVar7;
        &result[4] = RVar5;
        &result[5] = RVar6;
        &result[2] = RVar3;
        &result[3] = RVar4;
        result = RVar1;
        &result[1] = RVar2;
        return result;
    }

    // 0x100977ae0
    Joint* Joint::operator=(Joint&& joint) {
        *this = joint;
        *field_64 = joint.field_64;
        *field_128 = joint.field_128;
        *field_192 = joint.field_192;
        field_256.SetXYZ(joint.field_256);
        field_268.SetXYZ(joint.field_268);
        m_localBindTranslate.SetXYZ(joint.m_localBindTranslate);
        m_localBindScale.SetXYZ(joint.m_localBindScale);
        m_pParentJoint = joint.m_pParentJoint;
        m_parentJointID = joint.m_parentJointID;
        return this;
    }

    // 0x100977e60
    void Joint::SetParentJointID(short arg1) {
        m_parentJointID = arg1;
    }

    // 0x100977f30
    int Joint::GetParentJointID() const {
        return (int)m_parentJointID;
    }

    // 0x100978350
    void Joint::SetParentJoint(Joint* joint) {
        m_pParentJoint = (uint8_t*)joint;
    }

    // 0x100978670
    auto Joint::GetWorldBind() const {
        auto result;

        ReturnValue RVar1 = *(ReturnValue*)field_128;
        ReturnValue RVar2 = *(ReturnValue*)field_136;
        ReturnValue RVar3 = *(ReturnValue*)field_144;
        ReturnValue RVar4 = *(ReturnValue*)field_152;
        ReturnValue RVar5 = *(ReturnValue*)field_160;
        ReturnValue RVar6 = *(ReturnValue*)field_168;
        ReturnValue RVar7 = *(ReturnValue*)field_184;
        &result[6] = *(ReturnValue*)field_176;
        &result[7] = RVar7;
        &result[4] = RVar5;
        &result[5] = RVar6;
        &result[2] = RVar3;
        &result[3] = RVar4;
        result = RVar1;
        &result[1] = RVar2;
        return result;
    }

    // 0x1009786b0
    Joint* Joint::GetParentJoint() const {
        return (Joint*)m_pParentJoint;
    }

    // 0x100979e40
    uint64_t Joint::GetLocalBindTranslate() const {
        return m_localBindTranslate;
    }

    // 0x100979e70
    auto Joint::GetLocalBindInverse() const {
        auto result;

        ReturnValue RVar1 = *(ReturnValue*)field_64;
        ReturnValue RVar2 = *(ReturnValue*)field_72;
        ReturnValue RVar3 = *(ReturnValue*)field_80;
        ReturnValue RVar4 = *(ReturnValue*)field_88;
        ReturnValue RVar5 = *(ReturnValue*)field_96;
        ReturnValue RVar6 = *(ReturnValue*)field_104;
        ReturnValue RVar7 = *(ReturnValue*)field_120;
        &result[6] = *(ReturnValue*)field_112;
        &result[7] = RVar7;
        &result[4] = RVar5;
        &result[5] = RVar6;
        &result[2] = RVar3;
        &result[3] = RVar4;
        result = RVar1;
        &result[1] = RVar2;
        return result;
    }

    // 0x10097a0b0
    uint64_t Joint::GetLocalBindRotate() const {
        return *(uint64_t*)&field_268;
    }

    // 0x100984f00
    uint64_t Joint::GetLocalBindScale() const {
        return m_localBindScale;
    }

    // 0x100994780
    Joint::Joint() {
        uint8_t* puVar8 = PTR_ZERO_100ee6728;
        uint64_t uVar1 = *(uint64_t*)PTR_ZERO_100ee6728;
        uint64_t uVar2 = *(uint64_t*)(PTR_ZERO_100ee6728 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_ZERO_100ee6728 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_ZERO_100ee6728 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_ZERO_100ee6728 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_ZERO_100ee6728 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_ZERO_100ee6728 + 56);
        field_48 = *(uint64_t*)(PTR_ZERO_100ee6728 + 48);
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        uVar1 = *(uint64_t*)puVar8;
        uVar2 = *(uint64_t*)(puVar8 + 8);
        uVar3 = *(uint64_t*)(puVar8 + 16);
        uVar4 = *(uint64_t*)(puVar8 + 24);
        uVar5 = *(uint64_t*)(puVar8 + 32);
        uVar6 = *(uint64_t*)(puVar8 + 40);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        *(uint64_t*)field_112 = *(uint64_t*)(puVar8 + 48);
        *(uint64_t*)field_120 = uVar7;
        *(uint64_t*)field_96 = uVar5;
        *(uint64_t*)field_104 = uVar6;
        *(uint64_t*)field_80 = uVar3;
        *(uint64_t*)field_88 = uVar4;
        *(uint64_t*)field_64 = uVar1;
        *(uint64_t*)field_72 = uVar2;
        uVar1 = *(uint64_t*)(puVar8 + 8);
        uVar2 = *(uint64_t*)(puVar8 + 16);
        uVar3 = *(uint64_t*)(puVar8 + 24);
        uVar4 = *(uint64_t*)(puVar8 + 32);
        uVar5 = *(uint64_t*)(puVar8 + 40);
        uVar6 = *(uint64_t*)(puVar8 + 48);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        *(uint64_t*)field_128 = *(uint64_t*)puVar8;
        *(uint64_t*)field_136 = uVar1;
        *(uint64_t*)field_144 = uVar2;
        *(uint64_t*)field_152 = uVar3;
        *(uint64_t*)field_160 = uVar4;
        *(uint64_t*)field_168 = uVar5;
        *(uint64_t*)field_176 = uVar6;
        *(uint64_t*)field_184 = uVar7;
        uVar1 = *(uint64_t*)(puVar8 + 8);
        uVar2 = *(uint64_t*)(puVar8 + 16);
        uVar3 = *(uint64_t*)(puVar8 + 24);
        uVar4 = *(uint64_t*)(puVar8 + 32);
        uVar5 = *(uint64_t*)(puVar8 + 40);
        uVar6 = *(uint64_t*)(puVar8 + 48);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        *(uint64_t*)field_192 = *(uint64_t*)puVar8;
        *(uint64_t*)field_200 = uVar1;
        *(uint64_t*)field_208 = uVar2;
        *(uint64_t*)field_216 = uVar3;
        *(uint64_t*)field_224 = uVar4;
        *(uint64_t*)field_232 = uVar5;
        *(uint64_t*)field_240 = uVar6;
        *(uint64_t*)field_248 = uVar7;
        puVar8 = PTR_ZERO_100ee66e8;
        field_256 = *(uint64_t*)PTR_ZERO_100ee66e8;
        field_264 = *(uint32_t*)(puVar8 + 8);
        new (&field_268) math::Vector3T();
        new (&m_localBindTranslate) math::Vector3T();
        new (&m_localBindScale) math::Vector3T();
        m_pParentJoint = nullptr;
        m_parentJointID = -1;
    }

} // namespace jag::graphics
