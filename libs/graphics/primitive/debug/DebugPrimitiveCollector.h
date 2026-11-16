// libs/graphics/primitive/debug/DebugPrimitiveCollector.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugPrimitiveCollector {
    public:
        DebugPrimitiveCollector(DebugPrimitiveCollector<DebugDataBasic>::Config const&);
        ~DebugPrimitiveCollector();
        void Clear();
    };

    // 0x1009c5810, 912 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugPrimitiveCollector<DebugDataBasic>::DebugPrimitiveCollector(DebugPrimitiveCollector<DebugDataBasic>::Config const&)
    void DebugPrimitiveCollector<DebugDataBasic>::DebugPrimitiveCollector(Config* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        *(undefined**)this = PTR_vtable_100ee79b8 + 16;
        new ((this + 8)) eastl::vector<DebugTri<DebugDataBasic>, eastl::allocator>();
        new ((this + 40)) eastl::vector<DebugLine<DebugDataBasic>, eastl::allocator>();
        new ((this + 72)) eastl::vector<DebugEllipsoid<DebugDataBasic>, eastl::allocator>();
        new ((this + 104)) eastl::vector<DebugCapsule<DebugDataBasic>, eastl::allocator>();
        new ((this + 136)) eastl::vector<DebugCone<DebugDataBasic>, eastl::allocator>();
        new ((this + 168)) eastl::vector<DebugCylinder<DebugDataBasic>, eastl::allocator>();
        new ((this + 200)) eastl::vector<DebugAABB<DebugDataBasic>, eastl::allocator>();
        new ((this + 232)) eastl::vector<DebugOBB<DebugDataBasic>, eastl::allocator>();
        new ((this + 264)) eastl::vector<DebugFrustum<DebugDataBasic>, eastl::allocator>();
        new ((this + 296)) eastl::vector<DebugPlane<DebugDataBasic>, eastl::allocator>();
        new ((this + 328)) eastl::vector<DebugImage2D<DebugDataBasic>, eastl::allocator>();
        new ((this + 360)) eastl::vector<DebugImageCube<DebugDataBasic>, eastl::allocator>();
        new ((this + 392)) eastl::vector<DebugImage3D<DebugDataBasic>, eastl::allocator>();
        new ((this + 424)) eastl::vector<DebugText<DebugDataBasic>, eastl::allocator>();
        new ((this + 456)) eastl::vector<DebugText2D<DebugDataBasic>, eastl::allocator>();
        new ((this + 488)) eastl::vector<DebugRect2D<DebugDataBasic>, eastl::allocator>();
        new ((this + 520)) eastl::vector<DebugCircle2D<DebugDataBasic>, eastl::allocator>();
        *(undefined4*)(this + 616) = *(undefined4*)(param_1 + 64);
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        uVar5 = *(undefined8*)(param_1 + 32);
        uVar6 = *(undefined8*)(param_1 + 40);
        uVar7 = *(undefined8*)(param_1 + 56);
        *(undefined8*)(this + 600) = *(undefined8*)(param_1 + 48);
        *(undefined8*)(this + 608) = uVar7;
        *(undefined8*)(this + 584) = uVar5;
        *(undefined8*)(this + 592) = uVar6;
        *(undefined8*)(this + 568) = uVar3;
        *(undefined8*)(this + 576) = uVar4;
        *(undefined8*)(this + 552) = uVar1;
        *(undefined8*)(this + 560) = uVar2;
        ((this + 8))->reserve((long)*(int*)param_1);
        ((this + 40))->reserve((long)*(int*)(param_1 + 4));
        ((this + 72))->reserve((long)*(int*)(param_1 + 8));
        ((this + 104))->reserve((long)*(int*)(param_1 + 12));
        ((this + 136))->reserve((long)*(int*)(param_1 + 16));
        ((this + 168))->reserve((long)*(int*)(param_1 + 20));
        ((this + 200))->reserve((long)*(int*)(param_1 + 24));
        ((this + 232))->reserve((long)*(int*)(param_1 + 28));
        ((this + 264))->reserve((long)*(int*)(param_1 + 32));
        ((this + 296))->reserve((long)*(int*)(param_1 + 36));
        ((this + 328))->reserve((long)*(int*)(param_1 + 40));
        ((this + 360))->reserve((long)*(int*)(param_1 + 44));
        ((this + 392))->reserve((long)*(int*)(param_1 + 48));
        ((this + 424))->reserve((long)*(int*)(param_1 + 52));
        ((this + 456))->reserve((long)*(int*)(param_1 + 56));
        ((this + 488))->reserve((long)*(int*)(param_1 + 60));
        ((this + 520))->reserve((long)*(int*)(param_1 + 64));
    }

    // 0x1009c5db0, 240 bytes, base-object destructor, inline, placed by class name
    // DebugPrimitiveCollector<DebugDataBasic>::~DebugPrimitiveCollector()
    void DebugPrimitiveCollector<DebugDataBasic>::~DebugPrimitiveCollector() {
        *(undefined**)this = PTR_vtable_100ee79b8 + 16;
        ((this + 520))->~vector();
        ((this + 488))->~vector();
        ((this + 456))->~vector();
        ((this + 424))->~vector();
        ((this + 392))->~vector();
        ((this + 360))->~vector();
        ((this + 328))->~vector();
        ((this + 296))->~vector();
        ((this + 264))->~vector();
        ((this + 232))->~vector();
        ((this + 200))->~vector();
        ((this + 168))->~vector();
        ((this + 136))->~vector();
        ((this + 104))->~vector();
        ((this + 72))->~vector();
        ((this + 40))->~vector();
        ((this + 8))->~vector();
    }

    // 0x1009c5f90, 224 bytes, inline, placed by class name
    // DebugPrimitiveCollector<DebugDataBasic>::Clear()
    void DebugPrimitiveCollector<DebugDataBasic>::Clear() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        ((this + 424))->clear();
        ((this + 456))->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

} // namespace jag
