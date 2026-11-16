// libs/graphics/runetek7/animation/asm/BlendSpace2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BlendSpace2D.h"

namespace jag::graphics {
    // 0x10095bfa0
    BlendSpace2D::BlendSpace2D(float* arg1, float* arg2, std::vector<BlendSpace2D::BlendSpaceEntry>&& blendSpaceEntrys,
                               eastl::vector<int>&& arg4)
        : BlendTreeNode(), field_40(arg1), field_48(arg2), field_56(blendSpaceEntrys), field_80(arg4) {
        if (arg1 == nullptr) {
            LogAssert("pVariableX != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2D.cpp",
                      17, nullptr);
        }
        if (arg2 == nullptr) {
            LogAssert("pVariableY != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2D.cpp",
                      18, nullptr);
        }
    }

    // 0x10095c0c0
    void BlendSpace2D::GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                               const math::Matrix44T<float>& matrix44) {
        int iVar1;
        int iVar2;
        int iVar3;
        vector<BlendSpace2D::BlendSpaceEntry>* this_00;
        bool bVar5;
        long lVar6;
        unsigned long uVar7;
        int* piVar8;
        long lVar9;
        long lVar10;
        unique_ptr<BlendTreeNode>* puVar11;
        long* plVar12;
        long* plVar13;
        long* plVar14;
        unsigned long uVar15;
        WrapArray<game::Cutscene2DAnimation<float>::Key const>* this_02;
        vector<unsigned int>* this_03;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_19a0;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_1990;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_1980;
        WrapArray<JointPose> local_1970;
        WrapArray<JointPose> local_1960;
        WrapArray<JointPose> local_1950;
        WrapArray<JointPose> local_1940;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_1930;
        Point<float> local_1920;
        Point<float> local_1908;
        unsigned long local_18f8;
        vector<unsigned int>* local_18e8;
        float local_18e0;
        float local_18dc;
        unsigned long local_18d8;
        unsigned long local_18d0;
        long* local_18c8;
        float local_18bc;
        char local_1899;
        Point<float> local_1898;
        Point<float> local_c68;

        vector<BlendSpace2D::BlendSpaceEntry>* local_1910 = (vector<BlendSpace2D::BlendSpaceEntry>*)&field_56;
        BlendSpace2D* local_18f0 = this;
        if (local_1910->empty() == '\0') {
            if (local_18f0->field_40 == nullptr) {
                LogAssert("m_pPositionX != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace2D.cpp",
                          29, nullptr);
            }
            if (local_18f0->field_48 == nullptr) {
                LogAssert("m_pPositionY != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace2D.cpp",
                          30, nullptr);
            }
            this_03 = (vector<unsigned int>*)&local_18f0->field_80;
            lVar6 = this_03->size();
            if (6148914691236517205 < (unsigned long)(lVar6 * -6148914691236517205)) {
                LogAssert("m_indices.size() % 3 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace2D.cpp",
                          31, nullptr);
            }
            lVar6 = this_03->size();
            if (lVar6 != 0) {
                uVar15 = 0;
                local_18e8 = this_03;
                do {
                    piVar8 = (int*)(*this_03)[uVar15];
                    iVar1 = *piVar8;
                    piVar8 = (int*)(*this_03)[uVar15 + 1];
                    iVar2 = *piVar8;
                    local_18f8 = uVar15 + 2;
                    piVar8 = (int*)(*this_03)[local_18f8];
                    this_00 = local_1910;
                    iVar3 = *piVar8;
                    local_18d0 = (long)iVar1;
                    lVar6 = (*local_1910)[(long)iVar1];
                    local_18d8 = (long)iVar2;
                    lVar9 = (*this_00)[(long)iVar2];
                    local_18c8 = (long*)(long)iVar3;
                    lVar10 = (*this_00)[(unsigned long)(long)iVar3];
                    local_c68 = math::Point(*local_18f0->field_40, *local_18f0->field_48);
                    local_1898 = math::Point(*(float*)(lVar6 + 8), *(float*)(lVar6 + 12));
                    local_1908 = math::Point(*(float*)(lVar9 + 8), *(float*)(lVar9 + 12));
                    local_1920 = math::Point(*(float*)(lVar10 + 8), *(float*)(lVar10 + 12));
                    bVar5 = math::GetBarycentricCoordinates<float>(local_18e0, local_18dc, local_18bc, local_c68,
                                                                   local_1898, local_1908, local_1920);
                    if (bVar5) {
                        local_1899 = bVar5;
                        puVar11 = (unique_ptr<BlendTreeNode>*)(*this_00)[local_18d0];
                        plVar12 = (long*)puVar11->get();
                        puVar11 = (unique_ptr<BlendTreeNode>*)(*this_00)[local_18d8];
                        plVar13 = (long*)puVar11->get();
                        puVar11 = (unique_ptr<BlendTreeNode>*)(*this_00)[(unsigned long)local_18c8];
                        plVar14 = (long*)puVar11->get();
                        this_03 = local_18e8;
                        uVar15 = local_18f8;
                        if (local_18e0 == 1.0) {
                            this_02 = &local_19a0;
                            this_02->WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
                            lVar6 = *plVar12;
                            plVar13 = plVar12;
                        LAB_10095c3f0:
                            (**(void (**)(...))(lVar6 + 16))(plVar13, this_02, labelDatas, matrix44);
                        } else {
                            local_18d8 = (((uint64_t)local_18d8._4_4_ << 32) | (uint32_t)local_18e0);
                            local_18c8 = plVar14;
                            if (local_18dc == 1.0) {
                                this_02 = &local_1990;
                                this_02->WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
                                lVar6 = *plVar13;
                                goto LAB_10095c3f0;
                            }
                            local_18d0 = (((uint64_t)local_18d0._4_4_ << 32) | (uint32_t)local_18dc);
                            if (local_18bc == 1.0) {
                                this_02 = &local_1980;
                                this_02->WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
                                lVar6 = *local_18c8;
                                plVar13 = local_18c8;
                                goto LAB_10095c3f0;
                            }
                            uVar7 = wrapArray->HeapBeginPtr();
                            local_c68 = eastl::fixed_vector<JointPose, 64ul>(uVar7);
                            uVar7 = wrapArray->HeapBeginPtr();
                            local_1898 = eastl::fixed_vector<JointPose, 64ul>(uVar7);
                            local_1970.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_c68);
                            (**(void (**)(...))(*plVar12 + 16))(plVar12, &local_1970, labelDatas, matrix44);
                            local_1960.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_1898);
                            (**(void (**)(...))(*plVar13 + 16))(plVar13, &local_1960, labelDatas, matrix44);
                            local_1950.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_c68);
                            local_1908.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_c68);
                            local_1920.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_1898);
                            pose::BlendJointPoses(&local_1950, local_1908, local_1920,
                                                  (float)local_18d0 / ((float)local_18d8 + (float)local_18d0));
                            local_1940.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_1898);
                            (**(void (**)(...))(*local_18c8 + 16))(local_18c8, &local_1940, labelDatas, matrix44);
                            local_1930.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
                            local_1908.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_c68);
                            local_1920.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_1898);
                            pose::BlendJointPoses(&local_1930, local_1908, local_1920, local_18bc);
                        }
                        if (local_1899 != '\0')
                            break;
                    } else {
                        uVar15 = local_18f8;
                        this_03 = local_18e8;
                    }
                    uVar7 = this_03->size();
                    uVar15 = uVar15 + 1;
                } while (uVar15 < uVar7);
            }
        }
    }

    // 0x100970dd0: BlendSpace2D::BlendSpaceEntry::~BlendSpaceEntry() has the same machine code as BlendSpace1D::BlendSpaceEntry::~BlendSpaceEntry()

} // namespace jag::graphics

namespace jag::math {
    // 0x10095c680
    bool GetBarycentricCoordinates<float>(float& arg1, float& arg2, float& arg3, const Vector2T<float>& vector21,
                                          const Vector2T<float>& vector22, const Vector2T<float>& vector23,
                                          const Vector2T<float>& vector24) {
        float fVar2 = (*(float*)(vector22 + 4) - *(float*)(vector24 + 4)) * (*(float*)vector24 - *(float*)vector23) +
                      (*(float*)vector22 - *(float*)vector24) * (*(float*)(vector23 + 4) - *(float*)(vector24 + 4));
        if (fVar2 == 0.0) {
            LogAssert("denominator != T(0)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/IntersectionTests.h",
                      229, "Degenerate triangle passed into GetBarycentricCoordinates()", vector22, vector23, arg2,
                      arg3);
        }
        fVar2 = 1.0 / fVar2;
        arg1 = ((*(float*)(vector21 + 4) - *(float*)(vector24 + 4)) * (*(float*)vector24 - *(float*)vector23) +
                (*(float*)vector21 - *(float*)vector24) * (*(float*)(vector23 + 4) - *(float*)(vector24 + 4))) *
               fVar2;
        fVar2 = ((*(float*)(vector21 + 4) - *(float*)(vector24 + 4)) * (*(float*)vector22 - *(float*)vector24) +
                 (*(float*)vector21 - *(float*)vector24) * (*(float*)(vector24 + 4) - *(float*)(vector22 + 4))) *
                fVar2;
        arg2 = fVar2;
        fVar2 = 1.0 - (fVar2 + arg1);
        arg3 = fVar2;
        bool bVar1 = false;
        if ((0.0 <= arg1) && (arg1 <= 1.0)) {
            bVar1 = fVar2 <= 1.0 && (0.0 <= fVar2 && (arg2 <= 1.0 && 0.0 <= arg2));
        }
        return bVar1;
    }

} // namespace jag::math
