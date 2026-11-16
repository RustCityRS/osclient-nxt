// libs/graphics/runetek7/model/BillboardBatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BillboardBatch {
    public:
        GetAABB() const;
        GetBoneIDMap();
        GetBoneIDMap() const;
        IsTransformed() const;
        GetLabelIDMap();
        GetLabelIDMap() const;
        SetTransformed(bool);
        GetVertexDataBuffer() const;
        GetJointIDMap();
        GetJointIDMap() const;
        GetIndexBuffer() const;
        GetBoneVertices() const;
        IsLowPrecision() const;
        GetBillboardLabelIDMap();
        GetBillboardLabelIDMap() const;
        BillboardBatch();
        BillboardBatch(BillboardBatch&&);
        BillboardBatch(BillboardBatch const&);
        ~BillboardBatch();
        void DestroyRenderingResources();
        void UpdateAABB();
        void SetBillboardSize(int);
        void LoadMeshFromModelRawRT7(PacketView&);
        void BakeTextureMeta(unsigned int, unsigned int, ModelTextureMeta const&);
        void BakeHSLColors(unsigned int, unsigned int);
        void SortSections(
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&,
            eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL> const&,
            eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL> const&);
        CanSkipSortSections(eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&,
                            eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>,
                                            BucketAllocatorEASTL> const&) const;
        void Reserve(BillboardBatchCombineHelper const&);
        void Assign(BillboardBatch const&);
        void Append(BillboardBatch const&, bool);
        bool HasBones() const;
        GetFaceLabelCount() const;
        GetBillboardLabelCount() const;
        void Transform(math::Matrix44T<float> const&);
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
        void GetIndexCount() const;
        void GetVertexCount() const;
        byte GetBoneCount() const;
        bool HasJoints() const;
        GetForwardPassIAState() const;

        // data members, from how the methods use this: 760 bytes
        char _unknown_0[12];
        undefined4 field_12; // offset 12
        char _unknown_16[12];
        float field_28;              // offset 28
        undefined1 field_32;         // offset 32
        undefined1 m_faceLabelCount; // offset 33
        char _unknown_34[46];
        byte m_boneCount; // offset 80
        char _unknown_81[87];
        undefined1 field_168; // offset 168
        char _unknown_169[47];
        undefined1 m_billboardLabelCount; // offset 216
        char _unknown_217[47];
        undefined1 field_264; // offset 264
        char _unknown_265[31];
        undefined1 field_296; // offset 296
        char _unknown_297[31];
        undefined1 field_328; // offset 328
        char _unknown_329[63];
        bool m_lowPrecision; // offset 392
        char _unknown_393[175];
        InputAssemblerState m_forwardPassIAState; // offset 568
    };

    // 0x100864ad0, 16 bytes, inline, placed by class name and debug map
    // BillboardBatch::HasBones() const
    bool BillboardBatch::HasBones() {
        return 1 < m_boneCount;
    }

    // 0x100864ae0, 16 bytes, inline, placed by class name and debug map
    // BillboardBatch::GetFaceLabelCount() const
    undefined1 BillboardBatch::GetFaceLabelCount() {
        return m_faceLabelCount;
    }

    // 0x100864af0, 16 bytes, inline, placed by class name and debug map
    // BillboardBatch::GetBillboardLabelCount() const
    undefined1 BillboardBatch::GetBillboardLabelCount() {
        return m_billboardLabelCount;
    }

    // 0x100865580, 32 bytes, inline, placed by class name
    // BillboardBatch::GetIndexCount() const
    void BillboardBatch::GetIndexCount() {
        (&field_264)->size();
    }

    // 0x100865a10, 32 bytes, inline, placed by class name
    // BillboardBatch::GetVertexCount() const
    void BillboardBatch::GetVertexCount() {
        (&field_360)->size();
    }

    // 0x100866b20, 16 bytes, inline, placed by class name
    // BillboardBatch::GetBoneCount() const
    byte BillboardBatch::GetBoneCount() {
        return m_boneCount;
    }

    // 0x100866fb0, 16 bytes, inline, placed by class name
    // BillboardBatch::HasJoints() const
    bool BillboardBatch::HasJoints() {
        return field_168 != '\0';
    }

    // 0x100869340, 16 bytes, inline, placed by class name
    // BillboardBatch::GetForwardPassIAState() const
    undefined1* BillboardBatch::GetForwardPassIAState() {
        return m_forwardPassIAState;
    }

} // namespace jag::graphics

namespace jag {
    // 0x100863200, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketView>::g2LE()
    ushort PacketReaderMixin<PacketView>::g2LE() {
        return gTLE<unsigned short>(this);
    }

    // 0x1008632a0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketView>::gFloatLE()
    void PacketReaderMixin<PacketView>::gFloatLE() {
        gTLE<float>(this);
    }

    // 0x1008632b0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketView>::g2sLE()
    int PacketReaderMixin<PacketView>::g2sLE() {
        short sVar1;

        sVar1 = gTLE<short>(this);
        return (int)sVar1;
    }

    // 0x100863350, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketView>::g1s()
    int PacketReaderMixin<PacketView>::g1s() {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 16);
        *(ulong*)(this + 16) = uVar1 + 1;
        pcVar2 = (char*)WrapArray<unsigned char const>::operator[]((WrapArray<unsigned char const>*)this, uVar1);
        return (int)*pcVar2;
    }

} // namespace jag
