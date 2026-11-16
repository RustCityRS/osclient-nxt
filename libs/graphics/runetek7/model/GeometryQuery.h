// libs/graphics/runetek7/model/GeometryQuery.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GeometryQuery {
    public:
        byte IsValid() const;
        GetQueryInstance(unsigned long);
        GeometryQuery(render::QueryType, bool);
        ~GeometryQuery();
        void Destroy();
        void Reset(render::QueryType, bool);
        ulong CreateQueryInstances(unsigned long);
        int FetchResult();
        void PrepareResult();
        int GetResult() const;
        int GetNumActive() const;
        ulong IsResultReady() const;
        bool IsDestructive() const;
        void GetQueryInstanceCount() const;

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[11];
    };

    // 0x1008138d0, 32 bytes, inline, placed by class name and debug map
    // GeometryQuery::IsValid() const
    byte GeometryQuery::IsValid() {
        byte bVar1;

        bVar1 = (&field_8)->empty();
        return bVar1 ^ 1;
    }

    // 0x100815ed0, 48 bytes, inline, placed by class name
    // GeometryQuery::IsDestructive() const
    bool GeometryQuery::IsDestructive() {
        bool bVar2;

        if (IsValid(this) == '\0') {
            bVar2 = false;
        } else {
            bVar2 = field_4 != '\0';
        }
        return bVar2;
    }

    // 0x10081f1f0, 16 bytes, inline, placed by class name
    // GeometryQuery::GetQueryInstanceCount() const
    void GeometryQuery::GetQueryInstanceCount() {
        (&field_8)->size();
    }

} // namespace jag::graphics
