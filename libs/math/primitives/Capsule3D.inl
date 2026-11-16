// libs/math/primitives/Capsule3D.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::fixedfunction {
    // 0x1007bdf10, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0, void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                              graphics::EffectManager&, graphics::SceneViewData_const&,
                                              graphics::DrawableQueue&)::__0,
        void>(__0* param_1) {
        *(code**)(param_1 + 144) =
            function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                                           graphics::EffectManager&, graphics::SceneViewData_const&,
                                                           graphics::DrawableQueue&)::$_0,
                     void>((graphics::RT7Core&)
                               ->Render(render::DrawCallState_const&, graphics::EffectManager&,
                                        graphics::SceneViewData_const&, graphics::DrawableQueue&)::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)param_1 =
            function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                                           graphics::EffectManager&, graphics::SceneViewData_const&,
                                                           graphics::DrawableQueue&)::$_0,
                     void>((graphics::RT7Core&)
                               ->Render(render::DrawCallState_const&, graphics::EffectManager&,
                                        graphics::SceneViewData_const&, graphics::DrawableQueue&)::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(param_1 + 152) =
            function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                                           graphics::EffectManager&, graphics::SceneViewData_const&,
                                                           graphics::DrawableQueue&)::$_0,
                     void>((graphics::RT7Core&)
                               ->Render(render::DrawCallState_const&, graphics::EffectManager&,
                                        graphics::SceneViewData_const&, graphics::DrawableQueue&)::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1007bdf40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0, void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                              graphics::EffectManager&, graphics::SceneViewData_const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                                    graphics::EffectManager&, graphics::SceneViewData_const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {}

    // 0x1007bdf50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0, void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                              graphics::EffectManager&, graphics::SceneViewData_const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                                    graphics::EffectManager&, graphics::SceneViewData_const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1007bdf60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0, void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::ForwardLightingPass::Render(graphics::RT7Core&,
   render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData
   const&, graphics::DrawableQueue&)::$_0,
   void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&,
   render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData
   const&, graphics::DrawableQueue&)::$_0&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                              graphics::EffectManager&, graphics::SceneViewData_const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                                    graphics::EffectManager&, graphics::SceneViewData_const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (graphics::RT7Core&)
            ->Render(render::DrawCallState_const&, graphics::EffectManager&, graphics::SceneViewData_const&,
                     graphics::DrawableQueue&)::$_0::operator()(param_1, param_2);
    }

    // 0x1007bdfa0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0, void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                              graphics::EffectManager&, graphics::SceneViewData_const&,
                                              graphics::DrawableQueue&)::$_0,
        void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState_const&,
                                                    graphics::EffectManager&, graphics::SceneViewData_const&,
                                                    graphics::DrawableQueue&)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x1007c56c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8, void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(
            int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::__8,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __8* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) =
            function<graphics::TerrainPatch::TerrainPatch(
                         int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                         eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                         shared_ptr<graphics::TextureAtlasReference> const&,
                         eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                               eastl::equal_to<int>, false, eastl::allocator>&,
                         math::Matrix44T<float> const*, float const*)::$_8,
                     void>(graphics::TerrainPatch::TerrainPatch(
                int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                shared_ptr<graphics::TextureAtlasReference> const&,
                eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>&,
                math::Matrix44T<float> const*, float const*)::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<graphics::TerrainPatch::TerrainPatch(
                         int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                         eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                         shared_ptr<graphics::TextureAtlasReference> const&,
                         eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                               eastl::equal_to<int>, false, eastl::allocator>&,
                         math::Matrix44T<float> const*, float const*)::$_8,
                     void>(graphics::TerrainPatch::TerrainPatch(
                int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                shared_ptr<graphics::TextureAtlasReference> const&,
                eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>&,
                math::Matrix44T<float> const*, float const*)::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<graphics::TerrainPatch::TerrainPatch(
                         int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                         eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                         shared_ptr<graphics::TextureAtlasReference> const&,
                         eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                               eastl::equal_to<int>, false, eastl::allocator>&,
                         math::Matrix44T<float> const*, float const*)::$_8,
                     void>(graphics::TerrainPatch::TerrainPatch(
                int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                shared_ptr<graphics::TextureAtlasReference> const&,
                eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>&,
                math::Matrix44T<float> const*, float const*)::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1007c5700, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8, void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(
            int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::$_8,
        void>(graphics::TerrainPatch::TerrainPatch(
        int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
        eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
        shared_ptr<graphics::TextureAtlasReference> const&,
        eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>&,
        math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1007c5710, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8, void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int,
   math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
   eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
   shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int,
   graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
   eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8,
   void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&,
   eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
   eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
   shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int,
   graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
   eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(
            int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::$_8,
        void>(graphics::TerrainPatch::TerrainPatch(
        int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
        eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
        shared_ptr<graphics::TextureAtlasReference> const&,
        eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>&,
        math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x1007c5720, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8, void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(
            int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::$_8,
        void>(graphics::TerrainPatch::TerrainPatch(
        int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
        eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
        shared_ptr<graphics::TextureAtlasReference> const&,
        eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>&,
        math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1007c5730, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8, void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int,
   math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
   eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
   shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int,
   graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
   eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8,
   void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&,
   eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
   eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
   shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int,
   graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
   eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(
            int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::$_8,
        void>(graphics::TerrainPatch::TerrainPatch(
        int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
        eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
        shared_ptr<graphics::TextureAtlasReference> const&,
        eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>&,
        math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        graphics::TerrainPatch::TerrainPatch(
            int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::$_8::operator()(param_1, param_2);
    }

    // 0x1007c5750, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8, void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TerrainPatch::TerrainPatch(
            int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
            eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
            shared_ptr<graphics::TextureAtlasReference> const&,
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&,
            math::Matrix44T<float> const*, float const*)::$_8,
        void>(graphics::TerrainPatch::TerrainPatch(
        int, math::AABB_const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
        eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
        shared_ptr<graphics::TextureAtlasReference> const&,
        eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>&,
        math::Matrix44T<float> const*, float const*)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x1007bcd20, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TerrainTriangle::TerrainTriangle()
    void TerrainTriangle::TerrainTriangle() {
        new (this) TerrainBaseData();
        field_40 = 0;
    }

    // 0x1007bcef0, 48 bytes, inline, placed by debug map only (low confidence)
    // operator&(RenderPassBitSet const&, RenderPassBitSet const&)
    /* TEMPNAMEPLACEHOLDERVALUE(RenderPassBitSet const&,
   RenderPassBitSet const&) */

    bool operator&(RenderPassBitSet* param_1, RenderPassBitSet* param_2) {
        uint uVar1;
        uint uVar2;

        uVar1 = param_1->GetX();
        uVar2 = param_2->GetX();
        return (uVar2 & uVar1) != 0;
    }

    // 0x1007be4c0, 96 bytes, inline, placed by debug map only (low confidence)
    // SortKeyLessThan::operator()(DrawableElementInfo const&, DrawableElementInfo const&) const
    /* SortKeyLessThan::TEMPNAMEPLACEHOLDERVALUE(DrawableElementInfo
   const&, DrawableElementInfo const&) const */

    undefined8 SortKeyLessThan::operator()(DrawableElementInfo* param_1, DrawableElementInfo* param_2) {
        bool bVar1;
        DrawableElementInfo* pDVar2;

        pDVar2 = param_1;
        bVar1 = std::operator!=((unique_ptr*)&param_1->field_8, (_func_decltype_nullptr*)param_1);
        if (bVar1) {
            bVar1 = std::operator!=((unique_ptr*)&param_2->field_8, (_func_decltype_nullptr*)pDVar2);
            if (bVar1) {
                return CONCAT71((int7)((ulong)param_1->field_0 >> 8),
                                (ulong)param_1->field_0 < (ulong)param_2->field_0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("lhs.m_drawableElement != nullptr && rhs.m_drawableElement != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.h",
                  28, (char*)0);
    }

    // 0x1007beb50, 48 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementInfo::operator=(DrawableElementInfo&&)
    /* DrawableElementInfo::TEMPNAMEPLACEHOLDERVALUE(DrawableElementInfo&&)
    */

    DrawableElementInfo* DrawableElementInfo::operator=(DrawableElementInfo* param_1) {
        field_0 = param_1->field_0;
        std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator=(
            (unique_ptr<DrawableElement, DrawableElementDeleter>*)&field_8, (unique_ptr*)&param_1->field_8);
        field_16 = param_1->field_16;
        return this;
    }

    // 0x1007c1d50, 16 bytes, inline, placed by debug map only (low confidence)
    // UserKeyUtils::GetUserBits(unsigned long long)
    ulong UserKeyUtils::GetUserBits(ulonglong param_1) {
        return param_1 >> 40 & 65535;
    }

    // 0x1007c2730, 32 bytes, inline, placed by debug map only (low confidence)
    // UserKeyUtils::SetUserBits(unsigned long long, unsigned long long)
    ulong UserKeyUtils::SetUserBits(ulonglong param_1, ulonglong param_2) {
        return (param_2 & 65535) << 40 | param_1 & 18374687579183251455;
    }

    // 0x1007c40d0, 96 bytes, inline, placed by debug map only (low confidence)
    // CalculateNDCLodThresholdSquares(std::array<float, 10ul> const&)
    /* CalculateNDCLodThresholdSquares(std::array<float, 10ul> const&) */

    graphics* CalculateNDCLodThresholdSquares(array* param_1) {
        ulong uVar1;
        uchar* puVar2;
        undefined8 uVar3;
        float* pfVar4;
        float* pfVar5;

        field_32 = *(undefined8*)(param_1 + 32);
        uVar1 = *(ulong*)param_1;
        puVar2 = *(uchar**)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 24);
        field_16 = *(long*)(param_1 + 16);
        field_24 = uVar3;
        field_0 = uVar1;
        field_8 = puVar2;
        pfVar4 = (float*)begin();
        pfVar5 = (float*)end();
        for (; pfVar4 != pfVar5; pfVar4 = pfVar4 + 1) {
            *pfVar4 = *pfVar4 * *pfVar4;
        }
        return this;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007bcca0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Capsule3D::Capsule3D(Vector3T<float> const&, Vector3T<float> const&, float): jumps straight to the base-object constructor

    // 0x1007bccb0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // Capsule3D::Capsule3D(Vector3T<float> const&, Vector3T<float> const&, float)
    void Capsule3D::Capsule3D(Vector3T* param_1, Vector3T* param_2, float param_3) {
        undefined8 uVar1;

        field_8 = *(float*)(param_1 + 8);
        uVar1 = *(undefined8*)param_1;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((ulong)uVar1 >> 32);
        field_12 = 0;
        m_endPoint = *(undefined8*)param_2;
        field_24 = *(undefined4*)(param_2 + 8);
        m_radius = param_3;
    }

    // 0x1007bdcc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<signed char>::Vector3T(signed char, signed char, signed char): jumps straight to the base-object constructor

    // 0x1007bdcd0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<signed char>::Vector3T(signed char, signed char, signed char)
    /* Vector3T<unsigned char>::Vector3T(unsigned char, unsigned char, unsigned char) */

    void Vector3T<unsigned char>::Vector3T(uchar param_1, uchar param_2, uchar param_3) {
        *this = (Vector3T<unsigned char>)param_1;
        this[1] = (Vector3T<unsigned char>)param_2;
        this[2] = (Vector3T<unsigned char>)param_3;
    }

    // 0x1007c42b0, 384 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::LookAt(Vector3T<float> const&, Vector3T<float>)
    Matrix33T<float>* Matrix33T<float>::LookAt(undefined8 param_1_00, undefined4 param_2, Matrix33T<float>* param_1,
                                               Vector3T<float>* param_4) {
        Vector4T<float>* pVVar2;
        Vector3T* pVVar3;
        vector* pvVar4;
        Vector3T* pVVar5;
        float fVar6;
        undefined4 uVar7;
        Vector3T<float> local_78[16];
        Vector3T<float> local_68[16];
        ColourHSL local_58;
        undefined8 local_48;
        undefined4 local_40;
        float local_3c;
        undefined8 local_38;
        undefined4 local_30;

        local_48 = param_1_00;
        local_40 = param_2;
        local_3c = (float)param_4->Length();
        if (1e-06 <= local_3c) {
            fVar6 = Vector3Dot<float>((Vector3T*)&local_48, (Vector3T*)param_4);
            fVar6 = (float)::abs(fVar6);
            Vector3T<float>::Vector3T(local_78, fVar6);
            Vector3T<float>::Vector3T(local_68, 1.1920929e-07);
            local_38 = math::operator+((Vector3T*)local_78, (Vector3T*)local_68);
            uVar7 = 1065353216;
            local_30 = param_2;
            new (&local_58) ColourHSL(1.0, 1.0, 1.0);
            if (operator>((Vector3T*)&local_38, (Vector3T*)&local_58)) {
                uVar7 = 0;
                local_48.Set(1.0, 0.0, 0.0);
            }
            local_38 = math::operator/((Vector3T*)param_4, local_3c);
            local_30 = uVar7;
            pVVar2 = (Vector4T<float>*)param_1->second();
            Vector4T<float>::SetXYZ(pVVar2, (Vector3T*)&local_38);
            pVVar3 = (Vector3T*)param_1->second();
            local_38 = Vector3Cross<float>((Vector3T*)&local_48, pVVar3);
            local_30 = uVar7;
            pvVar4 = param_1->SSOBeginPtr(pVVar3);
            pVVar3 = (Vector3T*)&local_38;
            pvVar4->SetXYZ(pVVar3);
            pvVar4 = param_1->SSOBeginPtr(pVVar3);
            pvVar4->NormalizeSafe();
            pVVar5 = (Vector3T*)param_1->second();
            pvVar4 = param_1->SSOBeginPtr(pVVar3);
            local_38 = Vector3Cross<float>(pVVar5, (Vector3T*)pvVar4);
            local_30 = uVar7;
            pVVar2 = (Vector4T<float>*)param_1->qw();
            Vector4T<float>::SetXYZ(pVVar2, (Vector3T*)&local_38);
        } else {
            param_1 = (Matrix33T<float>*)SetToIdentity(param_1);
        }
        return param_1;
    }

    // 0x1007c4430, 48 bytes, inline, placed by debug map only (low confidence)
    // bool operator><float>(Vector3T<float> const&, Vector3T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Vector3T<float> const&) */

    bool operator>(Vector3T* param_1, Vector3T* param_2) {
        if ((*(float*)param_2 <= *(float*)param_1 && *(float*)param_1 != *(float*)param_2) &&
            (*(float*)(param_2 + 4) <= *(float*)(param_1 + 4) && *(float*)(param_1 + 4) != *(float*)(param_2 + 4))) {
            return *(float*)(param_2 + 8) <= *(float*)(param_1 + 8) && *(float*)(param_1 + 8) != *(float*)(param_2 + 8);
        }
        return false;
    }

} // namespace jag::math

namespace jag::render {
    // 0x1007bd100, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // FixedPrimitiveBatchData<256ul>::~FixedPrimitiveBatchData()
    void FixedPrimitiveBatchData<256ul>::~FixedPrimitiveBatchData() {
        ((this + 1064))->~fixed_vector();
        ~fixed_vector();
    }

} // namespace jag::render

// 0x1007bd540, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
