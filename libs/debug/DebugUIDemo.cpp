// libs/debug/DebugUIDemo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.debug

#include "DebugUIDemo.h"

namespace jag::debug {
    // 0x100720550, 80 bytes, placed by class name and debug map
    // DebugUIDemo::DrawDebugMainMenu()
    void DebugUIDemo::DrawDebugMainMenu() {
        if (ImGui::BeginMenu("Debug", true) != '\0') {
            ImGui::MenuItem("ImGui Demo", (char*)0, &field_9, true);
            ImGui::EndMenu();
        }
    }

    // 0x1007205a0, 32 bytes, placed by class name and debug map
    // DebugUIDemo::DrawDebug()
    void DebugUIDemo::DrawDebug() {
        if (field_9 != false) {
            ImGui::ShowDemoWindow(&field_9);
        }
    }

    // 0x1007205c0, 176 bytes, placed by class name and debug map
    // DebugUIDemo::Show()
    void DebugUIDemo::Show() {
        DebugUIDemo* this;
        DebugUIManager* pDVar1;
        unique_ptr<DebugUIDemo, std::default_delete<DebugUIDemo>>* this_00;
        unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>> local_28[8];
        unique_ptr<DebugUIDemo, std::default_delete<DebugUIDemo>> local_20[8];

        if (Show()::registered == '\0') {
            Show()::registered = '\x01';
            this = operator_new(16);
            DebugUIDemo(this);
            this_00 = local_20;
            std::unique_ptr<DebugUIDemo, std::default_delete<DebugUIDemo>>::unique_ptr<true, void>(this_00, this);
            pDVar1 = (DebugUIManager*)this_00->Instance();
            std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>::unique_ptr<
                DebugUIDemo, std::default_delete<DebugUIDemo>, void, void>(local_28, (unique_ptr*)local_20);
            pDVar1->TransferOwnership(local_28);
            std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>::~unique_ptr(local_28);
            std::unique_ptr<DebugUIDemo, std::default_delete<DebugUIDemo>>::~unique_ptr(local_20);
        }
    }

} // namespace jag::debug
