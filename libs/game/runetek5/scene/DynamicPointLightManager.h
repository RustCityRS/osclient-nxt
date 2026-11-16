// libs/game/runetek5/scene/DynamicPointLightManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class DynamicPointLightManager {
    public:
        GetAffectedAABBs() const;
        DynamicPointLightManager();
        ~DynamicPointLightManager();
        void ClearAffectedAABBs();
        int CreateLight();
        void DestroyLight(int);
        bool HasLight(int) const;
        void AddAffectedAABB(math::AABB const&);
        long GetLight(int) const;
        void SetLight(int, CoordGrid const&, float, math::Vector3T<float> const&, int, int, float, float, float, float);
        void SetLightPosition(int, int, math::Vector3T<float> const&);
        void ClearLights();
        void GetLightsInMapSquare(eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>&, int, int) const;

        // data members, from how the methods use this: 80 bytes
        ulong field_0; // offset 0
        ulong field_8; // offset 8
        char _unknown_16[56];
        int field_72; // offset 72
        char _unknown_76[4];
    };

    // 0x10043cde0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DynamicPointLightManager::DynamicPointLightManager(): jumps straight to the base-object constructor

    // 0x10043d090, 16 bytes, complete-object destructor, inline, placed by class name
    // DynamicPointLightManager::~DynamicPointLightManager(): jumps straight to the base-object destructor

    // 0x100445150, 16 bytes, inline, placed by class name
    // DynamicPointLightManager::ClearAffectedAABBs()
    void DynamicPointLightManager::ClearAffectedAABBs() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x10044b8a0, 64 bytes, base-object constructor, inline, placed by class name
    // DynamicPointLightManager::DynamicPointLightManager()
    void DynamicPointLightManager::DynamicPointLightManager() {
        new (this) eastl::vector_map<int, shared_ptr<StaticPointLight>, eastl::less<int>, eastl::allocator,
                                     eastl::vector<eastl::pair<int, shared_ptr<StaticPointLight>>, eastl::allocator>>();
        new (&field_40) eastl::vector<math::AABB, eastl::allocator>();
        field_72 = 0;
    }

    // 0x10044c0b0, 48 bytes, base-object destructor, inline, placed by class name
    // DynamicPointLightManager::~DynamicPointLightManager()
    void DynamicPointLightManager::~DynamicPointLightManager() {
        (&field_40)->~vector();
        ~vector_map();
    }

    // 0x100498360, 64 bytes, inline, placed by class name
    // DynamicPointLightManager::HasLight(int) const
    bool DynamicPointLightManager::HasLight(int param_1) {
        long lVar1;
        long lVar2;
        int local_1c;

        local_1c = param_1;
        lVar1 = find(&local_1c);
        lVar2 = end();
        return lVar1 != lVar2;
    }

    // 0x1004983a0, 16 bytes, inline, placed by class name
    // DynamicPointLightManager::AddAffectedAABB(math::AABB const&)
    void DynamicPointLightManager::AddAffectedAABB(AABB* param_1) {
        (&field_40, param_1)->push_back();
    }

} // namespace jag::game
