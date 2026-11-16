// libs/graphics/runetek7/animation/asm/BlendSpace1D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BlendSpace1D.h"

namespace jag::graphics {
    // 0x10095ac50
    BlendSpace1D::BlendSpace1D(float arg1, float arg2, float* arg3,
                               std::vector<BlendSpace1D::BlendSpaceEntry>&& blendSpaceEntrys)
        : BlendTreeNode(), field_36(arg1), field_40(arg2), field_48(arg3) {
        uint8_t auVar1[16];

        uint8_t* this_00 = &field_56;
        new (this_00) std::vector<BlendSpace1D::BlendSpaceEntry>(blendSpaceEntrys);
        new (&field_80) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        if (arg3 == nullptr) {
            LogAssert("pVariable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace1D.cpp",
                      16, nullptr);
        }
        auto wrap_iter1 = this_00->begin();
        auVar1 = this_00->end();
        std::sort<std::__wrap_iter<BlendSpace1D::BlendSpaceEntry*>,
                  BlendSpace1D::__wrap_iter(float, float, float*, std::vector<BlendSpace1D::BlendSpaceEntry>&&)::__9>(
            wrap_iter1, auVar1._0_8_, auVar1._8_8_);
    }

    // 0x10095adb0
    void BlendSpace1D::GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                               const math::Matrix44T<float>& matrix44) {
        float fVar1;
        unsigned int uVar2;
        int iVar4;
        unsigned int uVar5;
        unsigned long uVar6;
        long lVar7;
        unique_ptr<BlendTreeNode>* puVar8;
        long* plVar9;
        long* plVar10;
        unsigned long arg1;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_1920;
        WrapArray<JointPose> local_1910;
        WrapArray<JointPose> local_1900;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_18f0;
        WrapArray<JointPose> local_18e0;
        WrapArray<JointPose> local_18d0;
        Matrix44T<float>* local_18b0;
        float local_18a4;
        unsigned int local_18a0;
        unsigned int local_189c;
        unsigned int local_1898[780];
        unsigned int local_c68[780];

        uint8_t* this_00 = &field_56;
        if (this_00->empty() == '\0') {
            if (field_48 == nullptr) {
                LogAssert("m_pPosition != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace1D.cpp",
                          29, nullptr);
            }
            if (*field_48 < field_36) {
                LogAssert("*m_pPosition >= m_min",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace1D.cpp",
                          30, nullptr);
            }
            local_18b0 = matrix44;
            if (field_40 <= *field_48 && *field_48 != field_40) {
                LogAssert("*m_pPosition <= m_max",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace1D.cpp",
                          31, nullptr);
            }
            local_18a0 = 0;
            local_189c = 0;
            uVar6 = this_00->size();
            if (uVar6 != 0) {
                local_18a4 = *field_48;
                arg1 = 0;
                do {
                    lVar7 = (*this_00)[arg1];
                    if (local_18a4 < *(float*)(lVar7 + 8) || local_18a4 == *(float*)(lVar7 + 8)) {
                        local_189c = (unsigned int)arg1;
                        break;
                    }
                    arg1 = (unsigned long)((unsigned int)arg1 + 1);
                } while (arg1 < uVar6);
            }
            local_18a0 = local_189c - 1;
            if (local_189c == 0) {
                local_18a0 = 0;
            }
            local_c68[0] = 0;
            iVar4 = this_00->size();
            local_1898[0] = iVar4 - 1;
            local_18a0 = math::Clamp<unsigned int>(local_18a0, *local_c68, *local_1898);
            local_c68[0] = 0;
            iVar4 = this_00->size();
            local_1898[0] = iVar4 - 1;
            uVar5 = math::Clamp<unsigned int>(local_189c, *local_c68, *local_1898);
            uVar2 = local_18a0;
            local_189c = uVar5;
            puVar8 = (unique_ptr<BlendTreeNode>*)(*this_00)[(unsigned long)local_18a0];
            plVar9 = (long*)puVar8->get();
            if (uVar2 == uVar5) {
                local_1920.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
                (**(void (**)(...))(*plVar9 + 16))(plVar9, &local_1920, labelDatas, local_18b0);
            } else {
                puVar8 = (unique_ptr<BlendTreeNode>*)(*this_00)[(unsigned long)uVar5];
                plVar10 = (long*)puVar8->get();
                uVar6 = wrapArray->HeapBeginPtr();
                new (local_c68) eastl::fixed_vector<JointPose, 64ul>(uVar6);
                uVar6 = wrapArray->HeapBeginPtr();
                new (local_1898) eastl::fixed_vector<JointPose, 64ul>(uVar6);
                local_1910.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(*local_c68);
                (**(void (**)(...))(*plVar9 + 16))(plVar9, &local_1910, labelDatas, local_18b0);
                local_1900.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(*local_1898);
                (**(void (**)(...))(*plVar10 + 16))(plVar10, &local_1900, labelDatas, local_18b0);
                lVar7 = (*this_00)[(unsigned long)local_189c];
                local_18b0 =
                    (Matrix44T<float>*)(((uint64_t)local_18b0._4_4_ << 32) | (uint32_t)(*(uint32_t*)(lVar7 + 8)));
                lVar7 = (*this_00)[(unsigned long)local_18a0];
                fVar1 = *(float*)(lVar7 + 8);
                local_18a4 = 0.0;
                if (local_18b0._0_4_ != fVar1) {
                    local_18a4 = (*field_48 - fVar1) / (local_18b0._0_4_ - fVar1);
                }
                local_18f0.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
                local_18e0.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(*local_c68);
                local_18d0.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(*local_1898);
                pose::BlendJointPoses(&local_18f0, local_18e0, local_18d0, local_18a4);
            }
        }
    }

} // namespace jag::graphics
