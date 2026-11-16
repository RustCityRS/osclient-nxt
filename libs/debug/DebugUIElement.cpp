// libs/debug/DebugUIElement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.debug

#include "DebugUIElement.h"

namespace jag::debug {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DebugUIElement::LogicDebug(bool);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DebugUIElement::DrawDebugMainMenu();

    // 0x100664980: the linker folded this into audio::SoundResource::SetStreamed(bool), which has identical code
    DebugUIElement::NotifyDebugRegistration(bool);

    // 0x100720750, 80 bytes, placed by class name and debug map
    // DebugUIElement::RegisterDebug()
    void DebugUIElement::RegisterDebug() {
        DebugUIManager* this_00;

        if (field_8 == false) {
            this_00 = (DebugUIManager*)Instance();
            this_00->Register(this);
            if (field_8 == false) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_registered",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIElement.cpp",
                    11, (char*)0);
            }
        }
    }

    // 0x100720880, 80 bytes, placed by class name and debug map
    // DebugUIElement::UnregisterDebug()
    void DebugUIElement::UnregisterDebug() {
        DebugUIManager* this_00;

        if (field_8 != false) {
            this_00 = (DebugUIManager*)Instance();
            this_00->Unregister(this);
            if (field_8 != false) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "!m_registered",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIElement.cpp",
                    20, (char*)0);
            }
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugUIElement::~DebugUIElement();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugUIElement::~DebugUIElement();

} // namespace jag::debug

namespace jag {
    // 0x100721190, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::Texture2D>::type make_shared<render::Texture2D, char const (&) [11]>(char const (&) [11])
    /* shared_ptr_if_not_array<render::Texture2D>::type
   make_shared<render::Texture2D, char const (&) [31]>(char const (&) [31]) */

    jag* make_shared<render::Texture2D, char const (&)[31]>(char* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Texture2D* local_30[2];

        pvVar1 = (void*)aligned_alloc(544, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<render::Texture2D, char const(&)[31]>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<render::Texture2D>, int, render::Texture2D*&>(pvVar1, &local_34,
                                                                                                    local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
