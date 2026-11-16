// libs/game/runetek5/scene/entities/MapSquarePointLights.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MapSquarePointLights {
    public:
        char GetStaticPointLightsLoaded() const;
        Option<float>* GetLightSourcesLocal() const;
        uint8_t* GetLightSourcesRemote() const;
        MapSquarePointLights(graphics::RT7Core& rt7Core, unsigned int arg2, unsigned int arg3);
        ~MapSquarePointLights();
        char LoadStaticPointLights(MapSquare& mapSquare, Js5ResourceProvider* js5ResourceProvider,
                                   ConfigProvider* configProvider, const LODLevel& lodLevel,
                                   const LODSettings& lodSettings);
        NXTPixToolkit GetPointLightTexture();
        void ClearExistingLights(graphics::GraphNode* graphNode);
        MapSquarePointLights* ValidateStaticPointLights();
        void RequestRemoteLightSourceUpdate();
        void MainLogic(const MapSquare* mapSquare, ConfigProvider* configProvider, unsigned int arg3);
        void UpdateRemoteLightSources(const MapSquare* mapSquare, unsigned int arg2);
        void UpdateDynamicLightSources(const MapSquare* mapSquare, ConfigProvider* configProvider, unsigned int arg3);
        void RebuildPointLightGridTexture(unsigned int arg1);
        void MainDraw(unsigned int arg1);
        void UpdateEffect();
        void GetBoundaryLights(CompassPoint compassPoint) const;
        void SetLocalLightSources(const eastl::vector<shared_ptr<LightSource>>& lightSources);
        void SetLocalOrigin(math::Vector3T<float> vector3);
        uint8_t* GetLocalOrigin();
        uint8_t* GetLightSourcesDynamic() const;
        void RequestFullRebuild();
        void RequestDynamicLightSourceUpdate();

    private:
        unsigned int field_0;
        unsigned int field_4;
        char m_staticPointLightsLoaded;
        uint8_t _unknown_9[3];
        unsigned int field_12;
        uint8_t _unknown_16[320];
        uint8_t field_336;
        uint8_t _unknown_337[3];
        uint32_t field_340;
        uint8_t field_344;
        uint8_t _unknown_345[3];
        unsigned int field_348;
        uint8_t field_352;
        uint8_t _unknown_353[3];
        unsigned int field_356;
        bool field_360;
        uint8_t _unknown_361[3];
        unsigned int field_364;
        uint8_t _unknown_368[32];
        NXTPixToolkit m_pointLightTexture;
    };

    // 0x1001ef800
    MapSquarePointLights::MapSquarePointLights(graphics::RT7Core& rt7Core, unsigned int arg2, unsigned int arg3)
        : field_0(arg2), field_4(arg3) {
        *(uint16_t*)&m_staticPointLightsLoaded = 0;
        field_12 = 0;
        new (&field_16) math::Vector3T();
        new (&field_32) eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>();
        new (&field_56) eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>();
        new (&field_80) eastl::fixed_vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>, 8ul>(8);
        new (&field_312) eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>();
        field_336 = 0;
        field_340 = 0;
        field_344 = 0;
        field_348 = 0;
        field_352 = 0;
        field_356 = 0;
        field_360 = false;
        field_364 = 0;
        new (&field_368) eastl::vector<float>();
        new (m_pointLightTexture) graphics::PointLightGridTexture();
        field_368.reserve(256);
        m_pointLightTexture->Create(nullptr, rt7Core, field_0, field_4);
    }

    // 0x1001f02b0
    MapSquarePointLights::~MapSquarePointLights() {
        m_pointLightTexture->Destroy(field_0, field_4);
        m_pointLightTexture->~PointLightGridTexture();
        field_368.~vector();
        field_312.~vector();
        field_80.~fixed_vector();
        field_56.~vector();
        field_32.~vector();
    }

    // 0x100412e50
    NXTPixToolkit MapSquarePointLights::GetPointLightTexture() {
        return &m_linearLookatAcceleration;
    }

    // 0x100415c20
    void MapSquarePointLights::RequestRemoteLightSourceUpdate() {
        field_344 = 1;
    }

    // 0x100417530
    void MapSquarePointLights::GetBoundaryLights(CompassPoint compassPoint) const {
        field_80[(long)(int)compassPoint];
    }

    // 0x100423950
    unsigned long
    MapSquarePointLights::MainLogic(MapSquare const*, ConfigProvider*,
                                    unsigned int)::$_1::operator()(const shared_ptr<LightSource>& lightSource) const {
        int iVar2;
        long lVar3;
        LightSource* pLVar4;
        shared_ptr<StaticPointLight>* psVar5;
        uint64_t unaff_R14;
        uint64_t uVar7;
        unsigned long uVar6;

        bool cVar1 = operator_cast_to_bool();
        if (!cVar1) {
            uVar6 = 0;
        } else {
            lVar3 = (*this).operator->();
            cVar1 = ((lVar3 + 192))->HasRGBChanged();
            uVar7 = (uint64_t)((unsigned long)unaff_R14 >> 8);
            uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)1);
            if (!cVar1) {
                pLVar4 = (LightSource*)(*this).operator->();
                psVar5 = pLVar4->GetConfigurationSource();
                cVar1 = ((StaticPointLight*)(*psVar5).operator->())->GetShadowsEnabled();
                if (!cVar1) {
                    pLVar4 = (LightSource*)(*this).operator->();
                    psVar5 = pLVar4->GetConfigurationSource();
                    iVar2 = ((OSRenderCore_RenderThread_Common*)(*psVar5).operator->())->GetNumVerts();
                    uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)(-1 < iVar2));
                }
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x10045a3e0
    void MapSquarePointLights::RequestFullRebuild() {
        field_336 = 1;
    }

    // 0x10045ad50
    void MapSquarePointLights::RequestDynamicLightSourceUpdate() {
        field_352 = 1;
    }

} // namespace jag::game
