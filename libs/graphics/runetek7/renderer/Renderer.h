// libs/graphics/runetek7/renderer/Renderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Renderer {
    public:
        // virtual methods in vtable order
        virtual ~Renderer();
        virtual GatherSceneGraphDrawableElements(
            eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&, SceneViewData const&,
            GraphNode*, EffectManager const&);
        GatherSceneGraphDrawableElements(unsigned int, SceneViewData const&, GraphNode*, int, EffectManager const&);
        GetDrawableQueue();
        void Clear();
        Renderer(
            RT7Core*,
            eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&,
            unsigned long, unsigned long);
        void AddDrawableList(DrawableList*);
        void RemoveDrawableList(DrawableList*);
        void AddDrawable(Drawable*);
        void RemoveDrawable(Drawable*);
        void RenderView(unsigned int, int, SceneViewData const&, GraphNode*, EffectManager&, bool);
        void RenderViewBegin(render::RenderContext&, SceneViewData const&, EffectManager&, RenderPassBitSet const&);
        void GatherDrawableElements(unsigned int, SceneViewData const&, GraphNode*, int, EffectManager const&);
        void RenderViewRenderPasses(SceneViewData const&, render::RenderContext&, bool, EffectManager&,
                                    RenderPassBitSet const&);
        void RenderViewEnd(render::RenderContext&);
        void RenderView(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&,
                        SceneViewData const&, GraphNode*, EffectManager&, bool, RenderPassBitSet const&);
        void GatherDrawableElements(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&,
                                    SceneViewData const&, GraphNode*, EffectManager const&);
        void RenderView(SceneViewData const&, EffectManager&, bool, RenderPassBitSet const&);
        void SetupDrawableGroups();

        // data members, from how the methods use this: 6328 bytes
        undefined** field_0; // offset 0, vtable pointer
        RT7Core* field_8;    // offset 8
        char _unknown_16[64];
        DrawableQueue field_80; // offset 80
    };

    // 0x1001cf5f0, 48 bytes, inline, placed by class name and debug map
    // Renderer::Clear()
    void Renderer::Clear() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1001cf640, 2128 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Invert(float*)
    Matrix44T<float>* Matrix44T<float>::Invert(float* param_1) {
        Vector4T<float>* this_00;
        Vector4T<float>* this_01;
        Vector4T<float>* this_02;
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float* pfVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;

        pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
        fVar1 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 1);
        fVar2 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 2);
        fVar3 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 3);
        fVar4 = *pfVar17;
        this_00 = (Vector4T<float>*)(this + 16);
        pfVar17 = (float*)Vector4T<float>::operator[](this_00, 0);
        fVar5 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_00, 1);
        fVar6 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_00, 2);
        fVar7 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_00, 3);
        fVar8 = *pfVar17;
        this_01 = (Vector4T<float>*)(this + 32);
        pfVar17 = (float*)Vector4T<float>::operator[](this_01, 0);
        fVar9 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_01, 1);
        fVar10 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_01, 2);
        fVar11 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_01, 3);
        fVar12 = *pfVar17;
        this_02 = (Vector4T<float>*)(this + 48);
        pfVar17 = (float*)Vector4T<float>::operator[](this_02, 0);
        fVar13 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_02, 1);
        fVar14 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_02, 2);
        fVar15 = *pfVar17;
        pfVar17 = (float*)Vector4T<float>::operator[](this_02, 3);
        fVar16 = *pfVar17;
        fVar28 = fVar6 * fVar1 - fVar5 * fVar2;
        fVar30 = fVar7 * fVar1 - fVar5 * fVar3;
        fVar24 = fVar8 * fVar1 - fVar5 * fVar4;
        fVar29 = fVar7 * fVar2 - fVar6 * fVar3;
        fVar27 = fVar8 * fVar2 - fVar6 * fVar4;
        fVar26 = fVar8 * fVar3 - fVar7 * fVar4;
        fVar21 = fVar16 * fVar11 - fVar15 * fVar12;
        fVar19 = fVar16 * fVar10 - fVar14 * fVar12;
        fVar23 = fVar15 * fVar10 - fVar14 * fVar11;
        fVar20 = fVar16 * fVar9 - fVar13 * fVar12;
        fVar22 = fVar15 * fVar9 - fVar13 * fVar11;
        fVar25 = fVar14 * fVar9 - fVar13 * fVar10;
        fVar18 = (fVar25 * fVar26 + fVar23 * fVar24 + fVar20 * fVar29 + fVar21 * fVar28) -
                 (fVar22 * fVar27 + fVar19 * fVar30);
        if (param_1 != (float*)0) {
            *param_1 = fVar18;
        }
        if (fVar18 != 0.0) {
            fVar18 = 1.0 / fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
            *pfVar17 = ((fVar23 * fVar8 + fVar21 * fVar6) - fVar19 * fVar7) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 1);
            *pfVar17 = (fVar19 * fVar3 - (fVar21 * fVar2 + fVar23 * fVar4)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 2);
            *pfVar17 = (fVar16 * fVar29 + (fVar14 * fVar26 - fVar15 * fVar27)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 3);
            *pfVar17 = (fVar11 * fVar27 - (fVar12 * fVar29 + fVar10 * fVar26)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_00, 0);
            *pfVar17 = (fVar20 * fVar7 - (fVar21 * fVar5 + fVar22 * fVar8)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_00, 1);
            *pfVar17 = ((fVar22 * fVar4 + fVar21 * fVar1) - fVar20 * fVar3) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_00, 2);
            *pfVar17 = (fVar15 * fVar24 - (fVar16 * fVar30 + fVar13 * fVar26)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_00, 3);
            *pfVar17 = (fVar12 * fVar30 + (fVar26 * fVar9 - fVar11 * fVar24)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_01, 0);
            *pfVar17 = ((fVar8 * fVar25 + fVar19 * fVar5) - fVar20 * fVar6) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_01, 1);
            *pfVar17 = (fVar20 * fVar2 - (fVar19 * fVar1 + fVar4 * fVar25)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_01, 2);
            *pfVar17 = (fVar16 * fVar28 + (fVar13 * fVar27 - fVar14 * fVar24)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_01, 3);
            *pfVar17 = (fVar24 * fVar10 - (fVar12 * fVar28 + fVar27 * fVar9)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_02, 0);
            *pfVar17 = (fVar6 * fVar22 - (fVar5 * fVar23 + fVar7 * fVar25)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_02, 1);
            *pfVar17 = ((fVar25 * fVar3 + fVar23 * fVar1) - fVar22 * fVar2) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_02, 2);
            *pfVar17 = (fVar14 * fVar30 - (fVar15 * fVar28 + fVar13 * fVar29)) * fVar18;
            pfVar17 = (float*)Vector4T<float>::operator[](this_02, 3);
            *pfVar17 = (fVar11 * fVar28 + (fVar9 * fVar29 - fVar10 * fVar30)) * fVar18;
        }
        return this;
    }

} // namespace jag::math
