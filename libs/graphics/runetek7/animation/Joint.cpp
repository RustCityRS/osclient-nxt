// libs/graphics/runetek7/animation/Joint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Joint.h"

namespace jag::graphics {
    // 0x10094e3c0, 640 bytes, base-object constructor, placed by class name and debug map
    // Joint::Joint(PacketT<Array<unsigned char, eastl::allocator> >&, short)
    void Joint::Joint(PacketT* param_1, short param_2) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined* puVar8;
        Matrix44T<float>* this_01;
        char cVar9;
        undefined4* puVar10;
        ulong uVar11;
        float fVar12;
        float fVar13;
        Matrix44T local_d8;
        ColourHSL local_98[4];
        Vector4T<float>* local_58;
        Vector4T<float>* local_50;
        Matrix44T<float>* local_48;
        Vector4T<float>* local_40;
        float local_38;
        float local_34;

        new (this) math::Matrix44T<float>();
        puVar8 = PTR_ZERO_100ee6728;
        local_48 = (Matrix44T<float>*)&field_64;
        uVar1 = *(undefined8*)PTR_ZERO_100ee6728;
        uVar2 = *(undefined8*)(PTR_ZERO_100ee6728 + 8);
        uVar3 = *(undefined8*)(PTR_ZERO_100ee6728 + 16);
        uVar4 = *(undefined8*)(PTR_ZERO_100ee6728 + 24);
        uVar5 = *(undefined8*)(PTR_ZERO_100ee6728 + 32);
        uVar6 = *(undefined8*)(PTR_ZERO_100ee6728 + 40);
        uVar7 = *(undefined8*)(PTR_ZERO_100ee6728 + 56);
        field_112 = *(undefined8*)(PTR_ZERO_100ee6728 + 48);
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
        local_40 = (Vector4T<float>*)&field_256;
        new (local_40) math::Vector3T<int>();
        this_00 = &field_268;
        new (this_00) math::Vector3T<int>();
        local_50 = (Vector4T<float>*)&m_localBindTranslate;
        new (local_50) math::Vector3T<int>();
        local_58 = (Vector4T<float>*)&m_localBindScale;
        new (local_58) math::Vector3T<int>();
        m_pParentJoint = (undefined*)0;
        m_parentJointID = param_2;
        uVar11 = 0;
        do {
            local_34 = (float)param_1->gFloat();
            puVar10 = (undefined4*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)local_98, uVar11);
            *puVar10 = local_34;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 16);
        new (&local_d8) math::Matrix44T<float>(local_98);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)this, &local_d8);
        local_34 = (float)param_1->gFloat();
        local_38 = (float)param_1->gFloat();
        fVar12 = (float)param_1->gFloat();
        fVar13 = local_38;
        math::ColourHSL::ColourHSL(local_98, local_34, local_38, fVar12);
        math::Vector4T<float>::SetXYZ(local_40, (Vector3T*)local_98);
        this_01 = local_48;
        math::Matrix44T<float>::operator=(local_48, (Matrix44T*)this);
        this_01->Invert(0);
        local_98[0]._0_8_ = this_01->ToEulerAnglesXYZ();
        local_98[0].field_8 = fVar13;
        this_00->SetXYZ(local_98);
        cVar9 = this_00->SloppyCompare((Vector3T*)&graphics::WORLD_ORTHOGONAL, 0.001);
        if (cVar9 != '\0') {
            field_272 = field_272 ^ 2147483648;
        }
        local_98[0]._0_8_ = (&field_48)->GetXYZ();
        local_98[0].field_8 = fVar13;
        math::Vector4T<float>::SetXYZ(local_50, (Vector3T*)local_98);
        local_98[0]._0_8_ = ExtractScale();
        local_98[0].field_8 = fVar13;
        math::Vector4T<float>::SetXYZ(local_58, (Vector3T*)local_98);
    }

    // 0x10094e650, 16 bytes, complete-object constructor, placed by class name and debug map
    // Joint::Joint(PacketT<Array<unsigned char, eastl::allocator> >&, short): jumps straight to the base-object constructor

    // 0x10094e660, 192 bytes, placed by class name and debug map
    // Joint::CalculateWorldBind()
    void Joint::CalculateWorldBind() {
        undefined8* this_00;
        undefined1 local_68[72];

        this_00 = &field_128;
        if (math::operator==((Matrix44T*)this_00, (Matrix44T*)PTR_ZERO_100ee6728)) {
            math::Matrix44T<float>::operator=((Matrix44T<float>*)this_00, (Matrix44T*)this);
            if (m_parentJointID == -1) {
                math::operator*((math*)local_68, (Matrix44T*)this_00, (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
                math::Matrix44T<float>::operator=((Matrix44T<float>*)this_00, (Matrix44T*)local_68);
            } else {
                CalculateWorldBind((Joint*)m_pParentJoint);
                GetWorldBind((Joint*)local_68);
                math::Matrix44T<float>::operator*=((Matrix44T<float>*)this_00, (Matrix44T*)local_68);
            }
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_192, (Matrix44T*)this_00);
            (&field_192, (float*)0)->Invert();
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10094e980, 112 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> QuaternionLerpShortest<float>(QuaternionT<float> const&, QuaternionT<float> const&, float)
    math* QuaternionLerpShortest<float>(QuaternionT* param_1, QuaternionT* param_2, float param_3) {
        math* this_00;
        float fVar1;
        undefined1 local_40[20];

        fVar1 = QuaternionDot<float>(param_1, param_2);
        this_00 = (math*)param_2;
        if (fVar1 < 0.0) {
            this_00 = (math*)local_40;
            operator-(this_00, param_2);
        }
        Lerp<QuaternionT<float>, float>(this, param_1, (QuaternionT*)this_00, param_3);
        return this;
    }

} // namespace jag::math
