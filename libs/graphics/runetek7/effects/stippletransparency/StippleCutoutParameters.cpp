// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutParameters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "StippleCutoutParameters.h"

namespace jag::graphics {
    // 0x100f444d0
    float StippleCutoutParameters::m_tweakViewFocusBaseDistance = 2000.0f;

    // 0x100f444d4
    int32_t StippleCutoutParameters::m_tweakViewFocusVerticalOffsetMin = 1060320051;

    // 0x100f444d8
    int32_t StippleCutoutParameters::m_tweakViewFocusVerticalOffsetMax = 1061997773;

    // 0x100f444dc
    int32_t StippleCutoutParameters::m_tweakViewFocusMinimumTransparency = 1036831949;

    // 0x100f444e0
    int32_t StippleCutoutParameters::m_tweakViewFocusStart = 1045220557;

    // 0x100f444e4
    float StippleCutoutParameters::m_tweakViewFocusRange = 1.25f;

    // 0x100009ca0: StippleCutoutParameters::GetPacked() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10043ce30: StippleCutoutParameters::StippleCutoutParameters() has the same machine code as eastl::bitset<6ul, unsigned long long>::bitset()

    // 0x10091e0d0
    void StippleCutoutParameters::Setup(const math::AABB& aabb, float arg2, const math::Vector3T<float>& vector3,
                                        const math::Matrix44T<float>& matrix441,
                                        const math::Matrix44T<float>& matrix442) {
        uint8_t local_c0[16];
        uint64_t local_a8;
        uint64_t local_60;
        uint64_t uStack_40;

        Matrix44T<float>* local_50 = matrix442;
        new (local_c0) LightProbeVertex();
        uint64_t local_48 = aabb.GetCentrePos();
        local_c0->SetXYZ(local_48);
        local_48 = aabb.GetCentrePos();
        ((local_c0 + 12))->SetXYZ(local_48);
        float local_34 = (float)aabb.GetMinY();
        float local_38 = (float)aabb.GetHeight();
        float fVar4 = (float)eastl::min<float>(m_tweakViewFocusVerticalOffsetMin, m_tweakViewFocusVerticalOffsetMax);
        local_c0._4_4_ = fVar4 * local_38 + local_34;
        local_34 = (float)aabb.GetMinY();
        local_38 = (float)aabb.GetHeight();
        fVar4 = m_tweakViewFocusVerticalOffsetMax;
        float local_b0 =
            (float)eastl::max_alt(m_tweakViewFocusVerticalOffsetMin, m_tweakViewFocusVerticalOffsetMax) * local_38 +
            local_34;
        uint64_t local_98 = local_c0->ClosestPoint(vector3);
        float local_90 = fVar4;
        local_34 = (float)aabb.GetWidth();
        uint64_t uVar6 = aabb.GetLength();
        local_34 = (float)eastl::max_alt(local_34, (float)uVar6);
        ReturnValue local_88 = (ReturnValue)vector3 - local_98;
        uint32_t local_80 = (uint32_t)uVar6;
        ReturnValue* pRVar1 = local_88 = math::Vector3T<float>::Normalize();
        ReturnValue local_78 = *pRVar1;
        uint32_t local_70 = *(uint32_t*)(pRVar1 + 1);
        local_48 = *local_34 * local_78;
        uStack_40._0_4_ = (uint32_t)uVar6;
        local_98 += local_48;
        new (&local_a8) math::Vector4T(local_98, 1.0);
        local_48 = local_a8 matrix441;
        uStack_40 = uVar6;
        auto pfVar2 = local_48.qw();
        local_48 /= *pfVar2;
        local_a8 = local_48 * *local_50;
        uint64_t uStack_a0 = uVar6;
        pfVar2 = (float*)local_a8.qw();
        local_a8 /= *pfVar2;
        auto puVar3 = local_a8.SSOBeginPtr();
        local_50 = (Matrix44T<float>*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(*puVar3));
        pfVar2 = (float*)local_a8.y();
        fVar4 = *pfVar2;
        new (&local_60) math::Point(local_50._0_4_, fVar4);
        *this = local_60;
        local_60 = local_48.GetXYZ();
        float local_58 = fVar4;
        fVar4 = (float)local_60.Length();
        field_8 = fVar4;
        field_12 = arg2;
        local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)(m_tweakViewFocusBaseDistance / fVar4));
        fVar4 = math::Clamp<float>(local_60, 0.05, 1.0);
        field_16 = m_tweakViewFocusStart * fVar4;
        field_20 = fVar4 * m_tweakViewFocusRange;
        field_24 = m_tweakViewFocusMinimumTransparency;
    }

    // 0x10091e3b0: LightProbeVertex::LightProbeVertex() has the same machine code as math::LineSegment::LineSegment()

    // 0x10091e470
    void StippleCutoutParameters::SetToIdentity() {
        *this = math::Vector2T<float>::SetToZero();
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 0.0;
        field_20 = 1.0;
        field_24 = 0;
    }

} // namespace jag::graphics
