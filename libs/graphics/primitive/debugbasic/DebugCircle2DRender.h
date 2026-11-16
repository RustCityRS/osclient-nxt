// libs/graphics/primitive/debugbasic/DebugCircle2DRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugCircle2DRender {
    public:
        DebugCircle2DRender(int arg1);
        uint64_t CreateRenderingResources();
        void DestroyRenderingResources();
        void RenderCircle2DGroup(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                 unsigned int arg3, unsigned int arg4, const render::Viewport& viewport,
                                 const math::Matrix44T<float>& matrix44,
                                 eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>> const& pairs);
        void RenderBatch(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                         const math::Matrix44T<float>& matrix44, unsigned long arg4);
        void OnEndFrame();
        ~DebugCircle2DRender();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosCol* field_16;
        int field_24;
        int field_28;
        uint8_t _unknown_32[176];
        InputAssemblerState field_208;
        uint8_t _unknown_400[8];
    };

    // 0x1009ca0b0
    void SortDebugPrimitiveGroup<DebugTri<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugTri<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugTri<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugTri<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugTri<DebugDataBasic> const*, float> const&) _1_>(arg1, auVar4._0_8_,
                                                                                                 auVar4._8_8_);
    }

    // 0x1009ca160
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009ca450
    void SortDebugPrimitiveGroup<DebugLine<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugLine<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugLine<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugLine<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugLine<DebugDataBasic> const*, float> const&) _1_>(arg1, auVar4._0_8_,
                                                                                                  auVar4._8_8_);
    }

    // 0x1009ca500
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009ca520
    void SortDebugPrimitiveGroup<DebugAABB<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugAABB<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugAABB<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugAABB<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugAABB<DebugDataBasic> const*, float> const&) _1_>(arg1, auVar4._0_8_,
                                                                                                  auVar4._8_8_);
    }

    // 0x1009ca5d0
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009ca5f0
    void SortDebugPrimitiveGroup<DebugOBB<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugOBB<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugOBB<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugOBB<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugOBB<DebugDataBasic> const*, float> const&) _1_>(arg1, auVar4._0_8_,
                                                                                                 auVar4._8_8_);
    }

    // 0x1009ca6a0
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009ca6c0
    void SortDebugPrimitiveGroup<DebugEllipsoid<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugEllipsoid<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float> const&) _1_>(
            arg1, auVar4._0_8_, auVar4._8_8_);
    }

    // 0x1009ca770
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009ca790
    void SortDebugPrimitiveGroup<DebugCapsule<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugCapsule<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugCapsule<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugCapsule<DebugDataBasic> const*, float> const&) _1_>(arg1, auVar4._0_8_,
                                                                                                     auVar4._8_8_);
    }

    // 0x1009ca840
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009ca860
    void SortDebugPrimitiveGroup<DebugCone<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugCone<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugCone<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugCone<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugCone<DebugDataBasic> const*, float> const&) _1_>(arg1, auVar4._0_8_,
                                                                                                  auVar4._8_8_);
    }

    // 0x1009ca910
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009ca930
    void SortDebugPrimitiveGroup<DebugCylinder<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugCylinder<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugCylinder<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugCylinder<DebugDataBasic> const*, float> const&) _1_>(
            arg1, auVar4._0_8_, auVar4._8_8_);
    }

    // 0x1009ca9e0
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009caa00
    void SortDebugPrimitiveGroup<DebugText<DebugDataBasic>>(
        const math::Frustum& frustum, eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>& pairs) {
        PlaneT<float>* this_00;
        uint32_t uVar3;
        uint8_t auVar4[16];
        uint64_t local_48[2];

        auto puVar1 = pairs.HeapBeginPtr();
        auto puVar2 = pairs.end();
        if (puVar1 != puVar2) {
            do {
                this_00 = frustum.GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar3 = this_00->SignedDistanceTo(*local_48);
                *(uint32_t*)(puVar1 + 1) = uVar3;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        auto arg1 = pairs.HeapBeginPtr();
        auVar4 = pairs.end();
        eastl::sort<eastl::pair<DebugText<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugText<DebugDataBasic>>(
                        *(math::Frustum const&),
                        *(eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>&))::
                        _lambda(eastl::pair<DebugText<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugText<DebugDataBasic> const*, float> const&) _1_>(arg1, auVar4._0_8_,
                                                                                                  auVar4._8_8_);
    }

    // 0x1009caab0
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009cad90
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009cadb0
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009cadd0
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009cb100
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009cb540
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009cb560
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::GetRenderGroup(unsigned int arg1) {
        (*((this + 64)))[(unsigned long)arg1];
    }

    // 0x1009cd360
    DebugCircle2DRender::~DebugCircle2DRender() {
        DestroyRenderingResources();
        field_400.~Array();
        field_208->~InputAssemblerState();
        field_120.~IndexBuffer();
        field_32.~DynamicBuffer();
    }

} // namespace jag
