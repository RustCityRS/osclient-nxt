// libs/game/runetek5/scene/entities/LightSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LightSource : public Entity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LightSource();
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        uint8_t* GetShadowParams();
        shared_ptr<StaticPointLight>* GetConfigurationSource() const;
        void SetVisibleLastFrame(bool arg1);
        float GetCurrentIntensity() const;
        void GetInfluenceRanges() const;
        uint64_t GetLevelMin() const;
        uint64_t GetLevelMax() const;
        PointLightSM* GetPointLightSM() const;
        PointLightSM* GetPointLightSM();
        LightSource(graphics::GraphNode* graphNode, const shared_ptr<World>& world, ConfigProvider* configProvider,
                    const shared_ptr<StaticPointLight>& staticPointLight, unsigned int arg5);
        void RecalculateAABB();
        void UpdateShadows(float arg1);
        uint8_t GetVisibleLastFrame() const;
        void SyncWithConfigurationSource();
        uint64_t WithinInfluenceRadius(const math::Vector3T<float>& vector3);
        bool TestLightIntersection(const math::Sphere& sphere);
        uint8_t[16] GetWorldSphere() const;
        LightSource* GetPointLight() const;
        void GetAttenuationFalloff() const;
        void GetBacklightRatio() const;
        void SetPointLightSM(graphics::PointLightSM* pointLightSM);
        void AddRemoteMapSquare(unsigned int arg1, unsigned int arg2);
        void RemoveRemoteMapSquare(unsigned int arg1, unsigned int arg2);
        void InitialiseTweakVars(tweak::ContainerGroup& containerGroup, graphics::EffectManager& effectManager);
        void CreateTweakPosSlider(tweak::Container& container, const char* str, float* arg3);
        bool HasRemoteMapSquareReferences();
        uint32_t GetLastUpdateTick() const;
        void AffectsLevel(int arg1) const;
        void GetLocalPosition() const;
        uint32_t GetWorldPointLightID() const;
        void SuppressFlicker(bool arg1);
        static float m_debugGlobalIntensityScale; // = 1.0f
        static int32_t m_debugIsolatedPointLight; // = -1
        static bool m_suppressFlicker;

    private:
        GeometryBatch field_192;
    };

    // 0x1001cd9a0
    shared_ptr<StaticPointLight>* LightSource::GetConfigurationSource() const {
        return (shared_ptr<StaticPointLight>*)(field_192 + 144);
    }

    // 0x1001cda00
    void LightSource::SetVisibleLastFrame(bool arg1) {
        field_192[264] = arg1;
    }

    // 0x1001cdba0
    float LightSource::GetCurrentIntensity() const {
        float fVar1;

        if ((m_debugIsolatedPointLight == -1) || (fVar1 = 0.0, m_debugIsolatedPointLight == *(int*)(field_192 + 136))) {
            fVar1 = m_debugGlobalIntensityScale * *(float*)(field_192 + 164);
        }
        return fVar1;
    }

    // 0x100415cf0
    void LightSource::GetInfluenceRanges() const {
        ((Option<float>*)(*((field_192 + 144))).operator->())->GetDefaultValue();
    }

    // 0x1004177a0
    uint64_t LightSource::GetLevelMin() const {
        bool cVar1 = ((StaticPointLight*)(*((field_192 + 144))).operator->())->GetLightLevelsBelow();
        uint64_t uVar2 = 0;
        if (!cVar1) {
            uVar2 = ((CoordMapSquare*)(*((field_192 + 144))).operator->())->GetX();
        }
        return uVar2;
    }

    // 0x1004177e0
    uint64_t LightSource::GetLevelMax() const {
        bool cVar1 = ((ButtonElement*)(*((field_192 + 144))).operator->())->IsToggled();
        uint64_t uVar2 = 3;
        if (!cVar1) {
            uVar2 = ((CoordMapSquare*)(*((field_192 + 144))).operator->())->GetX();
        }
        return uVar2;
    }

    // 0x100417830
    PointLightSM* LightSource::GetPointLightSM() const {
        return *(PointLightSM**)(field_192 + 184);
    }

    // 0x10042a140
    uint8_t LightSource::GetVisibleLastFrame() const {
        return field_192[264];
    }

    // 0x10042a3a0
    uint8_t[16] LightSource::GetWorldSphere() const {
        uint8_t local_38[16];

        auto this_00 = GetNode();
        auto vector31 = this_00->GetWorldTranslation();
        auto vector32 = field_192->GetBoneIDMap();
        uint64_t local_28 = *vector31 + *vector32;
        unsigned int uVar1 = ((HitmarkType*)(*((field_192 + 144))).operator->())->GetDuration();
        new (local_38) math::Sphere(local_28, (float)uVar1);
        return local_38;
    }

    // 0x10042a500
    void LightSource::GetAttenuationFalloff() const {
        ((StaticPointLight*)(*((field_192 + 144))).operator->())->GetAttenuationFalloff();
    }

    // 0x10042a520
    void LightSource::GetBacklightRatio() const {
        ((StaticPointLight*)(*((field_192 + 144))).operator->())->GetBacklightRatio();
    }

    // 0x10043ed40
    bool LightSource::HasRemoteMapSquareReferences() {
        return ((field_192 + 208))->empty() ^ 1;
    }

    // 0x10043ed60
    uint32_t LightSource::GetLastUpdateTick() const {
        return *(uint32_t*)(field_192 + 160);
    }

    // 0x100441bb0
    void LightSource::AffectsLevel(int arg1) const {
        ((StaticPointLight*)(*((field_192 + 144))).operator->())->AffectsLevel(arg1);
    }

    // 0x100441be0
    void LightSource::GetLocalPosition() const {
        Vector2T<int>* this_00 = (Vector2T<int>*)(*((field_192 + 144))).operator->();
        auto vector31 = this_00->y();
        auto vector32 = field_192->GetBoneIDMap();
        *vector31 + *vector32;
    }

    // 0x100441c20
    uint32_t LightSource::GetWorldPointLightID() const {
        return *(uint32_t*)(field_192 + 136);
    }

    // 0x1004450b0
    void LightSource::SuppressFlicker(bool arg1) {
        m_suppressFlicker = arg1;
    }

} // namespace jag::game
