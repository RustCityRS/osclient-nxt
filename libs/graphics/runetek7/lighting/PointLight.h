// libs/graphics/runetek7/lighting/PointLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class PointLight {
    public:
        PointLight();
        PointLight* operator=(PointLight const&);
        PointLight(math::Vector3T<float> const&, float, math::Vector4T<float> const&, float, float, bool);

        // data members, from how the methods use this: 44 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        float field_12;      // offset 12
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        float field_32;      // offset 32
        float field_36;      // offset 36
        bool field_40;       // offset 40
        char _unknown_41[3];
    };

    class PointLightPositionJitterData {
    public:
        PointLightPositionJitterData();
        PointLightPositionJitterData* operator=(PointLightPositionJitterData&&);

        // data members, from how the methods use this: 60 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined4 field_24; // offset 24
        undefined8 field_28; // offset 28
        undefined4 field_36; // offset 36
        undefined8 field_40; // offset 40
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        char _unknown_56[4];
    };

    class PointLightShadowPassVisTestFunctor {
    public:
        PointLightShadowPassVisTestFunctor();
        bool operator()(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                        math::AABB const&, math::OBB const&) const;
        static /* 6 bytes */ m_shadowCasterVolumeCulling; // = { 1, 0, 0, 0, 0, 0 }
        static /* 2 bytes */ m_showPointLightShadowCasterFrustums;

        // data members, from how the methods use this: 68 bytes
        Layout* field_0;                     // offset 0
        GraphNode* field_8;                  // offset 8
        EntityHighlightGlobalState field_16; // offset 16
    };

    class ScriptedPointLight {
    public:
        GetRadius();
        GetRGB() const;
        GetPositionJitterOffset() const;
        GetRadius() const;
        GetPositionJitterData();
        GetScriptID() const;
        HasRGBChanged();
        ScriptedPointLight(unsigned int, unsigned int, int);
        float GetIntensityScale() const;
        ScriptedPointLight* operator=(ScriptedPointLight&&);
        void SetOverrideRGB(unsigned int, unsigned int, unsigned int);
        void UpdateColour(unsigned int);
        void SetOverrideIntensityScale(unsigned int, unsigned int, unsigned int);
        void UpdateIntensityScale(unsigned int);

        // data members, from how the methods use this: 132 bytes
        uint field_0;        // offset 0
        uint field_4;        // offset 4
        uint field_8;        // offset 8
        uint m_overrideRGB;  // offset 12
        uint field_16;       // offset 16
        uint field_20;       // offset 20
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        float field_32;      // offset 32
        float field_36;      // offset 36
        float field_40;      // offset 40
        uint field_44;       // offset 44
        uint field_48;       // offset 48
        uint field_52;       // offset 52
        int field_56;        // offset 56
        undefined1 field_60; // offset 60
        undefined3 field_61; // offset 61
        uint field_64;       // offset 64
        undefined1 field_68; // offset 68
        char _unknown_69[55];
        float field_124; // offset 124
        char _unknown_128[4];
    };

    // 0x100f4383a, 6 bytes, __data
    PointLightShadowPassVisTestFunctor::m_shadowCasterVolumeCulling = {1, 0, 0, 0, 0, 0};

    // 0x1039bd1ea, 2 bytes, __common; zero-initialised
    PointLightShadowPassVisTestFunctor::m_showPointLightShadowCasterFrustums;

    // 0x1001df340, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // PointLightShadowPassVisTestFunctor::PointLightShadowPassVisTestFunctor()
    void PointLightShadowPassVisTestFunctor::PointLightShadowPassVisTestFunctor() {
        field_0 = (Layout*)0;
        field_8 = (GraphNode*)0;
        new (field_16) math::Sphere();
    }

    // 0x1001e2a50, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PointLight::PointLight(): jumps straight to the base-object constructor

    // 0x1001e2a60, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // PointLight::PointLight()
    void PointLight::PointLight() {
        new (this) math::Vector3T<int>();
        field_12 = 0.0;
        new (&field_16, 1.0, 1.0, 1.0, 1.0) ImVec4();
        field_32 = 0.0;
        field_36 = 0.0;
        field_40 = true;
    }

    // 0x1002f0fb0, 80 bytes, inline, placed by class name
    // PointLight::operator=(PointLight const&)
    /* PointLight::TEMPNAMEPLACEHOLDERVALUE(PointLight const&) */

    PointLight* PointLight::operator=(PointLight* param_1) {
        float fVar1;

        SetXYZ(param_1);
        field_12 = param_1->field_12;
        math::Rect<float>::operator=((Rect<float>*)&field_16, (Rect*)&param_1->field_16);
        fVar1 = param_1->field_36;
        field_32 = param_1->field_32;
        field_36 = fVar1;
        field_40 = param_1->field_40;
        return this;
    }

    // 0x100327280, 16 bytes, complete-object constructor, inline, placed by class name
    // PointLight::PointLight(math::Vector3T<float> const&, float, math::Vector4T<float> const&, float, float, bool): jumps straight to the base-object constructor

    // 0x100327290, 48 bytes, base-object constructor, inline, placed by class name
    // PointLight::PointLight(math::Vector3T<float> const&, float, math::Vector4T<float> const&, float, float, bool)
    void PointLight::PointLight(Vector3T* param_1, float param_2, Vector4T* param_3, float param_4, float param_5,
                                bool param_6) {
        undefined8 uVar1;

        field_8 = *(undefined4*)(param_1 + 8);
        uVar1 = *(undefined8*)param_1;
        field_0 = (int)uVar1;
        field_4 = (int)((ulong)uVar1 >> 32);
        field_12 = param_2;
        uVar1 = *(undefined8*)(param_3 + 8);
        field_16 = *(undefined8*)param_3;
        field_24 = uVar1;
        field_32 = param_4;
        field_36 = param_5;
        field_40 = param_6;
    }

    // 0x100429b20, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // ScriptedPointLight::ScriptedPointLight(unsigned int, unsigned int, int)
    void ScriptedPointLight::ScriptedPointLight(uint param_1, uint param_2, int param_3) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_2;
        m_overrideRGB = param_2;
        field_16 = param_2;
        field_20 = 0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 1.0;
        field_36 = 1.0;
        field_40 = 1.0;
        field_44 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = param_3;
        field_60 = 0;
        field_64 = 0;
        field_68 = 0;
        new (&field_72) PointLightPositionJitterData();
        if (8320 < field_0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_radius <= constants::MapConstants::MAX_LIGHT_RADIUS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLight.h",
                      66, (char*)0);
        }
    }

    // 0x10042a130, 16 bytes, inline, placed by class header (inline)
    // ScriptedPointLight::GetIntensityScale() const
    float ScriptedPointLight::GetIntensityScale() {
        return field_124 * field_32;
    }

    // 0x10042a1f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ScriptedPointLight::ScriptedPointLight(unsigned int, unsigned int, int): jumps straight to the base-object constructor

    // 0x10042a200, 80 bytes, inline, placed by class header (inline)
    // ScriptedPointLight::operator=(ScriptedPointLight&&)
    /* ScriptedPointLight::TEMPNAMEPLACEHOLDERVALUE(ScriptedPointLight&&)
    */

    ScriptedPointLight* ScriptedPointLight::operator=(ScriptedPointLight* param_1) {
        uint uVar1;
        undefined1 uVar2;
        int iVar3;
        undefined3 uVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        uint uVar8;
        uint uVar9;
        uint uVar10;
        uint uVar11;
        uint uVar12;
        uint uVar13;
        uint uVar14;
        uint uVar15;
        uint uVar16;

        uVar1 = param_1->field_64;
        uVar2 = param_1->field_68;
        field_61 = param_1->field_61;
        field_64 = uVar1;
        field_68 = uVar2;
        uVar13 = param_1->field_0;
        uVar14 = param_1->field_4;
        uVar15 = param_1->field_8;
        uVar16 = param_1->m_overrideRGB;
        uVar9 = param_1->field_16;
        uVar10 = param_1->field_20;
        uVar11 = param_1->field_24;
        uVar12 = param_1->field_28;
        fVar5 = param_1->field_32;
        fVar6 = param_1->field_36;
        fVar7 = param_1->field_40;
        uVar8 = param_1->field_44;
        uVar1 = param_1->field_52;
        iVar3 = param_1->field_56;
        uVar2 = param_1->field_60;
        uVar4 = param_1->field_61;
        field_48 = param_1->field_48;
        field_52 = uVar1;
        field_56 = iVar3;
        field_60 = uVar2;
        field_61 = uVar4;
        field_32 = fVar5;
        field_36 = fVar6;
        field_40 = fVar7;
        field_44 = uVar8;
        field_16 = uVar9;
        field_20 = uVar10;
        field_24 = uVar11;
        field_28 = uVar12;
        field_0 = uVar13;
        field_4 = uVar14;
        field_8 = uVar15;
        m_overrideRGB = uVar16;
        PointLightPositionJitterData::operator=((PointLightPositionJitterData*)&field_72,
                                                (PointLightPositionJitterData*)&param_1->field_72);
        return this;
    }

    // 0x1004319d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PointLightPositionJitterData::PointLightPositionJitterData(): jumps straight to the base-object constructor

    // 0x1004319e0, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // PointLightPositionJitterData::PointLightPositionJitterData()
    void PointLightPositionJitterData::PointLightPositionJitterData() {
        undefined* puVar1;

        field_0 = 0;
        field_8 = 0;
        puVar1 = PTR_ZERO_100ee66e8;
        field_24 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        field_16 = *(undefined8*)puVar1;
        field_28 = *(undefined8*)puVar1;
        field_36 = *(undefined4*)(puVar1 + 8);
        field_48 = *(undefined4*)(puVar1 + 8);
        field_40 = *(undefined8*)puVar1;
        field_52 = 1065353216;
    }

    // 0x100431ac0, 80 bytes, inline, placed by class header (inline)
    // PointLightPositionJitterData::operator=(PointLightPositionJitterData&&)
    /* PointLightPositionJitterData::TEMPNAMEPLACEHOLDERVALUE(PointLightPositionJitterData&&)
    */

    PointLightPositionJitterData* PointLightPositionJitterData::operator=(PointLightPositionJitterData* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        (&field_16, (Vector3T*)&param_1->field_16)->SetXYZ();
        (&field_28, (Vector3T*)&param_1->field_28)->SetXYZ();
        (&field_40, (Vector3T*)&param_1->field_40)->SetXYZ();
        field_52 = param_1->field_52;
        return this;
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001e41c0, 64 bytes, placed by debug map only (low confidence)
    // OSRenderCore_AnyThread::InitAudio()::$_0::operator()() const
    /* OSRenderCore_AnyThread::InitAudio()::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    MixerWorker* OSRenderCore_AnyThread::InitAudio()::$_0::operator()() {
        MixerWorker* this_00;

        this_00 = operator_new(456);
        MixerWorker::MixerWorker(this_00);
        return this_00;
    }

} // namespace jag::oldscape
