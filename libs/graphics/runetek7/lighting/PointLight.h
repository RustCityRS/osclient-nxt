// libs/graphics/runetek7/lighting/PointLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class PointLight {
    public:
        PointLight();
        PointLight* operator=(const PointLight& pointLight);
        PointLight(const math::Vector3T<float>& vector3, float arg2, const math::Vector4T<float>& vector4, float arg4,
                   float arg5, bool arg6);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        float field_12;
        uint64_t field_16;
        uint64_t field_24;
        float field_32;
        float field_36;
        bool field_40;
        uint8_t _unknown_41[3];
    };

    class PointLightPositionJitterData {
    public:
        PointLightPositionJitterData();
        PointLightPositionJitterData* operator=(PointLightPositionJitterData&& pointLightPositionJitterData);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint32_t field_24;
        uint64_t field_28;
        uint32_t field_36;
        uint64_t field_40;
        uint32_t field_48;
        uint32_t field_52;
        uint8_t _unknown_56[4];
    };

    class PointLightShadowPassVisTestFunctor {
    public:
        PointLightShadowPassVisTestFunctor();
        bool operator()(std::array<math::IntersectionType, 10ul>& intersectionTypes, math::Frustum& frustum1,
                        const math::Frustum& frustum2, int arg4, const math::AABB& aabb, const math::OBB& obb) const;
        static uint8_t m_shadowCasterVolumeCulling[6]; // = { 1, 0, 0, 0, 0, 0 }
        static int16_t m_showPointLightShadowCasterFrustums;

    private:
        Layout* field_0;
        GraphNode* field_8;
        EntityHighlightGlobalState field_16;
    };

    class ScriptedPointLight {
    public:
        unsigned int GetRadius();
        unsigned int GetRGB() const;
        uint8_t* GetPositionJitterOffset() const;
        unsigned int GetRadius() const;
        uint8_t* GetPositionJitterData();
        int GetScriptID() const;
        bool HasRGBChanged();
        ScriptedPointLight(unsigned int arg1, unsigned int arg2, int arg3);
        float GetIntensityScale() const;
        ScriptedPointLight* operator=(ScriptedPointLight&& scriptedPointLight);
        void SetOverrideRGB(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        void UpdateColour(unsigned int arg1);
        void SetOverrideIntensityScale(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        void UpdateIntensityScale(unsigned int arg1);

    private:
        unsigned int m_radius;
        unsigned int field_4;
        unsigned int m_rGB;
        unsigned int field_12;
        unsigned int field_16;
        unsigned int field_20;
        unsigned int field_24;
        unsigned int field_28;
        float field_32;
        float field_36;
        float field_40;
        unsigned int field_44;
        unsigned int field_48;
        unsigned int field_52;
        int m_scriptID;
        uint8_t field_60;
        uint8_t field_61[3];
        unsigned int field_64;
        uint8_t field_68;
        uint8_t _unknown_69[55];
        float field_124;
        uint8_t _unknown_128[4];
    };

    // 0x100f4383a
    uint8_t PointLightShadowPassVisTestFunctor::m_shadowCasterVolumeCulling[6] = {1, 0, 0, 0, 0, 0};

    // 0x1039bd1ea
    int16_t PointLightShadowPassVisTestFunctor::m_showPointLightShadowCasterFrustums;

    // 0x1001df340
    PointLightShadowPassVisTestFunctor::PointLightShadowPassVisTestFunctor() : field_0(nullptr), field_8(nullptr) {}

    // 0x1001e2a60
    PointLight::PointLight()
        : math::Vector3T(), field_12(0.0), field_16(1.0, 1.0, 1.0, 1.0), field_32(0.0), field_36(0.0), field_40(true) {}

    // 0x1002f0fb0
    PointLight* PointLight::operator=(const PointLight& pointLight) {
        SetXYZ(pointLight);
        field_12 = pointLight.field_12;
        field_16 = pointLight.field_16;
        float fVar1 = pointLight.field_36;
        field_32 = pointLight.field_32;
        field_36 = fVar1;
        field_40 = pointLight.field_40;
        return this;
    }

    // 0x100327290
    PointLight::PointLight(const math::Vector3T<float>& vector3, float arg2, const math::Vector4T<float>& vector4,
                           float arg4, float arg5, bool arg6) {
        field_8 = *(uint32_t*)(vector3 + 8);
        uint64_t uVar1 = *(uint64_t*)vector3;
        field_0 = (int)uVar1;
        field_4 = (int)((unsigned long)uVar1 >> 32);
        field_12 = arg2;
        uVar1 = *(uint64_t*)(vector4 + 8);
        field_16 = *(uint64_t*)vector4;
        field_24 = uVar1;
        field_32 = arg4;
        field_36 = arg5;
        field_40 = arg6;
    }

    // 0x100429b20
    ScriptedPointLight::ScriptedPointLight(unsigned int arg1, unsigned int arg2, int arg3)
        : m_radius(arg1), field_4(arg2), m_rGB(arg2), field_12(arg2), field_16(arg2), field_20(0), field_24(0),
          field_28(0), field_32(1.0), field_36(1.0), field_40(1.0), field_44(0), field_48(0), field_52(0),
          m_scriptID(arg3), field_60(0), field_64(0), field_68(0) {
        if (8320 < m_radius) {
            LogAssert("m_radius <= constants::MapConstants::MAX_LIGHT_RADIUS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLight.h",
                      66, nullptr);
        }
    }

    // 0x10042a130
    float ScriptedPointLight::GetIntensityScale() const {
        return field_124 * field_32;
    }

    // 0x10042a200
    ScriptedPointLight* ScriptedPointLight::operator=(ScriptedPointLight&& scriptedPointLight) {
        unsigned int uVar1 = scriptedPointLight.field_64;
        uint8_t uVar2 = scriptedPointLight.field_68;
        field_61 = scriptedPointLight.field_61;
        field_64 = uVar1;
        field_68 = uVar2;
        unsigned int uVar13 = scriptedPointLight.m_radius;
        unsigned int uVar14 = scriptedPointLight.field_4;
        unsigned int uVar15 = scriptedPointLight.m_rGB;
        unsigned int uVar16 = scriptedPointLight.field_12;
        unsigned int uVar9 = scriptedPointLight.field_16;
        unsigned int uVar10 = scriptedPointLight.field_20;
        unsigned int uVar11 = scriptedPointLight.field_24;
        unsigned int uVar12 = scriptedPointLight.field_28;
        float fVar5 = scriptedPointLight.field_32;
        float fVar6 = scriptedPointLight.field_36;
        float fVar7 = scriptedPointLight.field_40;
        unsigned int uVar8 = scriptedPointLight.field_44;
        uVar1 = scriptedPointLight.field_52;
        int iVar3 = scriptedPointLight.m_scriptID;
        uVar2 = scriptedPointLight.field_60;
        uint32_t uVar4 = scriptedPointLight.field_61;
        field_48 = scriptedPointLight.field_48;
        field_52 = uVar1;
        m_scriptID = iVar3;
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
        m_radius = uVar13;
        field_4 = uVar14;
        m_rGB = uVar15;
        field_12 = uVar16;
        field_72 = scriptedPointLight.field_72;
        return this;
    }

    // 0x1004319e0
    PointLightPositionJitterData::PointLightPositionJitterData() : field_0(0), field_8(0) {
        uint8_t* puVar1 = PTR_ZERO_100ee66e8;
        field_24 = *(uint32_t*)(PTR_ZERO_100ee66e8 + 8);
        field_16 = *(uint64_t*)puVar1;
        field_28 = *(uint64_t*)puVar1;
        field_36 = *(uint32_t*)(puVar1 + 8);
        field_48 = *(uint32_t*)(puVar1 + 8);
        field_40 = *(uint64_t*)puVar1;
        field_52 = 1065353216;
    }

    // 0x100431ac0
    PointLightPositionJitterData*
    PointLightPositionJitterData::operator=(PointLightPositionJitterData&& pointLightPositionJitterData) {
        uint64_t uVar1 = pointLightPositionJitterData.field_8;
        field_0 = pointLightPositionJitterData.field_0;
        field_8 = uVar1;
        field_16.SetXYZ(pointLightPositionJitterData.field_16);
        field_28.SetXYZ(pointLightPositionJitterData.field_28);
        field_40.SetXYZ(pointLightPositionJitterData.field_40);
        field_52 = pointLightPositionJitterData.field_52;
        return this;
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001e41c0
    MixerWorker* OSRenderCore_AnyThread::InitAudio()::$_0::operator()() const {
        MixerWorker* this_00 = (MixerWorker*)operator new(456);
        new (this_00) MixerWorker();
        return this_00;
    }

} // namespace jag::oldscape
