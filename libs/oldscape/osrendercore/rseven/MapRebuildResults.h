// libs/oldscape/osrendercore/rseven/MapRebuildResults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class MapRebuildResults {
    public:
        MapRebuildResults();
        ~MapRebuildResults();

        // data members, from how the methods use this: 160 bytes
        char _unknown_0[32];
        CoordGrid field_32; // offset 32
        char _unknown_48[112];
    };

    // 0x1001c7350, 80 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::IsGroundBlendable(dash3d::Ground const&, int)
    bool MapRebuildHandler_LogicThread::IsGroundBlendable(Ground* param_1, int param_2) {
        char cVar1;
        int* piVar2;

        if ((m_blendTerrain == '\0') || (cVar1 = param_1->IsOverlay(param_2), cVar1 != '\0')) {
            return false;
        }
        cVar1 = (&param_1->field_304)->empty();
        if (cVar1 == '\0') {
            piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&param_1->field_304, (long)param_2);
            return *piVar2 == -1;
        }
        return true;
    }

    // 0x1001c7f30, 16 bytes, complete-object constructor, inline, placed by class name
    // MapRebuildResults::MapRebuildResults(): jumps straight to the base-object constructor

    // 0x1001c8930, 16 bytes, complete-object destructor, inline, placed by class name
    // MapRebuildResults::~MapRebuildResults(): jumps straight to the base-object destructor

    // 0x1001dc710, 144 bytes, base-object constructor, inline, placed by class name
    // MapRebuildResults::MapRebuildResults()
    void MapRebuildResults::MapRebuildResults() {
        allocator local_28[8];

        new (this) eastl::vector<MapRebuildSquare, eastl::allocator>();
        new (field_32) rs2lib::CoordGrid();
        eastl::allocator::allocator(local_28, "EASTL hash_set");
        new (&field_48, local_28)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (&field_104, local_28) eastl::hash_map<int, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

    // 0x1001dc900, 48 bytes, base-object destructor, inline, placed by class name
    // MapRebuildResults::~MapRebuildResults()
    void MapRebuildResults::~MapRebuildResults() {
        (&field_104)->~hash_map();
        (&field_48)->~hash_map();
        ~vector();
    }

} // namespace jag::oldscape::rseven
