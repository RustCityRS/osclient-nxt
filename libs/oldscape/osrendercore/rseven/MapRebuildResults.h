// libs/oldscape/osrendercore/rseven/MapRebuildResults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class MapRebuildResults {
    public:
        MapRebuildResults();
        ~MapRebuildResults();

    private:
        uint8_t _unknown_0[32];
        CoordGrid field_32;
        uint8_t _unknown_48[112];
    };

    // 0x1001c7350
    bool MapRebuildHandler_LogicThread::IsGroundBlendable(const dash3d::Ground& ground, int arg2) {
        bool cVar1;
        int* piVar2;

        if ((m_blendTerrain == '\0') || (cVar1 = ground.IsOverlay(arg2), cVar1)) {
            return false;
        }
        cVar1 = ground.field_304.empty();
        if (!cVar1) {
            piVar2 = &ground.field_304[(long)arg2];
            return *piVar2 == -1;
        }
        return true;
    }

    // 0x1001dc710
    MapRebuildResults::MapRebuildResults() : eastl::vector<MapRebuildSquare>() {

        new (&field_48) eastl::hash_set(local_28);
        new (&field_104) eastl::hash_map<int, shared_ptr<PacketJ<Array<unsigned char>>>>(local_28);
    }

    // 0x1001dc900
    MapRebuildResults::~MapRebuildResults() {
        field_104.~hash_map();
        field_48.~hash_map();
    }

} // namespace jag::oldscape::rseven
