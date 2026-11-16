// libs/graphics/runetek7/effects/lighting/PointLightIndicesEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightIndicesEffect.h"

namespace jag::graphics {
    // 0x103bc0868, 1552 bytes, __common; zero-initialised
    PointLightIndicesEffect::s_effectMap;

    // 0x103bc0e78, 16 bytes, __common; set at startup by ___cxx_global_var_init.301
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> PointLightIndicesEffect::s_nullEffect;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    PointLightIndicesEffect::GetMapSquareFineCoordBounds();

    // 0x100936c50, 240 bytes, base-object constructor, placed by class name and debug map
    // PointLightIndicesEffect::PointLightIndicesEffect(RT7Core&, int)
    void PointLightIndicesEffect::PointLightIndicesEffect(RT7Core* param_1, int param_2) {
        uint uVar1;

        new (this) Effect(param_1);
        new (this) MakeSharedPool<PointLightIndicesEffect, 64>();
        field_0 = &PTR__PointLightIndicesEffect_100f19ed0;
        field_8 = 4294967295;
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_32 = 0;
        std::unique_ptr<float[], std::default_delete<float[]>>::unique_ptr<true, void>(
            (unique_ptr<float[], std::default_delete<float[]>>*)&field_40);
        field_48 = param_2;
        field_52 = 0;
        new (&field_64) math::Vector4T<float>();
        new (&field_80) math::Vector4T<float>();
        new (&field_96) eastl::vector<math::Sphere, eastl::allocator>();
        uVar1 = param_1->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_8 = uVar1;
        (&field_96, 64)->reserve();
    }

    // 0x100936e30, 16 bytes, complete-object constructor, placed by class name
    // PointLightIndicesEffect::PointLightIndicesEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x100936e40, 128 bytes, placed by class name
    // PointLightIndicesEffect::AddEffect(math::Vector3T<float> const&, shared_ptr<PointLightIndicesEffect> const&)
    void PointLightIndicesEffect::AddEffect(Vector3T* param_1, shared_ptr* param_2) {
        undefined4 in_EAX;
        undefined4 uVar1;
        PointLightIndicesEffect* this_00;
        shared_ptr<PointLightIndicesEffect>* this_01;
        undefined8 in_R8;
        undefined8 in_R9;
        int aiStackY_218[128];
        undefined8 uVar3;

        uVar1 = GetKeyFromWorldPos((graphics*)this, param_1);
        uVar3 = CONCAT44(uVar1, in_EAX);
        if (eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::count((int*)&s_effectMap) !=
            0) {
            /* WARNING: Subroutine does not return */
            LogAssert("s_effectMap.count(key) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      42, (char*)0, in_R8, in_R9, uVar3);
        }
        this_00 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
            (shared_ptr<PointLightIndicesEffect>*)param_1);
        SetMapSquareFineCoordBounds(this_00, 0, 0);
        this_01 = (shared_ptr<PointLightIndicesEffect>*)
            eastl::map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                       eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                            eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>*)&s_effectMap,
                       aiStackY_218 + 129);
        shared_ptr<PointLightIndicesEffect>::operator=(this_01, (shared_ptr*)param_1);
    }

    // 0x100936f70, 112 bytes, placed by class name
    // PointLightIndicesEffect::SetMapSquareFineCoordBounds(int, int)
    void PointLightIndicesEffect::SetMapSquareFineCoordBounds(int param_1, int param_2) {
        ImVec4 local_28[16];

        ImVec4::ImVec4(local_28, (float)param_1 * 8192.0 + 64.0, (float)param_2 * 8192.0 + 64.0,
                       (float)param_1 * 8192.0 + 8128.0, (float)param_2 * 8192.0 + 8128.0);
        math::Rect<float>::operator=((Rect<float>*)&field_80, (Rect*)local_28);
    }

    // 0x1009370d0, 192 bytes, placed by class name
    // PointLightIndicesEffect::AddEffect(int, int, shared_ptr<PointLightIndicesEffect> const&)
    void PointLightIndicesEffect::AddEffect(int param_1, int param_2, shared_ptr* param_3) {
        undefined4 in_EAX;
        undefined4 uVar1;
        PointLightIndicesEffect* this_00;
        shared_ptr<PointLightIndicesEffect>* this_01;
        undefined4 in_register_00000014;
        undefined8 in_R8;
        undefined8 in_R9;
        int aiStackY_228[128];
        undefined8 uVar4;

        if (((int)this < 0) || (param_1 < 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      50, (char*)0);
        }
        uVar1 = Js5NetQueueRequest::GetKey((int)this, param_1);
        uVar4 = CONCAT44(uVar1, in_EAX);
        if (eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::count((int*)&s_effectMap) !=
            0) {
            /* WARNING: Subroutine does not return */
            LogAssert("s_effectMap.count(key) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      52, (char*)0, in_R8, in_R9, uVar4);
        }
        this_00 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
            (shared_ptr<PointLightIndicesEffect>*)CONCAT44(in_register_00000014, param_2));
        SetMapSquareFineCoordBounds(this_00, (int)this, param_1);
        this_01 = (shared_ptr<PointLightIndicesEffect>*)
            eastl::map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                       eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                            eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>*)&s_effectMap,
                       aiStackY_228 + 129);
        shared_ptr<PointLightIndicesEffect>::operator=(this_01, (shared_ptr*)CONCAT44(in_register_00000014, param_2));
    }

    // 0x1009371a0, 256 bytes, placed by class name
    // PointLightIndicesEffect::RemoveEffect(int, int)
    void PointLightIndicesEffect::RemoveEffect(int param_1, int param_2) {
        shared_ptr<PointLightIndicesEffect>* this;
        long* plVar3;
        hashtable_iterator_base* extraout_RDX;
        eastl local_38[8];
        hashtable_iterator_base local_30[12];
        int local_24;

        if ((param_1 < 0) || (param_2 < 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      60, (char*)0);
        }
        local_24 = Js5NetQueueRequest::GetKey(param_1, param_2);
        if (eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::count((int*)&s_effectMap) !=
            0) {
            eastl::rbtree<int, eastl::pair<int const, shared_ptr<PointLightIndicesEffect>>, eastl::less<int>,
                          eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>,
                          eastl::use_first<eastl::pair<int const, shared_ptr<PointLightIndicesEffect>>>, true,
                          true>::find((int*)local_38);
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            if (!eastl::operator!=(local_38, local_30, extraout_RDX)) {
                /* WARNING: Subroutine does not return */
                LogAssert("s_effectMap.find(key) != s_effectMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/lighting/PointLightIndicesEffect.cpp",
                          65, (char*)0);
            }
            this = (shared_ptr<PointLightIndicesEffect>*)
                eastl::map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                           eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                         eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>*)&s_effectMap,
                    &local_24);
            plVar3 = (long*)shared_ptr<PointLightIndicesEffect>::operator->(this);
            (**(code**)(*plVar3 + 80))(plVar3);
            eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::erase((int*)&s_effectMap);
        }
    }

    // 0x100937400, 112 bytes, placed by class name
    // PointLightIndicesEffect::RemoveEffect(math::Vector3T<float> const&)
    void PointLightIndicesEffect::RemoveEffect(Vector3T* param_1) {
        shared_ptr<PointLightIndicesEffect>* this_00;
        long* plVar2;
        int local_1c;

        local_1c = GetKeyFromWorldPos((graphics*)this, param_1);
        if (eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::count((int*)&s_effectMap) !=
            0) {
            this_00 = (shared_ptr<PointLightIndicesEffect>*)
                eastl::map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                           eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                         eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>*)&s_effectMap,
                    &local_1c);
            plVar2 = (long*)shared_ptr<PointLightIndicesEffect>::operator->(this_00);
            (**(code**)(*plVar2 + 80))(plVar2);
            eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::erase((int*)&s_effectMap);
        }
    }

    // 0x100937470, 128 bytes, placed by class name
    // PointLightIndicesEffect::GetEffect(int, int)
    undefined1* PointLightIndicesEffect::GetEffect(int param_1, int param_2) {
        undefined1* puVar2;
        int local_1c;

        if ((param_1 < 0) || (param_2 < 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      84, (char*)0);
        }
        local_1c = Js5NetQueueRequest::GetKey(param_1, param_2);
        if (eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::count((int*)&s_effectMap) ==
            0) {
            puVar2 = &s_nullEffect;
        } else {
            puVar2 =
                (undefined1*)eastl::map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                                        eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                         eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>*)&s_effectMap,
                    &local_1c);
        }
        return puVar2;
    }

    // 0x1009374f0, 80 bytes, placed by class name
    // PointLightIndicesEffect::GetEffect(math::Vector3T<float> const&)
    undefined1* PointLightIndicesEffect::GetEffect(Vector3T* param_1) {
        undefined1* puVar2;
        int local_c;

        local_c = GetKeyFromWorldPos((graphics*)this, param_1);
        if (eastl::map<
                int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::count((int*)&s_effectMap) ==
            0) {
            puVar2 = &s_nullEffect;
        } else {
            puVar2 =
                (undefined1*)eastl::map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                                        eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
                         eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true, eastl::allocator>>*)&s_effectMap,
                    &local_c);
        }
        return puVar2;
    }

    // 0x100937540, 128 bytes, placed by class name
    // PointLightIndicesEffect::TestVisiblePointLightInfluence(math::Sphere const&)
    ulong PointLightIndicesEffect::TestVisiblePointLightInfluence(Sphere* param_1) {
        char cVar1;
        Sphere* this;
        Sphere* pSVar2;
        Sphere* in_RSI;
        undefined1* this_00;
        bool bVar3;

        this_00 = &param_1[4].field_16;
        this = (Sphere*)this_00->HeapBeginPtr();
        pSVar2 = (Sphere*)this_00->end();
        bVar3 = this == pSVar2;
        if (!bVar3) {
            cVar1 = TestIntersection(in_RSI);
            while (cVar1 == '\0') {
                this = (Sphere*)&field_16;
                bVar3 = this == pSVar2;
                if (bVar3)
                    break;
                cVar1 = TestIntersection(in_RSI);
            }
        }
        return (CONCAT71((int7)((ulong)this_00 >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x100937630, 464 bytes, placed by class name
    // PointLightIndicesEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void PointLightIndicesEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        float fVar3;
        uint uVar4;
        int iVar7;
        ShaderProgram* this_01;
        HashedString* pHVar8;
        RenderPipelineState* this_02;
        Texture* pTVar9;
        EffectList* pEVar10;
        HashedString* pHVar11;
        vector* pvVar12;
        float* pfVar13;

        if (!field_16->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      117, (char*)0);
        }
        this_01 = (ShaderProgram*)param_3->GetProgram();
        pHVar8 = (HashedString*)graphics::operator*((graphics*)88);
        iVar7 = this_01->GetConstIndex(pHVar8);
        this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        uVar4 = field_8;
        pTVar9 = (Texture*)field_16->end();
        this_02->SetPSTextureSamplerPair(uVar4, pTVar9, iVar7, 0, false);
        pEVar10 = (EffectList*)param_3->second();
        if (pEVar10->Contains(55) == '\0') {
            pHVar8 = (HashedString*)graphics::operator*((graphics*)89);
            this_01->SetShaderConstFloat1(pHVar8, (float)field_52);
            pHVar11 = (HashedString*)graphics::operator*((graphics*)90);
            this_00 = &field_64;
            pvVar12 = this_00->SSOBeginPtr(pHVar8);
            fVar1 = *(float*)pvVar12;
            pfVar13 = (float*)this_00->y();
            fVar2 = *pfVar13;
            pfVar13 = (float*)this_00->second();
            fVar3 = *pfVar13;
            pfVar13 = (float*)this_00->qw();
            this_01->SetShaderConstFloat4(pHVar11, fVar1, fVar2, fVar3, *pfVar13);
        }
        if (field_32 < 2) {
            if (field_32 == 1) {
                pHVar8 = (HashedString*)graphics::operator*((graphics*)91);
                pfVar13 = (float*)(&field_40)->get();
                this_01->SetShaderConstFloat1(pHVar8, *pfVar13);
            }
        } else {
            pHVar8 = (HashedString*)graphics::operator*((graphics*)91);
            uVar4 = field_32;
            pfVar13 = (float*)(&field_40)->get();
            this_01->SetShaderConstFloat1Array(pHVar8, uVar4, pfVar13, 1);
        }
    }

    // 0x100937810, 16 bytes, placed by class name
    // PointLightIndicesEffect::SetLevel(int)
    void PointLightIndicesEffect::SetLevel(int param_1) {
        uint uVar1;

        uVar1 = 0;
        if (-1 < param_1) {
            uVar1 = param_1;
        }
        field_52 = uVar1;
    }

    // 0x100937820, 240 bytes, placed by class name
    // PointLightIndicesEffect::SetFineCoordBounds(math::Vector4T<float> const&)
    void PointLightIndicesEffect::SetFineCoordBounds(Vector4T* param_1) {
        vector* pvVar1;
        float* pfVar2;
        undefined1* this_00;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        this_00 = &field_80;
        pvVar1 = this_00->SSOBeginPtr(param_1);
        fVar7 = *(float*)pvVar1;
        pvVar1 = param_1->SSOBeginPtr(param_1);
        fVar4 = (float)eastl::max_alt(fVar7, *(float*)pvVar1);
        pfVar2 = (float*)this_00->y();
        fVar7 = *pfVar2;
        pfVar2 = (float*)param_1->y();
        fVar5 = (float)eastl::max_alt(fVar7, *pfVar2);
        pfVar2 = (float*)this_00->second();
        fVar7 = *pfVar2;
        pfVar2 = (float*)param_1->second();
        fVar6 = (float)eastl::min<float>(fVar7, *pfVar2);
        pfVar2 = (float*)this_00->qw();
        fVar7 = *pfVar2;
        pfVar2 = (float*)param_1->qw();
        fVar7 = (float)eastl::min<float>(fVar7, *pfVar2);
        (&field_64, fVar4, fVar5, fVar6, fVar7)->Set();
    }

    // 0x100937910, 16 bytes, placed by class name
    // PointLightIndicesEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void PointLightIndicesEffect::BindConstBufferToShader(ShaderProgram* param_1) {}

    // 0x100937920, 16 bytes, placed by class name
    // PointLightIndicesEffect::CreateRenderingResources()
    undefined1 PointLightIndicesEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100937930, 16 bytes, placed by class name
    // PointLightIndicesEffect::DestroyRenderingResources()
    void PointLightIndicesEffect::DestroyRenderingResources() {
        shared_ptr<render::Texture>::reset();
    }

    // 0x100937980, 80 bytes, placed by class name
    // PointLightIndicesEffect::SetTexture(shared_ptr<render::Texture> const&)
    void PointLightIndicesEffect::SetTexture(shared_ptr* param_1) {
        if (!shared_ptr::operator_cast_to_bool(param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pointLightIndicesTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      231, (char*)0);
        }
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)field_16, param_1);
    }

    // 0x1009379d0, 256 bytes, placed by class name
    // PointLightIndicesEffect::SetPointLightIntensities(eastl::vector<float, eastl::allocator> const&)
    void PointLightIndicesEffect::SetPointLightIntensities(vector* param_1) {
        undefined1* this_00;
        uint uVar1;
        char cVar3;
        int iVar4;
        long lVar5;
        uint* puVar6;
        undefined4* puVar7;
        void* pvVar8;
        int local_34;
        uint local_30[2];

        this_00 = &field_40;
        if (!std::operator==((unique_ptr*)this_00, (_func_decltype_nullptr*)param_1)) {
            uVar1 = field_32;
            lVar5 = param_1->size();
            if (lVar5 + 1U <= (ulong)uVar1)
                goto LAB_100937a61;
        }
        local_30[0] = 256;
        local_34 = param_1->size();
        local_34 = local_34 + 1;
        puVar6 = (uint*)std::min<int>((int*)local_30, &local_34);
        field_32 = *puVar6;
        std::make_unique<float[]>((ulong)local_30);
        std::unique_ptr<float[], std::default_delete<float[]>>::operator=(
            (unique_ptr<float[], std::default_delete<float[]>>*)this_00, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        puVar7 = (undefined4*)std::unique_ptr<float[], std::default_delete<float[]>>::operator[]((ulong)this_00);
        *puVar7 = 0;
    LAB_100937a61:
        cVar3 = param_1->empty();
        if (cVar3 == '\0') {
            iVar4 = param_1->size();
            local_30[0] = iVar4 + 1;
            puVar6 = std::min<unsigned int>(&field_32, local_30);
            uVar1 = *puVar6;
            lVar5 = this_00->get();
            pvVar8 =
                (void*)eastl::vector<float, eastl::allocator>::operator[]((vector<float, eastl::allocator>*)param_1, 0);
            _memcpy((void*)(lVar5 + 4), pvVar8, (ulong)(uVar1 - 1) << 2);
        }
    }

    // 0x10094d1a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.301
    void ___cxx_global_var_init_301(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&PointLightIndicesEffect::s_nullEffect)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5380, &PointLightIndicesEffect::s_nullEffect, 4294967296);
    }

} // namespace jag::graphics
