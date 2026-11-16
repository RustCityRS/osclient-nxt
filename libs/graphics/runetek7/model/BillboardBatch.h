// libs/graphics/runetek7/model/BillboardBatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BillboardBatch {
    public:
        void GetAABB() const;
        unsigned short GetBoneIDMap();
        unsigned short GetBoneIDMap() const;
        void IsTransformed() const;
        void GetLabelIDMap();
        void GetLabelIDMap() const;
        void SetTransformed(bool arg1);
        uint8_t* GetVertexDataBuffer() const;
        uint8_t* GetJointIDMap();
        uint8_t* GetJointIDMap() const;
        uint64_t* GetIndexBuffer() const;
        uint8_t* GetBoneVertices() const;
        bool IsLowPrecision() const;
        unsigned short* GetBillboardLabelIDMap();
        unsigned short* GetBillboardLabelIDMap() const;
        BillboardBatch();
        BillboardBatch(BillboardBatch&& billboardBatch);
        BillboardBatch(const BillboardBatch& billboardBatch);
        ~BillboardBatch();
        void DestroyRenderingResources();
        void UpdateAABB();
        void SetBillboardSize(int arg1);
        void LoadMeshFromModelRawRT7(PacketView& packetView);
        void BakeTextureMeta(unsigned int arg1, unsigned int arg2, const ModelTextureMeta& modelTextureMeta);
        void BakeHSLColors(unsigned int arg1, unsigned int arg2);
        void SortSections(const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections1,
                          const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections2,
                          const eastl::multimap<unsigned char, unsigned long>& multimap);
        bool CanSkipSortSections(const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections,
                                 const eastl::multimap<unsigned char, unsigned long>& multimap) const;
        void Reserve(const BillboardBatchCombineHelper& billboardBatchCombineHelper);
        void Assign(const BillboardBatch& billboardBatch);
        void Append(const BillboardBatch& billboardBatch, bool arg2);
        bool HasBones() const;
        uint8_t GetFaceLabelCount() const;
        uint8_t GetBillboardLabelCount() const;
        void Transform(const math::Matrix44T<float>& matrix44);
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
        void GetIndexCount() const;
        void GetVertexCount() const;
        uint8_t GetBoneCount() const;
        bool HasJoints() const;
        InputAssemblerState GetForwardPassIAState() const;

    private:
        uint8_t _unknown_0[12];
        uint32_t field_12;
        uint8_t _unknown_16[12];
        float field_28;
        uint8_t m_transformed;
        uint8_t m_faceLabelCount;
        uint8_t _unknown_34[6];
        unsigned short field_40;
        uint8_t _unknown_42[38];
        uint8_t m_boneCount;
        uint8_t _unknown_81[7];
        unsigned short m_boneIDMap;
        uint8_t _unknown_90[78];
        uint8_t field_168;
        uint8_t _unknown_169[47];
        uint8_t m_billboardLabelCount;
        uint8_t _unknown_217[7];
        unsigned short m_billboardLabelIDMap;
        uint8_t _unknown_226[166];
        bool m_lowPrecision;
        uint8_t _unknown_393[175];
        InputAssemblerState m_forwardPassIAState;
    };

    // 0x100864ad0
    bool BillboardBatch::HasBones() const {
        return 1 < m_boneCount;
    }

    // 0x100864ae0
    uint8_t BillboardBatch::GetFaceLabelCount() const {
        return m_faceLabelCount;
    }

    // 0x100864af0
    uint8_t BillboardBatch::GetBillboardLabelCount() const {
        return m_billboardLabelCount;
    }

    // 0x100865580
    void BillboardBatch::GetIndexCount() const {
        field_264.size();
    }

    // 0x100865a10
    void BillboardBatch::GetVertexCount() const {
        field_360.size();
    }

    // 0x100866b20
    uint8_t BillboardBatch::GetBoneCount() const {
        return m_boneCount;
    }

    // 0x100866fb0
    bool BillboardBatch::HasJoints() const {
        return field_168 != '\0';
    }

    // 0x100869340
    InputAssemblerState BillboardBatch::GetForwardPassIAState() const {
        return m_forwardPassIAState;
    }

} // namespace jag::graphics

namespace jag {
    // 0x100863200
    unsigned short PacketReaderMixin<PacketView>::g2LE() {
        return gTLE<unsigned short>(this);
    }

    // 0x1008632a0
    void PacketReaderMixin<PacketView>::gFloatLE() {
        gTLE<float>(this);
    }

    // 0x1008632b0
    int PacketReaderMixin<PacketView>::g2sLE() {
        short sVar1 = gTLE<short>(this);
        return (int)sVar1;
    }

    // 0x100863350
    int PacketReaderMixin<PacketView>::g1s() {
        unsigned long arg1 = *(unsigned long*)(this + 16);
        *(unsigned long*)(this + 16) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return (int)*pcVar1;
    }

} // namespace jag
