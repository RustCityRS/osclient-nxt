// libs/math/primitives/Capsule3D.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::fixedfunction {
    // 0x1007bdf10
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                              graphics::EffectManager&, graphics::SceneViewData const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                    graphics::EffectManager&, graphics::SceneViewData const&,
                                                    graphics::DrawableQueue&)::$_0&& arg1) {
        *(void (**)(...))(this + 144) =
            function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                           graphics::EffectManager&, graphics::SceneViewData const&,
                                                           graphics::DrawableQueue&)::$_0,
                     void>((graphics::RT7Core&)
                               ->Render(render::DrawCallState const&, graphics::EffectManager&,
                                        graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                           graphics::EffectManager&, graphics::SceneViewData const&,
                                                           graphics::DrawableQueue&)::$_0,
                     void>((graphics::RT7Core&)
                               ->Render(render::DrawCallState const&, graphics::EffectManager&,
                                        graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                           graphics::EffectManager&, graphics::SceneViewData const&,
                                                           graphics::DrawableQueue&)::$_0,
                     void>((graphics::RT7Core&)
                               ->Render(render::DrawCallState const&, graphics::EffectManager&,
                                        graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1007bdf40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                              graphics::EffectManager&, graphics::SceneViewData const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                    graphics::EffectManager&, graphics::SceneViewData const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {}

    // 0x1007bdf50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                              graphics::EffectManager&, graphics::SceneViewData const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                    graphics::EffectManager&, graphics::SceneViewData const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x1007bdf60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                              graphics::EffectManager&, graphics::SceneViewData const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                    graphics::EffectManager&, graphics::SceneViewData const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (graphics::RT7Core&)
            ->Render(render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&,
                     graphics::DrawableQueue&)::$_0::operator()((__0*)this, arg1);
    }

    // 0x1007bdfa0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                              graphics::EffectManager&, graphics::SceneViewData const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&,
                                                    graphics::EffectManager&, graphics::SceneViewData const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x1007c56c0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8,
        void>(
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<graphics::TerrainPatch::TerrainPatch(
                         int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                         eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                         shared_ptr<graphics::TextureAtlasReference> const&,
                         eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                               eastl::equal_to<int>, false>&,
                         math::Matrix44T<float> const*, float const*)::$_8,
                     void>(graphics::TerrainPatch::TerrainPatch(
                int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                shared_ptr<graphics::TextureAtlasReference> const&,
                eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false>&,
                math::Matrix44T<float> const*, float const*)::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<graphics::TerrainPatch::TerrainPatch(
                                             int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8,
                                         void>(
            graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                                 eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                                 shared_ptr<graphics::TextureAtlasReference> const&,
                                                 eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                       eastl::hash<int>, eastl::equal_to<int>, false>&,
                                                 math::Matrix44T<float> const*, float const*)::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<graphics::TerrainPatch::TerrainPatch(
                         int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                         eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                         shared_ptr<graphics::TextureAtlasReference> const&,
                         eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                               eastl::equal_to<int>, false>&,
                         math::Matrix44T<float> const*, float const*)::$_8,
                     void>(graphics::TerrainPatch::TerrainPatch(
                int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                shared_ptr<graphics::TextureAtlasReference> const&,
                eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false>&,
                math::Matrix44T<float> const*, float const*)::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1007c5700
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8,
        void>(
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1007c5710
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8,
        void>(
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x1007c5720
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8,
        void>(
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x1007c5730
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8,
        void>(
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*,
                                             float const*)::$_8::operator()((__8*)this, arg1);
    }

    // 0x1007c5750
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8,
        void>(
        graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex>&,
                                             eastl::vector<graphics::TerrainPatchVertexPos>&, int, int, int,
                                             shared_ptr<graphics::TextureAtlasReference> const&,
                                             eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                                   eastl::hash<int>, eastl::equal_to<int>, false>&,
                                             math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x1007bcd20
    TerrainTriangle::TerrainTriangle() : TerrainBaseData(), field_40(0) {}

    // 0x1007bcef0
    bool operator&(const RenderPassBitSet& renderPassBitSet1, const RenderPassBitSet& renderPassBitSet2) {
        unsigned int uVar1 = renderPassBitSet1.GetX();
        unsigned int uVar2 = renderPassBitSet2.GetX();
        return (uVar2 & uVar1) != 0;
    }

    // 0x1007be4c0
    uint64_t SortKeyLessThan::operator()(const DrawableElementInfo& drawableElementInfo1,
                                         const DrawableElementInfo& drawableElementInfo2) const {
        DrawableElementInfo* arg2 = drawableElementInfo1;
        if (&drawableElementInfo1.field_8 != drawableElementInfo1) {
            if (&drawableElementInfo2.field_8 != arg2) {
                return drawableElementInfo1.field_0 < drawableElementInfo2.field_0;
            }
        }
        LogAssert("lhs.m_drawableElement != nullptr && rhs.m_drawableElement != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.h",
                  28, nullptr);
    }

    // 0x1007beb50
    DrawableElementInfo* DrawableElementInfo::operator=(DrawableElementInfo&& drawableElementInfo) {
        field_0 = drawableElementInfo.field_0;
        field_8 = drawableElementInfo.field_8;
        field_16 = drawableElementInfo.field_16;
        return this;
    }

    // 0x1007c1d50
    unsigned long UserKeyUtils::GetUserBits(unsigned long long arg1) {
        return arg1 >> 40 & 65535;
    }

    // 0x1007c2730
    unique_ptr<DrawableElement, DrawableElementDeleter>* UserKeyUtils::SetUserBits(unsigned long long arg1,
                                                                                   unsigned long long arg2) {
        return (unique_ptr<DrawableElement, DrawableElementDeleter>*)((arg2 & 65535) << 40 |
                                                                      arg1 & 18374687579183251455);
    }

    // 0x1007c40d0
    auto CalculateNDCLodThresholdSquares(const std::array<float, 10ul>& arg1) {
        auto result;

        &result[4] = *(ReturnValue*)(arg1 + 32);
        ReturnValue RVar1 = *(ReturnValue*)arg1;
        ReturnValue RVar2 = *(ReturnValue*)(arg1 + 8);
        ReturnValue RVar3 = *(ReturnValue*)(arg1 + 24);
        &result[2] = *(ReturnValue*)(arg1 + 16);
        &result[3] = RVar3;
        result = RVar1;
        &result[1] = RVar2;
        float* pfVar4 = std::array<float, 10ul>::begin();
        float* pfVar5 = std::array<float, 10ul>::end();
        for (; pfVar4 != pfVar5; pfVar4 = pfVar4 + 1) {
            *pfVar4 = *pfVar4 * *pfVar4;
        }
        return result;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007bccb0
    Capsule3D::Capsule3D(const Vector3T<float>& vector31, const Vector3T<float>& vector32, float arg3) {
        field_8 = *(float*)(vector31 + 8);
        uint64_t uVar1 = *(uint64_t*)vector31;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((unsigned long)uVar1 >> 32);
        field_12 = 0;
        m_endPoint = *(uint64_t*)vector32;
        field_24 = *(uint32_t*)(vector32 + 8);
        m_radius = arg3;
    }

    // 0x1007bdcd0
    Vector3T<signed char>::Vector3T(signed char arg1, signed char arg2, signed char arg3) {
        *this = (Vector3T<unsigned char>)arg1;
        this[1] = (Vector3T<unsigned char>)arg2;
        this[2] = (Vector3T<unsigned char>)arg3;
    }

    // 0x1007c42b0
    Vector3T<float>* Matrix33T<float>::LookAt(const Vector3T<float>& vector31, Vector3T<float> vector32) {
        Vector3T<float>* result;
        Vector4T<float>* pVVar2;
        Vector3T<float>* pVVar3;
        ReturnValue result;
        Vector3T<float>* vector32_00;
        float fVar4;
        uint32_t uVar5;
        Vector3T<float> local_78;
        Vector3T<float> local_68;
        ColourHSL local_58;
        Vector3T<float> local_48;
        uint64_t local_38;
        uint32_t local_30;

        float local_3c = (float)vector32->Length();
        if (1e-06 <= local_3c) {
            fVar4 = Vector3Dot<float>(&local_48, vector32);
            fVar4 = (float)::abs(fVar4);
            local_78 = Vector3T(fVar4);
            local_68 = Vector3T(1.1920929e-07);
            local_38 = local_78 + local_68;
            uVar5 = 1065353216;
            local_58 = ColourHSL(1.0, 1.0, 1.0);
            if (local_38 > local_58) {
                uVar5 = 0;
                local_48.Set(1.0, 0.0, 0.0);
            }
            local_38 = *vector32 / *local_3c;
            local_30 = uVar5;
            pVVar2 = (Vector4T<float>*)vector31.second();
            pVVar2->SetXYZ(local_38);
            pVVar3 = (Vector3T<float>*)vector31.second();
            local_38 = Vector3Cross<float>(&local_48, pVVar3);
            local_30 = uVar5;
            pVVar2 = (Vector4T<float>*)vector31.SSOBeginPtr();
            pVVar2->SetXYZ(local_38);
            &result = (ReturnValue*)vector31.SSOBeginPtr();
            result = Vector3T<float>::NormalizeSafe();
            pVVar3 = (Vector3T<float>*)vector31.second();
            vector32_00 = (Vector3T<float>*)vector31.SSOBeginPtr();
            local_38 = Vector3Cross<float>(pVVar3, vector32_00);
            local_30 = uVar5;
            pVVar2 = (Vector4T<float>*)vector31.qw();
            pVVar2->SetXYZ(local_38);
        } else {
            vector31 = (Vector3T<float>*)SetToIdentity((Matrix33T<float>*)vector31);
        }
        return vector31;
    }

    // 0x1007c4430
    bool operator><float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        if ((*(float*)vector32 <= *(float*)vector31 && *(float*)vector31 != *(float*)vector32) &&
            (*(float*)(vector32 + 4) <= *(float*)(vector31 + 4) &&
             *(float*)(vector31 + 4) != *(float*)(vector32 + 4))) {
            return *(float*)(vector32 + 8) <= *(float*)(vector31 + 8) &&
                   *(float*)(vector31 + 8) != *(float*)(vector32 + 8);
        }
        return false;
    }

} // namespace jag::math

namespace jag::render {
    // 0x1007bd100
    FixedPrimitiveBatchData<256ul>::~FixedPrimitiveBatchData() {
        ((this + 1064))->~fixed_vector();
    }

} // namespace jag::render

// 0x1007bd540
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
