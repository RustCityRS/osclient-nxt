// libs/graphics/primitive/debugbasic/DebugCircle2DRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugCircle2DRender {
    public:
        DebugCircle2DRender(int);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void RenderCircle2DGroup(
            render::RenderContext&, render::DrawCallState const&, unsigned int, unsigned int, render::Viewport const&,
            math::Matrix44T<float> const&,
            eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator> const&);
        void RenderBatch(render::RenderContext&, render::DrawCallState const&, math::Matrix44T<float> const&,
                         unsigned long);
        void OnEndFrame();
        ~DebugCircle2DRender();

        // data members, from how the methods use this: 408 bytes
        char _unknown_0[8];
        ulong field_8;            // offset 8
        PrimVertPosCol* field_16; // offset 16
        int field_24;             // offset 24
        int field_28;             // offset 28
        char _unknown_32[176];
        InputAssemblerState field_208; // offset 208
        char _unknown_400[8];
    };

    // 0x1009c95a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DebugCircle2DRender::~DebugCircle2DRender(): jumps straight to the base-object destructor

    // 0x1009ca0b0, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugTri<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugTri<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugTri<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugTri<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugTri<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugTri<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca160, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[](
            (array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                64),
            (ulong)param_1);
    }

    // 0x1009ca450, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugLine<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugLine<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugLine<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugLine<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugLine<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugLine<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca500, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[](
            (array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64),
            (ulong)param_1);
    }

    // 0x1009ca520, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugAABB<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugAABB<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugAABB<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugAABB<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugAABB<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugAABB<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca5d0, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[](
            (array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64),
            (ulong)param_1);
    }

    // 0x1009ca5f0, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugOBB<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugOBB<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugOBB<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugOBB<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugOBB<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugOBB<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca6a0, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[](
            (array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                64),
            (ulong)param_1);
    }

    // 0x1009ca6c0, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugEllipsoid<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugEllipsoid<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugEllipsoid<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca770, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009ca790, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugCapsule<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugCapsule<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugCapsule<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugCapsule<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugCapsule<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca840, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009ca860, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugCone<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugCone<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugCone<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugCone<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugCone<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugCone<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca910, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[](
            (array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64),
            (ulong)param_1);
    }

    // 0x1009ca930, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugCylinder<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugCylinder<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugCylinder<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugCylinder<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugCylinder<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009ca9e0, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009caa00, 176 bytes, inline, placed by debug map only (low confidence)
    // void SortDebugPrimitiveGroup<DebugText<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>&)
    void SortDebugPrimitiveGroup<DebugText<DebugDataBasic>>(Frustum* param_1, vector* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        PlaneT<float>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined8 local_48[2];

        puVar1 = (undefined8*)param_2->HeapBeginPtr();
        puVar2 = (undefined8*)param_2->end();
        if (puVar1 != puVar2) {
            do {
                this_00 = (PlaneT<float>*)param_1->GetPlane(5);
                local_48[0] = (*puVar1)->GetCentrePos();
                uVar5 = this_00->SignedDistanceTo(local_48);
                *(undefined4*)(puVar1 + 1) = uVar5;
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        uVar3 = param_2->HeapBeginPtr();
        uVar4 = param_2->end();
        eastl::sort<eastl::pair<DebugText<DebugDataBasic> const*, float>*,
                    SortDebugPrimitiveGroup<DebugText<DebugDataBasic>>(
                        math::Frustum_const&,
                        eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>&)::
                        _lambda(eastl::pair<DebugText<DebugDataBasic> const*, float> const&,
                                eastl::pair<DebugText<DebugDataBasic> const*, float> const&) _1_>(uVar3, uVar4);
    }

    // 0x1009caab0, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[](
            (array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64),
            (ulong)param_1);
    }

    // 0x1009cad90, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009cadb0, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009cadd0, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009cb100, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009cb540, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009cb560, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic> >::GetRenderGroup(unsigned int)
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::GetRenderGroup(uint param_1) {
        std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_1);
    }

    // 0x1009cd360, 144 bytes, base-object destructor, inline, placed by class name
    // DebugCircle2DRender::~DebugCircle2DRender()
    void DebugCircle2DRender::~DebugCircle2DRender() {
        DestroyRenderingResources(this);
        (&field_400)->~Array();
        field_208->~InputAssemblerState();
        (&field_120)->~IndexBuffer();
        (&field_32)->~DynamicBuffer();
        ~Array();
    }

} // namespace jag

namespace jag::math {
    // 0x1009cb9e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888<ARGB8StorageLayout>(ColourStorage8888<ARGB8StorageLayout>): jumps straight to the base-object constructor

} // namespace jag::math
