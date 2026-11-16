// libs/graphics/runetek7/model/BillboardBatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardBatch.h"

namespace jag::graphics {
    // 0x100009ca0: BillboardBatch::GetAABB() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100060710: BillboardBatch::GetBoneIDMap() has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x100060710: BillboardBatch::GetBoneIDMap() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x100064280: BillboardBatch::IsTransformed() const has the same machine code as eastl::optional<eastl::vector<char>>::operator bool() const

    // 0x100067280: BillboardBatch::GetLabelIDMap() has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x100067280: BillboardBatch::GetLabelIDMap() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x1001a3d00: BillboardBatch::SetTransformed(bool) has the same machine code as MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool)

    // 0x1001c0a60: BillboardBatch::GetVertexDataBuffer() const has the same machine code as GraphNode::GetChildren() const

    // 0x100324d40: BillboardBatch::GetJointIDMap() has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x100324d40: BillboardBatch::GetJointIDMap() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x100412e50: BillboardBatch::GetIndexBuffer() const has the same machine code as game::MapSquarePointLights::GetPointLightTexture()

    // 0x1004abeb0: BillboardBatch::GetBoneVertices() const has the same machine code as game::EnvironmentOverride::GetBloomOverrides() const

    // 0x1006a9040: BillboardBatch::IsLowPrecision() const has the same machine code as ui::Rectangle::GetRectangleFill() const

    // 0x1007a5650: BillboardBatch::GetBillboardLabelIDMap() has the same machine code as SunlightDirectLighting::GetShaderConsts() const

    // 0x1007a5650: BillboardBatch::GetBillboardLabelIDMap() const has the same machine code as SunlightDirectLighting::GetShaderConsts() const

    // 0x100862170
    BillboardBatch::BillboardBatch()
        : MakeSharedPool<BillboardBatch, 64>(), math::AABB(), m_transformed(0), m_faceLabelCount(1), m_boneCount(1),
          field_168(0), m_billboardLabelCount(1), m_lowPrecision(false) {}

    // 0x1008623e0
    BillboardBatch::BillboardBatch(BillboardBatch&& billboardBatch)
        : MakeSharedPool<BillboardBatch, 64>(), math::AABB(billboardBatch), m_transformed(billboardBatch.m_transformed),
          m_faceLabelCount(billboardBatch.m_faceLabelCount), field_40(billboardBatch.field_40),
          m_boneCount(billboardBatch.m_boneCount), m_boneIDMap(billboardBatch.m_boneIDMap),
          field_128(billboardBatch.field_128), field_168(billboardBatch.field_168), field_176(billboardBatch.field_176),
          m_billboardLabelCount(billboardBatch.m_billboardLabelCount),
          m_billboardLabelIDMap(billboardBatch.m_billboardLabelIDMap), field_264(billboardBatch.field_264),
          field_296(billboardBatch.field_296), field_328(billboardBatch.field_328), field_360(billboardBatch.field_360),
          m_lowPrecision(billboardBatch.m_lowPrecision) {}

    // 0x100862630
    BillboardBatch::BillboardBatch(const BillboardBatch& billboardBatch)
        : MakeSharedPool<BillboardBatch, 64>(), math::AABB(billboardBatch), m_transformed(billboardBatch.m_transformed),
          m_faceLabelCount(billboardBatch.m_faceLabelCount), field_40(billboardBatch.field_40),
          m_boneCount(billboardBatch.m_boneCount), m_boneIDMap(billboardBatch.m_boneIDMap),
          field_128(billboardBatch.field_128), field_168(billboardBatch.field_168), field_176(billboardBatch.field_176),
          m_billboardLabelCount(billboardBatch.m_billboardLabelCount),
          m_billboardLabelIDMap(billboardBatch.m_billboardLabelIDMap), field_264(billboardBatch.field_264),
          field_296(billboardBatch.field_296), field_328(billboardBatch.field_328), field_360(billboardBatch.field_360),
          m_lowPrecision(billboardBatch.m_lowPrecision) {}

    // 0x1008628a0
    BillboardBatch::~BillboardBatch() {
        DestroyRenderingResources();
        m_forwardPassIAState->~InputAssemblerState();
        field_488.~VertexBuffer();
        field_400.~IndexBuffer();
        field_360.~vector();
        field_328.~vector();
        field_296.~vector();
        field_264.~vector();
        field_176.~vector_map();
        field_128.~vector_map();
    }

    // 0x1008629e0
    void BillboardBatch::DestroyRenderingResources() {
        m_forwardPassIAState->Destroy();
        field_400.Destroy();
        field_488.Destroy();
    }

    // 0x100862a30
    void BillboardBatch::UpdateAABB() {
        float* pfVar2;
        Vector3T<float> local_50;
        uint64_t local_40;
        float local_34;

        Reset();
        auto vector31 = field_360.HeapBeginPtr();
        auto pVVar1 = field_360.end();
        if (vector31 != pVVar1) {
            do {
                pfVar2 = std::max<float>(*((vector31 + 20)), *((vector31 + 24)));
                local_34 = *pfVar2 * 0.5;
                local_50 = math::Vector3T(local_34);
                local_40 = *vector31 - local_50;
                AddPoint(local_40);
                local_50 = math::Vector3T(local_34);
                local_40 = *vector31 + local_50;
                AddPoint(local_40);
                vector31 = vector31 + 36;
            } while (vector31 != pVVar1);
        }
    }

    // 0x100862b10
    void BillboardBatch::SetBillboardSize(int arg1) {
        UpdateAABB();
    }

    // 0x100862b20
    void BillboardBatch::LoadMeshFromModelRawRT7(PacketView& packetView) {
        short sVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        uint8_t uVar3;
        bool cVar4;
        Vector4T<float> VVar5;
        uint16_t uVar7;
        unsigned short uVar8;
        short* psVar9;
        uint16_t* puVar10;
        uint8_t* puVar11;
        long lVar12;
        long lVar13;
        unsigned short* puVar14;
        Vector4T<float>* this_05;
        vector<unsigned short>* this_06;
        Vector4T<float> VVar15;
        short sVar16;
        int iVar17;
        uint8_t bVar18;
        unsigned long uVar19;
        long local_90;
        uint32_t local_80;
        uint32_t local_7c;
        uint32_t local_78;
        float local_70;
        unsigned int local_6c;
        unsigned long local_68;
        unsigned long local_60;
        unsigned long local_48;
        float local_40;
        float local_3c;
        unsigned short local_38[4];

        m_transformed = 0;
        unsigned short uVar6 = packetView.g2LE();
        uint8_t* this_02 = &field_264;
        this_02->resize((unsigned long)((unsigned int)uVar6 * 6));
        field_296.resize(1);
        field_328.resize(1);
        field_360.resize((unsigned long)uVar6 * 4);
        m_faceLabelCount = 1;
        unsigned short* this_00 = &field_40;
        this_00->clear();
        m_boneCount = 1;
        unsigned short* this_01 = &m_boneIDMap;
        this_01->clear();
        field_128.clear();
        field_168 = 0;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_58 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_176;
        local_58->clear();
        m_billboardLabelCount = 1;
        unsigned short* this_03 = &m_billboardLabelIDMap;
        this_03->clear();
        if (uVar6 != 0) {
            local_90 = 0;
            uVar19 = 0;
            do {
                new (&local_80) math::Vector3T();
                local_80 = packetView.gFloatLE();
                local_7c = packetView.gFloatLE();
                local_78 = packetView.gFloatLE();
                new (&local_40) math::Vector2T();
                local_40 = (float)packetView.gFloatLE();
                local_3c = (float)packetView.gFloatLE();
                uVar7 = packetView.g2LE();
                puVar10 = &field_296[uVar19];
                *puVar10 = uVar7;
                uVar3 = packetView.g1();
                puVar11 = &field_328[uVar19];
                *puVar11 = uVar3;
                uVar8 = packetView.g2sLE();
                if (uVar8 == 65535) {
                    local_68 = 0;
                LAB_100862e02:
                } else {
                    local_38[0] = uVar8 & 255;
                    lVar12 = eastl::vector_map<unsigned short, unsigned short>::find(*this_00);
                    lVar13 = this_00->end();
                    if (lVar12 != lVar13) {
                        local_68 = (((uint64_t)((int64_t)((unsigned long)lVar13 >> 8)) << 8) |
                                    (uint8_t)(*(uint8_t*)(lVar12 + 2)));
                        goto LAB_100862e02;
                    }
                    bVar18 = m_faceLabelCount;
                    m_faceLabelCount = bVar18 + 1;
                    local_38[0] = uVar8 & 255;
                    puVar14 = (unsigned short*)(*this_00)[*local_38];
                    *puVar14 = (unsigned short)bVar18;
                    local_68 = (unsigned long)bVar18;
                }
                this_04 = local_58;
                uVar8 = packetView.g2sLE();
                if (uVar8 == 65535) {
                    local_48 = 0;
                LAB_100862e82:
                } else {
                    local_38[0] = uVar8 & 255;
                    lVar12 = eastl::vector_map<unsigned short, unsigned short>::find(*this_01);
                    lVar13 = this_01->end();
                    if (lVar12 != lVar13) {
                        local_48 = (((uint64_t)((int64_t)((unsigned long)lVar13 >> 8)) << 8) |
                                    (uint8_t)(*(uint8_t*)(lVar12 + 2)));
                        goto LAB_100862e82;
                    }
                    bVar18 = m_boneCount;
                    m_boneCount = bVar18 + 1;
                    local_38[0] = uVar8 & 255;
                    puVar14 = (unsigned short*)(*this_01)[*local_38];
                    *puVar14 = (unsigned short)bVar18;
                    local_48 = (unsigned long)bVar18;
                }
                uVar8 = packetView.g2sLE();
                if (uVar8 == 65535) {
                    local_60 = 0;
                LAB_100862f02:
                } else {
                    local_38[0] = uVar8 & 255;
                    lVar12 = eastl::vector_map<unsigned short, unsigned short>::find(*this_04);
                    lVar13 = this_04->end();
                    if (lVar12 != lVar13) {
                        local_60 = (unsigned long)*(uint8_t*)(lVar12 + 2);
                        goto LAB_100862f02;
                    }
                    bVar18 = m_boneCount;
                    m_boneCount = bVar18 + 1;
                    local_38[0] = uVar8 & 255;
                    puVar14 = (unsigned short*)(*this_04)[*local_38];
                    *puVar14 = (unsigned short)bVar18;
                    field_168 = field_168 + '\x01';
                    local_60 = (unsigned long)bVar18;
                }
                uVar8 = packetView.g2sLE();
                if (uVar8 == 65535) {
                    bVar18 = 0;
                } else {
                    local_38[0] = uVar8;
                    lVar12 = eastl::vector_map<unsigned short, unsigned short>::find(*this_03);
                    lVar13 = this_03->end();
                    if (lVar12 == lVar13) {
                        bVar18 = m_billboardLabelCount;
                        m_billboardLabelCount = bVar18 + 1;
                        local_38[0] = uVar8;
                        puVar14 = (unsigned short*)(*this_03)[*local_38];
                        *puVar14 = (unsigned short)bVar18;
                    } else {
                        bVar18 = *(uint8_t*)(lVar12 + 2);
                    }
                }
                cVar4 = packetView.g1s();
                local_70 = (float)(int)cVar4;
                local_6c = (unsigned int)(uint8_t)local_48;
                lVar12 = 0;
                do {
                    this_05 = &field_360[local_90 + lVar12];
                    this_05->SetXYZ(local_80);
                    *(float*)(this_05 + 12) = local_70;
                    this_05[33] = (uint8_t)local_68;
                    this_05[32] = (uint8_t)local_48;
                    this_05[35] = (uint8_t)local_60;
                    local_38[0] = (unsigned short)local_6c;
                    this_06 = &field_128[*local_38];
                    this_06->reserve(4);
                    local_38[0] = (unsigned short)(local_90 + lVar12);
                    this_06->push_back(*local_38);
                    this_05[34] = (Vector4T<float>)(bVar18 * '\x02');
                    iVar17 = (int)lVar12;
                    if (iVar17 == 2) {
                        new (local_38) math::Point(local_40, local_3c);
                        (*((this_05 + 20))) = *local_38;
                        VVar5 = (Vector4T<float>)1;
                    LAB_100863017:
                        VVar15 = (Vector4T<float>)0;
                    } else if (iVar17 == 1) {
                        new (local_38) math::Point(local_40, -local_3c);
                        (*((this_05 + 20))) = *local_38;
                        VVar5 = (Vector4T<float>)1;
                        VVar15 = (Vector4T<float>)1;
                    } else {
                        if (iVar17 != 0) {
                            new (local_38) math::Point(-local_40, local_3c);
                            (*((this_05 + 20))) = *local_38;
                            VVar5 = (Vector4T<float>)0;
                            goto LAB_100863017;
                        }
                        new (local_38) math::Point(-local_40, -local_3c);
                        (*((this_05 + 20))) = *local_38;
                        VVar15 = (Vector4T<float>)1;
                        VVar5 = (Vector4T<float>)0;
                    }
                    this_05[30] = VVar5;
                    this_05[31] = VVar15;
                    lVar12 = lVar12 + 1;
                } while (lVar12 != 4);
                iVar17 = (int)uVar19 * 4;
                local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar17);
                puVar10 = (uint16_t*)(*this_02)[uVar19 * 6];
                *puVar10 = (short)iVar17;
                sVar1 = (short)uVar19;
                sVar16 = sVar1 * 4 + 2;
                psVar9 = (short*)(*this_02)[uVar19 * 6 | 1];
                *psVar9 = sVar16;
                psVar9 = (short*)(*this_02)[uVar19 * 6 + 2];
                *psVar9 = sVar1 * 4 + 1;
                puVar10 = (uint16_t*)(*this_02)[uVar19 * 6 + 3];
                *puVar10 = (short)local_48;
                psVar9 = (short*)(*this_02)[uVar19 * 6 + 4];
                *psVar9 = sVar1 * 4 + 3;
                psVar9 = (short*)(*this_02)[uVar19 * 6 + 5];
                *psVar9 = sVar16;
                uVar19 = uVar19 + 1;
                local_90 = local_90 + 4;
            } while (uVar19 != uVar6);
        }
        uVar19 = this_00->size();
        if (31 < uVar19) {
            LogAssert("m_faceLabelIDMap.size() < AnimationConstants::MAX_LABELS_IN_BATCH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      262, nullptr);
        }
        uVar19 = this_01->size();
        if (55 < uVar19) {
            LogAssert("m_boneIDMap.size() < AnimationConstants::MAX_BONES_IN_BATCH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      263, nullptr);
        }
        uVar19 = this_03->size();
        if (9 < uVar19) {
            LogAssert("m_billboardLabelIDMap.size() < AnimationConstants::MAX_BILLBOARDLABELS_IN_BATCH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      264, nullptr);
        }
    }

    // 0x100863490
    void BillboardBatch::BakeTextureMeta(unsigned int arg1, unsigned int arg2,
                                         const ModelTextureMeta& modelTextureMeta) {
        unsigned short* puVar1;
        long lVar2;
        unsigned long arg1_00;

        if (arg1 < arg2) {
            arg1_00 = (unsigned long)arg1;
            do {
                puVar1 = &field_264[arg1_00];
                lVar2 = field_360[(unsigned long)*puVar1];
                *(uint16_t*)(lVar2 + 28) = *(uint16_t*)modelTextureMeta;
                arg1_00 = arg1_00 + 1;
            } while (arg2 != arg1_00);
        }
    }

    // 0x100863500
    void BillboardBatch::BakeHSLColors(unsigned int arg1, unsigned int arg2) {
        uint8_t uVar1;
        uint32_t uVar2;
        unsigned short* puVar3;
        long lVar4;
        uint8_t* puVar5;
        unsigned long arg1_00;
        unsigned long arg1_01;
        array<unsigned char, 4ul>* this_00;

        if (arg1 < arg2) {
            arg1_00 = (unsigned long)arg1;
            do {
                arg1_01 = (arg1_00 & 4294967295) / 6;
                puVar3 = &field_296[arg1_01];
                uVar2 = math::RunetekColour::HSLToRGB(*puVar3);
                puVar3 = &field_264[arg1_00];
                lVar4 = field_360[(unsigned long)*puVar3];
                this_00 = (array<unsigned char, 4ul>*)(lVar4 + 16);
                puVar5 = (uint8_t*)(*this_00)[0];
                *puVar5 = (char)((unsigned int)uVar2 >> 16);
                puVar5 = (uint8_t*)(*this_00)[1];
                *puVar5 = (char)((unsigned int)uVar2 >> 8);
                puVar5 = (uint8_t*)(*this_00)[2];
                *puVar5 = (char)uVar2;
                puVar5 = &field_328[arg1_01];
                uVar1 = *puVar5;
                puVar5 = (uint8_t*)(*this_00)[3];
                *puVar5 = uVar1;
                arg1_00 = arg1_00 + 1;
            } while (arg2 != arg1_00);
        }
    }

    // 0x100863620
    void BillboardBatch::SortSections(
        const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections1,
        const eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>& sourceModelExternalIndexSections2,
        const eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL>&
            multimap) {
        unsigned int uVar1;
        BillboardBatch* pBVar2;
        unsigned long uVar4;
        long lVar5;
        long lVar6;
        unsigned int* puVar7;
        short* psVar8;
        long lVar9;
        BillboardBatchVertex* billboardBatchVertex1;
        vector<unsigned short>* pvVar10;
        unsigned long uVar11;
        Layout* pLVar12;
        uint8_t* this_00;
        vector<unsigned short> local_110;
        vector<BillboardBatchVertex> local_f0;
        vector<unsigned char> local_d0;
        vector<unsigned short> local_b0;
        uint64_t local_90;
        unsigned long local_88;
        unsigned short* local_68;
        vector<unsigned short>* local_60;
        Layout* local_58;
        Layout* local_50;
        Layout* local_48;
        uint64_t local_40;

        bool cVar3 = CanSkipSortSections(sourceModelExternalIndexSections1, multimap);
        if (!cVar3) {
            local_d0 = eastl::vector<unsigned char>();
            local_b0 = eastl::vector<unsigned short>();
            local_110 = eastl::vector<unsigned short>();
            local_f0 = eastl::vector<BillboardBatchVertex>();
            local_58 = (Layout*)&field_296;
            uVar4 = local_58->size();
            local_b0.reserve(uVar4);
            local_50 = (Layout*)&field_328;
            uVar4 = local_50->size();
            local_d0.reserve(uVar4);
            local_60 = (vector<unsigned short>*)&field_264;
            uVar4 = local_60->size();
            local_110.reserve(uVar4);
            uVar4 = field_360.size();
            local_f0.reserve(uVar4);
            local_40 = multimap.begin();
            local_90 = multimap.end();
            uVar4 = 0;
            local_48 = (Layout*)&field_360;
            while (true) {
                pBVar2 = this;
                cVar3 = local_40 != local_90;
                if (!cVar3)
                    break;
                lVar5 = *local_40;
                lVar5 = sourceModelExternalIndexSections1[*(unsigned long*)(lVar5 + 8)];
                pvVar10 = local_60;
                local_88 = uVar4;
                lVar6 = sourceModelExternalIndexSections2[uVar4];
                puVar7 = (unsigned int*)(*((lVar5 + 20)))[uVar4];
                uVar4 = (unsigned long)*puVar7;
                if (*puVar7 < puVar7[1]) {
                    do {
                        psVar8 = (short*)(*pvVar10)[uVar4];
                        local_110.push_back((*psVar8 - (short)*(uint32_t*)(lVar5 + 60)) +
                                            (short)*(uint32_t*)(lVar6 + 60));
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < puVar7[1]);
                }
                local_68 = (unsigned short*)local_b0.end();
                pLVar12 = local_58;
                lVar6 = local_58->HeapBeginPtr();
                uVar1 = *puVar7;
                lVar9 = pLVar12->HeapBeginPtr();
                local_b0.insert<unsigned short*>(local_68, (unsigned short*)(lVar6 + ((unsigned long)uVar1 / 6) * 2),
                                                 (unsigned short*)(lVar9 + ((unsigned long)puVar7[1] / 6) * 2));
                local_68 = (unsigned short*)local_d0.end();
                pLVar12 = local_50;
                lVar6 = local_50->HeapBeginPtr();
                uVar1 = *puVar7;
                lVar9 = pLVar12->HeapBeginPtr();
                local_d0.insert<unsigned char*>(local_68, (unsigned char*)((unsigned long)uVar1 / 6 + lVar6),
                                                (unsigned char*)((unsigned long)puVar7[1] / 6 + lVar9));
                billboardBatchVertex1 = (BillboardBatchVertex*)local_f0.end();
                pLVar12 = local_48;
                lVar6 = local_48->HeapBeginPtr();
                uVar1 = *(unsigned int*)(lVar5 + 60);
                lVar9 = pLVar12->HeapBeginPtr();
                local_f0.insert<BillboardBatchVertex*>(
                    billboardBatchVertex1, (BillboardBatchVertex*)(lVar6 + (unsigned long)uVar1 * 36),
                    (BillboardBatchVertex*)(lVar9 + (unsigned long)*(unsigned int*)(lVar5 + 64) * 36));
                uVar4 = local_88 + 1;
                ++local_40;
            }
            this_00 = &pBVar2->field_128;
            cVar3 = this_00->empty();
            if (!cVar3) {
                this_00->clear();
            }
            lVar5 = local_58->size();
            lVar6 = local_b0.size();
            if (lVar5 != lVar6) {
                LogAssert("m_faceHSL.size() == newfaceHSL.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          347, nullptr);
            }
            lVar5 = local_50->size();
            lVar6 = local_d0.size();
            if (lVar5 != lVar6) {
                LogAssert("m_faceTransparency.size() == newfaceTransparency.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          348, nullptr);
            }
            lVar5 = local_60->size();
            lVar6 = local_110.size();
            if (lVar5 != lVar6) {
                LogAssert("m_vertexIndexBuffer.size() == newVertexIndexBuffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          349, nullptr);
            }
            lVar5 = local_48->size();
            lVar6 = local_f0.size();
            pLVar12 = local_48;
            if (lVar5 != lVar6) {
                LogAssert("m_vertexDataBuffer.size() == newVertexDataBuffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          350, nullptr);
            }
            local_58->swap(local_b0);
            local_50->swap(local_d0);
            local_60->swap(local_110);
            pLVar12->swap(local_f0);
            uVar4 = pLVar12->size();
            if (65534 < uVar4) {
                LogAssert("m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          357, nullptr);
            }
            if (!cVar3) {
                lVar5 = pLVar12->size();
                if (lVar5 != 0) {
                    uVar4 = 0;
                    do {
                        lVar5 = (*pLVar12)[uVar4];
                        local_40._0_2_ = (unsigned short)*(uint8_t*)(lVar5 + 32);
                        pvVar10 = (vector<unsigned short>*)(*this_00)[local_40];
                        local_40 = (((uint64_t)local_40._2_6_ << 16) | (uint16_t)((short)uVar4));
                        pvVar10->push_back(local_40);
                        pLVar12 = local_48;
                        uVar4 = uVar4 + 1;
                        uVar11 = local_48->size();
                    } while (uVar4 < uVar11);
                }
            }
        }
    }

    // 0x100863b60
    bool BillboardBatch::CanSkipSortSections(
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
        unsigned long uVar6 = *(unsigned long*)(lVar4 + 8);
        lVar4 = sourceModelExternalIndexSections[uVar6];
        long lVar5 = (*((lVar4 + 20)))[uVar6];
        unsigned int uVar8 = *(unsigned int*)(lVar5 + 4) / 6;
        unsigned int uVar2 = field_296.size();
        if (uVar8 == uVar2) {
            local_34 = *(int*)(lVar4 + 64);
            iVar3 = field_360.size();
            if (local_34 == iVar3) {
                return uVar1;
            }
        }
        uVar6 = field_296.size();
        uVar2 = *(unsigned int*)(lVar4 + 64);
        uint64_t uVar7 = field_360.size();
        LogAssert(
            "((numContiguousFaces == (uint)m_faceHSL.size()) && (lastIndexSection.m_vertexEnd == "
            "(uint)m_vertexDataBuffer.size()))",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
            "BillboardBatch.cpp",
            800,
            "Mismatch between contiguous sort section ranges and existing data (%u vs %u faces / %u vs %u vertices)",
            (unsigned long)uVar8, uVar6 & 4294967295, (unsigned long)uVar2, uVar7);
    }

    // 0x100863dc0
    void BillboardBatch::Reserve(const BillboardBatchCombineHelper& billboardBatchCombineHelper) {
        unsigned int uVar1 = billboardBatchCombineHelper.GetLevel();
        field_264.reserve((unsigned long)uVar1);
        uVar1 = billboardBatchCombineHelper.GetLevel();
        field_296.reserve((unsigned long)uVar1 / 6);
        uVar1 = billboardBatchCombineHelper.GetLevel();
        field_328.reserve((unsigned long)uVar1 / 6);
        uVar1 = billboardBatchCombineHelper.GetMaxLineWidth();
        field_360.reserve((unsigned long)uVar1);
    }

    // 0x100863e60
    void BillboardBatch::Assign(const BillboardBatch& billboardBatch) {
        if (this != billboardBatch) {
            DestroyRenderingResources();
            *this = billboardBatch;
            m_transformed = billboardBatch.m_transformed;
            m_boneCount = billboardBatch.m_boneCount;
            m_boneIDMap = billboardBatch.m_boneIDMap;
            field_128 = billboardBatch.field_128;
            field_168 = billboardBatch.field_168;
            field_176 = billboardBatch.field_176;
            m_faceLabelCount = billboardBatch.m_faceLabelCount;
            field_40 = billboardBatch.field_40;
            m_billboardLabelCount = billboardBatch.m_billboardLabelCount;
            m_billboardLabelIDMap = billboardBatch.m_billboardLabelIDMap;
            field_264 = billboardBatch.field_264;
            field_296 = billboardBatch.field_296;
            field_328 = billboardBatch.field_328;
            field_360 = billboardBatch.field_360;
        }
    }

    // 0x1008640b0
    void BillboardBatch::Append(const BillboardBatch& billboardBatch, bool arg2) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar3;
        uint8_t uVar7;
        uint8_t bVar8;
        short* psVar13;
        unsigned long uVar14;
        Layout* pLVar18;
        BillboardBatchVertex* pBVar19;
        long lVar20;
        vector<unsigned short>* this_00;
        BillboardBatchVertex* this_01;
        unsigned long uVar21;
        uint64_t in_register_00000011;
        short sVar23;
        unsigned long local_c0;
        vector_map<unsigned short, eastl::vector<unsigned short>>* local_b8;
        vector<game::WorldMap::MapElementInstance>* local_b0;
        unsigned long local_a8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_a0;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_98;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_90;
        uint8_t* local_88;
        uint8_t* local_80;
        uint8_t* local_78;
        unsigned int local_70;
        unsigned int local_6c;
        uint32_t local_34;

        uint32_t local_4c = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (this == billboardBatch) {
            return;
        }
        DestroyRenderingResources();
        auto pAVar9 = billboardBatch.SSOBeginPtr();
        if (pAVar9->IsValid() != '\0') {
            pAVar9 = (AABB*)billboardBatch.SSOBeginPtr();
            Union(*pAVar9);
        }
        m_transformed = m_transformed | billboardBatch.m_transformed;
        uint8_t* puVar1 = &field_264;
        auto local_58 = puVar1->size();
        vector<game::WorldMap::MapElementInstance>* local_48 = (vector<game::WorldMap::MapElementInstance>*)&field_360;
        BillboardBatch* local_68 = this;
        unsigned long uVar10 = local_48->size();
        if (65534 < uVar10) {
            LogAssert("m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      423, nullptr);
        }
        unsigned long local_60 = local_48->size();
        long lVar11 = puVar1->size();
        uint8_t* puVar2 = &billboardBatch.field_264;
        GeometryBatch* local_40 = (GeometryBatch*)billboardBatch;
        long lVar12 = puVar2->size();
        puVar1->resize(lVar11 + lVar12);
        lVar11 = puVar2->size();
        unsigned short* puVar15 = local_58;
        if (lVar11 != 0) {
            uVar10 = 0;
            do {
                psVar13 = (short*)(*puVar2)[uVar10];
                sVar23 = *psVar13 + (short)local_60;
                psVar13 = (short*)(*puVar1)[uVar10 + (long)puVar15];
                *psVar13 = sVar23;
                uVar10 = uVar10 + 1;
                uVar14 = puVar2->size();
            } while (uVar10 < uVar14);
        }
        BillboardBatch* pBVar4 = local_68;
        puVar1 = &local_68->field_296;
        local_58 = (unsigned short*)puVar1->end();
        GeometryBatch* pGVar5 = local_40;
        puVar2 = &local_40->field_296;
        puVar15 = (unsigned short*)puVar2->HeapBeginPtr();
        auto puVar16 = puVar2->end();
        puVar1->insert<unsigned short const*>(local_58, puVar15, puVar16);
        auto arg1 = pBVar4->field_328.end();
        auto arg2_00 = pGVar5->field_328.HeapBeginPtr();
        auto arg3 = pGVar5->field_328.end();
        pBVar4->field_328.insert<unsigned char const*>(arg1, arg2_00, arg3);
        vector<game::WorldMap::MapElementInstance>* pvVar22 = local_48;
        lVar11 = local_48->size();
        vector<game::WorldMap::MapElementInstance>* this_02 =
            (vector<game::WorldMap::MapElementInstance>*)&pGVar5->field_360;
        lVar12 = this_02->size();
        pvVar22->resize(lVar11 + lVar12);
        vector_map<unsigned short, unsigned short> local_138;
        auto pvVar17 = pGVar5->GetBoneIDMap();
        uVar10 = pvVar17->size();
        local_138.reserve(uVar10);
        vector_map<unsigned short, unsigned short> local_110;
        pvVar17 = (vector<unsigned int>*)pGVar5->get_overflow_allocator();
        uVar10 = pvVar17->size();
        local_110.reserve(uVar10);
        vector_map<unsigned short, unsigned short> local_e8;
        pvVar17 = (vector<unsigned int>*)GetBillboardLabelIDMap((BillboardBatch*)pGVar5);
        uVar10 = pvVar17->size();
        local_e8.reserve(uVar10);
        if ((char)local_4c != '\0') {
            pLVar18 = (Layout*)pGVar5->GetBoneIDMap();
            puVar15 = (unsigned short*)pLVar18->HeapBeginPtr();
            puVar16 = (unsigned short*)pLVar18->end();
            if (puVar15 != puVar16) {
                do {
                    local_34 = eastl::make_pair<unsigned short const&, unsigned short const&>(*(puVar15 + 1), *puVar15);
                    local_138.insert<eastl::pair<unsigned short, unsigned short>, void>(local_34);
                    puVar15 = puVar15 + 2;
                } while (puVar15 != puVar16);
            }
            pLVar18 = (Layout*)local_40->get_overflow_allocator();
            puVar15 = (unsigned short*)pLVar18->HeapBeginPtr();
            puVar16 = (unsigned short*)pLVar18->end();
            if (puVar15 != puVar16) {
                do {
                    local_34 = eastl::make_pair<unsigned short const&, unsigned short const&>(*(puVar15 + 1), *puVar15);
                    local_110.insert<eastl::pair<unsigned short, unsigned short>, void>(local_34);
                    puVar15 = puVar15 + 2;
                } while (puVar15 != puVar16);
            }
            pLVar18 = (Layout*)GetBillboardLabelIDMap((BillboardBatch*)local_40);
            puVar15 = (unsigned short*)pLVar18->HeapBeginPtr();
            puVar16 = (unsigned short*)pLVar18->end();
            if (puVar15 != puVar16) {
                do {
                    local_34 = eastl::make_pair<unsigned short const&, unsigned short const&>(*(puVar15 + 1), *puVar15);
                    local_e8.insert<eastl::pair<unsigned short, unsigned short>, void>(local_34);
                    puVar15 = puVar15 + 2;
                } while (puVar15 != puVar16);
            }
            pGVar5 = local_40;
            pvVar22 = local_48;
            if ((char)local_4c != '\0') {
                uVar7 = HasBones((BillboardBatch*)local_40);
                local_58 = (unsigned short*)(((uint64_t)local_58._1_7_ << 8) | (uint8_t)uVar7);
                local_70 = GetFaceLabelCount((BillboardBatch*)pGVar5);
                local_6c = GetBillboardLabelCount((BillboardBatch*)pGVar5);
                uVar10 = this_02->size();
                if (65534 < uVar10) {
                    LogAssert("other.m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/BillboardBatch.cpp",
                              465, nullptr);
                }
                lVar11 = this_02->size();
                if (lVar11 != 0) {
                    local_c0 = local_60 & 65535;
                    local_98 =
                        (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_68->m_boneIDMap;
                    local_88 = &local_68->m_boneCount;
                    local_b8 = (vector_map<unsigned short, eastl::vector<unsigned short>>*)&local_68->field_128;
                    local_90 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_68->field_40;
                    local_80 = &local_68->m_faceLabelCount;
                    local_a0 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_68
                                   ->m_billboardLabelIDMap;
                    local_78 = &local_68->m_billboardLabelCount;
                    uVar10 = 0;
                    local_b0 = this_02;
                    do {
                        local_40 = (GeometryBatch*)(*pvVar22)[local_c0 + uVar10];
                        pBVar19 = (BillboardBatchVertex*)(*this_02)[uVar10];
                        *local_40 = *pBVar19;
                        if (((char)local_58 == '\0') || (local_40->m_boneCount == 0)) {
                            local_40->m_boneCount = 0;
                        } else {
                            local_34 =
                                (((uint32_t)local_34._2_2_ << 16) | (uint16_t)((unsigned short)local_40->m_boneCount));
                            local_a8 = uVar10;
                            lVar11 = eastl::vector_map<unsigned short, unsigned short>::find(local_138);
                            lVar12 = local_138.end();
                            pvVar3 = local_98;
                            if (lVar11 == lVar12) {
                                local_40->m_boneCount = 0;
                                uVar10 = local_a8;
                            } else {
                                lVar12 = eastl::vector_map<unsigned short, unsigned short>::find(*local_98);
                                uVar10 = local_a8;
                                lVar20 = pvVar3->end();
                                if (lVar12 == lVar20) {
                                    local_34 =
                                        eastl::make_pair<unsigned short&, unsigned char&>(*((lVar11 + 2)), *local_88);
                                    local_98->insert<eastl::pair<unsigned short, unsigned char>, void>(local_34);
                                    bVar8 = *local_88;
                                    local_40->m_boneCount = bVar8;
                                    bVar8 = bVar8 + 1;
                                    *local_88 = bVar8;
                                    if (56 < bVar8) {
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/BillboardBatch.cpp",
                                                  486, nullptr);
                                    }
                                } else {
                                    local_40->m_boneCount = *(uint8_t*)(lVar12 + 2);
                                }
                                local_34._0_2_ = (unsigned short)local_40->m_boneCount;
                                this_00 = (vector<unsigned short>*)(*local_b8)[local_34];
                                pvVar22 = local_48;
                                local_34 =
                                    (((uint32_t)local_34._2_2_ << 16) | (uint16_t)((short)local_60 + (short)uVar10));
                                this_00->push_back(local_34);
                            }
                        }
                        if ((local_70 < 2) || (local_40->field_33 == 0)) {
                            local_40->field_33 = 0;
                        } else {
                            local_34 = (((uint32_t)local_34._2_2_ << 16) |
                                        (uint16_t)((unsigned short)(uint8_t)local_40->field_33));
                            lVar11 = eastl::vector_map<unsigned short, unsigned short>::find(local_110);
                            lVar12 = local_110.end();
                            pvVar3 = local_90;
                            if (lVar11 == lVar12) {
                                local_40->field_33 = 0;
                            } else {
                                lVar12 = eastl::vector_map<unsigned short, unsigned short>::find(*local_90);
                                lVar20 = pvVar3->end();
                                if (lVar12 == lVar20) {
                                    local_34 =
                                        eastl::make_pair<unsigned short&, unsigned char&>(*((lVar11 + 2)), *local_80);
                                    local_90->insert<eastl::pair<unsigned short, unsigned char>, void>(local_34);
                                    bVar8 = *local_80;
                                    local_40->field_33 = bVar8;
                                    bVar8 = bVar8 + 1;
                                    *local_80 = bVar8;
                                    pvVar22 = local_48;
                                    if (32 < bVar8) {
                                        LogAssert("m_faceLabelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/BillboardBatch.cpp",
                                                  515, nullptr);
                                    }
                                } else {
                                    local_40->field_33 = *(uint8_t*)(lVar12 + 2);
                                    pvVar22 = local_48;
                                }
                            }
                        }
                        if ((local_6c < 2) || (local_40->m_transformed == false)) {
                            local_40->m_transformed = false;
                            this_02 = local_b0;
                        } else {
                            local_34 = (((uint32_t)local_34._2_2_ << 16) |
                                        (uint16_t)((unsigned short)(uint8_t)(local_40->m_transformed >> 1)));
                            lVar11 = eastl::vector_map<unsigned short, unsigned short>::find(local_e8);
                            lVar12 = local_e8.end();
                            pvVar3 = local_a0;
                            this_02 = local_b0;
                            if (lVar11 == lVar12) {
                                local_40->m_transformed = false;
                            } else {
                                lVar12 = eastl::vector_map<unsigned short, unsigned short>::find(*local_a0);
                                lVar20 = pvVar3->end();
                                if (lVar12 == lVar20) {
                                    local_34 =
                                        eastl::make_pair<unsigned short&, unsigned char&>(*((lVar11 + 2)), *local_78);
                                    local_a0->insert<eastl::pair<unsigned short, unsigned char>, void>(local_34);
                                    bVar8 = *local_78;
                                    local_40->m_transformed = (bool)(bVar8 * '\x02');
                                    bVar8 = bVar8 + 1;
                                    *local_78 = bVar8;
                                    pvVar22 = local_48;
                                    if (10 < bVar8) {
                                        LogAssert(
                                            "m_billboardLabelCount <= AnimationConstants::MAX_BILLBOARDLABELS_IN_BATCH",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/model/BillboardBatch.cpp",
                                            542, nullptr);
                                    }
                                    goto LAB_100864522;
                                }
                                local_40->m_transformed = (bool)(*(char*)(lVar12 + 2) * '\x02');
                            }
                            pvVar22 = local_48;
                        }
                    LAB_100864522:
                        uVar10 = uVar10 + 1;
                        uVar14 = this_02->size();
                    } while (uVar10 < uVar14);
                }
                goto LAB_100864916;
            }
        }
        lVar11 = this_02->size();
        if (lVar11 != 0) {
            uVar14 = local_60 & 65535;
            uVar10 = 0;
            do {
                pBVar19 = (BillboardBatchVertex*)(*this_02)[uVar10];
                this_01 = (BillboardBatchVertex*)(*pvVar22)[uVar14 + uVar10];
                *this_01 = *pBVar19;
                uVar10 = uVar10 + 1;
                uVar21 = this_02->size();
            } while (uVar10 < uVar21);
        }
    LAB_100864916:
        pBVar4 = local_68;
        if ((char)local_4c == '\0') {
            local_68->m_boneCount = 1;
            local_68->m_boneIDMap.clear();
            pBVar4->field_128.clear();
            pBVar4->field_168 = 0;
            pBVar4->field_176.clear();
            pBVar4->m_faceLabelCount = 1;
            pBVar4->field_40.clear();
            pBVar4->m_billboardLabelCount = 1;
            pBVar4->m_billboardLabelIDMap.clear();
        }
    }

    // 0x100864c90
    void BillboardBatch::Transform(const math::Matrix44T<float>& matrix44) {
        auto this_00 = field_360.HeapBeginPtr();
        auto pVVar1 = field_360.end();
        for (; this_00 != pVVar1; this_00 = this_00 + 36) {
            *this_00 *= matrix44;
        }
        m_transformed = 1;
    }

    // 0x100864d00
    void BillboardBatch::Translate(const math::Vector3T<float>& vector3) {
        auto this_00 = field_360.HeapBeginPtr();
        auto pVVar1 = field_360.end();
        for (; this_00 != pVVar1; this_00 = this_00 + 36) {
            *this_00 += vector3;
        }
        m_transformed = 1;
    }

    // 0x100864d70
    void BillboardBatch::Rotate(const math::QuaternionT<float>& quaternion, bool arg2) {
        uint64_t in_register_00000031;

        Vector3T<float>* vector3T = (Vector3T<float>*)((quaternion + 360))->HeapBeginPtr();
        Vector3T<float>* pVVar1 = (Vector3T<float>*)((quaternion + 360))->end();
        for (; vector3T != pVVar1; vector3T = vector3T + 36) {
            *vector3T *= ((QuaternionT<float>*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2));
        }
        quaternion[32] = (QuaternionT<float>)1;
    }

    // 0x100864de0
    void BillboardBatch::Rotate90(Rotation90 rotation90, bool arg2) {
        Layout* layout;
        unsigned int uVar1;
        Layout* this_00;
        Layout* pLVar2;
        unsigned int* puVar3;
        float* pfVar4;
        float* pfVar5;
        uint64_t in_register_00000031;
        uint32_t in_register_0000003c;
        unsigned int local_48;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2) != 0) {
            layout = (Layout*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)rotation90) + 360);
            this_00 = (Layout*)layout->HeapBeginPtr();
            pLVar2 = (Layout*)layout->end();
            for (; this_00 != pLVar2; this_00 = this_00 + 36) {
                if (arg2 == true) {
                    pfVar4 = (float*)this_00->SSOBeginPtr();
                    pfVar5 = (float*)this_00->second();
                    eastl::swap<float>(*pfVar4, *pfVar5);
                    puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                    local_48 = *puVar3;
                    puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                LAB_100864e79:
                    local_48 = local_48 ^ 2147483648;
                    *puVar3 = local_48;
                } else {
                    if (arg2 == true) {
                        puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                        uVar1 = *puVar3;
                        puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                        *puVar3 = uVar1 ^ 2147483648;
                    LAB_100864e5a:
                        puVar3 = (unsigned int*)this_00->second();
                        local_48 = *puVar3;
                        puVar3 = (unsigned int*)this_00->second();
                        goto LAB_100864e79;
                    }
                    if (arg2) {
                        pfVar4 = (float*)this_00->SSOBeginPtr();
                        pfVar5 = (float*)this_00->second();
                        eastl::swap<float>(*pfVar4, *pfVar5);
                        goto LAB_100864e5a;
                    }
                }
            }
            *(uint8_t*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)rotation90) + 32) = 1;
        }
    }

    // 0x100864f20
    void BillboardBatch::Scale(const math::Vector3T<float>& vector3) {
        Vector3T<float>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        uint8_t* this_00 = &field_360;
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (Vector3T<float>*)(*this_00)[arg1];
                *this_01 *= vector3;
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        m_transformed = 1;
    }

    // 0x100864f90
    void BillboardBatch::MirrorZ() {
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        uint8_t* this_00 = &field_360;
        long lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                lVar1 = (*this_00)[arg1];
                *(unsigned int*)(lVar1 + 8) = *(unsigned int*)(lVar1 + 8) ^ 2147483648;
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        m_transformed = 1;
    }

    // 0x100865000
    void BillboardBatch::HillChange(HillChange arg1, int arg2,
                                    const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg3,
                                    const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg4,
                                    const LocationHelpers::LocationHillChangeData& arg5) {
        int iVar1;
        float* pfVar3;

        auto this_00 = field_360.HeapBeginPtr();
        auto pVVar2 = field_360.end();
        for (; this_00 != pVVar2; this_00 = this_00 + 36) {
            iVar1 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, *this_00);
            pfVar3 = (float*)this_00->y();
            *pfVar3 = (float)iVar1;
        }
        m_transformed = 1;
    }

    // 0x1008650b0
    void BillboardBatch::Recolour(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
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

    // 0x100865140
    void BillboardBatch::RecolourSingle(unsigned short arg1, unsigned short arg2) {
        unsigned long uVar2;
        unsigned short* puVar3;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_296;
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

    // 0x1008651b0
    void BillboardBatch::AmbientAdjust(unsigned short arg1) {
        unsigned short* puVar2;
        uint16_t* puVar3;
        unsigned long uVar4;
        uint16_t uVar5;
        unsigned short arg2;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_296;
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

    // 0x100865230
    void BillboardBatch::TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        uint16_t uVar1;
        unsigned short* puVar3;
        uint16_t* puVar4;
        unsigned long uVar5;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_296;
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

    // 0x1008652e0
    void BillboardBatch::CreateRenderingResources() {
        uint8_t* this_00;
        uint8_t* this_01;
        int iVar3;
        float* pfVar4;
        float* pfVar5;
        void* pvVar6;
        BillboardBatchVertex* billboardBatchVertex;
        BillboardBatchVertex* pBVar7;
        VertexDeclaration* pVVar8;
        bool bVar9;
        vector<BillboardBatchVertexLP> local_50;

        int iVar2 = GetIndexCount();
        if (iVar2 != 0) {
            this_00 = &field_400;
            iVar2 = this_00->GetAliveCount();
            if (iVar2 == 0) {
                m_lowPrecision = true;
                if (IsValid() != '\0') {
                    pfVar4 = (float*)SSOBeginPtr();
                    pfVar5 = (float*)GetScreen();
                    bVar9 = false;
                    if ((-32768.0 <= *pfVar4) && (*pfVar4 <= 32767.0)) {
                        bVar9 = false;
                        if ((-32768.0 <= pfVar4[1]) && (pfVar4[1] <= 32767.0)) {
                            bVar9 = false;
                            if ((-32768.0 <= pfVar4[2]) && (pfVar4[2] <= 32767.0)) {
                                bVar9 = false;
                                if ((-32768.0 <= *pfVar5) && (*pfVar5 <= 32767.0)) {
                                    bVar9 = false;
                                    if ((-32768.0 <= pfVar5[1]) && (pfVar5[1] <= 32767.0)) {
                                        if (-32768.0 <= pfVar5[2]) {
                                            bVar9 = pfVar5[2] <= 32767.0;
                                        } else {
                                            bVar9 = false;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    m_lowPrecision = bVar9;
                }
                iVar2 = GetIndexCount();
                pvVar6 = (void*)field_264.HeapBeginPtr();
                this_00->Create(iVar2 * 2, 0, pvVar6, 5123);
                if (m_lowPrecision == false) {
                    pVVar8 = BillboardBatchRenderer::GetVertexDecl();
                    iVar2 = pVVar8->GetVertexStride(0);
                    iVar3 = field_360.size();
                    pvVar6 = (void*)field_360.HeapBeginPtr();
                    field_488.Create(iVar2 * iVar3, 0, pvVar6);
                    pVVar8 = BillboardBatchRenderer::GetVertexDecl();
                    m_forwardPassIAState->SetVertexStreamData(pVVar8, &field_488);
                    render::InputAssemblerState::SetIndexBuffer(m_forwardPassIAState, (unsigned int)this_00);
                } else {
                    local_50 = eastl::vector<BillboardBatchVertexLP>();
                    this_01 = &field_360;
                    local_50.reserve(this_01->size());
                    billboardBatchVertex = (BillboardBatchVertex*)this_01->HeapBeginPtr();
                    pBVar7 = (BillboardBatchVertex*)this_01->end();
                    if (billboardBatchVertex != pBVar7) {
                        do {
                            ((BillboardBatchVertexLP*)local_50.push_back())->Set(*billboardBatchVertex);
                            billboardBatchVertex = billboardBatchVertex + 1;
                        } while (billboardBatchVertex != pBVar7);
                    }
                    pVVar8 = BillboardBatchRenderer::GetVertexDeclLP();
                    iVar2 = pVVar8->GetVertexStride(0);
                    iVar3 = local_50.size();
                    pvVar6 = (void*)local_50.HeapBeginPtr();
                    field_488.Create(iVar2 * iVar3, 0, pvVar6);
                    pVVar8 = BillboardBatchRenderer::GetVertexDeclLP();
                    m_forwardPassIAState->SetVertexStreamData(pVVar8, &field_488);
                    render::InputAssemblerState::SetIndexBuffer(m_forwardPassIAState, (unsigned int)this_00);
                }
            }
        }
    }

} // namespace jag::graphics
