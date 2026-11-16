// libs/math/colour/Colour4.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    // 0x1001c73b0
    unsigned int R8G8B8A8FromColour4(const Vector4T<float>& vector4) {
        return (unsigned int)(long)(*(float*)(vector4 + 12) * 255.0) |
               (int)(long)(*(float*)(vector4 + 8) * 255.0) << 8 | (int)(long)(*(float*)(vector4 + 4) * 255.0) << 16 |
               (int)(long)(*(float*)vector4 * 255.0) << 24;
    }

    // 0x1001c75f0
    Vector2T<int> operator/ <int>(const Vector2T<int>& vector21, const Vector2T<int>& vector22) {
        uint64_t uVar1;
        uint8_t local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(*(int*)vector21 / *(int*)vector22,
                                                       *(int*)(vector21 + 4) / *(int*)(vector22 + 4));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

    // 0x1001c7b00
    bool operator== <int>(const Vector2T<int>& vector21, const Vector2T<int>& vector22) {
        return *(int*)(vector21 + 4) == *(int*)(vector22 + 4) && *(int*)vector21 == *(int*)vector22;
    }

    // 0x1001c7b30
    char* Colour4FromA8R8G8B8(unsigned int arg1) {
        char* extraout_RAX;

        ImVec4 local_18((float)(arg1 >> 16 & 255) * 0.003921569f, (float)(arg1 >> 8 & 255) * 0.003921569f,
                        (float)(arg1 & 255) * 0.003921569f, (float)(arg1 >> 24) * 0.003921569f);
        return extraout_RAX;
    }

    // 0x1001c7ba0
    QuaternionT<float>* Vector4T<float>::operator+=(const Vector4T<float>& vector4) {
        *(float*)this = *(float*)this + *(float*)vector4;
        *(float*)(this + 4) = *(float*)(this + 4) + *(float*)(vector4 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) + *(float*)(vector4 + 8);
        *(float*)(this + 12) = *(float*)(this + 12) + *(float*)(vector4 + 12);
        return this;
    }

    // 0x1001c7bf0
    bool operator== <int>(const Vector3T<int>& vector31, const Vector3T<int>& vector32) {
        return *(int*)(vector31 + 8) == *(int*)(vector32 + 8) && *(long*)vector31 == *(long*)vector32;
    }

} // namespace jag::math

namespace jag::oldscape::rseven {
    // 0x1001c7400
    uint64_t MapRebuildHandler_LogicThread::GetInterpolatedGroundColour(const dash3d::world& world, int arg2, int arg3,
                                                                        jag::math::Vector3T<int> vector3) {
        bool bVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        MapRebuildHandler_LogicThread* this_01;
        int in_register_0000000c;
        uint8_t local_90[16];
        unsigned int local_5c;
        int local_40[2];

        uint64_t local_58 = (Square*)(((uint64_t)-in_register_0000000c << 32) | (uint32_t)arg3);
        auto piVar3 = local_58.SSOBeginPtr();
        int iVar5 = *piVar3;
        piVar3 = (int*)local_58.second();
        new (local_90) sidebars::SideBarData(iVar5, *piVar3);
        new (local_40) jag::math::Vector2T(1);
        uint64_t local_38 = *local_90 - *local_40;
        new ((local_90 + 8)) jag::math::Vector2T(128);
        uint64_t local_68 = local_38 / (*((local_90 + 8)));
        new (local_40) jag::math::Vector2T(128);
        local_38 = *local_90 / *local_40;
        return local_78 = *(uint64_t*)PTR_ZERO_100ee6708;
        uint64_t uStack_70 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        local_40[0] = 0;
        auto puVar4 = local_68.y();
        unsigned int uVar1 = *puVar4;
        piVar3 = (int*)local_38.y();
        unsigned long local_48 = (unsigned long)uVar1;
        if ((int)uVar1 <= *piVar3) {
            do {
                piVar3 = (int*)local_68.SSOBeginPtr();
                iVar5 = *piVar3;
                piVar3 = (int*)local_38.SSOBeginPtr();
                if (iVar5 <= *piVar3) {
                    do {
                        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetSquare((int)world, iVar5,
                                                                                                     (int)local_48);
                        this_01 = (MapRebuildHandler_LogicThread*)this_00->end();
                        if (this_01 != nullptr) {
                            do {
                                if (this_01->field_44 == arg2) {
                                    SumVertexGroundColours(this_01, local_58,
                                                           (Vector3T<int>*)(unsigned long)(unsigned int)vector3,
                                                           (Vector4T<float>*)&local_78, local_40);
                                }
                                this_01 = (MapRebuildHandler_LogicThread*)((this_01[1].field_64 + 7))->end();
                            } while (this_01 != nullptr);
                        }
                        piVar3 = (int*)local_38.SSOBeginPtr();
                        bVar2 = iVar5 < *piVar3;
                        iVar5 = iVar5 + 1;
                    } while (bVar2);
                }
                iVar5 = (int)local_48;
                local_5c = iVar5 + 1;
                piVar3 = (int*)local_38.y();
                local_48 = (unsigned long)local_5c;
            } while (iVar5 < *piVar3);
        }
        if (0 < local_40[0]) {
            local_78 /= ((float)local_40[0]);
        }
        return local_78;
    }

    // 0x1001c7640
    void MapRebuildHandler_LogicThread::SumVertexGroundColours(const dash3d::Square& square,
                                                               jag::math::Vector3T<int> vector3,
                                                               jag::math::Vector4T<float>& vector4, int& arg4) {
        Square* square_00;

        if (!(field_48->operator_cast_to_bool())) {
            if (field_64->operator_cast_to_bool()) {
                SumDetailedGroundColours((MapRebuildHandler_LogicThread*)**field_64, (Ground*)square,
                                         (Vector3T<int>*)((unsigned long)vector3 & 4294967295), vector4, arg4);
            }
        } else {
            square_00 = (Square*)**field_48;
            SumQuickGroundColours(*square_00, square, (Vector3T<int>*)((unsigned long)vector3 & 4294967295), vector4,
                                  arg4);
        }
    }

    // 0x1001c76e0
    void MapRebuildHandler_LogicThread::SumQuickGroundColours(const dash3d::Square& square,
                                                              const dash3d::QuickGround& quickGround,
                                                              jag::math::Vector3T<int> vector3,
                                                              jag::math::Vector4T<float>& vector4, int& arg5) {
        int arg1;
        int* piVar3;
        Vector2T<int>* vector22;
        unsigned short* puVar4;
        unsigned long arg1_01;
        uint8_t local_a8[16];
        uint8_t local_98[16];
        uint8_t local_88[16];
        int* local_68;
        uint64_t local_58[3];
        uint32_t local_40;
        uint32_t local_3c;
        uint32_t local_38;
        uint32_t local_34;

        uint32_t local_70 = (uint32_t)vector3;
        if (IsQuickGroundBlendable((QuickGround*)square) != '\0') {
            arg1_01 = 0;
            local_68 = arg5;
            new (local_a8) sidebars::SideBarData(0, 0);
            new ((local_a8 + 8)) sidebars::SideBarData(128, 0);
            new (local_98) sidebars::SideBarData(128, 128);
            new ((local_98 + 8)) sidebars::SideBarData(0, 128);
            local_40 = *(uint32_t*)((long)&square._vptr + 4);
            local_3c = *(uint32_t*)&square.field_8;
            local_38 = *(uint32_t*)&square.field_12;
            local_34 = *(uint32_t*)&square.field_16;
            piVar3 = (int*)(quickGround).SSOBeginPtr();
            arg1 = *piVar3;
            piVar3 = (int*)(quickGround).second();
            new (local_88) sidebars::SideBarData(arg1, *piVar3);
            new ((local_88 + 8)) sidebars::SideBarData(field_36 << 7, field_40 << 7);
            do {
                vector22 = (Vector2T<int>*)(*local_a8)[arg1_01];
                local_58[0] = (*((local_88 + 8))) + *vector22;
                if (*local_58 == *local_88) {
                    puVar4 = &local_40[arg1_01];
                    jag::math::Colour4FromA8R8G8B8(jag::math::RunetekColour::HSLToRGB(*puVar4));
                    vector4 += *local_58;
                    *local_68 = *local_68 + 1;
                    return;
                }
                arg1_01 = arg1_01 + 1;
            } while (arg1_01 != 4);
        }
    }

} // namespace jag::oldscape::rseven
