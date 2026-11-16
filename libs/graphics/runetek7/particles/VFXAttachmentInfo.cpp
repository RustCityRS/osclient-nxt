// libs/graphics/runetek7/particles/VFXAttachmentInfo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "VFXAttachmentInfo.h"

namespace jag::graphics {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    VFXAttachmentInfo::GetTemplateID() const;

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    VFXAttachmentInfo::GetBonePositions() const;

    // 0x1001cdf70: the linker folded this into game::StaticPointLight::SetRGB(unsigned int), which has identical code
    VFXAttachmentInfo::SetSourceModelExternalID(int);

    // 0x100429b10: the linker folded this into game::StaticPointLight::GetRGB() const, which has identical code
    VFXAttachmentInfo::GetSourceModelExternalID() const;

    // 0x1004900d0: the linker folded this into game::MapEnvironmentSettings::GetVolumetricSettings() const, which has identical code
    VFXAttachmentInfo::GetWorldTransform() const;

    // 0x1007d7030, 192 bytes, placed by class name and debug map
    // VFXAttachmentInfo::RawData::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    void VFXAttachmentInfo::RawData::Decode(PacketT* param_1) {
        byte bVar1;
        undefined2 uVar2;
        float fVar3;
        Vector3T<float> local_60[40];
        float local_38;
        float local_34;
        float local_30;
        float local_28;
        float local_24;

        uVar2 = param_1->g2();
        field_0 = uVar2;
        bVar1 = param_1->g1();
        (&field_80, (uint)bVar1)->from_uint32();
        math::Vector3T<float>::Vector3T(local_60, param_1, false);
        (&field_16, (Vector3T*)local_60)->SetPos();
        new (&local_38) math::Vector3T<float>(param_1, false);
        local_28 = (float)math::Deg2Rad(local_34);
        local_24 = (float)math::Deg2Rad(local_38);
        fVar3 = (float)math::Deg2Rad(local_30);
        math::Matrix33RotationYawPitchRoll<float>((math*)local_60, local_28, local_24, fVar3);
        (&field_16, (Matrix33T*)local_60)->SetRot();
    }

    // 0x1007d7110, 32 bytes, base-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VertexBonePos::VertexBonePos()
    void VFXAttachmentInfo::VertexBonePos::VertexBonePos() {
        new (this) math::Vector3T<int>();
        field_12 = 0;
        field_16 = 0;
    }

    // 0x1007d7130, 16 bytes, complete-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VertexBonePos::VertexBonePos(): jumps straight to the base-object constructor

    // 0x1007d7140, 32 bytes, base-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VertexBonePos::VertexBonePos(math::Vector3T<float> const&, int, int)
    void VFXAttachmentInfo::VertexBonePos::VertexBonePos(Vector3T* param_1, int param_2, int param_3) {
        field_8 = *(undefined4*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_12 = param_2;
        field_16 = param_3;
    }

    // 0x1007d7160, 16 bytes, complete-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VertexBonePos::VertexBonePos(math::Vector3T<float> const&, int, int): jumps straight to the base-object constructor

    // 0x1007d7170, 192 bytes, base-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VFXAttachmentInfo(VFXAttachmentInfo::RawData const&, math::Matrix44T<float> const&)
    void VFXAttachmentInfo::VFXAttachmentInfo(RawData* param_1, Matrix44T* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) MakeSharedPool<VFXAttachmentInfo, 768>();
        field_0 = (uint)(ushort)param_1->field_0;
        new (&field_4) std::array<VFXAttachmentInfo::VertexBonePos, 3ul>();
        field_64 = 0;
        new (&field_72)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_112)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        uVar1 = *(undefined8*)PTR_IDENTITY_100ee6730;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        field_208 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        field_160 = uVar1;
        field_168 = uVar2;
        Update(this, param_1, param_2);
    }

    // 0x1007d72a0, 208 bytes, placed by class name and debug map
    // VFXAttachmentInfo::Update(VFXAttachmentInfo::RawData const&, math::Matrix44T<float> const&)
    void VFXAttachmentInfo::Update(RawData* param_1, Matrix44T* param_2) {
        char cVar1;
        Matrix44T<float> local_a8[40];
        undefined8 local_80[5];
        undefined8 local_58[5];

        local_80[0] = (&param_1->field_16)->GetPos();
        local_58[0] = param_2->TransformPoint(local_80);
        (&field_160, (Vector3T*)local_58)->SetPos();
        cVar1 = (&param_1->field_80, 0)->test();
        if (cVar1 == '\0') {
            local_80->GetRot();
            local_a8->GetRot();
            math::operator*((Matrix33T*)local_58, (Matrix44T<float>*)local_80);
        } else {
            local_58->GetRot();
        }
        (&field_160, (Matrix33T*)local_58)->SetRot();
    }

    // 0x1007d7370, 16 bytes, complete-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VFXAttachmentInfo(VFXAttachmentInfo::RawData const&, math::Matrix44T<float> const&): jumps straight to the base-object constructor

    // 0x1007d7380, 208 bytes, base-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VFXAttachmentInfo(unsigned int, VFXAttachmentInfo::VertexBonePos const&, VFXAttachmentInfo::VertexBonePos const&, VFXAttachmentInfo::VertexBonePos const&)
    void VFXAttachmentInfo::VFXAttachmentInfo(uint param_1, VertexBonePos* param_2, VertexBonePos* param_3,
                                              VertexBonePos* param_4) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) MakeSharedPool<VFXAttachmentInfo, 768>();
        field_0 = param_1;
        field_20 = param_2->field_16;
        uVar1 = *(undefined8*)&param_2->field_8;
        field_4 = param_2->field_0;
        field_12 = uVar1;
        uVar1 = *(undefined8*)&param_3->field_8;
        field_24 = param_3->field_0;
        field_32 = uVar1;
        field_40 = param_3->field_16;
        field_60 = param_4->field_16;
        uVar1 = *(undefined8*)&param_4->field_8;
        field_44 = param_4->field_0;
        field_52 = uVar1;
        field_64 = 0;
        new (&field_72)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_112)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        uVar1 = *(undefined8*)PTR_IDENTITY_100ee6730;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        field_208 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        field_160 = uVar1;
        field_168 = uVar2;
    }

    // 0x1007d7450, 16 bytes, complete-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VFXAttachmentInfo(unsigned int, VFXAttachmentInfo::VertexBonePos const&, VFXAttachmentInfo::VertexBonePos const&, VFXAttachmentInfo::VertexBonePos const&): jumps straight to the base-object constructor

    // 0x1007d7460, 192 bytes, base-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VFXAttachmentInfo(unsigned int, VFXAttachmentInfo::VertexBonePos const&)
    void VFXAttachmentInfo::VFXAttachmentInfo(uint param_1, VertexBonePos* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) MakeSharedPool<VFXAttachmentInfo, 768>();
        field_0 = param_1;
        field_20 = param_2->field_16;
        uVar1 = *(undefined8*)&param_2->field_8;
        field_4 = param_2->field_0;
        field_12 = uVar1;
        uVar1 = *(undefined8*)&param_2->field_8;
        field_24 = param_2->field_0;
        field_32 = uVar1;
        field_40 = param_2->field_16;
        field_60 = param_2->field_16;
        uVar1 = *(undefined8*)&param_2->field_8;
        field_44 = param_2->field_0;
        field_52 = uVar1;
        field_64 = 0;
        new (&field_72)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_112)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        uVar1 = *(undefined8*)PTR_IDENTITY_100ee6730;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        field_208 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        field_160 = uVar1;
        field_168 = uVar2;
    }

    // 0x1007d7520, 16 bytes, complete-object constructor, placed by class name and debug map
    // VFXAttachmentInfo::VFXAttachmentInfo(unsigned int, VFXAttachmentInfo::VertexBonePos const&): jumps straight to the base-object constructor

    // 0x1007d7560, 944 bytes, placed by class name and debug map
    // VFXAttachmentInfo::Update(AnimationStateProvider*, math::Matrix44T<float> const&)
    bool VFXAttachmentInfo::Update(AnimationStateProvider* param_1, Matrix44T* param_2) {
        Matrix44T* pMVar1;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* this_00;
        bool bVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        undefined1* this_01;
        long lVar5;
        undefined2* puVar6;
        Vector3T* pVVar7;
        ulong uVar8;
        float extraout_XMM0_Da;
        float fVar9;
        Matrix33T<float> local_160[40];
        Matrix44T local_138;
        Vector3T<float> local_f8[16];
        undefined8 local_e8[2];
        undefined8 local_d8[2];
        undefined8 local_c8[2];
        AnimationStateProvider* local_b8;
        undefined1* local_b0;
        Matrix44T* local_a8;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_a0;
        VFXAttachmentInfo* local_98;
        undefined8 local_90[2];
        undefined8 local_80[2];
        array<VFXAttachmentInfo::VertexBonePos, 3ul>* local_70;
        undefined8 local_68;
        undefined4 local_60;
        undefined8 local_5c;
        undefined4 local_54;
        undefined8 local_50;
        undefined4 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar4 = &field_4;
        local_a8 = param_2;
        local_98 = this;
        puVar3 = (undefined8*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)puVar4, 0);
        local_68 = *puVar3;
        local_60 = *(undefined4*)(puVar3 + 1);
        puVar3 = (undefined8*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)puVar4, 1);
        local_5c = *puVar3;
        local_54 = *(undefined4*)(puVar3 + 1);
        local_70 = (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)puVar4;
        puVar4 = (undefined8*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)puVar4, 2);
        local_50 = *puVar4;
        local_48 = *(undefined4*)(puVar4 + 1);
        local_b8 = param_1;
        if (param_1 != (AnimationStateProvider*)0) {
            local_a0 =
                (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&local_98
                    ->field_112;
            this_01 = &local_98->field_72;
            puVar4 = &local_68;
            uVar8 = 0;
            local_b0 = this_01;
            do {
                lVar5 = std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](local_70, uVar8);
                this_00 = local_a0;
                if ((*(int*)(lVar5 + 12) != -1) || (*(int*)(lVar5 + 16) != -1)) {
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    local_138._0_2_ = *(undefined2*)(lVar5 + 16);
                    puVar6 = (undefined2*)
                        eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                        eastl::allocator>>::operator[](this_00, (ushort*)&local_138);
                    *puVar6 = 0;
                    local_138._0_2_ = *(undefined2*)(lVar5 + 12);
                    puVar6 = (undefined2*)eastl::vector_map<
                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                    operator[](
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                            this_01,
                        (ushort*)&local_138);
                    *puVar6 = 0;
                    (**(code**)(local_b8->field_0 + 24))(local_b8, puVar4, this_01, local_a0, PTR_IDENTITY_100ee6730);
                    bVar2 = math::operator==((Vector3T*)&local_68, (Vector3T*)&local_68);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("worldPos[0] == worldPos[0]",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/VFXAttachmentInfo.cpp",
                                  92, (char*)0);
                    }
                }
                uVar8 = uVar8 + 1;
                puVar4 = (undefined8*)((long)puVar4 + 12);
            } while (uVar8 != 3);
        }
        math::Vector3T<float>::Vector3T(local_f8, 0.0);
        pMVar1 = local_a8;
        lVar5 = 0;
        do {
            math::Vector3T<float>::operator*=((Vector3T<float>*)((long)&local_68 + lVar5), pMVar1);
            math::Vector3T<float>::operator+=(local_f8, (Vector3T*)((long)&local_68 + lVar5));
            lVar5 = lVar5 + 12;
        } while (lVar5 != 36);
        math::Vector3T<float>::operator/=(local_f8, 3.0);
        local_e8[0] = math::operator-((Vector3T*)&local_5c, (Vector3T*)&local_68);
        local_d8[0] = math::operator-((Vector3T*)&local_50, (Vector3T*)&local_68);
        local_80[0] = math::Vector3Cross<float>((Vector3T*)local_e8, (Vector3T*)local_d8);
        local_80->LengthSq();
        fVar9 = extraout_XMM0_Da;
        if (1.1920929e-07 < extraout_XMM0_Da) {
            local_70 = (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)CONCAT44(local_70._4_4_, extraout_XMM0_Da);
            pVVar7 = (Vector3T*)local_80->Normalize();
            local_80->SetXYZ(pVVar7);
            local_90[0] = math::Vector3Cross<float>((Vector3T*)PTR_RIGHT_100ee66f0, (Vector3T*)local_80);
            fVar9 = (float)local_90->LengthSq();
            if (fVar9 < 1.1920929e-07) {
                local_138._0_8_ = math::Vector3Cross<float>((Vector3T*)PTR_UP_100ee66d0, (Vector3T*)local_80);
                local_90->SetXYZ((Vector3T*)&local_138);
            }
            math::Vector3Normalize<float>((Vector3T*)local_90);
            local_c8[0] = math::Vector3Cross<float>((Vector3T*)local_80, (Vector3T*)local_90);
            math::Matrix33T<float>::Matrix33T(local_160, (Vector3T*)local_c8, (Vector3T*)local_80, (Vector3T*)local_90);
            new (&local_138) math::Matrix44T<float>(local_160, local_f8);
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&local_98->field_160, &local_138);
            fVar9 = local_70._0_4_;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return 1.1920929e-07 < fVar9;
    }

    // 0x1007d7920, 96 bytes, placed by class name and debug map
    // VFXAttachmentInfo::Transform(math::Matrix44T<float> const&)
    void VFXAttachmentInfo::Transform(Matrix44T* param_1) {
        Vector3T<float>* pVVar1;
        undefined8* this_00;

        this_00 = &field_4;
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 0);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 1);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 2);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
    }

    // 0x1007d7980, 96 bytes, placed by class name and debug map
    // VFXAttachmentInfo::Translate(math::Vector3T<float> const&)
    void VFXAttachmentInfo::Translate(Vector3T* param_1) {
        Vector3T<float>* pVVar1;
        undefined8* this_00;

        this_00 = &field_4;
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 0);
        math::Vector3T<float>::operator+=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 1);
        math::Vector3T<float>::operator+=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 2);
        math::Vector3T<float>::operator+=(pVVar1, param_1);
    }

    // 0x1007d79e0, 96 bytes, placed by class name and debug map
    // VFXAttachmentInfo::Rotate(math::QuaternionT<float> const&)
    void VFXAttachmentInfo::Rotate(QuaternionT* param_1) {
        Vector3T<float>* pVVar1;
        undefined8* this_00;

        this_00 = &field_4;
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 0);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 1);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 2);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
    }

    // 0x1007d7a40, 304 bytes, placed by class name and debug map
    // VFXAttachmentInfo::Rotate90(Rotation90)
    void VFXAttachmentInfo::Rotate90(type* param_2) {
        uint uVar1;
        char cVar2;
        Layout* this_00;
        Layout* pLVar3;
        uint* puVar4;
        vector* pvVar5;
        uint local_38;

        if ((int)param_2 != 0) {
            cVar2 = (char)param_2;
            this_00 = (Layout*)(&field_4)->begin();
            pLVar3 = (Layout*)(&field_4)->end();
            for (; this_00 != pLVar3; this_00 = this_00 + 20) {
                if (cVar2 == '\x03') {
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                    param_2 = (type*)this_00->second();
                    eastl::swap<float>((float*)pvVar5, (float*)param_2);
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                    local_38 = *(uint*)pvVar5;
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                LAB_1007d7ad9:
                    local_38 = local_38 ^ 2147483648;
                    *(uint*)pvVar5 = local_38;
                } else {
                    if (cVar2 == '\x02') {
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                        uVar1 = *(uint*)pvVar5;
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                        *(uint*)pvVar5 = uVar1 ^ 2147483648;
                    LAB_1007d7aba:
                        puVar4 = (uint*)this_00->second();
                        local_38 = *puVar4;
                        pvVar5 = (vector*)this_00->second();
                        goto LAB_1007d7ad9;
                    }
                    if (cVar2 == '\x01') {
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                        param_2 = (type*)this_00->second();
                        eastl::swap<float>((float*)pvVar5, (float*)param_2);
                        goto LAB_1007d7aba;
                    }
                }
            }
        }
    }

    // 0x1007d7b90, 96 bytes, placed by class name and debug map
    // VFXAttachmentInfo::Scale(math::Vector3T<float> const&)
    void VFXAttachmentInfo::Scale(Vector3T* param_1) {
        Vector3T<float>* pVVar1;
        undefined8* this_00;

        this_00 = &field_4;
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 0);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 1);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
        pVVar1 = (Vector3T<float>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 2);
        math::Vector3T<float>::operator*=(pVVar1, param_1);
    }

    // 0x1007d7bf0, 112 bytes, placed by class name and debug map
    // VFXAttachmentInfo::MirrorZ()
    void VFXAttachmentInfo::MirrorZ() {
        long lVar1;
        undefined8* this_00;

        this_00 = &field_4;
        lVar1 = std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 0);
        *(uint*)(lVar1 + 8) = *(uint*)(lVar1 + 8) ^ 2147483648;
        lVar1 = std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 1);
        *(uint*)(lVar1 + 8) = *(uint*)(lVar1 + 8) ^ 2147483648;
        lVar1 = std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 2);
        *(uint*)(lVar1 + 8) = *(uint*)(lVar1 + 8) ^ 2147483648;
    }

    // 0x1007d7c60, 288 bytes, placed by class name and debug map
    // VFXAttachmentInfo::HillChange(HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, LocationHelpers::LocationHillChangeData const&)
    void VFXAttachmentInfo::HillChange(undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5,
                                       undefined8 param_6) {
        float* pfVar1;
        int iVar2;
        Vector2T<int>* pVVar3;
        undefined8* this_00;

        this_00 = &field_4;
        pVVar3 = (Vector2T<int>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 0);
        iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, pVVar3);
        pfVar1 = (float*)pVVar3->y();
        *pfVar1 = (float)iVar2;
        pVVar3 = (Vector2T<int>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 1);
        iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, pVVar3);
        pfVar1 = (float*)pVVar3->y();
        *pfVar1 = (float)iVar2;
        pVVar3 = (Vector2T<int>*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::operator[](
            (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_00, 2);
        iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, pVVar3);
        pfVar1 = (float*)pVVar3->y();
        *pfVar1 = (float)iVar2;
    }

} // namespace jag::graphics
