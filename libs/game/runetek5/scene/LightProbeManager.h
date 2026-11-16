// libs/game/runetek5/scene/LightProbeManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LightProbeManager {
    public:
        class MapSquareUpdateInfo;
        byte IsAnyMapSquareUpdating() const;
        void GetNumMapSquaresUpdating() const;
        LightProbeManager(graphics::RT7Core*, graphics::EffectManager&, World*);
        ~LightProbeManager();
        void AddMapSquareToUpdateList(MapSquare::MapSquarePos const&);
        void AddAllExistingMapSquaresToUpdateList();
        void RenderPendingEnvMaps(unsigned int, unsigned int, int, bool);
        GetProbeTextureData(graphics::LightProbe&,
                            eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>&) const;
        void UpdatePendingLightProbeSH(unsigned int);
        void AddSHCoefToCache(MapSquareEnvIrradianceInfo const&);
        void UpdatePendingLightProbeSHAsync();
        void Clear();
        static /* 4 bytes */ m_skyBoxOverbrightDefaultValue; // = 1048576000
        static /* 8 bytes */ m_skyBoxOverbrightDefaultOverrideAll;

        // data members, from how the methods use this: 1008 bytes
        RT7Core* field_0;       // offset 0
        EffectManager* field_8; // offset 8
        World* field_16;        // offset 16
        char _unknown_24[944];
        char field_968; // offset 968
        char _unknown_969[39];
    };

    class LightProbeManager::MapSquareUpdateInfo {
    public:
        MapSquareUpdateInfo(MapSquare::MapSquarePos, render::CubeFace);

        // data members, from how the methods use this: 12 bytes
        undefined2 field_0; // offset 0
        char _unknown_2[2];
        undefined4 field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x100443190, 32 bytes, inline, placed by class name and debug map
    // LightProbeManager::IsAnyMapSquareUpdating() const
    byte LightProbeManager::IsAnyMapSquareUpdating() {
        byte bVar1;

        bVar1 = (&field_928)->empty();
        return bVar1 ^ 1;
    }

    // 0x1004431b0, 32 bytes, inline, placed by class name and debug map
    // LightProbeManager::GetNumMapSquaresUpdating() const
    void LightProbeManager::GetNumMapSquaresUpdating() {
        (&field_928)->size();
    }

    // 0x100480b60, 32 bytes, inline, placed by class name
    // LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos const&)::$_0::operator()(eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo> const&) const
    /* LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos
   const&)::$_0::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned long const,
   MapSquareEnvIrradianceInfo> const&) const */

    void LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos_const&)::$_0::operator()(pair* param_1) {
        MapSquareEnvInfo::operator==((MapSquareEnvInfo*)(param_1 + 24), *(MapSquareEnvInfo**)this);
    }

    // 0x1004820d0, 16 bytes, inline, placed by class name
    // LightProbeManager::GetProbeTextureData(graphics::LightProbe&, eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>&) const::$_3::operator()(unsigned char) const
    /* LightProbeManager::GetProbeTextureData(graphics::LightProbe&,
   eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>&)
   const::$_3::TEMPNAMEPLACEHOLDERVALUE(unsigned char) const */

    _func_GetProbeTextureData_LightProbe_ptr_fixed_vector_ptr* const ::$_3::operator()(uchar param_1) {
        undefined7 in_register_00000001;

        return (_func_GetProbeTextureData_LightProbe_ptr_fixed_vector_ptr*)CONCAT71(in_register_00000001,
                                                                                    (int)this == 0);
    }

    // 0x1004821d0, 32 bytes, inline, placed by class name
    // LightProbeManager::AddSHCoefToCache(MapSquareEnvIrradianceInfo const&)::$_4::operator()(eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo> const&) const
    /* LightProbeManager::AddSHCoefToCache(MapSquareEnvIrradianceInfo
   const&)::$_4::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned long const,
   MapSquareEnvIrradianceInfo> const&) const */

    void LightProbeManager::AddSHCoefToCache(MapSquareEnvIrradianceInfo_const&)::$_4::operator()(pair* param_1) {
        MapSquareEnvInfo::operator==((MapSquareEnvInfo*)(param_1 + 24), (MapSquareEnvInfo*)(*(long*)this + 8));
    }

    // 0x100485dc0, 704 bytes, inline, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSHAsync()::$_6::operator()(std::future<MapSquareEnvIrradianceInfo>&) const
    /* LightProbeManager::UpdatePendingLightProbeSHAsync()::$_6::TEMPNAMEPLACEHOLDERVALUE(std::future<MapSquareEnvIrradianceInfo>&)
   const */

    bool LightProbeManager::UpdatePendingLightProbeSHAsync()::$_6::operator()(future* param_1) {
        LightProbeManager* this_00;
        undefined1 uVar1;
        undefined1 uVar2;
        bool bVar3;
        int iVar4;
        undefined4 uVar5;
        shared_ptr* this_01;
        MapSquare* this_02;
        Location* pLVar6;
        unique_ptr* this_03;
        LightProbeRenderer* pLVar7;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_04;
        Terrain* this_05;
        LightProbe* pLVar8;
        undefined8 uVar9;
        undefined8 in_stack_fffffffffffffdf0;
        undefined4 uVar10;
        undefined4 local_1fc;
        LogStream local_1f8;
        LogStream local_168;
        undefined1 local_d8[32];
        ulong local_b8;
        IrradianceSHCoefConsts local_a8;
        long local_38;

        uVar10 = (undefined4)((ulong)in_stack_fffffffffffffdf0 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = *(LightProbeManager**)this;
        local_1fc = 0;
        std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_d8, (type*)&local_1fc);
        iVar4 = std::future<MapSquareEnvIrradianceInfo>::wait_for<long long, std::ratio<1l, 1000l>>(
            (future<MapSquareEnvIrradianceInfo>*)param_1, (duration*)local_d8);
        if (iVar4 == 0) {
            std::future<MapSquareEnvIrradianceInfo>::get();
            this_01 = (shared_ptr*)(this_00->field_16, (MapSquarePos*)(local_d8 + 8))->GetMapSquare();
            bVar3 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar3) {
                this_02 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                this_02->SetIrradianceSHConsts(&local_a8, 750);
                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                    pLVar6 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                    this_03 = (unique_ptr*)pLVar6->GetParentLocationType();
                    bVar3 = std::unique_ptr::operator_cast_to_bool(this_03);
                    if (bVar3) {
                        pLVar7 = (LightProbeRenderer*)this_00->field_0->GetLightProbeRenderer();
                        pLVar6 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                        this_04 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                      pLVar6->GetParentLocationType();
                        this_05 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    this_04);
                        pLVar8 = (LightProbe*)this_05->GetLightProbe();
                        pLVar7->RecycleRenderingResources(pLVar8);
                        uVar9 = logger::default_logger();
                        new (&local_168) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                        uVar2 = local_d8[9];
                        uVar1 = local_d8[8];
                        pLVar7 = (LightProbeRenderer*)this_00->field_0->GetLightProbeRenderer();
                        uVar5 = pLVar7->GetNumFreeLightProbeResources();
                        logger::Logger::Log(uVar9, 0, &local_168, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/LightProbeManager.cpp",
                                            603, "Recycle lightprobe A %u, %u (%u free)", uVar1, uVar2,
                                            CONCAT44(uVar10, uVar5));
                        local_168.~LogStream();
                    }
                }
            }
            if (local_d8[0] != (duration)0) {
                AddSHCoefToCache(this_00, (MapSquareEnvIrradianceInfo*)local_d8);
                uVar9 = logger::default_logger();
                new (&local_1f8) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                logger::Logger::Log(uVar9, 0, &local_1f8, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/LightProbeManager.cpp",
                                    611, "Calculated irradiance for %u, %u. Hash: %zu", local_d8[8], local_d8[9],
                                    local_b8);
                local_1f8.~LogStream();
            }
            (&this_00->field_928, (MapSquarePos*)(local_d8 + 8))->erase();
            local_d8->~MapSquareEnvIrradianceInfo();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar4 == 0;
    }

} // namespace jag::game
