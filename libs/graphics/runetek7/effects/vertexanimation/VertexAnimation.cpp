// libs/graphics/runetek7/effects/vertexanimation/VertexAnimation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "VertexAnimation.h"

namespace jag::graphics {
    // 0x100009c90: the linker folded this into eastl::compressed_pair<eastl::string::Layout, eastl::allocator>::first(), which has identical code
    VertexAnimation::GetBoneTransforms() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    VertexAnimation::GetAnimationStateProvider() const;

    // 0x10091e6c0, 608 bytes, placed by class name and debug map
    // VertexAnimation::SetShaderConstants(render::RenderContext&, Shader&) const
    void VertexAnimation::SetShaderConstants(RenderContext* param_1, Shader* param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        ShaderProgram* this_00;
        HashedString* pHVar4;
        vector* pvVar5;
        Matrix43T<float>* pMVar6;
        Vector3T<float>* pVVar7;
        float* pfVar8;
        Layout* pLVar9;
        ulong uVar10;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* pSVar12;
        float fVar13;

        this_00 = (ShaderProgram*)param_2->GetProgram();
        bVar1 = field_48->operator_cast_to_bool();
        pHVar4 = (HashedString*)graphics::operator*((graphics*)27);
        pvVar5 = SSOBeginPtr(param_1);
        iVar3 = pvVar5->HeapBeginPtr();
        if (bVar1) {
            pvVar5 = SSOBeginPtr(param_1);
            pMVar6 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                (WrapArray<math::Matrix43T<float>>*)pvVar5, 0);
            pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](pMVar6, 0);
            pfVar8 = (float*)math::Vector3T<float>::operator[](pVVar7, 0);
            this_00->SetShaderConstFloat4Array(pHVar4, iVar3 * 3, pfVar8, 0);
            pHVar4 = (HashedString*)graphics::operator*((graphics*)28);
            pLVar9 = (Layout*)GetScreen();
            uVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar9);
            pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetScreen();
            pfVar8 = (float*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
            this_00->SetShaderConstFloat4Array(pHVar4, (uint)(uVar10 >> 2), pfVar8, 1);
            pSVar12 = (SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                   std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>*)
                GetDefaultValue();
            cVar2 = pSVar12->empty();
            if (cVar2 == '\0') {
                pHVar4 = (HashedString*)graphics::operator*((graphics*)29);
                pLVar9 = (Layout*)GetDefaultValue();
                uVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
                pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetDefaultValue();
                pfVar8 = (float*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                this_00->SetShaderConstFloat4Array(pHVar4, (uint)(uVar10 >> 2), pfVar8, 1);
            }
            pHVar4 = (HashedString*)graphics::operator*((graphics*)26);
            fVar13 = 0.0;
            if (AnimationState::m_useSmoothSkinning != '\0') {
                fVar13 = 1.0;
            }
        } else {
            pMVar6 = (Matrix43T<float>*)Array<math::Matrix43T<float>, eastl::allocator>::operator[](
                (Array<math::Matrix43T<float>, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_BONES, 0);
            pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](pMVar6, 0);
            pfVar8 = (float*)math::Vector3T<float>::operator[](pVVar7, 0);
            this_00->SetShaderConstFloat4Array(pHVar4, iVar3 * 3, pfVar8, 0);
            pHVar4 = (HashedString*)graphics::operator*((graphics*)28);
            pLVar9 = (Layout*)GetScreen();
            uVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar9);
            pfVar8 = (float*)(&AnimationManager::IDENTITY_STATE_LABELS)->data();
            this_00->SetShaderConstFloat4Array(pHVar4, (uint)(uVar10 >> 2), pfVar8, 1);
            pSVar12 = (SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                   std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>*)
                GetDefaultValue();
            cVar2 = pSVar12->empty();
            if (cVar2 == '\0') {
                pHVar4 = (HashedString*)graphics::operator*((graphics*)29);
                pLVar9 = (Layout*)GetDefaultValue();
                uVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
                pfVar8 = (float*)(&AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS)->data();
                this_00->SetShaderConstFloat4Array(pHVar4, (uint)(uVar10 >> 2), pfVar8, 1);
            }
            pHVar4 = (HashedString*)graphics::operator*((graphics*)26);
            fVar13 = 0.0;
        }
        this_00->SetShaderConstFloat1(pHVar4, fVar13);
    }

    // 0x10091e920, 288 bytes, placed by class name and debug map
    // VertexAnimation::DeferredUpdateAnimation(eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*)
    void VertexAnimation::DeferredUpdateAnimation(vector_map* param_1, vector_map* param_2, vector_map* param_3,
                                                  vector_map* param_4) {
        undefined1* this_00;
        AnimationStateProvider* this_01;
        long* plVar3;
        vector* pvVar4;
        undefined8 uVar5;

        if (field_68 != 0) {
            this_00 = field_48;
            if (this_00->operator_cast_to_bool()) {
                this_01 = (AnimationStateProvider*)shared_ptr<AnimationStateProvider>::operator->(
                    (shared_ptr<AnimationStateProvider>*)this_00);
                this_01->WaitForAsyncTasks();
                ClearTransformData();
                plVar3 =
                    (long*)shared_ptr<AnimationStateProvider>::operator->((shared_ptr<AnimationStateProvider>*)this_00);
                pvVar4 = SSOBeginPtr(param_1);
                (**(code**)(*plVar3 + 16))(plVar3, pvVar4, param_1, param_2, PTR_IDENTITY_100ee6730);
                if (param_3 == (vector_map*)0) {
                    field_72 = 0;
                } else {
                    plVar3 = (long*)shared_ptr<AnimationStateProvider>::operator->(
                        (shared_ptr<AnimationStateProvider>*)this_00);
                    uVar5 = GetScreen();
                    (**(code**)(*plVar3 + 32))(plVar3, uVar5, param_3, 0);
                    field_72 = DetermineHasTransparentLabels(this, param_3);
                }
                if (param_4 != (vector_map*)0) {
                    plVar3 = (long*)shared_ptr<AnimationStateProvider>::operator->(
                        (shared_ptr<AnimationStateProvider>*)this_00);
                    uVar5 = GetDefaultValue();
                    (**(code**)(*plVar3 + 32))(plVar3, uVar5, param_4, 1);
                }
                field_68 = 0;
            }
        }
    }

    // 0x10091ea70, 176 bytes, placed by class name and debug map
    // VertexAnimation::DetermineHasTransparentLabels(eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&) const
    ulong VertexAnimation::DetermineHasTransparentLabels(vector_map* param_1) {
        WrapArray* pWVar1;
        long lVar2;
        long lVar3;
        QuaternionT<float>* pQVar4;
        float* pfVar5;
        undefined8 unaff_R15;
        bool bVar6;
        AnimationHelper local_38[16];

        pWVar1 = (WrapArray*)GetScreen();
        local_38->VectorArryFromLabelDeltas(pWVar1);
        lVar2 = param_1->HeapBeginPtr();
        lVar3 = param_1->end();
        bVar6 = lVar2 == lVar3;
        if (!bVar6) {
            pQVar4 = (QuaternionT<float>*)WrapArray<math::Vector4T<float>>::operator[](
                (WrapArray<math::Vector4T<float>>*)local_38, (ulong) * (ushort*)(lVar2 + 2));
            pfVar5 = (float*)math::QuaternionT<float>::qw(pQVar4);
            if (*pfVar5 == 0.0) {
                do {
                    bVar6 = lVar2 + 4 == lVar3;
                    if (bVar6)
                        break;
                    pQVar4 = (QuaternionT<float>*)WrapArray<math::Vector4T<float>>::operator[](
                        (WrapArray<math::Vector4T<float>>*)local_38, (ulong) * (ushort*)(lVar2 + 6));
                    pfVar5 = (float*)math::QuaternionT<float>::qw(pQVar4);
                    lVar2 = lVar2 + 4;
                } while (*pfVar5 == 0.0);
            }
        }
        return (CONCAT71((int7)((ulong)unaff_R15 >> 8), bVar6) ^ 1) & 4294967295;
    }

    // 0x10091eb20, 352 bytes, placed by class name and debug map
    // VertexAnimation::UpdateAnimation(ThreadPool&, unsigned int, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const*, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void VertexAnimation::UpdateAnimation(ThreadPool* param_1, uint param_2, vector_map* param_3, vector_map* param_4,
                                          vector_map* param_5, vector_map* param_6, Array* param_7,
                                          Matrix44T* param_8) {
        undefined1* this_00;
        AnimationStateProvider* this_01;
        long* plVar3;
        vector* pvVar4;
        undefined8 uVar5;

        if (field_64 != param_2) {
            this_00 = field_48;
            if (this_00->operator_cast_to_bool()) {
                field_64 = param_2;
                if (AnimationStateProvider::m_useAsyncAnimUpdate == '\0') {
                    ClearTransformData();
                    field_68 = 0;
                    plVar3 = (long*)shared_ptr<AnimationStateProvider>::operator->(
                        (shared_ptr<AnimationStateProvider>*)this_00);
                    (**(code**)(*plVar3 + 40))(plVar3, param_7, param_8);
                    plVar3 = (long*)shared_ptr<AnimationStateProvider>::operator->(
                        (shared_ptr<AnimationStateProvider>*)this_00);
                    pvVar4 = SSOBeginPtr(param_7);
                    (**(code**)(*plVar3 + 16))(plVar3, pvVar4, param_3, param_4, param_8);
                    if (param_5 == (vector_map*)0) {
                        field_72 = 0;
                    } else {
                        plVar3 = (long*)shared_ptr<AnimationStateProvider>::operator->(
                            (shared_ptr<AnimationStateProvider>*)this_00);
                        uVar5 = GetScreen();
                        (**(code**)(*plVar3 + 32))(plVar3, uVar5, param_5, 0);
                        field_72 = DetermineHasTransparentLabels(this, param_5);
                    }
                    if (param_6 != (vector_map*)0) {
                        plVar3 = (long*)shared_ptr<AnimationStateProvider>::operator->(
                            (shared_ptr<AnimationStateProvider>*)this_00);
                        uVar5 = GetDefaultValue();
                        (**(code**)(*plVar3 + 32))(plVar3, uVar5, param_6, 1);
                    }
                    field_64 = param_2;
                } else {
                    field_68 = param_2;
                    this_01 = (AnimationStateProvider*)shared_ptr<AnimationStateProvider>::operator->(
                        (shared_ptr<AnimationStateProvider>*)this_00);
                    this_01->BeginAsyncTasks(param_1, param_2, param_7, param_8);
                }
            }
        }
    }

    // 0x10091ec80, 48 bytes, placed by class name and debug map
    // VertexAnimation::EndUpdateAnimation()
    void VertexAnimation::EndUpdateAnimation() {
        AnimationStateProvider* this_00;

        if (field_48->operator_cast_to_bool()) {
            this_00 = (AnimationStateProvider*)shared_ptr<AnimationStateProvider>::operator->(
                (shared_ptr<AnimationStateProvider>*)field_48);
            this_00->WaitForAsyncTasks();
        }
    }

} // namespace jag::graphics
