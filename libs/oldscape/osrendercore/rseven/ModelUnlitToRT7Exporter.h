// libs/oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class DashExportResult {
    public:
        DashExportResult();
        ~DashExportResult();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[31];
    };

    class Mesh {
    public:
        Mesh(const Mesh& mesh);
        ~Mesh();
        Mesh();
        Mesh(Mesh&& mesh);
        Mesh* operator=(Mesh&& mesh);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[236];
        uint32_t field_240;
        uint8_t field_244;
        uint8_t _unknown_245[3];
    };

    // 0x1001cabe0
    auto ExportLabelCentres(dash3d::ModelUnlitImpl& modelUnlitImpl) {
        auto result;
        Array<Array<int>>* array;
        Array<int>* arg2;
        Array<jag::graphics::LabelData>* this_00;
        GeometryBatchVertexPos* this_01;
        uint64_t extraout_XMM0_Qa;
        uint64_t local_40[2];

        bool cVar1 = (&modelUnlitImpl.field_480)->operator_cast_to_bool();
        if ((!cVar1) && (cVar1 = (&modelUnlitImpl.field_448)->operator_cast_to_bool(), !cVar1)) {
            make_shared<Array<jag::graphics::LabelData>>(&result);
            return result;
        }
        modelUnlitImpl.PrepareAnim();
        auto pvVar2 = modelUnlitImpl.field_448.operator->();
        local_40[0] = pvVar2->end();
        make_shared<Array<jag::graphics::LabelData>, unsigned long>(&result, (unsigned long*)local_40);
        unsigned long arg1 = 0;
        while (true) {
            pvVar2 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(result).operator->();
            if (pvVar2->end() <= arg1)
                break;
            array = (Array<Array<int>>*)modelUnlitImpl.field_448;
            arg2 = (Array<int>*)(*array)[arg1];
            local_40[1] = CalculateLabelCentre(modelUnlitImpl, arg2);
            local_40[0] = extraout_XMM0_Qa;
            this_00 = (Array<jag::graphics::LabelData>*)*result;
            this_01 = (GeometryBatchVertexPos*)(*this_00)[arg1];
            *this_01 = *local_40;
            arg1 = arg1 + 1;
        }
        return result;
    }

    // 0x1001cad40
    auto ModelDash3dToRT7Exporter::Export(dash3d::ModelUnlitImpl& modelUnlitImpl, bool arg2) {
        ModelWrapper local_108(modelUnlitImpl);
        auto result = rseven::Export(local_108, arg2);
        return result;
    }

    // 0x1001dc930
    Mesh::Mesh(const Mesh& mesh)
        : field_0(mesh.field_0), field_8(mesh.field_8), field_40(mesh.field_40), field_72(mesh.field_72),
          field_128(mesh.field_128), field_184(mesh.field_184), field_244(mesh.field_244), field_240(mesh.field_240) {}

    // 0x1001dceb0
    Mesh::~Mesh() {
        field_184.~hash_map();
        field_128.~hash_map();
        field_72.~hash_map();
        field_40.~vector();
        field_8.~vector();
    }

    // 0x1001dcf00
    DashExportResult::DashExportResult() : field_0(0) {
        new (&field_24) shared_ptr();
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x1001caea0
    void PacketT<Array<unsigned char>>::p4<unsigned short>(unsigned short arg1) {
        pT<int>(this, arg1);
    }

    // 0x1001caeb0
    void PacketT<Array<unsigned char>>::p2<short>(short arg1) {
        pT<short>(this, arg1);
    }

} // namespace jag
