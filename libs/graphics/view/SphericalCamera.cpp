// libs/graphics/view/SphericalCamera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.view

namespace jag {
    class SphericalCamera {
    public:
        GetViewTransform() const;
        GetProjTransform() const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009dcb90, 384 bytes, placed by class name and debug map
    // SphericalCamera::GetViewTransform() const
    SphericalCamera* SphericalCamera::GetViewTransform() {
        Vector3T* pVVar1;
        Camera* in_RSI;
        Camera* pCVar2;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dc_00;
        uint extraout_XMM0_Dd;
        uint extraout_XMM0_Dd_00;
        float fVar3;
        undefined1 local_d8[32];
        undefined8 local_b8;
        ColourHSL local_a8;
        undefined8 local_98;
        float local_90;
        undefined8 local_88;
        float local_80;
        undefined8 local_78;
        float local_70;
        float local_68;
        uint uStack_64;
        uint uStack_60;
        uint uStack_5c;
        undefined8 local_58;
        uint uStack_50;
        uint uStack_4c;
        undefined8 local_48;
        uint uStack_40;
        uint uStack_3c;
        float local_34;

        local_48._0_4_ = *(float*)(in_RSI->m_pos + 12);
        pCVar2 = in_RSI;
        local_58 = ::sin((float)local_48);
        uStack_50 = extraout_XMM0_Dc;
        uStack_4c = extraout_XMM0_Dd;
        local_48 = ::cos((float)local_48);
        local_68 = *(float*)&in_RSI[1].field_0;
        uStack_40 = extraout_XMM0_Dc_00;
        uStack_3c = extraout_XMM0_Dd_00;
        local_34 = (float)::sin(local_68);
        local_b8 = ::cos(local_68);
        local_68 = -(float)local_48;
        uStack_64 = local_48._4_4_ ^ 2147483648;
        uStack_60 = uStack_40 ^ 2147483648;
        uStack_5c = uStack_3c ^ 2147483648;
        local_58._0_4_ = -(float)local_58;
        local_58._4_4_ = local_58._4_4_ ^ 2147483648;
        uStack_50 = uStack_50 ^ 2147483648;
        uStack_4c = uStack_4c ^ 2147483648;
        new (local_d8) math::ColourHSL(local_34 * local_68, -(float)local_b8, local_34 * (float)local_58);
        new (&local_a8) math::ColourHSL((float)local_58, 0.0, (float)local_48);
        fVar3 = local_34;
        new ((local_d8 + 16)) math::ColourHSL(local_68 * (float)local_b8, local_34, (float)local_58 * (float)local_b8);
        pVVar1 = (Vector3T*)in_RSI->GetPos();
        local_78 = math::operator-((math*)local_d8, (Vector3T*)pCVar2);
        local_70 = fVar3;
        local_88 = math::operator*((Vector3T*)&local_78, *(float*)((long)&in_RSI[1].field_0 + 4));
        local_80 = fVar3;
        local_98 = math::operator+(pVVar1, (Vector3T*)&local_88);
        local_90 = fVar3;
        new (this) math::Matrix44T<float>();
        math::Matrix44AxisOriginLH<float>((Matrix44T*)this, (Vector3T*)&local_98, (Vector3T*)local_d8,
                                          (Vector3T*)&local_a8, (Vector3T*)(local_d8 + 16));
        return this;
    }

    // 0x1009dceb0, 128 bytes, placed by class name and debug map
    // SphericalCamera::GetProjTransform() const
    SphericalCamera* SphericalCamera::GetProjTransform() {
        undefined4 uVar1;
        ScaleManager* in_RSI;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;

        new (this) math::Matrix44T<float>();
        uVar2 = in_RSI->GetOutlineRadiusAdjustment();
        uVar3 = in_RSI->GetAmbientLight();
        uVar4 = in_RSI->GetGameScale();
        uVar5 = in_RSI->GetFarClip();
        uVar1 = in_RSI->GetID();
        math::Matrix44PerspectiveFovLH<float>(uVar2, uVar3, uVar4, uVar5, this, uVar1);
        return this;
    }

} // namespace jag

// 0x1009dcd10, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x1009dcd20, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}

namespace jag::math {
    // 0x1009dcd30, 384 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44AxisOriginLH<float>(Matrix44T<float>&, Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&)
    Matrix44T* Matrix44AxisOriginLH<float>(Matrix44T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4,
                                           Vector3T* param_5) {
        float fVar1;
        float fVar2;
        float fVar3;
        float in_XMM1_Da;
        undefined8 local_78;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        undefined8 local_48;
        float local_40;
        undefined8 local_38;
        float local_30;

        local_48 = Vector3Normalize<float>(param_3);
        local_40 = in_XMM1_Da;
        local_38 = Vector3Normalize<float>(param_4);
        local_30 = in_XMM1_Da;
        local_78 = Vector3Normalize<float>(param_5);
        local_64 = (float)((ulong)local_78 >> 32);
        local_60 = (float)local_78;
        local_68 = (float)local_38;
        local_6c = local_38._4_4_;
        local_58 = (float)local_48;
        local_5c = local_48._4_4_;
        local_50 = local_30;
        local_4c = local_40;
        local_54 = in_XMM1_Da;
        fVar1 = Vector3Dot<float>((Vector3T*)&local_38, param_2);
        fVar2 = Vector3Dot<float>((Vector3T*)&local_78, param_2);
        fVar3 = Vector3Dot<float>((Vector3T*)&local_48, param_2);
        param_1->Set(local_68, local_60, local_58, 0.0, local_6c, local_64, local_5c, 0.0, local_50, local_54, local_4c,
                     0.0, -fVar1, -fVar2, -fVar3, 1.0);
        return param_1;
    }

} // namespace jag::math
