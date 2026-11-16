// libs/oldscape/rs2lib/worldmap/MapTextLabel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib::worldmap {
    class MapTextLabel {
    public:
        ~MapTextLabel();
        MapTextLabel(eastl::string, int, int, MapLabelSize const&);

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[32];
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined8 field_40; // offset 40
    };

    // 0x100024070: the linker folded this into eastl::pair<eastl::string, option::IOption*>::~pair(), which has identical code
    MapTextLabel::~MapTextLabel();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    MapTextLabel::~MapTextLabel();

    // 0x100212920, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MapTextLabel::MapTextLabel(eastl::string, int, int, MapLabelSize const&): jumps straight to the base-object constructor

    // 0x100216f70, 64 bytes, base-object constructor, inline, placed by class name
    // MapTextLabel::MapTextLabel(eastl::string, int, int, MapLabelSize const&)
    void MapTextLabel::MapTextLabel(basic_string* param_2, undefined4 param_3, undefined4 param_4,
                                    undefined8* param_5) {
        new (this) eastl::string(param_2);
        field_32 = param_3;
        field_36 = param_4;
        field_40 = *param_5;
    }

} // namespace jag::oldscape::rs2lib::worldmap
