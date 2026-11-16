// libs/oldscape/rs2lib/worldmap/MapTextLabel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib::worldmap {
    class MapTextLabel {
    public:
        ~MapTextLabel();
        MapTextLabel(eastl::string str, int arg2, int arg3, const MapLabelSize& mapLabelSize);

    private:
        uint8_t _unknown_0[32];
        int field_32;
        int field_36;
        MapLabelSizeImpl* field_40;
    };

    // 0x100024070: MapTextLabel::~MapTextLabel() has the same machine code as eastl::pair<eastl::string, option::IOption*>::~pair()

    // 0x10002dfe0: MapTextLabel::~MapTextLabel() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

    // 0x100216f70
    MapTextLabel::MapTextLabel(eastl::string str, int arg2, int arg3, const MapLabelSize& mapLabelSize)
        : eastl::string(*str), field_32(arg2), field_36(arg3), field_40(mapLabelSize.field_0) {}

} // namespace jag::oldscape::rs2lib::worldmap
