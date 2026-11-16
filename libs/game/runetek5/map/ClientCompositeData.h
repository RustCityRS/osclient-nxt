// libs/game/runetek5/map/ClientCompositeData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ClientCompositeData {
    public:
        ~ClientCompositeData();
        ClientCompositeData();
        void DecodeFromRegionData(const eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>& arg1, int arg2,
                                  int arg3, int arg4, int arg5);
        unsigned long
        DecodeFromWorldArea(const shared_ptr<WorldAreaType>& worldAreaType,
                            const shared_ptr<MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner,
                            int arg3, int arg4, bool arg5);

        uint8_t _unknown_0[9808];
    };

    // 0x100413d10
    uint32_t ClientCompositeZone::operator==(const ClientCompositeZone& clientCompositeZone) const {
        if (((field_0 == clientCompositeZone.field_0) && (field_4 == clientCompositeZone.field_4)) &&
            (field_8 == clientCompositeZone.field_8)) {
            return field_12 == clientCompositeZone.field_12;
        }
        return 0;
    }

    // 0x1004516e0
    ClientCompositeData::~ClientCompositeData() {
        field_9800.~vector_map();
    }

    // 0x100451ab0
    ClientCompositeData::ClientCompositeData()
        : MakeSharedPool<ClientCompositeData, 8>(),
          eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>, 4ul>() {
        new (&field_9800) eastl::vector<eastl::pair<unsigned int, unsigned int>>();
    }

} // namespace jag::game
