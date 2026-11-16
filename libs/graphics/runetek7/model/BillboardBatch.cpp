// libs/graphics/runetek7/model/BillboardBatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardBatch.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    BillboardBatch::GetAABB() const;

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    BillboardBatch::GetBoneIDMap();

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    BillboardBatch::GetBoneIDMap() const;

    // 0x100064280: the linker folded this into eastl::optional<eastl::vector<char, eastl::allocator> >::operator bool() const, which has identical code
    BillboardBatch::IsTransformed() const;

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    BillboardBatch::GetLabelIDMap();

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    BillboardBatch::GetLabelIDMap() const;

    // 0x1001a3d00: the linker folded this into MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool), which has identical code
    BillboardBatch::SetTransformed(bool);

    // 0x1001c0a60: the linker folded this into GraphNode::GetChildren() const, which has identical code
    BillboardBatch::GetVertexDataBuffer() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    BillboardBatch::GetJointIDMap();

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    BillboardBatch::GetJointIDMap() const;

    // 0x100412e50: the linker folded this into game::MapSquarePointLights::GetPointLightTexture(), which has identical code
    BillboardBatch::GetIndexBuffer() const;

    // 0x1004abeb0: the linker folded this into game::EnvironmentOverride::GetBloomOverrides() const, which has identical code
    BillboardBatch::GetBoneVertices() const;

    // 0x1006a9040: the linker folded this into ui::Rectangle::GetRectangleFill() const, which has identical code
    BillboardBatch::IsLowPrecision() const;

    // 0x1007a5650: the linker folded this into SunlightDirectLighting::GetShaderConsts() const, which has identical code
    BillboardBatch::GetBillboardLabelIDMap();

    // 0x1007a5650: the linker folded this into SunlightDirectLighting::GetShaderConsts() const, which has identical code
    BillboardBatch::GetBillboardLabelIDMap() const;

    // 0x100862170, 448 bytes, base-object constructor, placed by class name
    // BillboardBatch::BillboardBatch()
    void BillboardBatch::BillboardBatch() {
        new (this) MakeSharedPool<BillboardBatch, 64>();
        new (this) math::AABB();
        field_32 = 0;
        m_faceLabelCount = 1;
        new (&field_40)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_boneCount = 1;
        new (&field_88)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_128) eastl::vector_map<
            unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                          eastl::allocator>>();
        field_168 = 0;
        new (&field_176)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_billboardLabelCount = 1;
        new (&field_224)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_264) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_296) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_328) eastl::vector<unsigned char, eastl::allocator>();
        new (&field_360) eastl::vector<BillboardBatchVertex, eastl::allocator>();
        m_lowPrecision = false;
        new (&field_400) render::IndexBuffer();
        new (&field_488) render::VertexBuffer();
        new (m_forwardPassIAState) render::InputAssemblerState();
    }

    // 0x1008623d0, 16 bytes, complete-object constructor, placed by class name
    // BillboardBatch::BillboardBatch(): jumps straight to the base-object constructor

    // 0x1008623e0, 512 bytes, base-object constructor, placed by class name
    // BillboardBatch::BillboardBatch(BillboardBatch&&)
    void BillboardBatch::BillboardBatch(BillboardBatch* param_1) {
        new (this) MakeSharedPool<BillboardBatch, 64>();
        new (this) math::AABB(param_1);
        field_32 = param_1->field_32;
        m_faceLabelCount = param_1->m_faceLabelCount;
        new (&field_40, (vector_map*)&param_1->field_40)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_boneCount = param_1->m_boneCount;
        new (&field_88, (vector_map*)&param_1->field_88)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_128, (vector_map*)&param_1->field_128) eastl::vector_map<
            unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                          eastl::allocator>>();
        field_168 = param_1->field_168;
        new (&field_176, (vector_map*)&param_1->field_176)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_billboardLabelCount = param_1->m_billboardLabelCount;
        new (&field_224, (vector_map*)&param_1->field_224)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_264, (vector*)&param_1->field_264) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_296, (vector*)&param_1->field_296) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_328, (vector*)&param_1->field_328) eastl::vector<unsigned char, eastl::allocator>();
        new (&field_360, (vector*)&param_1->field_360) eastl::vector<BillboardBatchVertex, eastl::allocator>();
        m_lowPrecision = param_1->m_lowPrecision;
        new (&field_400) render::IndexBuffer();
        new (&field_488) render::VertexBuffer();
        new (m_forwardPassIAState) render::InputAssemblerState();
    }

    // 0x100862620, 16 bytes, complete-object constructor, placed by class name
    // BillboardBatch::BillboardBatch(BillboardBatch&&): jumps straight to the base-object constructor

    // 0x100862630, 528 bytes, base-object constructor, placed by class name
    // BillboardBatch::BillboardBatch(BillboardBatch const&)
    void BillboardBatch::BillboardBatch(BillboardBatch* param_1) {
        new (this) MakeSharedPool<BillboardBatch, 64>();
        new (this) math::AABB(param_1);
        field_32 = param_1->field_32;
        m_faceLabelCount = param_1->m_faceLabelCount;
        new (&field_40, (vector_map*)&param_1->field_40)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_boneCount = param_1->m_boneCount;
        new (&field_88, (vector_map*)&param_1->field_88)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_128, (vector_map*)&param_1->field_128) eastl::vector_map<
            unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                          eastl::allocator>>();
        field_168 = param_1->field_168;
        new (&field_176, (vector_map*)&param_1->field_176)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        m_billboardLabelCount = param_1->m_billboardLabelCount;
        new (&field_224, (vector_map*)&param_1->field_224)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_264, (vector*)&param_1->field_264) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_296, (vector*)&param_1->field_296) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_328, (vector*)&param_1->field_328) eastl::vector<unsigned char, eastl::allocator>();
        new (&field_360, (vector*)&param_1->field_360) eastl::vector<BillboardBatchVertex, eastl::allocator>();
        m_lowPrecision = param_1->m_lowPrecision;
        new (&field_400) render::IndexBuffer();
        new (&field_488) render::VertexBuffer();
        new (m_forwardPassIAState) render::InputAssemblerState();
    }

    // 0x100862890, 16 bytes, complete-object constructor, placed by class name
    // BillboardBatch::BillboardBatch(BillboardBatch const&): jumps straight to the base-object constructor

    // 0x1008628a0, 320 bytes, base-object destructor, placed by class name
    // BillboardBatch::~BillboardBatch()
    void BillboardBatch::~BillboardBatch() {
        DestroyRenderingResources(this);
        m_forwardPassIAState->~InputAssemblerState();
        (&field_488)->~VertexBuffer();
        (&field_400)->~IndexBuffer();
        (&field_360)->~vector();
        (&field_328)->~vector();
        (&field_296)->~vector();
        (&field_264)->~vector();
        (&field_224)->~vector_map();
        (&field_176)->~vector_map();
        (&field_128)->~vector_map();
        (&field_88)->~vector_map();
        (&field_40)->~vector_map();
    }

    // 0x1008629e0, 64 bytes, placed by class name
    // BillboardBatch::DestroyRenderingResources()
    void BillboardBatch::DestroyRenderingResources() {
        m_forwardPassIAState->Destroy();
        (&field_400)->Destroy();
        (&field_488)->Destroy();
    }

    // 0x100862a20, 16 bytes, complete-object destructor, placed by class name
    // BillboardBatch::~BillboardBatch(): jumps straight to the base-object destructor

    // 0x100862a30, 224 bytes, placed by class name
    // BillboardBatch::UpdateAABB()
    void BillboardBatch::UpdateAABB() {
        Vector3T* pVVar1;
        Vector3T* pVVar2;
        float* pfVar3;
        Vector3T<float> local_50[16];
        undefined8 local_40;
        float local_34;

        Reset();
        pVVar1 = (Vector3T*)(&field_360)->HeapBeginPtr();
        pVVar2 = (Vector3T*)(&field_360)->end();
        if (pVVar1 != pVVar2) {
            do {
                pfVar3 = std::max<float>((float*)(pVVar1 + 20), (float*)(pVVar1 + 24));
                local_34 = *pfVar3 * 0.5;
                math::Vector3T<float>::Vector3T(local_50, local_34);
                local_40 = math::operator-(pVVar1, (Vector3T*)local_50);
                AddPoint((Vector3T*)&local_40);
                math::Vector3T<float>::Vector3T(local_50, local_34);
                local_40 = math::operator+(pVVar1, (Vector3T*)local_50);
                AddPoint((Vector3T*)&local_40);
                pVVar1 = pVVar1 + 36;
            } while (pVVar1 != pVVar2);
        }
    }

    // 0x100862b10, 16 bytes, placed by class name
    // BillboardBatch::SetBillboardSize(int)
    void BillboardBatch::SetBillboardSize(int param_1) {
        undefined4 in_register_0000003c;

        UpdateAABB((BillboardBatch*)CONCAT44(in_register_0000003c, param_1));
    }

    // 0x100862b20, 1760 bytes, placed by class name
    // BillboardBatch::LoadMeshFromModelRawRT7(PacketView&)
    void BillboardBatch::LoadMeshFromModelRawRT7(PacketView* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        short sVar1;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* this_04;
        BillboardBatch* pBVar2;
        undefined1 uVar3;
        char cVar4;
        Vector4T<float> VVar5;
        ushort uVar6;
        undefined2 uVar7;
        ushort uVar8;
        short* psVar9;
        undefined2* puVar10;
        undefined1* puVar11;
        long lVar12;
        long lVar13;
        ushort* puVar14;
        Vector4T<float>* this_05;
        vector<unsigned short, eastl::allocator>* this_06;
        Vector4T<float> VVar15;
        short sVar16;
        int iVar17;
        byte bVar18;
        ulong uVar19;
        long local_90;
        undefined4 local_80;
        undefined4 local_7c;
        undefined4 local_78;
        float local_70;
        uint local_6c;
        ulong local_68;
        ulong local_60;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_58;
        BillboardBatch* local_50;
        ulong local_48;
        float local_40;
        float local_3c;
        ushort local_38[4];

        field_32 = 0;
        uVar6 = param_1->g2LE();
        this_02 = &field_264;
        eastl::vector<unsigned short, eastl::allocator>::resize((ulong)this_02);
        eastl::vector<unsigned short, eastl::allocator>::resize((ulong)&field_296);
        eastl::vector<unsigned char, eastl::allocator>::resize((ulong)&field_328);
        (&field_360, (ulong)uVar6 * 4)->resize();
        m_faceLabelCount = 1;
        this_00 = &field_40;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        m_boneCount = 1;
        this_01 = &field_88;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        (&field_128)->clear();
        field_168 = 0;
        local_58 =
            (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&field_176;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        m_billboardLabelCount = 1;
        this_03 = &field_224;
        local_50 = this;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if (uVar6 != 0) {
            local_90 = 0;
            uVar19 = 0;
            do {
                new (&local_80) math::Vector3T<int>();
                local_80 = param_1->gFloatLE();
                local_7c = param_1->gFloatLE();
                local_78 = param_1->gFloatLE();
                new (&local_40) math::Vector2T<int>();
                local_40 = (float)param_1->gFloatLE();
                local_3c = (float)param_1->gFloatLE();
                uVar7 = param_1->g2LE();
                puVar10 = (undefined2*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)&field_296, uVar19);
                *puVar10 = uVar7;
                uVar3 = param_1->g1();
                puVar11 = (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                    (vector<unsigned char, eastl::allocator>*)&field_328, uVar19);
                *puVar11 = uVar3;
                uVar8 = param_1->g2sLE();
                if (uVar8 == 65535) {
                    local_68 = 0;
                LAB_100862e02:
                } else {
                    local_38[0] = uVar8 & 255;
                    lVar12 = this_00->find(local_38);
                    lVar13 = this_00->end();
                    if (lVar12 != lVar13) {
                        local_68 = CONCAT71((int7)((ulong)lVar13 >> 8), *(undefined1*)(lVar12 + 2));
                        goto LAB_100862e02;
                    }
                    bVar18 = local_50->m_faceLabelCount;
                    local_50->m_faceLabelCount = bVar18 + 1;
                    local_38[0] = uVar8 & 255;
                    puVar14 = (ushort*)eastl::vector_map<
                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                    operator[](
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                            this_00,
                        local_38);
                    *puVar14 = (ushort)bVar18;
                    local_68 = (ulong)bVar18;
                }
                this_04 = local_58;
                uVar8 = param_1->g2sLE();
                if (uVar8 == 65535) {
                    local_48 = 0;
                LAB_100862e82:
                } else {
                    local_38[0] = uVar8 & 255;
                    lVar12 = this_01->find(local_38);
                    lVar13 = this_01->end();
                    if (lVar12 != lVar13) {
                        local_48 = CONCAT71((int7)((ulong)lVar13 >> 8), *(undefined1*)(lVar12 + 2));
                        goto LAB_100862e82;
                    }
                    bVar18 = local_50->m_boneCount;
                    local_50->m_boneCount = bVar18 + 1;
                    local_38[0] = uVar8 & 255;
                    puVar14 = (ushort*)eastl::vector_map<
                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                    operator[](
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                            this_01,
                        local_38);
                    *puVar14 = (ushort)bVar18;
                    local_48 = (ulong)bVar18;
                }
                uVar8 = param_1->g2sLE();
                if (uVar8 == 65535) {
                    local_60 = 0;
                LAB_100862f02:
                } else {
                    local_38[0] = uVar8 & 255;
                    lVar12 = eastl::vector_map<
                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::find(this_04,
                                                                                                            local_38);
                    lVar13 = this_04->end();
                    pBVar2 = local_50;
                    if (lVar12 != lVar13) {
                        local_60 = (ulong) * (byte*)(lVar12 + 2);
                        goto LAB_100862f02;
                    }
                    bVar18 = local_50->m_boneCount;
                    local_50->m_boneCount = bVar18 + 1;
                    local_38[0] = uVar8 & 255;
                    puVar14 = (ushort*)
                        eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                        eastl::allocator>>::operator[](this_04, local_38);
                    *puVar14 = (ushort)bVar18;
                    pBVar2->field_168 = pBVar2->field_168 + '\x01';
                    local_60 = (ulong)bVar18;
                }
                uVar8 = param_1->g2sLE();
                if (uVar8 == 65535) {
                    bVar18 = 0;
                } else {
                    local_38[0] = uVar8;
                    lVar12 = this_03->find(local_38);
                    lVar13 = this_03->end();
                    if (lVar12 == lVar13) {
                        bVar18 = local_50->m_billboardLabelCount;
                        local_50->m_billboardLabelCount = bVar18 + 1;
                        local_38[0] = uVar8;
                        puVar14 = (ushort*)eastl::vector_map<
                            unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                        operator[](
                            (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                                this_03,
                            local_38);
                        *puVar14 = (ushort)bVar18;
                    } else {
                        bVar18 = *(byte*)(lVar12 + 2);
                    }
                }
                cVar4 = param_1->g1s();
                local_70 = (float)(int)cVar4;
                local_6c = (uint)(byte)local_48;
                lVar12 = 0;
                do {
                    this_05 = (Vector4T<float>*)eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                        (vector<BillboardBatchVertex, eastl::allocator>*)&field_360, local_90 + lVar12);
                    math::Vector4T<float>::SetXYZ(this_05, (Vector3T*)&local_80);
                    *(float*)(this_05 + 12) = local_70;
                    this_05[33] = SUB81(local_68, 0);
                    this_05[32] = SUB81(local_48, 0);
                    this_05[35] = SUB81(local_60, 0);
                    local_38[0] = (ushort)local_6c;
                    this_06 = (vector<unsigned short, eastl::allocator>*)eastl::vector_map<
                        unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
                        eastl::allocator,
                        eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                      eastl::allocator>>::
                    operator[](
                        (vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>*)&field_128,
                        local_38);
                    eastl::vector<unsigned short, eastl::allocator>::reserve(this_06, 4);
                    local_38[0] = (ushort)(local_90 + lVar12);
                    eastl::vector<unsigned short, eastl::allocator>::push_back(this_06, local_38);
                    this_05[34] = (Vector4T<float>)(bVar18 * '\x02');
                    iVar17 = (int)lVar12;
                    if (iVar17 == 2) {
                        new (local_38) math::Point<float>(local_40, local_3c);
                        math::Vector2T<float>::operator=((Vector2T<float>*)(this_05 + 20), (Vector2T*)local_38);
                        VVar5 = (Vector4T<float>)1;
                    LAB_100863017:
                        VVar15 = (Vector4T<float>)0;
                    } else if (iVar17 == 1) {
                        new (local_38) math::Point<float>(local_40, -local_3c);
                        math::Vector2T<float>::operator=((Vector2T<float>*)(this_05 + 20), (Vector2T*)local_38);
                        VVar5 = (Vector4T<float>)1;
                        VVar15 = (Vector4T<float>)1;
                    } else {
                        if (iVar17 != 0) {
                            new (local_38) math::Point<float>(-local_40, local_3c);
                            math::Vector2T<float>::operator=((Vector2T<float>*)(this_05 + 20), (Vector2T*)local_38);
                            VVar5 = (Vector4T<float>)0;
                            goto LAB_100863017;
                        }
                        new (local_38) math::Point<float>(-local_40, -local_3c);
                        math::Vector2T<float>::operator=((Vector2T<float>*)(this_05 + 20), (Vector2T*)local_38);
                        VVar15 = (Vector4T<float>)1;
                        VVar5 = (Vector4T<float>)0;
                    }
                    this_05[30] = VVar5;
                    this_05[31] = VVar15;
                    lVar12 = lVar12 + 1;
                } while (lVar12 != 4);
                iVar17 = (int)uVar19 * 4;
                local_48 = CONCAT44(local_48._4_4_, iVar17);
                puVar10 = (undefined2*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_02, uVar19 * 6);
                *puVar10 = (short)iVar17;
                sVar1 = (short)uVar19;
                sVar16 = sVar1 * 4 + 2;
                psVar9 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_02, uVar19 * 6 | 1);
                *psVar9 = sVar16;
                psVar9 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_02, uVar19 * 6 + 2);
                *psVar9 = sVar1 * 4 + 1;
                puVar10 = (undefined2*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_02, uVar19 * 6 + 3);
                *puVar10 = (short)local_48;
                psVar9 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_02, uVar19 * 6 + 4);
                *psVar9 = sVar1 * 4 + 3;
                psVar9 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_02, uVar19 * 6 + 5);
                *psVar9 = sVar16;
                uVar19 = uVar19 + 1;
                local_90 = local_90 + 4;
            } while (uVar19 != uVar6);
        }
        uVar19 = this_00->size();
        if (31 < uVar19) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_faceLabelIDMap.size() < AnimationConstants::MAX_LABELS_IN_BATCH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      262, (char*)0);
        }
        uVar19 = this_01->size();
        if (55 < uVar19) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_boneIDMap.size() < AnimationConstants::MAX_BONES_IN_BATCH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      263, (char*)0);
        }
        uVar19 = this_03->size();
        if (9 < uVar19) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_billboardLabelIDMap.size() < AnimationConstants::MAX_BILLBOARDLABELS_IN_BATCH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      264, (char*)0);
        }
    }

    // 0x100863490, 112 bytes, placed by class name
    // BillboardBatch::BakeTextureMeta(unsigned int, unsigned int, ModelTextureMeta const&)
    void BillboardBatch::BakeTextureMeta(uint param_1, uint param_2, ModelTextureMeta* param_3) {
        ushort* puVar1;
        long lVar2;
        ulong uVar3;

        if (param_1 < param_2) {
            uVar3 = (ulong)param_1;
            do {
                puVar1 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)&field_264, uVar3);
                lVar2 = eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                    (vector<BillboardBatchVertex, eastl::allocator>*)&field_360, (ulong)*puVar1);
                *(undefined2*)(lVar2 + 28) = *(undefined2*)param_3;
                uVar3 = uVar3 + 1;
            } while (param_2 != uVar3);
        }
    }

    // 0x100863500, 272 bytes, placed by class name
    // BillboardBatch::BakeHSLColors(unsigned int, unsigned int)
    void BillboardBatch::BakeHSLColors(uint param_1, uint param_2) {
        undefined1 uVar1;
        undefined4 uVar2;
        ushort* puVar3;
        long lVar4;
        undefined1* puVar5;
        ulong uVar6;
        ulong uVar7;
        array<unsigned char, 4ul>* this_00;

        if (param_1 < param_2) {
            uVar6 = (ulong)param_1;
            do {
                uVar7 = (uVar6 & 4294967295) / 6;
                puVar3 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)&field_296, uVar7);
                uVar2 = math::RunetekColour::HSLToRGB(*puVar3);
                puVar3 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)&field_264, uVar6);
                lVar4 = eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                    (vector<BillboardBatchVertex, eastl::allocator>*)&field_360, (ulong)*puVar3);
                this_00 = (array<unsigned char, 4ul>*)(lVar4 + 16);
                puVar5 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 0);
                *puVar5 = (char)((uint)uVar2 >> 16);
                puVar5 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 1);
                *puVar5 = (char)((uint)uVar2 >> 8);
                puVar5 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 2);
                *puVar5 = (char)uVar2;
                puVar5 = (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                    (vector<unsigned char, eastl::allocator>*)&field_328, uVar7);
                uVar1 = *puVar5;
                puVar5 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 3);
                *puVar5 = uVar1;
                uVar6 = uVar6 + 1;
            } while (param_2 != uVar6);
        }
    }

    // 0x100863620, 1344 bytes, placed by class name
    // BillboardBatch::SortSections(eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&, eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL> const&, eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL> const&)
    void BillboardBatch::SortSections(vector* param_1, vector* param_2, multimap* param_3) {
        uint uVar1;
        BillboardBatch* pBVar2;
        char cVar3;
        bool bVar4;
        ulong uVar5;
        long lVar6;
        long lVar7;
        uint* puVar8;
        short* psVar9;
        BillboardBatchVertex* pBVar10;
        vector<unsigned short, eastl::allocator>* pvVar11;
        ulong uVar12;
        undefined8 extraout_RDX;
        Layout* pLVar13;
        undefined1* this_00;
        undefined1 auVar14[16];
        vector<unsigned short, eastl::allocator> local_110[32];
        undefined1 local_f0[64];
        vector<unsigned short, eastl::allocator> local_b0[32];
        undefined8 local_90;
        ulong local_88;
        ushort* local_68;
        vector<unsigned short, eastl::allocator>* local_60;
        Layout* local_58;
        Layout* local_50;
        Layout* local_48;
        undefined8 local_40;
        ushort local_32;

        cVar3 = CanSkipSortSections(this, param_1, param_3);
        if (cVar3 == '\0') {
            new ((local_f0 + 32)) eastl::vector<unsigned char, eastl::allocator>();
            eastl::vector<unsigned short, eastl::allocator>::vector(local_b0);
            eastl::vector<unsigned short, eastl::allocator>::vector(local_110);
            new (local_f0) eastl::vector<BillboardBatchVertex, eastl::allocator>();
            local_58 = (Layout*)&field_296;
            uVar5 = local_58->size();
            eastl::vector<unsigned short, eastl::allocator>::reserve(local_b0, uVar5);
            local_50 = (Layout*)&field_328;
            uVar5 = local_50->size();
            ((local_f0 + 32))->reserve(uVar5);
            local_60 = (vector<unsigned short, eastl::allocator>*)&field_264;
            uVar5 = local_60->size();
            eastl::vector<unsigned short, eastl::allocator>::reserve(local_110, uVar5);
            uVar5 = (&field_360)->size();
            local_f0->reserve(uVar5);
            local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                     eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                     true>::begin();
            auVar14 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                    eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                    true>::end();
            uVar5 = 0;
            local_48 = (Layout*)&field_360;
            while (true) {
                pBVar2 = (BillboardBatch*)this;
                local_90 = auVar14._0_8_;
                bVar4 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_90, auVar14._8_8_);
                if (!bVar4)
                    break;
                lVar6 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
                lVar6 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                    (vector<SourceModelExternalIndexSection, eastl::allocator>*)param_1, *(ulong*)(lVar6 + 8));
                pvVar11 = local_60;
                local_88 = uVar5;
                lVar7 = eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>::operator[](
                    (vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>*)param_2, uVar5);
                puVar8 = (uint*)std::array<IndexRange, 5ul>::operator[](lVar6 + 20);
                uVar5 = (ulong)*puVar8;
                if (*puVar8 < puVar8[1]) {
                    do {
                        psVar9 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](pvVar11, uVar5);
                        local_32 = (*psVar9 - (short)*(undefined4*)(lVar6 + 60)) + (short)*(undefined4*)(lVar7 + 60);
                        eastl::vector<unsigned short, eastl::allocator>::push_back(local_110, &local_32);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < puVar8[1]);
                }
                local_68 = (ushort*)local_b0->end();
                pLVar13 = local_58;
                lVar7 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_58);
                uVar1 = *puVar8;
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar13);
                eastl::vector<unsigned short, eastl::allocator>::insert<unsigned short*>(
                    (ushort*)local_b0, local_68, (ushort*)(lVar7 + ((ulong)uVar1 / 6) * 2));
                local_68 = (ushort*)((local_f0 + 32))->end();
                pLVar13 = local_50;
                lVar7 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_50);
                uVar1 = *puVar8;
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar13);
                eastl::vector<unsigned char, eastl::allocator>::insert<unsigned char*>(
                    local_f0 + 32, (uchar*)local_68, (uchar*)((ulong)uVar1 / 6 + lVar7));
                pBVar10 = (BillboardBatchVertex*)local_f0->end();
                pLVar13 = local_48;
                lVar7 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_48);
                uVar1 = *(uint*)(lVar6 + 60);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar13);
                eastl::vector<BillboardBatchVertex, eastl::allocator>::insert<BillboardBatchVertex*>(
                    (BillboardBatchVertex*)local_f0, pBVar10, (BillboardBatchVertex*)(lVar7 + (ulong)uVar1 * 36));
                uVar5 = local_88 + 1;
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
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
                auVar14._8_8_ = extraout_RDX;
                auVar14._0_8_ = local_90;
            }
            this_00 = &pBVar2->field_128;
            cVar3 = this_00->empty();
            if (cVar3 == '\0') {
                this_00->clear();
            }
            lVar6 = local_58->size();
            lVar7 = local_b0->size();
            if (lVar6 != lVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_faceHSL.size() == newfaceHSL.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          347, (char*)0);
            }
            lVar6 = local_50->size();
            lVar7 = ((local_f0 + 32))->size();
            if (lVar6 != lVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_faceTransparency.size() == newfaceTransparency.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          348, (char*)0);
            }
            lVar6 = local_60->size();
            lVar7 = local_110->size();
            if (lVar6 != lVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexIndexBuffer.size() == newVertexIndexBuffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          349, (char*)0);
            }
            lVar6 = local_48->size();
            lVar7 = local_f0->size();
            pLVar13 = local_48;
            if (lVar6 != lVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBuffer.size() == newVertexDataBuffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          350, (char*)0);
            }
            local_58->swap(local_b0);
            local_50->swap((vector*)(local_f0 + 32));
            local_60->swap(local_110);
            pLVar13->swap(local_f0);
            uVar5 = pLVar13->size();
            if (65534 < uVar5) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatch.cpp",
                          357, (char*)0);
            }
            if (cVar3 == '\0') {
                lVar6 = pLVar13->size();
                if (lVar6 != 0) {
                    uVar5 = 0;
                    do {
                        lVar6 = eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                            (vector<BillboardBatchVertex, eastl::allocator>*)pLVar13, uVar5);
                        local_40._0_2_ = (ushort) * (byte*)(lVar6 + 32);
                        pvVar11 = (vector<unsigned short, eastl::allocator>*)eastl::vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>::
                        operator[](
                            (vector_map<unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                                        eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short,
                                                                  eastl::vector<unsigned short, eastl::allocator>>,
                                                      eastl::allocator>>*)this_00,
                            (ushort*)&local_40);
                        local_40 = CONCAT62(local_40._2_6_, (short)uVar5);
                        eastl::vector<unsigned short, eastl::allocator>::push_back(pvVar11, (ushort*)&local_40);
                        pLVar13 = local_48;
                        uVar5 = uVar5 + 1;
                        uVar12 = local_48->size();
                    } while (uVar5 < uVar12);
                }
            }
            local_f0->~vector();
            eastl::vector<unsigned short, eastl::allocator>::~vector(local_110);
            eastl::vector<unsigned short, eastl::allocator>::~vector(local_b0);
            ((local_f0 + 32))->~vector();
        }
    }

    // 0x100863b60, 256 bytes, placed by class name
    // BillboardBatch::CanSkipSortSections(eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&, eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL> const&) const
    undefined4 BillboardBatch::CanSkipSortSections(vector* param_1, multimap* param_2) {
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
        lVar5 = std::array<IndexRange, 5ul>::operator[](lVar4 + 20);
        uVar8 = *(uint*)(lVar5 + 4) / 6;
        uVar2 = (&field_296)->size();
        if (uVar8 == uVar2) {
            local_34 = *(int*)(lVar4 + 64);
            iVar3 = (&field_360)->size();
            if (local_34 == iVar3) {
                return uVar1;
            }
        }
        uVar6 = (&field_296)->size();
        uVar2 = *(uint*)(lVar4 + 64);
        uVar7 = (&field_360)->size();
        /* WARNING: Subroutine does not return */
        LogAssert(
            "((numContiguousFaces == (uint)m_faceHSL.size()) && (lastIndexSection.m_vertexEnd == "
            "(uint)m_vertexDataBuffer.size()))",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
            "BillboardBatch.cpp",
            800,
            "Mismatch between contiguous sort section ranges and existing data (%u vs %u faces / %u vs %u vertices)",
            (ulong)uVar8, uVar6 & 4294967295, (ulong)uVar2, uVar7);
    }

    // 0x100863dc0, 160 bytes, placed by class name
    // BillboardBatch::Reserve(BillboardBatchCombineHelper const&)
    void BillboardBatch::Reserve(BillboardBatchCombineHelper* param_1) {
        uint uVar1;

        uVar1 = param_1->GetLevel();
        (&field_264, (ulong)uVar1)->reserve();
        uVar1 = param_1->GetLevel();
        (&field_296, (ulong)uVar1 / 6)->reserve();
        uVar1 = param_1->GetLevel();
        (&field_328, (ulong)uVar1 / 6)->reserve();
        uVar1 = param_1->GetMaxLineWidth();
        (&field_360, (ulong)uVar1)->reserve();
    }

    // 0x100863e60, 256 bytes, placed by class name
    // BillboardBatch::Assign(BillboardBatch const&)
    void BillboardBatch::Assign(BillboardBatch* param_1) {
        if (this != param_1) {
            DestroyRenderingResources(this);
            math::AABB::operator=((AABB*)this, (AABB*)param_1);
            field_32 = param_1->field_32;
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
            field_168 = param_1->field_168;
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
            operator=(
                (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&field_176,
                (vector_map*)&param_1->field_176);
            m_faceLabelCount = param_1->m_faceLabelCount;
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
            operator=(
                (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&field_40,
                (vector_map*)&param_1->field_40);
            m_billboardLabelCount = param_1->m_billboardLabelCount;
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
            operator=(
                (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&field_224,
                (vector_map*)&param_1->field_224);
            eastl::vector<unsigned short, eastl::allocator>::operator=(
                (vector<unsigned short, eastl::allocator>*)&field_264, (vector*)&param_1->field_264);
            eastl::vector<unsigned short, eastl::allocator>::operator=(
                (vector<unsigned short, eastl::allocator>*)&field_296, (vector*)&param_1->field_296);
            eastl::vector<unsigned char, eastl::allocator>::operator=(
                (vector<unsigned char, eastl::allocator>*)&field_328, (vector*)&param_1->field_328);
            eastl::vector<BillboardBatchVertex, eastl::allocator>::operator=(
                (vector<BillboardBatchVertex, eastl::allocator>*)&field_360, (vector*)&param_1->field_360);
        }
    }

    // 0x1008640b0, 2400 bytes, placed by class name
    // BillboardBatch::Append(BillboardBatch const&, bool)
    void BillboardBatch::Append(BillboardBatch* param_1, bool param_2) {
        undefined1* puVar1;
        undefined1* puVar2;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* pvVar3;
        GeometryBatch* pGVar4;
        char cVar5;
        undefined1 uVar6;
        byte bVar7;
        AABB* pAVar8;
        ulong uVar9;
        long lVar10;
        short* psVar11;
        ulong uVar12;
        ushort* puVar13;
        uchar* puVar14;
        uchar* puVar15;
        long lVar16;
        vector<unsigned int, eastl::allocator>* pvVar17;
        Layout* pLVar18;
        ushort* puVar19;
        BillboardBatchVertex* pBVar20;
        long lVar21;
        vector<unsigned short, eastl::allocator>* this_00;
        BillboardBatchVertex* this_01;
        ulong uVar22;
        undefined7 in_register_00000011;
        BillboardBatch* pBVar23;
        vector<game::WorldMap::MapElementInstance, eastl::allocator>* this_02;
        vector<game::WorldMap::MapElementInstance, eastl::allocator>* pvVar24;
        short sVar25;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>
            local_138[40];
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>
            local_110[40];
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>
            local_e8[40];
        ulong local_c0;
        vector_map<unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                 eastl::allocator>>* local_b8;
        vector<game::WorldMap::MapElementInstance, eastl::allocator>* local_b0;
        ulong local_a8;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_a0;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_98;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_90;
        byte* local_88;
        byte* local_80;
        byte* local_78;
        uint local_70;
        uint local_6c;
        BillboardBatch* local_68;
        ulong local_60;
        ushort* local_58;
        undefined4 local_4c;
        vector<game::WorldMap::MapElementInstance, eastl::allocator>* local_48;
        GeometryBatch* local_40;
        undefined4 local_34;

        local_4c = (undefined4)CONCAT71(in_register_00000011, param_2);
        if (this == param_1) {
            return;
        }
        pBVar23 = param_1;
        DestroyRenderingResources(this);
        pAVar8 = (AABB*)param_1->SSOBeginPtr(pBVar23);
        cVar5 = pAVar8->IsValid();
        if (cVar5 != '\0') {
            pAVar8 = (AABB*)param_1->SSOBeginPtr(pBVar23);
            Union(pAVar8);
        }
        field_32 = field_32 | param_1->field_32;
        puVar1 = &field_264;
        local_58 = (ushort*)puVar1->size();
        local_48 = (vector<game::WorldMap::MapElementInstance, eastl::allocator>*)&field_360;
        local_68 = this;
        uVar9 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(local_48);
        if (65534 < uVar9) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatch.cpp",
                      423, (char*)0);
        }
        local_60 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(local_48);
        puVar1->size();
        puVar2 = &param_1->field_264;
        local_40 = (GeometryBatch*)param_1;
        puVar2->size();
        eastl::vector<unsigned short, eastl::allocator>::resize((ulong)puVar1);
        lVar10 = puVar2->size();
        puVar13 = local_58;
        if (lVar10 != 0) {
            uVar9 = 0;
            do {
                psVar11 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)puVar2, uVar9);
                sVar25 = *psVar11 + (short)local_60;
                psVar11 = (short*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)puVar1, uVar9 + (long)puVar13);
                *psVar11 = sVar25;
                uVar9 = uVar9 + 1;
                uVar12 = puVar2->size();
            } while (uVar9 < uVar12);
        }
        pBVar23 = local_68;
        puVar1 = &local_68->field_296;
        local_58 = (ushort*)puVar1->end();
        pGVar4 = local_40;
        puVar2 = &local_40->field_296;
        puVar13 = (ushort*)puVar2->HeapBeginPtr();
        puVar2->end();
        eastl::vector<unsigned short, eastl::allocator>::insert<unsigned short const*>((ushort*)puVar1, local_58,
                                                                                       puVar13);
        puVar14 = (uchar*)(&pBVar23->field_328)->end();
        puVar15 = (uchar*)(&pGVar4->field_328)->HeapBeginPtr();
        (&pGVar4->field_328)->end();
        eastl::vector<unsigned char, eastl::allocator>::insert<unsigned char const*>(&pBVar23->field_328, puVar14,
                                                                                     puVar15);
        pvVar24 = local_48;
        lVar10 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(local_48);
        this_02 = (vector<game::WorldMap::MapElementInstance, eastl::allocator>*)&pGVar4->field_360;
        lVar16 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_02);
        pvVar24->resize(lVar10 + lVar16);
        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::vector_map(local_138);
        pvVar17 = (vector<unsigned int, eastl::allocator>*)pGVar4->GetBoneIDMap();
        uVar9 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar17);
        local_138->reserve(uVar9);
        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::vector_map(local_110);
        pvVar17 = (vector<unsigned int, eastl::allocator>*)pGVar4->get_overflow_allocator();
        uVar9 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar17);
        local_110->reserve(uVar9);
        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::vector_map(local_e8);
        pvVar17 = (vector<unsigned int, eastl::allocator>*)GetBillboardLabelIDMap((BillboardBatch*)pGVar4);
        uVar9 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar17);
        local_e8->reserve(uVar9);
        if ((char)local_4c != '\0') {
            pLVar18 = (Layout*)pGVar4->GetBoneIDMap();
            puVar13 = (ushort*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar18);
            puVar19 = (ushort*)pLVar18->end();
            if (puVar13 != puVar19) {
                do {
                    local_34 = eastl::make_pair<unsigned short const&, unsigned short const&>(puVar13 + 1, puVar13);
                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                        insert<eastl::pair<unsigned short, unsigned short>, void>(local_138, (pair*)&local_34);
                    puVar13 = puVar13 + 2;
                } while (puVar13 != puVar19);
            }
            pLVar18 = (Layout*)local_40->get_overflow_allocator();
            puVar13 = (ushort*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar18);
            puVar19 = (ushort*)pLVar18->end();
            if (puVar13 != puVar19) {
                do {
                    local_34 = eastl::make_pair<unsigned short const&, unsigned short const&>(puVar13 + 1, puVar13);
                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                        insert<eastl::pair<unsigned short, unsigned short>, void>(local_110, (pair*)&local_34);
                    puVar13 = puVar13 + 2;
                } while (puVar13 != puVar19);
            }
            pLVar18 = (Layout*)GetBillboardLabelIDMap((BillboardBatch*)local_40);
            puVar13 = (ushort*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar18);
            puVar19 = (ushort*)pLVar18->end();
            if (puVar13 != puVar19) {
                do {
                    local_34 = eastl::make_pair<unsigned short const&, unsigned short const&>(puVar13 + 1, puVar13);
                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                        insert<eastl::pair<unsigned short, unsigned short>, void>(local_e8, (pair*)&local_34);
                    puVar13 = puVar13 + 2;
                } while (puVar13 != puVar19);
            }
            pGVar4 = local_40;
            pvVar24 = local_48;
            if ((char)local_4c != '\0') {
                uVar6 = HasBones((BillboardBatch*)local_40);
                local_58 = (ushort*)CONCAT71(local_58._1_7_, uVar6);
                local_70 = GetFaceLabelCount((BillboardBatch*)pGVar4);
                local_6c = GetBillboardLabelCount((BillboardBatch*)pGVar4);
                uVar9 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_02);
                if (65534 < uVar9) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("other.m_vertexDataBuffer.size() < std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/BillboardBatch.cpp",
                              465, (char*)0);
                }
                lVar10 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_02);
                if (lVar10 != 0) {
                    local_c0 = local_60 & 65535;
                    local_98 =
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>*)&local_68->field_88;
                    local_88 = &local_68->m_boneCount;
                    local_b8 =
                        (vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>*)&local_68->field_128;
                    local_90 =
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>*)&local_68->field_40;
                    local_80 = &local_68->m_faceLabelCount;
                    local_a0 =
                        (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>*)&local_68->field_224;
                    local_78 = &local_68->m_billboardLabelCount;
                    uVar9 = 0;
                    local_b0 = this_02;
                    do {
                        local_40 = (GeometryBatch*)eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                            (vector<BillboardBatchVertex, eastl::allocator>*)pvVar24, local_c0 + uVar9);
                        pBVar20 =
                            (BillboardBatchVertex*)eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                                (vector<BillboardBatchVertex, eastl::allocator>*)this_02, uVar9);
                        BillboardBatchVertex::operator=((BillboardBatchVertex*)local_40, pBVar20);
                        if (((char)local_58 == '\0') || (local_40->field_32 == 0)) {
                            local_40->field_32 = 0;
                        } else {
                            local_34 = CONCAT22(local_34._2_2_, (ushort)local_40->field_32);
                            local_a8 = uVar9;
                            lVar10 =
                                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                  eastl::allocator,
                                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                eastl::allocator>>::find(local_138, (ushort*)&local_34);
                            lVar16 = local_138->end();
                            pvVar3 = local_98;
                            if (lVar10 == lVar16) {
                                local_40->field_32 = 0;
                                uVar9 = local_a8;
                            } else {
                                lVar16 =
                                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                      eastl::allocator,
                                                      eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                    eastl::allocator>>::find(local_98,
                                                                                             (ushort*)(lVar10 + 2));
                                uVar9 = local_a8;
                                lVar21 = pvVar3->end();
                                if (lVar16 == lVar21) {
                                    local_34 = eastl::make_pair<unsigned short&, unsigned char&>((ushort*)(lVar10 + 2),
                                                                                                 local_88);
                                    eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                        insert<eastl::pair<unsigned short, unsigned char>, void>(local_98,
                                                                                                 (pair*)&local_34);
                                    bVar7 = *local_88;
                                    local_40->field_32 = bVar7;
                                    bVar7 = bVar7 + 1;
                                    *local_88 = bVar7;
                                    if (56 < bVar7) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("m_boneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/BillboardBatch.cpp",
                                                  486, (char*)0);
                                    }
                                } else {
                                    local_40->field_32 = *(byte*)(lVar16 + 2);
                                }
                                local_34._0_2_ = (ushort)local_40->field_32;
                                this_00 = (vector<unsigned short, eastl::allocator>*)eastl::vector_map<
                                    unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                                    eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<
                                        eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                        eastl::allocator>>::operator[](local_b8, (ushort*)&local_34);
                                pvVar24 = local_48;
                                local_34 = CONCAT22(local_34._2_2_, (short)local_60 + (short)uVar9);
                                eastl::vector<unsigned short, eastl::allocator>::push_back(this_00, (ushort*)&local_34);
                            }
                        }
                        if ((local_70 < 2) || (local_40->field_33 == 0)) {
                            local_40->field_33 = 0;
                        } else {
                            local_34 = CONCAT22(local_34._2_2_, (ushort)(byte)local_40->field_33);
                            lVar10 =
                                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                  eastl::allocator,
                                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                eastl::allocator>>::find(local_110, (ushort*)&local_34);
                            lVar16 = local_110->end();
                            pvVar3 = local_90;
                            if (lVar10 == lVar16) {
                                local_40->field_33 = 0;
                            } else {
                                lVar16 =
                                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                      eastl::allocator,
                                                      eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                    eastl::allocator>>::find(local_90,
                                                                                             (ushort*)(lVar10 + 2));
                                lVar21 = pvVar3->end();
                                if (lVar16 == lVar21) {
                                    local_34 = eastl::make_pair<unsigned short&, unsigned char&>((ushort*)(lVar10 + 2),
                                                                                                 local_80);
                                    eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                        insert<eastl::pair<unsigned short, unsigned char>, void>(local_90,
                                                                                                 (pair*)&local_34);
                                    bVar7 = *local_80;
                                    local_40->field_33 = bVar7;
                                    bVar7 = bVar7 + 1;
                                    *local_80 = bVar7;
                                    pvVar24 = local_48;
                                    if (32 < bVar7) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("m_faceLabelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/model/BillboardBatch.cpp",
                                                  515, (char*)0);
                                    }
                                } else {
                                    local_40->field_33 = *(undefined1*)(lVar16 + 2);
                                    pvVar24 = local_48;
                                }
                            }
                        }
                        if ((local_6c < 2) || (local_40->m_transformed == false)) {
                            local_40->m_transformed = false;
                            this_02 = local_b0;
                        } else {
                            local_34 = CONCAT22(local_34._2_2_, (ushort)(byte)(local_40->m_transformed >> 1));
                            lVar10 =
                                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                  eastl::allocator,
                                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                eastl::allocator>>::find(local_e8, (ushort*)&local_34);
                            lVar16 = local_e8->end();
                            pvVar3 = local_a0;
                            this_02 = local_b0;
                            if (lVar10 == lVar16) {
                                local_40->m_transformed = false;
                            } else {
                                lVar16 =
                                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
                                                      eastl::allocator,
                                                      eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                                    eastl::allocator>>::find(local_a0,
                                                                                             (ushort*)(lVar10 + 2));
                                lVar21 = pvVar3->end();
                                if (lVar16 == lVar21) {
                                    local_34 = eastl::make_pair<unsigned short&, unsigned char&>((ushort*)(lVar10 + 2),
                                                                                                 local_78);
                                    eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                        insert<eastl::pair<unsigned short, unsigned char>, void>(local_a0,
                                                                                                 (pair*)&local_34);
                                    bVar7 = *local_78;
                                    local_40->m_transformed = (bool)(bVar7 * '\x02');
                                    bVar7 = bVar7 + 1;
                                    *local_78 = bVar7;
                                    pvVar24 = local_48;
                                    if (10 < bVar7) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert(
                                            "m_billboardLabelCount <= AnimationConstants::MAX_BILLBOARDLABELS_IN_BATCH",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/model/BillboardBatch.cpp",
                                            542, (char*)0);
                                    }
                                    goto LAB_100864522;
                                }
                                local_40->m_transformed = (bool)(*(char*)(lVar16 + 2) * '\x02');
                            }
                            pvVar24 = local_48;
                        }
                    LAB_100864522:
                        uVar9 = uVar9 + 1;
                        uVar12 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_02);
                    } while (uVar9 < uVar12);
                }
                goto LAB_100864916;
            }
        }
        lVar10 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_02);
        if (lVar10 != 0) {
            uVar12 = local_60 & 65535;
            uVar9 = 0;
            do {
                pBVar20 = (BillboardBatchVertex*)eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                    (vector<BillboardBatchVertex, eastl::allocator>*)this_02, uVar9);
                this_01 = (BillboardBatchVertex*)eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                    (vector<BillboardBatchVertex, eastl::allocator>*)pvVar24, uVar12 + uVar9);
                BillboardBatchVertex::operator=(this_01, pBVar20);
                uVar9 = uVar9 + 1;
                uVar22 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_02);
            } while (uVar9 < uVar22);
        }
    LAB_100864916:
        pBVar23 = local_68;
        if ((char)local_4c == '\0') {
            local_68->m_boneCount = 1;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            (&pBVar23->field_128)->clear();
            pBVar23->field_168 = 0;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            pBVar23->m_faceLabelCount = 1;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            pBVar23->m_billboardLabelCount = 1;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::~vector_map(local_e8);
        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::~vector_map(local_110);
        eastl::vector_map<
            unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::~vector_map(local_138);
    }

    // 0x100864c90, 112 bytes, placed by class name
    // BillboardBatch::Transform(math::Matrix44T<float> const&)
    void BillboardBatch::Transform(Matrix44T* param_1) {
        Vector3T<float>* this_00;
        Vector3T<float>* pVVar1;

        this_00 = (Vector3T<float>*)(&field_360)->HeapBeginPtr();
        pVVar1 = (Vector3T<float>*)(&field_360)->end();
        for (; this_00 != pVVar1; this_00 = this_00 + 36) {
            math::Vector3T<float>::operator*=(this_00, param_1);
        }
        field_32 = 1;
    }

    // 0x100864d00, 112 bytes, placed by class name
    // BillboardBatch::Translate(math::Vector3T<float> const&)
    void BillboardBatch::Translate(Vector3T* param_1) {
        Vector3T<float>* this_00;
        Vector3T<float>* pVVar1;

        this_00 = (Vector3T<float>*)(&field_360)->HeapBeginPtr();
        pVVar1 = (Vector3T<float>*)(&field_360)->end();
        for (; this_00 != pVVar1; this_00 = this_00 + 36) {
            math::Vector3T<float>::operator+=(this_00, param_1);
        }
        field_32 = 1;
    }

    // 0x100864d70, 112 bytes, placed by class name
    // BillboardBatch::Rotate(math::QuaternionT<float> const&, bool)
    void BillboardBatch::Rotate(QuaternionT* param_1, bool param_2) {
        Vector3T<float>* this;
        Vector3T<float>* pVVar1;
        undefined7 in_register_00000031;

        this = (Vector3T<float>*)((param_1 + 360))->HeapBeginPtr();
        pVVar1 = (Vector3T<float>*)((param_1 + 360))->end();
        for (; this != pVVar1; this = this + 36) {
            math::Vector3T<float>::operator*=(this, (QuaternionT*)CONCAT71(in_register_00000031, param_2));
        }
        param_1[32] = (QuaternionT)1;
    }

    // 0x100864de0, 320 bytes, placed by class name
    // BillboardBatch::Rotate90(Rotation90, bool)
    void BillboardBatch::Rotate90(long param_1, type* param_2) {
        uint uVar1;
        char cVar2;
        Layout* this;
        Layout* pLVar3;
        uint* puVar4;
        vector* pvVar5;
        uint local_48;

        if ((int)param_2 != 0) {
            cVar2 = (char)param_2;
            this = (Layout*)((param_1 + 360))->HeapBeginPtr();
            pLVar3 = (Layout*)((param_1 + 360))->end();
            for (; this != pLVar3; this = this + 36) {
                if (cVar2 == '\x03') {
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this, param_2);
                    param_2 = (type*)second();
                    eastl::swap<float>((float*)pvVar5, (float*)param_2);
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this, param_2);
                    local_48 = *(uint*)pvVar5;
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this, param_2);
                LAB_100864e79:
                    local_48 = local_48 ^ 2147483648;
                    *(uint*)pvVar5 = local_48;
                } else {
                    if (cVar2 == '\x02') {
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this, param_2);
                        uVar1 = *(uint*)pvVar5;
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this, param_2);
                        *(uint*)pvVar5 = uVar1 ^ 2147483648;
                    LAB_100864e5a:
                        puVar4 = (uint*)second();
                        local_48 = *puVar4;
                        pvVar5 = (vector*)second();
                        goto LAB_100864e79;
                    }
                    if (cVar2 == '\x01') {
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this, param_2);
                        param_2 = (type*)second();
                        eastl::swap<float>((float*)pvVar5, (float*)param_2);
                        goto LAB_100864e5a;
                    }
                }
            }
            *(undefined1*)(param_1 + 32) = 1;
        }
    }

    // 0x100864f20, 112 bytes, placed by class name
    // BillboardBatch::Scale(math::Vector3T<float> const&)
    void BillboardBatch::Scale(Vector3T* param_1) {
        undefined1* this_00;
        long lVar1;
        Vector3T<float>* this_01;
        ulong uVar2;
        uint uVar3;
        ulong uVar4;

        this_00 = &field_360;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar3 = 1;
            uVar4 = 0;
            do {
                this_01 = (Vector3T<float>*)eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                    (vector<BillboardBatchVertex, eastl::allocator>*)this_00, uVar4);
                math::Vector3T<float>::operator*=(this_01, param_1);
                uVar4 = (ulong)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (uVar4 < uVar2);
        }
        field_32 = 1;
    }

    // 0x100864f90, 112 bytes, placed by class name
    // BillboardBatch::MirrorZ()
    void BillboardBatch::MirrorZ() {
        undefined1* this_00;
        long lVar1;
        ulong uVar2;
        uint uVar3;
        ulong uVar4;

        this_00 = &field_360;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar3 = 1;
            uVar4 = 0;
            do {
                lVar1 = eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                    (vector<BillboardBatchVertex, eastl::allocator>*)this_00, uVar4);
                *(uint*)(lVar1 + 8) = *(uint*)(lVar1 + 8) ^ 2147483648;
                uVar4 = (ulong)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (uVar4 < uVar2);
        }
        field_32 = 1;
    }

    // 0x100865000, 176 bytes, placed by class name
    // BillboardBatch::HillChange(HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, LocationHelpers::LocationHillChangeData const&)
    void BillboardBatch::HillChange(undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5,
                                    undefined8 param_6) {
        int iVar1;
        Vector2T<int>* this_00;
        Vector2T<int>* pVVar2;
        float* pfVar3;

        this_00 = (Vector2T<int>*)(&field_360)->HeapBeginPtr();
        pVVar2 = (Vector2T<int>*)(&field_360)->end();
        for (; this_00 != pVVar2; this_00 = this_00 + 36) {
            iVar1 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, this_00);
            pfVar3 = (float*)this_00->y();
            *pfVar3 = (float)iVar1;
        }
        field_32 = 1;
    }

    // 0x1008650b0, 144 bytes, placed by class name
    // BillboardBatch::Recolour(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void BillboardBatch::Recolour(Array* param_1, Array* param_2) {
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

    // 0x100865140, 112 bytes, placed by class name
    // BillboardBatch::RecolourSingle(unsigned short, unsigned short)
    void BillboardBatch::RecolourSingle(ushort param_1, ushort param_2) {
        long lVar1;
        ulong uVar2;
        ushort* puVar3;
        ulong uVar4;
        undefined1* this_00;

        this_00 = &field_296;
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

    // 0x1008651b0, 128 bytes, placed by class name
    // BillboardBatch::AmbientAdjust(unsigned short)
    void BillboardBatch::AmbientAdjust(ushort param_1) {
        long lVar1;
        ushort* puVar2;
        undefined2* puVar3;
        ulong uVar4;
        undefined2 uVar5;
        ulong uVar6;
        undefined1* this_00;

        this_00 = &field_296;
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

    // 0x100865230, 176 bytes, placed by class name
    // BillboardBatch::TintAdjust(signed char, signed char, signed char, unsigned char)
    void BillboardBatch::TintAdjust(char param_2, char param_3, char param_4, undefined1 param_5) {
        undefined2 uVar1;
        long lVar2;
        undefined2* puVar3;
        ulong uVar4;
        ulong uVar5;
        undefined1* this_00;

        this_00 = &field_296;
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

    // 0x1008652e0, 672 bytes, placed by class name
    // BillboardBatch::CreateRenderingResources()
    void BillboardBatch::CreateRenderingResources() {
        undefined1* this_00;
        undefined1* this_01;
        int iVar2;
        int iVar3;
        vector* pvVar4;
        float* pfVar5;
        undefined8 uVar6;
        ulong uVar7;
        BillboardBatchVertex* pBVar8;
        BillboardBatchVertex* pBVar9;
        BillboardBatchVertexLP* this_02;
        VertexDeclaration* pVVar10;
        void* pvVar11;
        bool bVar12;
        type* in_RSI;
        vector<BillboardBatchVertexLP, eastl::allocator> local_50[32];

        iVar2 = GetIndexCount(this);
        if (iVar2 != 0) {
            this_00 = &field_400;
            iVar2 = this_00->GetAliveCount();
            if (iVar2 == 0) {
                m_lowPrecision = true;
                if (IsValid() != '\0') {
                    pvVar4 = SSOBeginPtr(in_RSI);
                    pfVar5 = (float*)GetScreen();
                    bVar12 = false;
                    if ((-32768.0 <= *(float*)pvVar4) && (*(float*)pvVar4 <= 32767.0)) {
                        bVar12 = false;
                        if ((-32768.0 <= *(float*)(pvVar4 + 4)) && (*(float*)(pvVar4 + 4) <= 32767.0)) {
                            bVar12 = false;
                            if ((-32768.0 <= *(float*)(pvVar4 + 8)) && (*(float*)(pvVar4 + 8) <= 32767.0)) {
                                bVar12 = false;
                                if ((-32768.0 <= *pfVar5) && (*pfVar5 <= 32767.0)) {
                                    bVar12 = false;
                                    if ((-32768.0 <= pfVar5[1]) && (pfVar5[1] <= 32767.0)) {
                                        if (-32768.0 <= pfVar5[2]) {
                                            bVar12 = pfVar5[2] <= 32767.0;
                                        } else {
                                            bVar12 = false;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    m_lowPrecision = bVar12;
                }
                iVar2 = GetIndexCount(this);
                uVar6 = (&field_264)->HeapBeginPtr();
                this_00->Create(iVar2 * 2, 0, uVar6, 5123);
                if (m_lowPrecision == false) {
                    pVVar10 = (VertexDeclaration*)BillboardBatchRenderer::GetVertexDecl();
                    iVar2 = pVVar10->GetVertexStride(0);
                    iVar3 = (&field_360)->size();
                    pvVar11 = (void*)(&field_360)->HeapBeginPtr();
                    (&field_488, iVar2 * iVar3, 0, pvVar11)->Create();
                    pVVar10 = (VertexDeclaration*)BillboardBatchRenderer::GetVertexDecl();
                    (m_forwardPassIAState, pVVar10, (VertexBuffer*)&field_488)->SetVertexStreamData();
                    render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)m_forwardPassIAState, (uint)this_00);
                } else {
                    eastl::vector<BillboardBatchVertexLP, eastl::allocator>::vector(local_50);
                    this_01 = &field_360;
                    uVar7 = this_01->size();
                    eastl::vector<BillboardBatchVertexLP, eastl::allocator>::reserve(local_50, uVar7);
                    pBVar8 = (BillboardBatchVertex*)this_01->HeapBeginPtr();
                    pBVar9 = (BillboardBatchVertex*)this_01->end();
                    if (pBVar8 != pBVar9) {
                        do {
                            this_02 = (BillboardBatchVertexLP*)
                                eastl::vector<BillboardBatchVertexLP, eastl::allocator>::push_back(local_50);
                            this_02->Set(pBVar8);
                            pBVar8 = pBVar8 + 1;
                        } while (pBVar8 != pBVar9);
                    }
                    pVVar10 = (VertexDeclaration*)BillboardBatchRenderer::GetVertexDeclLP();
                    iVar2 = pVVar10->GetVertexStride(0);
                    iVar3 = eastl::vector<BillboardBatchVertexLP, eastl::allocator>::size(local_50);
                    pvVar11 = (void*)local_50->HeapBeginPtr();
                    (&field_488, iVar2 * iVar3, 0, pvVar11)->Create();
                    pVVar10 = (VertexDeclaration*)BillboardBatchRenderer::GetVertexDeclLP();
                    (m_forwardPassIAState, pVVar10, (VertexBuffer*)&field_488)->SetVertexStreamData();
                    render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)m_forwardPassIAState, (uint)this_00);
                    eastl::vector<BillboardBatchVertexLP, eastl::allocator>::~vector(local_50);
                }
            }
        }
    }

} // namespace jag::graphics
