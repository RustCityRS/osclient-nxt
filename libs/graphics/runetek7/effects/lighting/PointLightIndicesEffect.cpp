// libs/graphics/runetek7/effects/lighting/PointLightIndicesEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightIndicesEffect.h"

namespace jag::graphics {
    // 0x103bc0868
    map<int, shared_ptr<PointLightIndicesEffect>, eastl::less<int>,
        eastl::fixed_node_allocator<56ul, 25ul, 8ul, 0ul, true>>
        PointLightIndicesEffect::s_effectMap;

    // 0x103bc0e78, set at startup by ___cxx_global_var_init.301
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> PointLightIndicesEffect::s_nullEffect =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100102fc0: PointLightIndicesEffect::GetMapSquareFineCoordBounds() has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x100936c50
    PointLightIndicesEffect::PointLightIndicesEffect(RT7Core& rt7Core, int arg2)
        : Effect(), MakeSharedPool<PointLightIndicesEffect, 64>(), field_8(4294967295) {
        new (field_16) shared_ptr();
        field_32 = 0;
        ((unique_ptr<float[]>*)&field_40)->unique_ptr<true, void>();
        field_48 = arg2;
        field_52 = 0;
        new (&field_64) math::Vector4T();
        new (&field_80) math::Vector4T();
        new (&field_96) eastl::vector<math::Sphere>();
        unsigned int uVar1 = rt7Core.GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_8 = uVar1;
        field_96.reserve(64);
    }

    // 0x100936e40
    void PointLightIndicesEffect::AddEffect(const math::Vector3T<float>& vector3,
                                            const shared_ptr<PointLightIndicesEffect>& pointLightIndicesEffect) {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;
        int aiStackY_218[128];

        uint32_t uVar1 = GetKeyFromWorldPos((Vector3T<float>*)this);
        uint64_t uVar3 = (((uint64_t)uVar1 << 32) | (uint32_t)in_EAX);
        if (s_effectMap.count(*(aiStackY_218 + 129)) != 0) {
            LogAssert("s_effectMap.count(key) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      42, nullptr, in_R8, in_R9, uVar3);
        }
        SetMapSquareFineCoordBounds((PointLightIndicesEffect*)vector3.operator->(), 0, 0);
        shared_ptr<PointLightIndicesEffect>* this_01 = &s_effectMap[*(aiStackY_218 + 129)];
        *this_01 = vector3;
    }

    // 0x100936f70
    void PointLightIndicesEffect::SetMapSquareFineCoordBounds(int arg1, int arg2) {

        ImVec4 local_28((float)arg1 * 8192.0 + 64.0, (float)arg2 * 8192.0 + 64.0, (float)arg1 * 8192.0 + 8128.0,
                        (float)arg2 * 8192.0 + 8128.0);
        field_80 = local_28;
    }

    // 0x1009370d0
    void PointLightIndicesEffect::AddEffect(int arg1, int arg2,
                                            const shared_ptr<PointLightIndicesEffect>& pointLightIndicesEffect) {
        uint32_t in_EAX;
        uint32_t in_register_00000014;
        uint64_t in_R8;
        uint64_t in_R9;
        int aiStackY_228[128];

        if (((int)this < 0) || (arg1 < 0)) {
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      50, nullptr);
        }
        uint32_t uVar1 = Js5NetQueueRequest::GetKey((int)this, arg1);
        uint64_t uVar3 = (((uint64_t)uVar1 << 32) | (uint32_t)in_EAX);
        if (s_effectMap.count(*(aiStackY_228 + 129)) != 0) {
            LogAssert("s_effectMap.count(key) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      52, nullptr, in_R8, in_R9, uVar3);
        }
        SetMapSquareFineCoordBounds(
            (PointLightIndicesEffect*)(*((shared_ptr<PointLightIndicesEffect>*)(((uint64_t)in_register_00000014 << 32) |
                                                                                (uint32_t)arg2)))
                .operator->(),
            (int)this, arg1);
        shared_ptr<PointLightIndicesEffect>* this_01 = &s_effectMap[*(aiStackY_228 + 129)];
        *this_01 = (*((shared_ptr<PointLightIndicesEffect>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2)));
    }

    // 0x1009371a0
    void PointLightIndicesEffect::RemoveEffect(int arg1, int arg2) {
        shared_ptr<PointLightIndicesEffect>* shared_ptr;
        long* plVar3;
        ReturnValue local_38;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_30;

        if ((arg1 < 0) || (arg2 < 0)) {
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      60, nullptr);
        }
        int local_24 = Js5NetQueueRequest::GetKey(arg1, arg2);
        if (s_effectMap.count(local_24) != 0) {
            local_38 = s_effectMap.find(local_24);
            local_30.end();
            if (local_38 != local_30 == '\0') {
                LogAssert("s_effectMap.find(key) != s_effectMap.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/lighting/PointLightIndicesEffect.cpp",
                          65, nullptr);
            }
            shared_ptr = &s_effectMap[local_24];
            plVar3 = (long*)(*shared_ptr).operator->();
            (**(void (**)(...))(*plVar3 + 80))(plVar3);
            s_effectMap.erase(local_24);
        }
    }

    // 0x100937400
    void PointLightIndicesEffect::RemoveEffect(const math::Vector3T<float>& vector3) {
        shared_ptr<PointLightIndicesEffect>* this_00;
        long* plVar2;

        int local_1c = GetKeyFromWorldPos((Vector3T<float>*)this);
        if (s_effectMap.count(local_1c) != 0) {
            this_00 = &s_effectMap[local_1c];
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 80))(plVar2);
            s_effectMap.erase(local_1c);
        }
    }

    // 0x100937470
    shared_ptr* PointLightIndicesEffect::GetEffect(int arg1, int arg2) {
        shared_ptr* psVar2;

        if ((arg1 < 0) || (arg2 < 0)) {
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      84, nullptr);
        }
        int local_1c = Js5NetQueueRequest::GetKey(arg1, arg2);
        if (s_effectMap.count(local_1c) == 0) {
            psVar2 = (shared_ptr*)&s_nullEffect;
        } else {
            psVar2 = &s_effectMap[local_1c];
        }
        return psVar2;
    }

    // 0x1009374f0
    shared_ptr* PointLightIndicesEffect::GetEffect(const math::Vector3T<float>& vector3) {
        shared_ptr* psVar2;

        int local_c = GetKeyFromWorldPos((Vector3T<float>*)this);
        if (s_effectMap.count(local_c) == 0) {
            psVar2 = (shared_ptr*)&s_nullEffect;
        } else {
            psVar2 = &s_effectMap[local_c];
        }
        return psVar2;
    }

    // 0x100937540
    unsigned long PointLightIndicesEffect::TestVisiblePointLightInfluence(const math::Sphere& sphere) {
        bool cVar1;

        uint8_t* this_01 = &field_96;
        auto this_00 = this_01->HeapBeginPtr();
        auto pSVar2 = this_01->end();
        bool bVar3 = this_00 == pSVar2;
        if (!bVar3) {
            cVar1 = this_00->TestIntersection(sphere);
            while (!cVar1) {
                this_00 = (Sphere*)&this_00->field_16;
                bVar3 = this_00 == pSVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->TestIntersection(sphere);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x100937630
    void PointLightIndicesEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                     render::RenderContext& renderContext, Shader& shader) const {
        uint8_t* this_00;
        float arg2;
        float arg3;
        float arg4;
        float* pfVar4;

        if (!(field_16->operator_cast_to_bool())) {
            LogAssert("m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      117, nullptr);
        }
        auto this_01 = shader.GetProgram();
        auto pHVar3 = graphics::operator*(88);
        int arg3_00 = this_01->GetConstIndex(*pHVar3);
        RenderPipelineState* this_02 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        unsigned int uVar1 = field_8;
        auto texture = field_16->end();
        this_02->SetPSTextureSamplerPair(uVar1, texture, arg3_00, nullptr, false);
        if (!(((EffectList*)shader.second())->Contains(55))) {
            pHVar3 = (HashedString*)graphics::operator*(89);
            this_01->SetShaderConstFloat1(pHVar3, (float)field_52);
            pHVar3 = (HashedString*)graphics::operator*(90);
            this_00 = &field_64;
            pfVar4 = (float*)this_00->SSOBeginPtr();
            arg2 = *pfVar4;
            pfVar4 = (float*)this_00->y();
            arg3 = *pfVar4;
            pfVar4 = (float*)this_00->second();
            arg4 = *pfVar4;
            pfVar4 = (float*)this_00->qw();
            this_01->SetShaderConstFloat4(pHVar3, arg2, arg3, arg4, *pfVar4);
        }
        if (field_32 < 2) {
            if (field_32 == 1) {
                pHVar3 = (HashedString*)graphics::operator*(91);
                pfVar4 = (float*)((unique_ptr<float[]>*)&field_40)->get();
                this_01->SetShaderConstFloat1(pHVar3, *pfVar4);
            }
        } else {
            pHVar3 = (HashedString*)graphics::operator*(91);
            uVar1 = field_32;
            pfVar4 = (float*)((unique_ptr<float[]>*)&field_40)->get();
            this_01->SetShaderConstFloat1Array(pHVar3, uVar1, pfVar4, 1);
        }
    }

    // 0x100937810
    void PointLightIndicesEffect::SetLevel(int arg1) {
        unsigned int uVar1 = 0;
        if (-1 < arg1) {
            uVar1 = arg1;
        }
        field_52 = uVar1;
    }

    // 0x100937820
    void PointLightIndicesEffect::SetFineCoordBounds(const math::Vector4T<float>& vector4) {
        uint8_t* this_00 = &field_80;
        auto pfVar1 = this_00->SSOBeginPtr();
        float fVar2 = *pfVar1;
        pfVar1 = (float*)vector4.SSOBeginPtr();
        float arg1 = (float)eastl::max_alt(fVar2, *pfVar1);
        pfVar1 = (float*)this_00->y();
        fVar2 = *pfVar1;
        pfVar1 = (float*)vector4.y();
        float arg2 = (float)eastl::max_alt(fVar2, *pfVar1);
        pfVar1 = (float*)this_00->second();
        fVar2 = *pfVar1;
        pfVar1 = (float*)vector4.second();
        float arg3 = (float)eastl::min<float>(fVar2, *pfVar1);
        pfVar1 = (float*)this_00->qw();
        fVar2 = *pfVar1;
        pfVar1 = (float*)vector4.qw();
        fVar2 = (float)eastl::min<float>(fVar2, *pfVar1);
        field_64.Set(arg1, arg2, arg3, fVar2);
    }

    // 0x100937910
    void PointLightIndicesEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {}

    // 0x100937920
    uint8_t PointLightIndicesEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100937930
    void PointLightIndicesEffect::DestroyRenderingResources() {
        field_16->reset();
    }

    // 0x100937980
    void PointLightIndicesEffect::SetTexture(const shared_ptr<render::Texture>& texture) {
        if (texture.operator_cast_to_bool() == '\0') {
            LogAssert("pointLightIndicesTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      231, nullptr);
        }
        *field_16 = texture;
    }

    // 0x1009379d0
    void PointLightIndicesEffect::SetPointLightIntensities(const eastl::vector<float>& arg1) {
        unsigned int uVar1;
        long lVar4;
        void* pvVar7;
        ReturnValue local_30;

        uint8_t* arg1_00 = &field_40;
        if (!((unique_ptr<float_[], std::default_delete<float_[]> _>*)arg1_00) == arg1) {
            uVar1 = field_32;
            lVar4 = arg1.size();
            if (lVar4 + 1U <= (unsigned long)uVar1)
                goto LAB_100937a61;
        }
        local_30._0_4_ = 256;
        int local_34 = arg1.size();
        local_34 = local_34 + 1;
        auto puVar5 = std::min<int>(local_30, local_34);
        uVar1 = *puVar5;
        field_32 = uVar1;
        local_30 = std::make_unique<float[]>((unsigned long)uVar1);
        (*((unique_ptr<float[]>*)arg1_00)) = (*((unique_ptr<float_[], std::default_delete<float_[]> _>*)&local_30));
        ((unique_ptr<float[]>*)&local_30)->~unique_ptr();
        uint32_t* puVar6 = (uint32_t*)(*((unique_ptr<float[]>*)arg1_00))[(unsigned long)&local_30];
        *puVar6 = 0;
    LAB_100937a61:
        if (arg1.empty() == '\0') {
            local_30._0_4_ = arg1.size();
            local_30._0_4_ = local_30._0_4_ + 1;
            puVar5 = std::min<unsigned int>(field_32, local_30);
            uVar1 = *puVar5;
            lVar4 = ((unique_ptr<float[]>*)arg1_00)->get();
            pvVar7 = &arg1[0];
            _memcpy((void*)(lVar4 + 4), pvVar7, (unsigned long)(uVar1 - 1) << 2);
        }
    }

} // namespace jag::graphics
