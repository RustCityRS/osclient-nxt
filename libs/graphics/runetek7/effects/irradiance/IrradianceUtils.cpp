// libs/graphics/runetek7/effects/irradiance/IrradianceUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "IrradianceUtils.h"

namespace jag::graphics {
    // 0x10092e620, 800 bytes, placed by debug map only (low confidence)
    // ComputeIrradianceSHCoefs(IrradianceSHCoefConsts&, int, float const*, float const*, float const*, float, float, float)
    void ComputeIrradianceSHCoefs(IrradianceSHCoefConsts* param_1, int param_2, float* param_3, float* param_4,
                                  float* param_5, float param_6, float param_7, float param_8) {
        long lVar1;
        IrradianceSHCoefConsts* pIVar2;
        undefined8* puVar3;
        float* pfVar4;
        Rect* pRVar5;
        long* plVar6;
        float* pfVar7;
        ulong uVar8;
        array<math::Vector4T<float>, 3ul> local_a8[48];
        float* local_78;
        float* local_70;
        float* local_68;
        Rect* local_60;
        Rect* local_58;
        IrradianceSHCoefConsts* local_50;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_3c = param_7;
        local_38 = param_6;
        local_34 = param_8;
        if (param_2 != 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("order == 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/IrradianceUtils.cpp",
                      65, (char*)0);
        }
        local_78 = param_3;
        local_70 = param_4;
        local_68 = param_5;
        std::array<math::Vector4T<float>, 3ul>::array(local_a8);
        local_40 = local_3c * -0.3257139;
        local_3c = local_3c * 0.3257139;
        local_38 = local_38 * 0.2820765;
        local_50 = (IrradianceSHCoefConsts*)CONCAT44(local_50._4_4_, local_34 * 0.07884278);
        uVar8 = 0;
        do {
            puVar3 =
                (undefined8*)std::array<float const*, 3ul>::operator[]((array<float const*, 3ul>*)&local_78, uVar8);
            pfVar7 = (float*)*puVar3;
            local_44 = pfVar7[3] * local_40;
            pfVar4 = (float*)std::array<math::Vector4T<float>, 3ul>::operator[](local_a8, uVar8);
            *pfVar4 = local_44;
            pfVar4[1] = pfVar7[1] * local_40;
            pfVar4[2] = pfVar7[2] * local_3c;
            pfVar4[3] = *pfVar7 * local_38 - pfVar7[6] * local_50._0_4_;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 3);
        uVar8 = 0;
        pRVar5 = (Rect*)std::array<math::Vector4T<float>, 3ul>::operator[](local_a8, 0);
        math::Rect<float>::operator=((Rect<float>*)param_1, pRVar5);
        local_60 = (Rect*)std::array<math::Vector4T<float>, 3ul>::operator[](local_a8, 1);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_16, local_60);
        local_58 = (Rect*)std::array<math::Vector4T<float>, 3ul>::operator[](local_a8, 2);
        local_50 = param_1;
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_32, local_58);
        local_44 = local_34 * 0.27311942;
        local_3c = local_34 * -0.27311942;
        local_38 = local_34 * 0.23652834;
        do {
            plVar6 = (long*)std::array<float const*, 3ul>::operator[]((array<float const*, 3ul>*)&local_78, uVar8);
            lVar1 = *plVar6;
            local_40 = *(float*)(lVar1 + 16) * local_44;
            pfVar7 = (float*)std::array<math::Vector4T<float>, 3ul>::operator[](local_a8, uVar8);
            pIVar2 = local_50;
            *pfVar7 = local_40;
            pfVar7[1] = *(float*)(lVar1 + 20) * local_3c;
            pfVar7[2] = *(float*)(lVar1 + 24) * local_38;
            pfVar7[3] = *(float*)(lVar1 + 28) * local_3c;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 3);
        math::Rect<float>::operator=((Rect<float>*)&local_50->field_48, pRVar5);
        math::Rect<float>::operator=((Rect<float>*)&pIVar2->field_64, local_60);
        math::Rect<float>::operator=((Rect<float>*)&pIVar2->field_80, local_58);
        plVar6 = (long*)std::array<float const*, 3ul>::operator[]((array<float const*, 3ul>*)&local_78, 0);
        local_34 = local_34 * 0.13655971;
        *(float*)pRVar5 = *(float*)(*plVar6 + 32) * local_34;
        plVar6 = (long*)std::array<float const*, 3ul>::operator[]((array<float const*, 3ul>*)&local_78, 1);
        *(float*)(pRVar5 + 4) = *(float*)(*plVar6 + 32) * local_34;
        plVar6 = (long*)std::array<float const*, 3ul>::operator[]((array<float const*, 3ul>*)&local_78, 2);
        *(float*)(pRVar5 + 8) = local_34 * *(float*)(*plVar6 + 32);
        *(undefined4*)(pRVar5 + 12) = 1065353216;
        math::Rect<float>::operator=((Rect<float>*)&pIVar2->field_96, pRVar5);
    }

    // 0x10092e970, 96 bytes, placed by debug map only (low confidence)
    // GetDefaultIrradianceSHCoefs(std::array<float, 9ul>&, std::array<float, 9ul>&, std::array<float, 9ul>&)
    /* GetDefaultIrradianceSHCoefs(std::array<float, 9ul>&, std::array<float, 9ul>&,
   std::array<float, 9ul>&) */

    void GetDefaultIrradianceSHCoefs(array* param_1, array* param_2, array* param_3) {
        *(undefined4*)(param_1 + 32) = 1049558599;
        *(undefined8*)(param_1 + 16) = 13576806060106426158;
        *(undefined8*)(param_1 + 24) = 4402766994731568501;
        *(undefined8*)param_1 = 13755102064699655495;
        *(undefined8*)(param_1 + 8) = 4449462171211842899;
        *(undefined4*)(param_2 + 32) = 1057315386;
        *(undefined8*)(param_2 + 16) = 4352344411528452840;
        *(undefined8*)(param_2 + 24) = 4380565724671256881;
        *(undefined8*)param_2 = 13777006273360531253;
        *(undefined8*)(param_2 + 8) = 4473177069349027476;
        *(undefined4*)(param_3 + 32) = 1058486533;
        *(undefined8*)(param_3 + 16) = 4416963579627764787;
        *(undefined8*)(param_3 + 24) = 13575092078269581184;
        *(undefined8*)param_3 = 13805163997351392751;
        *(undefined8*)(param_3 + 8) = 4428904250132010364;
    }

    // 0x10092e9d0, 176 bytes, base-object constructor, placed by debug map only (low confidence)
    // IrradianceSHCoefConsts::IrradianceSHCoefConsts()
    void IrradianceSHCoefConsts::IrradianceSHCoefConsts() {
        float* pfVar1;
        float* pfVar2;
        float* pfVar3;

        new (this) math::Vector4T<float>();
        new (&field_16) math::Vector4T<float>();
        new (&field_32) math::Vector4T<float>();
        new (&field_48) math::Vector4T<float>();
        new (&field_64) math::Vector4T<float>();
        new (&field_80) math::Vector4T<float>();
        new (&field_96) math::Vector4T<float>();
        pfVar1 = (float*)(&SHCoefsDefaults::SHDefaultRedCoefs)->data();
        pfVar2 = (float*)(&SHCoefsDefaults::SHDefaultGreenCoefs)->data();
        pfVar3 = (float*)(&SHCoefsDefaults::SHDefaultBlueCoefs)->data();
        ComputeIrradianceSHCoefs(this, 3, pfVar1, pfVar2, pfVar3, 1.0, 1.0, 1.0);
    }

    // 0x10092ea90, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // IrradianceSHCoefConsts::IrradianceSHCoefConsts(): jumps straight to the base-object constructor

    // 0x10092eaa0, 288 bytes, placed by debug map only (low confidence)
    // operator+(IrradianceSHCoefConsts const&, IrradianceSHCoefConsts const&)
    /* TEMPNAMEPLACEHOLDERVALUE(IrradianceSHCoefConsts const&,
   IrradianceSHCoefConsts const&) */

    IrradianceSHCoefConsts* operator+(IrradianceSHCoefConsts* param_1, IrradianceSHCoefConsts* param_2) {
        Vector4T* in_RDX;
        undefined8 local_38[3];

        IrradianceSHCoefConsts::IrradianceSHCoefConsts(param_1);
        local_38[0] = math::operator+((Vector4T*)param_2, in_RDX);
        math::Rect<float>::operator=((Rect<float>*)param_1, (Rect*)local_38);
        local_38[0] = math::operator+((Vector4T*)&param_2->field_16, in_RDX + 16);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_16, (Rect*)local_38);
        local_38[0] = math::operator+((Vector4T*)&param_2->field_32, in_RDX + 32);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_32, (Rect*)local_38);
        local_38[0] = math::operator+((Vector4T*)&param_2->field_48, in_RDX + 48);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_48, (Rect*)local_38);
        local_38[0] = math::operator+((Vector4T*)&param_2->field_64, in_RDX + 64);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_64, (Rect*)local_38);
        local_38[0] = math::operator+((Vector4T*)&param_2->field_80, in_RDX + 80);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_80, (Rect*)local_38);
        local_38[0] = math::operator+((Vector4T*)&param_2->field_96, in_RDX + 96);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_96, (Rect*)local_38);
        return param_1;
    }

    // 0x10092ebc0, 288 bytes, placed by debug map only (low confidence)
    // operator-(IrradianceSHCoefConsts const&, IrradianceSHCoefConsts const&)
    /* TEMPNAMEPLACEHOLDERVALUE(IrradianceSHCoefConsts const&,
   IrradianceSHCoefConsts const&) */

    IrradianceSHCoefConsts* operator-(IrradianceSHCoefConsts* param_1, IrradianceSHCoefConsts* param_2) {
        Vector4T* in_RDX;
        undefined8 local_38[3];

        IrradianceSHCoefConsts::IrradianceSHCoefConsts(param_1);
        local_38[0] = math::operator-((Vector4T*)param_2, in_RDX);
        math::Rect<float>::operator=((Rect<float>*)param_1, (Rect*)local_38);
        local_38[0] = math::operator-((Vector4T*)&param_2->field_16, in_RDX + 16);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_16, (Rect*)local_38);
        local_38[0] = math::operator-((Vector4T*)&param_2->field_32, in_RDX + 32);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_32, (Rect*)local_38);
        local_38[0] = math::operator-((Vector4T*)&param_2->field_48, in_RDX + 48);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_48, (Rect*)local_38);
        local_38[0] = math::operator-((Vector4T*)&param_2->field_64, in_RDX + 64);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_64, (Rect*)local_38);
        local_38[0] = math::operator-((Vector4T*)&param_2->field_80, in_RDX + 80);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_80, (Rect*)local_38);
        local_38[0] = math::operator-((Vector4T*)&param_2->field_96, in_RDX + 96);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_96, (Rect*)local_38);
        return param_1;
    }

    // 0x10092ece0, 288 bytes, placed by debug map only (low confidence)
    // operator*(IrradianceSHCoefConsts const&, IrradianceSHCoefConsts const&)
    /* TEMPNAMEPLACEHOLDERVALUE(IrradianceSHCoefConsts const&,
   IrradianceSHCoefConsts const&) */

    IrradianceSHCoefConsts* operator*(IrradianceSHCoefConsts* param_1, IrradianceSHCoefConsts* param_2) {
        Vector4T* in_RDX;
        undefined8 local_38[3];

        IrradianceSHCoefConsts::IrradianceSHCoefConsts(param_1);
        local_38[0] = math::operator*((Vector4T*)param_2, in_RDX);
        math::Rect<float>::operator=((Rect<float>*)param_1, (Rect*)local_38);
        local_38[0] = math::operator*((Vector4T*)&param_2->field_16, in_RDX + 16);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_16, (Rect*)local_38);
        local_38[0] = math::operator*((Vector4T*)&param_2->field_32, in_RDX + 32);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_32, (Rect*)local_38);
        local_38[0] = math::operator*((Vector4T*)&param_2->field_48, in_RDX + 48);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_48, (Rect*)local_38);
        local_38[0] = math::operator*((Vector4T*)&param_2->field_64, in_RDX + 64);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_64, (Rect*)local_38);
        local_38[0] = math::operator*((Vector4T*)&param_2->field_80, in_RDX + 80);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_80, (Rect*)local_38);
        local_38[0] = math::operator*((Vector4T*)&param_2->field_96, in_RDX + 96);
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_96, (Rect*)local_38);
        return param_1;
    }

    // 0x10092ee50, 288 bytes, placed by debug map only (low confidence)
    // operator*(IrradianceSHCoefConsts const&, float)
    /* TEMPNAMEPLACEHOLDERVALUE(IrradianceSHCoefConsts const&, float) */

    IrradianceSHCoefConsts* operator*(IrradianceSHCoefConsts* param_1, float param_2) {
        Vector4T* in_RSI;
        undefined8 uVar1;
        undefined8 in_XMM1_Qa;
        undefined8 local_38;
        undefined4 uStack_30;
        undefined4 uStack_2c;

        IrradianceSHCoefConsts::IrradianceSHCoefConsts(param_1);
        local_38 = math::operator*(in_RSI, param_2);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        math::Rect<float>::operator=((Rect<float>*)param_1, (Rect*)&local_38);
        uVar1 = math::operator*(in_RSI + 16, param_2);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_16, (Rect*)&local_38);
        uVar1 = math::operator*(in_RSI + 32, param_2);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_32, (Rect*)&local_38);
        uVar1 = math::operator*(in_RSI + 48, param_2);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_48, (Rect*)&local_38);
        uVar1 = math::operator*(in_RSI + 64, param_2);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_64, (Rect*)&local_38);
        uVar1 = math::operator*(in_RSI + 80, param_2);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_80, (Rect*)&local_38);
        uVar1 = math::operator*(in_RSI + 96, param_2);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        math::Rect<float>::operator=((Rect<float>*)&param_1->field_96, (Rect*)&local_38);
        return param_1;
    }

    // 0x10092ef70, 512 bytes, placed by debug map only (low confidence)
    // CalculateIrradianceFromCubeMap(IrradianceSHCoefConsts&, TextureData const&, render::Format const&)
    void CalculateIrradianceFromCubeMap(IrradianceSHCoefConsts* param_1, TextureData* param_2, Format* param_3) {
        uint uVar1;
        int iVar2;
        uchar* puVar3;
        ResourceDataT<unsigned char>* this;
        float* pfVar4;
        float* pfVar5;
        float* pfVar6;
        int iVar7;
        uint uVar8;
        array<float, 9ul> local_1e0[40];
        array<float, 9ul> local_1b8[40];
        ResourceDataT<unsigned char const> local_190[40];
        int local_154;
        fixed_vector<render::ImageData, 6ul, true, eastl::allocator> local_150[280];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar3 = (uchar*)param_2->get();
        eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>::fixed_vector(local_150);
        iVar2 = 0;
        do {
            this = (ResourceDataT<unsigned char>*)
                eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>::push_back();
            *(undefined4*)(this + 24) = *(undefined4*)&param_2->field_16;
            *(undefined4*)(this + 28) = *(undefined4*)((long)&param_2->field_16 + 4);
            *(undefined4*)(this + 32) = *(undefined4*)param_3;
            render::ResourceDataT<unsigned char const>::ResourceDataT(local_190, puVar3, 0, 0, false);
            local_154 = iVar2;
            render::ResourceDataT<unsigned char>::operator=(this, (ResourceDataT*)local_190);
            local_190->~ResourceDataT();
            if (*(int*)((long)&param_2->field_8 + 4) != 0) {
                iVar2 = *(int*)&param_2->field_16;
                iVar7 = *(int*)((long)&param_2->field_16 + 4);
                uVar8 = 0;
                do {
                    uVar1 = render::GetImageByteSize(iVar2, iVar7, *(undefined4*)param_3, 0);
                    puVar3 = puVar3 + uVar1;
                    iVar2 = iVar2 / 2;
                    iVar7 = iVar7 / 2;
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(uint*)((long)&param_2->field_8 + 4));
            }
            iVar2 = local_154 + 1;
        } while (iVar2 != 6);
        pfVar4 = (float*)local_190->data();
        pfVar5 = (float*)std::array<float, 9ul>::data(local_1e0);
        pfVar6 = (float*)std::array<float, 9ul>::data(local_1b8);
        SHProjectCubeMap(3, (fixed_vector*)local_150, pfVar4, pfVar5, pfVar6);
        ComputeIrradianceSHCoefs(param_1, 3, pfVar4, pfVar5, pfVar6, 1.0, 1.0, 1.0);
        eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>::~fixed_vector(local_150);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10092ee00, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> operator*<float>(Vector4T<float> const&, Vector4T<float> const&)
    /* Vector4T<float> TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   Vector4T<float> const&) */

    undefined1[16] operator*(Vector4T * param_1, Vector4T * param_2) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, *(float*)param_2 * *(float*)param_1, *(float*)(param_2 + 4) * *(float*)(param_1 + 4),
                       *(float*)(param_2 + 8) * *(float*)(param_1 + 8),
                       *(float*)(param_2 + 12) * *(float*)(param_1 + 12));
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

} // namespace jag::math
