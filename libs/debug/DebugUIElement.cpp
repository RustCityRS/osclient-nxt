// libs/debug/DebugUIElement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.debug

#include "DebugUIElement.h"

namespace jag::debug {
    // 0x100009e70: DebugUIElement::LogicDebug(bool) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DebugUIElement::DrawDebugMainMenu() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100664980: DebugUIElement::NotifyDebugRegistration(bool) has the same machine code as audio::SoundResource::SetStreamed(bool)

    // 0x100720750
    void DebugUIElement::RegisterDebug() {
        if (field_8 == false) {
            ((DebugUIManager*)Instance())->Register(this);
            if (field_8 == false) {
                LogAssert(
                    "m_registered",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIElement.cpp",
                    11, nullptr);
            }
        }
    }

    // 0x100720880
    void DebugUIElement::UnregisterDebug() {
        if (field_8 != false) {
            ((DebugUIManager*)Instance())->Unregister(this);
            if (field_8 != false) {
                LogAssert(
                    "!m_registered",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIElement.cpp",
                    20, nullptr);
            }
        }
    }

    // 0x100c92b50: DebugUIElement::~DebugUIElement() has the same machine code as InlineFatalBreak()

} // namespace jag::debug

namespace jag {
    // 0x100721190
    shared_ptr_if_not_array<render::Texture2D>::type
    make_shared<render::Texture2D, char const (&)[11]>(char const (&arg1)[11]) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        Texture2D* local_30[2];

        auto arg1_00 = aligned_alloc(544, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<render::Texture2D>::type result;
        } else {
            local_30[0] = placement_new<render::Texture2D, char const(&)[31]>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::Texture2D>, int, render::Texture2D*&>(arg1_00, &local_34,
                                                                                               local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
