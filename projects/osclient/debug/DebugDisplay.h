// projects/osclient/debug/DebugDisplay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    template <typename...> // 1 instantiations, e.g. <RSevenDebugDisplay>
    class DebugDisplay {
    public:
        // virtual methods in vtable order
        virtual void DrawDebug();
        DebugDisplay();
        ~DebugDisplay();
        void SetVisible(bool);
        static /* 8 bytes */ m_self; // = 0
    };

    // 0x100f36f48, 8 bytes, __data
    DebugDisplay<RSevenDebugDisplay>::m_self = 0;

    // 0x1000620c0, 176 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugDisplay<RSevenDebugDisplay>::DebugDisplay()
    void DebugDisplay<RSevenDebugDisplay>::DebugDisplay() {
        allocator local_28[8];

        new (this) jag::debug::DebugUIElement();
        *(undefined**)this = PTR_vtable_100ee88d8 + 16;
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new ((this + 16)) eastl::string("", local_28);
        this[48] = (DebugDisplay<RSevenDebugDisplay>)0;
        if (*(long*)PTR_m_self_100ee6ae0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_self",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "DebugDisplay.h",
                      19, "Attempted to instantiate multiple instances of debug display.");
        }
    }

    // 0x100062250, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // DebugDisplay<RSevenDebugDisplay>::~DebugDisplay()
    void DebugDisplay<RSevenDebugDisplay>::~DebugDisplay() {
        *(undefined**)this = PTR_vtable_100ee88d8 + 16;
        *(undefined8*)PTR_m_self_100ee6ae0 = 0;
        ((this + 16))->~basic_string();
        ~DebugUIElement();
    }

    // 0x100062a40, 80 bytes, inline, placed by class name
    // DebugDisplay<RSevenDebugDisplay>::DrawDebug()
    void DebugDisplay<RSevenDebugDisplay>::DrawDebug() {
        char* pcVar2;

        if (this[48] != (DebugDisplay<RSevenDebugDisplay>)0) {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (ImGui::Begin(pcVar2, (bool*)(this + 48), 0) != '\0') {
                (**(code**)(*(long*)this + 48))(this);
            }
            ImGui::End();
        }
    }

    // 0x1000b0520, 208 bytes, inline, placed by class name
    // DebugDisplay<RSevenDebugDisplay>::SetVisible(bool)
    void DebugDisplay<RSevenDebugDisplay>::SetVisible(bool param_1) {
        undefined* puVar1;
        RSevenDebugDisplay* this;
        DebugUIManager* pDVar2;
        RSevenDebugDisplay* this_00;
        unique_ptr<jag::debug::DebugUIElement, std::default_delete<jag::debug::DebugUIElement>> local_40[8];
        unique_ptr<RSevenDebugDisplay, std::default_delete<RSevenDebugDisplay>> local_38[8];

        puVar1 = PTR_m_self_100ee6ae0;
        if (*(long*)PTR_m_self_100ee6ae0 == 0) {
            this = operator_new(448);
            this_00 = this;
            RSevenDebugDisplay::RSevenDebugDisplay(this);
            *(RSevenDebugDisplay**)puVar1 = this;
            pDVar2 = (DebugUIManager*)this_00->Instance();
            std::unique_ptr<RSevenDebugDisplay, std::default_delete<RSevenDebugDisplay>>::unique_ptr<true, void>(
                local_38, *(RSevenDebugDisplay**)puVar1);
            std::unique_ptr<jag::debug::DebugUIElement, std::default_delete<jag::debug::DebugUIElement>>::unique_ptr<
                RSevenDebugDisplay, std::default_delete<RSevenDebugDisplay>, void, void>(local_40,
                                                                                         (unique_ptr*)local_38);
            pDVar2->TransferOwnership(local_40);
            std::unique_ptr<jag::debug::DebugUIElement, std::default_delete<jag::debug::DebugUIElement>>::~unique_ptr(
                local_40);
            std::unique_ptr<RSevenDebugDisplay, std::default_delete<RSevenDebugDisplay>>::~unique_ptr(local_38);
        }
        *(bool*)(*(long*)puVar1 + 48) = param_1;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100062170, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::FileRSevenDebugPresetProvider>::type make_shared<oldscape::FileRSevenDebugPresetProvider>()
    jag* make_shared<oldscape::FileRSevenDebugPresetProvider>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        FileRSevenDebugPresetProvider* local_28[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::FileRSevenDebugPresetProvider>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>, int,
                                   oldscape::FileRSevenDebugPresetProvider*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
