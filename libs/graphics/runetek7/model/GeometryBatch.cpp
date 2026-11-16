// libs/graphics/runetek7/model/GeometryBatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GeometryBatch.h"

namespace jag::graphics {
    // 0x100009ca0: GeometryBatch::GetAABB() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100060710: GeometryBatch::GetBoneIDMap() has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x100060710: GeometryBatch::GetBoneIDMap() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x1001a3c10: GeometryBatch::GetLabelIDMap() has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001a3c10: GeometryBatch::GetLabelIDMap() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001c4880: GeometryBatch::GetVertexDataBuffer() has the same machine code as RT7Core::GetPostProcessManager()

    // 0x1001c4880: GeometryBatch::GetVertexDataBuffer() const has the same machine code as RT7Core::GetPostProcessManager()

    // 0x10036bfe0: GeometryBatch::GetJointIDMap() const has the same machine code as GeometryBatch::GetJointIDMap()

    // 0x10036da70: GeometryBatch::GetVertexDataBufferPos() has the same machine code as GeometryBatch::GetVertexDataBufferPos() const

    // 0x1004abeb0: GeometryBatch::GetBoneVertices() const has the same machine code as game::EnvironmentOverride::GetBloomOverrides() const

    // 0x100524d00: GeometryBatch::SetShareLight(bool) has the same machine code as SpriteAtlasReference::SetDisableCache(bool)

    // 0x10062b9b0: GeometryBatch::HasFaceTransparency() const has the same machine code as Material::IsLegacyMaterial() const

    // 0x1006ad5d0: GeometryBatch::GetVertexDataBufferSkin() const has the same machine code as ui::ComponentCollection::GetDynamicChildrenRenderOrderCollection()

    // 0x100804cb0
    GeometryBatch::GeometryBatch()
        : MakeSharedPool<GeometryBatch, 4096>(), math::AABB(), m_boneCount(1), field_33(0), m_transformed(false),
          field_35(0), m_hasFaceTransparency(0), m_shareLight(false), m_hidden(0), m_vertexScale(1.0), m_labelCount(1),
          m_numLods(1), m_faceHSLBaked(false) {}

    // 0x100805030
    GeometryBatch::GeometryBatch(GeometryBatch&& geometryBatch)
        : MakeSharedPool<GeometryBatch, 4096>(), math::AABB(geometryBatch), m_boneCount(geometryBatch.m_boneCount),
          field_33(geometryBatch.field_33), m_transformed(geometryBatch.m_transformed),
          field_35(geometryBatch.field_35), m_hasFaceTransparency(geometryBatch.m_hasFaceTransparency),
          m_shareLight(geometryBatch.m_shareLight), m_hidden(geometryBatch.m_hidden), m_vertexScale(1.0),
          m_labelCount(geometryBatch.m_labelCount), field_48(geometryBatch.field_48), field_88(geometryBatch.field_88),
          field_128(geometryBatch.field_128), field_168(geometryBatch.field_168), m_numLods(geometryBatch.m_numLods),
          field_216(geometryBatch.field_216), m_faceHSLBuffer(geometryBatch.m_faceHSLBuffer),
          m_faceHSLBaked(geometryBatch.m_faceHSLBaked),
          m_faceTransparencyBuffer(geometryBatch.m_faceTransparencyBuffer), field_448(geometryBatch.field_448),
          field_480(geometryBatch.field_480), field_512(geometryBatch.field_512),
          m_vertexDataBufferSkin(geometryBatch.m_vertexDataBufferSkin) {}

    // 0x100805340
    GeometryBatch::GeometryBatch(const GeometryBatch& geometryBatch)
        : MakeSharedPool<GeometryBatch, 4096>(), math::AABB(geometryBatch), m_boneCount(geometryBatch.m_boneCount),
          field_33(geometryBatch.field_33), m_transformed(geometryBatch.m_transformed),
          field_35(geometryBatch.field_35), m_hasFaceTransparency(geometryBatch.m_hasFaceTransparency),
          m_shareLight(geometryBatch.m_shareLight), m_hidden(geometryBatch.m_hidden), m_vertexScale(1.0),
          m_labelCount(geometryBatch.m_labelCount), field_48(geometryBatch.field_48), field_88(geometryBatch.field_88),
          field_128(geometryBatch.field_128), field_168(geometryBatch.field_168), m_numLods(geometryBatch.m_numLods),
          field_216(geometryBatch.field_216), m_faceHSLBuffer(geometryBatch.m_faceHSLBuffer),
          m_faceHSLBaked(geometryBatch.m_faceHSLBaked),
          m_faceTransparencyBuffer(geometryBatch.m_faceTransparencyBuffer), field_448(geometryBatch.field_448),
          field_480(geometryBatch.field_480), field_512(geometryBatch.field_512),
          m_vertexDataBufferSkin(geometryBatch.m_vertexDataBufferSkin) {}

    // 0x100805670
    GeometryBatch::~GeometryBatch() {
        DestroyRenderingResources();
        field_1248.~array();
        field_1168.~VertexBuffer();
        field_1088.~VertexBuffer();
        field_1008.~VertexBuffer();
        field_568.~array();
        m_vertexDataBufferSkin->~vector();
        field_512.~Array();
        field_480.~vector();
        field_448.~vector();
        m_faceTransparencyBuffer->~vector();
        m_faceHSLBuffer->~vector();
        field_168.~vector_map();
        field_128.~vector_map();
        field_88.~vector_map();
        field_48.~vector_map();
    }

    // 0x100805810
    void GeometryBatch::DestroyRenderingResources() {
        unsigned long arg1 = 0;
        do {
            ((InputAssemblerState*)field_1248[arg1])->Destroy();
            ((IndexBuffer*)field_568[arg1])->Destroy();
            arg1 = arg1 + 1;
        } while (arg1 != 5);
        field_1008.Destroy();
        field_1088.Destroy();
        field_1168.Destroy();
    }

    // 0x1008058b0
    void GeometryBatch::UpdateAABB() {
        Vector3T<float>* pVVar2;
        GeometryBatchVertexPosLP* pGVar3;
        Vector3T<float>* vector3;
        GeometryBatchVertexPosLP* this_01;
        uint64_t local_38[2];

        Reset();
        uint8_t* this_00 = &field_512;
        if (this_00->empty() == '\0') {
            this_01 = (GeometryBatchVertexPosLP*)this_00->data();
            pGVar3 = (GeometryBatchVertexPosLP*)this_00->end();
            if (this_01 != pGVar3) {
                do {
                    local_38[0] = this_01->GetPosition();
                    AddPoint(*local_38);
                    this_01 = (GeometryBatchVertexPosLP*)&this_01->field_8;
                } while (this_01 != pGVar3);
            }
            if (m_vertexScale != 1.0) {
                new (local_38) math::Vector3T(m_vertexScale);
                Scale(*local_38);
            }
        } else {
            vector3 = (Vector3T<float>*)field_480.HeapBeginPtr();
            pVVar2 = (Vector3T<float>*)field_480.end();
            for (; vector3 != pVVar2; vector3 = vector3 + 16) {
                AddPoint(*vector3);
            }
        }
    }

    // 0x1008059a0
    unsigned long GeometryBatch::LoadMeshFromModelRawRT7(PacketView& packetView, unsigned int arg2) {
        vector<unsigned short>* pvVar1;
        uint8_t uVar2;
        char cVar3;
        uint16_t uVar4;
        Layout* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        unsigned int uVar9;
        int iVar10;
        unsigned short* puVar11;
        unsigned char* puVar12;
        short* psVar13;
        vector<unsigned short>* arg1;
        vector<unsigned short>* pvVar14;
        schar* psVar15;
        array<unsigned short, 2ul>* paVar16;
        float* pfVar17;
        array<unsigned short, 2ul>* paVar18;
        uint16_t* puVar19;
        long lVar20;
        Callstack* this_03;
        Callstack* pCVar21;
        long lVar22;
        char* pcVar24;
        uint8_t* pbVar25;
        Vector4T<signed char>* pVVar26;
        unsigned long uVar28;
        Vector4T<signed char>* arg1_00;
        unsigned short local_380[256];
        Array<short, BucketAllocatorEASTL> local_168;
        Array<unsigned short, BucketAllocatorEASTL> local_150;
        Array<unsigned char, BucketAllocatorEASTL> local_138;
        Array<unsigned short, BucketAllocatorEASTL> local_108;
        Vector4T<signed char>* local_e0;
        Array<short, BucketAllocatorEASTL> local_d8;
        Array<signed char, BucketAllocatorEASTL> local_c0;
        Array<signed char, BucketAllocatorEASTL> local_a8;
        Vector4T<signed char>* local_80;
        uint8_t* local_60;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_50;
        uint8_t local_41;
        uint8_t local_40[8];
        vector<unsigned short>* local_38;

        m_transformed = false;
        uint8_t bVar7 = (uint8_t)arg2;
        field_35 = bVar7 & 1;
        m_hasFaceTransparency = bVar7 >> 1 & 1;
        m_hidden = bVar7 >> 4 & 1;
        unsigned short uVar8 = packetView.g2LE();
        unsigned long uVar27 = (unsigned long)uVar8;
        uint8_t* puVar23 = m_faceHSLBuffer;
        GeometryBatch* local_58 = this;
        if (field_35 == 0) {
            puVar23->clear();
            puVar23->reserve(uVar27);
            puVar11 = (unsigned short*)puVar23->end();
            local_380[0] = 65535;
            puVar23->insert(puVar11, uVar27, *local_380);
        } else {
            puVar23->resize(uVar27);
            puVar11 = (unsigned short*)(*puVar23)[0];
            packetView.g2ArrLE(puVar11, uVar27);
        }
        puVar23 = local_58->m_faceTransparencyBuffer;
        if (local_58->m_hasFaceTransparency == 0) {
            puVar23->clear();
            puVar23->reserve(uVar27);
            puVar12 = (unsigned char*)puVar23->end();
            local_380[0] = (((uint16_t)local_380[0]._1_1_ << 8) | (uint8_t)255);
            puVar23->insert(puVar12, uVar27, *local_380);
        } else {
            puVar23->resize(uVar27);
            puVar12 = (unsigned char*)(*puVar23)[0];
            packetView.g1Arr(puVar12, uVar27);
        }
        Array<short, BucketAllocatorEASTL> local_180;
        if ((arg2 & 4) != 0) {
            local_180.set_max_size(uVar27, 4);
            psVar13 = &local_180[0];
            packetView.g2sArrLE(psVar13, uVar27);
        }
        bVar7 = packetView.g1();
        local_58->m_numLods = (unsigned int)bVar7;
        array<eastl::vector<unsigned short>, 5ul>* local_f0 =
            (array<eastl::vector<unsigned short>, 5ul>*)&local_58->field_216;
        bool bVar29 = bVar7 != 0;
        unsigned long local_118 = uVar27;
        if (bVar29) {
            local_38 = (vector<unsigned short>*)(uVar27 * 3);
            uVar27 = 0;
            do {
                local_41 = bVar29;
                uVar9 = packetView.g2LE();
                this_03 = (Callstack*)(unsigned long)uVar9;
                if ((unsigned short)uVar9 == 0) {
                    LogAssert("indexCount > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              154, nullptr);
                }
                pvVar14 = (vector<unsigned short>*)(unsigned long)(unsigned short)uVar9;
                if ((unsigned long)pvVar14 % 3 == 0) {
                    if ((uVar27 == 0) && (local_38 != pvVar14)) {
                        LogAssert("i > 0 || faceCount * 3 == indexCount",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/model/GeometryBatch.cpp",
                                  161, nullptr);
                    }
                    this_03 = (Callstack*)(*local_f0)[uVar27];
                    this_03->resize_uninitialized((unsigned long)pvVar14);
                    puVar11 = (unsigned short*)(*this_03)[0];
                    packetView.g2ArrLE(puVar11, (unsigned long)pvVar14);
                } else {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              158, "GeometryBatch found with indexCount not multiple of 3!");
                }
                if ((unsigned long)pvVar14 % 3 != 0)
                    goto LAB_100806952;
                uVar27 = uVar27 + 1;
                bVar29 = uVar27 < local_58->m_numLods;
            } while (bVar29);
        }
        array<eastl::vector<unsigned short>, 5ul>* this_01 = local_f0;
        uVar27 = (unsigned long)local_58->m_numLods;
        if (uVar27 < 5) {
            do {
                arg1 = (vector<unsigned short>*)(*this_01)[(unsigned long)(local_58->m_numLods - 1)];
                pvVar14 = (vector<unsigned short>*)(*this_01)[uVar27];
                *pvVar14 = *arg1;
                uVar27 = uVar27 + 1;
            } while (uVar27 != 5);
        }
        GeometryBatch* pGVar6 = local_58;
        local_58->m_numLods = 5;
        local_41 = bVar29;
        uVar8 = packetView.g2LE();
        Vector4T<signed char>* local_68 = (Vector4T<signed char>*)(unsigned long)uVar8;
        Vector4T<signed char>* local_90 = (Vector4T<signed char>*)&pGVar6->field_448;
        local_90->resize((unsigned long)local_68);
        vector<GeometryBatchVertexPos>* local_78 = (vector<GeometryBatchVertexPos>*)&pGVar6->field_480;
        local_78->resize((unsigned long)local_68);
        Layout* local_120 = (Layout*)pGVar6->m_vertexDataBufferSkin;
        local_120->resize((unsigned long)local_68);
        pGVar6->m_labelCount = 1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_e8 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&pGVar6->field_48;
        local_e8->clear();
        pGVar6->m_boneCount = 1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_110 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&pGVar6->field_88;
        local_110->clear();
        this_03 = (Callstack*)&pGVar6->field_128;
        this_03->clear();
        Vector4T<signed char>* local_88 = (Vector4T<signed char>*)this_03;
        this_03->reserve(56);
        if (uVar8 != 0) {
            local_d8 = Array<short, BucketAllocatorEASTL>();
            uVar27 = (unsigned long)(unsigned int)((int)local_68 * 3);
            local_d8.set_max_size(uVar27, 4);
            psVar13 = &local_d8[0];
            packetView.g2sArrLE(psVar13, uVar27);
            local_c0 = Array<signed char, BucketAllocatorEASTL>();
            local_c0.set_max_size(uVar27, 4);
            psVar15 = &local_c0[0];
            packetView.g1sArr(psVar15, uVar27);
            local_a8 = Array<signed char, BucketAllocatorEASTL>();
            uVar27 = (unsigned long)(unsigned int)((int)local_68 * 4);
            local_a8.set_max_size(uVar27, 4);
            psVar15 = &local_a8[0];
            packetView.g1sArr(psVar15, uVar27);
            local_108 = Array<unsigned short, BucketAllocatorEASTL>();
            uVar27 = (unsigned long)(unsigned int)((int)local_68 * 2);
            local_108.set_max_size(uVar27, 4);
            puVar11 = &local_108[0];
            packetView.g2Arr(puVar11, uVar27);
            local_168 = Array<short, BucketAllocatorEASTL>();
            if ((arg2 & 8) != 0) {
                local_168.set_max_size((unsigned long)local_68, 4);
                psVar13 = &local_168[0];
                packetView.g2sArrLE(psVar13, (unsigned long)local_68);
            }
            local_150 = Array<unsigned short, BucketAllocatorEASTL>();
            local_138 = Array<unsigned char, BucketAllocatorEASTL>();
            if ((arg2 & 32) != 0) {
                iVar10 = packetView.g4LE();
                uVar27 = (unsigned long)iVar10;
                local_150.set_max_size(uVar27, 4);
                puVar11 = &local_150[0];
                packetView.g2ArrLE(puVar11, uVar27);
                local_138.set_max_size(uVar27, 4);
                puVar12 = &local_138[0];
                packetView.g1Arr(puVar12, uVar27);
            }
            ___bzero(local_380, 512);
            uVar9 = (unsigned int)local_68;
            if ((arg2 & 40) == 0) {
                local_80 = (Vector4T<signed char>*)&DAT_00000001;
                if (1 < uVar9) {
                    local_80 = (Vector4T<signed char>*)((unsigned long)local_68 & 4294967295);
                }
                local_38 = (vector<unsigned short>*)2;
                local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)3;
                local_60 = &DAT_00000001;
                pVVar26 = nullptr;
                do {
                    paVar16 = (array<unsigned short, 2ul>*)(*local_90)[(unsigned long)pVVar26];
                    local_88 = pVVar26;
                    pfVar17 = (float*)(*local_78)[(unsigned long)pVVar26];
                    *(uint16_t*)(pfVar17 + 3) = 0;
                    pvVar14 = local_38 - 2;
                    psVar13 = &local_d8[(unsigned long)pvVar14];
                    pvVar1 = local_38 - 1;
                    *pfVar17 = (float)(int)*psVar13;
                    psVar13 = &local_d8[(unsigned long)pvVar1];
                    pfVar17[1] = (float)(int)*psVar13;
                    psVar13 = &local_d8[(unsigned long)local_38];
                    pfVar17[2] = (float)(int)*psVar13;
                    paVar18 = &local_c0[(unsigned long)pvVar14];
                    paVar16[4] = *paVar18;
                    paVar18 = &local_c0[(unsigned long)pvVar1];
                    paVar16[5] = *paVar18;
                    paVar18 = (array<unsigned short, 2ul>*)local_c0[(unsigned long)local_38];
                    paVar16[6] = *paVar18;
                    paVar18 = &local_a8[(unsigned long)(local_50 - 3)];
                    paVar16[8] = *paVar18;
                    paVar18 = &local_a8[(unsigned long)(local_50 - 2)];
                    paVar16[9] = *paVar18;
                    paVar18 = &local_a8[(unsigned long)(local_50 - 1)];
                    paVar16[10] = *paVar18;
                    paVar18 = (array<unsigned short, 2ul>*)local_a8[(unsigned long)local_50];
                    paVar16[11] = *paVar18;
                    puVar19 = &local_108[(unsigned long)(local_60 - 1)];
                    pvVar14 = local_38;
                    uVar4 = *puVar19;
                    puVar19 = (uint16_t*)(*paVar16)[0];
                    *puVar19 = uVar4;
                    puVar19 = &local_108[(unsigned long)local_60];
                    uVar4 = *puVar19;
                    puVar19 = (uint16_t*)(*paVar16)[1];
                    *puVar19 = uVar4;
                    pVVar26 = local_88 + 1;
                    local_38 = pvVar14 + 3;
                    local_50 = local_50 + 4;
                    local_60 = local_60 + 2;
                } while (local_80 != pVVar26);
            } else {
                if ((arg2 & 8) == 0) {
                    local_e0 = (Vector4T<signed char>*)&DAT_00000001;
                    if (1 < uVar9) {
                        local_e0 = (Vector4T<signed char>*)((unsigned long)local_68 & 4294967295);
                    }
                    local_38 = (vector<unsigned short>*)2;
                    local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)3;
                    local_60 = &DAT_00000001;
                    pVVar26 = nullptr;
                    do {
                        paVar16 = (array<unsigned short, 2ul>*)(*local_90)[(unsigned long)pVVar26];
                        local_80 = pVVar26;
                        pfVar17 = (float*)(*local_78)[(unsigned long)pVVar26];
                        *(uint16_t*)(pfVar17 + 3) = 0;
                        pvVar14 = local_38 - 2;
                        psVar13 = &local_d8[(unsigned long)pvVar14];
                        pvVar1 = local_38 - 1;
                        *pfVar17 = (float)(int)*psVar13;
                        psVar13 = &local_d8[(unsigned long)pvVar1];
                        pfVar17[1] = (float)(int)*psVar13;
                        psVar13 = &local_d8[(unsigned long)local_38];
                        pfVar17[2] = (float)(int)*psVar13;
                        paVar18 = &local_c0[(unsigned long)pvVar14];
                        paVar16[4] = *paVar18;
                        paVar18 = (array<unsigned short, 2ul>*)local_c0[(unsigned long)pvVar1];
                        paVar16[5] = *paVar18;
                        paVar18 = &local_c0[(unsigned long)local_38];
                        paVar16[6] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)(local_50 - 3)];
                        paVar16[8] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)(local_50 - 2)];
                        paVar16[9] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)(local_50 - 1)];
                        paVar16[10] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)local_50];
                        paVar16[11] = *paVar18;
                        puVar19 = &local_108[(unsigned long)(local_60 - 1)];
                        pvVar14 = local_38;
                        uVar4 = *puVar19;
                        puVar19 = (uint16_t*)(*paVar16)[0];
                        *puVar19 = uVar4;
                        puVar19 = &local_108[(unsigned long)local_60];
                        uVar4 = *puVar19;
                        puVar19 = (uint16_t*)(*paVar16)[1];
                        *puVar19 = uVar4;
                        pVVar26 = local_80 + 1;
                        local_38 = pvVar14 + 3;
                        local_50 = local_50 + 4;
                        local_60 = local_60 + 2;
                    } while (local_e0 != pVVar26);
                } else {
                    local_e0 = (Vector4T<signed char>*)&DAT_00000001;
                    if (1 < uVar9) {
                        local_e0 = (Vector4T<signed char>*)((unsigned long)local_68 & 4294967295);
                    }
                    pVVar26 = (Vector4T<signed char>*)2;
                    local_38 = (vector<unsigned short>*)3;
                    local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&DAT_00000001;
                    puVar23 = nullptr;
                    do {
                        paVar16 = (array<unsigned short, 2ul>*)(*local_90)[(unsigned long)puVar23];
                        pfVar17 = (float*)(*local_78)[(unsigned long)puVar23];
                        *(uint8_t*)((long)pfVar17 + 13) = 0;
                        puVar11 = &local_168[(unsigned long)puVar23];
                        pvVar5 = local_110;
                        uVar8 = *puVar11;
                        local_60 = puVar23;
                        if (uVar8 == 65535) {
                            *(uint8_t*)(pfVar17 + 3) = 0;
                        } else {
                            local_80 = pVVar26;
                            local_40._0_2_ = uVar8;
                            lVar20 = eastl::vector_map<unsigned short, unsigned short>::find(*local_110);
                            lVar22 = pvVar5->end();
                            if (lVar20 == lVar22) {
                                bVar7 = local_58->m_boneCount;
                                *(uint8_t*)(pfVar17 + 3) = bVar7;
                                local_58->m_boneCount = bVar7 + 1;
                                local_40._0_2_ = uVar8;
                                puVar11 = (unsigned short*)(*pvVar5)[*local_40];
                                *puVar11 = (unsigned short)bVar7;
                                pVVar26 = local_80;
                                if (56 < local_58->m_boneCount) {
                                    LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/model/GeometryBatch.cpp",
                                              252, nullptr);
                                }
                            } else {
                                *(uint8_t*)(pfVar17 + 3) = *(uint8_t*)(lVar20 + 2);
                                pVVar26 = local_80;
                            }
                        }
                        psVar13 = (short*)(*local_380)[(unsigned long)*(uint8_t*)(pfVar17 + 3)];
                        *psVar13 = *psVar13 + 1;
                        psVar13 = &local_d8[(unsigned long)(pVVar26 - 2)];
                        *pfVar17 = (float)(int)*psVar13;
                        psVar13 = &local_d8[(unsigned long)(pVVar26 - 1)];
                        pfVar17[1] = (float)(int)*psVar13;
                        psVar13 = &local_d8[(unsigned long)pVVar26];
                        pfVar17[2] = (float)(int)*psVar13;
                        paVar18 = &local_c0[(unsigned long)(pVVar26 - 2)];
                        paVar16[4] = *paVar18;
                        paVar18 = &local_c0[(unsigned long)(pVVar26 - 1)];
                        paVar16[5] = *paVar18;
                        paVar18 = &local_c0[(unsigned long)pVVar26];
                        paVar16[6] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)(local_38 - 3)];
                        paVar16[8] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)(local_38 - 2)];
                        paVar16[9] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)(local_38 - 1)];
                        paVar16[10] = *paVar18;
                        paVar18 = &local_a8[(unsigned long)local_38];
                        paVar16[11] = *paVar18;
                        puVar19 = &local_108[(unsigned long)(local_50 - 1)];
                        uVar4 = *puVar19;
                        puVar19 = (uint16_t*)(*paVar16)[0];
                        *puVar19 = uVar4;
                        puVar19 = &local_108[(unsigned long)local_50];
                        uVar4 = *puVar19;
                        puVar19 = (uint16_t*)(*paVar16)[1];
                        *puVar19 = uVar4;
                        puVar23 = local_60 + 1;
                        pVVar26 = pVVar26 + 3;
                        local_38 = local_38 + 4;
                        local_50 = local_50 + 2;
                    } while (local_e0 != (Vector4T<signed char>*)puVar23);
                }
                uVar27 = 1;
                if (1 < (unsigned int)local_68) {
                    uVar27 = (unsigned long)local_68 & 4294967295;
                }
                uVar28 = 0;
                do {
                    lVar20 = (*local_78)[uVar28];
                    local_40._0_2_ = (uint16_t)(*(uint8_t*)(lVar20 + 12));
                    pvVar14 = (vector<unsigned short>*)(*local_88)[*local_40];
                    puVar11 = (unsigned short*)(*local_380)[(unsigned long)*(uint8_t*)(lVar20 + 12)];
                    pvVar14->reserve((unsigned long)*puVar11);
                    local_40._0_2_ = (uint16_t)uVar28;
                    pvVar14->push_back(*local_40);
                    uVar28 = uVar28 + 1;
                } while (uVar27 != uVar28);
            }
            this_00 = local_120;
            if ((arg2 & 32) == 0) {
                this_03 = (Callstack*)local_120->HeapBeginPtr();
                pCVar21 = (Callstack*)this_00->end();
                if (this_03 != pCVar21) {
                    do {
                        new (local_40) math::Vector4T(false, false, false, false);
                        *this_03 = *local_40;
                        new (local_40) math::Vector4T(true, false, false, false);
                        this_03->field_4 = *local_40;
                        this_03 = (Callstack*)&this_03->field_8;
                    } while (this_03 != pCVar21);
                }
            } else {
                pVVar26 = (Vector4T<signed char>*)&DAT_00000001;
                if (1 < (unsigned int)local_68) {
                    pVVar26 = (Vector4T<signed char>*)((unsigned long)local_68 & 4294967295);
                }
                local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_58->field_168;
                this_03 = (Callstack*)local_40;
                arg1_00 = nullptr;
                local_38 = (vector<unsigned short>*)((unsigned long)local_38 & 18446744069414584320);
                local_68 = pVVar26;
                do {
                    pVVar26 = (Vector4T<signed char>*)(*local_120)[(unsigned long)arg1_00];
                    new (this_03) callstack::Callstack();
                    local_80 = arg1_00;
                    *pVVar26 = *this_03;
                    new (this_03) callstack::Callstack();
                    local_88 = pVVar26 + 4;
                    local_90 = pVVar26;
                    *local_88 = *this_03;
                    uVar9 = 0;
                    local_60 = (uint8_t*)((unsigned long)local_60 & 18446744069414584320);
                    do {
                        uVar27 = (unsigned long)(int)local_38;
                        puVar11 = &local_150[uVar27];
                        local_40._0_2_ = *puVar11;
                        if (local_40._0_2_ == 65535) {
                            puVar23 = (uint8_t*)(*local_90)[uVar9];
                            *puVar23 = 0;
                            puVar23 = (uint8_t*)(*local_88)[uVar9];
                            *puVar23 = 0;
                        } else {
                            lVar20 = eastl::vector_map<unsigned short, unsigned short>::find(*local_50);
                            lVar22 = local_50->end();
                            if (lVar20 == lVar22) {
                                bVar7 = local_58->m_boneCount;
                                pbVar25 = (uint8_t*)(*local_90)[uVar9];
                                *pbVar25 = bVar7;
                                bVar7 = local_58->m_boneCount;
                                local_58->m_boneCount = bVar7 + 1;
                                puVar11 = (unsigned short*)(*local_50)[*this_03];
                                *puVar11 = (unsigned short)bVar7;
                                local_58->field_33 = local_58->field_33 + '\x01';
                                if (56 < local_58->m_boneCount) {
                                    LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/model/GeometryBatch.cpp",
                                              395, nullptr);
                                }
                            } else {
                                uVar4 = *(uint16_t*)(lVar20 + 2);
                                puVar23 = (uint8_t*)(*local_90)[uVar9];
                                *puVar23 = (char)uVar4;
                            }
                            pcVar24 = &local_138[uVar27];
                            local_38 = (vector<unsigned short>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                 (uint32_t)((int)local_38 + 1));
                            cVar3 = *pcVar24;
                            if (!cVar3) {
                                pbVar25 = (uint8_t*)(*local_88)[uVar9];
                                *pbVar25 = ~(uint8_t)local_60;
                                iVar10 = 23;
                            } else {
                                pcVar24 = (char*)(*local_88)[uVar9];
                                *pcVar24 = cVar3;
                                local_60 =
                                    (uint8_t*)(((uint64_t)local_60._4_4_ << 32) |
                                               (uint32_t)((((uint32_t)((int32_t)((unsigned long)local_60 >> 8)) << 8) |
                                                           (uint8_t)((char)local_60 + cVar3))));
                                iVar10 = 0;
                            }
                            if ((iVar10 != 25) && (iVar10 != 0))
                                break;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 4);
                    arg1_00 = local_80 + 1;
                } while (arg1_00 != local_68);
            }
            if (((arg2 & 4) != 0) && (local_38 = (vector<unsigned short>*)(*local_f0)[0], local_118 != 0)) {
                uVar28 = 2;
                uVar27 = 0;
                do {
                    puVar11 = &local_180[uVar27];
                    pvVar5 = local_e8;
                    uVar8 = *puVar11;
                    if (uVar8 != 65535) {
                        local_60 = (uint8_t*)(((uint64_t)local_60._2_6_ << 16) | (uint16_t)uVar8);
                        local_40._0_2_ = uVar8;
                        lVar20 = eastl::vector_map<unsigned short, unsigned short>::find(*local_e8);
                        local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(uVar28 - 1);
                        lVar22 = pvVar5->end();
                        if (lVar20 == lVar22) {
                            uVar2 = local_58->m_labelCount;
                            puVar11 = (unsigned short*)(*local_38)[uVar28 - 2];
                            lVar20 = (*local_78)[(unsigned long)*puVar11];
                            *(uint8_t*)(lVar20 + 13) = uVar2;
                            uVar2 = local_58->m_labelCount;
                            puVar11 = (unsigned short*)(*local_38)[(unsigned long)local_50];
                            lVar20 = (*local_78)[(unsigned long)*puVar11];
                            *(uint8_t*)(lVar20 + 13) = uVar2;
                            uVar2 = local_58->m_labelCount;
                            puVar11 = (unsigned short*)(*local_38)[uVar28];
                            lVar20 = (*local_78)[(unsigned long)*puVar11];
                            *(uint8_t*)(lVar20 + 13) = uVar2;
                            bVar7 = local_58->m_labelCount;
                            this_03 = nullptr;
                            local_58->m_labelCount = bVar7 + 1;
                            local_40._0_2_ = (unsigned short)local_60;
                            puVar11 = (unsigned short*)(*local_e8)[*local_40];
                            *puVar11 = (unsigned short)bVar7;
                        } else {
                            uVar2 = *(uint8_t*)(lVar20 + 2);
                            puVar11 = (unsigned short*)(*local_38)[uVar28 - 2];
                            lVar22 = (*local_78)[(unsigned long)*puVar11];
                            *(uint8_t*)(lVar22 + 13) = uVar2;
                            uVar2 = *(uint8_t*)(lVar20 + 2);
                            puVar11 = (unsigned short*)(*local_38)[(unsigned long)local_50];
                            lVar22 = (*local_78)[(unsigned long)*puVar11];
                            *(uint8_t*)(lVar22 + 13) = uVar2;
                            uVar2 = *(uint8_t*)(lVar20 + 2);
                            this_03 = nullptr;
                            puVar11 = (unsigned short*)(*local_38)[uVar28];
                            lVar20 = (*local_78)[(unsigned long)*puVar11];
                            *(uint8_t*)(lVar20 + 13) = uVar2;
                        }
                    }
                    uVar27 = uVar27 + 1;
                    uVar28 = uVar28 + 3;
                } while (local_118 != uVar27);
            }
            uVar27 = local_e8->size();
            if (32 < uVar27) {
                LogAssert("m_labelIDMap.size() <= AnimationConstants::MAX_LABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          459, nullptr);
            }
            uVar27 = local_110->size();
            if (56 < uVar27) {
                LogAssert("m_boneIDMap.size() <= AnimationConstants::MAX_BONES_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          460, nullptr);
            }
        }
    LAB_100806952:
        bVar7 = ~local_41;
        return bVar7 & 4294967041;
    }

    // 0x1008072b0
    bool GeometryBatch::LoadMeshFromData(unsigned long arg1, unsigned long arg2, const math::Vector3T<float>* vector31,
                                         const math::Vector3T<float>* vector32, const math::Vector4T<float>* vector4,
                                         const math::Vector2T<float>* vector2, unsigned long arg7,
                                         const unsigned short* arg8, const math::Vector3T<float>& vector33,
                                         unsigned int arg10) {
        Vector2T<float>* pVVar2;
        Vector3T<float>* pVVar3;
        schar sVar4;
        array<unsigned short, 2ul> aVar5;
        uint16_t uVar6;
        vector<unsigned short>* arg1_02;
        array<unsigned short, 2ul>* this_00;
        Vector4T<float>* pVVar8;
        uint16_t* puVar9;
        int iVar10;
        Vector3T<float>* vector3;
        uint8_t local_a0[16];
        Vector2T<float>* local_80;
        Vector4T<float>* local_78;
        Vector3T<float>* local_70;

        m_transformed = false;
        field_35 = (uint8_t)(arg10 & 1);
        unsigned long local_48 = arg2;
        if ((arg10 & 1) != 0) {
            LogAssert("!m_hasColoredVertices",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      480, "Colored vertices not supported when loading from raw mesh data");
        }
        m_hasFaceTransparency = (uint8_t)((arg10 & 2) >> 1);
        if ((arg10 & 2) != 0) {
            LogAssert("!m_hasTransparentVertices",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      481, "Transparent vertices not supported when loading from raw mesh data");
        }
        m_hidden = (uint8_t)arg10 >> 4 & 1;
        if ((arg10 & 4) != 0) {
            LogAssert("!(generalFlags & MODEL_LABEL_ID_FLAG)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      484, "Model label IDs not supported when loading from raw mesh data");
        }
        unsigned long uVar11 = arg7 / 3;
        if (arg7 % 3 != 0) {
            LogAssert("faceCount * 3 == indexCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      487, nullptr);
        }
        uint8_t* puVar1 = m_faceHSLBuffer;
        puVar1->clear();
        puVar1->reserve(uVar11);
        auto local_40 = puVar1->end();
        new (local_a0) math::ColourStorage8888(vector33);
        unsigned short local_34 = math::RunetekColour::RGBToHSL(local_a0->GetX());
        puVar1->insert(local_40, uVar11, local_34);
        puVar1 = m_faceTransparencyBuffer;
        puVar1->clear();
        puVar1->reserve(uVar11);
        puVar1->insert((unsigned char*)puVar1->end(), uVar11, 255);
        m_numLods = 1;
        if (arg7 == 0) {
            LogAssert("indexCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      502, nullptr);
        }
        puVar1 = &field_216;
        unsigned long local_88 = arg7 % 3;
        vector<unsigned short>* pvVar7 = (vector<unsigned short>*)(*puVar1)[0];
        pvVar7->resize_uninitialized(arg7);
        pvVar7->assign<unsigned short const*>(arg8, arg8 + arg7);
        uVar11 = (unsigned long)m_numLods;
        if (uVar11 < 5) {
            do {
                arg1_02 = (vector<unsigned short>*)(*puVar1)[(unsigned long)(m_numLods - 1)];
                pvVar7 = (vector<unsigned short>*)(*puVar1)[uVar11];
                *pvVar7 = *arg1_02;
                uVar11 = uVar11 + 1;
            } while (uVar11 != 5);
        }
        uVar11 = arg1;
        m_numLods = 5;
        local_a0._8_8_ = &field_448;
        local_a0._8_8_->resize(arg1);
        vector<GeometryBatchVertexPos>* local_90 = (vector<GeometryBatchVertexPos>*)&field_480;
        local_90->resize(uVar11);
        m_vertexDataBufferSkin->resize(uVar11);
        m_labelCount = 1;
        field_48.clear();
        m_boneCount = 1;
        field_88.clear();
        field_128.clear();
        if (uVar11 != 0) {
            if (vector31 == nullptr) {
                LogAssert("pVertexPosData != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          541, nullptr);
            }
            iVar10 = 1;
            uVar11 = 0;
            local_80 = vector2;
            local_78 = vector4;
            local_70 = vector32;
            vector3 = vector31;
            do {
                this_00 = (array<unsigned short, 2ul>*)(*local_a0._8_8_)[uVar11];
                pVVar8 = (Vector4T<float>*)(*local_90)[uVar11];
                *(uint16_t*)(pVVar8 + 12) = 0;
                pVVar8->SetXYZ(*vector3);
                pVVar3 = local_70;
                local_40 = (unsigned short*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar10);
                pVVar8 = local_78;
                uVar11 = local_48;
                if (vector32 != nullptr) {
                    sVar4 = eastl::min<signed char>('\x7f', (schar)(int)(*(float*)local_70 * 127.0));
                    aVar5 = (array<unsigned short, 2ul>)eastl::max<signed char>(-128, sVar4);
                    this_00[4] = aVar5;
                    sVar4 = eastl::min<signed char>('\x7f', (schar)(int)(*(float*)(pVVar3 + 4) * 127.0));
                    aVar5 = (array<unsigned short, 2ul>)eastl::max<signed char>(-128, sVar4);
                    this_00[5] = aVar5;
                    sVar4 = eastl::min<signed char>('\x7f', (schar)(int)(*(float*)(pVVar3 + 8) * 127.0));
                    aVar5 = (array<unsigned short, 2ul>)eastl::max<signed char>(-128, sVar4);
                    this_00[6] = aVar5;
                    local_70 = pVVar3 + local_48;
                    pVVar8 = local_78;
                    uVar11 = local_48;
                }
                local_78 = pVVar8;
                local_48 = uVar11;
                if (vector4 != nullptr) {
                    sVar4 = eastl::min<signed char>('\x7f', (schar)(int)(*(float*)pVVar8 * 127.0));
                    aVar5 = (array<unsigned short, 2ul>)eastl::max<signed char>(-128, sVar4);
                    this_00[8] = aVar5;
                    sVar4 = eastl::min<signed char>('\x7f', (schar)(int)(*(float*)(pVVar8 + 4) * 127.0));
                    aVar5 = (array<unsigned short, 2ul>)eastl::max<signed char>(-128, sVar4);
                    this_00[9] = aVar5;
                    sVar4 = eastl::min<signed char>('\x7f', (schar)(int)(*(float*)(pVVar8 + 8) * 127.0));
                    aVar5 = (array<unsigned short, 2ul>)eastl::max<signed char>(-128, sVar4);
                    this_00[10] = aVar5;
                    aVar5 = (array<unsigned short, 2ul>)127;
                    if (*(float*)(pVVar8 + 12) == 1.0) {
                        aVar5 = (array<unsigned short, 2ul>)0;
                    }
                    this_00[11] = aVar5;
                    local_78 = pVVar8 + uVar11;
                }
                pVVar2 = local_80;
                if (vector2 != nullptr) {
                    uVar6 = types::FloatToFloat16(*(float*)local_80);
                    puVar9 = (uint16_t*)(*this_00)[0];
                    *puVar9 = uVar6;
                    uVar6 = types::FloatToFloat16(*(float*)(pVVar2 + 4));
                    puVar9 = (uint16_t*)(*this_00)[1];
                    *puVar9 = uVar6;
                    local_80 = pVVar2 + local_48;
                    uVar11 = local_48;
                }
                vector3 = vector3 + uVar11;
                uVar11 = (unsigned long)local_40 & 4294967295;
                iVar10 = (int)local_40 + 1;
            } while (uVar11 < arg1);
        }
        return local_88 == 0;
    }

    // 0x100807890
    void GeometryBatch::BakeTile(unsigned int arg1, unsigned int arg2, unsigned char arg3, unsigned char arg4,
                                 unsigned char arg5, unsigned char arg6, unsigned char arg7, unsigned char arg8,
                                 unsigned char arg9) {
        unsigned char uVar1;
        unsigned short* puVar2;
        long lVar3;
        Layout* this_01;
        float* pfVar4;
        uint32_t in_register_00000081;
        uint32_t in_register_00000089;
        float fVar5;
        unsigned char local_38;
        unsigned char local_37;
        unsigned char local_36;
        unsigned char local_35[3];
        char local_32;
        unsigned char local_31;

        unsigned long arg1_00 = (unsigned long)arg1;
        vector<unsigned short>* this_00 = &field_216[0];
        if (arg1 < arg2) {
            local_32 = arg8 + 255;
            local_35[2] = arg9 + 255;
            do {
                puVar2 = (unsigned short*)(*this_00)[arg1_00];
                lVar3 = field_448[(unsigned long)*puVar2];
                puVar2 = (unsigned short*)(*this_00)[arg1_00];
                this_01 = &field_480[(unsigned long)*puVar2];
                pfVar4 = (float*)this_01->SSOBeginPtr();
                fVar5 = (float)::floor(
                    (*pfVar4 + (float)(((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4) * 128.0) * 0.0078125f);
                local_38 = (unsigned char)(int)fVar5;
                pfVar4 = (float*)this_01->second();
                fVar5 = (float)::floor(
                    (*pfVar4 + (float)(((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5) * 128.0) * 0.0078125f);
                local_37 = (unsigned char)(int)fVar5;
                *(unsigned char*)(lVar3 + 19) = arg3;
                local_36 = arg6 + local_32;
                uVar1 = math::Clamp<unsigned char>(local_38, arg6, local_36);
                *(unsigned char*)(lVar3 + 22) = uVar1;
                local_35[0] = arg7 + local_35[2];
                uVar1 = math::Clamp<unsigned char>(local_37, arg7, *local_35);
                *(unsigned char*)(lVar3 + 23) = uVar1;
                local_31 = '\0';
                local_35[1] = 63;
                uVar1 = math::Clamp<unsigned char>(*((lVar3 + 22)), local_31, *(local_35 + 1));
                *(unsigned char*)(lVar3 + 22) = uVar1;
                uVar1 = math::Clamp<unsigned char>(*((lVar3 + 23)), local_31, *(local_35 + 1));
                *(unsigned char*)(lVar3 + 23) = uVar1;
                arg1_00 = arg1_00 + 1;
            } while (arg2 != arg1_00);
        }
    }

    // 0x100807aa0
    void GeometryBatch::BakeTextureMeta(unsigned int arg1, unsigned int arg2,
                                        const ModelTextureMeta& modelTextureMeta) {
        unsigned short* puVar1;
        long lVar2;

        unsigned long arg1_00 = (unsigned long)arg1;
        vector<unsigned short>* this_00 = &field_216[0];
        if (arg1 < arg2) {
            do {
                puVar1 = (unsigned short*)(*this_00)[arg1_00];
                lVar2 = field_448[(unsigned long)*puVar1];
                *(uint16_t*)(lVar2 + 20) = *(uint16_t*)modelTextureMeta;
                arg1_00 = arg1_00 + 1;
            } while (arg2 != arg1_00);
        }
    }

    // 0x100807b20
    void GeometryBatch::BakeHSLColors(unsigned int arg1, unsigned int arg2, unsigned short arg3, unsigned int arg4,
                                      unsigned int arg5) {
        array<unsigned char, 4ul>* this_00;
        uint8_t uVar1;
        unsigned int arg1_00;
        uint32_t uVar2;
        vector<unsigned short>* this_01;
        unsigned short* puVar3;
        long lVar4;
        uint8_t* puVar5;
        unsigned long arg1_01;
        unsigned long arg1_02;
        array<unsigned char, 3ul>* this_02;

        if (m_faceHSLBaked == false) {
            this_01 = &field_216[0];
            if (arg1 < arg2) {
                arg1_02 = (unsigned long)arg1;
                do {
                    arg1_01 = (arg1_02 & 4294967295) / 3;
                    puVar3 = (unsigned short*)(*m_faceHSLBuffer)[arg1_01];
                    arg1_00 = math::RunetekColour::HSLToRGB(*puVar3);
                    uVar2 = math::ApplyOffsetToFaceColour(arg1_00, (unsigned int)arg3, arg4, arg5);
                    puVar3 = (unsigned short*)(*this_01)[arg1_02];
                    lVar4 = field_448[(unsigned long)*puVar3];
                    this_00 = (array<unsigned char, 4ul>*)(lVar4 + 12);
                    puVar5 = (uint8_t*)(*this_00)[0];
                    *puVar5 = (char)((unsigned int)uVar2 >> 16);
                    puVar5 = (uint8_t*)(*this_00)[1];
                    *puVar5 = (char)((unsigned int)uVar2 >> 8);
                    puVar5 = (uint8_t*)(*this_00)[2];
                    *puVar5 = (char)uVar2;
                    this_02 = (array<unsigned char, 3ul>*)(lVar4 + 16);
                    puVar5 = (uint8_t*)(*this_02)[0];
                    *puVar5 = (char)(arg1_00 >> 16);
                    puVar5 = (uint8_t*)(*this_02)[1];
                    *puVar5 = (char)(arg1_00 >> 8);
                    puVar5 = (uint8_t*)(*this_02)[2];
                    *puVar5 = (char)arg1_00;
                    puVar5 = (uint8_t*)(*m_faceTransparencyBuffer)[arg1_01];
                    uVar1 = *puVar5;
                    puVar5 = (uint8_t*)(*this_00)[3];
                    *puVar5 = uVar1;
                    arg1_02 = arg1_02 + 1;
                } while (arg2 != arg1_02);
            }
        }
    }

    // 0x100807cd0
    void GeometryBatch::BakeBatchFlags(unsigned char arg1) {
        long lVar1 = field_448.HeapBeginPtr();
        long lVar2 = field_448.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            *(unsigned char*)(lVar1 + 7) = arg1;
        }
    }

    // 0x100807d20
    void GeometryBatch::BakeShareLightNormals(
        const eastl::fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true,
                                    eastl::hash<math::Vector3T<float>>, eastl::equal_to<math::Vector3T<float>>, false,
                                    BucketAllocatorEASTL>& fixed_hash_map) {
        unsigned short uVar1;
        vector<game::MapSquare::MapSquarePos>* this_00;
        unsigned short* puVar5;
        long lVar6;
        long lVar7;
        uint8_t* puVar8;
        char* pcVar9;
        GeometryBatchVertex* this_01;
        Vector3T<float>* vector3;
        unsigned int uVar10;
        int iVar11;
        unsigned long uVar12;
        uint8_t auVar13[16];
        uint8_t local_98[16];
        uint8_t local_60[16];
        unsigned long local_50;

        vector<GeometryBatchVertex>* local_38 = (vector<GeometryBatchVertex>*)&field_448;
        unsigned long uVar4 = local_38->size();
        local_60._0_8_ = local_60._0_8_ & 18446744073709551360;
        Array<bool, BucketAllocatorEASTL> local_78(uVar4, *local_60);
        GeometryBatch* local_40 = this;
        vector<game::MapSquare::MapSquarePos>* local_88 = &field_216[0];
        unsigned long local_80 = local_88->size();
        if (local_80 != 0) {
            uVar12 = 1;
            uVar4 = 0;
            do {
                this_00 = local_88;
                puVar5 = (unsigned short*)(*local_88)[uVar4];
                uVar4 = (unsigned long)*puVar5;
                iVar11 = (int)uVar12;
                puVar5 = (unsigned short*)(*this_00)[uVar12];
                uVar1 = *puVar5;
                puVar5 = (unsigned short*)(*this_00)[(unsigned long)(iVar11 + 1)];
                local_50 = (unsigned long)*puVar5;
                lVar6 = (*local_38)[uVar4];
                lVar7 = (*local_38)[(unsigned long)uVar1];
                if ((*((lVar6 + 4))) == (*((lVar7 + 4)))) {
                    lVar6 = (*local_38)[uVar4];
                    lVar7 = (*local_38)[local_50];
                    if ((*((lVar6 + 4))) == (*((lVar7 + 4)))) {
                        puVar8 = &local_78[uVar4];
                        *puVar8 = 1;
                        puVar8 = &local_78[(unsigned long)uVar1];
                        *puVar8 = 1;
                        puVar8 = &local_78[local_50];
                        *puVar8 = 1;
                    }
                }
                uVar4 = (unsigned long)(iVar11 + 2);
                uVar12 = (unsigned long)(iVar11 + 3);
            } while (uVar4 < local_80);
        }
        local_60 = fixed_hash_map.end();
        uVar4 = local_38->size();
        if (uVar4 != 0) {
            local_40 = (GeometryBatch*)&local_40->field_480;
            uVar10 = 1;
            uVar12 = 0;
            do {
                pcVar9 = &local_78[uVar12];
                if (*pcVar9 == '\0') {
                    this_01 = (GeometryBatchVertex*)(*local_38)[uVar12];
                    vector3 = (Vector3T<float>*)(*local_40)[uVar12];
                    auVar13 = fixed_hash_map.find(*vector3);
                    local_98 = auVar13;
                    if (*local_98 != *local_60 != '\0') {
                        lVar6 = local_98->HeapBeginPtr();
                        if (1 < *(unsigned int*)(lVar6 + 12)) {
                            if ((*((lVar6 + 16))) != *PTR_ZERO_100ee66e8) {
                                this_01->SetNormal(*((lVar6 + 16)));
                            }
                        }
                    }
                }
                uVar12 = (unsigned long)uVar10;
                uVar10 = uVar10 + 1;
            } while (uVar12 < uVar4);
        }
    }

    // 0x1008080a0
    void GeometryBatch::SortSections(
        const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections1,
        const eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>& sourceModelExternalIndexSections2,
        const eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL>&
            multimap) {
        uint32_t uVar1;
        uint32_t uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL>* pmVar5;
        Layout* pLVar6;
        vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>* this_00;
        array<eastl::vector<unsigned short>, 5ul>* paVar7;
        vector<game::MapSquare::MapSquarePos>* this_01;
        unsigned long uVar9;
        short* psVar10;
        long lVar11;
        long lVar12;
        unsigned int* puVar13;
        short* psVar14;
        long lVar15;
        unsigned char* arg1;
        GeometryBatchVertex* geometryBatchVertex1;
        GeometryBatchVertexPos* geometryBatchVertexPos1;
        GeometryBatchVertexSkin* geometryBatchVertexSkin1;
        vector<unsigned short>* this_02;
        unsigned short* puVar16;
        uint8_t* this_03;
        unsigned long uVar17;
        unsigned long arg1_00;
        unsigned long uVar18;
        uint64_t local_320[64];
        vector<GeometryBatchVertex> local_120;
        vector<GeometryBatchVertexPos> local_100;
        vector<GeometryBatchVertexSkin> local_e0;
        uint64_t local_c0[4];
        uint64_t local_a0[4];
        Layout* local_70;
        Layout* local_68;
        uint64_t local_60;
        unsigned short* local_58;
        array<eastl::vector<unsigned short>, 5ul>* local_48;
        Layout* local_40;
        GeometryBatch* local_38;

        vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>* local_50 = sourceModelExternalIndexSections2;
        bool cVar8 = CanSkipSortSections(sourceModelExternalIndexSections1, multimap);
        if (!cVar8) {
            local_38 = this;
            if (m_numLods != 0) {
                local_48 = (array<eastl::vector<unsigned short>, 5ul>*)&field_216;
                uVar18 = 0;
                do {
                    this_01 = (vector<game::MapSquare::MapSquarePos>*)(*local_48)[uVar18];
                    new (local_320) eastl::vector<unsigned short>();
                    uVar9 = this_01->size();
                    local_320->resize_uninitialized(uVar9);
                    psVar10 = (short*)(*local_320)[0];
                    pmVar5 = multimap;
                    local_a0[0] = multimap.begin();
                    local_c0[0] = pmVar5->end();
                    local_58 = nullptr;
                    local_40 = (Layout*)uVar18;
                    while (true) {
                        pLVar6 = local_40;
                        cVar8 = *local_a0 != *local_c0;
                        if (!cVar8)
                            break;
                        lVar11 = **local_a0;
                        lVar11 = sourceModelExternalIndexSections1[*(unsigned long*)(lVar11 + 8)];
                        lVar12 = (*local_50)[(unsigned long)local_58];
                        puVar13 = (unsigned int*)(*((lVar11 + 20)))[(unsigned long)pLVar6];
                        uVar18 = (unsigned long)*puVar13;
                        if (*puVar13 < puVar13[1]) {
                            uVar1 = *(uint32_t*)(lVar12 + 60);
                            uVar2 = *(uint32_t*)(lVar11 + 60);
                            do {
                                psVar14 = (short*)(*this_01)[uVar18];
                                *psVar10 = *psVar14 + ((short)uVar1 - (short)uVar2);
                                psVar10 = psVar10 + 1;
                                uVar18 = uVar18 + 1;
                            } while (uVar18 < puVar13[1]);
                        }
                        local_58 = (unsigned short*)((long)local_58 + 1);
                        ++*local_a0;
                    }
                    this_01->swap(*local_320);
                    uVar18 = (long)pLVar6 + 1;
                } while (uVar18 < local_38->m_numLods);
            }
            new (local_a0) eastl::vector<unsigned short>();
            new (local_c0) eastl::vector<unsigned char>();
            local_120 = eastl::vector<GeometryBatchVertex>();
            local_100 = eastl::vector<GeometryBatchVertexPos>();
            local_e0 = eastl::vector<GeometryBatchVertexSkin>();
            local_50 = (vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>*)local_38->m_faceHSLBuffer;
            uVar18 = local_50->size();
            local_a0->reserve(uVar18);
            local_48 = (array<eastl::vector<unsigned short>, 5ul>*)local_38->m_faceTransparencyBuffer;
            uVar18 = local_48->size();
            local_c0->reserve(uVar18);
            local_70 = (Layout*)&local_38->field_448;
            uVar18 = local_70->size();
            local_120.reserve(uVar18);
            local_40 = (Layout*)&local_38->field_480;
            uVar18 = local_40->size();
            local_100.reserve(uVar18);
            local_68 = (Layout*)local_38->m_vertexDataBufferSkin;
            uVar18 = local_68->size();
            local_e0.reserve(uVar18);
            pmVar5 = multimap;
            local_320[0] = multimap.begin();
            local_60 = pmVar5->end();
            while (true) {
                cVar8 = *local_320 != local_60;
                if (!cVar8)
                    break;
                lVar11 = **local_320;
                lVar11 = sourceModelExternalIndexSections1[*(unsigned long*)(lVar11 + 8)];
                puVar13 = (unsigned int*)(*((lVar11 + 20)))[0];
                uVar3 = *puVar13;
                uVar4 = puVar13[1];
                local_58 = (unsigned short*)local_a0->end();
                this_00 = local_50;
                lVar12 = local_50->HeapBeginPtr();
                lVar15 = this_00->HeapBeginPtr();
                local_a0->insert<unsigned short*>(local_58, (unsigned short*)(lVar12 + ((unsigned long)uVar3 / 3) * 2),
                                                  (unsigned short*)(lVar15 + ((unsigned long)uVar4 / 3) * 2));
                arg1 = (unsigned char*)local_c0->end();
                paVar7 = local_48;
                lVar12 = local_48->HeapBeginPtr();
                lVar15 = paVar7->HeapBeginPtr();
                local_c0->insert<unsigned char*>(arg1, (unsigned char*)((unsigned long)uVar3 / 3 + lVar12),
                                                 (unsigned char*)((unsigned long)uVar4 / 3 + lVar15));
                geometryBatchVertex1 = (GeometryBatchVertex*)local_120.end();
                pLVar6 = local_70;
                lVar12 = local_70->HeapBeginPtr();
                uVar3 = *(unsigned int*)(lVar11 + 60);
                lVar15 = pLVar6->HeapBeginPtr();
                local_120.insert<GeometryBatchVertex*>(
                    geometryBatchVertex1, (GeometryBatchVertex*)(lVar12 + (unsigned long)uVar3 * 24),
                    (GeometryBatchVertex*)(lVar15 + (unsigned long)*(unsigned int*)(lVar11 + 64) * 24));
                geometryBatchVertexPos1 = (GeometryBatchVertexPos*)local_100.end();
                pLVar6 = local_40;
                lVar12 = local_40->HeapBeginPtr();
                uVar3 = *(unsigned int*)(lVar11 + 60);
                lVar15 = pLVar6->HeapBeginPtr();
                local_100.insert<GeometryBatchVertexPos*>(
                    geometryBatchVertexPos1, (GeometryBatchVertexPos*)((unsigned long)uVar3 * 16 + lVar12),
                    (GeometryBatchVertexPos*)((unsigned long)*(unsigned int*)(lVar11 + 64) * 16 + lVar15));
                geometryBatchVertexSkin1 = (GeometryBatchVertexSkin*)local_e0.end();
                pLVar6 = local_68;
                lVar12 = local_68->HeapBeginPtr();
                uVar3 = *(unsigned int*)(lVar11 + 60);
                lVar15 = pLVar6->HeapBeginPtr();
                local_e0.insert<GeometryBatchVertexSkin*>(
                    geometryBatchVertexSkin1, (GeometryBatchVertexSkin*)(lVar12 + (unsigned long)uVar3 * 8),
                    (GeometryBatchVertexSkin*)(lVar15 + (unsigned long)*(unsigned int*)(lVar11 + 64) * 8));
                ++*local_320;
            }
            lVar11 = local_50->size();
            lVar12 = local_a0->size();
            paVar7 = local_48;
            if (lVar11 != lVar12) {
                LogAssert("m_faceHSL.size() == newfaceHSL.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          799, nullptr);
            }
            lVar11 = local_48->size();
            lVar12 = paVar7->size();
            pLVar6 = local_70;
            if (lVar11 != lVar12) {
                LogAssert("m_faceTransparency.size() == m_faceTransparency.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          800, nullptr);
            }
            lVar11 = local_70->size();
            lVar12 = pLVar6->size();
            pLVar6 = local_40;
            if (lVar11 != lVar12) {
                LogAssert("m_vertexDataBuffer.size() == m_vertexDataBuffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          801, nullptr);
            }
            lVar11 = local_40->size();
            lVar12 = pLVar6->size();
            pLVar6 = local_68;
            if (lVar11 != lVar12) {
                LogAssert("m_vertexDataBufferPos.size() == m_vertexDataBufferPos.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          802, nullptr);
            }
            lVar11 = local_68->size();
            lVar12 = pLVar6->size();
            if (lVar11 != lVar12) {
                LogAssert("m_vertexDataBufferSkin.size() == m_vertexDataBufferSkin.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          803, nullptr);
            }
            local_50->swap(*local_a0);
            local_48->swap(*local_c0);
            local_70->swap(local_120);
            local_40->swap(local_100);
            local_68->swap(local_e0);
            this_03 = &local_38->field_128;
            cVar8 = this_03->empty();
            if (!cVar8) {
                local_38 = (GeometryBatch*)this_03;
                this_03->clear();
                uVar18 = local_40->size();
                if (65535 < uVar18) {
                    LogAssert("m_vertexDataBufferPos.size() <= std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              815, nullptr);
                }
                uVar18 = local_40->size();
                ___bzero(local_320);
                if (uVar18 != 0) {
                    uVar9 = 1;
                    arg1_00 = 0;
                    do {
                        uVar17 = uVar9;
                        lVar11 = (*local_40)[arg1_00];
                        psVar10 = (short*)(*local_320)[(unsigned long)*(uint8_t*)(lVar11 + 12)];
                        *psVar10 = *psVar10 + 1;
                        uVar9 = (unsigned long)((int)uVar17 + 1);
                        arg1_00 = uVar17;
                    } while (uVar17 < uVar18);
                }
                if (uVar18 != 0) {
                    uVar9 = 0;
                    do {
                        lVar11 = (*local_40)[uVar9];
                        local_60._0_2_ = (unsigned short)*(uint8_t*)(lVar11 + 12);
                        this_02 = (vector<unsigned short>*)(*local_38)[local_60];
                        puVar16 = (unsigned short*)(*local_320)[(unsigned long)*(uint8_t*)(lVar11 + 12)];
                        this_02->reserve((unsigned long)*puVar16);
                        local_60 = (((uint64_t)local_60._2_6_ << 16) | (uint16_t)((short)uVar9));
                        this_02->push_back(local_60);
                        uVar9 = uVar9 + 1;
                    } while (uVar18 != uVar9);
                }
            }
        }
    }

    // 0x100808890
    bool GeometryBatch::CanSkipSortSections(
        const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections,
        const eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL>& multimap)
        const {
        int iVar3;
        int local_34;

        uint32_t uVar1 = helpers::CheckSortSectionsContiguous(sourceModelExternalIndexSections, multimap);
        if ((char)uVar1 == '\0') {
            return uVar1;
        }
        long lVar4 = (multimap.rbegin()).operator->();
        lVar4 = sourceModelExternalIndexSections[*(unsigned long*)(lVar4 + 8)];
        long lVar5 = (*((lVar4 + 20)))[0];
        unsigned int uVar8 = *(unsigned int*)(lVar5 + 4) / 3;
        unsigned int uVar2 = m_faceHSLBuffer->size();
        if (uVar8 == uVar2) {
            local_34 = *(int*)(lVar4 + 64);
            iVar3 = field_448.size();
            if (local_34 == iVar3) {
                return uVar1;
            }
        }
        unsigned long uVar6 = m_faceHSLBuffer->size();
        uVar2 = *(unsigned int*)(lVar4 + 64);
        uint64_t uVar7 = field_448.size();
        LogAssert("((numContiguousFaces == (uint)m_faceHSL.size()) && (lastIndexSection.m_vertexEnd == "
                  "(uint)m_vertexDataBuffer.size()))",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                  "GeometryBatch.cpp",
                  1619,
                  "Determined sort sections are contiguous, however the data length differs (%u vs %u faces / %u vs %u "
                  "vertices)",
                  (unsigned long)uVar8, uVar6 & 4294967295, (unsigned long)uVar2, uVar7);
    }

    // 0x100808ad0
    void GeometryBatch::CreateSecondaryVertexBuffers() {
        float* arg2;
        Vector3T<float>* vector3;
        GeometryBatchVertexPosLP* this_02;
        unsigned long arg1_01;
        uint32_t uVar3;
        float fVar4;
        uint64_t local_40;
        float local_38;
        float local_34;

        if (!(IsValid())) {
            if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)field_216[0])->empty())) {
                LogAssert("m_aabb.IsValid() || m_vertexIndexBuffers[0].empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          839, nullptr);
            }
        }
        if (VertexBuffersInitialised()) {
            LogAssert("!VertexBuffersInitialised()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      840, nullptr);
        }
        auto pfVar2 = SSOBeginPtr();
        auto arg1 = GetScreen();
        if (((((*pfVar2 < -32768.0) || (32767.0 < *pfVar2)) || (pfVar2[1] < -32768.0)) ||
             ((((32767.0 < pfVar2[1] || (pfVar2[2] < -32768.0)) ||
                ((32767.0 < pfVar2[2] || ((*arg1 < -32768.0 || (32767.0 < *arg1)))))) ||
               (arg1[1] < -32768.0)))) ||
            (((32767.0 < arg1[1] || (fVar4 = arg1[2], fVar4 < -32768.0)) || (32767.0 < fVar4)))) {
            arg2 = std::min<float>(*(pfVar2 + 1), *(pfVar2 + 2));
            pfVar2 = std::min<float>(*pfVar2, *arg2);
            uVar3 = ::abs(*pfVar2);
            local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar3);
            pfVar2 = std::max<float>(*(arg1 + 1), *(arg1 + 2));
            pfVar2 = std::max<float>(*arg1, *pfVar2);
            pfVar2 = std::max<float>(local_40, *pfVar2);
            fVar4 = 32767.0 / *pfVar2;
            m_vertexScale = 1.0 / fVar4;
            local_34 = fVar4;
        } else {
            local_34 = 1.0;
        }
        uint8_t* this_00 = &field_480;
        unsigned long arg1_00 = this_00->size();
        if (arg1_00 == 0) {
            LogAssert("vertexDataBufferSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      862, nullptr);
        }
        field_512.set_max_size(arg1_00, 4);
        if (arg1_00 != 0) {
            arg1_01 = 0;
            do {
                vector3 = (Vector3T<float>*)(*this_00)[arg1_01];
                this_02 = &field_512[arg1_01];
                local_40 = *local_34 * *vector3;
                local_38 = fVar4;
                this_02->SetPosition(local_40);
                *(Vector3T<float>*)&this_02->field_6 = vector3[12];
                *(Vector3T<float>*)((long)&this_02->field_6 + 1) = vector3[13];
                arg1_01 = arg1_01 + 1;
            } while (arg1_00 != arg1_01);
        }
        this_00->set_capacity(0);
    }

    // 0x100809030
    void GeometryBatch::DestroyCPUBuffers() {
        if (IsHidden() == '\0') {
            LogAssert("IsHidden()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      882, nullptr);
        }
        unsigned long arg1 = 0;
        field_448.set_capacity(0);
        field_480.set_capacity(0);
        field_512.set_max_size(0, 0);
        m_vertexDataBufferSkin->set_capacity(0);
        do {
            ((vector<unsigned short>*)field_216[arg1])->set_capacity(0);
            arg1 = arg1 + 1;
        } while (arg1 != 5);
    }

    // 0x1008092a0
    void GeometryBatch::Reserve(const GeometryBatchCombineHelper& geometryBatchCombineHelper) {
        unsigned int uVar1;

        vector<unsigned short>* this_00 =
            (vector<unsigned short>*)std::array<eastl::vector<unsigned short>, 5ul>::begin();
        vector<unsigned short>* pvVar2 = (vector<unsigned short>*)std::array<eastl::vector<unsigned short>, 5ul>::end();
        for (; this_00 != pvVar2; this_00 = this_00 + 32) {
            uVar1 = geometryBatchCombineHelper.GetLevel();
            this_00->reserve((unsigned long)uVar1);
        }
        uVar1 = geometryBatchCombineHelper.GetLevel();
        m_faceHSLBuffer->reserve((unsigned long)uVar1 / 3);
        uVar1 = geometryBatchCombineHelper.GetLevel();
        m_faceTransparencyBuffer->reserve((unsigned long)uVar1 / 3);
        uVar1 = geometryBatchCombineHelper.GetMaxLineWidth();
        field_448.reserve((unsigned long)uVar1);
        uVar1 = geometryBatchCombineHelper.GetMaxLineWidth();
        field_480.reserve((unsigned long)uVar1);
        uVar1 = geometryBatchCombineHelper.GetMaxLineWidth();
        m_vertexDataBufferSkin->reserve((unsigned long)uVar1);
    }

    // 0x1008093d0
    void GeometryBatch::Assign(const GeometryBatch& geometryBatch) {
        if (this != geometryBatch) {
            DestroyRenderingResources();
            *this = geometryBatch;
            m_transformed = geometryBatch.m_transformed;
            field_35 = geometryBatch.field_35;
            m_hasFaceTransparency = geometryBatch.m_hasFaceTransparency;
            m_shareLight = geometryBatch.m_shareLight;
            m_hidden = geometryBatch.m_hidden;
            m_labelCount = geometryBatch.m_labelCount;
            field_48 = geometryBatch.field_48;
            m_boneCount = geometryBatch.m_boneCount;
            field_88 = geometryBatch.field_88;
            field_128 = geometryBatch.field_128;
            m_numLods = geometryBatch.m_numLods;
            field_216 = geometryBatch.field_216;
            *m_faceHSLBuffer = geometryBatch.m_faceHSLBuffer;
            *m_faceTransparencyBuffer = geometryBatch.m_faceTransparencyBuffer;
            field_448 = geometryBatch.field_448;
            field_480 = geometryBatch.field_480;
            field_512 = geometryBatch.field_512;
        }
    }

    // 0x1008096a0
    void GeometryBatch::Append(const GeometryBatch& geometryBatch, bool arg2) {
        array<eastl::vector<unsigned short>, 5ul>* arg1;
        short sVar1;
        uint16_t uVar2;
        uint8_t* puVar3;
        GeometryBatchInstance* pGVar4;
        GeometryBatch* pGVar5;
        bool cVar6;
        uint8_t uVar7;
        uint8_t bVar8;
        uint32_t uVar9;
        AABB* pAVar10;
        unsigned long uVar11;
        unsigned int* puVar12;
        GeometryBatchVertexPos* pGVar13;
        vector<game::MapSquare::MapSquarePos>* this_00;
        long lVar14;
        long lVar15;
        unsigned long uVar16;
        short* psVar17;
        unsigned short* puVar18;
        unsigned short* puVar19;
        unsigned char* arg2_00;
        unsigned char* arg3;
        GeometryBatchVertex* pGVar20;
        GeometryBatchVertex* geometryBatchVertex3;
        GeometryBatchVertexPos* geometryBatchVertexPos3;
        GeometryBatchVertexSkin* geometryBatchVertexSkin1;
        GeometryBatchVertexSkin* geometryBatchVertexSkin2;
        GeometryBatchVertexSkin* geometryBatchVertexSkin3;
        vector<unsigned int>* pvVar21;
        Layout* pLVar22;
        long lVar23;
        long lVar24;
        uint8_t* puVar25;
        char* pcVar26;
        vector<unsigned short>* this_01;
        Vector4T<unsigned char>* this_02;
        uint8_t* pbVar27;
        uint64_t in_register_00000011;
        unsigned int uVar28;
        unsigned long uVar29;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar30;
        array<unsigned short, 256ul> local_348;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL> local_148;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL> local_128;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL> local_108;
        uint8_t* local_e8;
        unsigned long local_e0;
        unsigned long local_d8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_d0;
        array<eastl::vector<unsigned short>, 5ul>* local_c8;
        array<eastl::vector<unsigned short>, 5ul>* local_c0;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_b8;
        unsigned long local_b0;
        GeometryBatchInstance* local_a8;
        Layout* local_a0;
        GeometryBatch* local_98;
        unsigned long local_90;
        GeometryBatchVertex* local_88;
        unsigned short local_7a;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;
        uint64_t local_48;

        if (this != geometryBatch) {
            local_b8 = (vector<oldscape::dash3d::EntityHighlight*,
                               BucketAllocatorEASTL>*)(((uint64_t)local_b8._4_4_ << 32) |
                                                       (uint32_t)((int)(((uint64_t)in_register_00000011 << 8) |
                                                                        (uint8_t)arg2)));
            puVar25 = &field_448;
            cVar6 = puVar25->empty();
            if ((cVar6) || (cVar6 = field_480.empty(), cVar6)) {
                LogAssert("!m_vertexDataBuffer.empty() && !m_vertexDataBufferPos.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          948, nullptr);
            }
            DestroyRenderingResources();
            pAVar10 = (AABB*)geometryBatch.SSOBeginPtr();
            cVar6 = pAVar10->IsValid();
            if (cVar6) {
                pAVar10 = (AABB*)geometryBatch.SSOBeginPtr();
                Union(*pAVar10);
            }
            m_transformed = (bool)(m_transformed | geometryBatch.m_transformed);
            uVar11 = puVar25->size();
            if (65534 < uVar11) {
                LogAssert("m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          958, nullptr);
            }
            local_d8 = puVar25->size();
            local_a0 = (Layout*)&m_numLods;
            local_a8 = (GeometryBatchInstance*)geometryBatch;
            puVar12 = std::min<unsigned int>(*local_a0, geometryBatch.m_numLods);
            uVar28 = *puVar12;
            m_numLods = uVar28;
            if (uVar28 == 0) {
                LogAssert("m_numLods > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          961, nullptr);
            }
            local_d0 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar25;
            local_98 = this;
            if (m_numLods != 0) {
                local_c8 = (array<eastl::vector<unsigned short>, 5ul>*)&field_216;
                local_c0 = (array<eastl::vector<unsigned short>, 5ul>*)(local_a8->m_material + 168);
                uVar11 = 0;
                do {
                    pGVar13 = (GeometryBatchVertexPos*)(*local_c8)[uVar11];
                    local_b0 = uVar11;
                    this_00 = (vector<game::MapSquare::MapSquarePos>*)(*local_c0)[uVar11];
                    local_90 = pGVar13->size();
                    lVar14 = pGVar13->size();
                    lVar15 = this_00->size();
                    local_88 = (GeometryBatchVertex*)pGVar13;
                    pGVar13->resize_uninitialized(lVar14 + lVar15);
                    uVar16 = this_00->size();
                    uVar11 = local_d8;
                    if (uVar16 != 0) {
                        uVar29 = 0;
                        do {
                            psVar17 = (short*)(*this_00)[uVar29];
                            sVar1 = *psVar17;
                            psVar17 = (short*)(*local_88)[local_90 + uVar29];
                            *psVar17 = sVar1 + (short)uVar11;
                            uVar29 = uVar29 + 1;
                        } while (uVar16 != uVar29);
                    }
                    uVar11 = local_b0 + 1;
                } while (uVar11 < *(unsigned int*)local_a0);
            }
            pGVar5 = local_98;
            puVar25 = local_98->m_faceHSLBuffer;
            local_88 = (GeometryBatchVertex*)puVar25->end();
            pGVar4 = local_a8;
            puVar3 = local_a8->m_material;
            puVar18 = (unsigned short*)((puVar3 + 328))->HeapBeginPtr();
            puVar19 = (unsigned short*)((puVar3 + 328))->end();
            puVar25->insert<unsigned short const*>(local_88, puVar18, puVar19);
            local_88 = (GeometryBatchVertex*)pGVar5->m_faceTransparencyBuffer->end();
            arg2_00 = (unsigned char*)((pGVar4->m_material + 368))->HeapBeginPtr();
            arg3 = (unsigned char*)((pGVar4->m_material + 368))->end();
            pGVar5->m_faceTransparencyBuffer->insert<unsigned char const*>(local_88, arg2_00, arg3);
            pvVar30 = local_d0;
            pGVar5->field_35 = pGVar5->field_35 | pGVar4->field_24[11];
            pGVar5->m_hasFaceTransparency = pGVar5->m_hasFaceTransparency | pGVar4->field_24[12];
            pGVar5->m_shareLight = (bool)(pGVar5->m_shareLight | pGVar4->field_24[13]);
            local_88 = (GeometryBatchVertex*)local_d0->end();
            pLVar22 = (Layout*)(pGVar4->m_material + 400);
            pGVar20 = (GeometryBatchVertex*)pLVar22->HeapBeginPtr();
            local_a0 = pLVar22;
            geometryBatchVertex3 = (GeometryBatchVertex*)pLVar22->end();
            pvVar30->insert<GeometryBatchVertex const*>(local_88, pGVar20, geometryBatchVertex3);
            puVar25 = &pGVar5->field_480;
            local_88 = (GeometryBatchVertex*)puVar25->end();
            pGVar13 = (GeometryBatchVertexPos*)((pGVar4->m_material + 432))->HeapBeginPtr();
            geometryBatchVertexPos3 = (GeometryBatchVertexPos*)((pGVar4->m_material + 432))->end();
            local_c8 = (array<eastl::vector<unsigned short>, 5ul>*)puVar25;
            puVar25->insert<GeometryBatchVertexPos const*>(local_88, pGVar13, geometryBatchVertexPos3);
            puVar25 = pGVar5->m_vertexDataBufferSkin;
            geometryBatchVertexSkin1 = (GeometryBatchVertexSkin*)puVar25->end();
            geometryBatchVertexSkin2 = (GeometryBatchVertexSkin*)((pGVar4->m_material + 488))->HeapBeginPtr();
            geometryBatchVertexSkin3 = (GeometryBatchVertexSkin*)((pGVar4->m_material + 488))->end();
            local_d0 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar25;
            puVar25->insert<GeometryBatchVertexSkin const*>(geometryBatchVertexSkin1, geometryBatchVertexSkin2,
                                                            geometryBatchVertexSkin3);
            local_148 =
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL>();
            pvVar21 = (vector<unsigned int>*)pGVar4->GetMaterial();
            uVar11 = pvVar21->size();
            local_148.reserve(uVar11);
            local_128 =
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL>();
            pvVar21 = (vector<unsigned int>*)GetBoneIDMap((GeometryBatch*)pGVar4);
            uVar11 = pvVar21->size();
            local_128.reserve(uVar11);
            pGVar5 = local_98;
            uVar11 = local_d8;
            local_108 =
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL>();
            pvVar21 = (vector<unsigned int>*)GetJointIDMap((GeometryBatch*)pGVar4);
            uVar16 = pvVar21->size();
            local_108.reserve(uVar16);
            if ((char)local_b8 == '\0') {
                pGVar5->m_labelCount = 1;
                pGVar5->field_48.clear();
                pGVar5->m_boneCount = 1;
                pGVar5->field_88.clear();
                pGVar5->field_128.clear();
                pGVar5->field_33 = 0;
                pGVar5->field_168.clear();
            } else {
                pLVar22 = (Layout*)pGVar4->GetMaterial();
                puVar18 = (unsigned short*)pLVar22->HeapBeginPtr();
                puVar19 = (unsigned short*)pLVar22->end();
                if (puVar18 != puVar19) {
                    do {
                        local_148.emplace<unsigned short const&, unsigned short const&>(*(puVar18 + 1), *puVar18);
                        puVar18 = puVar18 + 2;
                    } while (puVar18 != puVar19);
                }
                pLVar22 = (Layout*)GetBoneIDMap((GeometryBatch*)pGVar4);
                puVar18 = (unsigned short*)pLVar22->HeapBeginPtr();
                puVar19 = (unsigned short*)pLVar22->end();
                if (puVar18 != puVar19) {
                    do {
                        local_128.emplace<unsigned short const&, unsigned short const&>(*(puVar18 + 1), *puVar18);
                        puVar18 = puVar18 + 2;
                    } while (puVar18 != puVar19);
                }
                pLVar22 = (Layout*)GetJointIDMap((GeometryBatch*)pGVar4);
                puVar18 = (unsigned short*)pLVar22->HeapBeginPtr();
                puVar19 = (unsigned short*)pLVar22->end();
                if (puVar18 != puVar19) {
                    do {
                        local_108.emplace<unsigned short const&, unsigned short const&>(*(puVar18 + 1), *puVar18);
                        puVar18 = puVar18 + 2;
                    } while (puVar18 != puVar19);
                }
                uVar9 = GetLabelCount((GeometryBatch*)pGVar4);
                local_b0 = (((uint64_t)local_b0._4_4_ << 32) | (uint32_t)uVar9);
                uVar7 = HasBones((GeometryBatch*)pGVar4);
                local_90 = (((uint64_t)local_90._1_7_ << 8) | (uint8_t)uVar7);
                uVar16 = local_a0->size();
                if (65534 < uVar16) {
                    LogAssert("other.m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              1015, nullptr);
                }
                local_58 = 0;
                uStack_50 = 0;
                local_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                local_48 = 0;
                ___bzero(&local_348, 512);
                local_c0 = (array<eastl::vector<unsigned short>, 5ul>*)(uVar11 & 65535);
                local_88 = (GeometryBatchVertex*)&local_98->m_boneCount;
                lVar14 = local_a0->size();
                if (lVar14 != 0) {
                    pvVar30 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_98->field_48;
                    local_e8 = &local_98->m_labelCount;
                    local_a8 = (GeometryBatchInstance*)&local_98->field_88;
                    local_e0 = 0;
                    uVar11 = 0;
                    local_b8 = pvVar30;
                    do {
                        lVar14 = (*local_c8)[(unsigned long)(local_c0 + uVar11)];
                        bVar8 = *(uint8_t*)(lVar14 + 13);
                        *(uint8_t*)(lVar14 + 13) = 0;
                        if ((1 < (unsigned int)local_b0) && (bVar8 != 0)) {
                            local_7a = (unsigned short)bVar8;
                            lVar15 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                       BucketAllocatorEASTL>::find(local_148);
                            lVar23 = local_148.end();
                            if (lVar15 != lVar23) {
                                lVar23 = eastl::vector_map<unsigned short, unsigned short>::find(*pvVar30);
                                lVar24 = pvVar30->end();
                                if (lVar23 == lVar24) {
                                    pvVar30->emplace<unsigned short&, unsigned char&>(*((lVar15 + 2)), *local_e8);
                                    bVar8 = *local_e8;
                                    *(uint8_t*)(lVar14 + 13) = bVar8;
                                    bVar8 = bVar8 + 1;
                                    *local_e8 = bVar8;
                                    if (32 < bVar8) {
                                        LogAssert("m_labelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1039, nullptr);
                                    }
                                } else {
                                    *(uint8_t*)(lVar14 + 13) = *(uint8_t*)(lVar23 + 2);
                                }
                            }
                        }
                        bVar8 = *(uint8_t*)(lVar14 + 12);
                        *(uint8_t*)(lVar14 + 12) = 0;
                        if ((bVar8 != 0 & (uint8_t)local_90) == 1) {
                            local_7a = (unsigned short)bVar8;
                            lVar15 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                       BucketAllocatorEASTL>::find(local_128);
                            lVar23 = local_128.end();
                            pGVar4 = local_a8;
                            if (lVar15 != lVar23) {
                                lVar23 = eastl::vector_map<unsigned short, unsigned short>::find(*local_a8);
                                lVar24 = pGVar4->end();
                                if (lVar23 == lVar24) {
                                    pGVar4->emplace<unsigned short&, unsigned char&>(*((lVar15 + 2)), *local_88);
                                    pGVar20 = local_88;
                                    bVar8 = *(uint8_t*)&local_88->field_0;
                                    puVar25 = &0 [(unsigned long)bVar8];
                                    *puVar25 = 1;
                                    *(uint8_t*)(lVar14 + 12) = bVar8;
                                    *(uint8_t*)&pGVar20->field_0 = bVar8 + 1;
                                    uVar29 = (unsigned long)((int)local_e0 + 1);
                                    uVar16 = local_128.size();
                                    local_e0 = uVar29;
                                    if (uVar16 < uVar29) {
                                        LogAssert("bonesGenerated <= gbRevBoneIDMap.size()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1064, nullptr);
                                    }
                                    if (56 < *(uint8_t*)&local_88->field_0) {
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1065, nullptr);
                                    }
                                } else {
                                    *(uint8_t*)(lVar14 + 12) = *(uint8_t*)(lVar23 + 2);
                                }
                                pvVar30 = local_b8;
                                psVar17 = &local_348[(unsigned long)*(uint8_t*)(lVar14 + 12)];
                                *psVar17 = *psVar17 + 1;
                            }
                        }
                        uVar11 = uVar11 + 1;
                        uVar16 = local_a0->size();
                    } while (uVar11 < uVar16);
                }
                if (((uint8_t)local_90 != '\0') && (lVar14 = local_a0->size(), lVar14 != 0)) {
                    local_a8 = (GeometryBatchInstance*)&local_98->field_128;
                    local_98 = (GeometryBatch*)&local_98->field_168;
                    uVar11 = 0;
                    local_b0 = 0;
                    do {
                        arg1 = local_c0 + uVar11;
                        local_90 = uVar11;
                        lVar14 = (*local_c8)[(unsigned long)arg1];
                        bVar8 = *(uint8_t*)(lVar14 + 12);
                        pcVar26 = &0 [(unsigned long)bVar8];
                        if (*pcVar26 != '\0') {
                            local_7a = (unsigned short)bVar8;
                            this_01 = (vector<unsigned short>*)(*local_a8)[local_7a];
                            puVar18 = &local_348[(unsigned long)*(uint8_t*)(lVar14 + 12)];
                            this_01->reserve((unsigned long)*puVar18);
                            local_7a = (short)local_d8 + (short)local_90;
                            this_01->push_back(local_7a);
                        }
                        this_02 = (Vector4T<unsigned char>*)(*local_d0)[(unsigned long)arg1];
                        uVar28 = 0;
                        uVar11 = local_90;
                        do {
                            pbVar27 = (uint8_t*)(*this_02)[uVar28];
                            local_7a = (unsigned short)*pbVar27;
                            lVar14 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                       BucketAllocatorEASTL>::find(local_108);
                            lVar15 = local_108.end();
                            if (lVar14 != lVar15) {
                                lVar15 = eastl::vector_map<unsigned short, unsigned short>::find(*local_98);
                                pGVar5 = local_98;
                                lVar23 = local_98->end();
                                if (lVar15 == lVar23) {
                                    pGVar5->emplace<unsigned short&, unsigned char&>(*((lVar14 + 2)), *local_88);
                                    bVar8 = *(uint8_t*)&local_88->field_0;
                                    puVar25 = &0 [(unsigned long)bVar8];
                                    *puVar25 = 1;
                                    pbVar27 = (uint8_t*)(*this_02)[uVar28];
                                    *pbVar27 = bVar8;
                                    *(char*)&local_88->field_0 = *(char*)&local_88->field_0 + '\x01';
                                    uVar16 = (unsigned long)((int)local_b0 + 1);
                                    uVar11 = local_108.size();
                                    local_b0 = uVar16;
                                    if (uVar11 < uVar16) {
                                        LogAssert("jointBonesGenerated <= gbRevJointIDMap.size()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1106, nullptr);
                                    }
                                    if (56 < *(uint8_t*)&local_88->field_0) {
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1107, nullptr);
                                    }
                                } else {
                                    uVar2 = *(uint16_t*)(lVar15 + 2);
                                    puVar25 = (uint8_t*)(*this_02)[uVar28];
                                    *puVar25 = (char)uVar2;
                                }
                                uVar11 = local_90;
                            }
                            uVar28 = uVar28 + 1;
                        } while (uVar28 != 4);
                        uVar11 = uVar11 + 1;
                        uVar16 = local_a0->size();
                    } while (uVar11 < uVar16);
                }
            }
        }
    }

    // 0x10080a470
    void GeometryBatch::WeldVertexEdgesWithMap(
        eastl::hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float>>,
                        eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL>& arg1) {
        Vector3T<float> VVar1;
        unsigned long uVar7;
        Vector3T<float>* vector3;
        long lVar8;
        Vector3T<float> VVar9;
        ReturnValue local_a0;
        unsigned long local_70;
        ReturnValue local_68;

        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL> local_90;
        Layout* local_48 = (Layout*)&field_88;
        unsigned long uVar4 = local_48->size();
        local_90.reserve(uVar4);
        Layout* pLVar2 = local_48;
        GeometryBatch* local_40 = this;
        auto arg2 = local_48->HeapBeginPtr();
        auto puVar5 = pLVar2->end();
        if (arg2 != puVar5) {
            do {
                local_90.emplace<unsigned short const&, unsigned short const&>(*(arg2 + 1), *arg2);
                arg2 = arg2 + 2;
            } while (arg2 != puVar5);
        }
        uint8_t* this_00 = &local_40->field_480;
        bool cVar3 = this_00->empty();
        hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float> _>,
                 eastl::equal_to<math::Vector3T<float> _>, SafeSimpleAllocatorEASTL>* this_02 = arg1;
        if (cVar3) {
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1140, nullptr);
        }
        long lVar6 = this_00->size();
        if (lVar6 != 0) {
            local_40 = (GeometryBatch*)&local_40->m_boneCount;
            uVar4 = 0;
            do {
                local_70 = uVar4;
                vector3 = (Vector3T<float>*)(*this_00)[uVar4];
                local_a0 = this_02->find(*vector3);
                local_68 = this_02->end();
                cVar3 = local_a0 != local_68;
                if (!cVar3) {
                    if (vector3[12] == (Vector3T<float>)0) {
                        local_68 = this_02->emplace<math::Vector3T<float>&, unsigned short>(*vector3, 65535);
                    } else {
                        local_68[0]._0_2_ = (uint16_t)((uint8_t)vector3[12]);
                        lVar6 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                  BucketAllocatorEASTL>::find(local_90);
                        lVar8 = local_90.end();
                        if (lVar6 == lVar8) {
                            LogAssert("localToModelBonePair != reverseBoneIDMap.cend()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/GeometryBatch.cpp",
                                      1186, nullptr);
                        }
                        local_68 = arg1.emplace<math::Vector3T<float>&, unsigned short&>(*vector3, *((lVar6 + 2)));
                        this_02 = arg1;
                    }
                } else {
                    lVar6 = local_a0.HeapBeginPtr();
                    pLVar2 = local_48;
                    local_68[0]._0_2_ = *(unsigned short*)(lVar6 + 12);
                    if (local_68[0]._0_2_ == 65535) {
                        vector3[12] = (Vector3T<float>)0;
                    } else {
                        lVar6 = eastl::vector_map<unsigned short, unsigned short>::find(*local_48);
                        lVar8 = pLVar2->end();
                        if (lVar6 == lVar8) {
                            if ((uint8_t)*(Vector3T<float>*)local_40 < 56) {
                                local_48->emplace<unsigned short&, unsigned char&>(local_68, *local_40);
                                VVar1 = *(Vector3T<float>*)local_40;
                                VVar9 = (Vector3T<float>)((char)VVar1 + 1);
                                *(Vector3T<float>*)local_40 = VVar9;
                                vector3[12] = VVar1;
                                if (56 < (uint8_t)VVar9) {
                                    LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/model/GeometryBatch.cpp",
                                              1176, nullptr);
                                }
                            } else {
                                (logger::default_logger())
                                    ->Log(false, 8,
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/model/GeometryBatch.cpp",
                                          1170, "GeometryBatch WeldVertexEdgesWithMap is running out of bones");
                            }
                        } else {
                            vector3[12] = *(Vector3T<float>*)(lVar6 + 2);
                        }
                    }
                }
                uVar4 = local_70 + 1;
                uVar7 = this_00->size();
            } while (uVar4 < uVar7);
        }
    }

    // 0x10080a890
    void GeometryBatch::WeldVertexEdgesWithMapSkin(
        eastl::hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float>>,
                        eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL>& arg1) {
        uint8_t uVar1;
        uint8_t bVar2;
        uint16_t uVar3;
        ReturnValue RVar4;
        unsigned long uVar6;
        unsigned short* arg2;
        unsigned short* puVar7;
        long lVar8;
        unsigned long uVar9;
        uint8_t* pbVar10;
        long lVar11;
        uint8_t* puVar12;
        unsigned char* arg1_00;
        char* pcVar13;
        Vector4T<unsigned char>* this_01;
        unsigned int uVar14;
        hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float> _>,
                 eastl::equal_to<math::Vector3T<float> _>, SafeSimpleAllocatorEASTL>* this_02;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_04;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL> local_d0;
        ReturnValue local_b0;
        unsigned long local_a0;
        vector<GeometryBatchVertexSkin>* local_98;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_90;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        uint64_t local_80;
        Vector4T<unsigned char>* local_68;
        Vector3T<float>* local_60;
        uint8_t* local_58;
        GeometryBatch* local_48;
        unsigned short local_40[2];
        Vector4T<unsigned char> local_3c;
        Vector4T<unsigned char>* local_38;

        if (field_33 != '\0') {
            local_d0 =
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL>();
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_168;
            local_48 = this;
            uVar6 = this_03->size();
            local_d0.reserve(uVar6);
            arg2 = (unsigned short*)this_03->HeapBeginPtr();
            puVar7 = (unsigned short*)this_03->end();
            if (arg2 != puVar7) {
                do {
                    local_d0.emplace<unsigned short const&, unsigned short const&>(*(arg2 + 1), *arg2);
                    arg2 = arg2 + 2;
                } while (arg2 != puVar7);
            }
            this_04 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&local_48->field_480;
            if (this_04->empty()) {
                LogAssert("!m_vertexDataBufferPos.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1211, nullptr);
            }
            lVar8 = this_04->size();
            if (lVar8 != 0) {
                local_98 = (vector<GeometryBatchVertexSkin>*)local_48->m_vertexDataBufferSkin;
                local_58 = &local_48->m_boneCount;
                uVar6 = 0;
                this_02 = arg1;
                local_90 = this_04;
                local_88 = this_03;
                do {
                    local_60 = (Vector3T<float>*)(*this_04)[uVar6];
                    local_a0 = uVar6;
                    local_38 = (Vector4T<unsigned char>*)(*local_98)[uVar6];
                    local_b0 = this_02->find(*local_60);
                    local_80 = this_02->end();
                    if (!(local_b0 != local_80)) {
                        new (local_40) GeometryBatchVertexSkin();
                        local_68 = local_38 + 4;
                        uVar14 = 0;
                        do {
                            pcVar13 = (char*)(*local_68)[uVar14];
                            if (*pcVar13 == '\0')
                                break;
                            pbVar10 = (uint8_t*)(*local_38)[uVar14];
                            RVar4 = local_80;
                            local_80._1_1_ = 0;
                            local_80._0_1_ = *pbVar10;
                            local_80._2_6_ = RVar4._2_6_;
                            lVar8 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                      BucketAllocatorEASTL>::find(local_d0);
                            uVar3 = *(uint16_t*)(lVar8 + 2);
                            puVar12 = (uint8_t*)(*local_40)[uVar14];
                            *puVar12 = (char)uVar3;
                            puVar12 = (uint8_t*)(*local_68)[uVar14];
                            uVar1 = *puVar12;
                            puVar12 = &local_3c[uVar14];
                            *puVar12 = uVar1;
                            lVar11 = local_d0.end();
                            if (lVar8 == lVar11) {
                                LogAssert("localToModelJointPair != reverseJointIDMap.cend()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/model/GeometryBatch.cpp",
                                          1262, nullptr);
                            }
                            uVar14 = uVar14 + 1;
                            this_02 = arg1;
                        } while (uVar14 != 4);
                        local_80 = this_02->emplace<math::Vector3T<float>&, SharedVertexSkin&>(*local_60, *local_40);
                        this_03 = local_88;
                    } else {
                        lVar8 = local_b0.HeapBeginPtr();
                        local_80 = *(ReturnValue*)(lVar8 + 12);
                        this_01 = local_38 + 4;
                        uVar14 = 0;
                        do {
                            pbVar10 = &local_80[uVar14];
                            local_40[0] = (unsigned short)*pbVar10;
                            lVar8 = eastl::vector_map<unsigned short, unsigned short>::find(*this_03);
                            lVar11 = this_03->end();
                            if (lVar8 == lVar11) {
                                if (*local_58 < 56) {
                                    arg1_00 = &local_80[uVar14];
                                    this_03->emplace<unsigned char&, unsigned char&>(*arg1_00, *local_58);
                                    bVar2 = *local_58;
                                    *local_58 = bVar2 + 1;
                                    pbVar10 = (uint8_t*)(*local_38)[uVar14];
                                    *pbVar10 = bVar2;
                                    puVar12 = (uint8_t*)(*((Vector4T<unsigned char>*)((long)&local_80 + 4)))[uVar14];
                                    uVar1 = *puVar12;
                                    puVar12 = (uint8_t*)(*this_01)[uVar14];
                                    *puVar12 = uVar1;
                                    local_48->field_33 = local_48->field_33 + '\x01';
                                    if (56 < local_48->m_boneCount) {
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1247, nullptr);
                                    }
                                } else {
                                    (logger::default_logger())
                                        ->Log(false, 8,
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/model/GeometryBatch.cpp",
                                              1238, "GeometryBatch WeldVertexEdgesWithMapSkin is running out of bones");
                                }
                            } else {
                                uVar3 = *(uint16_t*)(lVar8 + 2);
                                puVar12 = (uint8_t*)(*local_38)[uVar14];
                                *puVar12 = (char)uVar3;
                                puVar12 = (uint8_t*)(*((Vector4T<unsigned char>*)((long)&local_80 + 4)))[uVar14];
                                uVar1 = *puVar12;
                                puVar12 = (uint8_t*)(*this_01)[uVar14];
                                *puVar12 = uVar1;
                            }
                            uVar14 = uVar14 + 1;
                        } while (uVar14 != 4);
                        this_02 = arg1;
                    }
                    this_04 = local_90;
                    uVar6 = local_a0 + 1;
                    uVar9 = local_90->size();
                } while (uVar6 < uVar9);
            }
        }
    }

    // 0x10080ade0: GeometryBatchVertexSkin::GeometryBatchVertexSkin() has the same machine code as SharedVertexSkin::SharedVertexSkin()

    // 0x10080ae40
    void GeometryBatch::Transform(const math::Matrix44T<float>& matrix44) {
        Vector3T<float>* this_01;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        uint8_t* this_00 = &field_480;
        if (this_00->empty() != '\0') {
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1276, nullptr);
        }
        if (this_00->size() != 0) {
            uVar4 = 1;
            arg1 = 0;
            do {
                this_01 = (Vector3T<float>*)(*this_00)[arg1];
                *this_01 *= matrix44;
                arg1 = (unsigned long)uVar4;
                uVar3 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (arg1 < uVar3);
        }
        m_transformed = true;
    }

    // 0x10080aee0
    void GeometryBatch::TransformNormals(const math::QuaternionT<float>& quaternion, bool arg2) {
        bool bVar1;
        GeometryBatchVertex* pGVar4;
        unsigned long uVar5;
        unsigned long uVar6;
        unsigned int uVar7;
        uint64_t local_50[2];
        uint64_t local_40[2];

        uint8_t* this_00 = &field_480;
        if (this_00->empty() != '\0') {
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1287, nullptr);
        }
        long lVar3 = this_00->size();
        if (lVar3 != 0) {
            uVar5 = 0;
            uVar6 = 1;
            do {
                pGVar4 = &field_448[uVar5];
                local_40[0] = pGVar4->GetNormal();
                local_50[0] = *local_40 quaternion;
                pGVar4->SetNormal(*local_50);
                uVar5 = this_00->size();
                bVar1 = uVar6 < uVar5;
                uVar5 = uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (bVar1);
        }
        if (arg2) {
            lVar3 = this_00->size();
            if (lVar3 != 0) {
                uVar7 = 1;
                uVar5 = 0;
                do {
                    pGVar4 = &field_448[uVar5];
                    local_40[0] = pGVar4->GetTangent();
                    local_50[0] = *local_40 quaternion;
                    pGVar4->SetTangent(*local_50);
                    uVar5 = (unsigned long)uVar7;
                    uVar6 = this_00->size();
                    uVar7 = uVar7 + 1;
                } while (uVar5 < uVar6);
            }
        }
        m_transformed = true;
    }

    // 0x10080b110
    void GeometryBatch::Translate(const math::Vector3T<float>& vector3) {
        Vector3T<float>* this_01;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        uint8_t* this_00 = &field_480;
        if (this_00->empty() != '\0') {
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1306, nullptr);
        }
        if (this_00->size() != 0) {
            uVar4 = 1;
            arg1 = 0;
            do {
                this_01 = (Vector3T<float>*)(*this_00)[arg1];
                *this_01 += vector3;
                arg1 = (unsigned long)uVar4;
                uVar3 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (arg1 < uVar3);
        }
        m_transformed = true;
    }

    // 0x10080b1b0
    void GeometryBatch::Rotate(const math::QuaternionT<float>& quaternion, bool arg2) {
        bool bVar1;
        unsigned long uVar4;
        Vector3T<float>* this_01;
        GeometryBatchVertex* this_02;
        uint64_t in_register_00000011;
        unsigned long uVar6;
        uint64_t local_50;
        unsigned int local_44;
        uint64_t local_40[2];

        unsigned long uVar5 = (((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) & 4294967295;
        uint8_t* this_00 = &field_480;
        if (this_00->empty() != '\0') {
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1317, nullptr);
        }
        if (this_00->size() != 0) {
            local_44 = (unsigned int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
            uVar4 = 0;
            uVar6 = 1;
            do {
                this_01 = (Vector3T<float>*)(*this_00)[uVar4];
                *this_01 *= quaternion;
                if ((char)uVar5 != '\0') {
                    this_02 = &field_448[uVar4];
                    local_50 = this_02->GetNormal();
                    local_40[0] = local_50 quaternion;
                    this_02->SetNormal(*local_40);
                    local_50 = this_02->GetTangent();
                    local_40[0] = local_50 quaternion;
                    uVar5 = (unsigned long)local_44;
                    this_02->SetTangent(*local_40);
                }
                uVar4 = this_00->size();
                bVar1 = uVar6 < uVar4;
                uVar4 = uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (bVar1);
        }
        m_transformed = true;
    }

    // 0x10080b310
    void GeometryBatch::Rotate90(Rotation90 rotation90, bool arg2) {
        unsigned int uVar1;
        bool cVar2;
        bool bVar3;
        long lVar5;
        unsigned long uVar6;
        Layout* pLVar7;
        float* pfVar8;
        float* pfVar9;
        unsigned int* puVar10;
        unsigned char* puVar11;
        unsigned char* puVar12;
        char* pcVar13;
        unsigned long uVar14;
        Layout* this_01;
        unsigned int local_48;

        uint8_t* this_00 = &field_448;
        char cVar4 = this_00->empty();
        if (cVar4) {
            LogAssert("!m_vertexDataBuffer.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1335, nullptr);
        }
        cVar4 = (char)rotation90;
        if (cVar4) {
            lVar5 = this_00->size();
            if (lVar5 != 0) {
                uVar6 = 0;
                uVar14 = 1;
                do {
                    lVar5 = (*this_00)[uVar6];
                    pLVar7 = &field_480[uVar6];
                    if (cVar4 == '\x03') {
                        pfVar8 = (float*)pLVar7->SSOBeginPtr();
                        pfVar9 = (float*)pLVar7->second();
                        eastl::swap<float>(*pfVar8, *pfVar9);
                        puVar10 = (unsigned int*)pLVar7->SSOBeginPtr();
                        local_48 = *puVar10;
                        puVar10 = (unsigned int*)pLVar7->SSOBeginPtr();
                    LAB_10080b4fd:
                        local_48 = local_48 ^ 2147483648;
                        *puVar10 = local_48;
                    } else {
                        if (cVar4 == '\x02') {
                            puVar10 = (unsigned int*)pLVar7->SSOBeginPtr();
                            uVar1 = *puVar10;
                            puVar10 = (unsigned int*)pLVar7->SSOBeginPtr();
                            *puVar10 = uVar1 ^ 2147483648;
                        LAB_10080b49a:
                            puVar10 = (unsigned int*)pLVar7->second();
                            local_48 = *puVar10;
                            puVar10 = (unsigned int*)pLVar7->second();
                            goto LAB_10080b4fd;
                        }
                        if (cVar4 == '\x01') {
                            pfVar8 = (float*)pLVar7->SSOBeginPtr();
                            pfVar9 = (float*)pLVar7->second();
                            eastl::swap<float>(*pfVar8, *pfVar9);
                            goto LAB_10080b49a;
                        }
                    }
                    if (arg2) {
                        pLVar7 = (Layout*)(lVar5 + 4);
                        this_01 = (Layout*)(lVar5 + 8);
                        if (cVar4 == '\x03') {
                            puVar11 = (unsigned char*)pLVar7->SSOBeginPtr();
                            puVar12 = (unsigned char*)pLVar7->z();
                            eastl::swap<signed char>(*puVar11, *puVar12);
                            pcVar13 = (char*)pLVar7->SSOBeginPtr();
                            cVar2 = *pcVar13;
                            pcVar13 = (char*)pLVar7->SSOBeginPtr();
                            *pcVar13 = -cVar2;
                            puVar11 = (unsigned char*)this_01->SSOBeginPtr();
                            puVar12 = (unsigned char*)this_01->z();
                            eastl::swap<signed char>(*puVar11, *puVar12);
                            pcVar13 = (char*)this_01->SSOBeginPtr();
                            cVar2 = *pcVar13;
                            pcVar13 = (char*)this_01->SSOBeginPtr();
                        } else {
                            if (cVar4 == '\x02') {
                                pcVar13 = (char*)pLVar7->SSOBeginPtr();
                                cVar2 = *pcVar13;
                                pcVar13 = (char*)pLVar7->SSOBeginPtr();
                                *pcVar13 = -cVar2;
                                pcVar13 = (char*)pLVar7->z();
                                cVar2 = *pcVar13;
                                pcVar13 = (char*)pLVar7->z();
                                *pcVar13 = -cVar2;
                                pcVar13 = (char*)this_01->SSOBeginPtr();
                                cVar2 = *pcVar13;
                                pcVar13 = (char*)this_01->SSOBeginPtr();
                                *pcVar13 = -cVar2;
                            } else {
                                if (cVar4 != '\x01')
                                    goto LAB_10080b3f3;
                                puVar11 = (unsigned char*)pLVar7->SSOBeginPtr();
                                puVar12 = (unsigned char*)pLVar7->z();
                                eastl::swap<signed char>(*puVar11, *puVar12);
                                pcVar13 = (char*)pLVar7->z();
                                cVar2 = *pcVar13;
                                pcVar13 = (char*)pLVar7->z();
                                *pcVar13 = -cVar2;
                                puVar11 = (unsigned char*)this_01->SSOBeginPtr();
                                puVar12 = (unsigned char*)this_01->z();
                                eastl::swap<signed char>(*puVar11, *puVar12);
                            }
                            pcVar13 = (char*)this_01->z();
                            cVar2 = *pcVar13;
                            pcVar13 = (char*)this_01->z();
                        }
                        *pcVar13 = -cVar2;
                    }
                LAB_10080b3f3:
                    uVar6 = this_00->size();
                    bVar3 = uVar14 < uVar6;
                    uVar6 = uVar14;
                    uVar14 = (unsigned long)((int)uVar14 + 1);
                } while (bVar3);
            }
            m_transformed = true;
        }
    }

    // 0x10080b620
    void GeometryBatch::Scale(const math::Vector3T<float>& vector3) {
        Vector3T<float>* this_01;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        uint8_t* this_00 = &field_480;
        if (this_00->empty() != '\0') {
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1399, nullptr);
        }
        if (this_00->size() != 0) {
            uVar4 = 1;
            arg1 = 0;
            do {
                this_01 = (Vector3T<float>*)(*this_00)[arg1];
                *this_01 *= vector3;
                arg1 = (unsigned long)uVar4;
                uVar3 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (arg1 < uVar3);
        }
        m_transformed = true;
    }

    // 0x10080b6c0
    void GeometryBatch::MirrorZ() {
        uint8_t* this_00;
        bool bVar1;
        unsigned long uVar4;
        unsigned short* arg1;
        unsigned short* arg2;
        unsigned long uVar5;
        long lVar6;
        long lVar7;
        unsigned int uVar8;

        if (field_480.empty() != '\0') {
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1411, nullptr);
        }
        vector<game::MapSquare::MapSquarePos>* this_01 =
            (vector<game::MapSquare::MapSquarePos>*)std::array<eastl::vector<unsigned short>, 5ul>::begin();
        vector<game::MapSquare::MapSquarePos>* pvVar3 =
            (vector<game::MapSquare::MapSquarePos>*)std::array<eastl::vector<unsigned short>, 5ul>::end();
        if (this_01 != pvVar3) {
            this_00 = &field_448;
            do {
                uVar4 = this_01->size();
                if (2 < uVar4) {
                    uVar8 = 2;
                    uVar4 = 1;
                    do {
                        arg1 = (unsigned short*)(*this_01)[(unsigned long)(uVar8 - 1)];
                        arg2 = (unsigned short*)(*this_01)[(unsigned long)uVar8];
                        eastl::swap<unsigned short>(*arg1, *arg2);
                        uVar5 = this_01->size();
                        uVar8 = uVar8 + 3;
                        bVar1 = uVar4 < uVar5 / 3;
                        uVar4 = (unsigned long)((int)uVar4 + 1);
                    } while (bVar1);
                }
                lVar6 = this_00->size();
                if (lVar6 != 0) {
                    uVar4 = 0;
                    uVar5 = 1;
                    do {
                        lVar6 = (*this_00)[uVar4];
                        lVar7 = field_480[uVar4];
                        *(unsigned int*)(lVar7 + 8) = *(unsigned int*)(lVar7 + 8) ^ 2147483648;
                        *(char*)(lVar6 + 6) = -*(char*)(lVar6 + 6);
                        *(char*)(lVar6 + 10) = -*(char*)(lVar6 + 10);
                        *(char*)(lVar6 + 11) = (*(char*)(lVar6 + 11) == '\x7f') + '\x7f';
                        uVar4 = this_00->size();
                        bVar1 = uVar5 < uVar4;
                        uVar4 = uVar5;
                        uVar5 = (unsigned long)((int)uVar5 + 1);
                    } while (bVar1);
                }
                this_01 = this_01 + 32;
            } while (this_01 != pvVar3);
        }
        m_transformed = true;
    }

    // 0x10080b8c0
    void GeometryBatch::HillChange(HillChange arg1, int arg2,
                                   const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg3,
                                   const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg4,
                                   const LocationHelpers::LocationHillChangeData& arg5) {
        int iVar1;
        float* pfVar3;

        auto this_00 = field_480.HeapBeginPtr();
        auto pVVar2 = field_480.end();
        for (; this_00 != pVVar2; this_00 = this_00 + 16) {
            iVar1 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, *this_00);
            pfVar3 = (float*)this_00->y();
            *pfVar3 = (float)iVar1;
        }
        m_transformed = true;
    }

    // 0x10080bc60
    void GeometryBatch::Recolour(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
        unsigned short arg1_00;
        unsigned long uVar2;
        unsigned short* puVar3;
        unsigned long arg1_01;

        if (arg1.end() != 0) {
            arg1_01 = 0;
            do {
                uVar2 = arg2.end();
                if (uVar2 <= arg1_01) {
                    return;
                }
                puVar3 = &arg1[arg1_01];
                arg1_00 = *puVar3;
                puVar3 = &arg2[arg1_01];
                RecolourSingle(arg1_00, *puVar3);
                arg1_01 = arg1_01 + 1;
                uVar2 = arg1.end();
            } while (arg1_01 < uVar2);
        }
    }

    // 0x10080bcf0
    void GeometryBatch::RecolourSingle(unsigned short arg1, unsigned short arg2) {
        unsigned long uVar2;
        unsigned short* puVar3;
        unsigned long arg1_00;

        uint8_t* this_00 = m_faceHSLBuffer;
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                puVar3 = (unsigned short*)(*this_00)[arg1_00];
                if (*puVar3 == arg1) {
                    puVar3 = (unsigned short*)(*this_00)[arg1_00];
                    *puVar3 = arg2;
                }
                arg1_00 = arg1_00 + 1;
                uVar2 = this_00->size();
            } while (arg1_00 < uVar2);
        }
    }

    // 0x10080bd60
    void GeometryBatch::AmbientAdjust(unsigned short arg1) {
        unsigned short* puVar2;
        uint16_t* puVar3;
        unsigned long uVar4;
        uint16_t uVar5;
        unsigned short arg2;
        unsigned long arg1_00;

        uint8_t* this_00 = m_faceHSLBuffer;
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                puVar2 = (unsigned short*)(*this_00)[arg1_00];
                uVar5 = ((RunetekColour*)(unsigned long)*puVar2)->HSLAdjustAmbient(arg1, arg2);
                puVar3 = (uint16_t*)(*this_00)[arg1_00];
                *puVar3 = uVar5;
                arg1_00 = arg1_00 + 1;
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x10080bde0
    void GeometryBatch::TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        uint16_t uVar1;
        unsigned short* puVar3;
        uint16_t* puVar4;
        unsigned long uVar5;
        unsigned long arg1_00;

        uint8_t* this_00 = m_faceHSLBuffer;
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                puVar3 = (unsigned short*)(*this_00)[arg1_00];
                uVar1 = math::RunetekColour::HSLAdjustTint(*puVar3, arg1, arg2, arg3, arg4);
                puVar4 = (uint16_t*)(*this_00)[arg1_00];
                *puVar4 = uVar1;
                arg1_00 = arg1_00 + 1;
                uVar5 = this_00->size();
            } while (arg1_00 < uVar5);
        }
    }

    // 0x10080be90
    void GeometryBatch::CreateRenderingResources() {
        vector<game::MapSquare::MapSquarePos>* this_00;
        int iVar4;
        vector<game::MapSquare::MapSquarePos>* this_01;
        unsigned long uVar5;
        long lVar6;
        long lVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_02;
        IndexBuffer* this_03;
        void* pvVar8;
        VertexDeclaration* pVVar9;
        unsigned int* puVar10;
        unsigned int* puVar11;
        InputAssemblerState* pIVar12;
        unsigned long arg1;
        unsigned long uVar13;
        VertexBuffer** local_90;
        uint8_t* local_88;
        uint8_t* local_80;
        uint64_t local_78;
        uint32_t local_70;
        uint32_t local_60;
        uint32_t local_5c;
        uint32_t local_58;
        VertexBuffer** local_48;
        vector<game::MapSquare::MapSquarePos>* local_38;

        bool cVar2 = VertexBuffersInitialised();
        if (!cVar2) {
            LogAssert("VertexBuffersInitialised()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1482, "Check CreateSecondaryVertexBuffers() is called before ConstructFinishAndUpload()");
        }
        VertexDeclaration* local_40 = (VertexDeclaration*)&field_216;
        unsigned int uVar3 = m_numLods - 1;
        GeometryBatch* local_50 = this;
        if (uVar3 != 0) {
            uVar13 = (unsigned long)uVar3;
            arg1 = (unsigned long)(m_numLods - 2);
            do {
                pVVar9 = local_40;
                this_01 = (vector<game::MapSquare::MapSquarePos>*)(*local_40)[arg1];
                local_38 = (vector<game::MapSquare::MapSquarePos>*)(*pVVar9)[uVar13];
                uVar5 = local_38->size();
                local_48 = (VertexBuffer**)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((float)uVar5));
                uVar5 = this_01->size();
                this_00 = local_38;
                if (local_48._0_4_ / (float)uVar5 <= 0.98) {
                    lVar6 = this_01->size();
                    lVar7 = this_00->size();
                    this = local_50;
                    if ((199 < (unsigned long)(lVar6 - lVar7)) && (lVar6 = this_00->size(), lVar6 != 0))
                        break;
                }
                this_00->set_capacity(0);
                m_numLods = m_numLods - 1;
                uVar13 = uVar13 - 1;
                arg1 = arg1 - 1;
            } while ((int)uVar13 != 0);
        }
        GeometryBatch* pGVar1 = local_50;
        if (m_numLods != 0) {
            local_38 = (vector<game::MapSquare::MapSquarePos>*)&field_568;
            uVar13 = 0;
            do {
                this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_40)[uVar13];
                cVar2 = this_02->empty();
                if (cVar2) {
                    LogAssert("!indexBuffer.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              1506, nullptr);
                }
                this_03 = (IndexBuffer*)(*local_38)[uVar13];
                iVar4 = this_02->size();
                pvVar8 = (void*)this_02->HeapBeginPtr();
                this_03->Create(iVar4 * 2, 0, pvVar8, 5123);
                if (uVar13 != 0) {
                    this_02->set_capacity(0);
                }
                uVar13 = uVar13 + 1;
                this = pGVar1;
            } while (uVar13 < pGVar1->m_numLods);
        }
        cVar2 = HasJoints();
        Layout* local_68 = (Layout*)&field_448;
        uVar3 = local_68->size();
        pGVar1 = local_50;
        if (!cVar2) {
            if (uVar3 == 0) {
                LogAssert("vertexDataBufferSize > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1545, nullptr);
            }
            local_40 = (VertexDeclaration*)&local_50->field_512;
            uVar13 = local_40->end();
            if (uVar13 != uVar3) {
                LogAssert("m_vertexDataBufferPosLP.size() == vertexDataBufferSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1546, nullptr);
            }
            pVVar9 = (VertexDeclaration*)GeometryBatchRenderer::GetVertexDecl();
            iVar4 = pVVar9->GetVertexStride(0);
            pvVar8 = (void*)local_40->data();
            pGVar1->field_1088.Create(iVar4 * uVar3, 0, pvVar8);
            iVar4 = pVVar9->GetVertexStride(1);
            pvVar8 = (void*)local_68->HeapBeginPtr();
            pGVar1->field_1008.Create(uVar3 * iVar4, 0, pvVar8);
            local_90 = (VertexBuffer**)&pGVar1->field_1088;
            local_88 = &pGVar1->field_1008;
            local_60 = pVVar9->GetVertexStride(0);
            uVar13 = 1;
            local_40 = pVVar9;
            local_5c = pVVar9->GetVertexStride(1);
            local_78 = 0;
            if (pGVar1->m_numLods != 0) {
                local_38 = (vector<game::MapSquare::MapSquarePos>*)&pGVar1->field_1248;
                local_48 = &local_90[uVar13];
                puVar10 = &local_60[uVar13];
                puVar11 = &local_78[uVar13];
                uVar13 = 0;
                do {
                    pIVar12 = (InputAssemblerState*)(*local_38)[uVar13];
                    pIVar12->SetVertexStreamData(local_40, 2, local_48, puVar10, puVar11);
                    uVar3 = GetIndexBuffer(pGVar1, (unsigned int)uVar13);
                    render::InputAssemblerState::SetIndexBuffer(pIVar12, uVar3);
                    uVar13 = uVar13 + 1;
                } while (uVar13 < pGVar1->m_numLods);
            }
        } else {
            if (uVar3 == 0) {
                LogAssert("vertexDataBufferSize > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1520, nullptr);
            }
            local_38 = (vector<game::MapSquare::MapSquarePos>*)&local_50->field_512;
            uVar13 = local_38->end();
            if (uVar13 != uVar3) {
                LogAssert("m_vertexDataBufferPosLP.size() == vertexDataBufferSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1521, nullptr);
            }
            local_40 = (VertexDeclaration*)pGVar1->m_vertexDataBufferSkin;
            uVar13 = local_40->size();
            if (uVar13 != uVar3) {
                LogAssert("m_vertexDataBufferSkin.size() == vertexDataBufferSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1522, nullptr);
            }
            pVVar9 = (VertexDeclaration*)GeometryBatchRenderer::GetVertexDecl2();
            local_48 = (VertexBuffer**)&pGVar1->field_1088;
            iVar4 = pVVar9->GetVertexStride(0);
            pvVar8 = (void*)local_38->data();
            pGVar1->field_1088.Create(iVar4 * uVar3, 0, pvVar8);
            iVar4 = pVVar9->GetVertexStride(1);
            pvVar8 = (void*)local_68->HeapBeginPtr();
            pGVar1->field_1008.Create(iVar4 * uVar3, 0, pvVar8);
            iVar4 = pVVar9->GetVertexStride(2);
            pvVar8 = (void*)local_40->HeapBeginPtr();
            pGVar1->field_1168.Create(uVar3 * iVar4, 0, pvVar8);
            local_90 = local_48;
            local_88 = &pGVar1->field_1008;
            local_80 = &pGVar1->field_1168;
            local_60 = pVVar9->GetVertexStride(0);
            local_5c = pVVar9->GetVertexStride(1);
            uVar13 = 2;
            local_40 = pVVar9;
            local_58 = pVVar9->GetVertexStride(2);
            local_70 = 0;
            local_78 = 0;
            if (pGVar1->m_numLods != 0) {
                local_38 = (vector<game::MapSquare::MapSquarePos>*)&pGVar1->field_1248;
                local_48 = &local_90[uVar13];
                uVar13 = 0;
                puVar10 = &local_60[0];
                puVar11 = &local_78[0];
                do {
                    pIVar12 = (InputAssemblerState*)(*local_38)[uVar13];
                    pIVar12->SetVertexStreamData(local_40, 3, local_48, puVar10, puVar11);
                    uVar3 = GetIndexBuffer(pGVar1, (unsigned int)uVar13);
                    render::InputAssemblerState::SetIndexBuffer(pIVar12, uVar3);
                    uVar13 = uVar13 + 1;
                } while (uVar13 < pGVar1->m_numLods);
            }
        }
        local_68->set_capacity(0);
    }

    // 0x10080c5b0
    void GeometryBatch::ClearFaceData() {
        ((vector<eastl::pair<int, int>>*)field_216[0])->clear();
        m_faceHSLBuffer->clear();
        m_faceTransparencyBuffer->clear();
    }

    // 0x10080c600
    void GeometryBatch::PushFaceRange(const GeometryBatch& geometryBatch, unsigned short arg2, unsigned short arg3) {
        uint64_t in_register_0000000a;
        uint64_t in_register_00000012;

        int iVar5 = (int)(((uint64_t)in_register_0000000a << 16) | (uint16_t)arg3);
        int iVar6 = (int)(((uint64_t)in_register_00000012 << 16) | (uint16_t)arg2);
        uint8_t* this_00 = m_faceHSLBuffer;
        long lVar1 = this_00->size();
        unsigned long uVar7 = (iVar5 - iVar6) + lVar1;
        vector<unsigned short>* this_01 = &field_216[0];
        this_01->resize(uVar7 * 3);
        this_00->resize(uVar7);
        m_faceTransparencyBuffer->resize(uVar7);
        Layout* this_02 = &geometryBatch.field_216[0];
        long lVar2 = this_02->HeapBeginPtr();
        long lVar3 = this_02->HeapBeginPtr();
        long lVar4 = this_01->HeapBeginPtr();
        std::copy<unsigned short const*, unsigned short*>(
            (unsigned short*)(lVar2 + (unsigned long)(unsigned int)(iVar6 * 3) * 2),
            (unsigned short*)(lVar3 + (unsigned long)(unsigned int)(iVar5 * 3) * 2), (lVar4 + lVar1 * 6));
        lVar2 = geometryBatch.m_faceHSLBuffer->HeapBeginPtr();
        unsigned long uVar8 = (((uint64_t)in_register_00000012 << 16) | (uint16_t)arg2) & 4294967295;
        lVar3 = geometryBatch.m_faceHSLBuffer->HeapBeginPtr();
        uVar7 = (((uint64_t)in_register_0000000a << 16) | (uint16_t)arg3) & 4294967295;
        lVar4 = this_00->HeapBeginPtr();
        std::copy<unsigned short const*, unsigned short*>((lVar2 + uVar8 * 2), (lVar3 + uVar7 * 2),
                                                          (lVar4 + lVar1 * 2));
        lVar2 = geometryBatch.m_faceTransparencyBuffer->HeapBeginPtr();
        lVar3 = geometryBatch.m_faceTransparencyBuffer->HeapBeginPtr();
        lVar4 = m_faceTransparencyBuffer->HeapBeginPtr();
        std::copy<unsigned char const*, unsigned char*>((uVar8 + lVar2), (uVar7 + lVar3), (lVar1 + lVar4));
    }

} // namespace jag::graphics

// 0x100807a60
void floor(float arg1) {
    _floorf();
}

// 0x100808d50
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

namespace jag::math {
    // 0x100807a70
    unsigned char Clamp<unsigned char>(const unsigned char& arg1, const unsigned char& arg2,
                                       const unsigned char& arg3) {
        auto puVar1 = std::max<unsigned char>(arg2, arg1);
        puVar1 = std::min<unsigned char>(arg3, *puVar1);
        return *puVar1;
    }

} // namespace jag::math
