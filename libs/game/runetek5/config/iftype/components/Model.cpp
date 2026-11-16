// libs/game/runetek5/config/iftype/components/Model.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Model.h"

namespace jag::game {
    // 0x100269a50: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings::GetID() const, which has identical code
    Model::GetType() const;

    // 0x100536380, 160 bytes, placed by class name and debug map
    // Model::SetRecol(int, unsigned short, unsigned short)
    void Model::SetRecol(int param_1, ushort param_2, ushort param_3) {
        undefined1* this_00;
        ushort* puVar1;
        char cVar2;

        if ((uint)param_1 < 16) {
            this_00 = &field_448;
            cVar2 = this_00->empty();
            if (cVar2 != '\0') {
                this_00->set_max_size(16, 0);
                (&field_472, 16, 0)->set_max_size();
            }
            puVar1 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                (Array<unsigned short, eastl::allocator>*)this_00, (long)param_1);
            *puVar1 = param_2;
            puVar1 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                (Array<unsigned short, eastl::allocator>*)&field_472, (long)param_1);
            *puVar1 = param_3;
            ClearModelCache(this, true);
        }
    }

    // 0x100536460, 192 bytes, placed by class name
    // Model::SetRemat(int, int, int)
    void Model::SetRemat(int param_1, int param_2, int param_3) {
        undefined1* this_00;
        undefined2* puVar1;
        char cVar2;

        if ((uint)param_1 < 16) {
            this_00 = &field_496;
            cVar2 = this_00->empty();
            if (cVar2 != '\0') {
                this_00->set_max_size(16, 0);
                (&field_520, 16, 0)->set_max_size();
            }
            if ((((uint)param_2 < 65535) && (param_3 < 65535)) && (-2 < param_3)) {
                puVar1 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)this_00, (long)param_1);
                *puVar1 = (short)param_2;
                puVar1 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)&field_520, (long)param_1);
                *puVar1 = (short)param_3;
                ClearModelCache(this, true);
            }
        }
    }

    // 0x100536520, 160 bytes, placed by class name
    // Model::SetModelTransform(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, unsigned int)
    void Model::SetModelTransform(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, uint param_4) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_568, param_1, (ulong)param_4, uVar1)->SetValue();
        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_616, param_2, (ulong)param_4, uVar1)->SetValue();
        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_664, param_3, (ulong)param_4, uVar1)->SetValue();
        GetModelTransform(this, true);
    }

    // 0x1005365c0, 288 bytes, placed by class name
    // Model::GetModelTransform(bool)
    undefined1* Model::GetModelTransform(bool param_1) {
        char cVar1;
        ulonglong uVar2;
        undefined7 in_register_00000031;
        Matrix44T local_a8;
        undefined1 local_60[16];
        undefined8 local_50[2];
        undefined8 local_40[2];
        undefined8 local_30[2];

        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            uVar2 = FrameTime::GetCurrentTimeMS();
            cVar1 = (&field_616, uVar2)->IsTransitioning();
            if (cVar1 == '\0') {
                uVar2 = FrameTime::GetCurrentTimeMS();
                cVar1 = (&field_568, uVar2)->IsTransitioning();
                if (cVar1 == '\0') {
                    uVar2 = FrameTime::GetCurrentTimeMS();
                    cVar1 = (&field_664, uVar2)->IsTransitioning();
                    if (cVar1 == '\0')
                        goto LAB_1005366c5;
                }
            }
        }
        uVar2 = FrameTime::GetCurrentTimeMS();
        local_50[0] = (&field_616, uVar2)->GetValue();
        math::QuaternionYawPitchRoll<float>((math*)local_60, (Vector3T*)local_50);
        uVar2 = FrameTime::GetCurrentTimeMS();
        local_40[0] = (&field_568, uVar2)->GetValue();
        uVar2 = FrameTime::GetCurrentTimeMS();
        local_30[0] = (&field_664, uVar2)->GetValue();
        new (&local_a8) math::Matrix44T<float>(local_60, local_40, local_30);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_720, &local_a8);
    LAB_1005366c5:
        return &field_720;
    }

    // 0x100536710, 544 bytes, placed by class name
    // Model::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Model::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* puVar1;
        byte bVar2;
        short sVar3;
        ushort uVar4;
        undefined4 uVar5;
        uint uVar6;
        int* piVar7;
        uint* puVar8;
        byte bVar9;

        field_392 = 1;
        uVar5 = param_1->gSmart2or4s();
        field_396 = uVar5;
        bVar2 = param_1->g1();
        bVar9 = bVar2 >> 1 & 1;
        field_560 = bVar9;
        field_440 = bVar2 >> 2 & 1;
        field_441 = bVar2 >> 3 & 1;
        if ((bVar2 & 1) == 0) {
            if (bVar9 == 0)
                goto LAB_1005368d5;
            sVar3 = param_1->g2s();
            puVar1 = &field_416;
            piVar7 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 0);
            *piVar7 = (int)sVar3;
            sVar3 = param_1->g2s();
            piVar7 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 1);
            *piVar7 = (int)sVar3;
            sVar3 = param_1->g2s();
            piVar7 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 2);
            *piVar7 = (int)sVar3;
            uVar4 = param_1->g2();
            puVar1 = &field_404;
            puVar8 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 0);
            *puVar8 = (uint)uVar4;
            uVar4 = param_1->g2();
            puVar8 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 1);
            *puVar8 = (uint)uVar4;
            uVar4 = param_1->g2();
            puVar8 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 2);
            *puVar8 = (uint)uVar4;
            sVar3 = param_1->g2s();
            uVar6 = (uint)sVar3;
        } else {
            sVar3 = param_1->g2s();
            piVar7 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)&field_416, 0);
            *piVar7 = (int)sVar3;
            sVar3 = param_1->g2s();
            piVar7 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)&field_416, 1);
            *piVar7 = (int)sVar3;
            uVar4 = param_1->g2();
            puVar1 = &field_404;
            puVar8 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 0);
            *puVar8 = (uint)uVar4;
            uVar4 = param_1->g2();
            puVar8 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 1);
            *puVar8 = (uint)uVar4;
            uVar4 = param_1->g2();
            puVar8 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)puVar1, 2);
            *puVar8 = (uint)uVar4;
            uVar4 = param_1->g2();
            uVar6 = (uint)uVar4;
        }
        field_428 = uVar6;
    LAB_1005368d5:
        uVar5 = param_1->gSmart2or4s();
        field_564 = uVar5;
        if (field_52 != '\0') {
            uVar4 = param_1->g2();
            field_432 = (uint)uVar4;
        }
        if (field_53 != '\0') {
            uVar4 = param_1->g2();
            field_436 = (uint)uVar4;
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Model::~Model();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Model::~Model();

} // namespace jag::game
