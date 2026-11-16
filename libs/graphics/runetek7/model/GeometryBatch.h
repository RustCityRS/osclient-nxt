// libs/graphics/runetek7/model/GeometryBatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GeometryBatch {
    public:
        void GetAABB() const;
        uint8_t* GetBoneIDMap();
        uint8_t* GetBoneIDMap() const;
        uint8_t* GetLabelIDMap();
        uint8_t* GetLabelIDMap() const;
        uint8_t* GetVertexDataBuffer();
        uint8_t* GetVertexDataBuffer() const;
        void GetIndexCount() const;
        uint8_t* GetJointIDMap();
        uint8_t* GetJointIDMap() const;
        void GetVertexIndexBuffer() const;
        void GetVertexIndexBuffer();
        uint8_t* GetVertexDataBufferPos() const;
        uint8_t* GetVertexDataBufferPos();
        void GetVertexCount() const;
        uint8_t* GetFaceHSLBuffer();
        uint8_t* GetFaceTransparencyBuffer();
        void SetFaceHSLBaked(bool arg1);
        uint8_t* GetBoneVertices() const;
        void SetShareLight(bool arg1);
        bool HasFaceTransparency() const;
        uint8_t* GetVertexDataBufferSkin() const;
        bool IsHidden() const;
        uint8_t VertexBuffersInitialised() const;
        uint8_t* GetVertexDataBufferPosLP() const;
        float GetVertexScale() const;
        GeometryBatch();
        GeometryBatch(GeometryBatch&& geometryBatch);
        GeometryBatch(const GeometryBatch& geometryBatch);
        ~GeometryBatch();
        void DestroyRenderingResources();
        void UpdateAABB();
        unsigned long LoadMeshFromModelRawRT7(PacketView& packetView, unsigned int arg2);
        bool LoadMeshFromData(unsigned long arg1, unsigned long arg2, const math::Vector3T<float>* vector31,
                              const math::Vector3T<float>* vector32, const math::Vector4T<float>* vector4,
                              const math::Vector2T<float>* vector2, unsigned long arg7, const unsigned short* arg8,
                              const math::Vector3T<float>& vector33, unsigned int arg10);
        void BakeTile(unsigned int arg1, unsigned int arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5,
                      unsigned char arg6, unsigned char arg7, unsigned char arg8, unsigned char arg9);
        void BakeTextureMeta(unsigned int arg1, unsigned int arg2, const ModelTextureMeta& modelTextureMeta);
        void BakeHSLColors(unsigned int arg1, unsigned int arg2, unsigned short arg3, unsigned int arg4,
                           unsigned int arg5);
        void BakeBatchFlags(unsigned char arg1);
        void BakeShareLightNormals(
            const eastl::fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true,
                                        eastl::hash<math::Vector3T<float>>, eastl::equal_to<math::Vector3T<float>>,
                                        false>& fixed_hash_map);
        void SortSections(const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections1,
                          const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections2,
                          const eastl::multimap<unsigned char, unsigned long>& multimap);
        bool CanSkipSortSections(const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections,
                                 const eastl::multimap<unsigned char, unsigned long>& multimap) const;
        void CreateSecondaryVertexBuffers();
        void DestroyCPUBuffers();
        void Reserve(const GeometryBatchCombineHelper& geometryBatchCombineHelper);
        void Assign(const GeometryBatch& geometryBatch);
        void Append(const GeometryBatch& geometryBatch, bool arg2);
        uint8_t GetLabelCount() const;
        bool HasBones() const;
        void WeldVertexEdgesWithMap(
            eastl::hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float>>,
                            eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL>& arg1);
        void WeldVertexEdgesWithMapSkin(
            eastl::hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float>>,
                            eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL>& arg1);
        void Transform(const math::Matrix44T<float>& matrix44);
        void TransformNormals(const math::QuaternionT<float>& quaternion, bool arg2);
        void Translate(const math::Vector3T<float>& vector3);
        void Rotate(const math::QuaternionT<float>& quaternion, bool arg2);
        void Rotate90(Rotation90 rotation90, bool arg2);
        void Scale(const math::Vector3T<float>& vector3);
        void MirrorZ();
        void HillChange(graphics::HillChange arg1, int arg2, const Array<Array<int>>& arg3,
                        const Array<Array<int>>& arg4, const LocationHelpers::LocationHillChangeData& arg5);
        void Recolour(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void RecolourSingle(unsigned short arg1, unsigned short arg2);
        void AmbientAdjust(unsigned short arg1);
        void TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);
        void CreateRenderingResources();
        bool HasJoints() const;
        void GetIndexBuffer(unsigned int arg1);
        void ClearFaceData();
        void PushFaceRange(const GeometryBatch& geometryBatch, unsigned short arg2, unsigned short arg3);
        bool IsTransformed() const;
        void SetTransformed(bool arg1);
        uint8_t GetBoneCount() const;
        void GetLodIndexCount(unsigned int arg1) const;
        bool HasShareLight() const;
        unsigned int GetNumLods() const;
        void GetIAState(unsigned int arg1) const;
        void GetIndexBuffer(unsigned int arg1) const;
        unsigned int GetClampedLodLevel(unsigned int arg1) const;

    private:
        uint8_t _unknown_0[12];
        uint32_t field_12;
        uint8_t _unknown_16[12];
        uint32_t field_28;
        uint8_t m_boneCount;
        uint8_t field_33;
        bool m_transformed;
        uint8_t field_35;
        uint8_t m_hasFaceTransparency;
        bool m_shareLight;
        uint8_t m_hidden;
        uint8_t _unknown_39[1];
        float m_vertexScale;
        uint8_t m_labelCount;
        uint8_t _unknown_45[163];
        unsigned int m_numLods;
        uint8_t _unknown_212[4];
        uint8_t field_216;
        uint8_t _unknown_217[159];
        uint8_t m_faceHSLBuffer[2];
        uint8_t _unknown_378[30];
        bool m_faceHSLBaked;
        uint8_t _unknown_409[7];
        uint8_t m_faceTransparencyBuffer[1];
        uint8_t _unknown_417[119];
        uint8_t m_vertexDataBufferSkin[1];
        uint8_t _unknown_537[719];
    };

    class GeometryBatchVertexSkin {
    public:
        GeometryBatchVertexSkin();
        GeometryBatchVertexSkin* operator=(GeometryBatchVertexSkin&& geometryBatchVertexSkin);
        GeometryBatchVertexSkin* operator=(const GeometryBatchVertexSkin& geometryBatchVertexSkin);

    private:
        Vector4T<signed char> field_0;
        Vector4T<unsigned char> field_1;
        Vector4T<unsigned char> field_2;
        Vector4T<unsigned char> field_3;
        Callstack field_4;
    };

    // 0x1002f4110
    void GeometryBatch::GetIndexCount() const {
        unsigned long in_RSI;

        ((vector<game::MapSquare::MapSquarePos>*)field_216[in_RSI])->size();
    }

    // 0x10036bfe0
    uint8_t* GeometryBatch::GetJointIDMap() {
        return &field_168;
    }

    // 0x10036d940
    void GeometryBatch::GetVertexIndexBuffer() const {
        unsigned long in_RSI;

        field_216[in_RSI];
    }

    // 0x10036da10
    void GeometryBatch::GetVertexIndexBuffer() {
        unsigned long in_RSI;

        field_216[in_RSI];
    }

    // 0x10036da70
    uint8_t* GeometryBatch::GetVertexDataBufferPos() const {
        return &field_480;
    }

    // 0x10036f090
    void GeometryBatch::GetVertexCount() const {
        field_448.size();
    }

    // 0x10036f470
    uint8_t* GeometryBatch::GetFaceHSLBuffer() {
        return m_linearPositionMaxSpeed;
    }

    // 0x10036f4c0
    uint8_t* GeometryBatch::GetFaceTransparencyBuffer() {
        return &field_416;
    }

    // 0x10036f740
    void GeometryBatch::SetFaceHSLBaked(bool arg1) {
        m_faceHSLBaked = arg1;
    }

    // 0x1007dd510
    bool GeometryBatch::IsHidden() const {
        return m_hidden;
    }

    // 0x1007dd560
    uint8_t GeometryBatch::VertexBuffersInitialised() const {
        return field_512.empty() ^ 1;
    }

    // 0x1007dd580
    uint8_t* GeometryBatch::GetVertexDataBufferPosLP() const {
        return &field_512;
    }

    // 0x1007dda80
    float GeometryBatch::GetVertexScale() const {
        return m_farClip;
    }

    // 0x10080a3a0
    uint8_t GeometryBatch::GetLabelCount() const {
        return m_labelCount;
    }

    // 0x10080a3b0
    bool GeometryBatch::HasBones() const {
        return 1 < m_boneCount;
    }

    // 0x10080c4f0
    bool GeometryBatch::HasJoints() const {
        return field_33 != '\0';
    }

    // 0x10080c550
    void GeometryBatch::GetIndexBuffer(unsigned int arg1) {
        unsigned int uVar1 = GetClampedLodLevel(arg1);
        field_568[(unsigned long)uVar1];
    }

    // 0x10080e050
    bool GeometryBatch::IsTransformed() const {
        return m_transformed;
    }

    // 0x10080e090
    void GeometryBatch::SetTransformed(bool arg1) {
        m_transformed = arg1;
    }

    // 0x10080e330
    uint8_t GeometryBatch::GetBoneCount() const {
        return m_alphaTestThreshold;
    }

    // 0x10080e4a0
    void GeometryBatch::GetLodIndexCount(unsigned int arg1) const {
        unsigned int uVar1 = GetClampedLodLevel(arg1);
        ((vector<game::MapSquare::MapSquarePos>*)field_216[(unsigned long)uVar1])->size();
    }

    // 0x10080f980
    bool GeometryBatch::HasShareLight() const {
        return m_disableCache;
    }

    // 0x10080fcd0
    unsigned int GeometryBatch::GetNumLods() const {
        return m_numLods;
    }

    // 0x100814940
    void GeometryBatch::GetIAState(unsigned int arg1) const {
        unsigned int uVar1 = GetClampedLodLevel(arg1);
        field_1248[(unsigned long)uVar1];
    }

    // 0x1008153b0
    void GeometryBatch::GetIndexBuffer(unsigned int arg1) const {
        unsigned int uVar1 = GetClampedLodLevel(arg1);
        field_568[(unsigned long)uVar1];
    }

    // 0x10082dac0
    unsigned int GeometryBatch::GetClampedLodLevel(unsigned int arg1) const {
        unsigned int local_c = m_numLods - 1;
        auto puVar1 = std::min<unsigned int>(arg1, local_c);
        return *puVar1;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1002f4350
    uint8_t[16] Vector4T<int>::GetXYZ() const {
        uint8_t auVar1[16];

        LocationData local_18(*(int*)this, *(unsigned int*)(this + 4), *(unsigned int*)(this + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x1002f4380
    Vector3T<int>* Vector3T<int>::operator+=(const Vector3T<int>& vector3) {
        *(int*)this = *(int*)this + *(int*)vector3;
        *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(vector3 + 4);
        *(int*)(this + 8) = *(int*)(this + 8) + *(int*)(vector3 + 8);
        return this;
    }

} // namespace jag::math
