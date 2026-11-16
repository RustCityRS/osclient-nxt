// libs/graphics/runetek7/picking/PickingHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PickingHelper {
    public:
        ~PickingHelper();
        PickingHelper(bool);
        void ResetPointTest(math::Matrix44T<float> const&, math::Rect<float> const&, math::Point<float> const&, bool,
                            float);
        void ResetLineTest(math::Matrix44T<float> const&, math::Rect<float> const&, math::Point<float> const&,
                           math::Point<float> const&, bool);
        void ProcessBoneTransforms(VertexAnimation const&);
        ulong PickTest(math::Matrix44T<float> const&,
                       eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                     MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                     eastl::allocator> const&,
                       bool, bool, int);
        math::Rect<float> const ProcessVertices<Array<GeometryBatchVertexPosLP, eastl::allocator>>(
            Array<GeometryBatchVertexPosLP, eastl::allocator> const&,
            eastl::vector<GeometryBatchVertexSkin, eastl::allocator> const&,
            eastl::vector<unsigned short, eastl::allocator> const&,
            eastl::vector<unsigned int, eastl::allocator> const&, int, int, bool, bool, float);
        math::Rect<float> const ProcessVertices<eastl::vector<GeometryBatchVertexPos, eastl::allocator>>(
            eastl::vector<GeometryBatchVertexPos, eastl::allocator> const&,
            eastl::vector<GeometryBatchVertexSkin, eastl::allocator> const&,
            eastl::vector<unsigned short, eastl::allocator> const&,
            eastl::vector<unsigned int, eastl::allocator> const&, int, int, bool, bool, float);
        static /* 8 bytes */ m_debugAlwaysUseAccuratePicking;

        // data members, from how the methods use this: 536 bytes
        long field_0;        // offset 0
        undefined4* field_8; // offset 8
        char _unknown_16[4];
        undefined1 field_20; // offset 20
        char _unknown_21[17];
        byte field_38; // offset 38
        char _unknown_39[21];
        uint field_60; // offset 60
        char _unknown_64[152];
        undefined1 field_216; // offset 216
        char _unknown_217[31];
        undefined1 field_248; // offset 248
        bool field_249;       // offset 249
        char _unknown_250[2];
        float field_252; // offset 252
        bool field_256;  // offset 256
        char _unknown_257[279];
    };

    // 0x1001d5910, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // PickingHelper::~PickingHelper(): jumps straight to the base-object destructor

    // 0x1001d5920, 96 bytes, base-object destructor, inline, placed by class name and debug map
    // PickingHelper::~PickingHelper()
    void PickingHelper::~PickingHelper() {
        (&field_392)->~vector();
        (&field_368)->~Array();
        (&field_344)->~Array();
        (&field_312)->~vector();
        (&field_288)->~Array();
        (&field_264)->~Array();
    }

    // 0x1007dd590, 1264 bytes, inline, placed by class name
    // math::Rect<float> const PickingHelper::ProcessVertices<Array<GeometryBatchVertexPosLP, eastl::allocator> >(Array<GeometryBatchVertexPosLP, eastl::allocator> const&, eastl::vector<GeometryBatchVertexSkin, eastl::allocator> const&, eastl::vector<unsigned short, eastl::allocator> const&, eastl::vector<unsigned int, eastl::allocator> const&, int, int, bool, bool, float)
    PickingHelper* PickingHelper::ProcessVertices<Array<GeometryBatchVertexPosLP, eastl::allocator>>(
        Array* param_1, vector* param_2, vector* param_3, vector* param_4, int param_5, int param_6, bool param_7,
        bool param_8, float param_9) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;
        Array<math::Matrix44T<float>, eastl::allocator>* this_00;
        Array<math::Vector3T<float>, eastl::allocator>* this_01;
        float fVar3;
        ushort uVar4;
        uint uVar5;
        uint uVar6;
        vector<unsigned int, eastl::allocator>* this_02;
        int iVar7;
        ulong uVar8;
        float* pfVar9;
        Array<std::pair<float, float>, eastl::allocator>* this_03;
        uint* puVar10;
        ushort* puVar11;
        GeometryBatchVertexPosLP* this_04;
        Vector4T<unsigned char>* this_05;
        Matrix44T* pMVar12;
        Vector4T<float>* this_06;
        char* pcVar13;
        byte* pbVar14;
        vector* pvVar15;
        undefined4 in_register_0000008c;
        ulong uVar16;
        ulong uVar17;
        float fVar18;
        float fVar19;
        undefined4 uVar20;
        char in_stack_00000020;
        undefined8 local_88;
        float fStack_80;
        undefined4 uStack_7c;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        undefined8 local_58;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        this_02 = (vector<unsigned int, eastl::allocator>*)CONCAT44(in_register_0000008c, param_5);
        if (in_stack_00000020 == '\0') {
            uVar16 = (ulong)(_param_7 - param_6);
            uVar8 = ((param_1 + 288))->end();
            if (uVar8 < uVar16) {
                ((param_1 + 288))->set_max_size(uVar16, 1);
            }
            if (param_1[256] != (Array)0) {
                uVar8 = ((param_1 + 368))->end();
                if (uVar8 < uVar16) {
                    ((param_1 + 368))->set_max_size(uVar16, 1);
                }
            }
        }
        local_4c = 3.4028235e+38;
        local_48 = -3.4028235e+38;
        local_44 = 3.4028235e+38;
        local_40 = -3.4028235e+38;
        new (&local_78) math::Vector4T<float>();
        pfVar9 = (float*)((param_1 + 208))->second();
        fVar19 = 0.5;
        uVar20 = 0;
        local_3c = 0.5;
        fVar3 = *pfVar9;
        pfVar9 = (float*)((param_1 + 208))->qw();
        local_3c = local_3c * *pfVar9;
        iVar7 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
        if (0 < iVar7) {
            pMVar2 = (Matrix44T*)(param_1 + 144);
            this_00 = (Array<math::Matrix44T<float>, eastl::allocator>*)(param_1 + 344);
            this_01 = (Array<math::Vector3T<float>, eastl::allocator>*)(param_1 + 368);
            pMVar1 = (Matrix44T*)(param_1 + 16);
            this_03 = (Array<std::pair<float, float>, eastl::allocator>*)(param_1 + 288);
            uVar8 = 0;
            local_34 = 0.0;
            local_38 = 0.0;
            do {
                puVar10 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](this_02, uVar8);
                uVar5 = *puVar10;
                uVar16 = (ulong)uVar5;
                puVar10 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](this_02, uVar8 | 1);
                uVar6 = *puVar10;
                if (uVar5 < uVar6) {
                    do {
                        puVar11 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                            (vector<unsigned short, eastl::allocator>*)param_4, uVar16);
                        uVar4 = *puVar11;
                        uVar17 = (ulong)uVar4;
                        this_04 =
                            (GeometryBatchVertexPosLP*)Array<GeometryBatchVertexPosLP, eastl::allocator>::operator[](
                                (Array<GeometryBatchVertexPosLP, eastl::allocator>*)param_2, uVar17);
                        this_05 = (Vector4T<unsigned char>*)
                            eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::operator[](
                                (vector<GeometryBatchVertexSkin, eastl::allocator>*)param_3, uVar17);
                        local_58 = this_04->GetPosition();
                        local_50 = fVar19;
                        local_88 = math::operator*((Vector3T*)&local_58, param_9);
                        fStack_80 = fVar19;
                        local_78.Set((Vector3T*)&local_88, 1.0);
                        if (in_stack_00000020 == '\0') {
                            local_38 = -999999.0;
                            local_34 = -999999.0;
                            if (param_1[256] != (Array)0) {
                                pMVar12 = pMVar2;
                                if (param_8) {
                                    pMVar12 = (Matrix44T*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                                        this_00, (ulong) * (byte*)&this_04->field_6);
                                }
                                local_88 = math::operator*((Vector4T*)&local_78, pMVar12);
                                fStack_80 = fVar19;
                                uStack_7c = uVar20;
                                local_58 = local_88.GetXYZ();
                                local_50 = fVar19;
                                this_06 = (Vector4T<float>*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                    this_01, uVar17 - (long)param_6);
                                math::Vector4T<float>::SetXYZ(this_06, (Vector3T*)&local_58);
                                local_38 = -999999.0;
                                local_34 = -999999.0;
                            }
                        }
                        pMVar12 = pMVar1;
                        if (param_8) {
                            pcVar13 = (char*)math::Vector4T<unsigned char>::operator[](this_05, 0);
                            if (*pcVar13 == '\0') {
                                pbVar14 = (byte*)&this_04->field_6;
                            } else {
                                pbVar14 = (byte*)math::Vector4T<unsigned char>::operator[](this_05, 0);
                            }
                            pMVar12 = (Matrix44T*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                                (Array<math::Matrix44T<float>, eastl::allocator>*)(param_1 + 264), (ulong)*pbVar14);
                        }
                        math::Vector4T<float>::operator*=((Vector4T<float>*)&local_78, pMVar12);
                        pfVar9 = (float*)local_78.qw();
                        if (0.0 < *pfVar9 || *pfVar9 == 0.0) {
                            fVar18 = 1.0 / local_6c;
                            local_78 = local_78 * fVar18;
                            uVar20 = 0;
                            fVar19 = local_74 * fVar18;
                            local_70 = fVar18 * local_70;
                            local_74 = fVar19;
                            pfVar9 = (float*)local_78.second();
                            if (-1.0 < *pfVar9 || *pfVar9 == -1.0) {
                                pvVar15 = local_78.SSOBeginPtr(pMVar12);
                                fVar19 = 1.0;
                                uVar20 = 0;
                                local_88 = CONCAT44(local_88._4_4_, (*(float*)pvVar15 + 1.0) * fVar3 * 0.5);
                                pfVar9 = (float*)local_78.y();
                                fVar18 = (*pfVar9 + 1.0) * local_3c;
                                local_58 = CONCAT44(local_58._4_4_, fVar18);
                                if (in_stack_00000020 == '\0') {
                                    uVar20 = 0;
                                    local_34 = (float)local_88;
                                    fVar19 = (float)local_88;
                                    local_38 = fVar18;
                                }
                                pfVar9 = std::min<float>(&local_4c, (float*)&local_88);
                                local_4c = *pfVar9;
                                pfVar9 = std::max<float>(&local_48, (float*)&local_88);
                                local_48 = *pfVar9;
                                pfVar9 = std::min<float>(&local_44, (float*)&local_58);
                                local_44 = *pfVar9;
                                pfVar9 = std::max<float>(&local_40, (float*)&local_58);
                                local_40 = *pfVar9;
                            }
                        }
                        if (in_stack_00000020 == '\0') {
                            pfVar9 = (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                this_03, (long)(int)((uint)uVar4 - param_6));
                            *pfVar9 = local_34;
                            pfVar9[1] = local_38;
                        }
                        uVar16 = uVar16 + 1;
                    } while (uVar6 != uVar16);
                }
                uVar8 = uVar8 + 2;
                iVar7 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
            } while ((int)uVar8 < iVar7);
        }
        new (this) ImVec4(local_4c, local_44, local_48 - local_4c, local_40 - local_44);
        return this;
    }

    // 0x1007dda90, 1248 bytes, inline, placed by class name
    // math::Rect<float> const PickingHelper::ProcessVertices<eastl::vector<GeometryBatchVertexPos, eastl::allocator> >(eastl::vector<GeometryBatchVertexPos, eastl::allocator> const&, eastl::vector<GeometryBatchVertexSkin, eastl::allocator> const&, eastl::vector<unsigned short, eastl::allocator> const&, eastl::vector<unsigned int, eastl::allocator> const&, int, int, bool, bool, float)
    PickingHelper* PickingHelper::ProcessVertices<eastl::vector<GeometryBatchVertexPos, eastl::allocator>>(
        vector* param_1, vector* param_2, vector* param_3, vector* param_4, int param_5, int param_6, bool param_7,
        bool param_8, float param_9) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;
        Array<math::Matrix44T<float>, eastl::allocator>* this_00;
        Array<math::Vector3T<float>, eastl::allocator>* this_01;
        ushort uVar3;
        uint uVar4;
        uint uVar5;
        vector<unsigned int, eastl::allocator>* this_02;
        int iVar6;
        ulong uVar7;
        float* pfVar8;
        Array<std::pair<float, float>, eastl::allocator>* this_03;
        uint* puVar9;
        ushort* puVar10;
        Layout* pLVar11;
        Vector4T<unsigned char>* this_04;
        vector* pvVar12;
        Matrix44T* pMVar13;
        Vector4T<float>* this_05;
        char* pcVar14;
        type* ptVar15;
        type* ptVar16;
        undefined4 in_register_0000008c;
        ulong uVar17;
        float fVar18;
        float fVar19;
        undefined4 uVar20;
        char in_stack_00000020;
        undefined8 local_90;
        float local_88;
        float local_7c;
        undefined8 local_78;
        float fStack_70;
        undefined4 uStack_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        this_02 = (vector<unsigned int, eastl::allocator>*)CONCAT44(in_register_0000008c, param_5);
        if (in_stack_00000020 == '\0') {
            uVar17 = (ulong)(_param_7 - param_6);
            uVar7 = ((param_1 + 288))->end();
            if (uVar7 < uVar17) {
                ((param_1 + 288))->set_max_size(uVar17, 1);
            }
            if (param_1[256] != (vector)0) {
                uVar7 = ((param_1 + 368))->end();
                if (uVar7 < uVar17) {
                    ((param_1 + 368))->set_max_size(uVar17, 1);
                }
            }
        }
        local_4c = 3.4028235e+38;
        local_48 = -3.4028235e+38;
        local_44 = 3.4028235e+38;
        local_40 = -3.4028235e+38;
        new (&local_68) math::Vector4T<float>();
        pfVar8 = (float*)((param_1 + 208))->second();
        fVar19 = 0.5;
        uVar20 = 0;
        local_3c = 0.5;
        local_7c = *pfVar8 * 0.5;
        pfVar8 = (float*)((param_1 + 208))->qw();
        local_3c = local_3c * *pfVar8;
        iVar6 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
        if (0 < iVar6) {
            pMVar2 = (Matrix44T*)(param_1 + 144);
            this_00 = (Array<math::Matrix44T<float>, eastl::allocator>*)(param_1 + 344);
            this_01 = (Array<math::Vector3T<float>, eastl::allocator>*)(param_1 + 368);
            pMVar1 = (Matrix44T*)(param_1 + 16);
            this_03 = (Array<std::pair<float, float>, eastl::allocator>*)(param_1 + 288);
            uVar7 = 0;
            local_34 = 0.0;
            local_38 = 0.0;
            do {
                puVar9 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](this_02, uVar7);
                uVar4 = *puVar9;
                uVar17 = (ulong)uVar4;
                puVar9 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](this_02, uVar7 | 1);
                uVar5 = *puVar9;
                if (uVar4 < uVar5) {
                    do {
                        puVar10 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                            (vector<unsigned short, eastl::allocator>*)param_4, uVar17);
                        uVar3 = *puVar10;
                        ptVar15 = (type*)(ulong)uVar3;
                        pLVar11 = (Layout*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertexPos, eastl::allocator>*)param_2, (ulong)ptVar15);
                        ptVar16 = ptVar15;
                        this_04 = (Vector4T<unsigned char>*)
                            eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::operator[](
                                (vector<GeometryBatchVertexSkin, eastl::allocator>*)param_3, (ulong)ptVar15);
                        pvVar12 = eastl::string::Layout::SSOBeginPtr(pLVar11, ptVar16);
                        local_78 = math::operator*((Vector3T*)pvVar12, param_9);
                        fStack_70 = fVar19;
                        local_68.Set((Vector3T*)&local_78, 1.0);
                        if (in_stack_00000020 == '\0') {
                            local_38 = -999999.0;
                            local_34 = -999999.0;
                            if (param_1[256] != (vector)0) {
                                pMVar13 = pMVar2;
                                if (param_8) {
                                    pMVar13 = (Matrix44T*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                                        this_00, (ulong)(byte)pLVar11[12]);
                                }
                                local_78 = math::operator*((Vector4T*)&local_68, pMVar13);
                                fStack_70 = fVar19;
                                uStack_6c = uVar20;
                                local_90 = local_78.GetXYZ();
                                local_88 = fVar19;
                                this_05 = (Vector4T<float>*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                    this_01, (long)ptVar15 - (long)param_6);
                                math::Vector4T<float>::SetXYZ(this_05, (Vector3T*)&local_90);
                                local_38 = -999999.0;
                                local_34 = -999999.0;
                            }
                        }
                        pMVar13 = pMVar1;
                        if (param_8) {
                            pcVar14 = (char*)math::Vector4T<unsigned char>::operator[](this_04, 0);
                            if (*pcVar14 == '\0') {
                                pLVar11 = pLVar11 + 12;
                            } else {
                                pLVar11 = (Layout*)math::Vector4T<unsigned char>::operator[](this_04, 0);
                            }
                            pMVar13 = (Matrix44T*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                                (Array<math::Matrix44T<float>, eastl::allocator>*)(param_1 + 264),
                                (ulong)(byte)*pLVar11);
                        }
                        math::Vector4T<float>::operator*=((Vector4T<float>*)&local_68, pMVar13);
                        pfVar8 = (float*)local_68.qw();
                        if (0.0 < *pfVar8 || *pfVar8 == 0.0) {
                            fVar18 = 1.0 / local_5c;
                            local_68 = local_68 * fVar18;
                            uVar20 = 0;
                            fVar19 = local_64 * fVar18;
                            local_60 = fVar18 * local_60;
                            local_64 = fVar19;
                            pfVar8 = (float*)local_68.second();
                            if (-1.0 < *pfVar8 || *pfVar8 == -1.0) {
                                pvVar12 = local_68.SSOBeginPtr(pMVar13);
                                fVar19 = 1.0;
                                uVar20 = 0;
                                local_78 = CONCAT44(local_78._4_4_, (*(float*)pvVar12 + 1.0) * local_7c);
                                pfVar8 = (float*)local_68.y();
                                fVar18 = (*pfVar8 + 1.0) * local_3c;
                                local_90 = CONCAT44(local_90._4_4_, fVar18);
                                if (in_stack_00000020 == '\0') {
                                    uVar20 = 0;
                                    local_34 = (float)local_78;
                                    fVar19 = (float)local_78;
                                    local_38 = fVar18;
                                }
                                pfVar8 = std::min<float>(&local_4c, (float*)&local_78);
                                local_4c = *pfVar8;
                                pfVar8 = std::max<float>(&local_48, (float*)&local_78);
                                local_48 = *pfVar8;
                                pfVar8 = std::min<float>(&local_44, (float*)&local_90);
                                local_44 = *pfVar8;
                                pfVar8 = std::max<float>(&local_40, (float*)&local_90);
                                local_40 = *pfVar8;
                            }
                        }
                        if (in_stack_00000020 == '\0') {
                            pfVar8 = (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                this_03, (long)(int)((uint)uVar3 - param_6));
                            *pfVar8 = local_34;
                            pfVar8[1] = local_38;
                        }
                        uVar17 = uVar17 + 1;
                    } while (uVar5 != uVar17);
                }
                uVar7 = uVar7 + 2;
                iVar6 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
            } while ((int)uVar7 < iVar6);
        }
        new (this) ImVec4(local_4c, local_44, local_48 - local_4c, local_40 - local_44);
        return this;
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001d90a0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::OSRenderCore_MaterialRawProvider()
    void OSRenderCore_MaterialRawProvider::OSRenderCore_MaterialRawProvider() {
        new (this) jag::graphics::MaterialRawProvider();
        field_0 = &PTR__OSRenderCore_MaterialRawProvider_100ef6b08;
        field_8 = 0;
        m_materialsArchiveSettings = 0;
        std::atomic<bool>::atomic((bool)((char)this + '\x18'));
        new (&field_32) eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>();
    }

} // namespace jag::oldscape::rseven
