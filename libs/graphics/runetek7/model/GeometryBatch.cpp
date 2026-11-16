// libs/graphics/runetek7/model/GeometryBatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GeometryBatch.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    GeometryBatch::GetAABB() const;

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    GeometryBatch::GetBoneIDMap();

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    GeometryBatch::GetBoneIDMap() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    GeometryBatch::GetLabelIDMap();

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    GeometryBatch::GetLabelIDMap() const;

    // 0x1001c4880: the linker folded this into RT7Core::GetPostProcessManager(), which has identical code
    GeometryBatch::GetVertexDataBuffer();

    // 0x1001c4880: the linker folded this into RT7Core::GetPostProcessManager(), which has identical code
    GeometryBatch::GetVertexDataBuffer() const;

    // 0x10036bfe0: the linker folded this into GeometryBatch::GetJointIDMap(), which has identical code
    GeometryBatch::GetJointIDMap() const;

    // 0x10036da70: the linker folded this into GeometryBatch::GetVertexDataBufferPos() const, which has identical code
    GeometryBatch::GetVertexDataBufferPos();

    // 0x1004abeb0: the linker folded this into game::EnvironmentOverride::GetBloomOverrides() const, which has identical code
    GeometryBatch::GetBoneVertices() const;

    // 0x100524d00: the linker folded this into SpriteAtlasReference::SetDisableCache(bool), which has identical code
    GeometryBatch::SetShareLight(bool);

    // 0x10062b9b0: the linker folded this into Material::IsLegacyMaterial() const, which has identical code
    byte GeometryBatch::HasFaceTransparency() const;

    // 0x1006ad5d0: the linker folded this into ui::ComponentCollection::GetDynamicChildrenRenderOrderCollection(), which has identical code
    GeometryBatch::GetVertexDataBufferSkin() const;

    // 0x100804cb0, 576 bytes, base-object constructor, placed by class name and debug map
    // GeometryBatch::GeometryBatch()
    void GeometryBatch::GeometryBatch() {
        new (this) MakeSharedPool<GeometryBatch, 4096>();
        new (this) math::AABB();
        m_boneCount = 1;
        field_33 = 0;
        m_transformed = false;
        field_35 = 0;
        m_hasFaceTransparency = 0;
        m_shareLight = false;
        m_hidden = 0;
        m_vertexScale = 1.0;
        m_labelCount = 1;
        new (&field_48)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_88)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_128) eastl::vector_map<
            unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                          eastl::allocator>>();
        new (&field_168)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_numLods = 1;
        new (&field_216) std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>();
        new (&m_faceHSLBuffer) eastl::vector<unsigned short, eastl::allocator>();
        m_faceHSLBaked = false;
        new (&m_faceTransparencyBuffer) eastl::vector<unsigned char, eastl::allocator>();
        new (&field_448) eastl::vector<GeometryBatchVertex, eastl::allocator>();
        new (&field_480) eastl::vector<GeometryBatchVertexPos, eastl::allocator>();
        new (&field_512) Array<GeometryBatchVertexPosLP, eastl::allocator>();
        new (&m_vertexDataBufferSkin) eastl::vector<GeometryBatchVertexSkin, eastl::allocator>();
        new (&field_568) std::array<render::IndexBuffer, 5ul>();
        new (&field_1008) render::VertexBuffer();
        new (&field_1088) render::VertexBuffer();
        new (&field_1168) render::VertexBuffer();
        new (&field_1248) std::array<render::InputAssemblerState, 5ul>();
    }

    // 0x100805020, 16 bytes, complete-object constructor, placed by class name and debug map
    // GeometryBatch::GeometryBatch(): jumps straight to the base-object constructor

    // 0x100805030, 688 bytes, base-object constructor, placed by class name and debug map
    // GeometryBatch::GeometryBatch(GeometryBatch&&)
    void GeometryBatch::GeometryBatch(GeometryBatch* param_1) {
        new (this) MakeSharedPool<GeometryBatch, 4096>();
        new (this) math::AABB(param_1);
        m_boneCount = param_1->m_boneCount;
        field_33 = param_1->field_33;
        m_transformed = param_1->m_transformed;
        field_35 = param_1->field_35;
        m_hasFaceTransparency = param_1->m_hasFaceTransparency;
        m_shareLight = param_1->m_shareLight;
        m_hidden = param_1->m_hidden;
        m_vertexScale = 1.0;
        m_labelCount = param_1->m_labelCount;
        new (&field_48, (vector_map*)&param_1->field_48)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_88, (vector_map*)&param_1->field_88)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_128, (vector_map*)&param_1->field_128) eastl::vector_map<
            unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                          eastl::allocator>>();
        new (&field_168, (vector_map*)&param_1->field_168)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_numLods = param_1->m_numLods;
        new (&field_216, (array*)&param_1->field_216)
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>();
        new (&m_faceHSLBuffer, (vector*)&param_1->m_faceHSLBuffer) eastl::vector<unsigned short, eastl::allocator>();
        m_faceHSLBaked = param_1->m_faceHSLBaked;
        new (&m_faceTransparencyBuffer, (vector*)&param_1->m_faceTransparencyBuffer)
            eastl::vector<unsigned char, eastl::allocator>();
        new (&field_448, (vector*)&param_1->field_448) eastl::vector<GeometryBatchVertex, eastl::allocator>();
        new (&field_480, (vector*)&param_1->field_480) eastl::vector<GeometryBatchVertexPos, eastl::allocator>();
        new (&field_512, (Array*)&param_1->field_512) Array<GeometryBatchVertexPosLP, eastl::allocator>();
        new (&m_vertexDataBufferSkin, (vector*)&param_1->m_vertexDataBufferSkin)
            eastl::vector<GeometryBatchVertexSkin, eastl::allocator>();
        new (&field_568) std::array<render::IndexBuffer, 5ul>();
        new (&field_1008) render::VertexBuffer();
        new (&field_1088) render::VertexBuffer();
        new (&field_1168) render::VertexBuffer();
        new (&field_1248) std::array<render::InputAssemblerState, 5ul>();
    }

    // 0x100805330, 16 bytes, complete-object constructor, placed by class name and debug map
    // GeometryBatch::GeometryBatch(GeometryBatch&&): jumps straight to the base-object constructor

    // 0x100805340, 720 bytes, base-object constructor, placed by class name and debug map
    // GeometryBatch::GeometryBatch(GeometryBatch const&)
    void GeometryBatch::GeometryBatch(GeometryBatch* param_1) {
        new (this) MakeSharedPool<GeometryBatch, 4096>();
        new (this) math::AABB(param_1);
        m_boneCount = param_1->m_boneCount;
        field_33 = param_1->field_33;
        m_transformed = param_1->m_transformed;
        field_35 = param_1->field_35;
        m_hasFaceTransparency = param_1->m_hasFaceTransparency;
        m_shareLight = param_1->m_shareLight;
        m_hidden = param_1->m_hidden;
        m_vertexScale = 1.0;
        m_labelCount = param_1->m_labelCount;
        new (&field_48, (vector_map*)&param_1->field_48)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_88, (vector_map*)&param_1->field_88)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_128, (vector_map*)&param_1->field_128) eastl::vector_map<
            unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                          eastl::allocator>>();
        new (&field_168, (vector_map*)&param_1->field_168)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_numLods = param_1->m_numLods;
        new (&field_216, (array*)&param_1->field_216)
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>();
        new (&m_faceHSLBuffer, (vector*)&param_1->m_faceHSLBuffer) eastl::vector<unsigned short, eastl::allocator>();
        m_faceHSLBaked = param_1->m_faceHSLBaked;
        new (&m_faceTransparencyBuffer, (vector*)&param_1->m_faceTransparencyBuffer)
            eastl::vector<unsigned char, eastl::allocator>();
        new (&field_448, (vector*)&param_1->field_448) eastl::vector<GeometryBatchVertex, eastl::allocator>();
        new (&field_480, (vector*)&param_1->field_480) eastl::vector<GeometryBatchVertexPos, eastl::allocator>();
        new (&field_512, (Array*)&param_1->field_512) Array<GeometryBatchVertexPosLP, eastl::allocator>();
        new (&m_vertexDataBufferSkin, (vector*)&param_1->m_vertexDataBufferSkin)
            eastl::vector<GeometryBatchVertexSkin, eastl::allocator>();
        new (&field_568) std::array<render::IndexBuffer, 5ul>();
        new (&field_1008) render::VertexBuffer();
        new (&field_1088) render::VertexBuffer();
        new (&field_1168) render::VertexBuffer();
        new (&field_1248) std::array<render::InputAssemblerState, 5ul>();
    }

    // 0x100805660, 16 bytes, complete-object constructor, placed by class name and debug map
    // GeometryBatch::GeometryBatch(GeometryBatch const&): jumps straight to the base-object constructor

    // 0x100805670, 416 bytes, base-object destructor, placed by class name and debug map
    // GeometryBatch::~GeometryBatch()
    void GeometryBatch::~GeometryBatch() {
        DestroyRenderingResources(this);
        (&field_1248)->~array();
        (&field_1168)->~VertexBuffer();
        (&field_1088)->~VertexBuffer();
        (&field_1008)->~VertexBuffer();
        (&field_568)->~array();
        (&m_vertexDataBufferSkin)->~vector();
        (&field_512)->~Array();
        (&field_480)->~vector();
        (&field_448)->~vector();
        (&m_faceTransparencyBuffer)->~vector();
        (&m_faceHSLBuffer)->~vector();
        (&field_216)->~array();
        (&field_168)->~vector_map();
        (&field_128)->~vector_map();
        (&field_88)->~vector_map();
        (&field_48)->~vector_map();
    }

    // 0x100805810, 128 bytes, placed by class name and debug map
    // GeometryBatch::DestroyRenderingResources()
    void GeometryBatch::DestroyRenderingResources() {
        InputAssemblerState* this_00;
        IndexBuffer* this_01;
        ulong uVar1;

        uVar1 = 0;
        do {
            this_00 = (InputAssemblerState*)std::array<render::InputAssemblerState, 5ul>::operator[](
                (array<render::InputAssemblerState, 5ul>*)&field_1248, uVar1);
            this_00->Destroy();
            this_01 = (IndexBuffer*)std::array<render::IndexBuffer, 5ul>::operator[](
                (array<render::IndexBuffer, 5ul>*)&field_568, uVar1);
            this_01->Destroy();
            uVar1 = uVar1 + 1;
        } while (uVar1 != 5);
        (&field_1008)->Destroy();
        (&field_1088)->Destroy();
        (&field_1168)->Destroy();
    }

    // 0x1008058a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // GeometryBatch::~GeometryBatch(): jumps straight to the base-object destructor

    // 0x1008058b0, 240 bytes, placed by class name and debug map
    // GeometryBatch::UpdateAABB()
    void GeometryBatch::UpdateAABB() {
        undefined1* this_00;
        char cVar1;
        Vector3T* pVVar2;
        GeometryBatchVertexPosLP* pGVar3;
        Vector3T* pVVar4;
        GeometryBatchVertexPosLP* this_01;
        undefined8 local_38[2];

        Reset();
        this_00 = &field_512;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            this_01 = (GeometryBatchVertexPosLP*)this_00->data();
            pGVar3 = (GeometryBatchVertexPosLP*)this_00->end();
            if (this_01 != pGVar3) {
                do {
                    local_38[0] = this_01->GetPosition();
                    AddPoint(local_38);
                    this_01 = (GeometryBatchVertexPosLP*)&this_01->field_8;
                } while (this_01 != pGVar3);
            }
            if (m_vertexScale != 1.0) {
                new (local_38) math::Vector3T<float>(m_vertexScale);
                Scale(local_38);
            }
        } else {
            pVVar4 = (Vector3T*)(&field_480)->HeapBeginPtr();
            pVVar2 = (Vector3T*)(&field_480)->end();
            for (; pVVar4 != pVVar2; pVVar4 = pVVar4 + 16) {
                AddPoint(pVVar4);
            }
        }
    }

    // 0x1008059a0, 4896 bytes, placed by class name and debug map
    // GeometryBatch::LoadMeshFromModelRawRT7(PacketView&, unsigned int)
    ulong GeometryBatch::LoadMeshFromModelRawRT7(PacketView* param_1, uint param_2) {
        vector<unsigned short, eastl::allocator>* pvVar1;
        undefined1 uVar2;
        char cVar3;
        undefined2 uVar4;
        Layout* this_00;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* pvVar5;
        array<eastl::vector<unsigned short, eastl::allocator>, 5ul>* this_01;
        GeometryBatch* pGVar6;
        byte bVar7;
        ushort uVar8;
        uint uVar9;
        int iVar10;
        ushort* puVar11;
        ushort* puVar12;
        uchar* puVar13;
        short* psVar14;
        undefined8 uVar15;
        vector* pvVar16;
        vector<unsigned short, eastl::allocator>* pvVar17;
        signed* psVar18;
        array<unsigned short, 2ul>* paVar19;
        float* pfVar20;
        array<unsigned short, 2ul>* paVar21;
        undefined2* puVar22;
        long lVar23;
        Callstack* this_02;
        Callstack* pCVar24;
        long lVar25;
        undefined1* puVar26;
        char* pcVar27;
        byte* pbVar28;
        Vector4T<signed char>* pVVar29;
        ulong uVar30;
        ulong uVar31;
        Vector4T<signed char>* pVVar32;
        bool bVar33;
        ushort local_380[256];
        Array<short, BucketAllocatorEASTL> local_180[24];
        Array<short, BucketAllocatorEASTL> local_168[24];
        Array<unsigned short, BucketAllocatorEASTL> local_150[24];
        Array<unsigned char, BucketAllocatorEASTL> local_138[24];
        Layout* local_120;
        ulong local_118;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_110;
        Array<unsigned short, BucketAllocatorEASTL> local_108[24];
        array<eastl::vector<unsigned short, eastl::allocator>, 5ul>* local_f0;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_e8;
        Vector4T<signed char>* local_e0;
        Array<short, BucketAllocatorEASTL> local_d8[24];
        Array<signed char, BucketAllocatorEASTL> local_c0[24];
        Array<signed char, BucketAllocatorEASTL> local_a8[24];
        Vector4T<signed char>* local_90;
        Vector4T<signed char>* local_88;
        Vector4T<signed char>* local_80;
        vector<GeometryBatchVertexPos, eastl::allocator>* local_78;
        uint local_6c;
        Vector4T<signed char>* local_68;
        undefined1* local_60;
        GeometryBatch* local_58;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_50;
        byte local_41;
        undefined1 local_40[8];
        vector<unsigned short, eastl::allocator>* local_38;

        m_transformed = false;
        bVar7 = (byte)param_2;
        field_35 = bVar7 & 1;
        m_hasFaceTransparency = bVar7 >> 1 & 1;
        m_hidden = bVar7 >> 4 & 1;
        local_6c = param_2;
        uVar8 = param_1->g2LE();
        uVar30 = (ulong)uVar8;
        puVar11 = &m_faceHSLBuffer;
        local_58 = this;
        if (field_35 == 0) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            puVar11->reserve(uVar30);
            puVar12 = (ushort*)puVar11->end();
            local_380[0] = 65535;
            puVar11->insert(puVar12, uVar30, local_380);
        } else {
            eastl::vector<unsigned short, eastl::allocator>::resize((ulong)puVar11);
            puVar11 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                (vector<unsigned short, eastl::allocator>*)puVar11, 0);
            param_1->g2ArrLE(puVar11, uVar30);
        }
        puVar26 = &local_58->m_faceTransparencyBuffer;
        if (local_58->m_hasFaceTransparency == 0) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            puVar26->reserve(uVar30);
            puVar13 = (uchar*)puVar26->end();
            local_380[0] = CONCAT11(local_380[0]._1_1_, 255);
            puVar26->insert(puVar13, uVar30, local_380);
        } else {
            eastl::vector<unsigned char, eastl::allocator>::resize((ulong)puVar26);
            puVar13 = (uchar*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                (vector<unsigned char, eastl::allocator>*)puVar26, 0);
            param_1->g1Arr(puVar13, uVar30);
        }
        Array<short, BucketAllocatorEASTL>::Array(local_180);
        if ((local_6c & 4) != 0) {
            local_180->set_max_size(uVar30, 4);
            psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_180, 0);
            param_1->g2sArrLE(psVar14, uVar30);
        }
        bVar7 = param_1->g1();
        local_58->m_numLods = (uint)bVar7;
        local_f0 = (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&local_58->field_216;
        bVar33 = bVar7 != 0;
        local_118 = uVar30;
        if (bVar33) {
            local_38 = (vector<unsigned short, eastl::allocator>*)(uVar30 * 3);
            uVar30 = 0;
            do {
                local_41 = bVar33;
                uVar9 = param_1->g2LE();
                this_02 = (Callstack*)(ulong)uVar9;
                if ((ushort)uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("indexCount > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              154, (char*)0);
                }
                pvVar17 = (vector<unsigned short, eastl::allocator>*)(ulong)(ushort)uVar9;
                if ((ulong)pvVar17 % 3 == 0) {
                    if ((uVar30 == 0) && (local_38 != pvVar17)) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("i > 0 || faceCount * 3 == indexCount",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/model/GeometryBatch.cpp",
                                  161, (char*)0);
                    }
                    this_02 = (Callstack*)std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                        local_f0, uVar30);
                    eastl::vector<unsigned short, eastl::allocator>::resize_uninitialized((ulong)this_02);
                    puVar11 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                        (vector<unsigned short, eastl::allocator>*)this_02, 0);
                    param_1->g2ArrLE(puVar11, (ulong)pvVar17);
                } else {
                    uVar15 = logger::default_logger();
                    logger::Logger::Log(uVar15, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/model/GeometryBatch.cpp",
                                        158, "GeometryBatch found with indexCount not multiple of 3!");
                }
                if ((ulong)pvVar17 % 3 != 0)
                    goto LAB_100806952;
                uVar30 = uVar30 + 1;
                bVar33 = uVar30 < local_58->m_numLods;
            } while (bVar33);
        }
        this_01 = local_f0;
        uVar30 = (ulong)local_58->m_numLods;
        if (uVar30 < 5) {
            do {
                pvVar16 = (vector*)std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                    this_01, (ulong)(local_58->m_numLods - 1));
                pvVar17 = (vector<unsigned short, eastl::allocator>*)
                    std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](this_01, uVar30);
                eastl::vector<unsigned short, eastl::allocator>::operator=(pvVar17, pvVar16);
                uVar30 = uVar30 + 1;
            } while (uVar30 != 5);
        }
        pGVar6 = local_58;
        local_58->m_numLods = 5;
        local_41 = bVar33;
        uVar8 = param_1->g2LE();
        local_68 = (Vector4T<signed char>*)(ulong)uVar8;
        local_90 = (Vector4T<signed char>*)&pGVar6->field_448;
        local_90->resize((ulong)local_68);
        local_78 = (vector<GeometryBatchVertexPos, eastl::allocator>*)&pGVar6->field_480;
        eastl::vector<GeometryBatchVertexPos, eastl::allocator>::resize((ulong)local_78);
        local_120 = (Layout*)&pGVar6->m_vertexDataBufferSkin;
        eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::resize((ulong)local_120);
        pGVar6->m_labelCount = 1;
        local_e8 = (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                               eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&pGVar6
                       ->field_48;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pGVar6->m_boneCount = 1;
        local_110 = (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&pGVar6
                        ->field_88;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_02 = (Callstack*)&pGVar6->field_128;
        this_02->clear();
        local_88 = (Vector4T<signed char>*)this_02;
        this_02->reserve(56);
        if (uVar8 != 0) {
            Array<short, BucketAllocatorEASTL>::Array(local_d8);
            uVar30 = (ulong)(uint)((int)local_68 * 3);
            local_d8->set_max_size(uVar30, 4);
            psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, 0);
            param_1->g2sArrLE(psVar14, uVar30);
            Array<signed char, BucketAllocatorEASTL>::Array(local_c0);
            local_c0->set_max_size(uVar30, 4);
            psVar18 = (signed*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c0, 0);
            param_1->g1sArr(psVar18, uVar30);
            Array<signed char, BucketAllocatorEASTL>::Array(local_a8);
            uVar30 = (ulong)(uint)((int)local_68 * 4);
            local_a8->set_max_size(uVar30, 4);
            psVar18 = (signed*)Array<signed char, BucketAllocatorEASTL>::operator[](local_a8, 0);
            param_1->g1sArr(psVar18, uVar30);
            Array<unsigned short, BucketAllocatorEASTL>::Array(local_108);
            uVar30 = (ulong)(uint)((int)local_68 * 2);
            local_108->set_max_size(uVar30, 4);
            puVar11 = (ushort*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_108, 0);
            param_1->g2Arr(puVar11, uVar30);
            Array<short, BucketAllocatorEASTL>::Array(local_168);
            if ((local_6c & 8) != 0) {
                local_168->set_max_size((ulong)local_68, 4);
                psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_168, 0);
                param_1->g2sArrLE(psVar14, (ulong)local_68);
            }
            Array<unsigned short, BucketAllocatorEASTL>::Array(local_150);
            Array<unsigned char, BucketAllocatorEASTL>::Array(local_138);
            if ((local_6c & 32) != 0) {
                iVar10 = param_1->g4LE();
                uVar30 = (ulong)iVar10;
                local_150->set_max_size(uVar30, 4);
                puVar11 = (ushort*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_150, 0);
                param_1->g2ArrLE(puVar11, uVar30);
                local_138->set_max_size(uVar30, 4);
                puVar13 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_138, 0);
                param_1->g1Arr(puVar13, uVar30);
            }
            ___bzero(local_380, 512);
            uVar9 = (uint)local_68;
            if ((local_6c & 40) == 0) {
                local_80 = (Vector4T<signed char>*)&DAT_00000001;
                if (1 < uVar9) {
                    local_80 = (Vector4T<signed char>*)((ulong)local_68 & 4294967295);
                }
                local_38 = (vector<unsigned short, eastl::allocator>*)2;
                local_50 = (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)3;
                local_60 = &DAT_00000001;
                pVVar29 = (Vector4T<signed char>*)0;
                do {
                    paVar19 =
                        (array<unsigned short, 2ul>*)eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertex, eastl::allocator>*)local_90, (ulong)pVVar29);
                    local_88 = pVVar29;
                    pfVar20 = (float*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                        local_78, (ulong)pVVar29);
                    *(undefined2*)(pfVar20 + 3) = 0;
                    pvVar17 = local_38 + -2;
                    psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)pvVar17);
                    pvVar1 = local_38 + -1;
                    *pfVar20 = (float)(int)*psVar14;
                    psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)pvVar1);
                    pfVar20[1] = (float)(int)*psVar14;
                    psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)local_38);
                    pfVar20[2] = (float)(int)*psVar14;
                    paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                        local_c0, (ulong)pvVar17);
                    paVar19[4] = *paVar21;
                    paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                        local_c0, (ulong)pvVar1);
                    paVar19[5] = *paVar21;
                    paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                        local_c0, (ulong)local_38);
                    paVar19[6] = *paVar21;
                    paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                        local_a8, (ulong)(local_50 + -3));
                    paVar19[8] = *paVar21;
                    paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                        local_a8, (ulong)(local_50 + -2));
                    paVar19[9] = *paVar21;
                    paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                        local_a8, (ulong)(local_50 + -1));
                    paVar19[10] = *paVar21;
                    paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                        local_a8, (ulong)local_50);
                    paVar19[11] = *paVar21;
                    puVar22 = (undefined2*)Array<unsigned short, BucketAllocatorEASTL>::operator[](
                        local_108, (ulong)(local_60 + -1));
                    pvVar17 = local_38;
                    uVar4 = *puVar22;
                    puVar22 = (undefined2*)std::array<unsigned short, 2ul>::operator[](paVar19, 0);
                    *puVar22 = uVar4;
                    puVar22 = (undefined2*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_108,
                                                                                                   (ulong)local_60);
                    uVar4 = *puVar22;
                    puVar22 = (undefined2*)std::array<unsigned short, 2ul>::operator[](paVar19, 1);
                    *puVar22 = uVar4;
                    pVVar29 = local_88 + 1;
                    local_38 = pvVar17 + 3;
                    local_50 = local_50 + 4;
                    local_60 = local_60 + 2;
                } while (local_80 != pVVar29);
            } else {
                if ((local_6c & 8) == 0) {
                    local_e0 = (Vector4T<signed char>*)&DAT_00000001;
                    if (1 < uVar9) {
                        local_e0 = (Vector4T<signed char>*)((ulong)local_68 & 4294967295);
                    }
                    local_38 = (vector<unsigned short, eastl::allocator>*)2;
                    local_50 =
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)3;
                    local_60 = &DAT_00000001;
                    pVVar29 = (Vector4T<signed char>*)0;
                    do {
                        paVar19 = (array<unsigned short, 2ul>*)
                            eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                                (vector<GeometryBatchVertex, eastl::allocator>*)local_90, (ulong)pVVar29);
                        local_80 = pVVar29;
                        pfVar20 = (float*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            local_78, (ulong)pVVar29);
                        *(undefined2*)(pfVar20 + 3) = 0;
                        pvVar17 = local_38 + -2;
                        psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)pvVar17);
                        pvVar1 = local_38 + -1;
                        *pfVar20 = (float)(int)*psVar14;
                        psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)pvVar1);
                        pfVar20[1] = (float)(int)*psVar14;
                        psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)local_38);
                        pfVar20[2] = (float)(int)*psVar14;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_c0, (ulong)pvVar17);
                        paVar19[4] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_c0, (ulong)pvVar1);
                        paVar19[5] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_c0, (ulong)local_38);
                        paVar19[6] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)(local_50 + -3));
                        paVar19[8] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)(local_50 + -2));
                        paVar19[9] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)(local_50 + -1));
                        paVar19[10] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)local_50);
                        paVar19[11] = *paVar21;
                        puVar22 = (undefined2*)Array<unsigned short, BucketAllocatorEASTL>::operator[](
                            local_108, (ulong)(local_60 + -1));
                        pvVar17 = local_38;
                        uVar4 = *puVar22;
                        puVar22 = (undefined2*)std::array<unsigned short, 2ul>::operator[](paVar19, 0);
                        *puVar22 = uVar4;
                        puVar22 = (undefined2*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_108,
                                                                                                       (ulong)local_60);
                        uVar4 = *puVar22;
                        puVar22 = (undefined2*)std::array<unsigned short, 2ul>::operator[](paVar19, 1);
                        *puVar22 = uVar4;
                        pVVar29 = local_80 + 1;
                        local_38 = pvVar17 + 3;
                        local_50 = local_50 + 4;
                        local_60 = local_60 + 2;
                    } while (local_e0 != pVVar29);
                } else {
                    local_e0 = (Vector4T<signed char>*)&DAT_00000001;
                    if (1 < uVar9) {
                        local_e0 = (Vector4T<signed char>*)((ulong)local_68 & 4294967295);
                    }
                    pVVar29 = (Vector4T<signed char>*)2;
                    local_38 = (vector<unsigned short, eastl::allocator>*)3;
                    local_50 =
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>*)&DAT_00000001;
                    puVar26 = (undefined1*)0;
                    do {
                        paVar19 = (array<unsigned short, 2ul>*)
                            eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                                (vector<GeometryBatchVertex, eastl::allocator>*)local_90, (ulong)puVar26);
                        pfVar20 = (float*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            local_78, (ulong)puVar26);
                        *(undefined1*)((long)pfVar20 + 13) = 0;
                        puVar11 = (ushort*)Array<short, BucketAllocatorEASTL>::operator[](local_168, (ulong)puVar26);
                        pvVar5 = local_110;
                        uVar8 = *puVar11;
                        local_60 = puVar26;
                        if (uVar8 == 65535) {
                            *(undefined1*)(pfVar20 + 3) = 0;
                        } else {
                            local_80 = pVVar29;
                            local_40._0_2_ = uVar8;
                            lVar23 =
                                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                  eastl::allocator,
                                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                eastl::allocator>>::find(local_110, (ushort*)local_40);
                            lVar25 = pvVar5->end();
                            if (lVar23 == lVar25) {
                                bVar7 = local_58->m_boneCount;
                                *(byte*)(pfVar20 + 3) = bVar7;
                                local_58->m_boneCount = bVar7 + 1;
                                local_40._0_2_ = uVar8;
                                puVar11 = (ushort*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>::operator[](pvVar5, (ushort*)local_40);
                                *puVar11 = (ushort)bVar7;
                                pVVar29 = local_80;
                                if (56 < local_58->m_boneCount) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/model/GeometryBatch.cpp",
                                              252, (char*)0);
                                }
                            } else {
                                *(undefined1*)(pfVar20 + 3) = *(undefined1*)(lVar23 + 2);
                                pVVar29 = local_80;
                            }
                        }
                        psVar14 = (short*)std::array<unsigned short, 256ul>::operator[](
                            (array<unsigned short, 256ul>*)local_380, (ulong) * (byte*)(pfVar20 + 3));
                        *psVar14 = *psVar14 + 1;
                        psVar14 =
                            (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)(pVVar29 + -2));
                        *pfVar20 = (float)(int)*psVar14;
                        psVar14 =
                            (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)(pVVar29 + -1));
                        pfVar20[1] = (float)(int)*psVar14;
                        psVar14 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_d8, (ulong)pVVar29);
                        pfVar20[2] = (float)(int)*psVar14;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_c0, (ulong)(pVVar29 + -2));
                        paVar19[4] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_c0, (ulong)(pVVar29 + -1));
                        paVar19[5] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_c0, (ulong)pVVar29);
                        paVar19[6] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)(local_38 + -3));
                        paVar19[8] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)(local_38 + -2));
                        paVar19[9] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)(local_38 + -1));
                        paVar19[10] = *paVar21;
                        paVar21 = (array<unsigned short, 2ul>*)Array<signed char, BucketAllocatorEASTL>::operator[](
                            local_a8, (ulong)local_38);
                        paVar19[11] = *paVar21;
                        puVar22 = (undefined2*)Array<unsigned short, BucketAllocatorEASTL>::operator[](
                            local_108, (ulong)(local_50 + -1));
                        uVar4 = *puVar22;
                        puVar22 = (undefined2*)std::array<unsigned short, 2ul>::operator[](paVar19, 0);
                        *puVar22 = uVar4;
                        puVar22 = (undefined2*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_108,
                                                                                                       (ulong)local_50);
                        uVar4 = *puVar22;
                        puVar22 = (undefined2*)std::array<unsigned short, 2ul>::operator[](paVar19, 1);
                        *puVar22 = uVar4;
                        puVar26 = local_60 + 1;
                        pVVar29 = pVVar29 + 3;
                        local_38 = local_38 + 4;
                        local_50 = local_50 + 2;
                    } while (local_e0 != (Vector4T<signed char>*)puVar26);
                }
                uVar30 = 1;
                if (1 < (uint)local_68) {
                    uVar30 = (ulong)local_68 & 4294967295;
                }
                uVar31 = 0;
                do {
                    lVar23 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](local_78, uVar31);
                    local_40._0_2_ = ZEXT12(*(byte*)(lVar23 + 12));
                    pvVar17 = (vector<unsigned short, eastl::allocator>*)eastl::vector_map<
                        unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
                        eastl::allocator,
                        eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                      eastl::allocator>>::
                    operator[](
                        (vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>*)local_88,
                        (ushort*)local_40);
                    puVar11 = (ushort*)std::array<unsigned short, 256ul>::operator[](
                        (array<unsigned short, 256ul>*)local_380, (ulong) * (byte*)(lVar23 + 12));
                    eastl::vector<unsigned short, eastl::allocator>::reserve(pvVar17, (ulong)*puVar11);
                    local_40._0_2_ = SUB82(uVar31, 0);
                    eastl::vector<unsigned short, eastl::allocator>::push_back(pvVar17, (ushort*)local_40);
                    uVar31 = uVar31 + 1;
                } while (uVar30 != uVar31);
            }
            this_00 = local_120;
            if ((local_6c & 32) == 0) {
                this_02 = (Callstack*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_120);
                pCVar24 = (Callstack*)this_00->end();
                if (this_02 != pCVar24) {
                    do {
                        new (local_40) math::Vector4T<unsigned char>('\0', '\0', '\0', '\0');
                        math::Vector4T<signed char>::operator=((Vector4T<signed char>*)this_02, (Vector4T*)local_40);
                        new (local_40) math::Vector4T<unsigned char>(255, '\0', '\0', '\0');
                        math::Vector4T<signed char>::operator=((Vector4T<signed char>*)&this_02->field_4,
                                                               (Vector4T*)local_40);
                        this_02 = (Callstack*)&this_02->field_8;
                    } while (this_02 != pCVar24);
                }
            } else {
                pVVar29 = (Vector4T<signed char>*)&DAT_00000001;
                if (1 < (uint)local_68) {
                    pVVar29 = (Vector4T<signed char>*)((ulong)local_68 & 4294967295);
                }
                local_50 =
                    (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&local_58
                        ->field_168;
                this_02 = (Callstack*)local_40;
                pVVar32 = (Vector4T<signed char>*)0;
                local_38 = (vector<unsigned short, eastl::allocator>*)((ulong)local_38 & 18446744069414584320);
                local_68 = pVVar29;
                do {
                    pVVar29 =
                        (Vector4T<signed char>*)eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertexSkin, eastl::allocator>*)local_120, (ulong)pVVar32);
                    callstack::Callstack::Callstack(this_02);
                    local_80 = pVVar32;
                    math::Vector4T<signed char>::operator=(pVVar29, (Vector4T*)this_02);
                    callstack::Callstack::Callstack(this_02);
                    local_88 = pVVar29 + 4;
                    local_90 = pVVar29;
                    math::Vector4T<signed char>::operator=(local_88, (Vector4T*)this_02);
                    uVar9 = 0;
                    local_60 = (undefined1*)((ulong)local_60 & 18446744069414584320);
                    do {
                        uVar30 = (ulong)(int)local_38;
                        puVar11 = (ushort*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_150, uVar30);
                        local_40._0_2_ = *puVar11;
                        if (local_40._0_2_ == 65535) {
                            puVar26 = (undefined1*)math::Vector4T<unsigned char>::operator[](
                                (Vector4T<unsigned char>*)local_90, uVar9);
                            *puVar26 = 0;
                            puVar26 = (undefined1*)math::Vector4T<unsigned char>::operator[](
                                (Vector4T<unsigned char>*)local_88, uVar9);
                            *puVar26 = 0;
                        } else {
                            lVar23 =
                                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                  eastl::allocator,
                                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                eastl::allocator>>::find(local_50, (ushort*)this_02);
                            lVar25 = local_50->end();
                            if (lVar23 == lVar25) {
                                bVar7 = local_58->m_boneCount;
                                pbVar28 = (byte*)math::Vector4T<unsigned char>::operator[](
                                    (Vector4T<unsigned char>*)local_90, uVar9);
                                *pbVar28 = bVar7;
                                bVar7 = local_58->m_boneCount;
                                local_58->m_boneCount = bVar7 + 1;
                                puVar11 = (ushort*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>::operator[](local_50, (ushort*)this_02);
                                *puVar11 = (ushort)bVar7;
                                local_58->field_33 = local_58->field_33 + '\x01';
                                if (56 < local_58->m_boneCount) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/model/GeometryBatch.cpp",
                                              395, (char*)0);
                                }
                            } else {
                                uVar4 = *(undefined2*)(lVar23 + 2);
                                puVar26 = (undefined1*)math::Vector4T<unsigned char>::operator[](
                                    (Vector4T<unsigned char>*)local_90, uVar9);
                                *puVar26 = (char)uVar4;
                            }
                            pcVar27 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_138, uVar30);
                            local_38 =
                                (vector<unsigned short, eastl::allocator>*)CONCAT44(local_38._4_4_, (int)local_38 + 1);
                            cVar3 = *pcVar27;
                            if (cVar3 == '\0') {
                                pbVar28 = (byte*)math::Vector4T<unsigned char>::operator[](
                                    (Vector4T<unsigned char>*)local_88, uVar9);
                                *pbVar28 = ~(byte)local_60;
                                iVar10 = 23;
                            } else {
                                pcVar27 = (char*)math::Vector4T<unsigned char>::operator[](
                                    (Vector4T<unsigned char>*)local_88, uVar9);
                                *pcVar27 = cVar3;
                                local_60 = (undefined1*)CONCAT44(
                                    local_60._4_4_, CONCAT31((int3)((ulong)local_60 >> 8), (char)local_60 + cVar3));
                                iVar10 = 0;
                            }
                            if ((iVar10 != 25) && (iVar10 != 0))
                                break;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 4);
                    pVVar32 = local_80 + 1;
                } while (pVVar32 != local_68);
            }
            if (((local_6c & 4) != 0) &&
                (local_38 = (vector<unsigned short, eastl::allocator>*)
                     std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](local_f0, 0),
                 local_118 != 0)) {
                uVar31 = 2;
                uVar30 = 0;
                do {
                    puVar11 = (ushort*)Array<short, BucketAllocatorEASTL>::operator[](local_180, uVar30);
                    pvVar5 = local_e8;
                    uVar8 = *puVar11;
                    if (uVar8 != 65535) {
                        local_60 = (undefined1*)CONCAT62(local_60._2_6_, uVar8);
                        local_40._0_2_ = uVar8;
                        lVar23 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                   eastl::allocator,
                                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                 eastl::allocator>>::find(local_e8, (ushort*)local_40);
                        local_50 =
                            (vector_map<
                                unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)(uVar31 -
                                                                                                                1);
                        lVar25 = pvVar5->end();
                        if (lVar23 == lVar25) {
                            uVar2 = local_58->m_labelCount;
                            puVar11 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](local_38,
                                                                                                           uVar31 - 2);
                            lVar23 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                local_78, (ulong)*puVar11);
                            *(undefined1*)(lVar23 + 13) = uVar2;
                            uVar2 = local_58->m_labelCount;
                            puVar11 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                local_38, (ulong)local_50);
                            lVar23 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                local_78, (ulong)*puVar11);
                            *(undefined1*)(lVar23 + 13) = uVar2;
                            uVar2 = local_58->m_labelCount;
                            puVar11 =
                                (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](local_38, uVar31);
                            lVar23 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                local_78, (ulong)*puVar11);
                            *(undefined1*)(lVar23 + 13) = uVar2;
                            bVar7 = local_58->m_labelCount;
                            this_02 = (Callstack*)0;
                            local_58->m_labelCount = bVar7 + 1;
                            local_40._0_2_ = (ushort)local_60;
                            puVar11 = (ushort*)eastl::vector_map<
                                unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                              eastl::allocator>>::operator[](local_e8, (ushort*)local_40);
                            *puVar11 = (ushort)bVar7;
                        } else {
                            uVar2 = *(undefined1*)(lVar23 + 2);
                            puVar11 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](local_38,
                                                                                                           uVar31 - 2);
                            lVar25 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                local_78, (ulong)*puVar11);
                            *(undefined1*)(lVar25 + 13) = uVar2;
                            uVar2 = *(undefined1*)(lVar23 + 2);
                            puVar11 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                local_38, (ulong)local_50);
                            lVar25 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                local_78, (ulong)*puVar11);
                            *(undefined1*)(lVar25 + 13) = uVar2;
                            uVar2 = *(undefined1*)(lVar23 + 2);
                            this_02 = (Callstack*)0;
                            puVar11 =
                                (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](local_38, uVar31);
                            lVar23 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                local_78, (ulong)*puVar11);
                            *(undefined1*)(lVar23 + 13) = uVar2;
                        }
                    }
                    uVar30 = uVar30 + 1;
                    uVar31 = uVar31 + 3;
                } while (local_118 != uVar30);
            }
            uVar30 = local_e8->size();
            if (32 < uVar30) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_labelIDMap.size() <= AnimationConstants::MAX_LABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          459, (char*)0);
            }
            uVar30 = local_110->size();
            if (56 < uVar30) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_boneIDMap.size() <= AnimationConstants::MAX_BONES_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          460, (char*)0);
            }
            local_138->~Array();
            local_150->~Array();
            local_168->~Array();
            local_108->~Array();
            local_a8->~Array();
            local_c0->~Array();
            local_d8->~Array();
        }
    LAB_100806952:
        bVar7 = ~local_41;
        local_180->~Array();
        return CONCAT71((int7)((ulong)this_02 >> 8), bVar7) & 4294967041;
    }

    // 0x1008072b0, 1440 bytes, placed by class name and debug map
    // GeometryBatch::LoadMeshFromData(unsigned long, unsigned long, math::Vector3T<float> const*, math::Vector3T<float> const*, math::Vector4T<float> const*, math::Vector2T<float> const*, unsigned long, unsigned short const*, math::Vector3T<float> const&, unsigned int)
    /* WARNING: Removing unreachable block (ram,4303385742) */
    /* GeometryBatch::LoadMeshFromData(unsigned long, unsigned long,
   math::Vector3T<float> const*, math::Vector3T<float> const*, math::Vector4T<float>
   const*, math::Vector2T<float> const*, unsigned long, unsigned short const*,
   math::Vector3T<float> const&, unsigned int) */

    bool GeometryBatch::LoadMeshFromData(ulong param_1, ulong param_2, Vector3T* param_3, Vector3T* param_4,
                                         Vector4T* param_5, Vector2T* param_6, ulong param_7, ushort* param_8,
                                         Vector3T* param_9, uint param_10) {
        undefined1* puVar1;
        Vector4T* pVVar2;
        Vector2T* pVVar3;
        Vector3T* pVVar4;
        char cVar5;
        array<unsigned short, 2ul> aVar6;
        undefined2 uVar7;
        uint uVar8;
        uchar* puVar9;
        ushort* puVar10;
        vector* pvVar11;
        vector<unsigned short, eastl::allocator>* this_00;
        array<unsigned short, 2ul>* this_01;
        Vector4T<float>* this_02;
        undefined2* puVar12;
        int iVar13;
        ulong uVar14;
        Vector3T* pVVar15;
        undefined1 local_a0[16];
        vector<GeometryBatchVertexPos, eastl::allocator>* local_90;
        ulong local_88;
        Vector2T* local_80;
        Vector4T* local_78;
        Vector3T* local_70;
        ulong local_48;
        ushort* local_40;
        ushort local_34;
        uchar local_31;

        m_transformed = false;
        field_35 = (byte)(param_10 & 1);
        local_48 = param_2;
        if ((param_10 & 1) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_hasColoredVertices",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      480, "Colored vertices not supported when loading from raw mesh data");
        }
        m_hasFaceTransparency = (byte)((param_10 & 2) >> 1);
        if ((param_10 & 2) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_hasTransparentVertices",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      481, "Transparent vertices not supported when loading from raw mesh data");
        }
        m_hidden = (byte)param_10 >> 4 & 1;
        if ((param_10 & 4) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!(generalFlags & MODEL_LABEL_ID_FLAG)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      484, "Model label IDs not supported when loading from raw mesh data");
        }
        uVar14 = param_7 / 3;
        if (param_7 % 3 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("faceCount * 3 == indexCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      487, (char*)0);
        }
        puVar10 = &m_faceHSLBuffer;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        puVar10->reserve(uVar14);
        local_40 = (ushort*)puVar10->end();
        new (local_a0) math::ColourStorage8888<math::ARGB8StorageLayout>(param_9);
        uVar8 = local_a0->GetX();
        local_34 = math::RunetekColour::RGBToHSL(uVar8);
        puVar10->insert(local_40, uVar14, &local_34);
        puVar1 = &m_faceTransparencyBuffer;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        puVar1->reserve(uVar14);
        puVar9 = (uchar*)puVar1->end();
        local_31 = 255;
        puVar1->insert(puVar9, uVar14, &local_31);
        m_numLods = 1;
        if (param_7 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      502, (char*)0);
        }
        puVar1 = &field_216;
        local_88 = param_7 % 3;
        puVar10 = (ushort*)std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
            (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)puVar1, 0);
        eastl::vector<unsigned short, eastl::allocator>::resize_uninitialized((ulong)puVar10);
        eastl::vector<unsigned short, eastl::allocator>::assign<unsigned short const*>(puVar10, param_8);
        uVar14 = (ulong)m_numLods;
        if (uVar14 < 5) {
            do {
                pvVar11 = (vector*)std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                    (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)puVar1, (ulong)(m_numLods - 1));
                this_00 = (vector<unsigned short, eastl::allocator>*)
                    std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                        (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)puVar1, uVar14);
                eastl::vector<unsigned short, eastl::allocator>::operator=(this_00, pvVar11);
                uVar14 = uVar14 + 1;
            } while (uVar14 != 5);
        }
        uVar14 = param_1;
        m_numLods = 5;
        local_a0._8_8_ = &field_448;
        local_a0._8_8_->resize(param_1);
        local_90 = (vector<GeometryBatchVertexPos, eastl::allocator>*)&field_480;
        eastl::vector<GeometryBatchVertexPos, eastl::allocator>::resize((ulong)local_90);
        eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::resize((ulong)&m_vertexDataBufferSkin);
        m_labelCount = 1;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        m_boneCount = 1;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        (&field_128)->clear();
        if (uVar14 != 0) {
            if (param_3 == (Vector3T*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pVertexPosData != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          541, (char*)0);
            }
            iVar13 = 1;
            uVar14 = 0;
            local_80 = param_6;
            local_78 = param_5;
            local_70 = param_4;
            pVVar15 = param_3;
            do {
                this_01 = (array<unsigned short, 2ul>*)eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertex, eastl::allocator>*)local_a0._8_8_, uVar14);
                this_02 = (Vector4T<float>*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    local_90, uVar14);
                *(undefined2*)(this_02 + 12) = 0;
                math::Vector4T<float>::SetXYZ(this_02, pVVar15);
                pVVar4 = local_70;
                local_40 = (ushort*)CONCAT44(local_40._4_4_, iVar13);
                pVVar2 = local_78;
                uVar14 = local_48;
                if (param_4 != (Vector3T*)0) {
                    cVar5 = eastl::min<signed char>(127, (int)(char)(int)(*(float*)local_70 * 127.0));
                    aVar6 = (array<unsigned short, 2ul>)eastl::max<signed char>(4294967168, (int)cVar5);
                    this_01[4] = aVar6;
                    cVar5 = eastl::min<signed char>(127, (int)(char)(int)(*(float*)(pVVar4 + 4) * 127.0));
                    aVar6 = (array<unsigned short, 2ul>)eastl::max<signed char>(4294967168, (int)cVar5);
                    this_01[5] = aVar6;
                    eastl::min<signed char>(127, (int)(char)(int)(*(float*)(pVVar4 + 8) * 127.0));
                    aVar6 = (array<unsigned short, 2ul>)eastl::max<signed char>(4294967168);
                    this_01[6] = aVar6;
                    local_70 = pVVar4 + local_48;
                    pVVar2 = local_78;
                    uVar14 = local_48;
                }
                local_78 = pVVar2;
                local_48 = uVar14;
                if (param_5 != (Vector4T*)0) {
                    cVar5 = eastl::min<signed char>(127, (int)(char)(int)(*(float*)pVVar2 * 127.0));
                    aVar6 = (array<unsigned short, 2ul>)eastl::max<signed char>(4294967168, (int)cVar5);
                    this_01[8] = aVar6;
                    cVar5 = eastl::min<signed char>(127, (int)(char)(int)(*(float*)(pVVar2 + 4) * 127.0));
                    aVar6 = (array<unsigned short, 2ul>)eastl::max<signed char>(4294967168, (int)cVar5);
                    this_01[9] = aVar6;
                    eastl::min<signed char>(127, (int)(char)(int)(*(float*)(pVVar2 + 8) * 127.0));
                    aVar6 = (array<unsigned short, 2ul>)eastl::max<signed char>(4294967168);
                    this_01[10] = aVar6;
                    aVar6 = (array<unsigned short, 2ul>)127;
                    if (*(float*)(pVVar2 + 12) == 1.0) {
                        aVar6 = (array<unsigned short, 2ul>)0;
                    }
                    this_01[11] = aVar6;
                    local_78 = pVVar2 + uVar14;
                }
                pVVar3 = local_80;
                if (param_6 != (Vector2T*)0) {
                    uVar7 = types::FloatToFloat16(*(float*)local_80);
                    puVar12 = (undefined2*)std::array<unsigned short, 2ul>::operator[](this_01, 0);
                    *puVar12 = uVar7;
                    uVar7 = types::FloatToFloat16(*(float*)(pVVar3 + 4));
                    puVar12 = (undefined2*)std::array<unsigned short, 2ul>::operator[](this_01, 1);
                    *puVar12 = uVar7;
                    local_80 = pVVar3 + local_48;
                    uVar14 = local_48;
                }
                pVVar15 = pVVar15 + uVar14;
                uVar14 = (ulong)local_40 & 4294967295;
                iVar13 = (int)local_40 + 1;
            } while (uVar14 < param_1);
        }
        return local_88 == 0;
    }

    // 0x100807890, 464 bytes, placed by class name and debug map
    // GeometryBatch::BakeTile(unsigned int, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char)
    void GeometryBatch::BakeTile(uint param_1, uint param_2, uchar param_3, uchar param_4, uchar param_5, uchar param_6,
                                 uchar param_7, uchar param_8, uchar param_9) {
        uchar uVar1;
        vector<unsigned short, eastl::allocator>* this_00;
        ushort* puVar2;
        long lVar3;
        Layout* this_01;
        vector* pvVar4;
        float* pfVar5;
        ulong uVar6;
        type* ptVar7;
        undefined3 in_register_00000081;
        undefined3 in_register_00000089;
        float fVar8;
        uchar local_38;
        uchar local_37;
        uchar local_36;
        uchar local_35[3];
        char local_32;
        uchar local_31;

        uVar6 = (ulong)param_1;
        this_00 = (vector<unsigned short, eastl::allocator>*)
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, 0);
        if (param_1 < param_2) {
            local_32 = param_8 + 255;
            local_35[2] = param_9 + 255;
            do {
                puVar2 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this_00, uVar6);
                lVar3 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertex, eastl::allocator>*)&field_448, (ulong)*puVar2);
                puVar2 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this_00, uVar6);
                ptVar7 = (type*)(ulong)*puVar2;
                this_01 = (Layout*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertexPos, eastl::allocator>*)&field_480, (ulong)ptVar7);
                pvVar4 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar7);
                fVar8 = (float)floor((*(float*)pvVar4 + (float)CONCAT31(in_register_00000081, param_4) * 128.0) *
                                     0.0078125);
                local_38 = (uchar)(int)fVar8;
                pfVar5 = (float*)this_01->second();
                fVar8 = (float)floor((*pfVar5 + (float)CONCAT31(in_register_00000089, param_5) * 128.0) * 0.0078125);
                local_37 = (uchar)(int)fVar8;
                *(uchar*)(lVar3 + 19) = param_3;
                local_36 = param_6 + local_32;
                uVar1 = math::Clamp<unsigned char>(&local_38, &param_6, &local_36);
                *(uchar*)(lVar3 + 22) = uVar1;
                local_35[0] = param_7 + local_35[2];
                uVar1 = math::Clamp<unsigned char>(&local_37, &param_7, local_35);
                *(uchar*)(lVar3 + 23) = uVar1;
                local_31 = '\0';
                local_35[1] = 63;
                uVar1 = math::Clamp<unsigned char>((uchar*)(lVar3 + 22), &local_31, local_35 + 1);
                *(uchar*)(lVar3 + 22) = uVar1;
                uVar1 = math::Clamp<unsigned char>((uchar*)(lVar3 + 23), &local_31, local_35 + 1);
                *(uchar*)(lVar3 + 23) = uVar1;
                uVar6 = uVar6 + 1;
            } while (param_2 != uVar6);
        }
    }

    // 0x100807aa0, 128 bytes, placed by class name and debug map
    // GeometryBatch::BakeTextureMeta(unsigned int, unsigned int, ModelTextureMeta const&)
    void GeometryBatch::BakeTextureMeta(uint param_1, uint param_2, ModelTextureMeta* param_3) {
        vector<unsigned short, eastl::allocator>* this_00;
        ushort* puVar1;
        long lVar2;
        ulong uVar3;

        uVar3 = (ulong)param_1;
        this_00 = (vector<unsigned short, eastl::allocator>*)
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, 0);
        if (param_1 < param_2) {
            do {
                puVar1 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this_00, uVar3);
                lVar2 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertex, eastl::allocator>*)&field_448, (ulong)*puVar1);
                *(undefined2*)(lVar2 + 20) = *(undefined2*)param_3;
                uVar3 = uVar3 + 1;
            } while (param_2 != uVar3);
        }
    }

    // 0x100807b20, 400 bytes, placed by class name and debug map
    // GeometryBatch::BakeHSLColors(unsigned int, unsigned int, unsigned short, unsigned int, unsigned int)
    void GeometryBatch::BakeHSLColors(uint param_1, uint param_2, ushort param_3, uint param_4, uint param_5) {
        array<unsigned char, 4ul>* this_00;
        undefined1 uVar1;
        uint uVar2;
        undefined4 uVar3;
        vector<unsigned short, eastl::allocator>* this_01;
        ushort* puVar4;
        long lVar5;
        undefined1* puVar6;
        ulong uVar7;
        ulong uVar8;
        array<unsigned char, 3ul>* this_02;

        if (m_faceHSLBaked == false) {
            this_01 = (vector<unsigned short, eastl::allocator>*)
                std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                    (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, 0);
            if (param_1 < param_2) {
                uVar8 = (ulong)param_1;
                do {
                    uVar7 = (uVar8 & 4294967295) / 3;
                    puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                        (vector<unsigned short, eastl::allocator>*)&m_faceHSLBuffer, uVar7);
                    uVar2 = math::RunetekColour::HSLToRGB(*puVar4);
                    uVar3 = math::ApplyOffsetToFaceColour(uVar2, (uint)param_3, param_4, param_5);
                    puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this_01, uVar8);
                    lVar5 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                        (vector<GeometryBatchVertex, eastl::allocator>*)&field_448, (ulong)*puVar4);
                    this_00 = (array<unsigned char, 4ul>*)(lVar5 + 12);
                    puVar6 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 0);
                    *puVar6 = (char)((uint)uVar3 >> 16);
                    puVar6 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 1);
                    *puVar6 = (char)((uint)uVar3 >> 8);
                    puVar6 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 2);
                    *puVar6 = (char)uVar3;
                    this_02 = (array<unsigned char, 3ul>*)(lVar5 + 16);
                    puVar6 = (undefined1*)std::array<unsigned char, 3ul>::operator[](this_02, 0);
                    *puVar6 = (char)(uVar2 >> 16);
                    puVar6 = (undefined1*)std::array<unsigned char, 3ul>::operator[](this_02, 1);
                    *puVar6 = (char)(uVar2 >> 8);
                    puVar6 = (undefined1*)std::array<unsigned char, 3ul>::operator[](this_02, 2);
                    *puVar6 = (char)uVar2;
                    puVar6 = (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                        (vector<unsigned char, eastl::allocator>*)&m_faceTransparencyBuffer, uVar7);
                    uVar1 = *puVar6;
                    puVar6 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 3);
                    *puVar6 = uVar1;
                    uVar8 = uVar8 + 1;
                } while (param_2 != uVar8);
            }
        }
    }

    // 0x100807cd0, 80 bytes, placed by class name and debug map
    // GeometryBatch::BakeBatchFlags(unsigned char)
    void GeometryBatch::BakeBatchFlags(uchar param_1) {
        long lVar1;
        long lVar2;

        lVar1 = (&field_448)->HeapBeginPtr();
        lVar2 = (&field_448)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            *(uchar*)(lVar1 + 7) = param_1;
        }
    }

    // 0x100807d20, 656 bytes, placed by class name and debug map
    // GeometryBatch::BakeShareLightNormals(eastl::fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true, eastl::hash<math::Vector3T<float> >, eastl::equal_to<math::Vector3T<float> >, false, BucketAllocatorEASTL> const&)
    void GeometryBatch::BakeShareLightNormals(fixed_hash_map* param_1) {
        ushort uVar1;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_00;
        bool bVar2;
        ulong uVar3;
        ushort* puVar4;
        long lVar5;
        long lVar6;
        undefined1* puVar7;
        char* pcVar8;
        GeometryBatchVertex* this_01;
        Vector3T* pVVar9;
        uint uVar10;
        int iVar11;
        ulong uVar12;
        undefined1 auVar13[16];
        undefined1 local_98[16];
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* local_88;
        ulong local_80;
        Array<bool, BucketAllocatorEASTL> local_78[24];
        undefined1 local_60[16];
        ulong local_50;
        GeometryBatch* local_40;
        vector<GeometryBatchVertex, eastl::allocator>* local_38;

        local_38 = (vector<GeometryBatchVertex, eastl::allocator>*)&field_448;
        uVar3 = local_38->size();
        local_60._0_8_ = local_60._0_8_ & 18446744073709551360;
        Array<bool, BucketAllocatorEASTL>::Array(local_78, uVar3, (bool*)local_60);
        local_40 = this;
        local_88 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, 0);
        local_80 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(local_88);
        if (local_80 != 0) {
            uVar12 = 1;
            uVar3 = 0;
            do {
                this_00 = local_88;
                puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)local_88, uVar3);
                uVar3 = (ulong)*puVar4;
                iVar11 = (int)uVar12;
                puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_00, uVar12);
                uVar1 = *puVar4;
                puVar4 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_00, (ulong)(iVar11 + 1));
                local_50 = (ulong)*puVar4;
                lVar5 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](local_38, uVar3);
                lVar6 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](local_38, (ulong)uVar1);
                bVar2 = math::operator==((Vector3T*)(lVar5 + 4), (Vector3T*)(lVar6 + 4));
                if (bVar2) {
                    lVar5 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](local_38, uVar3);
                    lVar6 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](local_38, local_50);
                    bVar2 = math::operator==((Vector3T*)(lVar5 + 4), (Vector3T*)(lVar6 + 4));
                    if (bVar2) {
                        puVar7 = (undefined1*)Array<bool, BucketAllocatorEASTL>::operator[](local_78, uVar3);
                        *puVar7 = 1;
                        puVar7 = (undefined1*)Array<bool, BucketAllocatorEASTL>::operator[](local_78, (ulong)uVar1);
                        *puVar7 = 1;
                        puVar7 = (undefined1*)Array<bool, BucketAllocatorEASTL>::operator[](local_78, local_50);
                        *puVar7 = 1;
                    }
                }
                uVar3 = (ulong)(iVar11 + 2);
                uVar12 = (ulong)(iVar11 + 3);
            } while (uVar3 < local_80);
        }
        local_60 = param_1->end();
        uVar3 = local_38->size();
        if (uVar3 != 0) {
            local_40 = (GeometryBatch*)&local_40->field_480;
            uVar10 = 1;
            uVar12 = 0;
            do {
                pcVar8 = (char*)Array<bool, BucketAllocatorEASTL>::operator[](local_78, uVar12);
                if (*pcVar8 == '\0') {
                    this_01 = (GeometryBatchVertex*)eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                        local_38, uVar12);
                    pVVar9 = (Vector3T*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                        (vector<GeometryBatchVertexPos, eastl::allocator>*)local_40, uVar12);
                    auVar13 = param_1->find(pVVar9);
                    local_98 = auVar13;
                    bVar2 = eastl::operator!=((eastl*)local_98, (hashtable_iterator_base*)local_60, auVar13._8_8_);
                    if (bVar2) {
                        lVar5 = local_98->HeapBeginPtr();
                        if (1 < *(uint*)(lVar5 + 12)) {
                            bVar2 = math::operator!=((Vector3T*)(lVar5 + 16), (Vector3T*)PTR_ZERO_100ee66e8);
                            if (bVar2) {
                                this_01->SetNormal((Vector3T*)(lVar5 + 16));
                            }
                        }
                    }
                }
                uVar12 = (ulong)uVar10;
                uVar10 = uVar10 + 1;
            } while (uVar12 < uVar3);
        }
        local_78->~Array();
    }

    // 0x1008080a0, 2032 bytes, placed by class name and debug map
    // GeometryBatch::SortSections(eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&, eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL> const&, eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL> const&)
    void GeometryBatch::SortSections(vector* param_1, vector* param_2, multimap* param_3) {
        undefined4 uVar1;
        undefined4 uVar2;
        uint uVar3;
        Layout* pLVar4;
        vector* this_00;
        array<eastl::vector<unsigned short, eastl::allocator>, 5ul>* paVar5;
        char cVar6;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_01;
        short* psVar8;
        bool bVar7;
        long lVar9;
        long lVar10;
        uint* puVar11;
        short* psVar12;
        uchar* puVar13;
        GeometryBatchVertex* pGVar14;
        GeometryBatchVertexPos* pGVar15;
        GeometryBatchVertexSkin* pGVar16;
        vector<unsigned short, eastl::allocator>* this_02;
        ushort* puVar17;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined1* this_03;
        ulong uVar18;
        ulong uVar19;
        ulong uVar20;
        ulong uVar21;
        undefined1 auVar22[16];
        undefined1 auVar23[16];
        undefined8 local_320[64];
        undefined1 local_120[32];
        GeometryBatchVertexSkin local_e0;
        undefined8 local_c0[4];
        undefined8 local_a0[4];
        multimap* local_78;
        Layout* local_70;
        Layout* local_68;
        undefined8 local_60;
        ushort* local_58;
        vector* local_50;
        array<eastl::vector<unsigned short, eastl::allocator>, 5ul>* local_48;
        Layout* local_40;
        GeometryBatch* local_38;

        local_78 = param_3;
        local_50 = param_2;
        cVar6 = CanSkipSortSections(this, param_1, param_3);
        if (cVar6 == '\0') {
            local_38 = this;
            if (m_numLods != 0) {
                local_48 = (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216;
                uVar21 = 0;
                do {
                    this_01 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
                        std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](local_48, uVar21);
                    new (local_320) eastl::vector<unsigned short, eastl::allocator>();
                    eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_01);
                    eastl::vector<unsigned short, eastl::allocator>::resize_uninitialized((ulong)local_320);
                    psVar8 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                        (vector<unsigned short, eastl::allocator>*)local_320, 0);
                    local_a0[0] =
                        eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                      eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                      true>::begin();
                    auVar22 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                            eastl::less<eastl::string>, eastl::allocator,
                                            eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
                    local_58 = (ushort*)0;
                    local_40 = (Layout*)uVar21;
                    while (true) {
                        pLVar4 = local_40;
                        local_c0[0] = auVar22._0_8_;
                        bVar7 = eastl::operator!=((eastl*)local_a0, (hashtable_iterator_base*)local_c0, auVar22._8_8_);
                        if (!bVar7)
                            break;
                        lVar9 = eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator*((rbtree_iterator<
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                      local_a0);
                        lVar9 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                            (vector<SourceModelExternalIndexSection, eastl::allocator>*)param_1, *(ulong*)(lVar9 + 8));
                        lVar10 = eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>::operator[](
                            (vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>*)local_50, (ulong)local_58);
                        puVar11 = (uint*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(lVar9 + 20),
                                                                                 (ulong)pLVar4);
                        uVar21 = (ulong)*puVar11;
                        if (*puVar11 < puVar11[1]) {
                            uVar1 = *(undefined4*)(lVar10 + 60);
                            uVar2 = *(undefined4*)(lVar9 + 60);
                            do {
                                psVar12 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                    (vector<unsigned short, eastl::allocator>*)this_01, uVar21);
                                *psVar8 = *psVar12 + ((short)uVar1 - (short)uVar2);
                                psVar8 = psVar8 + 1;
                                uVar21 = uVar21 + 1;
                            } while (uVar21 < puVar11[1]);
                        }
                        local_58 = (ushort*)((long)local_58 + 1);
                        eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator++((rbtree_iterator<
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                       local_a0);
                        auVar22._8_8_ = extraout_RDX;
                        auVar22._0_8_ = local_c0[0];
                    }
                    this_01->swap(local_320);
                    local_320->~vector();
                    uVar21 = (long)pLVar4 + 1;
                } while (uVar21 < local_38->m_numLods);
            }
            new (local_a0) eastl::vector<unsigned short, eastl::allocator>();
            new (local_c0) eastl::vector<unsigned char, eastl::allocator>();
            new (local_120) eastl::vector<GeometryBatchVertex, eastl::allocator>();
            new ((local_120 + 32)) eastl::vector<GeometryBatchVertexPos, eastl::allocator>();
            new (&local_e0) eastl::vector<GeometryBatchVertexSkin, eastl::allocator>();
            local_50 = (vector*)&local_38->m_faceHSLBuffer;
            uVar21 = local_50->size();
            local_a0->reserve(uVar21);
            local_48 =
                (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&local_38->m_faceTransparencyBuffer;
            uVar21 = local_48->size();
            local_c0->reserve(uVar21);
            local_70 = (Layout*)&local_38->field_448;
            uVar21 = local_70->size();
            local_120->reserve(uVar21);
            local_40 = (Layout*)&local_38->field_480;
            uVar21 = local_40->size();
            ((local_120 + 32))->reserve(uVar21);
            local_68 = (Layout*)&local_38->m_vertexDataBufferSkin;
            uVar21 = local_68->size();
            local_e0.reserve(uVar21);
            local_320[0] = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                         eastl::less<eastl::string>, eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::begin();
            auVar23 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                    eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                    true>::end();
            while (true) {
                local_60 = auVar23._0_8_;
                bVar7 = eastl::operator!=((eastl*)local_320, (hashtable_iterator_base*)&local_60, auVar23._8_8_);
                if (!bVar7)
                    break;
                lVar9 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_320);
                lVar9 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                    (vector<SourceModelExternalIndexSection, eastl::allocator>*)param_1, *(ulong*)(lVar9 + 8));
                puVar11 = (uint*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(lVar9 + 20), 0);
                uVar3 = *puVar11;
                local_58 = (ushort*)local_a0->end();
                this_00 = local_50;
                lVar10 = local_50->HeapBeginPtr();
                this_00->HeapBeginPtr();
                eastl::vector<unsigned short, eastl::allocator>::insert<unsigned short*>(
                    (ushort*)local_a0, local_58, (ushort*)(lVar10 + ((ulong)uVar3 / 3) * 2));
                puVar13 = (uchar*)local_c0->end();
                paVar5 = local_48;
                lVar10 = local_48->HeapBeginPtr();
                paVar5->HeapBeginPtr();
                eastl::vector<unsigned char, eastl::allocator>::insert<unsigned char*>(
                    (uchar*)local_c0, puVar13, (uchar*)((ulong)uVar3 / 3 + lVar10));
                pGVar14 = (GeometryBatchVertex*)local_120->end();
                pLVar4 = local_70;
                lVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_70);
                uVar3 = *(uint*)(lVar9 + 60);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar4);
                eastl::vector<GeometryBatchVertex, eastl::allocator>::insert<GeometryBatchVertex*>(
                    (GeometryBatchVertex*)local_120, pGVar14, (GeometryBatchVertex*)(lVar10 + (ulong)uVar3 * 24));
                pGVar15 = (GeometryBatchVertexPos*)((local_120 + 32))->end();
                pLVar4 = local_40;
                lVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_40);
                uVar3 = *(uint*)(lVar9 + 60);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar4);
                eastl::vector<GeometryBatchVertexPos, eastl::allocator>::insert<GeometryBatchVertexPos*>(
                    (GeometryBatchVertexPos*)(local_120 + 32), pGVar15,
                    (GeometryBatchVertexPos*)((ulong)uVar3 * 16 + lVar10));
                pGVar16 = (GeometryBatchVertexSkin*)local_e0.end();
                pLVar4 = local_68;
                lVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_68);
                uVar3 = *(uint*)(lVar9 + 60);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar4);
                eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::insert<GeometryBatchVertexSkin*>(
                    &local_e0, pGVar16, (GeometryBatchVertexSkin*)(lVar10 + (ulong)uVar3 * 8));
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_320);
                auVar23._8_8_ = extraout_RDX_00;
                auVar23._0_8_ = local_60;
            }
            lVar9 = local_50->size();
            lVar10 = local_a0->size();
            paVar5 = local_48;
            if (lVar9 != lVar10) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_faceHSL.size() == newfaceHSL.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          799, (char*)0);
            }
            lVar9 = local_48->size();
            lVar10 = paVar5->size();
            pLVar4 = local_70;
            if (lVar9 != lVar10) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_faceTransparency.size() == m_faceTransparency.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          800, (char*)0);
            }
            lVar9 = local_70->size();
            lVar10 = pLVar4->size();
            pLVar4 = local_40;
            if (lVar9 != lVar10) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBuffer.size() == m_vertexDataBuffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          801, (char*)0);
            }
            lVar9 = local_40->size();
            lVar10 = pLVar4->size();
            pLVar4 = local_68;
            if (lVar9 != lVar10) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBufferPos.size() == m_vertexDataBufferPos.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          802, (char*)0);
            }
            lVar9 = local_68->size();
            lVar10 = pLVar4->size();
            if (lVar9 != lVar10) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBufferSkin.size() == m_vertexDataBufferSkin.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          803, (char*)0);
            }
            local_50->swap(local_a0);
            local_48->swap(local_c0);
            local_70->swap(local_120);
            local_40->swap((vector*)(local_120 + 32));
            local_68->swap((vector*)&local_e0);
            this_03 = &local_38->field_128;
            cVar6 = this_03->empty();
            if (cVar6 == '\0') {
                local_38 = (GeometryBatch*)this_03;
                this_03->clear();
                uVar21 = local_40->size();
                if (65535 < uVar21) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_vertexDataBufferPos.size() <= std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              815, (char*)0);
                }
                uVar21 = local_40->size();
                ___bzero(local_320);
                if (uVar21 != 0) {
                    uVar19 = 1;
                    uVar20 = 0;
                    do {
                        uVar18 = uVar19;
                        lVar9 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertexPos, eastl::allocator>*)local_40, uVar20);
                        psVar8 = (short*)std::array<unsigned short, 256ul>::operator[](
                            (array<unsigned short, 256ul>*)local_320, (ulong) * (byte*)(lVar9 + 12));
                        *psVar8 = *psVar8 + 1;
                        uVar19 = (ulong)((int)uVar18 + 1);
                        uVar20 = uVar18;
                    } while (uVar18 < uVar21);
                }
                if (uVar21 != 0) {
                    uVar19 = 0;
                    do {
                        lVar9 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertexPos, eastl::allocator>*)local_40, uVar19);
                        local_60._0_2_ = (ushort) * (byte*)(lVar9 + 12);
                        this_02 = (vector<unsigned short, eastl::allocator>*)eastl::vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>::
                        operator[](
                            (vector_map<unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                                        eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short,
                                                                  eastl::vector<unsigned short, eastl::allocator>>,
                                                      eastl::allocator>>*)local_38,
                            (ushort*)&local_60);
                        puVar17 = (ushort*)std::array<unsigned short, 256ul>::operator[](
                            (array<unsigned short, 256ul>*)local_320, (ulong) * (byte*)(lVar9 + 12));
                        eastl::vector<unsigned short, eastl::allocator>::reserve(this_02, (ulong)*puVar17);
                        local_60 = CONCAT62(local_60._2_6_, (short)uVar19);
                        eastl::vector<unsigned short, eastl::allocator>::push_back(this_02, (ushort*)&local_60);
                        uVar19 = uVar19 + 1;
                    } while (uVar21 != uVar19);
                }
            }
            local_e0.~vector();
            ((local_120 + 32))->~vector();
            local_120->~vector();
            local_c0->~vector();
            local_a0->~vector();
        }
    }

    // 0x100808890, 272 bytes, placed by class name and debug map
    // GeometryBatch::CanSkipSortSections(eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&, eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL> const&) const
    undefined4 GeometryBatch::CanSkipSortSections(vector* param_1, multimap* param_2) {
        undefined4 uVar1;
        uint uVar2;
        int iVar3;
        long lVar4;
        long lVar5;
        ulong uVar6;
        undefined8 uVar7;
        uint uVar8;
        rbtree<unsigned char, eastl::pair<unsigned char const, unsigned long>, eastl::less<unsigned char>,
               BucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned char const, unsigned long>>, true, false>
            local_40[12];
        int local_34;

        uVar1 = helpers::CheckSortSectionsContiguous(param_1, param_2);
        if ((char)uVar1 == '\0') {
            return uVar1;
        }
        eastl::rbtree<unsigned char, eastl::pair<unsigned char const, unsigned long>, eastl::less<unsigned char>,
                      BucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned char const, unsigned long>>, true,
                      false>::rbegin(local_40);
        lVar4 =
            eastl::reverse_iterator<eastl::rbtree_iterator<eastl::pair<unsigned char const, unsigned long>,
                                                           eastl::pair<unsigned char const, unsigned long> const*,
                                                           eastl::pair<unsigned char const, unsigned long> const&>>::
            operator->(
                (reverse_iterator<eastl::rbtree_iterator<eastl::pair<unsigned char const, unsigned long>,
                                                         eastl::pair<unsigned char const, unsigned long> const*,
                                                         eastl::pair<unsigned char const, unsigned long> const&>>*)
                    local_40);
        lVar4 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
            (vector<SourceModelExternalIndexSection, eastl::allocator>*)param_1, *(ulong*)(lVar4 + 8));
        lVar5 = std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(lVar4 + 20), 0);
        uVar8 = *(uint*)(lVar5 + 4) / 3;
        uVar2 = (&m_faceHSLBuffer)->size();
        if (uVar8 == uVar2) {
            local_34 = *(int*)(lVar4 + 64);
            iVar3 = (&field_448)->size();
            if (local_34 == iVar3) {
                return uVar1;
            }
        }
        uVar6 = (&m_faceHSLBuffer)->size();
        uVar2 = *(uint*)(lVar4 + 64);
        uVar7 = (&field_448)->size();
        /* WARNING: Subroutine does not return */
        LogAssert("((numContiguousFaces == (uint)m_faceHSL.size()) && (lastIndexSection.m_vertexEnd == "
                  "(uint)m_vertexDataBuffer.size()))",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                  "GeometryBatch.cpp",
                  1619,
                  "Determined sort sections are contiguous, however the data length differs (%u vs %u faces / %u vs %u "
                  "vertices)",
                  (ulong)uVar8, uVar6 & 4294967295, (ulong)uVar2, uVar7);
    }

    // 0x100808ad0, 624 bytes, placed by class name and debug map
    // GeometryBatch::CreateSecondaryVertexBuffers()
    void GeometryBatch::CreateSecondaryVertexBuffers() {
        undefined1* this_00;
        char cVar1;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        vector* pvVar2;
        float* pfVar3;
        float* pfVar4;
        ulong uVar5;
        Vector3T* pVVar6;
        GeometryBatchVertexPosLP* this_02;
        ulong uVar7;
        type* in_RSI;
        undefined4 uVar8;
        float fVar9;
        undefined8 local_40;
        float local_38;
        float local_34;

        cVar1 = IsValid();
        if (cVar1 == '\0') {
            in_RSI = (type*)0;
            this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                    (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, 0);
            cVar1 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_01);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_aabb.IsValid() || m_vertexIndexBuffers[0].empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          839, (char*)0);
            }
        }
        cVar1 = VertexBuffersInitialised(this);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!VertexBuffersInitialised()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      840, (char*)0);
        }
        pvVar2 = SSOBeginPtr(in_RSI);
        pfVar3 = (float*)GetScreen();
        if (((((*(float*)pvVar2 < -32768.0) || (32767.0 < *(float*)pvVar2)) || (*(float*)(pvVar2 + 4) < -32768.0)) ||
             ((((32767.0 < *(float*)(pvVar2 + 4) || (*(float*)(pvVar2 + 8) < -32768.0)) ||
                ((32767.0 < *(float*)(pvVar2 + 8) || ((*pfVar3 < -32768.0 || (32767.0 < *pfVar3)))))) ||
               (pfVar3[1] < -32768.0)))) ||
            (((32767.0 < pfVar3[1] || (fVar9 = pfVar3[2], fVar9 < -32768.0)) || (32767.0 < fVar9)))) {
            pfVar4 = std::min<float>((float*)(pvVar2 + 4), (float*)(pvVar2 + 8));
            pfVar4 = std::min<float>((float*)pvVar2, pfVar4);
            uVar8 = ::abs(*pfVar4);
            local_40 = CONCAT44(local_40._4_4_, uVar8);
            pfVar4 = std::max<float>(pfVar3 + 1, pfVar3 + 2);
            pfVar3 = std::max<float>(pfVar3, pfVar4);
            pfVar3 = std::max<float>((float*)&local_40, pfVar3);
            fVar9 = 32767.0 / *pfVar3;
            m_vertexScale = 1.0 / fVar9;
            local_34 = fVar9;
        } else {
            local_34 = 1.0;
        }
        this_00 = &field_480;
        uVar5 = this_00->size();
        if (uVar5 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("vertexDataBufferSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      862, (char*)0);
        }
        (&field_512, uVar5, 4)->set_max_size();
        if (uVar5 != 0) {
            uVar7 = 0;
            do {
                pVVar6 = (Vector3T*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertexPos, eastl::allocator>*)this_00, uVar7);
                this_02 = (GeometryBatchVertexPosLP*)Array<GeometryBatchVertexPosLP, eastl::allocator>::operator[](
                    (Array<GeometryBatchVertexPosLP, eastl::allocator>*)&field_512, uVar7);
                local_40 = math::operator*(pVVar6, local_34);
                local_38 = fVar9;
                this_02->SetPosition((Vector3T*)&local_40);
                *(Vector3T*)&this_02->field_6 = pVVar6[12];
                *(Vector3T*)((long)&this_02->field_6 + 1) = pVVar6[13];
                uVar7 = uVar7 + 1;
            } while (uVar5 != uVar7);
        }
        this_00->set_capacity(0);
    }

    // 0x100809030, 176 bytes, placed by class name and debug map
    // GeometryBatch::DestroyCPUBuffers()
    void GeometryBatch::DestroyCPUBuffers() {
        vector<unsigned short, eastl::allocator>* this_00;
        ulong uVar2;

        if (IsHidden(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsHidden()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      882, (char*)0);
        }
        uVar2 = 0;
        (&field_448, 0)->set_capacity();
        (&field_480, 0)->set_capacity();
        (&field_512, 0, 0)->set_max_size();
        (&m_vertexDataBufferSkin, 0)->set_capacity();
        do {
            this_00 = (vector<unsigned short, eastl::allocator>*)
                std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                    (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, uVar2);
            eastl::vector<unsigned short, eastl::allocator>::set_capacity(this_00, 0);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 5);
    }

    // 0x1008092a0, 256 bytes, placed by class name and debug map
    // GeometryBatch::Reserve(GeometryBatchCombineHelper const&)
    void GeometryBatch::Reserve(GeometryBatchCombineHelper* param_1) {
        uint uVar1;
        vector<unsigned short, eastl::allocator>* pvVar2;
        vector<unsigned short, eastl::allocator>* this_00;

        this_00 = (vector<unsigned short, eastl::allocator>*)(&field_216)->begin();
        pvVar2 = (vector<unsigned short, eastl::allocator>*)(&field_216)->end();
        for (; this_00 != pvVar2; this_00 = this_00 + 32) {
            uVar1 = param_1->GetLevel();
            eastl::vector<unsigned short, eastl::allocator>::reserve(this_00, (ulong)uVar1);
        }
        uVar1 = param_1->GetLevel();
        (&m_faceHSLBuffer, (ulong)uVar1 / 3)->reserve();
        uVar1 = param_1->GetLevel();
        (&m_faceTransparencyBuffer, (ulong)uVar1 / 3)->reserve();
        uVar1 = param_1->GetMaxLineWidth();
        (&field_448, (ulong)uVar1)->reserve();
        uVar1 = param_1->GetMaxLineWidth();
        (&field_480, (ulong)uVar1)->reserve();
        uVar1 = param_1->GetMaxLineWidth();
        (&m_vertexDataBufferSkin, (ulong)uVar1)->reserve();
    }

    // 0x1008093d0, 272 bytes, placed by class name and debug map
    // GeometryBatch::Assign(GeometryBatch const&)
    void GeometryBatch::Assign(GeometryBatch* param_1) {
        if (this != param_1) {
            DestroyRenderingResources(this);
            math::AABB::operator=((AABB*)this, (AABB*)param_1);
            m_transformed = param_1->m_transformed;
            field_35 = param_1->field_35;
            m_hasFaceTransparency = param_1->m_hasFaceTransparency;
            m_shareLight = param_1->m_shareLight;
            m_hidden = param_1->m_hidden;
            m_labelCount = param_1->m_labelCount;
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
            operator=(
                (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&field_48,
                (vector_map*)&param_1->field_48);
            m_boneCount = param_1->m_boneCount;
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
            operator=(
                (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&field_88,
                (vector_map*)&param_1->field_88);
            eastl::vector_map<
                unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
                eastl::allocator,
                eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                              eastl::allocator>>::
            operator=(
                (vector_map<unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>*)&field_128,
                (vector_map*)&param_1->field_128);
            m_numLods = param_1->m_numLods;
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator=(
                (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, (array*)&param_1->field_216);
            eastl::vector<unsigned short, eastl::allocator>::operator=(
                (vector<unsigned short, eastl::allocator>*)&m_faceHSLBuffer, (vector*)&param_1->m_faceHSLBuffer);
            eastl::vector<unsigned char, eastl::allocator>::operator=(
                (vector<unsigned char, eastl::allocator>*)&m_faceTransparencyBuffer,
                (vector*)&param_1->m_faceTransparencyBuffer);
            eastl::vector<GeometryBatchVertex, eastl::allocator>::operator=(
                (vector<GeometryBatchVertex, eastl::allocator>*)&field_448, (vector*)&param_1->field_448);
            eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator=(
                (vector<GeometryBatchVertexPos, eastl::allocator>*)&field_480, (vector*)&param_1->field_480);
            Array<GeometryBatchVertexPosLP, eastl::allocator>::operator=(
                (Array<GeometryBatchVertexPosLP, eastl::allocator>*)&field_512, (Array*)&param_1->field_512);
        }
    }

    // 0x1008096a0, 3024 bytes, placed by class name and debug map
    // GeometryBatch::Append(GeometryBatch const&, bool)
    void GeometryBatch::Append(GeometryBatch* param_1, bool param_2) {
        array<eastl::vector<unsigned short, eastl::allocator>, 5ul>* paVar1;
        short sVar2;
        undefined2 uVar3;
        GeometryBatchVertex* pGVar4;
        GeometryBatch* pGVar5;
        char cVar6;
        undefined1 uVar7;
        byte bVar8;
        undefined4 uVar9;
        AABB* pAVar10;
        ulong uVar11;
        uint* puVar12;
        GeometryBatchVertexPos* pGVar13;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_00;
        ulong uVar14;
        short* psVar15;
        ushort* puVar16;
        uchar* puVar17;
        GeometryBatchVertex* pGVar18;
        GeometryBatchVertexSkin* pGVar19;
        GeometryBatchVertexSkin* pGVar20;
        vector<unsigned int, eastl::allocator>* pvVar21;
        Layout* pLVar22;
        ushort* puVar23;
        ushort* puVar24;
        long lVar25;
        long lVar26;
        long lVar27;
        long lVar28;
        undefined1* puVar29;
        char* pcVar30;
        vector<unsigned short, eastl::allocator>* this_01;
        Vector4T<unsigned char>* this_02;
        byte* pbVar31;
        undefined7 in_register_00000011;
        GeometryBatch* pGVar32;
        uint uVar33;
        ulong uVar34;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* this_03;
        array<unsigned short, 256ul> local_348[512];
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>
            local_148[32];
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>
            local_128[32];
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>
            local_108[32];
        byte* local_e8;
        ulong local_e0;
        ulong local_d8;
        GeometryBatchVertex* local_d0;
        array<eastl::vector<unsigned short, eastl::allocator>, 5ul>* local_c8;
        array<eastl::vector<unsigned short, eastl::allocator>, 5ul>* local_c0;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_b8;
        ulong local_b0;
        GeometryBatch* local_a8;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* local_a0;
        GeometryBatch* local_98;
        ulong local_90;
        GeometryBatchVertex* local_88;
        ushort local_7a;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (this != param_1) {
            local_b8 = (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                CONCAT44(local_b8._4_4_, (int)CONCAT71(in_register_00000011, param_2));
            puVar29 = &field_448;
            pGVar32 = param_1;
            cVar6 = puVar29->empty();
            if ((cVar6 != '\0') || (cVar6 = (&field_480)->empty(), cVar6 != '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_vertexDataBuffer.empty() && !m_vertexDataBufferPos.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          948, (char*)0);
            }
            DestroyRenderingResources(this);
            pAVar10 = (AABB*)param_1->SSOBeginPtr(pGVar32);
            cVar6 = pAVar10->IsValid();
            if (cVar6 != '\0') {
                pAVar10 = (AABB*)param_1->SSOBeginPtr(pGVar32);
                Union(pAVar10);
            }
            m_transformed = (bool)(m_transformed | param_1->m_transformed);
            uVar11 = puVar29->size();
            if (65534 < uVar11) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          958, (char*)0);
            }
            local_d8 = puVar29->size();
            local_a0 =
                (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)&m_numLods;
            local_a8 = param_1;
            puVar12 = std::min<unsigned int>((uint*)local_a0, &param_1->m_numLods);
            uVar33 = *puVar12;
            m_numLods = uVar33;
            if (uVar33 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_numLods > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          961, (char*)0);
            }
            local_d0 = (GeometryBatchVertex*)puVar29;
            local_98 = this;
            if (m_numLods != 0) {
                local_c8 = (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216;
                local_c0 = (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&local_a8->field_216;
                uVar11 = 0;
                do {
                    pGVar13 = (GeometryBatchVertexPos*)
                        std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](local_c8, uVar11);
                    local_b0 = uVar11;
                    this_00 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
                        std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](local_c0, uVar11);
                    local_90 = pGVar13->size();
                    pGVar13->size();
                    eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_00);
                    local_88 = (GeometryBatchVertex*)pGVar13;
                    eastl::vector<unsigned short, eastl::allocator>::resize_uninitialized((ulong)pGVar13);
                    uVar14 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_00);
                    uVar11 = local_d8;
                    if (uVar14 != 0) {
                        uVar34 = 0;
                        do {
                            psVar15 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                (vector<unsigned short, eastl::allocator>*)this_00, uVar34);
                            sVar2 = *psVar15;
                            psVar15 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                (vector<unsigned short, eastl::allocator>*)local_88, local_90 + uVar34);
                            *psVar15 = sVar2 + (short)uVar11;
                            uVar34 = uVar34 + 1;
                        } while (uVar14 != uVar34);
                    }
                    uVar11 = local_b0 + 1;
                } while (uVar11 < *(uint*)local_a0);
            }
            pGVar5 = local_98;
            puVar23 = &local_98->m_faceHSLBuffer;
            local_88 = (GeometryBatchVertex*)puVar23->end();
            pGVar32 = local_a8;
            puVar24 = &local_a8->m_faceHSLBuffer;
            puVar16 = (ushort*)puVar24->HeapBeginPtr();
            puVar24->end();
            eastl::vector<unsigned short, eastl::allocator>::insert<unsigned short const*>(puVar23, (ushort*)local_88,
                                                                                           puVar16);
            local_88 = (GeometryBatchVertex*)(&pGVar5->m_faceTransparencyBuffer)->end();
            puVar17 = (uchar*)(&pGVar32->m_faceTransparencyBuffer)->HeapBeginPtr();
            (&pGVar32->m_faceTransparencyBuffer)->end();
            eastl::vector<unsigned char, eastl::allocator>::insert<unsigned char const*>(
                &pGVar5->m_faceTransparencyBuffer, (uchar*)local_88, puVar17);
            pGVar4 = local_d0;
            pGVar5->field_35 = pGVar5->field_35 | pGVar32->field_35;
            pGVar5->m_hasFaceTransparency = pGVar5->m_hasFaceTransparency | pGVar32->m_hasFaceTransparency;
            pGVar5->m_shareLight = (bool)(pGVar5->m_shareLight | pGVar32->m_shareLight);
            local_88 = (GeometryBatchVertex*)local_d0->end();
            puVar29 = &pGVar32->field_448;
            pGVar18 = (GeometryBatchVertex*)puVar29->HeapBeginPtr();
            local_a0 =
                (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)puVar29;
            puVar29->end();
            eastl::vector<GeometryBatchVertex, eastl::allocator>::insert<GeometryBatchVertex_const*>(pGVar4, local_88,
                                                                                                     pGVar18);
            puVar29 = &pGVar5->field_480;
            local_88 = (GeometryBatchVertex*)puVar29->end();
            pGVar13 = (GeometryBatchVertexPos*)(&pGVar32->field_480)->HeapBeginPtr();
            (&pGVar32->field_480)->end();
            local_c8 = (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)puVar29;
            eastl::vector<GeometryBatchVertexPos, eastl::allocator>::insert<GeometryBatchVertexPos_const*>(
                (GeometryBatchVertexPos*)puVar29, (GeometryBatchVertexPos*)local_88, pGVar13);
            puVar29 = &pGVar5->m_vertexDataBufferSkin;
            pGVar19 = (GeometryBatchVertexSkin*)puVar29->end();
            pGVar20 = (GeometryBatchVertexSkin*)(&pGVar32->m_vertexDataBufferSkin)->HeapBeginPtr();
            (&pGVar32->m_vertexDataBufferSkin)->end();
            local_d0 = (GeometryBatchVertex*)puVar29;
            eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::insert<GeometryBatchVertexSkin_const*>(
                (GeometryBatchVertexSkin*)puVar29, pGVar19, pGVar20);
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                            BucketAllocatorEASTL>>::vector_map(local_148);
            pvVar21 = (vector<unsigned int, eastl::allocator>*)pGVar32->GetMaterial();
            uVar11 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar21);
            local_148->reserve(uVar11);
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                            BucketAllocatorEASTL>>::vector_map(local_128);
            pvVar21 = (vector<unsigned int, eastl::allocator>*)GetBoneIDMap(pGVar32);
            uVar11 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar21);
            local_128->reserve(uVar11);
            pGVar5 = local_98;
            uVar11 = local_d8;
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                            BucketAllocatorEASTL>>::vector_map(local_108);
            pvVar21 = (vector<unsigned int, eastl::allocator>*)GetJointIDMap(pGVar32);
            uVar14 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar21);
            local_108->reserve(uVar14);
            if ((char)local_b8 == '\0') {
                pGVar5->m_labelCount = 1;
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                pGVar5->m_boneCount = 1;
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                (&pGVar5->field_128)->clear();
                pGVar5->field_33 = 0;
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            } else {
                pLVar22 = (Layout*)pGVar32->GetMaterial();
                puVar23 = (ushort*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar22);
                puVar24 = (ushort*)pLVar22->end();
                if (puVar23 != puVar24) {
                    do {
                        eastl::vector_map<
                            unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>::
                            emplace<unsigned short const&, unsigned short const&>(local_148, puVar23 + 1, puVar23);
                        puVar23 = puVar23 + 2;
                    } while (puVar23 != puVar24);
                }
                pLVar22 = (Layout*)GetBoneIDMap(pGVar32);
                puVar23 = (ushort*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar22);
                puVar24 = (ushort*)pLVar22->end();
                if (puVar23 != puVar24) {
                    do {
                        eastl::vector_map<
                            unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>::
                            emplace<unsigned short const&, unsigned short const&>(local_128, puVar23 + 1, puVar23);
                        puVar23 = puVar23 + 2;
                    } while (puVar23 != puVar24);
                }
                pLVar22 = (Layout*)GetJointIDMap(pGVar32);
                puVar23 = (ushort*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar22);
                puVar24 = (ushort*)pLVar22->end();
                if (puVar23 != puVar24) {
                    do {
                        eastl::vector_map<
                            unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>::
                            emplace<unsigned short const&, unsigned short const&>(local_108, puVar23 + 1, puVar23);
                        puVar23 = puVar23 + 2;
                    } while (puVar23 != puVar24);
                }
                uVar9 = GetLabelCount(pGVar32);
                local_b0 = CONCAT44(local_b0._4_4_, uVar9);
                uVar7 = HasBones(pGVar32);
                local_90 = CONCAT71(local_90._1_7_, uVar7);
                uVar14 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                       eastl::allocator>::size(local_a0);
                if (65534 < uVar14) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("other.m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              1015, (char*)0);
                }
                local_58 = 0;
                uStack_50 = 0;
                local_68 = 0;
                uStack_60 = 0;
                local_78 = 0;
                uStack_70 = 0;
                local_48 = 0;
                ___bzero(local_348, 512);
                local_c0 = (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)(uVar11 & 65535);
                local_88 = (GeometryBatchVertex*)&local_98->m_boneCount;
                lVar25 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                       eastl::allocator>::size(local_a0);
                if (lVar25 != 0) {
                    this_03 = (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                        eastl::allocator>>*)&local_98->field_48;
                    local_e8 = &local_98->m_labelCount;
                    local_a8 = (GeometryBatch*)&local_98->field_88;
                    local_e0 = 0;
                    uVar11 = 0;
                    local_b8 = this_03;
                    do {
                        lVar25 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertexPos, eastl::allocator>*)local_c8, (ulong)(local_c0 + uVar11));
                        bVar8 = *(byte*)(lVar25 + 13);
                        *(undefined1*)(lVar25 + 13) = 0;
                        if ((1 < (uint)local_b0) && (bVar8 != 0)) {
                            local_7a = (ushort)bVar8;
                            lVar26 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                       BucketAllocatorEASTL,
                                                       eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                     BucketAllocatorEASTL>>::find(local_148, &local_7a);
                            lVar27 = local_148->end();
                            if (lVar26 != lVar27) {
                                lVar27 =
                                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                      eastl::allocator,
                                                      eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                    eastl::allocator>>::find(this_03,
                                                                                             (ushort*)(lVar26 + 2));
                                lVar28 = this_03->end();
                                if (lVar27 == lVar28) {
                                    eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                        emplace<unsigned short&, unsigned char&>(this_03, (ushort*)(lVar26 + 2),
                                                                                 local_e8);
                                    bVar8 = *local_e8;
                                    *(byte*)(lVar25 + 13) = bVar8;
                                    bVar8 = bVar8 + 1;
                                    *local_e8 = bVar8;
                                    if (32 < bVar8) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("m_labelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1039, (char*)0);
                                    }
                                } else {
                                    *(undefined1*)(lVar25 + 13) = *(undefined1*)(lVar27 + 2);
                                }
                            }
                        }
                        bVar8 = *(byte*)(lVar25 + 12);
                        *(undefined1*)(lVar25 + 12) = 0;
                        if ((bVar8 != 0 & (byte)local_90) == 1) {
                            local_7a = (ushort)bVar8;
                            lVar26 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                       BucketAllocatorEASTL,
                                                       eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                     BucketAllocatorEASTL>>::find(local_128, &local_7a);
                            lVar27 = local_128->end();
                            pGVar32 = local_a8;
                            if (lVar26 != lVar27) {
                                lVar27 = local_a8->find((ushort*)(lVar26 + 2));
                                lVar28 = pGVar32->end();
                                if (lVar27 == lVar28) {
                                    eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                        emplace<unsigned short&, unsigned char&>(
                                            (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                        eastl::allocator,
                                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                      eastl::allocator>>*)pGVar32,
                                            (ushort*)(lVar26 + 2), (uchar*)local_88);
                                    pGVar4 = local_88;
                                    bVar8 = *(byte*)&local_88->field_0;
                                    puVar29 = (undefined1*)std::array<bool, 56ul>::operator[](
                                        (array<bool, 56ul>*)&local_78, (ulong)bVar8);
                                    *puVar29 = 1;
                                    *(byte*)(lVar25 + 12) = bVar8;
                                    *(byte*)&pGVar4->field_0 = bVar8 + 1;
                                    uVar34 = (ulong)((int)local_e0 + 1);
                                    uVar14 = local_128->size();
                                    local_e0 = uVar34;
                                    if (uVar14 < uVar34) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("bonesGenerated <= gbRevBoneIDMap.size()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1064, (char*)0);
                                    }
                                    if (56 < *(byte*)&local_88->field_0) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1065, (char*)0);
                                    }
                                } else {
                                    *(undefined1*)(lVar25 + 12) = *(undefined1*)(lVar27 + 2);
                                }
                                this_03 = local_b8;
                                psVar15 = (short*)std::array<unsigned short, 256ul>::operator[](
                                    local_348, (ulong) * (byte*)(lVar25 + 12));
                                *psVar15 = *psVar15 + 1;
                            }
                        }
                        uVar11 = uVar11 + 1;
                        uVar14 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                               eastl::allocator>::size(local_a0);
                    } while (uVar11 < uVar14);
                }
                if (((byte)local_90 != '\0') &&
                    (lVar25 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                            eastl::allocator>::size(local_a0),
                     lVar25 != 0)) {
                    local_a8 = (GeometryBatch*)&local_98->field_128;
                    local_98 = (GeometryBatch*)&local_98->field_168;
                    uVar11 = 0;
                    local_b0 = 0;
                    do {
                        paVar1 = local_c0 + uVar11;
                        local_90 = uVar11;
                        lVar25 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertexPos, eastl::allocator>*)local_c8, (ulong)paVar1);
                        bVar8 = *(byte*)(lVar25 + 12);
                        pcVar30 =
                            (char*)std::array<bool, 56ul>::operator[]((array<bool, 56ul>*)&local_78, (ulong)bVar8);
                        if (*pcVar30 != '\0') {
                            local_7a = (ushort)bVar8;
                            this_01 = (vector<unsigned short, eastl::allocator>*)eastl::vector_map<
                                unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                                eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<
                                    eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                    eastl::allocator>>::
                            operator[](
                                (vector_map<unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                                            eastl::less<unsigned short>, eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned short,
                                                                      eastl::vector<unsigned short, eastl::allocator>>,
                                                          eastl::allocator>>*)local_a8,
                                &local_7a);
                            puVar23 = (ushort*)std::array<unsigned short, 256ul>::operator[](
                                local_348, (ulong) * (byte*)(lVar25 + 12));
                            eastl::vector<unsigned short, eastl::allocator>::reserve(this_01, (ulong)*puVar23);
                            local_7a = (short)local_d8 + (short)local_90;
                            eastl::vector<unsigned short, eastl::allocator>::push_back(this_01, &local_7a);
                        }
                        this_02 = (Vector4T<unsigned char>*)
                            eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::operator[](
                                (vector<GeometryBatchVertexSkin, eastl::allocator>*)local_d0, (ulong)paVar1);
                        uVar33 = 0;
                        uVar11 = local_90;
                        do {
                            pbVar31 = (byte*)math::Vector4T<unsigned char>::operator[](this_02, uVar33);
                            local_7a = (ushort)*pbVar31;
                            lVar25 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                       BucketAllocatorEASTL,
                                                       eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                     BucketAllocatorEASTL>>::find(local_108, &local_7a);
                            lVar26 = local_108->end();
                            if (lVar25 != lVar26) {
                                lVar26 = local_98->find((ushort*)(lVar25 + 2));
                                pGVar32 = local_98;
                                lVar27 = local_98->end();
                                if (lVar26 == lVar27) {
                                    eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                        emplace<unsigned short&, unsigned char&>(
                                            (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                        eastl::allocator,
                                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                      eastl::allocator>>*)pGVar32,
                                            (ushort*)(lVar25 + 2), (uchar*)local_88);
                                    bVar8 = *(byte*)&local_88->field_0;
                                    puVar29 = (undefined1*)std::array<bool, 56ul>::operator[](
                                        (array<bool, 56ul>*)&local_78, (ulong)bVar8);
                                    *puVar29 = 1;
                                    pbVar31 = (byte*)math::Vector4T<unsigned char>::operator[](this_02, uVar33);
                                    *pbVar31 = bVar8;
                                    *(char*)&local_88->field_0 = *(char*)&local_88->field_0 + '\x01';
                                    uVar14 = (ulong)((int)local_b0 + 1);
                                    uVar11 = local_108->size();
                                    local_b0 = uVar14;
                                    if (uVar11 < uVar14) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("jointBonesGenerated <= gbRevJointIDMap.size()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1106, (char*)0);
                                    }
                                    if (56 < *(byte*)&local_88->field_0) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1107, (char*)0);
                                    }
                                } else {
                                    uVar3 = *(undefined2*)(lVar26 + 2);
                                    puVar29 = (undefined1*)math::Vector4T<unsigned char>::operator[](this_02, uVar33);
                                    *puVar29 = (char)uVar3;
                                }
                                uVar11 = local_90;
                            }
                            uVar33 = uVar33 + 1;
                        } while (uVar33 != 4);
                        uVar11 = uVar11 + 1;
                        uVar14 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                               eastl::allocator>::size(local_a0);
                    } while (uVar11 < uVar14);
                }
            }
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                            BucketAllocatorEASTL>>::~vector_map(local_108);
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                            BucketAllocatorEASTL>>::~vector_map(local_128);
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                            BucketAllocatorEASTL>>::~vector_map(local_148);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10080a470, 752 bytes, placed by class name and debug map
    // GeometryBatch::WeldVertexEdgesWithMap(eastl::hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float> >, eastl::equal_to<math::Vector3T<float> >, SafeSimpleAllocatorEASTL, false>&)
    void GeometryBatch::WeldVertexEdgesWithMap(hash_map* param_1) {
        undefined1* this_00;
        byte bVar1;
        Layout* pLVar2;
        char cVar3;
        bool bVar4;
        ulong uVar5;
        ushort* puVar6;
        ushort* puVar7;
        long lVar8;
        ulong uVar9;
        long lVar10;
        long lVar11;
        undefined8 uVar12;
        byte bVar13;
        hashtable_iterator_base* extraout_RDX;
        hash_map* phVar14;
        Vector3T local_a0[16];
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>
            local_90[32];
        ulong local_70;
        ushort local_68[12];
        hash_map* local_50;
        Layout* local_48;
        GeometryBatch* local_40;
        undefined2 local_32;

        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>::vector_map(local_90);
        local_48 = (Layout*)&field_88;
        uVar5 = local_48->size();
        local_90->reserve(uVar5);
        pLVar2 = local_48;
        local_50 = param_1;
        local_40 = this;
        puVar6 = (ushort*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_48);
        puVar7 = (ushort*)pLVar2->end();
        if (puVar6 != puVar7) {
            do {
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>::
                    emplace<unsigned short const&, unsigned short const&>(local_90, puVar6 + 1, puVar6);
                puVar6 = puVar6 + 2;
            } while (puVar6 != puVar7);
        }
        this_00 = &local_40->field_480;
        cVar3 = this_00->empty();
        phVar14 = local_50;
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1140, (char*)0);
        }
        lVar8 = this_00->size();
        if (lVar8 != 0) {
            local_40 = (GeometryBatch*)&local_40->m_boneCount;
            uVar5 = 0;
            do {
                local_70 = uVar5;
                lVar8 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertexPos, eastl::allocator>*)this_00, uVar5);
                eastl::hashtable<math::Vector3T<float>, eastl::pair<math::Vector3T<float> const, unsigned short>,
                                 SafeSimpleAllocatorEASTL,
                                 eastl::use_first<eastl::pair<math::Vector3T<float> const, unsigned short>>,
                                 eastl::equal_to<math::Vector3T<float>>, eastl::hash<math::Vector3T<float>>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true, true>::find(local_a0);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar4 = eastl::operator!=((eastl*)local_a0, (hashtable_iterator_base*)local_68, extraout_RDX);
                if (bVar4) {
                    lVar10 = local_a0->HeapBeginPtr();
                    pLVar2 = local_48;
                    local_68[0] = *(ushort*)(lVar10 + 12);
                    if (local_68[0] == 65535) {
                        *(undefined1*)(lVar8 + 12) = 0;
                    } else {
                        lVar10 = local_48->find(local_68);
                        lVar11 = pLVar2->end();
                        if (lVar10 == lVar11) {
                            if (*(byte*)local_40 < 56) {
                                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                  eastl::allocator,
                                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                eastl::allocator>>::emplace<unsigned short&,
                                                                                            unsigned char&>(
                                    (vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                                        local_48,
                                    local_68, (uchar*)local_40);
                                bVar1 = *(byte*)local_40;
                                bVar13 = bVar1 + 1;
                                *(byte*)local_40 = bVar13;
                                *(byte*)(lVar8 + 12) = bVar1;
                                if (56 < bVar13) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/model/GeometryBatch.cpp",
                                              1176, (char*)0);
                                }
                            } else {
                                uVar12 = logger::default_logger();
                                logger::Logger::Log(uVar12, 0, 8,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                    1170,
                                                    "GeometryBatch WeldVertexEdgesWithMap is running out of bones");
                            }
                        } else {
                            *(undefined1*)(lVar8 + 12) = *(undefined1*)(lVar10 + 2);
                        }
                    }
                } else if (*(byte*)(lVar8 + 12) == 0) {
                    local_32 = 65535;
                    eastl::hashtable<math::Vector3T<float>, eastl::pair<math::Vector3T<float> const, unsigned short>,
                                     SafeSimpleAllocatorEASTL,
                                     eastl::use_first<eastl::pair<math::Vector3T<float> const, unsigned short>>,
                                     eastl::equal_to<math::Vector3T<float>>, eastl::hash<math::Vector3T<float>>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::emplace<math::Vector3T<float>&,
                                                                 unsigned short>((Vector3T*)local_68, (ushort*)phVar14);
                } else {
                    local_68[0] = (ushort) * (byte*)(lVar8 + 12);
                    lVar8 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                              BucketAllocatorEASTL,
                                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                            BucketAllocatorEASTL>>::find(local_90, local_68);
                    lVar10 = local_90->end();
                    if (lVar8 == lVar10) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("localToModelBonePair != reverseBoneIDMap.cend()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/model/GeometryBatch.cpp",
                                  1186, (char*)0);
                    }
                    eastl::hashtable<math::Vector3T<float>, eastl::pair<math::Vector3T<float> const, unsigned short>,
                                     SafeSimpleAllocatorEASTL,
                                     eastl::use_first<eastl::pair<math::Vector3T<float> const, unsigned short>>,
                                     eastl::equal_to<math::Vector3T<float>>, eastl::hash<math::Vector3T<float>>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true,
                                     true>::emplace<math::Vector3T<float>&, unsigned short&>((Vector3T*)local_68,
                                                                                             (ushort*)local_50);
                    phVar14 = local_50;
                }
                uVar5 = local_70 + 1;
                uVar9 = this_00->size();
            } while (uVar5 < uVar9);
        }
        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>::~vector_map(local_90);
    }

    // 0x10080a890, 1120 bytes, placed by class name and debug map
    // GeometryBatch::WeldVertexEdgesWithMapSkin(eastl::hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float> >, eastl::equal_to<math::Vector3T<float> >, SafeSimpleAllocatorEASTL, false>&)
    void GeometryBatch::WeldVertexEdgesWithMapSkin(hash_map* param_1) {
        undefined1 uVar1;
        byte bVar2;
        undefined2 uVar3;
        char cVar4;
        bool bVar5;
        ulong uVar6;
        ushort* puVar7;
        ushort* puVar8;
        long lVar9;
        ulong uVar10;
        byte* pbVar11;
        long lVar12;
        undefined1* puVar13;
        undefined8 uVar14;
        uchar* puVar15;
        char* pcVar16;
        hashtable_iterator_base* extraout_RDX;
        Vector4T<unsigned char>* this_00;
        uint uVar17;
        hash_map* phVar18;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* this_01;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_02;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>
            local_d0[32];
        Vector3T local_b0[16];
        ulong local_a0;
        vector<GeometryBatchVertexSkin, eastl::allocator>* local_98;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_90;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_88;
        undefined8 local_80;
        Vector4T<unsigned char>* local_68;
        undefined8 local_60;
        byte* local_58;
        hash_map* local_50;
        GeometryBatch* local_48;
        ushort local_40[2];
        Vector4T<unsigned char> local_3c[4];
        Vector4T<unsigned char>* local_38;

        if (field_33 != '\0') {
            local_50 = param_1;
            eastl::vector_map<
                unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                eastl::vector<eastl::pair<unsigned short, unsigned short>, BucketAllocatorEASTL>>::vector_map(local_d0);
            this_01 =
                (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&field_168;
            local_48 = this;
            uVar6 = this_01->size();
            local_d0->reserve(uVar6);
            puVar7 = (ushort*)this_01->HeapBeginPtr();
            puVar8 = (ushort*)this_01->end();
            if (puVar7 != puVar8) {
                do {
                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                                      eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                    BucketAllocatorEASTL>>::emplace<unsigned short const&,
                                                                                    unsigned short const&>(
                        local_d0, puVar7 + 1, puVar7);
                    puVar7 = puVar7 + 2;
                } while (puVar7 != puVar8);
            }
            this_02 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&local_48->field_480;
            cVar4 = this_02->empty();
            if (cVar4 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_vertexDataBufferPos.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1211, (char*)0);
            }
            lVar9 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_02);
            if (lVar9 != 0) {
                local_98 = (vector<GeometryBatchVertexSkin, eastl::allocator>*)&local_48->m_vertexDataBufferSkin;
                local_58 = &local_48->m_boneCount;
                uVar6 = 0;
                phVar18 = local_50;
                local_90 = this_02;
                local_88 = this_01;
                do {
                    local_60 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                        (vector<GeometryBatchVertexPos, eastl::allocator>*)this_02, uVar6);
                    local_a0 = uVar6;
                    local_38 =
                        (Vector4T<unsigned char>*)eastl::vector<GeometryBatchVertexSkin, eastl::allocator>::operator[](
                            local_98, uVar6);
                    eastl::hashtable<math::Vector3T<float>, eastl::pair<math::Vector3T<float> const, SharedVertexSkin>,
                                     SafeSimpleAllocatorEASTL,
                                     eastl::use_first<eastl::pair<math::Vector3T<float> const, SharedVertexSkin>>,
                                     eastl::equal_to<math::Vector3T<float>>, eastl::hash<math::Vector3T<float>>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::find(local_b0);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar5 = eastl::operator!=((eastl*)local_b0, (hashtable_iterator_base*)&local_80, extraout_RDX);
                    if (bVar5) {
                        lVar9 = local_b0->HeapBeginPtr();
                        local_80 = *(undefined8*)(lVar9 + 12);
                        this_00 = local_38 + 4;
                        uVar17 = 0;
                        do {
                            pbVar11 = (byte*)math::Vector4T<unsigned char>::operator[](
                                (Vector4T<unsigned char>*)&local_80, uVar17);
                            local_40[0] = (ushort)*pbVar11;
                            lVar9 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                      eastl::allocator,
                                                      eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                    eastl::allocator>>::find(this_01, local_40);
                            lVar12 = this_01->end();
                            if (lVar9 == lVar12) {
                                if (*local_58 < 56) {
                                    puVar15 = (uchar*)math::Vector4T<unsigned char>::operator[](
                                        (Vector4T<unsigned char>*)&local_80, uVar17);
                                    eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                        emplace<unsigned char&, unsigned char&>(this_01, puVar15, local_58);
                                    bVar2 = *local_58;
                                    *local_58 = bVar2 + 1;
                                    pbVar11 = (byte*)math::Vector4T<unsigned char>::operator[](local_38, uVar17);
                                    *pbVar11 = bVar2;
                                    puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](
                                        (Vector4T<unsigned char>*)((long)&local_80 + 4), uVar17);
                                    uVar1 = *puVar13;
                                    puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](this_00, uVar17);
                                    *puVar13 = uVar1;
                                    local_48->field_33 = local_48->field_33 + '\x01';
                                    if (56 < local_48->m_boneCount) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/GeometryBatch.cpp",
                                                  1247, (char*)0);
                                    }
                                } else {
                                    uVar14 = logger::default_logger();
                                    logger::Logger::Log(
                                        uVar14, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/model/GeometryBatch.cpp",
                                        1238, "GeometryBatch WeldVertexEdgesWithMapSkin is running out of bones");
                                }
                            } else {
                                uVar3 = *(undefined2*)(lVar9 + 2);
                                puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](local_38, uVar17);
                                *puVar13 = (char)uVar3;
                                puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](
                                    (Vector4T<unsigned char>*)((long)&local_80 + 4), uVar17);
                                uVar1 = *puVar13;
                                puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](this_00, uVar17);
                                *puVar13 = uVar1;
                            }
                            uVar17 = uVar17 + 1;
                        } while (uVar17 != 4);
                        phVar18 = local_50;
                    } else {
                        new (local_40) GeometryBatchVertexSkin();
                        local_68 = local_38 + 4;
                        uVar17 = 0;
                        do {
                            pcVar16 = (char*)math::Vector4T<unsigned char>::operator[](local_68, uVar17);
                            if (*pcVar16 == '\0')
                                break;
                            pbVar11 = (byte*)math::Vector4T<unsigned char>::operator[](local_38, uVar17);
                            local_80 = CONCAT62(local_80._2_6_, (ushort)*pbVar11);
                            lVar9 = eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                      BucketAllocatorEASTL,
                                                      eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                    BucketAllocatorEASTL>>::find(local_d0,
                                                                                                 (ushort*)&local_80);
                            uVar3 = *(undefined2*)(lVar9 + 2);
                            puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](
                                (Vector4T<unsigned char>*)local_40, uVar17);
                            *puVar13 = (char)uVar3;
                            puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](local_68, uVar17);
                            uVar1 = *puVar13;
                            puVar13 = (undefined1*)math::Vector4T<unsigned char>::operator[](local_3c, uVar17);
                            *puVar13 = uVar1;
                            lVar12 = local_d0->end();
                            if (lVar9 == lVar12) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("localToModelJointPair != reverseJointIDMap.cend()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/model/GeometryBatch.cpp",
                                          1262, (char*)0);
                            }
                            uVar17 = uVar17 + 1;
                            phVar18 = local_50;
                        } while (uVar17 != 4);
                        eastl::hashtable<
                            math::Vector3T<float>, eastl::pair<math::Vector3T<float> const, SharedVertexSkin>,
                            SafeSimpleAllocatorEASTL,
                            eastl::use_first<eastl::pair<math::Vector3T<float> const, SharedVertexSkin>>,
                            eastl::equal_to<math::Vector3T<float>>, eastl::hash<math::Vector3T<float>>,
                            eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                            true, true>::emplace<math::Vector3T<float>&, SharedVertexSkin&>((Vector3T*)&local_80,
                                                                                            (SharedVertexSkin*)phVar18);
                        this_01 = local_88;
                    }
                    this_02 = local_90;
                    uVar6 = local_a0 + 1;
                    uVar10 =
                        eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(local_90);
                } while (uVar6 < uVar10);
            }
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                            BucketAllocatorEASTL>>::~vector_map(local_d0);
        }
    }

    // 0x10080ade0: the linker folded this into SharedVertexSkin::SharedVertexSkin(), which has identical code
    GeometryBatchVertexSkin::GeometryBatchVertexSkin();

    // 0x10080ae40, 160 bytes, placed by class name
    // GeometryBatch::Transform(math::Matrix44T<float> const&)
    void GeometryBatch::Transform(Matrix44T* param_1) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        Vector3T<float>* this_01;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;

        this_00 = &field_480;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1276, (char*)0);
        }
        lVar2 = this_00->size();
        if (lVar2 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                this_01 = (Vector3T<float>*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertexPos, eastl::allocator>*)this_00, uVar5);
                math::Vector3T<float>::operator*=(this_01, param_1);
                uVar5 = (ulong)uVar4;
                uVar3 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar3);
        }
        m_transformed = true;
    }

    // 0x10080aee0, 336 bytes, placed by class name
    // GeometryBatch::TransformNormals(math::QuaternionT<float> const&, bool)
    void GeometryBatch::TransformNormals(QuaternionT* param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        GeometryBatchVertex* pGVar4;
        ulong uVar5;
        ulong uVar6;
        uint uVar7;
        undefined8 local_50[2];
        undefined8 local_40[2];

        this_00 = &field_480;
        cVar2 = this_00->empty();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1287, (char*)0);
        }
        lVar3 = this_00->size();
        if (lVar3 != 0) {
            uVar5 = 0;
            uVar6 = 1;
            do {
                pGVar4 = (GeometryBatchVertex*)eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertex, eastl::allocator>*)&field_448, uVar5);
                local_40[0] = pGVar4->GetNormal();
                local_50[0] = math::operator*((Vector3T*)local_40, param_1);
                pGVar4->SetNormal(local_50);
                uVar5 = this_00->size();
                bVar1 = uVar6 < uVar5;
                uVar5 = uVar6;
                uVar6 = (ulong)((int)uVar6 + 1);
            } while (bVar1);
        }
        if (param_2) {
            lVar3 = this_00->size();
            if (lVar3 != 0) {
                uVar7 = 1;
                uVar5 = 0;
                do {
                    pGVar4 = (GeometryBatchVertex*)eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                        (vector<GeometryBatchVertex, eastl::allocator>*)&field_448, uVar5);
                    local_40[0] = pGVar4->GetTangent();
                    local_50[0] = math::operator*((Vector3T*)local_40, param_1);
                    pGVar4->SetTangent(local_50);
                    uVar5 = (ulong)uVar7;
                    uVar6 = this_00->size();
                    uVar7 = uVar7 + 1;
                } while (uVar5 < uVar6);
            }
        }
        m_transformed = true;
    }

    // 0x10080b110, 160 bytes, placed by class name
    // GeometryBatch::Translate(math::Vector3T<float> const&)
    void GeometryBatch::Translate(Vector3T* param_1) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        Vector3T<float>* this_01;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;

        this_00 = &field_480;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1306, (char*)0);
        }
        lVar2 = this_00->size();
        if (lVar2 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                this_01 = (Vector3T<float>*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertexPos, eastl::allocator>*)this_00, uVar5);
                math::Vector3T<float>::operator+=(this_01, param_1);
                uVar5 = (ulong)uVar4;
                uVar3 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar3);
        }
        m_transformed = true;
    }

    // 0x10080b1b0, 352 bytes, placed by class name
    // GeometryBatch::Rotate(math::QuaternionT<float> const&, bool)
    void GeometryBatch::Rotate(QuaternionT* param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        ulong uVar4;
        Vector3T<float>* this_01;
        GeometryBatchVertex* this_02;
        undefined7 in_register_00000011;
        ulong uVar5;
        ulong uVar6;
        undefined8 local_50;
        uint local_44;
        undefined8 local_40[2];

        uVar5 = CONCAT71(in_register_00000011, param_2) & 4294967295;
        this_00 = &field_480;
        cVar2 = this_00->empty();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1317, (char*)0);
        }
        lVar3 = this_00->size();
        if (lVar3 != 0) {
            local_44 = (uint)CONCAT71(in_register_00000011, param_2);
            uVar4 = 0;
            uVar6 = 1;
            do {
                this_01 = (Vector3T<float>*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertexPos, eastl::allocator>*)this_00, uVar4);
                math::Vector3T<float>::operator*=(this_01, param_1);
                if ((char)uVar5 != '\0') {
                    this_02 = (GeometryBatchVertex*)eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                        (vector<GeometryBatchVertex, eastl::allocator>*)&field_448, uVar4);
                    local_50 = this_02->GetNormal();
                    local_40[0] = math::operator*((Vector3T*)&local_50, param_1);
                    this_02->SetNormal(local_40);
                    local_50 = this_02->GetTangent();
                    local_40[0] = math::operator*((Vector3T*)&local_50, param_1);
                    uVar5 = (ulong)local_44;
                    this_02->SetTangent(local_40);
                }
                uVar4 = this_00->size();
                bVar1 = uVar6 < uVar4;
                uVar4 = uVar6;
                uVar6 = (ulong)((int)uVar6 + 1);
            } while (bVar1);
        }
        m_transformed = true;
    }

    // 0x10080b310, 784 bytes, placed by class name
    // GeometryBatch::Rotate90(Rotation90, bool)
    void GeometryBatch::Rotate90(char param_2, char param_3) {
        undefined1* this_00;
        uint uVar1;
        vector vVar2;
        bool bVar3;
        char cVar4;
        long lVar5;
        Layout* pLVar6;
        vector* pvVar7;
        type* ptVar8;
        uint* puVar9;
        signed* psVar10;
        char* pcVar11;
        type* ptVar12;
        Layout* this_01;
        uint local_48;

        this_00 = &field_448;
        cVar4 = this_00->empty();
        if (cVar4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBuffer.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1335, (char*)0);
        }
        if (param_2 != '\0') {
            lVar5 = this_00->size();
            if (lVar5 != 0) {
                ptVar8 = (type*)0;
                ptVar12 = (type*)&DAT_00000001;
                do {
                    lVar5 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                        (vector<GeometryBatchVertex, eastl::allocator>*)this_00, (ulong)ptVar8);
                    pLVar6 = (Layout*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                        (vector<GeometryBatchVertexPos, eastl::allocator>*)&field_480, (ulong)ptVar8);
                    if (param_2 == '\x03') {
                        pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                        ptVar8 = (type*)pLVar6->second();
                        eastl::swap<float>((float*)pvVar7, (float*)ptVar8);
                        pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                        local_48 = *(uint*)pvVar7;
                        pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                    LAB_10080b4fd:
                        local_48 = local_48 ^ 2147483648;
                        *(uint*)pvVar7 = local_48;
                    } else {
                        if (param_2 == '\x02') {
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                            uVar1 = *(uint*)pvVar7;
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                            *(uint*)pvVar7 = uVar1 ^ 2147483648;
                        LAB_10080b49a:
                            puVar9 = (uint*)pLVar6->second();
                            local_48 = *puVar9;
                            pvVar7 = (vector*)pLVar6->second();
                            goto LAB_10080b4fd;
                        }
                        if (param_2 == '\x01') {
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                            ptVar8 = (type*)pLVar6->second();
                            eastl::swap<float>((float*)pvVar7, (float*)ptVar8);
                            goto LAB_10080b49a;
                        }
                    }
                    if (param_3 != '\0') {
                        pLVar6 = (Layout*)(lVar5 + 4);
                        this_01 = (Layout*)(lVar5 + 8);
                        if (param_2 == '\x03') {
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                            psVar10 = (signed*)pLVar6->z();
                            eastl::swap<signed char>((signed*)pvVar7, psVar10);
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, (type*)psVar10);
                            vVar2 = *pvVar7;
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, (type*)psVar10);
                            *pvVar7 = (vector) - (char)vVar2;
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)psVar10);
                            psVar10 = (signed*)this_01->z();
                            eastl::swap<signed char>((signed*)pvVar7, psVar10);
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)psVar10);
                            vVar2 = *pvVar7;
                            pvVar7 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)psVar10);
                        } else {
                            if (param_2 == '\x02') {
                                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                                vVar2 = *pvVar7;
                                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                                *pvVar7 = (vector) - (char)vVar2;
                                pcVar11 = (char*)pLVar6->z();
                                cVar4 = *pcVar11;
                                pcVar11 = (char*)pLVar6->z();
                                *pcVar11 = -cVar4;
                                pvVar7 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar8);
                                vVar2 = *pvVar7;
                                pvVar7 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar8);
                                *pvVar7 = (vector) - (char)vVar2;
                            } else {
                                if (param_2 != '\x01')
                                    goto LAB_10080b3f3;
                                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar8);
                                psVar10 = (signed*)pLVar6->z();
                                eastl::swap<signed char>((signed*)pvVar7, psVar10);
                                pcVar11 = (char*)pLVar6->z();
                                cVar4 = *pcVar11;
                                pcVar11 = (char*)pLVar6->z();
                                *pcVar11 = -cVar4;
                                pvVar7 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)psVar10);
                                psVar10 = (signed*)this_01->z();
                                eastl::swap<signed char>((signed*)pvVar7, psVar10);
                            }
                            pvVar7 = (vector*)this_01->z();
                            vVar2 = *pvVar7;
                            pvVar7 = (vector*)this_01->z();
                        }
                        *pvVar7 = (vector) - (char)vVar2;
                    }
                LAB_10080b3f3:
                    ptVar8 = (type*)this_00->size();
                    bVar3 = ptVar12 < ptVar8;
                    ptVar8 = ptVar12;
                    ptVar12 = (type*)(ulong)((int)ptVar12 + 1);
                } while (bVar3);
            }
            m_transformed = true;
        }
    }

    // 0x10080b620, 160 bytes, placed by class name
    // GeometryBatch::Scale(math::Vector3T<float> const&)
    void GeometryBatch::Scale(Vector3T* param_1) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        Vector3T<float>* this_01;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;

        this_00 = &field_480;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1399, (char*)0);
        }
        lVar2 = this_00->size();
        if (lVar2 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                this_01 = (Vector3T<float>*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                    (vector<GeometryBatchVertexPos, eastl::allocator>*)this_00, uVar5);
                math::Vector3T<float>::operator*=(this_01, param_1);
                uVar5 = (ulong)uVar4;
                uVar3 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar3);
        }
        m_transformed = true;
    }

    // 0x10080b6c0, 432 bytes, placed by class name
    // GeometryBatch::MirrorZ()
    void GeometryBatch::MirrorZ() {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_01;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* pvVar3;
        ulong uVar4;
        ushort* puVar5;
        ushort* puVar6;
        ulong uVar7;
        long lVar8;
        long lVar9;
        uint uVar10;

        cVar2 = (&field_480)->empty();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_vertexDataBufferPos.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1411, (char*)0);
        }
        this_01 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)(&field_216)->begin();
        pvVar3 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)(&field_216)->end();
        if (this_01 != pvVar3) {
            this_00 = &field_448;
            do {
                uVar4 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_01);
                if (2 < uVar4) {
                    uVar10 = 2;
                    uVar4 = 1;
                    do {
                        puVar5 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                            (vector<unsigned short, eastl::allocator>*)this_01, (ulong)(uVar10 - 1));
                        puVar6 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                            (vector<unsigned short, eastl::allocator>*)this_01, (ulong)uVar10);
                        eastl::swap<unsigned short>(puVar5, puVar6);
                        uVar7 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_01);
                        uVar10 = uVar10 + 3;
                        bVar1 = uVar4 < uVar7 / 3;
                        uVar4 = (ulong)((int)uVar4 + 1);
                    } while (bVar1);
                }
                lVar8 = this_00->size();
                if (lVar8 != 0) {
                    uVar4 = 0;
                    uVar7 = 1;
                    do {
                        lVar8 = eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertex, eastl::allocator>*)this_00, uVar4);
                        lVar9 = eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                            (vector<GeometryBatchVertexPos, eastl::allocator>*)&field_480, uVar4);
                        *(uint*)(lVar9 + 8) = *(uint*)(lVar9 + 8) ^ 2147483648;
                        *(char*)(lVar8 + 6) = -*(char*)(lVar8 + 6);
                        *(char*)(lVar8 + 10) = -*(char*)(lVar8 + 10);
                        *(char*)(lVar8 + 11) = (*(char*)(lVar8 + 11) == '\x7f') + '\x7f';
                        uVar4 = this_00->size();
                        bVar1 = uVar7 < uVar4;
                        uVar4 = uVar7;
                        uVar7 = (ulong)((int)uVar7 + 1);
                    } while (bVar1);
                }
                this_01 = this_01 + 32;
            } while (this_01 != pvVar3);
        }
        m_transformed = true;
    }

    // 0x10080b8c0, 176 bytes, placed by class name
    // GeometryBatch::HillChange(HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, LocationHelpers::LocationHillChangeData const&)
    void GeometryBatch::HillChange(undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5,
                                   undefined8 param_6) {
        int iVar1;
        Vector2T<int>* this_00;
        Vector2T<int>* pVVar2;
        float* pfVar3;

        this_00 = (Vector2T<int>*)(&field_480)->HeapBeginPtr();
        pVVar2 = (Vector2T<int>*)(&field_480)->end();
        for (; this_00 != pVVar2; this_00 = this_00 + 16) {
            iVar1 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, this_00);
            pfVar3 = (float*)this_00->y();
            *pfVar3 = (float)iVar1;
        }
        m_transformed = true;
    }

    // 0x10080bc60, 144 bytes, placed by class name
    // GeometryBatch::Recolour(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void GeometryBatch::Recolour(Array* param_1, Array* param_2) {
        ushort uVar1;
        long lVar2;
        ulong uVar3;
        ushort* puVar4;
        ulong uVar5;

        lVar2 = param_1->end();
        if (lVar2 != 0) {
            uVar5 = 0;
            do {
                uVar3 = param_2->end();
                if (uVar3 <= uVar5) {
                    return;
                }
                puVar4 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, uVar5);
                uVar1 = *puVar4;
                puVar4 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_2, uVar5);
                RecolourSingle(this, uVar1, *puVar4);
                uVar5 = uVar5 + 1;
                uVar3 = param_1->end();
            } while (uVar5 < uVar3);
        }
    }

    // 0x10080bcf0, 112 bytes, placed by class name
    // GeometryBatch::RecolourSingle(unsigned short, unsigned short)
    void GeometryBatch::RecolourSingle(ushort param_1, ushort param_2) {
        long lVar1;
        ulong uVar2;
        ushort* puVar3;
        ulong uVar4;
        ushort* this_00;

        this_00 = &m_faceHSLBuffer;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                puVar3 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_00, uVar4);
                if (*puVar3 == param_1) {
                    puVar3 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                        (vector<unsigned short, eastl::allocator>*)this_00, uVar4);
                    *puVar3 = param_2;
                }
                uVar4 = uVar4 + 1;
                uVar2 = this_00->size();
            } while (uVar4 < uVar2);
        }
    }

    // 0x10080bd60, 128 bytes, placed by class name
    // GeometryBatch::AmbientAdjust(unsigned short)
    void GeometryBatch::AmbientAdjust(ushort param_1) {
        long lVar1;
        ushort* puVar2;
        undefined2* puVar3;
        ulong uVar4;
        undefined2 uVar5;
        ulong uVar6;
        ushort* this_00;

        this_00 = &m_faceHSLBuffer;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar6 = 0;
            do {
                puVar2 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_00, uVar6);
                uVar5 = math::RunetekColour::HSLAdjustAmbient(*puVar2, param_1);
                puVar3 = (undefined2*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_00, uVar6);
                *puVar3 = uVar5;
                uVar6 = uVar6 + 1;
                uVar4 = this_00->size();
            } while (uVar6 < uVar4);
        }
    }

    // 0x10080bde0, 176 bytes, placed by class name
    // GeometryBatch::TintAdjust(signed char, signed char, signed char, unsigned char)
    void GeometryBatch::TintAdjust(char param_2, char param_3, char param_4, undefined1 param_5) {
        undefined2 uVar1;
        long lVar2;
        undefined2* puVar3;
        ulong uVar4;
        ulong uVar5;
        ushort* this_00;

        this_00 = &m_faceHSLBuffer;
        lVar2 = this_00->size();
        if (lVar2 != 0) {
            uVar5 = 0;
            do {
                puVar3 = (undefined2*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_00, uVar5);
                uVar1 = math::RunetekColour::HSLAdjustTint(*puVar3, (int)param_2, (int)param_3, (int)param_4, param_5);
                puVar3 = (undefined2*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_00, uVar5);
                *puVar3 = uVar1;
                uVar5 = uVar5 + 1;
                uVar4 = this_00->size();
            } while (uVar5 < uVar4);
        }
    }

    // 0x10080be90, 1616 bytes, placed by class name
    // GeometryBatch::CreateRenderingResources()
    void GeometryBatch::CreateRenderingResources() {
        GeometryBatch* pGVar1;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_00;
        char cVar2;
        uint uVar3;
        int iVar4;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_01;
        ulong uVar5;
        long lVar6;
        long lVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        IndexBuffer* pIVar8;
        undefined8 uVar9;
        VertexDeclaration* pVVar10;
        void* pvVar11;
        uint* puVar12;
        ulong uVar13;
        ulong uVar14;
        VertexBuffer* local_90;
        undefined1* local_88;
        undefined1* local_80;
        undefined8 local_78;
        undefined4 local_70;
        Layout* local_68;
        undefined4 local_60;
        undefined4 local_5c;
        undefined4 local_58;
        GeometryBatch* local_50;
        VertexBuffer* local_48;
        VertexDeclaration* local_40;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* local_38;

        cVar2 = VertexBuffersInitialised(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("VertexBuffersInitialised()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatch.cpp",
                      1482, "Check CreateSecondaryVertexBuffers() is called before ConstructFinishAndUpload()");
        }
        local_40 = (VertexDeclaration*)&field_216;
        uVar3 = m_numLods - 1;
        local_50 = this;
        if (uVar3 != 0) {
            uVar14 = (ulong)uVar3;
            uVar13 = (ulong)(m_numLods - 2);
            do {
                pVVar10 = local_40;
                this_01 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
                    std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                        (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)local_40, uVar13);
                local_38 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
                    std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                        (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)pVVar10, uVar14);
                uVar5 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(local_38);
                local_48 = (VertexBuffer*)CONCAT44(local_48._4_4_, (float)uVar5);
                uVar5 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_01);
                this_00 = local_38;
                if (local_48._0_4_ / (float)uVar5 <= 0.98) {
                    lVar6 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_01);
                    lVar7 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_00);
                    this = local_50;
                    if ((199 < (ulong)(lVar6 - lVar7)) &&
                        (lVar6 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_00),
                         lVar6 != 0))
                        break;
                }
                this_00->set_capacity(0);
                m_numLods = m_numLods - 1;
                uVar14 = uVar14 - 1;
                uVar13 = uVar13 - 1;
            } while ((int)uVar14 != 0);
        }
        pGVar1 = local_50;
        if (m_numLods != 0) {
            local_38 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)&field_568;
            uVar14 = 0;
            do {
                this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                    std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                        (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)local_40, uVar14);
                cVar2 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_02);
                if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!indexBuffer.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatch.cpp",
                              1506, (char*)0);
                }
                pIVar8 = (IndexBuffer*)std::array<render::IndexBuffer, 5ul>::operator[](
                    (array<render::IndexBuffer, 5ul>*)local_38, uVar14);
                iVar4 = this_02->size();
                uVar9 = this_02->HeapBeginPtr();
                pIVar8->Create(iVar4 * 2, 0, uVar9, 5123);
                if (uVar14 != 0) {
                    this_02->set_capacity(0);
                }
                uVar14 = uVar14 + 1;
                this = pGVar1;
            } while (uVar14 < pGVar1->m_numLods);
        }
        cVar2 = HasJoints(this);
        local_68 = (Layout*)&field_448;
        uVar3 = local_68->size();
        pGVar1 = local_50;
        if (cVar2 == '\0') {
            if (uVar3 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("vertexDataBufferSize > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1545, (char*)0);
            }
            local_40 = (VertexDeclaration*)&local_50->field_512;
            uVar14 = local_40->end();
            if (uVar14 != uVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBufferPosLP.size() == vertexDataBufferSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1546, (char*)0);
            }
            pVVar10 = (VertexDeclaration*)GeometryBatchRenderer::GetVertexDecl();
            iVar4 = pVVar10->GetVertexStride(0);
            pvVar11 = (void*)local_40->data();
            (&pGVar1->field_1088, iVar4 * uVar3, 0, pvVar11)->Create();
            iVar4 = pVVar10->GetVertexStride(1);
            pvVar11 = (void*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_68);
            (&pGVar1->field_1008, uVar3 * iVar4, 0, pvVar11)->Create();
            local_90 = (VertexBuffer*)&pGVar1->field_1088;
            local_88 = &pGVar1->field_1008;
            local_60 = pVVar10->GetVertexStride(0);
            local_40 = pVVar10;
            local_5c = pVVar10->GetVertexStride(1);
            local_78 = 0;
            if (pGVar1->m_numLods != 0) {
                local_38 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)&pGVar1->field_1248;
                local_48 = (VertexBuffer*)std::array<render::VertexBuffer_const*, 2ul>::operator[]((ulong)&local_90);
                puVar12 = (uint*)std::array<unsigned int, 2ul>::operator[]((ulong)&local_60);
                std::array<unsigned int, 2ul>::operator[]((ulong)&local_78);
                uVar14 = 0;
                do {
                    pVVar10 = (VertexDeclaration*)std::array<render::InputAssemblerState, 5ul>::operator[](
                        (array<render::InputAssemblerState, 5ul>*)local_38, uVar14);
                    pVVar10->SetVertexStreamData((uint)local_40, 2, &local_48->field_0, puVar12);
                    uVar3 = GetIndexBuffer(pGVar1, (uint)uVar14);
                    render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)pVVar10, uVar3);
                    uVar14 = uVar14 + 1;
                } while (uVar14 < pGVar1->m_numLods);
            }
        } else {
            if (uVar3 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("vertexDataBufferSize > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1520, (char*)0);
            }
            local_38 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)&local_50->field_512;
            uVar14 = local_38->end();
            if (uVar14 != uVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBufferPosLP.size() == vertexDataBufferSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1521, (char*)0);
            }
            local_40 = (VertexDeclaration*)&pGVar1->m_vertexDataBufferSkin;
            uVar14 = local_40->size();
            if (uVar14 != uVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBufferSkin.size() == vertexDataBufferSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatch.cpp",
                          1522, (char*)0);
            }
            pVVar10 = (VertexDeclaration*)GeometryBatchRenderer::GetVertexDecl2();
            local_48 = (VertexBuffer*)&pGVar1->field_1088;
            iVar4 = pVVar10->GetVertexStride(0);
            pvVar11 = (void*)local_38->data();
            (&pGVar1->field_1088, iVar4 * uVar3, 0, pvVar11)->Create();
            iVar4 = pVVar10->GetVertexStride(1);
            pvVar11 = (void*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_68);
            (&pGVar1->field_1008, iVar4 * uVar3, 0, pvVar11)->Create();
            iVar4 = pVVar10->GetVertexStride(2);
            pvVar11 = (void*)local_40->HeapBeginPtr();
            (&pGVar1->field_1168, uVar3 * iVar4, 0, pvVar11)->Create();
            local_90 = local_48;
            local_88 = &pGVar1->field_1008;
            local_80 = &pGVar1->field_1168;
            local_60 = pVVar10->GetVertexStride(0);
            local_5c = pVVar10->GetVertexStride(1);
            local_40 = pVVar10;
            local_58 = pVVar10->GetVertexStride(2);
            local_70 = 0;
            local_78 = 0;
            if (pGVar1->m_numLods != 0) {
                local_38 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)&pGVar1->field_1248;
                local_48 = (VertexBuffer*)std::array<render::VertexBuffer_const*, 3ul>::operator[]((ulong)&local_90);
                uVar14 = 0;
                puVar12 = (uint*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)&local_60, 0);
                std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)&local_78, 0);
                do {
                    pVVar10 = (VertexDeclaration*)std::array<render::InputAssemblerState, 5ul>::operator[](
                        (array<render::InputAssemblerState, 5ul>*)local_38, uVar14);
                    pVVar10->SetVertexStreamData((uint)local_40, 3, &local_48->field_0, puVar12);
                    uVar3 = GetIndexBuffer(pGVar1, (uint)uVar14);
                    render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)pVVar10, uVar3);
                    uVar14 = uVar14 + 1;
                } while (uVar14 < pGVar1->m_numLods);
            }
        }
        local_68->set_capacity(0);
    }

    // 0x10080c5b0, 80 bytes, placed by class name
    // GeometryBatch::ClearFaceData()
    void GeometryBatch::ClearFaceData() {
        std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
            (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, 0);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x10080c600, 352 bytes, placed by class name
    // GeometryBatch::PushFaceRange(GeometryBatch const&, unsigned short, unsigned short)
    void GeometryBatch::PushFaceRange(GeometryBatch* param_1, ushort param_2, ushort param_3) {
        ushort* this_00;
        long lVar1;
        Layout* this_01;
        Layout* this_02;
        long lVar2;
        long lVar3;
        long lVar4;
        undefined6 in_register_0000000a;
        undefined6 in_register_00000012;
        ulong uVar5;
        ulong uVar6;

        this_00 = &m_faceHSLBuffer;
        lVar1 = this_00->size();
        this_01 = (Layout*)std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
            (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, 0);
        eastl::vector<unsigned short, eastl::allocator>::resize((ulong)this_01);
        eastl::vector<unsigned short, eastl::allocator>::resize((ulong)this_00);
        eastl::vector<unsigned char, eastl::allocator>::resize((ulong)&m_faceTransparencyBuffer);
        this_02 = (Layout*)std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
            (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&param_1->field_216, 0);
        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        lVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_01);
        std::copy<unsigned short const*, unsigned short*>(
            (ushort*)(lVar2 + (ulong)(uint)((int)CONCAT62(in_register_00000012, param_2) * 3) * 2),
            (ushort*)(lVar3 + (ulong)(uint)((int)CONCAT62(in_register_0000000a, param_3) * 3) * 2),
            (ushort*)(lVar4 + lVar1 * 6));
        lVar2 = (&param_1->m_faceHSLBuffer)->HeapBeginPtr();
        uVar6 = CONCAT62(in_register_00000012, param_2) & 4294967295;
        lVar3 = (&param_1->m_faceHSLBuffer)->HeapBeginPtr();
        uVar5 = CONCAT62(in_register_0000000a, param_3) & 4294967295;
        lVar4 = this_00->HeapBeginPtr();
        std::copy<unsigned short const*, unsigned short*>((ushort*)(lVar2 + uVar6 * 2), (ushort*)(lVar3 + uVar5 * 2),
                                                          (ushort*)(lVar4 + lVar1 * 2));
        lVar2 = (&param_1->m_faceTransparencyBuffer)->HeapBeginPtr();
        lVar3 = (&param_1->m_faceTransparencyBuffer)->HeapBeginPtr();
        lVar4 = (&m_faceTransparencyBuffer)->HeapBeginPtr();
        std::copy<unsigned char const*, unsigned char*>((uchar*)(uVar6 + lVar2), (uchar*)(uVar5 + lVar3),
                                                        (uchar*)(lVar1 + lVar4));
    }

} // namespace jag::graphics

// 0x100807a60, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}

// 0x100808d50, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

namespace jag::math {
    // 0x100807a70, 48 bytes, inline, placed by debug map only (low confidence)
    // unsigned char Clamp<unsigned char>(unsigned char const&, unsigned char const&, unsigned char const&)
    uchar Clamp<unsigned char>(uchar* param_1, uchar* param_2, uchar* param_3) {
        uchar* puVar1;

        puVar1 = std::max<unsigned char>(param_2, param_1);
        puVar1 = std::min<unsigned char>(param_3, puVar1);
        return *puVar1;
    }

} // namespace jag::math
