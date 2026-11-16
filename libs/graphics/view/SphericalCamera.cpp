// libs/graphics/view/SphericalCamera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.view

namespace jag {
    class SphericalCamera {
    public:
        math::Matrix44T<float> GetViewTransform() const;
        SphericalCamera* GetProjTransform() const;

    private:
        uint8_t _unknown_0[72];
        float field_72;
        float field_76;
        float field_80;
    };

    // 0x1009dcb90
    math::Matrix44T<float> SphericalCamera::GetViewTransform() const {
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dc_00;
        unsigned int extraout_XMM0_Dd;
        unsigned int extraout_XMM0_Dd_00;
        uint64_t local_48;

        local_48._0_4_ = field_72;
        uint64_t local_58 = ::sin((float)local_48);
        unsigned int uStack_50 = extraout_XMM0_Dc;
        unsigned int uStack_4c = extraout_XMM0_Dd;
        local_48 = ::cos((float)local_48);
        float local_68 = field_76;
        unsigned int uStack_40 = extraout_XMM0_Dc_00;
        unsigned int uStack_3c = extraout_XMM0_Dd_00;
        float local_34 = (float)::sin(local_68);
        uint64_t local_b8 = ::cos(local_68);
        local_68 = -(float)local_48;
        unsigned int uStack_64 = local_48._4_4_ ^ 2147483648;
        unsigned int uStack_60 = uStack_40 ^ 2147483648;
        unsigned int uStack_5c = uStack_3c ^ 2147483648;
        local_58._0_4_ = -(float)local_58;
        local_58._4_4_ = local_58._4_4_ ^ 2147483648;
        uStack_50 = uStack_50 ^ 2147483648;
        uStack_4c = uStack_4c ^ 2147483648;
        ColourHSL local_d8(local_34 * local_68, -(float)local_b8, local_34 * (float)local_58);
        ColourHSL local_a8((float)local_58, 0.0, (float)local_48);
        float fVar1 = local_34;
        ColourHSL local_c8(local_68 * (float)local_b8, local_34, (float)local_58 * (float)local_b8);
        auto vector31 = GetPos();
        uint64_t local_78 = math::operator-((Vector3T<float>*)&local_d8);
        float local_70 = fVar1;
        uint64_t local_88 = *field_80 * local_78;
        float local_80 = fVar1;
        uint64_t local_98 = *vector31 + local_88;
        float local_90 = fVar1;
        math::Matrix44T<float> result;
        math::Matrix44AxisOriginLH<float>(result, local_98, local_d8, local_a8, local_c8);
        return result;
    }

    // 0x1009dceb0
    SphericalCamera* SphericalCamera::GetProjTransform() const {
        ScaleManager* in_RSI;

        new (this) math::Matrix44T<float>();
        float arg2 = (float)in_RSI->GetOutlineRadiusAdjustment();
        float arg3 = (float)in_RSI->GetAmbientLight();
        float arg4 = (float)in_RSI->GetGameScale();
        float arg5 = (float)in_RSI->GetFarClip();
        auto mATRIX_PROJECTION_RANGE = in_RSI->GetID();
        math::Matrix44PerspectiveFovLH<float>(*this, arg2, arg3, arg4, arg5, mATRIX_PROJECTION_RANGE);
        return this;
    }

} // namespace jag

// 0x1009dcd10
void sin(float arg1) {
    _sinf();
}

// 0x1009dcd20
void cos(float arg1) {
    _cosf();
}

namespace jag::math {
    // 0x1009dcd30
    Matrix44T<float>& Matrix44AxisOriginLH<float>(Matrix44T<float>& matrix44, const Vector3T<float>& vector31,
                                                  const Vector3T<float>& vector32, const Vector3T<float>& vector33,
                                                  const Vector3T<float>& vector34) {
        float in_XMM1_Da;

        uint64_t local_48 = Vector3Normalize<float>(vector32);
        float local_40 = in_XMM1_Da;
        uint64_t local_38 = Vector3Normalize<float>(vector33);
        float local_30 = in_XMM1_Da;
        uint64_t local_78 = Vector3Normalize<float>(vector34);
        float local_64 = (float)((unsigned long)local_78 >> 32);
        float local_60 = (float)local_78;
        float local_68 = (float)local_38;
        float local_6c = local_38._4_4_;
        float local_58 = (float)local_48;
        float local_5c = local_48._4_4_;
        float local_50 = local_30;
        float local_4c = local_40;
        float local_54 = in_XMM1_Da;
        float fVar1 = Vector3Dot<float>((Vector3T<float>*)&local_38, vector31);
        float fVar2 = Vector3Dot<float>((Vector3T<float>*)&local_78, vector31);
        float fVar3 = Vector3Dot<float>((Vector3T<float>*)&local_48, vector31);
        matrix44.Set(local_68, local_60, local_58, 0.0, local_6c, local_64, local_5c, 0.0, local_50, local_54, local_4c,
                     0.0, -fVar1, -fVar2, -fVar3, 1.0);
        return matrix44;
    }

} // namespace jag::math
