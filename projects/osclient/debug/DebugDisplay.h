// projects/osclient/debug/DebugDisplay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    template <typename...> // 1 instantiations, e.g. <RSevenDebugDisplay>
    class DebugDisplay {
    public:
        // virtual methods in vtable order
        virtual void DrawDebug();
        DebugDisplay();
        ~DebugDisplay();
        void SetVisible(bool arg1);
        static int64_t m_self; // = 0
    };

    // 0x100f36f48
    int64_t DebugDisplay<RSevenDebugDisplay>::m_self = 0;

    // 0x1000620c0
    DebugDisplay<RSevenDebugDisplay>::DebugDisplay() : jag::debug::DebugUIElement() {

        new ((this + 2)) eastl::string("");
        if (*(long*)PTR_m_self_100ee6ae0 != 0) {
            LogAssert("!m_self",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "DebugDisplay.h",
                      19, "Attempted to instantiate multiple instances of debug display.");
        }
    }

    // 0x100062250
    DebugDisplay<RSevenDebugDisplay>::~DebugDisplay() {
        *(uint64_t*)PTR_m_self_100ee6ae0 = 0;
        ((this + 2))->~basic_string();
    }

    // 0x100062a40
    void DebugDisplay<RSevenDebugDisplay>::DrawDebug() {
        char* str;

        if (*(char*)&this[6]._vptr != '\0') {
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (ImGui::Begin(str, (this + 6), 0) != '\0') {
                (*this->_vptr[1]._dtor)(this);
            }
            ImGui::End();
        }
    }

    // 0x1000b0520
    void DebugDisplay<RSevenDebugDisplay>::SetVisible(bool arg1) {
        RSevenDebugDisplay* rSevenDebugDisplay;
        DebugUIManager* this_00;
        unique_ptr<jag::debug::DebugUIElement> local_40;
        unique_ptr<RSevenDebugDisplay> local_38;

        uint8_t* puVar1 = PTR_m_self_100ee6ae0;
        if (*(long*)PTR_m_self_100ee6ae0 == 0) {
            rSevenDebugDisplay = (RSevenDebugDisplay*)operator new(448);
            new (rSevenDebugDisplay) RSevenDebugDisplay();
            *(RSevenDebugDisplay**)puVar1 = rSevenDebugDisplay;
            this_00 = (DebugUIManager*)rSevenDebugDisplay->Instance();
            local_38.unique_ptr<true, void>(*(RSevenDebugDisplay**)puVar1);
            local_40.unique_ptr<RSevenDebugDisplay, std::default_delete<RSevenDebugDisplay>, void, void>(local_38);
            this_00->TransferOwnership(&local_40);
        }
        *(bool*)(*(long*)puVar1 + 48) = arg1;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100062170
    shared_ptr_if_not_array<oldscape::FileRSevenDebugPresetProvider>::type
    make_shared<oldscape::FileRSevenDebugPresetProvider>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        FileRSevenDebugPresetProvider* local_28[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::FileRSevenDebugPresetProvider>::type result;
        } else {
            local_28[0] = placement_new<oldscape::FileRSevenDebugPresetProvider>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>, int,
                              oldscape::FileRSevenDebugPresetProvider*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
