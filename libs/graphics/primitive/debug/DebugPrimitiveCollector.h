// libs/graphics/primitive/debug/DebugPrimitiveCollector.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugPrimitiveCollector {
    public:
        DebugPrimitiveCollector(const DebugPrimitiveCollector<DebugDataBasic>::Config& config);
        ~DebugPrimitiveCollector();
        void Clear();
    };

    // 0x1009c5810
    DebugPrimitiveCollector<DebugDataBasic>::DebugPrimitiveCollector(
        const DebugPrimitiveCollector<DebugDataBasic>::Config& config) {
        new ((this + 1)) eastl::vector<DebugTri<DebugDataBasic>>();
        new ((this + 5)) eastl::vector<DebugLine<DebugDataBasic>>();
        new ((this + 9)) eastl::vector<DebugEllipsoid<DebugDataBasic>>();
        new ((this + 13)) eastl::vector<DebugCapsule<DebugDataBasic>>();
        new ((this + 17)) eastl::vector<DebugCone<DebugDataBasic>>();
        new ((this + 21)) eastl::vector<DebugCylinder<DebugDataBasic>>();
        new ((this + 25)) eastl::vector<DebugAABB<DebugDataBasic>>();
        new ((this + 29)) eastl::vector<DebugOBB<DebugDataBasic>>();
        new ((this + 33)) eastl::vector<DebugFrustum<DebugDataBasic>>();
        new ((this + 37)) eastl::vector<DebugPlane<DebugDataBasic>>();
        new ((this + 41)) eastl::vector<DebugImage2D<DebugDataBasic>>();
        new ((this + 45)) eastl::vector<DebugImageCube<DebugDataBasic>>();
        new ((this + 49)) eastl::vector<DebugImage3D<DebugDataBasic>>();
        new ((this + 53)) eastl::vector<DebugText<DebugDataBasic>>();
        new ((this + 57)) eastl::vector<DebugText2D<DebugDataBasic>>();
        new ((this + 61)) eastl::vector<DebugRect2D<DebugDataBasic>>();
        new ((this + 65)) eastl::vector<DebugCircle2D<DebugDataBasic>>();
        DebugPrimitiveCollector<DebugDataBasic> _vtbl* pDVar1 =
            *(DebugPrimitiveCollector<DebugDataBasic> _vtbl**)config;
        DebugPrimitiveCollector<DebugDataBasic> _vtbl* pDVar2 =
            *(DebugPrimitiveCollector<DebugDataBasic> _vtbl**)(config + 8);
        DebugPrimitiveCollector<DebugDataBasic> _vtbl* pDVar3 =
            *(DebugPrimitiveCollector<DebugDataBasic> _vtbl**)(config + 16);
        DebugPrimitiveCollector<DebugDataBasic> _vtbl* pDVar4 =
            *(DebugPrimitiveCollector<DebugDataBasic> _vtbl**)(config + 24);
        DebugPrimitiveCollector<DebugDataBasic> _vtbl* pDVar5 =
            *(DebugPrimitiveCollector<DebugDataBasic> _vtbl**)(config + 32);
        DebugPrimitiveCollector<DebugDataBasic> _vtbl* pDVar6 =
            *(DebugPrimitiveCollector<DebugDataBasic> _vtbl**)(config + 40);
        DebugPrimitiveCollector<DebugDataBasic> _vtbl* pDVar7 =
            *(DebugPrimitiveCollector<DebugDataBasic> _vtbl**)(config + 56);
        ((this + 1))->reserve((long)*(int*)config);
        ((this + 5))->reserve((long)*(int*)(config + 4));
        ((this + 9))->reserve((long)*(int*)(config + 8));
        ((this + 13))->reserve((long)*(int*)(config + 12));
        ((this + 17))->reserve((long)*(int*)(config + 16));
        ((this + 21))->reserve((long)*(int*)(config + 20));
        ((this + 25))->reserve((long)*(int*)(config + 24));
        ((this + 29))->reserve((long)*(int*)(config + 28));
        ((this + 33))->reserve((long)*(int*)(config + 32));
        ((this + 37))->reserve((long)*(int*)(config + 36));
        ((this + 41))->reserve((long)*(int*)(config + 40));
        ((this + 45))->reserve((long)*(int*)(config + 44));
        ((this + 49))->reserve((long)*(int*)(config + 48));
        ((this + 53))->reserve((long)*(int*)(config + 52));
        ((this + 57))->reserve((long)*(int*)(config + 56));
        ((this + 61))->reserve((long)*(int*)(config + 60));
        ((this + 65))->reserve((long)*(int*)(config + 64));
    }

    // 0x1009c5db0
    DebugPrimitiveCollector<DebugDataBasic>::~DebugPrimitiveCollector() {
        ((this + 65))->~vector();
        ((this + 61))->~vector();
        ((this + 57))->~vector();
        ((this + 53))->~vector();
        ((this + 49))->~vector();
        ((this + 45))->~vector();
        ((this + 41))->~vector();
        ((this + 37))->~vector();
        ((this + 33))->~vector();
        ((this + 29))->~vector();
        ((this + 25))->~vector();
        ((this + 21))->~vector();
        ((this + 17))->~vector();
        ((this + 13))->~vector();
        ((this + 9))->~vector();
        ((this + 5))->~vector();
        ((this + 1))->~vector();
    }

    // 0x1009c5f90
    void DebugPrimitiveCollector<DebugDataBasic>::Clear() {
        ((this + 1))->clear();
        ((this + 5))->clear();
        ((this + 9))->clear();
        ((this + 13))->clear();
        ((this + 17))->clear();
        ((this + 21))->clear();
        ((this + 25))->clear();
        ((this + 29))->clear();
        ((this + 33))->clear();
        ((this + 37))->clear();
        ((this + 41))->clear();
        ((this + 45))->clear();
        ((this + 49))->clear();
        ((this + 53))->clear();
        ((this + 57))->clear();
        ((this + 61))->clear();
        ((this + 65))->clear();
    }

} // namespace jag
