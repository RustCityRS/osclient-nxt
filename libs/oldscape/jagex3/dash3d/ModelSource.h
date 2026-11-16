// libs/oldscape/jagex3/dash3d/ModelSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelSource {
    public:
        // virtual methods in vtable order
        virtual ~ModelSource();
        uint64_t GetUniqueID(unsigned long long& arg1) const;
        ModelSource();
        ModelSource(const ModelSource& modelSource);

    private:
        uint64_t field_8;
    };

    class UniqueModelSource {
    public:
        // virtual methods in vtable order
        virtual ~UniqueModelSource();
        UniqueModelSource();
        uint64_t GetUniqueID(unsigned long long& arg1) const;

    private:
        uint64_t field_8;
        unsigned long long field_16;
    };

    // 0x100347d20
    ModelSource::ModelSource() : field_8(18446744069414585320) {}

    // 0x100373040
    ModelSource::ModelSource(const ModelSource& modelSource) : field_8(modelSource.field_8) {}

} // namespace jag::oldscape::dash3d
