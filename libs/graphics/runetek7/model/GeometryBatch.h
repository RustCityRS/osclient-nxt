// libs/graphics/runetek7/model/GeometryBatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GeometryBatch {
    public:
        GetAABB() const;
        GetBoneIDMap();
        GetBoneIDMap() const;
        GetLabelIDMap();
        GetLabelIDMap() const;
        GetVertexDataBuffer();
        GetVertexDataBuffer() const;
        void GetIndexCount() const;
        GetJointIDMap();
        GetJointIDMap() const;
        void GetVertexIndexBuffer() const;
        void GetVertexIndexBuffer();
        GetVertexDataBufferPos() const;
        GetVertexDataBufferPos();
        void GetVertexCount() const;
        GetFaceHSLBuffer();
        GetFaceTransparencyBuffer();
        void SetFaceHSLBaked(bool);
        GetBoneVertices() const;
        void SetShareLight(bool);
        byte HasFaceTransparency() const;
        GetVertexDataBufferSkin() const;
        byte IsHidden() const;
        byte VertexBuffersInitialised() const;
        GetVertexDataBufferPosLP() const;
        GetVertexScale() const;
        GeometryBatch();
        GeometryBatch(GeometryBatch&&);
        GeometryBatch(GeometryBatch const&);
        ~GeometryBatch();
        void DestroyRenderingResources();
        void UpdateAABB();
        ulong LoadMeshFromModelRawRT7(PacketView&, unsigned int);
        bool LoadMeshFromData(unsigned long, unsigned long, math::Vector3T<float> const*, math::Vector3T<float> const*,
                              math::Vector4T<float> const*, math::Vector2T<float> const*, unsigned long,
                              unsigned short const*, math::Vector3T<float> const&, unsigned int);
        void BakeTile(unsigned int, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char,
                      unsigned char, unsigned char, unsigned char);
        void BakeTextureMeta(unsigned int, unsigned int, ModelTextureMeta const&);
        void BakeHSLColors(unsigned int, unsigned int, unsigned short, unsigned int, unsigned int);
        void BakeBatchFlags(unsigned char);
        void BakeShareLightNormals(
            eastl::fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true,
                                  eastl::hash<math::Vector3T<float>>, eastl::equal_to<math::Vector3T<float>>, false,
                                  BucketAllocatorEASTL> const&);
        void SortSections(
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&,
            eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL> const&,
            eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL> const&);
        CanSkipSortSections(eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&,
                            eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>,
                                            BucketAllocatorEASTL> const&) const;
        void CreateSecondaryVertexBuffers();
        void DestroyCPUBuffers();
        void Reserve(GeometryBatchCombineHelper const&);
        void Assign(GeometryBatch const&);
        void Append(GeometryBatch const&, bool);
        GetLabelCount() const;
        bool HasBones() const;
        void WeldVertexEdgesWithMap(
            eastl::hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float>>,
                            eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>&);
        void WeldVertexEdgesWithMapSkin(
            eastl::hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float>>,
                            eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>&);
        void Transform(math::Matrix44T<float> const&);
        void TransformNormals(math::QuaternionT<float> const&, bool);
        void Translate(math::Vector3T<float> const&);
        void Rotate(math::QuaternionT<float> const&, bool);
        void Rotate90(Rotation90, bool);
        void Scale(math::Vector3T<float> const&);
        void MirrorZ();
        void HillChange(graphics::HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        LocationHelpers::LocationHillChangeData const&);
        void Recolour(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&);
        void RecolourSingle(unsigned short, unsigned short);
        void AmbientAdjust(unsigned short);
        void TintAdjust(signed char, signed char, signed char, unsigned char);
        void CreateRenderingResources();
        bool HasJoints() const;
        void GetIndexBuffer(unsigned int);
        void ClearFaceData();
        void PushFaceRange(GeometryBatch const&, unsigned short, unsigned short);
        IsTransformed() const;
        void SetTransformed(bool);
        GetBoneCount() const;
        void GetLodIndexCount(unsigned int) const;
        HasShareLight() const;
        uint GetNumLods() const;
        void GetIAState(unsigned int) const;
        void GetIndexBuffer(unsigned int) const;
        uint GetClampedLodLevel(unsigned int) const;

        // data members, from how the methods use this: 1256 bytes
        char _unknown_0[12];
        undefined4 field_12; // offset 12
        char _unknown_16[12];
        undefined4 field_28;        // offset 28
        byte field_32;              // offset 32
        undefined1 field_33;        // offset 33
        bool m_transformed;         // offset 34
        byte field_35;              // offset 35
        byte m_hasFaceTransparency; // offset 36
        bool m_shareLight;          // offset 37
        byte m_hidden;              // offset 38
        char _unknown_39[1];
        float field_40;          // offset 40
        undefined1 m_labelCount; // offset 44
        char _unknown_45[163];
        uint m_numLods; // offset 208
        char _unknown_212[4];
        undefined1 field_216; // offset 216
        char _unknown_217[159];
        ushort field_376; // offset 376
        char _unknown_378[30];
        bool m_faceHSLBaked; // offset 408
        char _unknown_409[7];
        undefined1 field_416; // offset 416
        char _unknown_417[119];
        undefined1 m_vertexDataBufferSkin; // offset 536
        char _unknown_537[719];
    };

    class GeometryBatchVertexSkin {
    public:
        GeometryBatchVertexSkin();
        GeometryBatchVertexSkin* operator=(GeometryBatchVertexSkin&&);
        GeometryBatchVertexSkin* operator=(GeometryBatchVertexSkin const&);

        // data members, from how the methods use this: 20 bytes
        Vector4T<signed char> field_0; // offset 0
        Vector4T field_1;              // offset 1
        Vector4T field_2;              // offset 2
        Vector4T field_3;              // offset 3
        Callstack field_4;             // offset 4
    };

    // 0x1002f4110, 32 bytes, inline, placed by class name and debug map
    // GeometryBatch::GetIndexCount() const
    void GeometryBatch::GetIndexCount() {
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_00;

        this_00 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[]((ulong)&field_216);
        eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_00);
    }

    // 0x10036bfe0, 16 bytes, inline, placed by class name
    // GeometryBatch::GetJointIDMap()
    /* GeometryBatch::GetJointIDMap() const */

    undefined1* GeometryBatch::GetJointIDMap() {
        return &field_168;
    }

    // 0x10036d940, 32 bytes, inline, placed by class name
    // GeometryBatch::GetVertexIndexBuffer() const
    void GeometryBatch::GetVertexIndexBuffer() {
        std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[]((ulong)&field_216);
    }

    // 0x10036da10, 32 bytes, inline, placed by class name
    // GeometryBatch::GetVertexIndexBuffer()
    void GeometryBatch::GetVertexIndexBuffer() {
        std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[]((ulong)&field_216);
    }

    // 0x10036da70, 16 bytes, inline, placed by class name
    // GeometryBatch::GetVertexDataBufferPos() const
    /* GeometryBatch::GetVertexDataBufferPos() */

    undefined1* GeometryBatch::GetVertexDataBufferPos() {
        return &field_480;
    }

    // 0x10036f090, 32 bytes, inline, placed by class name
    // GeometryBatch::GetVertexCount() const
    void GeometryBatch::GetVertexCount() {
        (&field_448)->size();
    }

    // 0x10036f470, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GeometryBatch::GetFaceHSLBuffer()
    /* game::Camera::GetLinearPositionMaxSpeed() const */

    undefined1* game::Camera::GetLinearPositionMaxSpeed() {
        return m_linearPositionMaxSpeed;
    }

    // 0x10036f4c0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GeometryBatch::GetFaceTransparencyBuffer()
    /* game::Terrain::GetWaterPatches() const */

    undefined1* game::Terrain::GetWaterPatches() {
        return &field_416;
    }

    // 0x10036f740, 16 bytes, inline, placed by class name
    // GeometryBatch::SetFaceHSLBaked(bool)
    void GeometryBatch::SetFaceHSLBaked(bool param_1) {
        m_faceHSLBaked = param_1;
    }

    // 0x1007dd510, 16 bytes, inline, placed by class name
    // GeometryBatch::IsHidden() const
    byte GeometryBatch::IsHidden() {
        return m_hidden;
    }

    // 0x1007dd560, 32 bytes, inline, placed by class name
    // GeometryBatch::VertexBuffersInitialised() const
    byte GeometryBatch::VertexBuffersInitialised() {
        byte bVar1;

        bVar1 = (&field_512)->empty();
        return bVar1 ^ 1;
    }

    // 0x1007dd580, 16 bytes, inline, placed by class name
    // GeometryBatch::GetVertexDataBufferPosLP() const
    undefined1* GeometryBatch::GetVertexDataBufferPosLP() {
        return &field_512;
    }

    // 0x1007dda80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GeometryBatch::GetVertexScale() const
    /* Camera::GetFarClip() const */

    float Camera::GetFarClip() {
        return m_farClip;
    }

    // 0x10080a3a0, 16 bytes, inline, placed by class name
    // GeometryBatch::GetLabelCount() const
    undefined1 GeometryBatch::GetLabelCount() {
        return m_labelCount;
    }

    // 0x10080a3b0, 16 bytes, inline, placed by class name
    // GeometryBatch::HasBones() const
    bool GeometryBatch::HasBones() {
        return 1 < field_32;
    }

    // 0x10080c4f0, 16 bytes, inline, placed by class name
    // GeometryBatch::HasJoints() const
    bool GeometryBatch::HasJoints() {
        return field_33 != '\0';
    }

    // 0x10080c550, 48 bytes, inline, placed by class name
    // GeometryBatch::GetIndexBuffer(unsigned int)
    void GeometryBatch::GetIndexBuffer(uint param_1) {
        uint uVar1;

        uVar1 = GetClampedLodLevel(this, param_1);
        std::array<render::IndexBuffer, 5ul>::operator[]((array<render::IndexBuffer, 5ul>*)&field_568, (ulong)uVar1);
    }

    // 0x10080e050, 16 bytes, inline, placed by class name
    // GeometryBatch::IsTransformed() const
    undefined1 GeometryBatch::IsTransformed() {
        return m_transformed;
    }

    // 0x10080e090, 16 bytes, inline, placed by class name
    // GeometryBatch::SetTransformed(bool)
    void GeometryBatch::SetTransformed(bool param_1) {
        m_transformed = param_1;
    }

    // 0x10080e330, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GeometryBatch::GetBoneCount() const
    /* RenderMaterial::GetAlphaTestThreshold() const */

    uchar RenderMaterial::GetAlphaTestThreshold() {
        return m_alphaTestThreshold;
    }

    // 0x10080e4a0, 48 bytes, inline, placed by class name
    // GeometryBatch::GetLodIndexCount(unsigned int) const
    void GeometryBatch::GetLodIndexCount(uint param_1) {
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_00;
        uint uVar1;

        uVar1 = GetClampedLodLevel(this, param_1);
        this_00 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
            std::array<eastl::vector<unsigned short, eastl::allocator>, 5ul>::operator[](
                (array<eastl::vector<unsigned short, eastl::allocator>, 5ul>*)&field_216, (ulong)uVar1);
        eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_00);
    }

    // 0x10080f980, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GeometryBatch::HasShareLight() const
    /* SpriteAtlasReference::GetDisableCache() const */

    undefined1 SpriteAtlasReference::GetDisableCache() {
        return m_disableCache;
    }

    // 0x10080fcd0, 16 bytes, inline, placed by class name
    // GeometryBatch::GetNumLods() const
    uint GeometryBatch::GetNumLods() {
        return m_numLods;
    }

    // 0x100814940, 48 bytes, inline, placed by class name
    // GeometryBatch::GetIAState(unsigned int) const
    void GeometryBatch::GetIAState(uint param_1) {
        uint uVar1;

        uVar1 = GetClampedLodLevel(this, param_1);
        std::array<render::InputAssemblerState, 5ul>::operator[]((array<render::InputAssemblerState, 5ul>*)&field_1248,
                                                                 (ulong)uVar1);
    }

    // 0x1008153b0, 48 bytes, inline, placed by class name
    // GeometryBatch::GetIndexBuffer(unsigned int) const
    void GeometryBatch::GetIndexBuffer(uint param_1) {
        uint uVar1;

        uVar1 = GetClampedLodLevel(this, param_1);
        std::array<render::IndexBuffer, 5ul>::operator[]((array<render::IndexBuffer, 5ul>*)&field_568, (ulong)uVar1);
    }

    // 0x10082dac0, 48 bytes, inline, placed by class name
    // GeometryBatch::GetClampedLodLevel(unsigned int) const
    uint GeometryBatch::GetClampedLodLevel(uint param_1) {
        uint* puVar1;
        uint local_10;
        uint local_c;

        local_c = m_numLods - 1;
        local_10 = param_1;
        puVar1 = std::min<unsigned int>(&local_10, &local_c);
        return *puVar1;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1002f4350, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<int>::GetXYZ() const
    undefined1[16] Vector4T<int>::GetXYZ() {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(*(int*)this, *(int*)(this + 4), *(int*)(this + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x1002f4380, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<int>::operator+=(Vector3T<int> const&)
    /* Vector3T<int>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&) */

    Vector3T<int>* Vector3T<int>::operator+=(Vector3T* param_1) {
        *(int*)this = *(int*)this + *(int*)param_1;
        *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 4);
        *(int*)(this + 8) = *(int*)(this + 8) + *(int*)(param_1 + 8);
        return this;
    }

} // namespace jag::math
