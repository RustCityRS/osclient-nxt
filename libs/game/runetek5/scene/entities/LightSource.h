// libs/game/runetek5/scene/entities/LightSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LightSource : public Entity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LightSource();
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        GetShadowParams();
        GetConfigurationSource() const;
        void SetVisibleLastFrame(bool);
        float GetCurrentIntensity() const;
        void GetInfluenceRanges() const;
        GetLevelMin() const;
        GetLevelMax() const;
        GetPointLightSM() const;
        GetPointLightSM();
        LightSource(graphics::GraphNode*, shared_ptr<World> const&, ConfigProvider*,
                    shared_ptr<StaticPointLight> const&, unsigned int);
        void RecalculateAABB();
        void UpdateShadows(float);
        GetVisibleLastFrame() const;
        void SyncWithConfigurationSource();
        WithinInfluenceRadius(math::Vector3T<float> const&);
        bool TestLightIntersection(math::Sphere const&);
        GetWorldSphere() const;
        GetPointLight() const;
        void GetAttenuationFalloff() const;
        void GetBacklightRatio() const;
        void SetPointLightSM(graphics::PointLightSM*);
        void AddRemoteMapSquare(unsigned int, unsigned int);
        void RemoveRemoteMapSquare(unsigned int, unsigned int);
        void InitialiseTweakVars(tweak::ContainerGroup&, graphics::EffectManager&);
        void CreateTweakPosSlider(tweak::Container&, char const*, float*);
        byte HasRemoteMapSquareReferences();
        GetLastUpdateTick() const;
        void AffectsLevel(int) const;
        void GetLocalPosition() const;
        GetWorldPointLightID() const;
        void SuppressFlicker(bool);
        static float /* 4 bytes */ m_debugGlobalIntensityScale; // = 1.0f
        static /* 4 bytes */ m_debugIsolatedPointLight;         // = -1
        static /* 7 bytes */ m_suppressFlicker;

        // data members, from how the methods use this: 1448 bytes, the first 192 are Entity
        GeometryBatch field_192; // offset 192
    };

    // 0x1001cd9a0, 16 bytes, inline, placed by class name and debug map
    // LightSource::GetConfigurationSource() const
    undefined1* LightSource::GetConfigurationSource() {
        return field_192 + 144;
    }

    // 0x1001cda00, 16 bytes, inline, placed by class name
    // LightSource::SetVisibleLastFrame(bool)
    void LightSource::SetVisibleLastFrame(bool param_1) {
        field_192[264] = param_1;
    }

    // 0x1001cdba0, 64 bytes, inline, placed by class name
    // LightSource::GetCurrentIntensity() const
    float LightSource::GetCurrentIntensity() {
        float fVar1;

        if ((m_debugIsolatedPointLight == -1) || (fVar1 = 0.0, m_debugIsolatedPointLight == *(int*)(field_192 + 136))) {
            fVar1 = m_debugGlobalIntensityScale * *(float*)(field_192 + 164);
        }
        return fVar1;
    }

    // 0x100415cf0, 32 bytes, inline, placed by class name
    // LightSource::GetInfluenceRanges() const
    void LightSource::GetInfluenceRanges() {
        Option<float>* this_00;

        this_00 =
            (Option<float>*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)(field_192 + 144));
        this_00->GetDefaultValue();
    }

    // 0x1004177a0, 64 bytes, inline, placed by class name
    // LightSource::GetLevelMin() const
    undefined8 LightSource::GetLevelMin() {
        char cVar1;
        StaticPointLight* this_00;
        CoordMapSquare* this_01;
        undefined8 uVar2;

        this_00 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
            (shared_ptr<StaticPointLight>*)(field_192 + 144));
        cVar1 = this_00->GetLightLevelsBelow();
        uVar2 = 0;
        if (cVar1 == '\0') {
            this_01 = (CoordMapSquare*)shared_ptr<StaticPointLight>::operator->(
                (shared_ptr<StaticPointLight>*)(field_192 + 144));
            uVar2 = this_01->GetX();
        }
        return uVar2;
    }

    // 0x1004177e0, 80 bytes, inline, placed by class name
    // LightSource::GetLevelMax() const
    undefined8 LightSource::GetLevelMax() {
        char cVar1;
        ButtonElement* this_00;
        undefined8 uVar2;
        CoordMapSquare* this_01;

        this_00 =
            (ButtonElement*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)(field_192 + 144));
        cVar1 = this_00->IsToggled();
        uVar2 = 3;
        if (cVar1 == '\0') {
            this_01 = (CoordMapSquare*)shared_ptr<StaticPointLight>::operator->(
                (shared_ptr<StaticPointLight>*)(field_192 + 144));
            uVar2 = this_01->GetX();
        }
        return uVar2;
    }

    // 0x100417830, 16 bytes, inline, placed by class name
    // LightSource::GetPointLightSM() const
    /* LightSource::GetPointLightSM() */

    undefined8 LightSource::GetPointLightSM() {
        return *(undefined8*)(field_192 + 184);
    }

    // 0x10042a140, 16 bytes, inline, placed by class name
    // LightSource::GetVisibleLastFrame() const
    undefined1 LightSource::GetVisibleLastFrame() {
        return field_192[264];
    }

    // 0x10042a3a0, 128 bytes, inline, placed by class name
    // LightSource::GetWorldSphere() const
    undefined1[16] LightSource::GetWorldSphere() {
        uint uVar1;
        GraphNode* this_00;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        HitmarkType* this_01;
        undefined1 local_38[16];
        undefined8 local_28;

        this_00 = (GraphNode*)GetNode();
        pVVar2 = (Vector3T*)this_00->GetWorldTranslation();
        pVVar3 = (Vector3T*)field_192->GetBoneIDMap();
        local_28 = math::operator+(pVVar2, pVVar3);
        this_01 =
            (HitmarkType*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)(field_192 + 144));
        uVar1 = this_01->GetDuration();
        new (local_38) math::Sphere((Vector3T*)&local_28, (float)uVar1);
        return local_38;
    }

    // 0x10042a500, 32 bytes, inline, placed by class name
    // LightSource::GetAttenuationFalloff() const
    void LightSource::GetAttenuationFalloff() {
        StaticPointLight* this_00;

        this_00 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
            (shared_ptr<StaticPointLight>*)(field_192 + 144));
        this_00->GetAttenuationFalloff();
    }

    // 0x10042a520, 32 bytes, inline, placed by class name
    // LightSource::GetBacklightRatio() const
    void LightSource::GetBacklightRatio() {
        StaticPointLight* this_00;

        this_00 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
            (shared_ptr<StaticPointLight>*)(field_192 + 144));
        this_00->GetBacklightRatio();
    }

    // 0x10043ed40, 32 bytes, inline, placed by class name
    // LightSource::HasRemoteMapSquareReferences()
    byte LightSource::HasRemoteMapSquareReferences() {
        byte bVar1;

        bVar1 = ((field_192 + 208))->empty();
        return bVar1 ^ 1;
    }

    // 0x10043ed60, 16 bytes, inline, placed by class name
    // LightSource::GetLastUpdateTick() const
    undefined4 LightSource::GetLastUpdateTick() {
        return *(undefined4*)(field_192 + 160);
    }

    // 0x100441bb0, 48 bytes, inline, placed by class name
    // LightSource::AffectsLevel(int) const
    void LightSource::AffectsLevel(int param_1) {
        StaticPointLight* this_00;

        this_00 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
            (shared_ptr<StaticPointLight>*)(field_192 + 144));
        this_00->AffectsLevel(param_1);
    }

    // 0x100441be0, 64 bytes, inline, placed by class name
    // LightSource::GetLocalPosition() const
    void LightSource::GetLocalPosition() {
        Vector2T<int>* this_00;
        Vector3T* pVVar1;
        Vector3T* pVVar2;

        this_00 =
            (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)(field_192 + 144));
        pVVar1 = (Vector3T*)this_00->y();
        pVVar2 = (Vector3T*)field_192->GetBoneIDMap();
        math::operator+(pVVar1, pVVar2);
    }

    // 0x100441c20, 16 bytes, inline, placed by class name
    // LightSource::GetWorldPointLightID() const
    undefined4 LightSource::GetWorldPointLightID() {
        return *(undefined4*)(field_192 + 136);
    }

    // 0x1004450b0, 16 bytes, inline, placed by class name
    // LightSource::SuppressFlicker(bool)
    void LightSource::SuppressFlicker(bool param_1) {
        m_suppressFlicker = param_1;
    }

} // namespace jag::game
