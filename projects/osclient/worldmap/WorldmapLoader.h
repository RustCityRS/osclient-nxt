// projects/osclient/worldmap/WorldmapLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::worldmap {
    class WorldmapLoader {
    public:
        ~WorldmapLoader();
        bool IsLoadComplete();
        int GetProgress();
        int Load();
        void SwitchMapArea(const eastl::string& str);
        WorldmapLoader(jagex3::Js5* js5);

    private:
        uint8_t _unknown_0[32];
        Js5* field_32;
        int m_progress;
        uint8_t m_loadComplete;
        uint8_t _unknown_45[3];
    };

} // namespace jag::oldscape::worldmap
