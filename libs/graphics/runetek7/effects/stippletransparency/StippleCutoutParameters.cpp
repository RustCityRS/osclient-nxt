// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutParameters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "StippleCutoutParameters.h"

namespace jag::graphics {
    // 0x100f444d0, 4 bytes, __data
    float StippleCutoutParameters::m_tweakViewFocusBaseDistance = 2000.0f;

    // 0x100f444d4, 4 bytes, __data
    StippleCutoutParameters::m_tweakViewFocusVerticalOffsetMin = 1060320051;

    // 0x100f444d8, 4 bytes, __data
    StippleCutoutParameters::m_tweakViewFocusVerticalOffsetMax = 1061997773;

    // 0x100f444dc, 4 bytes, __data
    StippleCutoutParameters::m_tweakViewFocusMinimumTransparency = 1036831949;

    // 0x100f444e0, 4 bytes, __data
    StippleCutoutParameters::m_tweakViewFocusStart = 1045220557;

    // 0x100f444e4, 4 bytes, __data
    float StippleCutoutParameters::m_tweakViewFocusRange = 1.25f;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    StippleCutoutParameters::GetPacked() const;

    // 0x10043ce30: the linker folded this into eastl::bitset<6ul, unsigned long long>::bitset(), which has identical code
    StippleCutoutParameters::StippleCutoutParameters();

    // 0x10091e0d0, 736 bytes, placed by class name and debug map
    // StippleCutoutParameters::Setup(math::AABB const&, float, math::Vector3T<float> const&, math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    void StippleCutoutParameters::Setup(AABB* param_1, float param_2, Vector3T* param_3, Matrix44T* param_4,
                                        Matrix44T* param_5) {
        undefined8* puVar1;
        float* pfVar2;
        vector* pvVar3;
        Matrix44T* pMVar4;
        float fVar5;
        float fVar6;
        undefined8 uVar7;
        undefined1 local_c0[16];
        float local_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        float local_90;
        undefined8 local_88;
        undefined4 local_80;
        undefined8 local_78;
        undefined4 local_70;
        float local_6c;
        float local_68;
        undefined8 local_60;
        float local_58;
        Matrix44T* local_50;
        undefined8 local_48;
        undefined8 uStack_40;
        float local_38;
        float local_34;

        local_50 = param_5;
        new (local_c0) LightProbeVertex();
        local_48 = param_1->GetCentrePos();
        local_c0->SetXYZ((Vector3T*)&local_48);
        local_48 = param_1->GetCentrePos();
        ((local_c0 + 12))->SetXYZ((Vector3T*)&local_48);
        local_34 = (float)param_1->GetMinY();
        local_38 = (float)param_1->GetHeight();
        fVar5 = (float)eastl::min<float>(m_tweakViewFocusVerticalOffsetMin, m_tweakViewFocusVerticalOffsetMax);
        local_c0._4_4_ = fVar5 * local_38 + local_34;
        local_34 = (float)param_1->GetMinY();
        local_38 = (float)param_1->GetHeight();
        fVar5 = m_tweakViewFocusVerticalOffsetMax;
        fVar6 = (float)eastl::max_alt(m_tweakViewFocusVerticalOffsetMin, m_tweakViewFocusVerticalOffsetMax);
        local_b0 = fVar6 * local_38 + local_34;
        local_98 = local_c0->ClosestPoint(param_3);
        local_90 = fVar5;
        local_34 = (float)param_1->GetWidth();
        uVar7 = param_1->GetLength();
        local_34 = (float)eastl::max_alt(local_34, (float)uVar7);
        local_88 = math::operator-(param_3, (Vector3T*)&local_98);
        local_80 = (undefined4)uVar7;
        puVar1 = (undefined8*)local_88.Normalize();
        local_78 = *puVar1;
        local_70 = *(undefined4*)(puVar1 + 1);
        local_48 = math::operator*((Vector3T*)&local_78, local_34);
        uStack_40._0_4_ = (undefined4)uVar7;
        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_98, (Vector3T*)&local_48);
        new (&local_a8) math::Vector4T<float>((Vector3T*)&local_98, 1.0);
        local_48 = math::operator*((Vector4T*)&local_a8, param_4);
        uStack_40 = uVar7;
        pfVar2 = (float*)local_48.qw();
        math::Vector4T<float>::operator/=((Vector4T<float>*)&local_48, *pfVar2);
        pMVar4 = local_50;
        local_a8 = math::operator*((Vector4T*)&local_48, local_50);
        uStack_a0 = uVar7;
        pfVar2 = (float*)local_a8.qw();
        math::Vector4T<float>::operator/=((Vector4T<float>*)&local_a8, *pfVar2);
        pvVar3 = local_a8.SSOBeginPtr(pMVar4);
        local_50 = (Matrix44T*)CONCAT44(local_50._4_4_, *(undefined4*)pvVar3);
        pfVar2 = (float*)local_a8.y();
        fVar5 = *pfVar2;
        new (&local_60) math::Point<float>(local_50._0_4_, fVar5);
        math::Vector2T<float>::operator=((Vector2T<float>*)this, (Vector2T*)&local_60);
        local_60 = local_48.GetXYZ();
        local_58 = fVar5;
        fVar5 = (float)local_60.Length();
        field_8 = fVar5;
        field_12 = param_2;
        local_60 = CONCAT44(local_60._4_4_, m_tweakViewFocusBaseDistance / fVar5);
        local_6c = 0.05;
        local_68 = 1.0;
        fVar5 = math::Clamp<float>((float*)&local_60, &local_6c, &local_68);
        field_16 = m_tweakViewFocusStart * fVar5;
        field_20 = fVar5 * m_tweakViewFocusRange;
        field_24 = m_tweakViewFocusMinimumTransparency;
    }

    // 0x10091e3b0: the linker folded this into math::LineSegment::LineSegment(), which has identical code
    LightProbeVertex::LightProbeVertex();

    // 0x10091e470, 48 bytes, placed by class name
    // StippleCutoutParameters::SetToIdentity()
    void StippleCutoutParameters::SetToIdentity() {
        SetToZero();
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 0.0;
        field_20 = 1.0;
        field_24 = 0;
    }

} // namespace jag::graphics
