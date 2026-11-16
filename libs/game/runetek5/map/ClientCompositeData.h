// libs/game/runetek5/map/ClientCompositeData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ClientCompositeData {
    public:
        ~ClientCompositeData();
        ClientCompositeData();
        void
        DecodeFromRegionData(eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                 4ul, true, eastl::allocator> const&,
                             int, int, int, int);
        ulong DecodeFromWorldArea(shared_ptr<WorldAreaType> const&, shared_ptr<MapSquareWorldAreaCompositeInner> const&,
                                  int, int, bool);

        // data members, from how the methods use this: 9808 bytes
        char _unknown_0[9808];
    };

    // 0x100413d10, 48 bytes, inline, placed by debug map only (low confidence)
    // ClientCompositeZone::operator==(ClientCompositeZone const&) const
    /* ClientCompositeZone::TEMPNAMEPLACEHOLDERVALUE(ClientCompositeZone const&)
   const */

    undefined4 ClientCompositeZone::operator==(ClientCompositeZone* param_1) {
        if (((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) {
            return CONCAT31((int3)((uint)field_8 >> 8), field_12 == param_1->field_12);
        }
        return 0;
    }

    // 0x1004516d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientCompositeData::~ClientCompositeData(): jumps straight to the base-object destructor

    // 0x1004516e0, 48 bytes, base-object destructor, inline, placed by class name
    // ClientCompositeData::~ClientCompositeData()
    void ClientCompositeData::~ClientCompositeData() {
        (&field_9800)->~vector_map();
        ~fixed_vector();
    }

    // 0x100451aa0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClientCompositeData::ClientCompositeData(): jumps straight to the base-object constructor

    // 0x100451ab0, 64 bytes, base-object constructor, inline, placed by class name
    // ClientCompositeData::ClientCompositeData()
    void ClientCompositeData::ClientCompositeData() {
        new (this) MakeSharedPool<ClientCompositeData, 8>();
        new (this) eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                eastl::allocator>,
            4ul, true, eastl::allocator>();
        new (&field_9800) eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>();
    }

} // namespace jag::game
