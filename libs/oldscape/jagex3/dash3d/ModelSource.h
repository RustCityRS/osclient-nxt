// libs/oldscape/jagex3/dash3d/ModelSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelSource {
    public:
        // virtual methods in vtable order
        virtual ~ModelSource();
        GetUniqueID(unsigned long long&) const;
        ModelSource();
        ModelSource(ModelSource const&);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        undefined8 field_8; // offset 8
    };

    class UniqueModelSource {
    public:
        // virtual methods in vtable order
        virtual ~UniqueModelSource();
        UniqueModelSource();
        GetUniqueID(unsigned long long&) const;

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        ulonglong field_16;  // offset 16
    };

    // 0x100347d20, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // ModelSource::ModelSource()
    void ModelSource::ModelSource() {
        field_0 = PTR_vtable_100ee8980 + 16;
        field_8 = 18446744069414585320;
    }

    // 0x100373040, 32 bytes, base-object constructor, inline, placed by class name
    // ModelSource::ModelSource(ModelSource const&)
    void ModelSource::ModelSource(ModelSource* param_1) {
        field_0 = PTR_vtable_100ee8980 + 16;
        field_8 = param_1->field_8;
    }

} // namespace jag::oldscape::dash3d
