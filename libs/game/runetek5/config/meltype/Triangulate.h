// libs/game/runetek5/config/meltype/Triangulate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Triangulate {
    public:
        class SourcePoint;
        void ConvertPolygon(eastl::vector<int>& arg1, const eastl::vector<math::Point<int>>& points);
        bool TestPolygonWinding(const eastl::vector<SourcePoint>& sourcePoints);
        unsigned int ProcessPolygonList(eastl::vector<int>& arg1, eastl::vector<SourcePoint>& sourcePoints, bool arg3);
        long Cross(const eastl::vector<SourcePoint>& sourcePoints, int arg2, int arg3, int arg4);
        void PointInTriangle(const eastl::vector<SourcePoint>& sourcePoints, int arg2, int arg3, int arg4, int arg5);
    };

    class Triangulate::SourcePoint {
    public:
        int GetIndex() const;
        SourcePoint(const math::Point<int>& point, int arg2);
        SourcePoint(SourcePoint&& sourcePoint);
        SourcePoint* operator=(SourcePoint&& sourcePoint);

    private:
        uint32_t field_0;
        uint32_t field_4;
        int m_index;
        uint8_t _unknown_12[4];
    };

} // namespace jag::game
