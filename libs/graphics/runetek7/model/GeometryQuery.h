// libs/graphics/runetek7/model/GeometryQuery.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GeometryQuery {
    public:
        bool IsValid() const;
        uint8_t[16] GetQueryInstance(unsigned long arg1);
        GeometryQuery(render::QueryType queryType, bool arg2);
        ~GeometryQuery();
        void Destroy();
        void Reset(render::QueryType queryType, bool arg2);
        unsigned long CreateQueryInstances(unsigned long arg1);
        int FetchResult();
        void PrepareResult();
        int GetResult() const;
        int GetNumActive() const;
        unsigned long IsResultReady() const;
        bool IsDestructive() const;
        void GetQueryInstanceCount() const;

    private:
        QueryType field_0;
        bool field_4;
        uint8_t _unknown_5[11];
    };

    // 0x1008138d0
    bool GeometryQuery::IsValid() const {
        return field_8.empty() ^ 1;
    }

    // 0x100815ed0
    bool GeometryQuery::IsDestructive() const {
        bool bVar2;

        if (IsValid() == '\0') {
            bVar2 = false;
        } else {
            bVar2 = field_4 != false;
        }
        return bVar2;
    }

    // 0x10081f1f0
    void GeometryQuery::GetQueryInstanceCount() const {
        field_8.size();
    }

} // namespace jag::graphics
