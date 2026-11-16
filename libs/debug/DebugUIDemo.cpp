// libs/debug/DebugUIDemo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.debug

#include "DebugUIDemo.h"

namespace jag::debug {
    // 0x100720550
    void DebugUIDemo::DrawDebugMainMenu() {
        if (ImGui::BeginMenu("Debug", true) != '\0') {
            ImGui::MenuItem("ImGui Demo", nullptr, &field_9, true);
            ImGui::EndMenu();
        }
    }

    // 0x1007205a0
    void DebugUIDemo::DrawDebug() {
        if (field_9 != false) {
            ImGui::ShowDemoWindow(&field_9);
        }
    }

    // 0x1007205c0
    void DebugUIDemo::Show() {
        DebugUIDemo* debugUIDemo;
        DebugUIManager* this_00;
        unique_ptr<DebugUIElement> local_28;
        unique_ptr<DebugUIDemo> local_20;

        if (Show()::registered == '\0') {
            Show()::registered = '\x01';
            debugUIDemo = (DebugUIDemo*)operator new(16);
            DebugUIDemo(debugUIDemo);
            &local_20->unique_ptr<true, void>(debugUIDemo);
            this_00 = (DebugUIManager*)&local_20->Instance();
            local_28.unique_ptr<DebugUIDemo, std::default_delete<DebugUIDemo>, void, void>(local_20);
            this_00->TransferOwnership(&local_28);
        }
    }

} // namespace jag::debug
