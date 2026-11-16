// libs/graphics/runetek7/effects/vertexanimation/VertexAnimation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "VertexAnimation.h"

namespace jag::graphics {
    // 0x100009c90: VertexAnimation::GetBoneTransforms() const has the same machine code as eastl::compressed_pair<eastl::string::Layout>::first()

    // 0x1001a3c10: VertexAnimation::GetAnimationStateProvider() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x10091e6c0
    void VertexAnimation::SetShaderConstants(render::RenderContext& renderContext, Shader& shader) const {
        WrapArray<math::Matrix43T<float>>* this_01;
        Matrix43T<float>* pMVar5;
        Vector3T<float>* pVVar6;
        float* pfVar7;
        unsigned long uVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>* pSVar10;
        float arg2;

        auto this_00 = shader.GetProgram();
        bool cVar1 = m_animationStateProvider->operator_cast_to_bool();
        auto pHVar3 = graphics::operator*(27);
        Layout* pLVar4 = (Layout*)SSOBeginPtr();
        int iVar2 = pLVar4->HeapBeginPtr();
        if (!cVar1) {
            pMVar5 = (Matrix43T<float>*)(*((Array<math::Matrix43T<float>>*)&AnimationManager::IDENTITY_STATE_BONES))[0];
            pVVar6 = (Vector3T<float>*)(*pMVar5)[0];
            pfVar7 = (float*)(*pVVar6)[0];
            this_00->SetShaderConstFloat4Array(pHVar3, iVar2 * 3, pfVar7, 0);
            pHVar3 = (HashedString*)graphics::operator*(28);
            pLVar4 = (Layout*)GetScreen();
            uVar8 = pLVar4->HeapBeginPtr();
            pfVar7 =
                (float*)((Array<
                             std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&AnimationManager::IDENTITY_STATE_LABELS)
                    ->data();
            this_00->SetShaderConstFloat4Array(pHVar3, (unsigned int)(uVar8 >> 2), pfVar7, 1);
            pSVar10 = (SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>*)GetDefaultValue();
            cVar1 = pSVar10->empty();
            if (!cVar1) {
                pHVar3 = (HashedString*)graphics::operator*(29);
                pLVar4 = (Layout*)GetDefaultValue();
                uVar8 = pLVar4->HeapBeginPtr();
                pfVar7 = (float*)((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&AnimationManager::
                                      IDENTITY_STATE_BILLBOARD_LABELS)
                             ->data();
                this_00->SetShaderConstFloat4Array(pHVar3, (unsigned int)(uVar8 >> 2), pfVar7, 1);
            }
            pHVar3 = (HashedString*)graphics::operator*(26);
            arg2 = 0.0;
        } else {
            this_01 = (WrapArray<math::Matrix43T<float>>*)SSOBeginPtr();
            pMVar5 = (Matrix43T<float>*)(*this_01)[0];
            pVVar6 = (Vector3T<float>*)(*pMVar5)[0];
            pfVar7 = (float*)(*pVVar6)[0];
            this_00->SetShaderConstFloat4Array(pHVar3, iVar2 * 3, pfVar7, 0);
            pHVar3 = (HashedString*)graphics::operator*(28);
            pLVar4 = (Layout*)GetScreen();
            uVar8 = pLVar4->HeapBeginPtr();
            pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetScreen();
            pfVar7 = (float*)pvVar9->end();
            this_00->SetShaderConstFloat4Array(pHVar3, (unsigned int)(uVar8 >> 2), pfVar7, 1);
            pSVar10 = (SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>*)GetDefaultValue();
            cVar1 = pSVar10->empty();
            if (!cVar1) {
                pHVar3 = (HashedString*)graphics::operator*(29);
                pLVar4 = (Layout*)GetDefaultValue();
                uVar8 = pLVar4->HeapBeginPtr();
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetDefaultValue();
                pfVar7 = (float*)pvVar9->end();
                this_00->SetShaderConstFloat4Array(pHVar3, (unsigned int)(uVar8 >> 2), pfVar7, 1);
            }
            pHVar3 = (HashedString*)graphics::operator*(26);
            arg2 = 0.0;
            if (AnimationState::m_useSmoothSkinning != '\0') {
                arg2 = 1.0;
            }
        }
        this_00->SetShaderConstFloat1(pHVar3, arg2);
    }

    // 0x10091e920
    void VertexAnimation::DeferredUpdateAnimation(const eastl::vector_map<unsigned short, unsigned short>* arg1,
                                                  const eastl::vector_map<unsigned short, unsigned short>* arg2,
                                                  const eastl::vector_map<unsigned short, unsigned short>* arg3,
                                                  const eastl::vector_map<unsigned short, unsigned short>* arg4) {
        uint8_t* this_00;
        long* plVar1;
        uint64_t uVar2;

        if (field_68 != 0) {
            this_00 = m_animationStateProvider;
            if (this_00->operator_cast_to_bool() != '\0') {
                ((AnimationStateProvider*)(*this_00).operator->())->WaitForAsyncTasks();
                ClearTransformData();
                plVar1 = (long*)(*this_00).operator->();
                uVar2 = SSOBeginPtr();
                (**(void (**)(...))(*plVar1 + 16))(plVar1, uVar2, arg1, arg2, PTR_IDENTITY_100ee6730);
                if (arg3 == nullptr) {
                    field_72 = 0;
                } else {
                    plVar1 = (long*)(*this_00).operator->();
                    uVar2 = GetScreen();
                    (**(void (**)(...))(*plVar1 + 32))(plVar1, uVar2, arg3, 0);
                    field_72 = DetermineHasTransparentLabels(*arg3);
                }
                if (arg4 != nullptr) {
                    plVar1 = (long*)(*this_00).operator->();
                    uVar2 = GetDefaultValue();
                    (**(void (**)(...))(*plVar1 + 32))(plVar1, uVar2, arg4, 1);
                }
                field_68 = 0;
            }
        }
    }

    // 0x10091ea70
    unsigned long VertexAnimation::DetermineHasTransparentLabels(
        const eastl::vector_map<unsigned short, unsigned short>& arg1) const {
        QuaternionT<float>* pQVar3;
        float* pfVar4;
        uint64_t unaff_R15;

        auto wrapArray = GetScreen();
        auto local_38 = AnimationHelper::VectorArryFromLabelDeltas(*wrapArray);
        long lVar1 = arg1.HeapBeginPtr();
        long lVar2 = arg1.end();
        bool bVar5 = lVar1 == lVar2;
        if (!bVar5) {
            pQVar3 = &local_38[(unsigned long)*(unsigned short*)(lVar1 + 2)];
            pfVar4 = (float*)pQVar3->qw();
            if (*pfVar4 == 0.0) {
                do {
                    bVar5 = lVar1 + 4 == lVar2;
                    if (bVar5)
                        break;
                    pQVar3 = &local_38[(unsigned long)*(unsigned short*)(lVar1 + 6)];
                    pfVar4 = (float*)pQVar3->qw();
                    lVar1 = lVar1 + 4;
                } while (*pfVar4 == 0.0);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)bVar5) ^ 1) & 4294967295;
    }

    // 0x10091eb20
    void VertexAnimation::UpdateAnimation(ThreadPool& threadPool, unsigned int arg2,
                                          const eastl::vector_map<unsigned short, unsigned short>* arg3,
                                          const eastl::vector_map<unsigned short, unsigned short>* arg4,
                                          const eastl::vector_map<unsigned short, unsigned short>* arg5,
                                          const eastl::vector_map<unsigned short, unsigned short>* arg6,
                                          const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44) {
        uint8_t* this_00;
        long* plVar3;
        uint64_t uVar4;

        if (field_64 != arg2) {
            this_00 = m_animationStateProvider;
            if (this_00->operator_cast_to_bool() != '\0') {
                field_64 = arg2;
                if (AnimationStateProvider::m_useAsyncAnimUpdate == '\0') {
                    ClearTransformData();
                    field_68 = 0;
                    plVar3 = (long*)(*this_00).operator->();
                    (**(void (**)(...))(*plVar3 + 40))(plVar3, labelDatas, matrix44);
                    plVar3 = (long*)(*this_00).operator->();
                    uVar4 = SSOBeginPtr();
                    (**(void (**)(...))(*plVar3 + 16))(plVar3, uVar4, arg3, arg4, matrix44);
                    if (arg5 == nullptr) {
                        field_72 = 0;
                    } else {
                        plVar3 = (long*)(*this_00).operator->();
                        uVar4 = GetScreen();
                        (**(void (**)(...))(*plVar3 + 32))(plVar3, uVar4, arg5, 0);
                        field_72 = DetermineHasTransparentLabels(*arg5);
                    }
                    if (arg6 != nullptr) {
                        plVar3 = (long*)(*this_00).operator->();
                        uVar4 = GetDefaultValue();
                        (**(void (**)(...))(*plVar3 + 32))(plVar3, uVar4, arg6, 1);
                    }
                    field_64 = arg2;
                } else {
                    field_68 = arg2;
                    ((AnimationStateProvider*)(*this_00).operator->())
                        ->BeginAsyncTasks(threadPool, arg2, labelDatas, matrix44);
                }
            }
        }
    }

    // 0x10091ec80
    void VertexAnimation::EndUpdateAnimation() {
        if (m_animationStateProvider->operator_cast_to_bool() != '\0') {
            ((AnimationStateProvider*)(*m_animationStateProvider).operator->())->WaitForAsyncTasks();
        }
    }

} // namespace jag::graphics
