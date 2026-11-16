// libs/game/runetek5/scene/entities/MapSquarePointLights.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MapSquarePointLights {
    public:
        char GetStaticPointLightsLoaded() const;
        GetLightSourcesLocal() const;
        GetLightSourcesRemote() const;
        MapSquarePointLights(graphics::RT7Core&, unsigned int, unsigned int);
        ~MapSquarePointLights();
        char LoadStaticPointLights(MapSquare&, Js5ResourceProvider*, ConfigProvider*, LODLevel const&,
                                   LODSettings const&);
        NXTPixToolkit GetPointLightTexture();
        void ClearExistingLights(graphics::GraphNode*);
        ValidateStaticPointLights();
        void RequestRemoteLightSourceUpdate();
        void MainLogic(MapSquare const*, ConfigProvider*, unsigned int);
        void UpdateRemoteLightSources(MapSquare const*, unsigned int);
        void UpdateDynamicLightSources(MapSquare const*, ConfigProvider*, unsigned int);
        void RebuildPointLightGridTexture(unsigned int);
        void MainDraw(unsigned int);
        void UpdateEffect();
        void GetBoundaryLights(CompassPoint) const;
        void SetLocalLightSources(eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&);
        void SetLocalOrigin(math::Vector3T<float>);
        GetLocalOrigin();
        GetLightSourcesDynamic() const;
        void RequestFullRebuild();
        void RequestDynamicLightSourceUpdate();

        // data members, from how the methods use this: 6516240 bytes
        uint field_0;                   // offset 0
        uint field_4;                   // offset 4
        char m_staticPointLightsLoaded; // offset 8
        char _unknown_9[3];
        uint field_12; // offset 12
        char _unknown_16[16];
        shared_ptr field_32; // offset 32
        char _unknown_48[288];
        undefined1 field_336; // offset 336
        char _unknown_337[3];
        undefined4 field_340; // offset 340
        undefined1 field_344; // offset 344
        char _unknown_345[3];
        uint field_348;       // offset 348
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        uint field_356; // offset 356
        bool field_360; // offset 360
        char _unknown_361[3];
        uint field_364;       // offset 364
        undefined1 field_368; // offset 368
        char _unknown_369[31];
        NXTPixToolkit m_pointLightTexture; // offset 400
    };

    // 0x1001ef7e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MapSquarePointLights::MapSquarePointLights(graphics::RT7Core&, unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x1001ef800, 368 bytes, base-object constructor, inline, placed by class name and debug map
    // MapSquarePointLights::MapSquarePointLights(graphics::RT7Core&, unsigned int, unsigned int)
    void MapSquarePointLights::MapSquarePointLights(RT7Core* param_1, uint param_2, uint param_3) {
        field_0 = param_2;
        field_4 = param_3;
        *(undefined2*)&m_staticPointLightsLoaded = 0;
        field_12 = 0;
        new (&field_16) math::Vector3T<int>();
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::vector();
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::vector();
        new (&field_80, 8) eastl::fixed_vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>, 8ul, true,
                                               eastl::allocator>();
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::vector();
        field_336 = 0;
        field_340 = 0;
        field_344 = 0;
        field_348 = 0;
        field_352 = 0;
        field_356 = 0;
        field_360 = false;
        field_364 = 0;
        new (&field_368) eastl::vector<float, eastl::allocator>();
        new (m_pointLightTexture) graphics::PointLightGridTexture();
        (&field_368, 256)->reserve();
        (m_pointLightTexture, (PointLightGridTextureData*)0, param_1, field_0, field_4)->Create();
    }

    // 0x1001f02a0, 16 bytes, complete-object destructor, inline, placed by class name
    // MapSquarePointLights::~MapSquarePointLights(): jumps straight to the base-object destructor

    // 0x1001f02b0, 192 bytes, base-object destructor, inline, placed by class name
    // MapSquarePointLights::~MapSquarePointLights()
    void MapSquarePointLights::~MapSquarePointLights() {
        (m_pointLightTexture, field_0, field_4)->Destroy();
        m_pointLightTexture->~PointLightGridTexture();
        (&field_368)->~vector();
        (&field_312)->~vector();
        (&field_80)->~fixed_vector();
        (&field_56)->~vector();
        field_32->~vector();
    }

    // 0x100412e50, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapSquarePointLights::GetPointLightTexture()
    /* Camera::GetLinearLookatAcceleration() const */

    undefined8* Camera::GetLinearLookatAcceleration() {
        return &m_linearLookatAcceleration;
    }

    // 0x100415c20, 16 bytes, inline, placed by class name
    // MapSquarePointLights::RequestRemoteLightSourceUpdate()
    void MapSquarePointLights::RequestRemoteLightSourceUpdate() {
        field_344 = 1;
    }

    // 0x100417530, 32 bytes, inline, placed by class name
    // MapSquarePointLights::GetBoundaryLights(CompassPoint) const
    void MapSquarePointLights::GetBoundaryLights(int param_2) {
        eastl::vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                      eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                           eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)&field_80,
                   (long)param_2);
    }

    // 0x100423950, 144 bytes, inline, placed by class name
    // MapSquarePointLights::MainLogic(MapSquare const*, ConfigProvider*, unsigned int)::$_1::operator()(shared_ptr<LightSource> const&) const
    /* MapSquarePointLights::MainLogic(MapSquare const*,
   ConfigProvider*, unsigned
   int)::$_1::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<LightSource> const&) const */

    ulong MapSquarePointLights::MainLogic(MapSquare_const*, ConfigProvider*,
                                          unsigned int)::$_1::operator()(shared_ptr* param_1) {
        char cVar2;
        int iVar3;
        long lVar4;
        LightSource* pLVar5;
        shared_ptr<StaticPointLight>* psVar6;
        StaticPointLight* this_00;
        OSRenderCore_RenderThread_Common* this_01;
        undefined8 unaff_R14;
        undefined7 uVar8;
        ulong uVar7;

        if (operator_cast_to_bool()) {
            lVar4 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)this);
            cVar2 = ((lVar4 + 192))->HasRGBChanged();
            uVar8 = (undefined7)((ulong)unaff_R14 >> 8);
            uVar7 = CONCAT71(uVar8, 1);
            if (cVar2 == '\0') {
                pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)this);
                psVar6 = (shared_ptr<StaticPointLight>*)pLVar5->GetConfigurationSource();
                this_00 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(psVar6);
                cVar2 = this_00->GetShadowsEnabled();
                if (cVar2 == '\0') {
                    pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)this);
                    psVar6 = (shared_ptr<StaticPointLight>*)pLVar5->GetConfigurationSource();
                    this_01 = (OSRenderCore_RenderThread_Common*)shared_ptr<StaticPointLight>::operator->(psVar6);
                    iVar3 = this_01->GetNumVerts();
                    uVar7 = CONCAT71(uVar8, -1 < iVar3);
                }
            }
        } else {
            uVar7 = 0;
        }
        return uVar7 & 4294967295;
    }

    // 0x10045a3e0, 16 bytes, inline, placed by class name
    // MapSquarePointLights::RequestFullRebuild()
    void MapSquarePointLights::RequestFullRebuild() {
        field_336 = 1;
    }

    // 0x10045ad50, 16 bytes, inline, placed by class name
    // MapSquarePointLights::RequestDynamicLightSourceUpdate()
    void MapSquarePointLights::RequestDynamicLightSourceUpdate() {
        field_352 = 1;
    }

} // namespace jag::game
