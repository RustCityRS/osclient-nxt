// libs/math/colour/Colour4.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    // 0x1001c73b0, 80 bytes, inline, placed by debug map only (low confidence)
    // R8G8B8A8FromColour4(Vector4T<float> const&)
    uint R8G8B8A8FromColour4(Vector4T* param_1) {
        return (uint)(long)(*(float*)(param_1 + 12) * 255.0) | (int)(long)(*(float*)(param_1 + 8) * 255.0) << 8 |
               (int)(long)(*(float*)(param_1 + 4) * 255.0) << 16 | (int)(long)(*(float*)param_1 * 255.0) << 24;
    }

    // 0x1001c75f0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int> operator/<int>(Vector2T<int> const&, Vector2T<int> const&)
    /* Vector2T<int> TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&,
   Vector2T<int> const&) */

    undefined8 operator/(Vector2T* param_1, Vector2T* param_2) {
        undefined8 uVar1;
        undefined1 local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(*(int*)param_1 / *(int*)param_2,
                                                       *(int*)(param_1 + 4) / *(int*)(param_2 + 4));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

    // 0x1001c7630, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<int>::Vector2T(int): jumps straight to the base-object constructor

    // 0x1001c7b00, 32 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<int>(Vector2T<int> const&, Vector2T<int> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&,
   Vector2T<int> const&) */

    bool operator==(Vector2T* param_1, Vector2T* param_2) {
        return *(int*)(param_1 + 4) == *(int*)(param_2 + 4) && *(int*)param_1 == *(int*)param_2;
    }

    // 0x1001c7b30, 96 bytes, inline, placed by debug map only (low confidence)
    // Colour4FromA8R8G8B8(unsigned int)
    undefined1[16] Colour4FromA8R8G8B8(uint param_1) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, (float)(param_1 >> 16 & 255) * 0.003921569, (float)(param_1 >> 8 & 255) * 0.003921569,
                       (float)(param_1 & 255) * 0.003921569, (float)(param_1 >> 24) * 0.003921569);
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

    // 0x1001c7ba0, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float>::operator+=(Vector4T<float> const&)
    /* QuaternionT<float>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float> const&) */

    QuaternionT<float>* QuaternionT<float>::operator+=(QuaternionT* param_1) {
        *(float*)this = *(float*)this + *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) + *(float*)(param_1 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) + *(float*)(param_1 + 8);
        *(float*)(this + 12) = *(float*)(this + 12) + *(float*)(param_1 + 12);
        return this;
    }

    // 0x1001c7bf0, 32 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<int>(Vector3T<int> const&, Vector3T<int> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&,
   Vector3T<int> const&) */

    bool operator==(Vector3T* param_1, Vector3T* param_2) {
        return *(int*)(param_1 + 8) == *(int*)(param_2 + 8) && *(long*)param_1 == *(long*)param_2;
    }

} // namespace jag::math

namespace jag::oldscape::rseven {
    // 0x1001c7400, 496 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::GetInterpolatedGroundColour(dash3d::world const&, int, int, jag::math::Vector3T<int>)
    undefined8 MapRebuildHandler_LogicThread::GetInterpolatedGroundColour(type* param_1, int param_2,
                                                                          undefined8 param_4, undefined4 param_5) {
        uint uVar1;
        bool bVar2;
        vector* pvVar3;
        int* piVar4;
        uint* puVar5;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        MapRebuildHandler_LogicThread* pMVar6;
        Vector2T<int>* this_01;
        int iVar7;
        undefined1 local_90[16];
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        uint local_5c;
        undefined8 local_58;
        ulong local_48;
        int local_40[2];
        undefined8 local_38;

        local_58._4_4_ = (int)((ulong)param_4 >> 32);
        local_58 = (type*)CONCAT44(-local_58._4_4_, (int)param_4);
        pvVar3 = local_58.SSOBeginPtr(param_1);
        iVar7 = *(int*)pvVar3;
        piVar4 = (int*)local_58.second();
        new (local_90) sidebars::SideBarData(iVar7, *piVar4);
        new (local_40) jag::math::Vector2T<int>(1);
        local_38 = jag::math::operator-((Vector2T*)local_90, (Vector2T*)local_40);
        new ((local_90 + 8)) jag::math::Vector2T<int>(128);
        local_68 = jag::math::operator/((Vector2T*)&local_38, (Vector2T*)(local_90 + 8));
        this_01 = (Vector2T<int>*)local_40;
        jag::math::Vector2T<int>::Vector2T(this_01, 128);
        local_38 = jag::math::operator/((Vector2T*)local_90, (Vector2T*)this_01);
        local_78 = *(undefined8*)PTR_ZERO_100ee6708;
        uStack_70 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        local_40[0] = 0;
        puVar5 = (uint*)local_68.y();
        uVar1 = *puVar5;
        piVar4 = (int*)local_38.y();
        local_48 = (ulong)uVar1;
        if ((int)uVar1 <= *piVar4) {
            do {
                pvVar3 = local_68.SSOBeginPtr(this_01);
                iVar7 = *(int*)pvVar3;
                pvVar3 = local_38.SSOBeginPtr(this_01);
                if (iVar7 <= *(int*)pvVar3) {
                    do {
                        this_01 = (Vector2T<int>*)(ulong)(uint)param_1;
                        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetSquare(
                            (uint)param_1, iVar7, (int)local_48);
                        pMVar6 = (MapRebuildHandler_LogicThread*)
                            eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                        if (pMVar6 != (MapRebuildHandler_LogicThread*)0) {
                            do {
                                if (*(int*)&pMVar6->field_44 == param_2) {
                                    this_01 = (Vector2T<int>*)local_58;
                                    SumVertexGroundColours(pMVar6, local_58, param_5, &local_78, local_40);
                                }
                                pMVar6 = (MapRebuildHandler_LogicThread*)((pMVar6[4].field_48 + 8))->end();
                            } while (pMVar6 != (MapRebuildHandler_LogicThread*)0);
                        }
                        pvVar3 = local_38.SSOBeginPtr(this_01);
                        bVar2 = iVar7 < *(int*)pvVar3;
                        iVar7 = iVar7 + 1;
                    } while (bVar2);
                }
                iVar7 = (int)local_48;
                local_5c = iVar7 + 1;
                piVar4 = (int*)local_38.y();
                local_48 = (ulong)local_5c;
            } while (iVar7 < *piVar4);
        }
        if (0 < local_40[0]) {
            jag::math::Vector4T<float>::operator/=((Vector4T<float>*)&local_78, (float)local_40[0]);
        }
        return local_78;
    }

    // 0x1001c7640, 160 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::SumVertexGroundColours(dash3d::Square const&, jag::math::Vector3T<int>, jag::math::Vector4T<float>&, int&)
    void MapRebuildHandler_LogicThread::SumVertexGroundColours(undefined8 param_1, undefined4 param_3,
                                                               undefined8 param_4, undefined8 param_5) {
        undefined8 uVar1;
        bool bVar2;

        bVar2 = field_48->operator_cast_to_bool();
        if (bVar2) {
            uVar1 = shared_ptr<dash3d::QuickGround>::operator*((shared_ptr<dash3d::QuickGround>*)field_48);
            SumQuickGroundColours(this, uVar1, param_1, param_3, param_4, param_5);
        } else {
            bVar2 = field_64->operator_cast_to_bool();
            if (bVar2) {
                uVar1 = shared_ptr<dash3d::Ground>::operator*((shared_ptr<dash3d::Ground>*)field_64);
                SumDetailedGroundColours(uVar1, param_1, param_3, param_4, param_5);
            }
        }
    }

    // 0x1001c76e0, 368 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::SumQuickGroundColours(dash3d::Square const&, dash3d::QuickGround const&, jag::math::Vector3T<int>, jag::math::Vector4T<float>&, int&)
    void MapRebuildHandler_LogicThread::SumQuickGroundColours(undefined8 param_1_00, undefined8 param_2_00,
                                                              long param_1, QuickGround* param_2, undefined8 param_5,
                                                              undefined4 param_6, QuaternionT<float>* param_7,
                                                              int* param_8) {
        int iVar1;
        uint uVar4;
        vector* pvVar5;
        int* piVar6;
        Vector2T* pVVar7;
        ushort* puVar8;
        ulong uVar9;
        undefined1 local_a8[16];
        undefined1 local_98[16];
        undefined1 local_88[16];
        undefined8 local_78;
        undefined4 local_70;
        int* local_68;
        undefined8 local_58;
        undefined8 uStack_50;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_78 = param_5;
        local_70 = param_6;
        if (IsQuickGroundBlendable(param_2) != '\0') {
            uVar9 = 0;
            local_68 = param_8;
            new (local_a8) sidebars::SideBarData(0, 0);
            new ((local_a8 + 8)) sidebars::SideBarData(128, 0);
            new (local_98) sidebars::SideBarData(128, 128);
            new ((local_98 + 8)) sidebars::SideBarData(0, 128);
            local_40 = param_2->field_4;
            local_3c = param_2->field_8;
            local_38 = param_2->field_12;
            local_34 = param_2->field_16;
            pvVar5 = local_78.SSOBeginPtr(0);
            iVar1 = *(int*)pvVar5;
            piVar6 = (int*)local_78.second();
            new (local_88) sidebars::SideBarData(iVar1, *piVar6);
            new ((local_88 + 8)) sidebars::SideBarData(*(int*)(param_1 + 36) << 7, *(int*)(param_1 + 40) << 7);
            do {
                pVVar7 = (Vector2T*)std::array<jag::math::Vector2T<int>, 4ul>::operator[](
                    (array<jag::math::Vector2T<int>, 4ul>*)local_a8, uVar9);
                local_58 = jag::math::operator+((Vector2T*)(local_88 + 8), pVVar7);
                if (jag::math::operator==((Vector2T*)&local_58, (Vector2T*)local_88)) {
                    puVar8 = (ushort*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_40, uVar9);
                    uVar4 = jag::math::RunetekColour::HSLToRGB(*puVar8);
                    local_58 = jag::math::Colour4FromA8R8G8B8(uVar4);
                    uStack_50 = param_2_00;
                    jag::math::QuaternionT<float>::operator+=(param_7, (QuaternionT*)&local_58);
                    *local_68 = *local_68 + 1;
                    return;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 != 4);
        }
    }

} // namespace jag::oldscape::rseven
