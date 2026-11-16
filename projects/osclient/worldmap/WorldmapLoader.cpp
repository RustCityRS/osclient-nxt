// projects/osclient/worldmap/WorldmapLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "WorldmapLoader.h"

namespace jag::oldscape::worldmap {
    // 0x100024070: WorldmapLoader::~WorldmapLoader() has the same machine code as eastl::pair<eastl::string, option::IOption*>::~pair()

    // 0x100026940
    bool WorldmapLoader::IsLoadComplete() {
        return m_loadComplete;
    }

    // 0x100027e70
    int WorldmapLoader::GetProgress() {
        return m_progress;
    }

    // 0x100028270
    int WorldmapLoader::Load() {
        Js5* pJVar1;
        bool cVar2;
        char* pcVar3;

        if (m_progress < 33) {
            pJVar1 = field_32;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar2 = pJVar1->RequestDownload("compositemap", pcVar3);
            if (!cVar2)
                goto LAB_100028331;
            m_progress = 33;
        }
        if (m_progress == 33) {
            pJVar1 = field_32;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar2 = pJVar1->GetDoesFileExist("compositemap", pcVar3);
            if (cVar2) {
                pJVar1 = field_32;
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar2 = pJVar1->RequestDownload("compositetexture", pcVar3);
                if (!cVar2)
                    goto LAB_100028331;
            }
            m_progress = 66;
        }
        if (m_progress == 66) {
            pJVar1 = field_32;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar2 = pJVar1->RequestDownload(pcVar3, "labels");
            if (cVar2) {
                m_progress = 100;
                m_loadComplete = 1;
            }
        }
    LAB_100028331:
        return m_progress;
    }

    // 0x100029740
    void WorldmapLoader::SwitchMapArea(const eastl::string& str) {
        if (str.empty() == '\0') {
            if (!str == *this) {
                *this = str;
                m_progress = 0;
                m_loadComplete = 0;
                Load();
            }
        }
    }

    // 0x100029980
    WorldmapLoader::WorldmapLoader(jagex3::Js5* js5)
        : eastl::string(), field_32(js5), m_progress(0), m_loadComplete(0) {}

    // 0x10002dfe0: WorldmapLoader::~WorldmapLoader() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

} // namespace jag::oldscape::worldmap
