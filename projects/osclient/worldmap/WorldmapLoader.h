// projects/osclient/worldmap/WorldmapLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::worldmap {
    class WorldmapLoader {
    public:
        ~WorldmapLoader();
        IsLoadComplete();
        int GetProgress();
        int Load();
        void SwitchMapArea(eastl::string const&);
        WorldmapLoader(jagex3::Js5*);

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[32];
        Js5* field_32;             // offset 32
        int m_progress;            // offset 40
        undefined1 m_loadComplete; // offset 44
        char _unknown_45[3];
    };

} // namespace jag::oldscape::worldmap
