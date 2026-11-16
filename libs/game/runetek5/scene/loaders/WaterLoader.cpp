// libs/game/runetek5/scene/loaders/WaterLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "WaterLoader.h"

namespace jag::game {
    // 0x100102fc0: WaterLoader::GetWaterPatches() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1001cd990: WaterLoader::GetDefaultWaterType() const has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1003de6b0
    WaterLoader::WaterLoader(unsigned int arg1, unsigned int arg2,
                             const shared_ptr<ClientCompositeData>& clientCompositeData)
        : field_0(arg1), field_4(arg2) {
        bool* arg1_00;
        long lVar2;
        unsigned long arg2_00;
        ReturnValue local_40;

        uint8_t* this_00 = field_8;
        new (this_00) shared_ptr(clientCompositeData);
        field_24 = DataStatus::NOTLOADED;
        uint8_t* this_01 = &field_32;
        new (this_01) eastl::vector<bool, BucketAllocatorEASTL>();
        new (&field_56) eastl::vector<unsigned short, BucketAllocatorEASTL>();
        new (&field_80) shared_ptr();
        new (m_defaultWaterType) shared_ptr();
        new (field_112) math::ColourHSL(0.0, 0.0, 1.0);
        make_shared<eastl::vector<graphics::WaterPatchConfig>>(&local_40);
        field_80 = local_40;
        if (this_00->operator_cast_to_bool() != '\0') {
            arg1_00 = (bool*)this_01->HeapBeginPtr();
            lVar2 = (*this_00).operator->();
            arg2_00 = ((lVar2 + 9800))->size();
            local_40[0]._0_1_ = 0;
            this_01->insert(arg1_00, arg2_00, local_40);
        }
    }

    // 0x1003de920
    bool WaterLoader::IsLoaded() const {
        return field_24 == DataStatus::READY;
    }

    // 0x1003de940
    bool WaterLoader::HasWaterPatches() const {
        return ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)field_80.operator->())->empty() ^
               1;
    }

    // 0x1003de9a0
    uint8_t* WaterLoader::Load(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider) {
        bool bVar2;
        int arg1;
        shared_ptr<WaterType>* waterType;
        vector<graphics::WaterPatchConfig>* pvVar4;
        unsigned long uVar6;
        WaterPatchConfig* waterPatchConfig;
        unsigned short* puVar7;
        shared_ptr* this_01;
        uint8_t** ppuVar8;
        bool bVar9;
        unsigned long arg1_00;

        uint8_t* puVar1 = m_defaultWaterType;
        bool cVar3 = puVar1->operator_cast_to_bool();
        if (!cVar3) {
            arg1 = configProvider->GetMapDefaults()->GetZ();
            waterType = configProvider->GetConfig<WaterType>(arg1, nullptr);
            *puVar1 = *waterType;
            cVar3 = puVar1->operator_cast_to_bool();
            if (cVar3)
                goto LAB_1003dea01;
        } else {
        LAB_1003dea01:
            if (field_24 != DataStatus::READY) {
                LoadPatchData(js5ResourceProvider);
            }
            if (field_24 != DataStatus::READY) {
                return field_24;
            }
            puVar1 = &field_80;
            pvVar4 = (vector<graphics::WaterPatchConfig>*)**puVar1;
            if (pvVar4->size() == 0) {
                bVar9 = true;
            } else {
                arg1_00 = 0;
                bVar2 = true;
                do {
                    pvVar4 = (vector<graphics::WaterPatchConfig>*)**puVar1;
                    waterPatchConfig = (WaterPatchConfig*)(*pvVar4)[arg1_00];
                    puVar7 = &field_56[arg1_00];
                    this_01 = (shared_ptr*)configProvider->GetConfig<WaterType>((unsigned int)*puVar7, nullptr);
                    cVar3 = shared_ptr::operator_cast_to_bool(this_01);
                    bVar9 = false;
                    if (cVar3) {
                        ((WaterType*)(*this_01).operator->())->ApplyToWaterPatchConfig(*waterPatchConfig);
                        bVar9 = bVar2;
                    }
                    arg1_00 = arg1_00 + 1;
                    pvVar4 = (vector<graphics::WaterPatchConfig>*)**puVar1;
                    uVar6 = pvVar4->size();
                    bVar2 = bVar9;
                } while (arg1_00 < uVar6);
            }
            ppuVar8 = &DataStatus::READY;
            if (bVar9)
                goto LAB_1003deafb;
        }
        ppuVar8 = &DataStatus::NOTLOADED;
    LAB_1003deafb:
        return *ppuVar8;
    }

    // 0x1003deb10
    uint64_t WaterLoader::LoadPatchData(Js5ResourceProvider* js5ResourceProvider) {
        uint8_t* this_02;
        uint8_t* arg2;
        uint8_t uVar2;
        bool bVar3;
        int iVar4;
        long lVar5;
        uint8_t* vector3;
        char* pcVar6;
        vector<graphics::WaterPatchConfig>* pvVar7;
        unsigned long uVar8;
        vector<graphics::WaterPatchConfig>* pvVar9;
        int* piVar10;
        uint8_t* puVar11;
        unsigned long uVar12;
        fixed_vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, _10ul>, _10ul>, _4ul>*
            clientCompositeZonesss;
        fixed_vector<eastl::fixed_vector<ClientCompositeZone, _10ul>, _10ul>* clientCompositeZoness;
        unsigned long uVar13;
        unsigned long arg1;
        fixed_vector<ClientCompositeZone, _10ul>* clientCompositeZones;
        unsigned long uVar14;
        unsigned long arg1_00;
        long lVar15;
        float* pfVar16;
        uint8_t** ppuVar17;
        int iVar18;
        int iVar19;
        unsigned long arg1_01;
        unsigned long arg1_02;
        int iVar20;
        Vector3T<float>* this_04;
        float fVar21;
        int local_58;
        int local_54;
        int local_50;
        int local_4c;
        uint64_t local_48;
        unsigned int local_38;
        int local_34;

        uint8_t* this_00 = &field_80;
        ((vector<eastl::pair<int, int>>*)(*this_00).operator->())->clear();
        uint8_t* this_01 = field_8;
        bool cVar1 = this_01->operator_cast_to_bool();
        WaterLoader* local_40 = this;
        if (!cVar1) {
            pvVar9 = (vector<graphics::WaterPatchConfig>*)**this_00;
            cVar1 = LoadMapSquare(pvVar9, (vector<unsigned short, BucketAllocatorEASTL>*)&field_56, js5ResourceProvider,
                                  field_0, field_4, (Vector3T<float>*)field_112);
            if (!cVar1)
                goto LAB_1003defcf;
            ppuVar17 = &DataStatus::READY;
        } else {
            lVar5 = (*this_01).operator->();
            lVar5 = ((lVar5 + 9800))->size();
            if (lVar5 == 0) {
                local_38 = 1;
            } else {
                this_02 = &local_40->field_32;
                arg2 = &local_40->field_56;
                vector3 = local_40->field_112;
                local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)vector3 >> 8)) << 8) | (uint8_t)1);
                arg1_01 = 0;
                do {
                    pcVar6 = (char*)(*this_02)[arg1_01];
                    if (*pcVar6 == '\0') {
                        pvVar7 = (vector<graphics::WaterPatchConfig>*)(*this_00).operator->();
                        uVar8 = pvVar7->size();
                        pvVar9 = (vector<graphics::WaterPatchConfig>*)**this_00;
                        lVar5 = (*this_01).operator->();
                        piVar10 = (int*)(*((lVar5 + 9800)))[arg1_01];
                        iVar4 = *piVar10;
                        lVar5 = (*this_01).operator->();
                        lVar5 = (*((lVar5 + 9800)))[arg1_01];
                        uVar2 =
                            LoadMapSquare(pvVar9, (vector<unsigned short, BucketAllocatorEASTL>*)arg2,
                                          js5ResourceProvider, iVar4, *(int*)(lVar5 + 4), (Vector3T<float>*)vector3);
                        puVar11 = (uint8_t*)(*this_02)[arg1_01];
                        *puVar11 = uVar2;
                        pcVar6 = (char*)(*this_02)[arg1_01];
                        if (*pcVar6 == '\0') {
                            local_38 = 0;
                        } else {
                            pvVar7 = (vector<graphics::WaterPatchConfig>*)(*this_00).operator->();
                            uVar12 = pvVar7->size();
                            clientCompositeZonesss =
                                (fixed_vector<
                                    eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, _10ul>, _10ul>,
                                    _4ul>*)(*this_01)
                                    .operator->();
                            local_34 = 0;
                            do {
                                bVar3 = ArrayValidPosition<
                                    eastl::fixed_vector<
                                        eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>, 4ul>,
                                    int>(clientCompositeZonesss, &local_34);
                                if (bVar3) {
                                    clientCompositeZoness =
                                        (fixed_vector<eastl::fixed_vector<ClientCompositeZone, _10ul>,
                                                      _10ul>*)(*clientCompositeZonesss)[(long)local_34];
                                    uVar13 = 0;
                                    do {
                                        arg1 = uVar13 + 1;
                                        local_58 = (int)arg1;
                                        bVar3 = ArrayValidPosition<
                                            eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                            int>(clientCompositeZoness, &local_58);
                                        if (bVar3) {
                                            clientCompositeZones = (fixed_vector<ClientCompositeZone,
                                                                                 _10ul>*)(*clientCompositeZoness)[arg1];
                                            uVar14 = 0;
                                            do {
                                                arg1_00 = uVar14 + 1;
                                                local_54 = (int)arg1_00;
                                                bVar3 =
                                                    ArrayValidPosition<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                                                                       int>(clientCompositeZones, &local_54);
                                                if ((bVar3) &&
                                                    (lVar5 = (*clientCompositeZones)[arg1_00], uVar8 < uVar12)) {
                                                    iVar18 = (*(unsigned int*)(lVar5 + 4) & 7) * 8;
                                                    local_50 = iVar18 + 7;
                                                    iVar4 = (*(unsigned int*)(lVar5 + 8) & 7) * 8;
                                                    local_4c = iVar4 + 7;
                                                    arg1_02 = uVar8;
                                                    do {
                                                        pvVar7 = (vector<graphics::WaterPatchConfig>*)**this_00;
                                                        lVar15 = (*pvVar7)[arg1_02];
                                                        this_04 = (Vector3T<float>*)(lVar15 + 4);
                                                        pfVar16 = (float*)(*this_04)[0];
                                                        fVar21 = (float)::floor(*pfVar16 * 0.0078125f);
                                                        iVar19 = (int)fVar21;
                                                        pfVar16 = (float*)(*this_04)[2];
                                                        fVar21 = (float)::floor(*pfVar16 * 0.0078125f);
                                                        if ((((iVar18 <= iVar19) && (iVar19 <= local_50)) &&
                                                             (iVar20 = (int)fVar21, iVar4 <= iVar20)) &&
                                                            (iVar20 <= local_4c)) {
                                                            local_48 = RegionRotate::RegionRotateLocationX(
                                                                iVar19 % 8, iVar20 % 8,
                                                                (unsigned int)*(uint8_t*)(lVar5 + 12), 1, 1, 0);
                                                            iVar19 = RegionRotate::RegionRotateLocationZ(
                                                                iVar19 % 8, iVar20 % 8,
                                                                (unsigned int)*(uint8_t*)(lVar5 + 12), 1, 1, 0);
                                                            local_48 =
                                                                (((uint64_t)local_48._4_4_ << 32) |
                                                                 (uint32_t)((float)(((int)local_48 + (int)uVar13 * 8) *
                                                                                    128) +
                                                                            64.0));
                                                            pfVar16 = (float*)(*this_04)[1];
                                                            this_04->Set((float)local_48, *pfVar16,
                                                                         (float)((iVar19 + (int)uVar14 * 8) * 128) +
                                                                             64.0);
                                                        }
                                                        arg1_02 = arg1_02 + 1;
                                                    } while (uVar12 != arg1_02);
                                                }
                                                uVar14 = arg1_00;
                                            } while (arg1_00 != 8);
                                        }
                                        uVar13 = arg1;
                                    } while (arg1 != 8);
                                }
                                iVar4 = local_34 + 1;
                                bVar3 = local_34 < 3;
                                local_34 = iVar4;
                            } while (bVar3);
                        }
                    }
                    arg1_01 = arg1_01 + 1;
                    lVar5 = (*this_01).operator->();
                    uVar8 = ((lVar5 + 9800))->size();
                } while (arg1_01 < uVar8);
            }
            if ((local_38 & 1) == 0) {
                ppuVar17 = &DataStatus::NOTLOADED;
            } else {
                ppuVar17 = &DataStatus::READY;
            }
        }
        local_40->field_24 = *ppuVar17;
    LAB_1003defcf:
        return local_40->field_24 == DataStatus::READY;
    }

    // 0x1003df0f0
    uint32_t WaterLoader::SetDefaultWaterPatch(const ConfigProvider& configProvider) {
        vector<graphics::WaterPatchConfig>* this_02;
        uint8_t local_220[512];

        int arg1 = configProvider.GetMapDefaults()->GetZ();
        auto this_01 = configProvider.GetConfig<WaterType>(arg1, nullptr);
        uint32_t uVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if ((char)uVar1 != '\0') {
            this_02 = (vector<graphics::WaterPatchConfig>*)field_80.operator->();
            **this_01;
            local_220->operator_cast_to_WaterPatchConfig();
            this_02->push_back(*local_220);
        }
        return uVar1;
    }

    // 0x1003df1e0
    void WaterLoader::LoadMapSquare(eastl::vector<graphics::WaterPatchConfig>& waterPatchConfigs,
                                    eastl::vector<unsigned short, BucketAllocatorEASTL>& arg2,
                                    Js5ResourceProvider* js5ResourceProvider, int arg4, int arg5,
                                    const math::Vector3T<float>& vector3) {
        void result;
        ReturnValue result;
        vector<graphics::WaterPatchConfig>* pvVar1;
        unsigned int* puVar2;
        char cVar3;
        char cVar4;
        uint8_t uVar5;
        bool cVar6;
        short sVar7;
        unsigned short uVar8;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_00;
        long lVar10;
        unsigned long uVar11;
        float fVar12;
        uint8_t auVar14[16];
        QuaternionT<float> local_d8;
        ColourHSL local_c8;
        uint64_t local_b8;
        uint32_t local_b0;
        uint64_t local_78;
        ReturnValue local_68;
        uint32_t local_60;
        unsigned int* local_40;
        unsigned short local_34;
        uint8_t local_31;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_90;
        auVar14 = js5ResourceProvider->GetFile(local_90, *(Js5Archive::JS5_MAPS), arg4 | arg5 << 7, 8,
                                               (Priority*)Priority::HIGH, true, false, false);
        uint8_t* puVar9 = auVar14._0_8_;
        return local_44 = (uint32_t)(((uint64_t)auVar14._9_7_ << 8) | (uint8_t)1);
        local_78 = (((uint64_t)local_78._4_4_ << 32) | (uint32_t)((float)local_78));
        if (puVar9 != DataStatus::MISSING) {
            if (puVar9 == DataStatus::NOTLOADED) {
                local_44 = 0;
                local_78 = (((uint64_t)local_78._4_4_ << 32) | (uint32_t)((float)local_78));
            } else {
                if (puVar9 != DataStatus::READY) {
                    LogAssert("waterDataStatus == DataStatus::READY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/loaders/WaterLoader.cpp",
                              223, nullptr);
                }
                this_00 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)*local_90;
                local_31 = this_00->g1();
                pvVar1 = waterPatchConfigs;
                lVar10 = waterPatchConfigs.size();
                uVar11 = (unsigned long)local_31;
                pvVar1->reserve(lVar10 + uVar11);
                lVar10 = arg2.size();
                arg2.reserve(uVar11 + lVar10);
                if (local_31 != 0) {
                    do {
                        pvVar1 = waterPatchConfigs;
                        waterPatchConfigs.push_back();
                        local_40 = (unsigned int*)pvVar1->back();
                        cVar3 = this_00->g1s();
                        cVar4 = this_00->g1s();
                        uVar5 = this_00->g1s();
                        local_78._0_4_ = (float)(((uint32_t)local_78._1_3_ << 8) | (uint8_t)uVar5);
                        cVar6 = this_00->g1s();
                        sVar7 = this_00->g2s();
                        puVar2 = local_40;
                        ((local_40 + 1))
                            ->Set((float)(int)cVar3 * 128.0 + 64.0, (float)(int)sVar7,
                                  (float)(int)cVar4 * 128.0 + 64.0);
                        puVar2[4] = (int)(char)local_78 << 7;
                        puVar2[5] = (int)cVar6 << 7;
                        new (&local_b8) math::Vector3T(*this_00, false);
                        fVar12 = (float)this_00->gFloat();
                        &result = (ReturnValue*)(local_40 + 6);
                        result.FromAxisAngle(local_b8, fVar12 * 6.2831855f);
                        result = math::QuaternionT<float>::Normalise();
                        uVar8 = this_00->g2();
                        puVar2 = local_40;
                        local_40[117] = (unsigned int)uVar8;
                        cVar3 = this_00->g1s();
                        puVar2[10] = (unsigned int)((float)(int)cVar3 * 0.02);
                        cVar3 = this_00->g1s();
                        puVar2[11] = (unsigned int)((float)(int)cVar3 * 0.02);
                        local_34 = this_00->g2();
                        arg2.push_back(local_34);
                        *local_40 = (unsigned int)local_34;
                        local_60 = *(uint32_t*)((ReturnValue*)vector3 + 1);
                        local_68 = *(ReturnValue*)vector3;
                        local_c8 = math::ColourHSL((float)local_40[10], 0.0, (float)local_40[11]);
                        local_c8 = math::Vector3T<float>::Normalize();
                        fVar12 = math::Vector3Dot<float>(local_68, local_c8);
                        local_78 = acos(fVar12);
                        local_b8 = math::Vector3Cross<float>(local_68, local_c8);
                        local_b0 = 0;
                        local_68.SetXYZ(local_b8);
                        local_68 = math::Vector3T<float>::Normalize();
                        local_d8 = math::QuaternionT<float>();
                        local_d8.FromAxisAngle(local_68, -(float)local_78);
                        math::Matrix33RotationQuaternion<float>(local_b8);
                        (*((local_40 + 118))) = local_b8;
                        local_31 = local_31 - 1;
                    } while (local_31 != 0);
                    local_31 = 0;
                }
            }
        }
        return local_44;
    }

} // namespace jag::game
