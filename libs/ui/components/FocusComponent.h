// libs/ui/components/FocusComponent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::ui {
    class FocusComponent {
    public:
        // virtual methods in vtable order
        virtual ~FocusComponent();
        virtual GetAssociatedComponent();
        virtual HandleKeyInput(int, int, unsigned int);
        IsKeyReceiver() const;
        IsAssociatedComponent(shared_ptr<Component> const&) const;
        NotifyFocusGain();
        FocusComponent();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    FocusComponent::~FocusComponent();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    FocusComponent::HandleKeyInput(int, int, unsigned int);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    FocusComponent::IsKeyReceiver() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    FocusComponent::IsAssociatedComponent(shared_ptr<Component> const&) const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    FocusComponent::NotifyFocusGain();

    // 0x1002a75f0: the linker folded this into oldscape::sound::DelayedStream::SubstreamStart(), which has identical code
    FocusComponent::GetAssociatedComponent();

    // 0x10068d830, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // FocusComponent::FocusComponent()
    void FocusComponent::FocusComponent() {
        field_0 = PTR_vtable_100ee7d80 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    FocusComponent::~FocusComponent();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    FocusComponent::~FocusComponent();

} // namespace jag::ui

namespace jag::fixedfunction {
    // 0x100691c60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
