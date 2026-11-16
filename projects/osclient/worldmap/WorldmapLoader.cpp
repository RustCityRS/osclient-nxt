// projects/osclient/worldmap/WorldmapLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "WorldmapLoader.h"

namespace jag::oldscape::worldmap {
    // 0x100024070: the linker folded this into eastl::pair<eastl::string, option::IOption*>::~pair(), which has identical code
    WorldmapLoader::~WorldmapLoader();

    // 0x100026940, 16 bytes, placed by class name and debug map
    // WorldmapLoader::IsLoadComplete()
    undefined1 WorldmapLoader::IsLoadComplete() {
        return m_loadComplete;
    }

    // 0x100027e70, 16 bytes, placed by class name
    // WorldmapLoader::GetProgress()
    int WorldmapLoader::GetProgress() {
        return m_progress;
    }

    // 0x100028270, 208 bytes, placed by class name
    // WorldmapLoader::Load()
    int WorldmapLoader::Load() {
        Js5* pJVar1;
        char cVar2;
        char* pcVar3;

        if (m_progress < 33) {
            pJVar1 = field_32;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar2 = pJVar1->RequestDownload("compositemap", pcVar3);
            if (cVar2 == '\0')
                goto LAB_100028331;
            m_progress = 33;
        }
        if (m_progress == 33) {
            pJVar1 = field_32;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar2 = pJVar1->GetDoesFileExist("compositemap", pcVar3);
            if (cVar2 != '\0') {
                pJVar1 = field_32;
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar2 = pJVar1->RequestDownload("compositetexture", pcVar3);
                if (cVar2 == '\0')
                    goto LAB_100028331;
            }
            m_progress = 66;
        }
        if (m_progress == 66) {
            pJVar1 = field_32;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar2 = pJVar1->RequestDownload(pcVar3, "labels");
            if (cVar2 != '\0') {
                m_progress = 100;
                m_loadComplete = 1;
            }
        }
    LAB_100028331:
        return m_progress;
    }

    // 0x100029740, 80 bytes, placed by class name
    // WorldmapLoader::SwitchMapArea(eastl::string const&)
    void WorldmapLoader::SwitchMapArea(basic_string* param_1) {
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            if (!eastl::operator==(param_1, (basic_string*)this)) {
                eastl::string::operator=((eastl::string*)this, param_1);
                m_progress = 0;
                m_loadComplete = 0;
                Load(this);
            }
        }
    }

    // 0x100029980, 48 bytes, base-object constructor, placed by class name
    // WorldmapLoader::WorldmapLoader(jagex3::Js5*)
    void WorldmapLoader::WorldmapLoader(Js5* param_1) {
        new (this) eastl::string();
        field_32 = param_1;
        m_progress = 0;
        m_loadComplete = 0;
    }

    // 0x1000299b0, 16 bytes, complete-object constructor, placed by class name
    // WorldmapLoader::WorldmapLoader(jagex3::Js5*): jumps straight to the base-object constructor

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    WorldmapLoader::~WorldmapLoader();

} // namespace jag::oldscape::worldmap
