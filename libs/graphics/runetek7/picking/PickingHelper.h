// libs/graphics/runetek7/picking/PickingHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PickingHelper {
    public:
        ~PickingHelper();
        PickingHelper(bool arg1);
        void ResetPointTest(const math::Matrix44T<float>& matrix44, const math::Rect<float>& rect,
                            const math::Point<float>& point, bool arg4, float arg5);
        void ResetLineTest(const math::Matrix44T<float>& matrix44, const math::Rect<float>& rect,
                           const math::Point<float>& point1, const math::Point<float>& point2, bool arg5);
        void ProcessBoneTransforms(const VertexAnimation& vertexAnimation);
        unsigned long PickTest(
            const math::Matrix44T<float>& matrix44,
            const eastl::vector<
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
                geometryBatchInstances,
            bool arg3, bool arg4, int arg5);
        math::Rect<float> const ProcessVertices<Array<GeometryBatchVertexPosLP>>(
            const Array<GeometryBatchVertexPosLP>& geometryBatchVertexPosLPs,
            const eastl::vector<GeometryBatchVertexSkin>& geometryBatchVertexSkins,
            const eastl::vector<unsigned short>& arg3, const eastl::vector<unsigned int>& arg4, int arg5, int arg6,
            bool arg7, bool arg8, float arg9);
        math::Rect<float> const ProcessVertices<eastl::vector<GeometryBatchVertexPos>>(
            const eastl::vector<GeometryBatchVertexPos>& geometryBatchVertexPoss,
            const eastl::vector<GeometryBatchVertexSkin>& geometryBatchVertexSkins,
            const eastl::vector<unsigned short>& arg3, const eastl::vector<unsigned int>& arg4, int arg5, int arg6,
            bool arg7, bool arg8, float arg9);
        static bool m_debugAlwaysUseAccuratePicking;

    private:
        long field_0;
        uint32_t* field_8;
        uint8_t _unknown_16[22];
        uint8_t field_38;
        uint8_t _unknown_39[21];
        unsigned int field_60;
        uint8_t _unknown_64[184];
        uint8_t field_248;
        bool field_249;
        uint8_t _unknown_250[2];
        float field_252;
        bool field_256;
        uint8_t _unknown_257[279];
    };

    // 0x1001d5920
    PickingHelper::~PickingHelper() {
        field_392.~vector();
        field_368.~Array();
        field_344.~Array();
        field_312.~vector();
        field_288.~Array();
        field_264.~Array();
    }

    // 0x1007dd590
    math::Rect<float> const PickingHelper::ProcessVertices<Array<GeometryBatchVertexPosLP>>(
        const Array<GeometryBatchVertexPosLP>& geometryBatchVertexPosLPs,
        const eastl::vector<GeometryBatchVertexSkin>& geometryBatchVertexSkins,
        const eastl::vector<unsigned short>& arg3, const eastl::vector<unsigned int>& arg4, int arg5, int arg6,
        bool arg7, bool arg8, float arg9) {
        Array<GeometryBatchVertexPosLP>* pAVar1;
        Array<GeometryBatchVertexPosLP>* pAVar2;
        Array<math::Matrix44T<float>>* this_00;
        Array<math::Vector3T<float>>* this_01;
        unsigned short uVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned long uVar8;
        Array<std::pair<float, float>>* this_03;
        unsigned int* puVar10;
        unsigned short* puVar11;
        GeometryBatchVertexPosLP* this_04;
        Vector4T<unsigned char>* this_05;
        Array<GeometryBatchVertexPosLP>* pAVar12;
        char* pcVar13;
        uint8_t* pbVar14;
        uint32_t in_register_0000008c;
        unsigned long uVar15;
        unsigned long arg1;
        float fVar16;
        char in_stack_00000020;
        uint64_t local_88;
        float fStack_80;
        uint32_t uStack_7c;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        uint64_t local_58;
        float local_50;
        float local_38;
        float local_34;

        vector<unsigned int>* this_02 =
            (vector<unsigned int>*)(((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        if (in_stack_00000020 == '\0') {
            uVar15 = (unsigned long)(_arg7 - arg6);
            uVar8 = ((geometryBatchVertexPosLPs + 288))->end();
            if (uVar8 < uVar15) {
                ((geometryBatchVertexPosLPs + 288))->set_max_size(uVar15, 1);
            }
            if (geometryBatchVertexPosLPs[256] != (Array<GeometryBatchVertexPosLP>)0) {
                uVar8 = ((geometryBatchVertexPosLPs + 368))->end();
                if (uVar8 < uVar15) {
                    ((geometryBatchVertexPosLPs + 368))->set_max_size(uVar15, 1);
                }
            }
        }
        float local_4c = 3.4028235e+38;
        float local_48 = -3.4028235e+38;
        float local_44 = 3.4028235e+38;
        float local_40 = -3.4028235e+38;
        new (&local_78) math::Vector4T();
        float* pfVar9 = (float*)((geometryBatchVertexPosLPs + 208))->second();
        float fVar17 = 0.5;
        uint32_t uVar18 = 0;
        float local_3c = 0.5;
        float fVar3 = *pfVar9;
        pfVar9 = (float*)((geometryBatchVertexPosLPs + 208))->qw();
        local_3c = local_3c * *pfVar9;
        int iVar7 = this_02->size();
        if (0 < iVar7) {
            pAVar2 = geometryBatchVertexPosLPs + 144;
            this_00 = (Array<math::Matrix44T<float>>*)(geometryBatchVertexPosLPs + 344);
            this_01 = (Array<math::Vector3T<float>>*)(geometryBatchVertexPosLPs + 368);
            pAVar1 = geometryBatchVertexPosLPs + 16;
            this_03 = (Array<std::pair<float, float>>*)(geometryBatchVertexPosLPs + 288);
            uVar8 = 0;
            local_34 = 0.0;
            local_38 = 0.0;
            do {
                puVar10 = (unsigned int*)(*this_02)[uVar8];
                uVar5 = *puVar10;
                uVar15 = (unsigned long)uVar5;
                puVar10 = (unsigned int*)(*this_02)[uVar8 | 1];
                uVar6 = *puVar10;
                if (uVar5 < uVar6) {
                    do {
                        puVar11 = &arg4[uVar15];
                        uVar4 = *puVar11;
                        arg1 = (unsigned long)uVar4;
                        this_04 = &geometryBatchVertexSkins[arg1];
                        this_05 = &arg3[arg1];
                        local_58 = this_04->GetPosition();
                        local_50 = fVar17;
                        local_88 = *arg9 * local_58;
                        fStack_80 = fVar17;
                        local_78.Set(local_88, 1.0);
                        if (in_stack_00000020 == '\0') {
                            local_38 = -999999.0;
                            local_34 = -999999.0;
                            if (geometryBatchVertexPosLPs[256] != (Array<GeometryBatchVertexPosLP>)0) {
                                pAVar12 = pAVar2;
                                if (arg8) {
                                    pAVar12 =
                                        (Array<GeometryBatchVertexPosLP>*)(*this_00)[(unsigned long)*(
                                                                                         uint8_t*)&this_04->field_6];
                                }
                                local_88 = local_78 * *pAVar12;
                                fStack_80 = fVar17;
                                uStack_7c = uVar18;
                                local_58 = local_88.GetXYZ();
                                local_50 = fVar17;
                                ((Vector4T<float>*)(*this_01)[arg1 - (long)arg6])->SetXYZ(local_58);
                                local_38 = -999999.0;
                                local_34 = -999999.0;
                            }
                        }
                        pAVar12 = pAVar1;
                        if (arg8) {
                            pcVar13 = (char*)(*this_05)[0];
                            if (*pcVar13 == '\0') {
                                pbVar14 = (uint8_t*)&this_04->field_6;
                            } else {
                                pbVar14 = (uint8_t*)(*this_05)[0];
                            }
                            pAVar12 = (Array<GeometryBatchVertexPosLP>*)(*(
                                (geometryBatchVertexPosLPs + 264)))[(unsigned long)*pbVar14];
                        }
                        local_78 *= pAVar12;
                        pfVar9 = (float*)local_78.qw();
                        if (0.0 < *pfVar9 || *pfVar9 == 0.0) {
                            fVar16 = 1.0 / local_6c;
                            local_78 = local_78 * fVar16;
                            uVar18 = 0;
                            fVar17 = local_74 * fVar16;
                            local_70 = fVar16 * local_70;
                            local_74 = fVar17;
                            pfVar9 = (float*)local_78.second();
                            if (-1.0 < *pfVar9 || *pfVar9 == -1.0) {
                                pfVar9 = (float*)local_78.SSOBeginPtr();
                                fVar17 = 1.0;
                                uVar18 = 0;
                                local_88 =
                                    (((uint64_t)local_88._4_4_ << 32) | (uint32_t)((*pfVar9 + 1.0) * fVar3 * 0.5));
                                pfVar9 = (float*)local_78.y();
                                fVar16 = (*pfVar9 + 1.0) * local_3c;
                                local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)fVar16);
                                if (in_stack_00000020 == '\0') {
                                    uVar18 = 0;
                                    local_34 = (float)local_88;
                                    fVar17 = (float)local_88;
                                    local_38 = fVar16;
                                }
                                pfVar9 = std::min<float>(local_4c, local_88);
                                local_4c = *pfVar9;
                                pfVar9 = std::max<float>(local_48, local_88);
                                local_48 = *pfVar9;
                                pfVar9 = std::min<float>(local_44, local_58);
                                local_44 = *pfVar9;
                                pfVar9 = std::max<float>(local_40, local_58);
                                local_40 = *pfVar9;
                            }
                        }
                        if (in_stack_00000020 == '\0') {
                            pfVar9 = (float*)(*this_03)[(long)(int)((unsigned int)uVar4 - arg6)];
                            *pfVar9 = local_34;
                            pfVar9[1] = local_38;
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar6 != uVar15);
                }
                uVar8 = uVar8 + 2;
                iVar7 = this_02->size();
            } while ((int)uVar8 < iVar7);
        }
        new (this) ImVec4(local_4c, local_44, local_48 - local_4c, local_40 - local_44);
        return this;
    }

    // 0x1007dda90
    math::Rect<float> const PickingHelper::ProcessVertices<eastl::vector<GeometryBatchVertexPos>>(
        const eastl::vector<GeometryBatchVertexPos>& geometryBatchVertexPoss,
        const eastl::vector<GeometryBatchVertexSkin>& geometryBatchVertexSkins,
        const eastl::vector<unsigned short>& arg3, const eastl::vector<unsigned int>& arg4, int arg5, int arg6,
        bool arg7, bool arg8, float arg9) {
        vector<GeometryBatchVertexPos>* pvVar1;
        vector<GeometryBatchVertexPos>* pvVar2;
        Array<math::Matrix44T<float>>* this_00;
        Array<math::Vector3T<float>>* this_01;
        unsigned short uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned long uVar7;
        Array<std::pair<float, float>>* this_03;
        unsigned int* puVar9;
        unsigned short* puVar10;
        Layout* pLVar11;
        Vector4T<unsigned char>* this_04;
        Vector3T<float>* vector3;
        vector<GeometryBatchVertexPos>* pvVar12;
        char* pcVar13;
        unsigned long arg1;
        uint32_t in_register_0000008c;
        unsigned long uVar14;
        float fVar15;
        char in_stack_00000020;
        uint64_t local_90;
        float local_88;
        uint64_t local_78;
        float fStack_70;
        uint32_t uStack_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_38;
        float local_34;

        vector<unsigned int>* this_02 =
            (vector<unsigned int>*)(((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        if (in_stack_00000020 == '\0') {
            uVar14 = (unsigned long)(_arg7 - arg6);
            uVar7 = ((geometryBatchVertexPoss + 288))->end();
            if (uVar7 < uVar14) {
                ((geometryBatchVertexPoss + 288))->set_max_size(uVar14, 1);
            }
            if (geometryBatchVertexPoss[256] != (vector<GeometryBatchVertexPos>)0) {
                uVar7 = ((geometryBatchVertexPoss + 368))->end();
                if (uVar7 < uVar14) {
                    ((geometryBatchVertexPoss + 368))->set_max_size(uVar14, 1);
                }
            }
        }
        float local_4c = 3.4028235e+38;
        float local_48 = -3.4028235e+38;
        float local_44 = 3.4028235e+38;
        float local_40 = -3.4028235e+38;
        new (&local_68) math::Vector4T();
        float* pfVar8 = (float*)((geometryBatchVertexPoss + 208))->second();
        float fVar16 = 0.5;
        uint32_t uVar17 = 0;
        float local_3c = 0.5;
        float local_7c = *pfVar8 * 0.5;
        pfVar8 = (float*)((geometryBatchVertexPoss + 208))->qw();
        local_3c = local_3c * *pfVar8;
        int iVar6 = this_02->size();
        if (0 < iVar6) {
            pvVar2 = geometryBatchVertexPoss + 144;
            this_00 = (Array<math::Matrix44T<float>>*)(geometryBatchVertexPoss + 344);
            this_01 = (Array<math::Vector3T<float>>*)(geometryBatchVertexPoss + 368);
            pvVar1 = geometryBatchVertexPoss + 16;
            this_03 = (Array<std::pair<float, float>>*)(geometryBatchVertexPoss + 288);
            uVar7 = 0;
            local_34 = 0.0;
            local_38 = 0.0;
            do {
                puVar9 = (unsigned int*)(*this_02)[uVar7];
                uVar4 = *puVar9;
                uVar14 = (unsigned long)uVar4;
                puVar9 = (unsigned int*)(*this_02)[uVar7 | 1];
                uVar5 = *puVar9;
                if (uVar4 < uVar5) {
                    do {
                        puVar10 = &arg4[uVar14];
                        uVar3 = *puVar10;
                        arg1 = (unsigned long)uVar3;
                        pLVar11 = &geometryBatchVertexSkins[arg1];
                        this_04 = &arg3[arg1];
                        vector3 = (Vector3T<float>*)pLVar11->SSOBeginPtr();
                        local_78 = *arg9 * *vector3;
                        fStack_70 = fVar16;
                        local_68.Set(local_78, 1.0);
                        if (in_stack_00000020 == '\0') {
                            local_38 = -999999.0;
                            local_34 = -999999.0;
                            if (geometryBatchVertexPoss[256] != (vector<GeometryBatchVertexPos>)0) {
                                pvVar12 = pvVar2;
                                if (arg8) {
                                    pvVar12 = (vector<GeometryBatchVertexPos>*)(*this_00)[(
                                        unsigned long)(uint8_t)pLVar11[12]];
                                }
                                local_78 = local_68 * *pvVar12;
                                fStack_70 = fVar16;
                                uStack_6c = uVar17;
                                local_90 = local_78.GetXYZ();
                                local_88 = fVar16;
                                ((Vector4T<float>*)(*this_01)[arg1 - (long)arg6])->SetXYZ(local_90);
                                local_38 = -999999.0;
                                local_34 = -999999.0;
                            }
                        }
                        pvVar12 = pvVar1;
                        if (arg8) {
                            pcVar13 = (char*)(*this_04)[0];
                            if (*pcVar13 == '\0') {
                                pLVar11 = pLVar11 + 12;
                            } else {
                                pLVar11 = (Layout*)(*this_04)[0];
                            }
                            pvVar12 = (vector<GeometryBatchVertexPos>*)(*(
                                (geometryBatchVertexPoss + 264)))[(unsigned long)(uint8_t)*pLVar11];
                        }
                        local_68 *= pvVar12;
                        pfVar8 = (float*)local_68.qw();
                        if (0.0 < *pfVar8 || *pfVar8 == 0.0) {
                            fVar15 = 1.0 / local_5c;
                            local_68 = local_68 * fVar15;
                            uVar17 = 0;
                            fVar16 = local_64 * fVar15;
                            local_60 = fVar15 * local_60;
                            local_64 = fVar16;
                            pfVar8 = (float*)local_68.second();
                            if (-1.0 < *pfVar8 || *pfVar8 == -1.0) {
                                pfVar8 = (float*)local_68.SSOBeginPtr();
                                fVar16 = 1.0;
                                uVar17 = 0;
                                local_78 = (((uint64_t)local_78._4_4_ << 32) | (uint32_t)((*pfVar8 + 1.0) * local_7c));
                                pfVar8 = (float*)local_68.y();
                                fVar15 = (*pfVar8 + 1.0) * local_3c;
                                local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)fVar15);
                                if (in_stack_00000020 == '\0') {
                                    uVar17 = 0;
                                    local_34 = (float)local_78;
                                    fVar16 = (float)local_78;
                                    local_38 = fVar15;
                                }
                                pfVar8 = std::min<float>(local_4c, local_78);
                                local_4c = *pfVar8;
                                pfVar8 = std::max<float>(local_48, local_78);
                                local_48 = *pfVar8;
                                pfVar8 = std::min<float>(local_44, local_90);
                                local_44 = *pfVar8;
                                pfVar8 = std::max<float>(local_40, local_90);
                                local_40 = *pfVar8;
                            }
                        }
                        if (in_stack_00000020 == '\0') {
                            pfVar8 = (float*)(*this_03)[(long)(int)((unsigned int)uVar3 - arg6)];
                            *pfVar8 = local_34;
                            pfVar8[1] = local_38;
                        }
                        uVar14 = uVar14 + 1;
                    } while (uVar5 != uVar14);
                }
                uVar7 = uVar7 + 2;
                iVar6 = this_02->size();
            } while ((int)uVar7 < iVar6);
        }
        new (this) ImVec4(local_4c, local_44, local_48 - local_4c, local_40 - local_44);
        return this;
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001d90a0
    OSRenderCore_MaterialRawProvider::OSRenderCore_MaterialRawProvider()
        : jag::graphics::MaterialRawProvider(), field_8(0), m_materialsArchiveSettings(0) {}

} // namespace jag::oldscape::rseven
