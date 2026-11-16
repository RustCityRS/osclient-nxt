// libs/game/runetek5/scene/DynamicPointLightManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class DynamicPointLightManager {
    public:
        void GetAffectedAABBs() const;
        DynamicPointLightManager();
        ~DynamicPointLightManager();
        void ClearAffectedAABBs();
        int CreateLight();
        void DestroyLight(int arg1);
        bool HasLight(int arg1) const;
        void AddAffectedAABB(const math::AABB& aabb);
        long GetLight(int arg1) const;
        void SetLight(int arg1, const CoordGrid& coordGrid, float arg3, const math::Vector3T<float>& vector3, int arg5,
                      int arg6, float arg7, float arg8, float arg9, float arg10);
        void SetLightPosition(int arg1, int arg2, const math::Vector3T<float>& vector3);
        void ClearLights();
        void GetLightsInMapSquare(eastl::vector<shared_ptr<StaticPointLight>>& staticPointLights, int arg2,
                                  int arg3) const;

    private:
        unsigned long field_0;
        unsigned long field_8;
        uint8_t _unknown_16[56];
        int field_72;
        uint8_t _unknown_76[4];
    };

    // 0x100445150
    void DynamicPointLightManager::ClearAffectedAABBs() {
        field_40.clear();
    }

    // 0x10044b8a0
    DynamicPointLightManager::DynamicPointLightManager()
        : eastl::vector_map<int, shared_ptr<StaticPointLight>>(), field_72(0) {}

    // 0x10044c0b0
    DynamicPointLightManager::~DynamicPointLightManager() {
        field_40.~vector();
    }

    // 0x100498360
    bool DynamicPointLightManager::HasLight(int arg1) const {
        long lVar1 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this);
        long lVar2 = end();
        return lVar1 != lVar2;
    }

    // 0x1004983a0
    void DynamicPointLightManager::AddAffectedAABB(const math::AABB& aabb) {
        field_40.push_back(aabb);
    }

} // namespace jag::game
