// libs/oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class DashExportResult {
    public:
        DashExportResult();
        ~DashExportResult();

        // data members, from how the methods use this: 32 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[31];
    };

    class Mesh {
    public:
        Mesh(Mesh const&);
        ~Mesh();
        Mesh();
        Mesh(Mesh&&);
        Mesh* operator=(Mesh&&);

        // data members, from how the methods use this: 248 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[236];
        undefined4 field_240; // offset 240
        undefined1 field_244; // offset 244
        char _unknown_245[3];
    };

    // 0x1001caa00, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Mesh::Mesh(Mesh const&): jumps straight to the base-object constructor

    // 0x1001cabc0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // Mesh::~Mesh(): jumps straight to the base-object destructor

    // 0x1001cabd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DashExportResult::DashExportResult(): jumps straight to the base-object constructor

    // 0x1001cabe0, 256 bytes, placed by debug map only (low confidence)
    // ExportLabelCentres(dash3d::ModelUnlitImpl&)
    rseven* ExportLabelCentres(ModelUnlitImpl* param_1) {
        bool bVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar2;
        ulong uVar3;
        Array<Array<int, eastl::allocator>, eastl::allocator>* this_00;
        Array* pAVar4;
        Array<jag::graphics::LabelData, eastl::allocator>* this_01;
        GeometryBatchVertexPos* this_02;
        ulong uVar5;
        undefined8 extraout_XMM0_Qa;
        undefined1 local_40[16];

        bVar1 = param_1->field_480->operator_cast_to_bool();
        if ((!bVar1) && (bVar1 = param_1->field_448->operator_cast_to_bool(), !bVar1)) {
            make_shared<Array<jag::graphics::LabelData, eastl::allocator>>((jag*)this);
            return this;
        }
        param_1->PrepareAnim();
        pvVar2 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                     shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                         (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)param_1->field_448);
        local_40._0_8_ = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar2);
        make_shared<Array<jag::graphics::LabelData, eastl::allocator>, unsigned long>((jag*)this, (ulong*)local_40);
        uVar5 = 0;
        while (true) {
            pvVar2 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                         shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>::operator->(
                             (shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>*)this);
            uVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar2);
            if (uVar3 <= uVar5)
                break;
            this_00 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                    (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)param_1->field_448);
            pAVar4 = (Array*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](this_00, uVar5);
            local_40._8_8_ = CalculateLabelCentre(param_1, pAVar4);
            local_40._0_8_ = extraout_XMM0_Qa;
            this_01 = (Array<jag::graphics::LabelData, eastl::allocator>*)
                shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>::operator*(
                    (shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>*)this);
            this_02 =
                (GeometryBatchVertexPos*)Array<jag::graphics::LabelData, eastl::allocator>::operator[](this_01, uVar5);
            jag::graphics::GeometryBatchVertexPos::operator=(this_02, (GeometryBatchVertexPos*)local_40);
            uVar5 = uVar5 + 1;
        }
        return this;
    }

    // 0x1001cad20, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DashExportResult::~DashExportResult(): jumps straight to the base-object destructor

    // 0x1001cad40, 112 bytes, placed by debug map only (low confidence)
    // ModelDash3dToRT7Exporter::Export(dash3d::ModelUnlitImpl&, bool)
    ModelDash3dToRT7Exporter* ModelDash3dToRT7Exporter::Export(ModelUnlitImpl* param_1, bool param_2) {
        ModelWrapper local_108;

        new (&local_108) ModelWrapper(param_1);
        Export(&local_108, param_2);
        local_108.~ModelWrapper();
        return this;
    }

    // 0x1001cadb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModelWrapper::ModelWrapper(dash3d::ModelUnlitImpl&): jumps straight to the base-object constructor

    // 0x1001cadc0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ModelWrapper::~ModelWrapper(): jumps straight to the base-object destructor

    // 0x1001dc930, 224 bytes, base-object constructor, inline, placed by class header (inline)
    // Mesh::Mesh(Mesh const&)
    void Mesh::Mesh(Mesh* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (vector*)&param_1->field_8) eastl::vector<ModelVertex, eastl::allocator>();
        new (&field_40, (vector*)&param_1->field_40) eastl::vector<ModelFace, eastl::allocator>();
        new (&field_72, (hash_set*)&param_1->field_72)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_128, (hash_set*)&param_1->field_128)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_184, (hash_set*)&param_1->field_184)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        field_244 = param_1->field_244;
        field_240 = param_1->field_240;
    }

    // 0x1001dceb0, 80 bytes, base-object destructor, inline, placed by class header (inline)
    // Mesh::~Mesh()
    void Mesh::~Mesh() {
        (&field_184)->~hash_map();
        (&field_128)->~hash_map();
        (&field_72)->~hash_map();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

    // 0x1001dcf00, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // DashExportResult::DashExportResult()
    void DashExportResult::DashExportResult() {
        field_0 = 0;
        new (&field_8, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_24, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x1001caea0, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p4<unsigned short>(unsigned short)
    /* void PacketT<Array<unsigned char, eastl::allocator> >::p4<int>(int) */

    void PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  int param_1) {
        pT<int>(this, param_1);
    }

    // 0x1001caeb0, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p2<short>(short)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::p2<short>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               short param_1) {
        pT<short>(this, param_1);
    }

} // namespace jag
