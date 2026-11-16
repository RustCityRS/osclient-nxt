// libs/game/runetek5/scene/loaders/WaterLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "WaterLoader.h"

namespace jag::game {
    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    WaterLoader::GetWaterPatches() const;

    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    WaterLoader::GetDefaultWaterType() const;

    // 0x1003de6b0, 336 bytes, base-object constructor, placed by class name
    // WaterLoader::WaterLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&)
    void WaterLoader::WaterLoader(uint param_1, uint param_2, shared_ptr* param_3) {
        undefined1* this_00;
        bool* pbVar2;
        long lVar3;
        ulong uVar4;
        shared_ptr local_40;

        field_0 = param_1;
        field_4 = param_2;
        this_00 = field_8;
        new (this_00) shared_ptr<oldscape::dash3d::Decor>(param_3);
        field_24 = DataStatus::NOTLOADED;
        eastl::vector<bool, BucketAllocatorEASTL>::vector();
        eastl::vector<unsigned short, BucketAllocatorEASTL>::vector();
        new (&field_80, (_func_decltype_nullptr*)param_3)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_96, (_func_decltype_nullptr*)param_3) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_112, 0.0, 0.0, 1.0) math::ColourHSL();
        make_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>((jag*)&local_40);
        shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator=(
            (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)&field_80, &local_40);
        local_40.~shared_ptr();
        if (this_00->operator_cast_to_bool()) {
            pbVar2 = (bool*)(&field_32)->HeapBeginPtr();
            lVar3 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_00);
            uVar4 = ((lVar3 + 9800))->size();
            local_40._0_1_ = 0;
            (&field_32, pbVar2, uVar4, (bool*)&local_40)->insert();
        }
    }

    // 0x1003de910, 16 bytes, complete-object constructor, placed by class name
    // WaterLoader::WaterLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&): jumps straight to the base-object constructor

    // 0x1003de920, 32 bytes, placed by class name
    // WaterLoader::IsLoaded() const
    undefined8 WaterLoader::IsLoaded() {
        return CONCAT71((int7)((ulong)field_24 >> 8), field_24 == DataStatus::READY);
    }

    // 0x1003de940, 32 bytes, placed by class name
    // WaterLoader::HasWaterPatches() const
    byte WaterLoader::HasWaterPatches() {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;

        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator->(
                          (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)&field_80);
        return eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                   this_00) ^
               1;
    }

    // 0x1003de9a0, 368 bytes, placed by class name
    // WaterLoader::Load(Js5ResourceProvider*, ConfigProvider*)
    undefined* WaterLoader::Load(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        undefined1* puVar1;
        bool bVar2;
        bool bVar3;
        bool bVar4;
        int iVar5;
        CoordMapSquare* this_00;
        shared_ptr* psVar6;
        vector<graphics::WaterPatchConfig, eastl::allocator>* pvVar7;
        ulong uVar9;
        WaterPatchConfig* pWVar10;
        ushort* puVar11;
        WaterType* this_01;
        undefined** ppuVar12;
        ulong uVar13;

        puVar1 = field_96;
        bVar3 = puVar1->operator_cast_to_bool();
        if (bVar3) {
        LAB_1003dea01:
            if (field_24 != DataStatus::READY) {
                LoadPatchData(this, param_1);
            }
            if (field_24 != DataStatus::READY) {
                return field_24;
            }
            puVar1 = &field_80;
            pvVar7 = (vector<graphics::WaterPatchConfig, eastl::allocator>*)
                shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                    (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)puVar1);
            if (eastl::vector<graphics::WaterPatchConfig, eastl::allocator>::size(pvVar7) == 0) {
                bVar3 = true;
            } else {
                uVar13 = 0;
                bVar2 = true;
                do {
                    pvVar7 = (vector<graphics::WaterPatchConfig, eastl::allocator>*)
                        shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                            (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)puVar1);
                    pWVar10 =
                        (WaterPatchConfig*)eastl::vector<graphics::WaterPatchConfig, eastl::allocator>::operator[](
                            pvVar7, uVar13);
                    puVar11 = (ushort*)eastl::vector<unsigned short, BucketAllocatorEASTL>::operator[](
                        (vector<unsigned short, BucketAllocatorEASTL>*)&field_56, uVar13);
                    psVar6 = ConfigProvider::GetConfig<WaterType>(param_2, (uint)*puVar11, (DataStatus**)0);
                    bVar4 = shared_ptr::operator_cast_to_bool(psVar6);
                    bVar3 = false;
                    if (bVar4) {
                        this_01 = (WaterType*)shared_ptr<WaterType>::operator->((shared_ptr<WaterType>*)psVar6);
                        this_01->ApplyToWaterPatchConfig(pWVar10);
                        bVar3 = bVar2;
                    }
                    uVar13 = uVar13 + 1;
                    pvVar7 = (vector<graphics::WaterPatchConfig, eastl::allocator>*)
                        shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                            (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)puVar1);
                    uVar9 = eastl::vector<graphics::WaterPatchConfig, eastl::allocator>::size(pvVar7);
                    bVar2 = bVar3;
                } while (uVar13 < uVar9);
            }
            ppuVar12 = &DataStatus::READY;
            if (bVar3)
                goto LAB_1003deafb;
        } else {
            this_00 = (CoordMapSquare*)param_2->GetMapDefaults();
            iVar5 = this_00->GetZ();
            psVar6 = ConfigProvider::GetConfig<WaterType>(param_2, iVar5, (DataStatus**)0);
            shared_ptr<WaterType>::operator=((shared_ptr<WaterType>*)puVar1, psVar6);
            bVar3 = puVar1->operator_cast_to_bool();
            if (bVar3)
                goto LAB_1003dea01;
        }
        ppuVar12 = &DataStatus::NOTLOADED;
    LAB_1003deafb:
        return *ppuVar12;
    }

    // 0x1003deb10, 1264 bytes, placed by class name
    // WaterLoader::LoadPatchData(Js5ResourceProvider*)
    undefined8 WaterLoader::LoadPatchData(Js5ResourceProvider* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* puVar1;
        bool bVar2;
        undefined1 uVar3;
        char cVar4;
        int iVar5;
        long lVar6;
        undefined1* puVar7;
        char* pcVar8;
        vector<graphics::WaterPatchConfig, eastl::allocator>* pvVar9;
        ulong uVar10;
        vector* pvVar11;
        int* piVar12;
        undefined1* puVar13;
        ulong uVar14;
        fixed_vector* this_03;
        fixed_vector* this_04;
        ulong uVar15;
        ulong uVar16;
        fixed_vector* this_05;
        ulong uVar17;
        ulong uVar18;
        long lVar19;
        float* pfVar20;
        undefined** ppuVar21;
        int iVar22;
        int iVar23;
        ulong uVar24;
        ulong uVar25;
        int iVar26;
        Vector3T<float>* this_06;
        float fVar27;
        int in_stack_ffffffffffffff08;
        int local_58;
        int local_54;
        int local_50;
        int local_4c;
        undefined8 local_48;
        WaterLoader* local_40;
        uint local_38;
        int local_34;

        this_00 = &field_80;
        shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator->(
            (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)this_00);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_01 = field_8;
        bVar2 = this_01->operator_cast_to_bool();
        local_40 = this;
        if (bVar2) {
            lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
            lVar6 = ((lVar6 + 9800))->size();
            if (lVar6 == 0) {
                local_38 = 1;
            } else {
                this_02 = &local_40->field_32;
                puVar1 = &local_40->field_56;
                puVar7 = local_40->field_112;
                local_38 = (uint)CONCAT71((int7)((ulong)puVar7 >> 8), 1);
                uVar24 = 0;
                do {
                    pcVar8 = (char*)eastl::vector<bool, BucketAllocatorEASTL>::operator[](
                        (vector<bool, BucketAllocatorEASTL>*)this_02, uVar24);
                    if (*pcVar8 == '\0') {
                        pvVar9 =
                            (vector<graphics::WaterPatchConfig, eastl::allocator>*)
                                shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator->(
                                    (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)this_00);
                        uVar10 = eastl::vector<graphics::WaterPatchConfig, eastl::allocator>::size(pvVar9);
                        pvVar11 =
                            (vector*)shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                                (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)this_00);
                        lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
                        piVar12 =
                            (int*)eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                                (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar6 + 9800),
                                uVar24);
                        iVar5 = *piVar12;
                        lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
                        lVar6 = eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                            (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar6 + 9800), uVar24);
                        uVar3 = LoadMapSquare(pvVar11, (vector*)puVar1, param_1, iVar5, *(int*)(lVar6 + 4),
                                              (Vector3T*)puVar7);
                        puVar13 = (undefined1*)eastl::vector<bool, BucketAllocatorEASTL>::operator[](
                            (vector<bool, BucketAllocatorEASTL>*)this_02, uVar24);
                        *puVar13 = uVar3;
                        pcVar8 = (char*)eastl::vector<bool, BucketAllocatorEASTL>::operator[](
                            (vector<bool, BucketAllocatorEASTL>*)this_02, uVar24);
                        if (*pcVar8 == '\0') {
                            local_38 = 0;
                        } else {
                            pvVar9 =
                                (vector<graphics::WaterPatchConfig, eastl::allocator>*)
                                    shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator->(
                                        (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)
                                            this_00);
                            uVar14 = eastl::vector<graphics::WaterPatchConfig, eastl::allocator>::size(pvVar9);
                            this_03 = (fixed_vector*)shared_ptr<ClientCompositeData>::operator->(
                                (shared_ptr<ClientCompositeData>*)this_01);
                            local_34 = 0;
                            do {
                                bVar2 = ArrayValidPosition<
                                    eastl::fixed_vector<
                                        eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        4ul, true, eastl::allocator>,
                                    int>(this_03, &local_34);
                                if (bVar2) {
                                    this_04 = (fixed_vector*)eastl::vector<
                                        eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](
                                        (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true,
                                                                                        eastl::allocator>,
                                                                    10ul, true, eastl::allocator>,
                                                eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>*)this_03,
                                        (long)local_34);
                                    uVar15 = 0;
                                    do {
                                        uVar16 = uVar15 + 1;
                                        local_58 = (int)uVar16;
                                        bVar2 = ArrayValidPosition<
                                            eastl::fixed_vector<
                                                eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                10ul, true, eastl::allocator>,
                                            int>(this_04, &local_58);
                                        if (bVar2) {
                                            this_05 = (fixed_vector*)eastl::vector<
                                                eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::
                                            operator[](
                                                (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true,
                                                                            eastl::allocator>,
                                                        eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)this_04,
                                                uVar16);
                                            uVar17 = 0;
                                            do {
                                                uVar18 = uVar17 + 1;
                                                local_54 = (int)uVar18;
                                                bVar2 =
                                                    ArrayValidPosition<eastl::fixed_vector<ClientCompositeZone, 10ul,
                                                                                           true, eastl::allocator>,
                                                                       int>(this_05, &local_54);
                                                if ((bVar2) &&
                                                    (lVar6 = eastl::vector<
                                                         ClientCompositeZone,
                                                         eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true,
                                                                                       eastl::allocator>>::
                                                     operator[](
                                                         (vector<ClientCompositeZone,
                                                                 eastl::fixed_vector_allocator<
                                                                     20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*)
                                                             this_05,
                                                         uVar18),
                                                     uVar10 < uVar14)) {
                                                    iVar22 = (*(uint*)(lVar6 + 4) & 7) * 8;
                                                    local_50 = iVar22 + 7;
                                                    iVar5 = (*(uint*)(lVar6 + 8) & 7) * 8;
                                                    local_4c = iVar5 + 7;
                                                    uVar25 = uVar10;
                                                    do {
                                                        pvVar9 = (vector<graphics::WaterPatchConfig, eastl::allocator>*)
                                                            shared_ptr<eastl::vector<graphics::WaterPatchConfig,
                                                                                     eastl::allocator>>::
                                                            operator*(
                                                                (shared_ptr<eastl::vector<graphics::WaterPatchConfig,
                                                                                          eastl::allocator>>*)this_00);
                                                        lVar19 =
                                                            eastl::vector<graphics::WaterPatchConfig,
                                                                          eastl::allocator>::operator[](pvVar9, uVar25);
                                                        this_06 = (Vector3T<float>*)(lVar19 + 4);
                                                        pfVar20 = (float*)math::Vector3T<float>::operator[](this_06, 0);
                                                        fVar27 = (float)floor(*pfVar20 * 0.0078125);
                                                        iVar23 = (int)fVar27;
                                                        pfVar20 = (float*)math::Vector3T<float>::operator[](this_06, 2);
                                                        fVar27 = (float)floor(*pfVar20 * 0.0078125);
                                                        if ((((iVar22 <= iVar23) && (iVar23 <= local_50)) &&
                                                             (iVar26 = (int)fVar27, iVar5 <= iVar26)) &&
                                                            (iVar26 <= local_4c)) {
                                                            local_48 = ((ulong)(uint)(iVar23 % 8))
                                                                           ->RegionRotateLocationX(
                                                                               iVar26 % 8, (uint) * (byte*)(lVar6 + 12),
                                                                               1, 1, 0, in_stack_ffffffffffffff08);
                                                            iVar23 = ((ulong)(uint)(iVar23 % 8))
                                                                         ->RegionRotateLocationZ(
                                                                             iVar26 % 8, (uint) * (byte*)(lVar6 + 12),
                                                                             1, 1, 0, in_stack_ffffffffffffff08);
                                                            local_48 = CONCAT44(
                                                                local_48._4_4_,
                                                                (float)(((int)local_48 + (int)uVar15 * 8) * 128) +
                                                                    64.0);
                                                            pfVar20 =
                                                                (float*)math::Vector3T<float>::operator[](this_06, 1);
                                                            this_06->Set((float)local_48, *pfVar20,
                                                                         (float)((iVar23 + (int)uVar17 * 8) * 128) +
                                                                             64.0);
                                                        }
                                                        uVar25 = uVar25 + 1;
                                                    } while (uVar14 != uVar25);
                                                }
                                                uVar17 = uVar18;
                                            } while (uVar18 != 8);
                                        }
                                        uVar15 = uVar16;
                                    } while (uVar16 != 8);
                                }
                                iVar5 = local_34 + 1;
                                bVar2 = local_34 < 3;
                                local_34 = iVar5;
                            } while (bVar2);
                        }
                    }
                    uVar24 = uVar24 + 1;
                    lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
                    uVar10 = ((lVar6 + 9800))->size();
                } while (uVar24 < uVar10);
            }
            if ((local_38 & 1) == 0) {
                ppuVar21 = &DataStatus::NOTLOADED;
            } else {
                ppuVar21 = &DataStatus::READY;
            }
        } else {
            pvVar11 = (vector*)shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)this_00);
            cVar4 = LoadMapSquare(pvVar11, (vector*)&field_56, param_1, field_0, field_4, (Vector3T*)field_112);
            if (cVar4 == '\0')
                goto LAB_1003defcf;
            ppuVar21 = &DataStatus::READY;
        }
        local_40->field_24 = *ppuVar21;
    LAB_1003defcf:
        return CONCAT71((int7)((ulong)local_40->field_24 >> 8), local_40->field_24 == DataStatus::READY);
    }

    // 0x1003df0f0, 144 bytes, placed by class name
    // WaterLoader::SetDefaultWaterPatch(ConfigProvider const&)
    ulong WaterLoader::SetDefaultWaterPatch(ConfigProvider* param_1) {
        bool bVar1;
        int iVar2;
        CoordMapSquare* this_00;
        shared_ptr* this_01;
        undefined7 extraout_var;
        vector<graphics::WaterPatchConfig, eastl::allocator>* this_02;
        WaterType* this_03;
        WaterPatchConfig local_220;

        this_00 = (CoordMapSquare*)param_1->GetMapDefaults();
        iVar2 = this_00->GetZ();
        this_01 = ConfigProvider::GetConfig<WaterType>(param_1, iVar2, (DataStatus**)0);
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar1) {
            this_02 = (vector<graphics::WaterPatchConfig, eastl::allocator>*)
                          shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator->(
                              (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)&field_80);
            this_03 = (WaterType*)shared_ptr<WaterType>::operator*((shared_ptr<WaterType>*)this_01);
            WaterType::operator_cast_to_WaterPatchConfig(&local_220, this_03);
            eastl::vector<graphics::WaterPatchConfig, eastl::allocator>::push_back(this_02, &local_220);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x1003df1e0, 976 bytes, placed by class name
    // WaterLoader::LoadMapSquare(eastl::vector<graphics::WaterPatchConfig, eastl::allocator>&, eastl::vector<unsigned short, BucketAllocatorEASTL>&, Js5ResourceProvider*, int, int, math::Vector3T<float> const&)
    undefined4 WaterLoader::LoadMapSquare(vector* param_1, vector* param_2, Js5ResourceProvider* param_3, int param_4,
                                          int param_5, Vector3T* param_6) {
        QuaternionT<float>* this;
        vector* pvVar1;
        uint* puVar2;
        char cVar3;
        char cVar4;
        undefined1 uVar5;
        char cVar6;
        short sVar7;
        ushort uVar8;
        undefined* puVar9;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        long lVar10;
        ulong uVar11;
        float fVar12;
        undefined1 auVar14[16];
        QuaternionT<float> local_d8[16];
        ColourHSL local_c8;
        undefined1 local_b8[40];
        undefined8 local_78;
        undefined8 local_68;
        undefined4 local_60;
        undefined4 local_44;
        uint* local_40;
        ushort local_34;
        byte local_31;

        new ((local_b8 + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        auVar14 = param_3->GetFile((shared_ptr*)(local_b8 + 40), Js5Archive::JS5_MAPS, param_4 | param_5 << 7, 8,
                                   (Priority*)Priority::HIGH, true, false, false);
        puVar9 = auVar14._0_8_;
        local_44 = (undefined4)CONCAT71(auVar14._9_7_, 1);
        local_78 = CONCAT44(local_78._4_4_, (float)local_78);
        if (puVar9 != DataStatus::MISSING) {
            if (puVar9 == DataStatus::NOTLOADED) {
                local_44 = 0;
                local_78 = CONCAT44(local_78._4_4_, (float)local_78);
            } else {
                if (puVar9 != DataStatus::READY) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("waterDataStatus == DataStatus::READY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/loaders/WaterLoader.cpp",
                              223, (char*)0);
                }
                this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                    shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)(local_b8 + 40));
                local_31 = this_00->g1();
                pvVar1 = param_1;
                lVar10 = param_1->size();
                uVar11 = (ulong)local_31;
                pvVar1->reserve(lVar10 + uVar11);
                pvVar1 = param_2;
                lVar10 = param_2->size();
                pvVar1->reserve(uVar11 + lVar10);
                if (local_31 != 0) {
                    do {
                        pvVar1 = param_1;
                        param_1->push_back();
                        local_40 = (uint*)pvVar1->back();
                        cVar3 = this_00->g1s();
                        cVar4 = this_00->g1s();
                        uVar5 = this_00->g1s();
                        local_78._0_4_ = (float)CONCAT31(local_78._1_3_, uVar5);
                        cVar6 = this_00->g1s();
                        sVar7 = this_00->g2s();
                        puVar2 = local_40;
                        ((local_40 + 1))
                            ->Set((float)(int)cVar3 * 128.0 + 64.0, (float)(int)sVar7,
                                  (float)(int)cVar4 * 128.0 + 64.0);
                        puVar2[4] = (int)(char)local_78 << 7;
                        puVar2[5] = (int)cVar6 << 7;
                        new (local_b8) math::Vector3T<float>(this_00, false);
                        fVar12 = (float)this_00->gFloat();
                        this = (QuaternionT<float>*)(local_40 + 6);
                        FromAxisAngle(local_b8, fVar12 * 6.2831855);
                        Normalise();
                        uVar8 = this_00->g2();
                        puVar2 = local_40;
                        local_40[117] = (uint)uVar8;
                        cVar3 = this_00->g1s();
                        puVar2[10] = (uint)((float)(int)cVar3 * 0.02);
                        cVar3 = this_00->g1s();
                        puVar2[11] = (uint)((float)(int)cVar3 * 0.02);
                        local_34 = this_00->g2();
                        param_2->push_back(&local_34);
                        *local_40 = (uint)local_34;
                        local_60 = *(undefined4*)(param_6 + 8);
                        local_68 = *(undefined8*)param_6;
                        new (&local_c8) math::ColourHSL((float)local_40[10], 0.0, (float)local_40[11]);
                        local_c8.Normalize();
                        fVar12 = math::Vector3Dot<float>((Vector3T*)&local_68, (Vector3T*)&local_c8);
                        local_78 = acos(fVar12);
                        local_b8._0_8_ = math::Vector3Cross<float>((Vector3T*)&local_68, (Vector3T*)&local_c8);
                        local_b8._8_4_ = 0.0;
                        local_68.SetXYZ(local_b8);
                        local_68.Normalize();
                        math::QuaternionT<float>::QuaternionT(local_d8);
                        local_d8->FromAxisAngle((Vector3T*)&local_68, -(float)local_78);
                        math::Matrix33RotationQuaternion<float>((math*)local_b8, (QuaternionT*)local_d8);
                        math::Matrix33T<float>::operator=((Matrix33T<float>*)(local_40 + 118), (Matrix33T*)local_b8);
                        local_31 = local_31 - 1;
                    } while (local_31 != 0);
                    local_31 = 0;
                }
            }
        }
        ((local_b8 + 40))->~shared_ptr();
        return local_44;
    }

} // namespace jag::game
