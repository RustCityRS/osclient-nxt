// libs/graphics/runetek7/animation/Joint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class Joint {
    public:
        GetWorldBindInverse() const;
        Joint(PacketT<Array<unsigned char, eastl::allocator>>&, short);
        void CalculateWorldBind();
        Joint* operator=(Joint&&);
        void SetParentJointID(short);
        int GetParentJointID() const;
        void SetParentJoint(Joint*);
        GetWorldBind() const;
        GetParentJoint() const;
        GetLocalBindTranslate() const;
        GetLocalBindInverse() const;
        GetLocalBindRotate() const;
        GetLocalBindScale() const;
        Joint();

        // data members, from how the methods use this: 320 bytes
        undefined8 field_0;   // offset 0
        undefined8 field_8;   // offset 8
        undefined8 field_16;  // offset 16
        undefined8 field_24;  // offset 24
        undefined8 field_32;  // offset 32
        undefined8 field_40;  // offset 40
        undefined8 field_48;  // offset 48
        undefined8 field_56;  // offset 56
        undefined8 field_64;  // offset 64
        undefined8 field_72;  // offset 72
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined8 field_224; // offset 224
        undefined8 field_232; // offset 232
        undefined8 field_240; // offset 240
        undefined8 field_248; // offset 248
        undefined8 field_256; // offset 256
        undefined4 field_264; // offset 264
        char _unknown_268[4];
        uint field_272; // offset 272
        char _unknown_276[4];
        undefined8 m_localBindTranslate; // offset 280
        char _unknown_288[4];
        undefined8 m_localBindScale; // offset 292
        char _unknown_300[4];
        undefined* m_pParentJoint; // offset 304
        short m_parentJointID;     // offset 312
        char _unknown_314[6];
    };

    // 0x104232ee0, 64 bytes, __bss; set at startup by ___cxx_global_var_init
    math::Matrix44T<float> MAYA_ANIM_INVERT_MATRIX;

    // 0x104232f20, 16 bytes, __bss; set at startup by ___cxx_global_var_init.1
    math::ColourHSL WORLD_ORTHOGONAL = ColourHSL(-1.5707964, -1.5707964, 0.0);

    // 0x1000591d0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100059230, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10094de40, 64 bytes, inline, placed by class name
    // Joint::GetWorldBindInverse() const
    Joint* Joint::GetWorldBindInverse() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long in_RSI;

        uVar1 = *(undefined8*)(in_RSI + 192);
        uVar2 = *(undefined8*)(in_RSI + 200);
        uVar3 = *(undefined8*)(in_RSI + 208);
        uVar4 = *(undefined8*)(in_RSI + 216);
        uVar5 = *(undefined8*)(in_RSI + 224);
        uVar6 = *(undefined8*)(in_RSI + 232);
        uVar7 = *(undefined8*)(in_RSI + 248);
        field_48 = *(undefined8*)(in_RSI + 240);
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        return this;
    }

    // 0x100977ae0, 192 bytes, inline, placed by class name
    // Joint::operator=(Joint&&)
    /* Joint::TEMPNAMEPLACEHOLDERVALUE(Joint&&) */

    Joint* Joint::operator=(Joint* param_1) {
        math::Matrix44T<float>::operator=((Matrix44T<float>*)this, (Matrix44T*)param_1);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_64, (Matrix44T*)&param_1->field_64);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_128, (Matrix44T*)&param_1->field_128);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_192, (Matrix44T*)&param_1->field_192);
        (&field_256, (Vector3T*)&param_1->field_256)->SetXYZ();
        (&field_268, (Vector3T*)&param_1->field_268)->SetXYZ();
        (&m_localBindTranslate, (Vector3T*)&param_1->m_localBindTranslate)->SetXYZ();
        (&m_localBindScale, (Vector3T*)&param_1->m_localBindScale)->SetXYZ();
        m_pParentJoint = param_1->m_pParentJoint;
        m_parentJointID = param_1->m_parentJointID;
        return this;
    }

    // 0x100977e60, 16 bytes, inline, placed by class name
    // Joint::SetParentJointID(short)
    void Joint::SetParentJointID(short param_1) {
        m_parentJointID = param_1;
    }

    // 0x100977f30, 16 bytes, inline, placed by class name
    // Joint::GetParentJointID() const
    int Joint::GetParentJointID() {
        return (int)m_parentJointID;
    }

    // 0x100978350, 16 bytes, inline, placed by class name
    // Joint::SetParentJoint(Joint*)
    void Joint::SetParentJoint(Joint* param_1) {
        m_pParentJoint = (undefined*)param_1;
    }

    // 0x100978670, 64 bytes, inline, placed by class name
    // Joint::GetWorldBind() const
    Joint* Joint::GetWorldBind() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long in_RSI;

        uVar1 = *(undefined8*)(in_RSI + 128);
        uVar2 = *(undefined8*)(in_RSI + 136);
        uVar3 = *(undefined8*)(in_RSI + 144);
        uVar4 = *(undefined8*)(in_RSI + 152);
        uVar5 = *(undefined8*)(in_RSI + 160);
        uVar6 = *(undefined8*)(in_RSI + 168);
        uVar7 = *(undefined8*)(in_RSI + 184);
        field_48 = *(undefined8*)(in_RSI + 176);
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        return this;
    }

    // 0x1009786b0, 16 bytes, inline, placed by class name
    // Joint::GetParentJoint() const
    undefined* Joint::GetParentJoint() {
        return m_pParentJoint;
    }

    // 0x100979e40, 32 bytes, inline, placed by class name
    // Joint::GetLocalBindTranslate() const
    undefined8 Joint::GetLocalBindTranslate() {
        return m_localBindTranslate;
    }

    // 0x100979e70, 48 bytes, inline, placed by class name
    // Joint::GetLocalBindInverse() const
    Joint* Joint::GetLocalBindInverse() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long in_RSI;

        uVar1 = *(undefined8*)(in_RSI + 64);
        uVar2 = *(undefined8*)(in_RSI + 72);
        uVar3 = *(undefined8*)(in_RSI + 80);
        uVar4 = *(undefined8*)(in_RSI + 88);
        uVar5 = *(undefined8*)(in_RSI + 96);
        uVar6 = *(undefined8*)(in_RSI + 104);
        uVar7 = *(undefined8*)(in_RSI + 120);
        field_48 = *(undefined8*)(in_RSI + 112);
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        return this;
    }

    // 0x10097a0b0, 32 bytes, inline, placed by class name
    // Joint::GetLocalBindRotate() const
    undefined8 Joint::GetLocalBindRotate() {
        return *(undefined8*)&field_268;
    }

    // 0x100984f00, 32 bytes, inline, placed by class name
    // Joint::GetLocalBindScale() const
    undefined8 Joint::GetLocalBindScale() {
        return m_localBindScale;
    }

    // 0x100994770, 16 bytes, complete-object constructor, inline, placed by class name
    // Joint::Joint(): jumps straight to the base-object constructor

    // 0x100994780, 256 bytes, base-object constructor, inline, placed by class name
    // Joint::Joint()
    void Joint::Joint() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined* puVar8;

        puVar8 = PTR_ZERO_100ee6728;
        uVar1 = *(undefined8*)PTR_ZERO_100ee6728;
        uVar2 = *(undefined8*)(PTR_ZERO_100ee6728 + 8);
        uVar3 = *(undefined8*)(PTR_ZERO_100ee6728 + 16);
        uVar4 = *(undefined8*)(PTR_ZERO_100ee6728 + 24);
        uVar5 = *(undefined8*)(PTR_ZERO_100ee6728 + 32);
        uVar6 = *(undefined8*)(PTR_ZERO_100ee6728 + 40);
        uVar7 = *(undefined8*)(PTR_ZERO_100ee6728 + 56);
        field_48 = *(undefined8*)(PTR_ZERO_100ee6728 + 48);
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        uVar1 = *(undefined8*)puVar8;
        uVar2 = *(undefined8*)(puVar8 + 8);
        uVar3 = *(undefined8*)(puVar8 + 16);
        uVar4 = *(undefined8*)(puVar8 + 24);
        uVar5 = *(undefined8*)(puVar8 + 32);
        uVar6 = *(undefined8*)(puVar8 + 40);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_112 = *(undefined8*)(puVar8 + 48);
        field_120 = uVar7;
        field_96 = uVar5;
        field_104 = uVar6;
        field_80 = uVar3;
        field_88 = uVar4;
        field_64 = uVar1;
        field_72 = uVar2;
        uVar1 = *(undefined8*)(puVar8 + 8);
        uVar2 = *(undefined8*)(puVar8 + 16);
        uVar3 = *(undefined8*)(puVar8 + 24);
        uVar4 = *(undefined8*)(puVar8 + 32);
        uVar5 = *(undefined8*)(puVar8 + 40);
        uVar6 = *(undefined8*)(puVar8 + 48);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_128 = *(undefined8*)puVar8;
        field_136 = uVar1;
        field_144 = uVar2;
        field_152 = uVar3;
        field_160 = uVar4;
        field_168 = uVar5;
        field_176 = uVar6;
        field_184 = uVar7;
        uVar1 = *(undefined8*)(puVar8 + 8);
        uVar2 = *(undefined8*)(puVar8 + 16);
        uVar3 = *(undefined8*)(puVar8 + 24);
        uVar4 = *(undefined8*)(puVar8 + 32);
        uVar5 = *(undefined8*)(puVar8 + 40);
        uVar6 = *(undefined8*)(puVar8 + 48);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_192 = *(undefined8*)puVar8;
        field_200 = uVar1;
        field_208 = uVar2;
        field_216 = uVar3;
        field_224 = uVar4;
        field_232 = uVar5;
        field_240 = uVar6;
        field_248 = uVar7;
        puVar8 = PTR_ZERO_100ee66e8;
        field_256 = *(undefined8*)PTR_ZERO_100ee66e8;
        field_264 = *(undefined4*)(puVar8 + 8);
        new (&field_268) math::Vector3T<int>();
        new (&m_localBindTranslate) math::Vector3T<int>();
        new (&m_localBindScale) math::Vector3T<int>();
        m_pParentJoint = (undefined*)0;
        m_parentJointID = -1;
    }

} // namespace jag::graphics
